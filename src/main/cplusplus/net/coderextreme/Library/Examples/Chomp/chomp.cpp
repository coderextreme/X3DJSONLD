#define False false
#define True true
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
int main(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(CString("Full"));
X3D0.setVersion(CString("3.3"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(CString("comment"));
meta2.setContent(CString("World of Titania"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(CString("created"));
meta3.setContent(CString("Mon, 09 Nov 2015 13:19:34 GMT"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("creator"));
meta4.setContent(CString("Holger Seelig"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("generator"));
meta5.setContent(CString("Titania V1.2.1, http://titania.create3000.de"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("modified"));
meta6.setContent(CString("Tue, 10 Nov 2015 08:03:08 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
WorldInfo& WorldInfo8 =  WorldInfo();
WorldInfo8.setTitle(CString("chomp"));
MetadataSet& MetadataSet9 =  MetadataSet();
MetadataSet9.X3DNode::setName(CString("Titania"));
MetadataSet9.setDEF(CString("Titania"));
MetadataSet9.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataSet& MetadataSet10 =  MetadataSet();
MetadataSet10.X3DNode::setName(CString("NavigationInfo"));
MetadataSet10.setDEF(CString("NavigationInfo"));
MetadataSet10.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataString& MetadataString11 =  MetadataString();
MetadataString11.X3DNode::setName(CString("type"));
MetadataString11.setDEF(CString("type"));
MetadataString11.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataString11.setValue(new CString[]{CString("EXAMINE")}, 1);
MetadataSet10.setValue((X3DNode *)&MetadataString11);

MetadataSet9.setValue((X3DNode *)&MetadataSet10);

MetadataSet& MetadataSet12 =  MetadataSet();
MetadataSet12.X3DNode::setName(CString("Viewpoint"));
MetadataSet12.setDEF(CString("Viewpoint"));
MetadataSet12.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble& MetadataDouble13 =  MetadataDouble();
MetadataDouble13.X3DNode::setName(CString("position"));
MetadataDouble13.setDEF(CString("position"));
MetadataDouble13.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble13.setValue(new double[]{0,-3.14299988746643,5.71950006484985}, 3);
MetadataSet12.setValue((X3DNode *)&MetadataDouble13);

MetadataDouble& MetadataDouble14 =  MetadataDouble();
MetadataDouble14.X3DNode::setName(CString("orientation"));
MetadataDouble14.setDEF(CString("orientation"));
MetadataDouble14.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble14.setValue(new double[]{1,0,0,0.0134963877499104}, 4);
MetadataSet12.setValue((X3DNode *)&MetadataDouble14);

MetadataDouble& MetadataDouble15 =  MetadataDouble();
MetadataDouble15.X3DNode::setName(CString("centerOfRotation"));
MetadataDouble15.setDEF(CString("centerOfRotation"));
MetadataDouble15.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble15.setValue(new double[]{0,0,0}, 3);
MetadataSet12.setValue((X3DNode *)&MetadataDouble15);

MetadataSet9.setValue((X3DNode *)&MetadataSet12);

WorldInfo8.setMetadata(&MetadataSet9);

Scene7.addChild(&WorldInfo8);

Sound& Sound16 =  Sound();
Sound16.setIntensity(0.5);
Sound16.setSpatialize(False);
Sound16.setMaxBack(10000);
Sound16.setMaxFront(10000);
AudioClip& AudioClip17 =  AudioClip();
AudioClip17.setDEF(CString("bubbleSound"));
AudioClip17.setUrl(new CString[]{CString("bubble.wav")}, 1);
AudioClip17.setStartTime(1447142588.57546);
AudioClip17.setStopTime(1447142588.57546);
Sound16.setSource(AudioClip17);

Scene7.addChild(&Sound16);

Sound& Sound18 =  Sound();
Sound18.setIntensity(0.5);
Sound18.setSpatialize(False);
Sound18.setMaxBack(10000);
Sound18.setMaxFront(10000);
AudioClip& AudioClip19 =  AudioClip();
AudioClip19.setDEF(CString("bubbleSound2"));
AudioClip19.setUrl(new CString[]{CString("bubble2.wav")}, 1);
Sound18.setSource(AudioClip19);

Scene7.addChild(&Sound18);

Sound& Sound20 =  Sound();
Sound20.setDEF(CString("Sound1"));
Sound20.setSpatialize(False);
Sound20.setMaxBack(10000);
Sound20.setMaxFront(10000);
Sound20.setPriority(1);
AudioClip& AudioClip21 =  AudioClip();
AudioClip21.setDEF(CString("chompSound"));
AudioClip21.setUrl(new CString[]{CString("chomp.wav")}, 1);
Sound20.setSource(AudioClip21);

Scene7.addChild(&Sound20);

Sound& Sound22 =  Sound();
Sound22.setDEF(CString("Sound2"));
Sound22.setSpatialize(False);
Sound22.setMaxBack(10000);
Sound22.setMaxFront(10000);
AudioClip& AudioClip23 =  AudioClip();
AudioClip23.setDEF(CString("boomSound"));
AudioClip23.setUrl(new CString[]{CString("boom.wav")}, 1);
Sound22.setSource(AudioClip23);

Scene7.addChild(&Sound22);

Sound& Sound24 =  Sound();
Sound24.setDEF(CString("Sound3"));
Sound24.setSpatialize(False);
Sound24.setMaxBack(10000);
Sound24.setMaxFront(10000);
AudioClip& AudioClip25 =  AudioClip();
AudioClip25.setDEF(CString("burpSound"));
AudioClip25.setUrl(new CString[]{CString("burp.wav")}, 1);
Sound24.setSource(AudioClip25);

Scene7.addChild(&Sound24);

Sound& Sound26 =  Sound();
Sound26.setDEF(CString("Sound4"));
Sound26.setSpatialize(False);
Sound26.setMaxBack(10000);
Sound26.setMaxFront(10000);
AudioClip& AudioClip27 =  AudioClip();
AudioClip27.setDEF(CString("oopsSound"));
AudioClip27.setUrl(new CString[]{CString("oops.wav")}, 1);
Sound26.setSource(AudioClip27);

Scene7.addChild(&Sound26);

TimeSensor& TimeSensor28 =  TimeSensor();
TimeSensor28.setDEF(CString("BubbleTimer"));
TimeSensor28.setCycleInterval(0.005);
TimeSensor28.setLoop(True);
TimeSensor28.setStartTime(1);
Scene7.addChild(&TimeSensor28);

Script& Script29 =  Script();
Script29.setDEF(CString("BubbleScript"));
field& field30 =  field();
field30.setName(CString("inputFraction"));
field30.setAccessType(CString("inputOnly"));
field30.setType(CString("SFFloat"));
Script29.addChild(&field30);

field& field31 =  field();
field31.setName(CString("playSound"));
field31.setAccessType(CString("outputOnly"));
field31.setType(CString("SFTime"));
Script29.addChild(&field31);

field& field32 =  field();
field32.setName(CString("playSound2"));
field32.setAccessType(CString("outputOnly"));
field32.setType(CString("SFTime"));
Script29.addChild(&field32);


Script29.setSourceCode(CString("javascript:")+
_T("		function inputFraction(f, time){")+
_T("			if (f > .8) {")+
_T("				if (f > .9) {")+
_T("					playSound=time;")+
_T("				} else {")+
_T("					playSound2=time;")+
_T("				}")+
_T("			}")+
_T("		}"));
Scene7.addChild(&Script29);

DirectionalLight& DirectionalLight33 =  DirectionalLight();
DirectionalLight33.setAmbientIntensity(0.3);
DirectionalLight33.setDirection(new float[]{-1,-1,-1});
Scene7.addChild(&DirectionalLight33);

DirectionalLight& DirectionalLight34 =  DirectionalLight();
DirectionalLight34.setDirection(new float[]{54,-14,-7});
Scene7.addChild(&DirectionalLight34);

DirectionalLight& DirectionalLight35 =  DirectionalLight();
DirectionalLight35.setColor(new float[]{0,0.3765,0.4588});
DirectionalLight35.setDirection(new float[]{-43,7,90});
Scene7.addChild(&DirectionalLight35);

Inline& Inline36 =  Inline();
Inline36.setUrl(new CString[]{CString("canyonv.x3d")}, 1);
Scene7.addChild(&Inline36);

Viewpoint& Viewpoint37 =  Viewpoint();
Viewpoint37.setDEF(CString("The_Start"));
Viewpoint37.setDescription(CString("The Start"));
Viewpoint37.setPosition(new float[]{0,-3.143,5.7195});
Viewpoint37.setOrientation(new float[]{1,0,0,0.0134964});
Scene7.addChild(&Viewpoint37);

Viewpoint& Viewpoint38 =  Viewpoint();
Viewpoint38.setDEF(CString("Hoffa_cam"));
Viewpoint38.setDescription(CString("Hoffa cam"));
Viewpoint38.setPosition(new float[]{-123.2,-8.351,-300.2});
Viewpoint38.setOrientation(new float[]{-0.615097,0.785295,0.0704796,0.2898});
Scene7.addChild(&Viewpoint38);

NavigationInfo& NavigationInfo39 =  NavigationInfo();
NavigationInfo39.setDEF(CString("NavInfo01"));
NavigationInfo39.setType(new CString[]{CString(", "), CString("FLY, "), CString("WALKEXAMINE")}, 3);
NavigationInfo39.setAvatarSize(new float[]{1.4,1,0.75}, 3);
NavigationInfo39.setSpeed(7.5);
NavigationInfo39.setHeadlight(False);
NavigationInfo39.setVisibilityLimit(50);
Scene7.addChild(&NavigationInfo39);

Background& Background40 =  Background();
Background40.setDEF(CString("Background01"));
Background40.setSkyColor(new float[]{0.007843,0.3922,0.6157}, 3);
Scene7.addChild(&Background40);

Fog& Fog41 =  Fog();
Fog41.setDEF(CString("Fog01"));
Fog41.setColor(new float[]{0.007843,0.3922,0.6157});
Fog41.setVisibilityRange(50);
Scene7.addChild(&Fog41);

TimeSensor& TimeSensor42 =  TimeSensor();
TimeSensor42.setDEF(CString("EatTimer"));
TimeSensor42.setCycleInterval(4);
Scene7.addChild(&TimeSensor42);

TimeSensor& TimeSensor43 =  TimeSensor();
TimeSensor43.setDEF(CString("KillTimer"));
TimeSensor43.setCycleInterval(0.65);
Scene7.addChild(&TimeSensor43);

Collision& Collision44 =  Collision();
Collision44.setEnabled(False);
Transform& Transform45 =  Transform();
Transform45.setDEF(CString("Inline_seaweed01-ROOT"));
Transform45.setTranslation(new float[]{-5.15,-13.29,-28.52});
Inline& Inline46 =  Inline();
Inline46.setUrl(new CString[]{CString("seaweed.x3d")}, 1);
Transform45.addChild(&Inline46);

Collision44.addChildren(&Transform45);

Transform& Transform47 =  Transform();
Transform47.setDEF(CString("Inline_seaweed02-ROOT"));
Transform47.setTranslation(new float[]{8.169,-13.02,-83.63});
Inline& Inline48 =  Inline();
Inline48.setUrl(new CString[]{CString("seaweed.x3d")}, 1);
Transform47.addChild(&Inline48);

Collision44.addChildren(&Transform47);

Transform& Transform49 =  Transform();
Transform49.setDEF(CString("Inline_seaweed03-ROOT"));
Transform49.setTranslation(new float[]{-10.84,-13.97,-229.5});
Inline& Inline50 =  Inline();
Inline50.setUrl(new CString[]{CString("seaweed.x3d")}, 1);
Transform49.addChild(&Inline50);

Collision44.addChildren(&Transform49);

Transform& Transform51 =  Transform();
Transform51.setDEF(CString("Inline_seaweed04-ROOT"));
Transform51.setTranslation(new float[]{-115.2,-13.97,-265.9});
Inline& Inline52 =  Inline();
Inline52.setUrl(new CString[]{CString("seaweed.x3d")}, 1);
Transform51.addChild(&Inline52);

Collision44.addChildren(&Transform51);

Transform& Transform53 =  Transform();
Transform53.setDEF(CString("Inline_seaweed05-ROOT"));
Transform53.setTranslation(new float[]{-133.7,-13.16,-352});
Inline& Inline54 =  Inline();
Inline54.setUrl(new CString[]{CString("seaweed.x3d")}, 1);
Transform53.addChild(&Inline54);

Collision44.addChildren(&Transform53);

Transform& Transform55 =  Transform();
Transform55.setDEF(CString("Inline_seaweed06-ROOT"));
Transform55.setTranslation(new float[]{-71.63,-14.04,-477.2});
Inline& Inline56 =  Inline();
Inline56.setUrl(new CString[]{CString("seaweed.x3d")}, 1);
Transform55.addChild(&Inline56);

Collision44.addChildren(&Transform55);

Transform& Transform57 =  Transform();
Transform57.setDEF(CString("Inline_seaweed07-ROOT"));
Transform57.setTranslation(new float[]{-7.091,-13.35,-514.6});
Inline& Inline58 =  Inline();
Inline58.setUrl(new CString[]{CString("seaweed.x3d")}, 1);
Transform57.addChild(&Inline58);

Collision44.addChildren(&Transform57);

Transform& Transform59 =  Transform();
Transform59.setDEF(CString("Inline_seaweed08-ROOT"));
Transform59.setTranslation(new float[]{3.819,-13.82,-597.6});
Inline& Inline60 =  Inline();
Inline60.setUrl(new CString[]{CString("seaweed.x3d")}, 1);
Transform59.addChild(&Inline60);

Collision44.addChildren(&Transform59);

Scene7.addChild(&Collision44);

Transform& Transform61 =  Transform();
Transform61.setDEF(CString("Inline_skeleton-ROOT"));
Transform61.setTranslation(new float[]{-125.2,-14.99,-311.4});
Collision& Collision62 =  Collision();
Shape& Shape63 =  Shape();
Box& Box64 =  Box();
Box64.setSize(new float[]{4,20,10});
Shape63.setGeometry(&Box64);

Collision62.addChildren(Shape63);

VisibilitySensor& VisibilitySensor65 =  VisibilitySensor();
VisibilitySensor65.setDEF(CString("skeletonVisible"));
VisibilitySensor65.setSize(new float[]{1,20,1});
Collision62.addChildren(&VisibilitySensor65);

Inline& Inline66 =  Inline();
Inline66.setUrl(new CString[]{CString("skeleton.x3d")}, 1);
Collision62.addChildren(Inline66);

Transform61.addChild(&Collision62);

Scene7.addChild(&Transform61);

Transform& Transform67 =  Transform();
Transform67.setDEF(CString("Inline_bubble01-ROOT"));
Transform67.setTranslation(new float[]{8.131,-15.99,3.069});
Inline& Inline68 =  Inline();
Inline68.setUrl(new CString[]{CString("bubble.x3d")}, 1);
Transform67.addChild(&Inline68);

Scene7.addChild(&Transform67);

Transform& Transform69 =  Transform();
Transform69.setDEF(CString("Inline_bubble02-ROOT"));
Transform69.setTranslation(new float[]{6.463,-15.99,-24.57});
Inline& Inline70 =  Inline();
Inline70.setUrl(new CString[]{CString("bubble.x3d")}, 1);
Transform69.addChild(&Inline70);

Scene7.addChild(&Transform69);

Transform& Transform71 =  Transform();
Transform71.setDEF(CString("Inline_bubble03-ROOT"));
Transform71.setTranslation(new float[]{-4.104,-15.99,-68.02});
Inline& Inline72 =  Inline();
Inline72.setUrl(new CString[]{CString("bubble.x3d")}, 1);
Transform71.addChild(&Inline72);

Scene7.addChild(&Transform71);

Transform& Transform73 =  Transform();
Transform73.setDEF(CString("Inline_bubble04-ROOT"));
Transform73.setTranslation(new float[]{-5.198,-15.99,-112.3});
Inline& Inline74 =  Inline();
Inline74.setUrl(new CString[]{CString("bubble.x3d")}, 1);
Transform73.addChild(&Inline74);

Scene7.addChild(&Transform73);

Transform& Transform75 =  Transform();
Transform75.setDEF(CString("Inline_bubble05-ROOT"));
Transform75.setTranslation(new float[]{8.249,-15.99,-141.4});
Inline& Inline76 =  Inline();
Inline76.setUrl(new CString[]{CString("bubble.x3d")}, 1);
Transform75.addChild(&Inline76);

Scene7.addChild(&Transform75);

Transform& Transform77 =  Transform();
Transform77.setDEF(CString("Inline_bubble06-ROOT"));
Transform77.setTranslation(new float[]{-4.603,-15.99,-167.7});
Inline& Inline78 =  Inline();
Inline78.setUrl(new CString[]{CString("bubble.x3d")}, 1);
Transform77.addChild(&Inline78);

Scene7.addChild(&Transform77);

Transform& Transform79 =  Transform();
Transform79.setDEF(CString("Inline_bubble07-ROOT"));
Transform79.setTranslation(new float[]{-1.222,-15.99,-213.5});
Inline& Inline80 =  Inline();
Inline80.setUrl(new CString[]{CString("bubble.x3d")}, 1);
Transform79.addChild(&Inline80);

Scene7.addChild(&Transform79);

Transform& Transform81 =  Transform();
Transform81.setDEF(CString("Inline_bubble08-ROOT"));
Transform81.setTranslation(new float[]{-16.28,-15.99,-214.4});
Inline& Inline82 =  Inline();
Inline82.setUrl(new CString[]{CString("bubble.x3d")}, 1);
Transform81.addChild(&Inline82);

Scene7.addChild(&Transform81);

Transform& Transform83 =  Transform();
Transform83.setDEF(CString("Inline_bubble09-ROOT"));
Transform83.setTranslation(new float[]{-55.46,-15.99,-252});
Inline& Inline84 =  Inline();
Inline84.setUrl(new CString[]{CString("bubble.x3d")}, 1);
Transform83.addChild(&Inline84);

Scene7.addChild(&Transform83);

Transform& Transform85 =  Transform();
Transform85.setDEF(CString("Inline_bubble10-ROOT"));
Transform85.setTranslation(new float[]{-100.7,-15.99,-249.8});
Inline& Inline86 =  Inline();
Inline86.setUrl(new CString[]{CString("bubble.x3d")}, 1);
Transform85.addChild(&Inline86);

Scene7.addChild(&Transform85);

Transform& Transform87 =  Transform();
Transform87.setDEF(CString("Inline_bubble11-ROOT"));
Transform87.setTranslation(new float[]{-131.4,-15.99,-303.5});
Inline& Inline88 =  Inline();
Inline88.setUrl(new CString[]{CString("bubble.x3d")}, 1);
Transform87.addChild(&Inline88);

Scene7.addChild(&Transform87);

Transform& Transform89 =  Transform();
Transform89.setDEF(CString("Inline_bubble12-ROOT"));
Transform89.setTranslation(new float[]{-121.8,-15.99,-358.8});
Inline& Inline90 =  Inline();
Inline90.setUrl(new CString[]{CString("bubble.x3d")}, 1);
Transform89.addChild(&Inline90);

Scene7.addChild(&Transform89);

Transform& Transform91 =  Transform();
Transform91.setDEF(CString("Inline_bubble13-ROOT"));
Transform91.setTranslation(new float[]{-126.2,-15.99,-440.1});
Inline& Inline92 =  Inline();
Inline92.setUrl(new CString[]{CString("bubble.x3d")}, 1);
Transform91.addChild(&Inline92);

Scene7.addChild(&Transform91);

Transform& Transform93 =  Transform();
Transform93.setDEF(CString("Inline_bubble14-ROOT"));
Transform93.setTranslation(new float[]{-86.44,-15.99,-462.5});
Inline& Inline94 =  Inline();
Inline94.setUrl(new CString[]{CString("bubble.x3d")}, 1);
Transform93.addChild(&Inline94);

Scene7.addChild(&Transform93);

Transform& Transform95 =  Transform();
Transform95.setDEF(CString("Inline_bubble15-ROOT"));
Transform95.setTranslation(new float[]{-48.94,-15.99,-483.8});
Inline& Inline96 =  Inline();
Inline96.setUrl(new CString[]{CString("bubble.x3d")}, 1);
Transform95.addChild(&Inline96);

Scene7.addChild(&Transform95);

Transform& Transform97 =  Transform();
Transform97.setDEF(CString("Inline_bubble16-ROOT"));
Transform97.setTranslation(new float[]{-14.27,-15.99,-497.2});
Inline& Inline98 =  Inline();
Inline98.setUrl(new CString[]{CString("bubble.x3d")}, 1);
Transform97.addChild(&Inline98);

Scene7.addChild(&Transform97);

Transform& Transform99 =  Transform();
Transform99.setDEF(CString("Inline_bubble17-ROOT"));
Transform99.setTranslation(new float[]{-4.255,-15.99,-537.4});
Inline& Inline100 =  Inline();
Inline100.setUrl(new CString[]{CString("bubble.x3d")}, 1);
Transform99.addChild(&Inline100);

Scene7.addChild(&Transform99);

Transform& Transform101 =  Transform();
Transform101.setDEF(CString("Inline_bubble18-ROOT"));
Transform101.setTranslation(new float[]{7.987,-15.99,-584.9});
Inline& Inline102 =  Inline();
Inline102.setUrl(new CString[]{CString("bubble.x3d")}, 1);
Transform101.addChild(&Inline102);

Scene7.addChild(&Transform101);

Transform& Transform103 =  Transform();
Transform103.setDEF(CString("Inline_bubble19-ROOT"));
Transform103.setTranslation(new float[]{-3.237,-15.99,-621.2});
Inline& Inline104 =  Inline();
Inline104.setUrl(new CString[]{CString("bubble.x3d")}, 1);
Transform103.addChild(&Inline104);

Scene7.addChild(&Transform103);

Transform& Transform105 =  Transform();
Transform105.setDEF(CString("Inline_bubble201-ROOT"));
Transform105.setTranslation(new float[]{-15.15,-15.99,-6.77});
Inline& Inline106 =  Inline();
Inline106.setUrl(new CString[]{CString("bubble2.x3d")}, 1);
Transform105.addChild(&Inline106);

Scene7.addChild(&Transform105);

Transform& Transform107 =  Transform();
Transform107.setDEF(CString("Inline_bubble202-ROOT"));
Transform107.setTranslation(new float[]{3.51,-15.99,-31.52});
Inline& Inline108 =  Inline();
Inline108.setUrl(new CString[]{CString("bubble2.x3d")}, 1);
Transform107.addChild(&Inline108);

Scene7.addChild(&Transform107);

Transform& Transform109 =  Transform();
Transform109.setDEF(CString("Inline_bubble203-ROOT"));
Transform109.setTranslation(new float[]{-6.846,-15.99,-62.02});
Inline& Inline110 =  Inline();
Inline110.setUrl(new CString[]{CString("bubble2.x3d")}, 1);
Transform109.addChild(&Inline110);

Scene7.addChild(&Transform109);

Transform& Transform111 =  Transform();
Transform111.setDEF(CString("Inline_bubble204-ROOT"));
Transform111.setTranslation(new float[]{11.8,-15.99,-94.4});
Inline& Inline112 =  Inline();
Inline112.setUrl(new CString[]{CString("bubble2.x3d")}, 1);
Transform111.addChild(&Inline112);

Scene7.addChild(&Transform111);

Transform& Transform113 =  Transform();
Transform113.setDEF(CString("Inline_bubble205-ROOT"));
Transform113.setTranslation(new float[]{-6.296,-15.99,-122.9});
Inline& Inline114 =  Inline();
Inline114.setUrl(new CString[]{CString("bubble2.x3d")}, 1);
Transform113.addChild(&Inline114);

Scene7.addChild(&Transform113);

Transform& Transform115 =  Transform();
Transform115.setDEF(CString("Inline_bubble206-ROOT"));
Transform115.setTranslation(new float[]{-12.13,-15.99,-146.1});
Inline& Inline116 =  Inline();
Inline116.setUrl(new CString[]{CString("bubble2.x3d")}, 1);
Transform115.addChild(&Inline116);

Scene7.addChild(&Transform115);

Transform& Transform117 =  Transform();
Transform117.setDEF(CString("Inline_bubble207-ROOT"));
Transform117.setTranslation(new float[]{8.454,-15.99,-180.3});
Inline& Inline118 =  Inline();
Inline118.setUrl(new CString[]{CString("bubble2.x3d")}, 1);
Transform117.addChild(&Inline118);

Scene7.addChild(&Transform117);

Transform& Transform119 =  Transform();
Transform119.setDEF(CString("Inline_bubble208-ROOT"));
Transform119.setTranslation(new float[]{-6.417,-15.99,-198.3});
Inline& Inline120 =  Inline();
Inline120.setUrl(new CString[]{CString("bubble2.x3d")}, 1);
Transform119.addChild(&Inline120);

Scene7.addChild(&Transform119);

Transform& Transform121 =  Transform();
Transform121.setDEF(CString("Inline_bubble209-ROOT"));
Transform121.setTranslation(new float[]{-6.454,-15.99,-226.6});
Inline& Inline122 =  Inline();
Inline122.setUrl(new CString[]{CString("bubble2.x3d")}, 1);
Transform121.addChild(&Inline122);

Scene7.addChild(&Transform121);

Transform& Transform123 =  Transform();
Transform123.setDEF(CString("Inline_bubble210-ROOT"));
Transform123.setTranslation(new float[]{-30.97,-15.99,-242.6});
Inline& Inline124 =  Inline();
Inline124.setUrl(new CString[]{CString("bubble2.x3d")}, 1);
Transform123.addChild(&Inline124);

Scene7.addChild(&Transform123);

Transform& Transform125 =  Transform();
Transform125.setDEF(CString("Inline_bubble211-ROOT"));
Transform125.setTranslation(new float[]{-76.67,-15.99,-241.7});
Inline& Inline126 =  Inline();
Inline126.setUrl(new CString[]{CString("bubble2.x3d")}, 1);
Transform125.addChild(&Inline126);

Scene7.addChild(&Transform125);

Transform& Transform127 =  Transform();
Transform127.setDEF(CString("Inline_bubble212-ROOT"));
Transform127.setTranslation(new float[]{-101.7,-15.99,-257.1});
Inline& Inline128 =  Inline();
Inline128.setUrl(new CString[]{CString("bubble2.x3d")}, 1);
Transform127.addChild(&Inline128);

Scene7.addChild(&Transform127);

Transform& Transform129 =  Transform();
Transform129.setDEF(CString("Inline_bubble213-ROOT"));
Transform129.setTranslation(new float[]{-126.8,-15.99,-284});
Inline& Inline130 =  Inline();
Inline130.setUrl(new CString[]{CString("bubble2.x3d")}, 1);
Transform129.addChild(&Inline130);

Scene7.addChild(&Transform129);

Transform& Transform131 =  Transform();
Transform131.setDEF(CString("Inline_bubble214-ROOT"));
Transform131.setTranslation(new float[]{-122.2,-15.99,-310.8});
Inline& Inline132 =  Inline();
Inline132.setUrl(new CString[]{CString("bubble2.x3d")}, 1);
Transform131.addChild(&Inline132);

Scene7.addChild(&Transform131);

Transform& Transform133 =  Transform();
Transform133.setDEF(CString("Inline_bubble215-ROOT"));
Transform133.setTranslation(new float[]{-126,-15.99,-361.9});
Inline& Inline134 =  Inline();
Inline134.setUrl(new CString[]{CString("bubble2.x3d")}, 1);
Transform133.addChild(&Inline134);

Scene7.addChild(&Transform133);

Transform& Transform135 =  Transform();
Transform135.setDEF(CString("Inline_bubble216-ROOT"));
Transform135.setTranslation(new float[]{-141.4,-15.99,-400.1});
Inline& Inline136 =  Inline();
Inline136.setUrl(new CString[]{CString("bubble2.x3d")}, 1);
Transform135.addChild(&Inline136);

Scene7.addChild(&Transform135);

Transform& Transform137 =  Transform();
Transform137.setDEF(CString("Inline_bubble217-ROOT"));
Transform137.setTranslation(new float[]{-133.6,-15.99,-337});
Inline& Inline138 =  Inline();
Inline138.setUrl(new CString[]{CString("bubble2.x3d")}, 1);
Transform137.addChild(&Inline138);

Scene7.addChild(&Transform137);

Transform& Transform139 =  Transform();
Transform139.setDEF(CString("Inline_bubble218-ROOT"));
Transform139.setTranslation(new float[]{-116.2,-15.99,-429.3});
Inline& Inline140 =  Inline();
Inline140.setUrl(new CString[]{CString("bubble2.x3d")}, 1);
Transform139.addChild(&Inline140);

Scene7.addChild(&Transform139);

Transform& Transform141 =  Transform();
Transform141.setDEF(CString("Inline_bubble219-ROOT"));
Transform141.setTranslation(new float[]{-105.8,-15.99,-457.6});
Inline& Inline142 =  Inline();
Inline142.setUrl(new CString[]{CString("bubble2.x3d")}, 1);
Transform141.addChild(&Inline142);

Scene7.addChild(&Transform141);

Transform& Transform143 =  Transform();
Transform143.setDEF(CString("Inline_bubble220-ROOT"));
Transform143.setTranslation(new float[]{-85.19,-15.99,-467.2});
Inline& Inline144 =  Inline();
Inline144.setUrl(new CString[]{CString("bubble2.x3d")}, 1);
Transform143.addChild(&Inline144);

Scene7.addChild(&Transform143);

Transform& Transform145 =  Transform();
Transform145.setDEF(CString("Inline_bubble221-ROOT"));
Transform145.setTranslation(new float[]{-46.54,-15.99,-478.8});
Inline& Inline146 =  Inline();
Inline146.setUrl(new CString[]{CString("bubble2.x3d")}, 1);
Transform145.addChild(&Inline146);

Scene7.addChild(&Transform145);

Transform& Transform147 =  Transform();
Transform147.setDEF(CString("Inline_bubble222-ROOT"));
Transform147.setTranslation(new float[]{-7.292,-15.99,-494.2});
Inline& Inline148 =  Inline();
Inline148.setUrl(new CString[]{CString("bubble2.x3d")}, 1);
Transform147.addChild(&Inline148);

Scene7.addChild(&Transform147);

Transform& Transform149 =  Transform();
Transform149.setDEF(CString("Inline_bubble223-ROOT"));
Transform149.setTranslation(new float[]{-3.522,-15.99,-519.8});
Inline& Inline150 =  Inline();
Inline150.setUrl(new CString[]{CString("bubble2.x3d")}, 1);
Transform149.addChild(&Inline150);

Scene7.addChild(&Transform149);

Transform& Transform151 =  Transform();
Transform151.setDEF(CString("Inline_bubble224-ROOT"));
Transform151.setTranslation(new float[]{-6.843,-15.99,-544.2});
Inline& Inline152 =  Inline();
Inline152.setUrl(new CString[]{CString("bubble2.x3d")}, 1);
Transform151.addChild(&Inline152);

Scene7.addChild(&Transform151);

Transform& Transform153 =  Transform();
Transform153.setDEF(CString("Inline_bubble225-ROOT"));
Transform153.setTranslation(new float[]{17.6,-15.99,-564.2});
Inline& Inline154 =  Inline();
Inline154.setUrl(new CString[]{CString("bubble2.x3d")}, 1);
Transform153.addChild(&Inline154);

Scene7.addChild(&Transform153);

Transform& Transform155 =  Transform();
Transform155.setDEF(CString("Inline_bubble226-ROOT"));
Transform155.setTranslation(new float[]{3.365,-15.99,-590});
Inline& Inline156 =  Inline();
Inline156.setUrl(new CString[]{CString("bubble2.x3d")}, 1);
Transform155.addChild(&Inline156);

Scene7.addChild(&Transform155);

Transform& Transform157 =  Transform();
Transform157.setDEF(CString("Inline_bubble227-ROOT"));
Transform157.setTranslation(new float[]{17.49,-15.99,-628.7});
Inline& Inline158 =  Inline();
Inline158.setUrl(new CString[]{CString("bubble2.x3d")}, 1);
Transform157.addChild(&Inline158);

Scene7.addChild(&Transform157);

PositionInterpolator& PositionInterpolator159 =  PositionInterpolator();
PositionInterpolator159.setDEF(CString("SharkEat-POS-INTERP"));
PositionInterpolator159.setKey(new float[]{0,0.01429,0.02857,0.04286,0.05714,0.07143,0.08571,0.1,0.1143,0.1286,0.1429,0.1571,0.1714,0.1857,0.2,0.2143,0.2286,0.2429,0.2571,0.2714,0.2857,0.3,0.3143,0.3286,0.3429,0.3571,0.3714,0.3857,0.4,0.4143,0.4286,0.4429,0.4571,0.4714,0.4857,0.5,0.5143,0.5286,0.5429,0.5571,0.5714,0.5857,0.6,0.6143,0.6286,0.6429,0.6571,0.6714,0.6857,0.7,0.7143,0.7286,0.7429,0.7571,0.7714,0.7857,0.8,0.8143,0.8286,0.8429}, 60);
PositionInterpolator159.setKeyValue(new float[]{0.001881,-0.2842,-1.188,0.002397,-0.2545,-1.211,0.002762,-0.2227,-1.226,0.002945,-0.1925,-1.231,0.00294,-0.168,-1.228,0.002767,-0.1531,-1.217,0.002685,-0.15,-1.212,0.002685,-0.15,-1.212,0.002767,-0.1531,-1.217,0.002513,-0.1692,-1.229,0.001648,-0.1962,-1.235,0.0007906,-0.228,-1.23,0.0006205,-0.2586,-1.214,0.001867,-0.2842,-1.188,0.009928,-0.2819,-1.195,0.02599,-0.277,-1.198,0.04685,-0.2713,-1.199,0.06942,-0.2667,-1.197,0.09061,-0.265,-1.196,0.1088,-0.2673,-1.196,0.1193,-0.2725,-1.194,0.1143,-0.279,-1.192,0.0874,-0.2847,-1.187,0.02086,-0.2839,-1.188,-0.06119,-0.284,-1.188,-0.09799,-0.285,-1.187,-0.03127,-0.2837,-1.188,0.08074,-0.2835,-1.188,0.1228,-0.2847,-1.187,0.006802,-0.2832,-1.188,-0.09799,-0.285,-1.187,-0.007522,-0.2832,-1.188,0.0874,-0.2847,-1.187,0.004102,-0.2831,-1.188,-0.09799,-0.285,-1.187,-0.0861,-0.2844,-1.188,-0.02842,-0.2841,-1.188,0.001881,-0.2842,-1.188,0.002219,-0.2842,-1.188,0.003149,-0.2842,-1.188,0.004503,-0.2843,-1.188,0.006065,-0.2843,-1.188,0.007599,-0.2844,-1.188,0.00888,-0.2844,-1.188,0.00978,-0.2844,-1.188,0.01034,-0.2844,-1.188,0.01063,-0.2844,-1.188,0.01071,-0.2843,-1.188,0.01065,-0.2843,-1.188,0.01051,-0.2843,-1.188,0.01014,-0.2843,-1.188,0.009422,-0.2843,-1.188,0.00845,-0.2843,-1.188,0.007312,-0.2842,-1.188,0.0061,-0.2842,-1.188,0.004883,-0.2842,-1.188,0.003741,-0.2842,-1.188,0.002783,-0.2842,-1.188,0.002125,-0.2842,-1.188,0.001881,-0.2842,-1.188}, 180);
Scene7.addChild(&PositionInterpolator159);

OrientationInterpolator& OrientationInterpolator160 =  OrientationInterpolator();
OrientationInterpolator160.setDEF(CString("SharkEat-ROT-INTERP"));
OrientationInterpolator160.setKey(new float[]{0,0.01429,0.02857,0.04286,0.05714,0.07143,0.08571,0.1,0.1143,0.1286,0.1429,0.1571,0.1714,0.1857,0.2,0.2143,0.2286,0.2429,0.2571,0.2714,0.2857,0.3,0.3143,0.3286,0.3429,0.3571,0.3714,0.3857,0.4,0.4143,0.4286,0.4429,0.4571,0.4714,0.4857,0.5,0.5143,0.5286,0.5429,0.5571,0.5714,0.5857,0.6,0.6143,0.6286,0.6429,0.6571,0.6714,0.6857,0.7,0.7143,0.7286,0.7429,0.7571,0.7714,0.7857,0.8,0.8143,0.8286,0.8429}, 60);
OrientationInterpolator160.setKeyValue(new float[]{-0.999941,0.00659827,-0.00861635,4.167,-0.999944,0.00604627,-0.00869538,4.075,-0.999946,0.00550426,-0.00877241,3.98,-0.999948,0.00499124,-0.00884443,3.887,-0.99995,0.00452577,-0.00890956,3.799,-0.999951,0.0041228,-0.00896756,3.722,-0.999952,0.00399481,-0.00898557,3.696,-0.999952,0.00399481,-0.00898557,3.696,-0.999951,0.0041228,-0.00896756,3.722,-0.99995,0.00457123,-0.00890444,3.808,-0.999948,0.00513225,-0.00882442,3.913,-0.999945,0.00572426,-0.0087404,4.019,-0.999943,0.00625127,-0.00866537,4.109,-0.999941,0.00659827,-0.00861635,4.167,-0.999947,0.00489023,-0.00903943,4.179,-0.99995,0.00122694,-0.00991551,4.158,-0.999943,-0.00157007,-0.0105705,4.122,-0.999946,-0.000831738,-0.0103705,4.087,-0.999944,0.00602127,-0.00869838,4.071,-0.999521,0.0308406,-0.00273806,4.081,-0.997532,0.0699022,0.00664321,4.105,-0.994669,0.102097,0.0144496,4.132,-0.994277,0.105698,0.0155096,4.152,-0.999277,0.0380191,-0.000154996,4.161,-0.997328,-0.0686719,-0.0249207,4.156,-0.991604,-0.123701,-0.0376702,4.148,-0.99763,-0.0644919,-0.0239907,4.153,-0.998929,0.0462413,0.00168605,4.156,-0.994277,0.105698,0.0155096,4.152,-0.999896,-0.00915896,-0.01117,4.156,-0.991604,-0.123701,-0.0376702,4.148,-0.999896,-0.00915896,-0.01117,4.156,-0.994277,0.105698,0.0155096,4.152,-0.999942,-0.00419117,-0.00996641,4.155,-0.991604,-0.123701,-0.0376702,4.148,-0.996334,-0.0806727,-0.028481,4.157,-0.999921,-0.00509411,-0.0114702,4.166,-0.999941,0.00659827,-0.00861635,4.167,-0.999937,0.00754128,-0.00832831,4.167,-0.99992,0.0101602,-0.00749615,4.167,-0.999885,0.0138398,-0.00621691,4.167,-0.999833,0.0176706,-0.00464215,4.168,-0.999784,0.0205897,-0.00295795,4.168,-0.999766,0.0215893,-0.00136895,4.168,-0.999796,0.0202099,-0.000141899,4.168,-0.999853,0.0171092,0.00064827,4.168,-0.999913,0.0131702,0.00109701,4.168,-0.999956,0.0092616,0.00129994,4.168,-0.999979,0.00627387,0.00135097,4.168,-0.999986,0.00508293,0.00134698,4.168,-0.999986,0.00513293,0.00101599,4.168,-0.999986,0.00526993,0.000118798,4.167,-0.999984,0.00547091,-0.00120398,4.167,-0.99998,0.00571488,-0.00280994,4.167,-0.999972,0.00598083,-0.00455787,4.167,-0.999962,0.00622076,-0.00613477,4.167,-0.999953,0.0063967,-0.00729466,4.167,-0.999946,0.0065133,-0.00805837,4.167,-0.999942,0.00657828,-0.00848236,4.167,-0.999941,0.00659827,-0.00861635,4.167}, 240);
Scene7.addChild(&OrientationInterpolator160);

PositionInterpolator& PositionInterpolator161 =  PositionInterpolator();
PositionInterpolator161.setDEF(CString("SharkEat-SCALE-INTERP"));
PositionInterpolator161.setKey(new float[]{0,0.01429,0.02857,0.04286,0.05714,0.07143,0.1143,0.1286,0.1429,0.1571,0.1714,0.1857,0.2,0.2143,0.2286,0.2429,0.2571,0.2714,0.2857,0.3,0.3143}, 21);
PositionInterpolator161.setKeyValue(new float[]{0.001994,0.001994,0.001994,0.003883,0.003883,0.003883,0.005543,0.005543,0.005543,0.006863,0.006863,0.006863,0.007735,0.007735,0.007735,0.00805,0.00805,0.00805,0.00805,0.00805,0.00805,0.007735,0.007735,0.007735,0.006862,0.006862,0.006862,0.005541,0.005541,0.005541,0.003881,0.003881,0.003881,0.00199,0.00199,0.00199,0.002115,0.002115,0.002115,0.002209,0.002209,0.002209,0.002272,0.002272,0.002272,0.002303,0.002303,0.002303,0.002304,0.002304,0.002304,0.002273,0.002273,0.002273,0.002211,0.002211,0.002211,0.002118,0.002118,0.002118,0.001994,0.001994,0.001994}, 63);
Scene7.addChild(&PositionInterpolator161);

PositionInterpolator& PositionInterpolator162 =  PositionInterpolator();
PositionInterpolator162.setDEF(CString("SharkEat_Eyeball_R-POS-INTERP"));
PositionInterpolator162.setKey(new float[]{0,0.01429,0.02857,0.04286,0.05714,0.07143,0.08571,0.1,0.1143,0.1571,0.1714,0.1857,0.2,0.2143,0.2429,0.2571,0.2714,0.2857,0.3,0.3143,0.3286,0.3429,0.3571,0.3714,0.3857,0.4,0.4143,0.4286,0.4429,0.4571,0.4714,0.4857,0.5,0.5143,0.5286,0.5429,0.5571,0.5714,0.5857,0.6,0.6143,0.6286,0.6429,0.6571,0.6714,0.6857,0.7,0.7143,0.7286,0.7429,0.7571,0.7714,0.7857,0.8,0.8143,0.8286,0.8429,0.8714,0.8857}, 59);
PositionInterpolator162.setKeyValue(new float[]{55.09,1.822,-6.84,55.09,1.822,-6.84,55.09,1.822,-6.84,55.09,1.822,-6.84,48.07,2.931,-6.466,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,43.94,3.584,-6.246,55.09,1.822,-6.84}, 177);
Scene7.addChild(&PositionInterpolator162);

OrientationInterpolator& OrientationInterpolator163 =  OrientationInterpolator();
OrientationInterpolator163.setDEF(CString("SharkEat_Eyeball_R-ROT-INTERP"));
OrientationInterpolator163.setKey(new float[]{0,0.04286,0.05714,0.07143,0.08571,0.1,0.1143,0.1286,0.1429,0.1571,0.1714,0.1857,0.2,0.2143,0.2286,0.2429,0.2571,0.2714,0.2857,0.3,0.3143,0.3286,0.3429,0.3571,0.3714,0.3857,0.4,0.4143,0.4286,0.4429,0.4571,0.4714,0.4857,0.5,0.5143,0.5286,0.5429,0.5571,0.5714,0.5857,0.6,0.6143,0.6286,0.6429,0.6571,0.6714,0.6857,0.7,0.7143,0.7286,0.7429,0.7571,0.7714,0.7857,0.8,0.8143,0.8286,0.8429,0.8571,0.8714,0.8857}, 61);
OrientationInterpolator163.setKeyValue(new float[]{-0.682571,0.661772,-0.310087,2.578,-0.682571,0.661772,-0.310087,2.578,0.390293,-0.920184,-0.0305395,3.013,0.151105,-0.958234,-0.242808,2.595,0.139597,-0.957581,-0.252095,2.577,0.128799,-0.95679,-0.260697,2.561,0.118698,-0.955884,-0.268695,2.547,0.109401,-0.95491,-0.276003,2.533,0.1008,-0.953898,-0.282699,2.521,0.0929768,-0.952867,-0.28879,2.51,0.0858359,-0.951855,-0.294286,2.5,0.0793787,-0.950884,-0.299195,2.491,0.0736136,-0.949947,-0.303615,2.483,0.0684887,-0.949082,-0.307494,2.476,0.064019,-0.948286,-0.310895,2.47,0.0601689,-0.947583,-0.313794,2.465,0.0569273,-0.946955,-0.316285,2.461,0.0542718,-0.946432,-0.318311,2.457,0.0521807,-0.946012,-0.319904,2.454,0.0506212,-0.945723,-0.321008,2.452,0.0495804,-0.945508,-0.321803,2.451,0.04903,-0.945401,-0.3222,2.45,0.0489586,-0.945374,-0.322291,2.45,0.0493179,-0.945459,-0.321986,2.45,0.0501108,-0.945615,-0.321405,2.451,0.051298,-0.945863,-0.320487,2.453,0.0528589,-0.946181,-0.319293,2.455,0.0547622,-0.946537,-0.317913,2.458,0.0569789,-0.946982,-0.316194,2.461,0.0595032,-0.947451,-0.314317,2.464,0.0622884,-0.947975,-0.312192,2.468,0.0653214,-0.94852,-0.309907,2.472,0.0685683,-0.949077,-0.307492,2.476,0.0720071,-0.949662,-0.304888,2.481,0.0756279,-0.950274,-0.302092,2.486,0.0793787,-0.950884,-0.299195,2.491,0.0832567,-0.951463,-0.296288,2.496,0.087227,-0.952067,-0.29319,2.502,0.091273,-0.952631,-0.290109,2.508,0.0953503,-0.953203,-0.286901,2.513,0.099454,-0.953738,-0.283711,2.519,0.103605,-0.954243,-0.280512,2.525,0.107601,-0.954709,-0.277403,2.531,0.111696,-0.955167,-0.27419,2.537,0.115598,-0.955586,-0.271096,2.542,0.119494,-0.955955,-0.268087,2.548,0.123202,-0.956316,-0.265105,2.553,0.126806,-0.956643,-0.262212,2.559,0.130302,-0.956912,-0.259503,2.564,0.133497,-0.957175,-0.256893,2.568,0.136597,-0.957379,-0.254494,2.573,0.139398,-0.957583,-0.252196,2.577,0.141905,-0.957736,-0.250209,2.581,0.144199,-0.957891,-0.248298,2.584,0.146298,-0.957986,-0.246696,2.587,0.1479,-0.958099,-0.2453,2.59,0.149305,-0.958134,-0.244309,2.592,0.150298,-0.958186,-0.243496,2.593,0.150902,-0.958216,-0.243004,2.594,0.151105,-0.958234,-0.242808,2.595,-0.682571,0.661772,-0.310087,2.578}, 244);
Scene7.addChild(&OrientationInterpolator163);

PositionInterpolator& PositionInterpolator164 =  PositionInterpolator();
PositionInterpolator164.setDEF(CString("SharkEat_Eyeball_L-POS-INTERP"));
PositionInterpolator164.setKey(new float[]{0,0.01429,0.02857,0.04286,0.05714,0.07143,0.08571,0.1,0.1143,0.1286,0.1429,0.1571,0.1714,0.1857,0.2,0.2143,0.2286,0.2429,0.2571,0.2714,0.2857,0.3,0.3143,0.3286,0.3429,0.3571,0.3714,0.3857,0.4,0.4143,0.4286,0.4429,0.4571,0.4714,0.4857,0.5,0.5143,0.5286,0.5429,0.5571,0.5714,0.5857,0.6,0.6143,0.6286,0.6429,0.6571,0.6714,0.6857,0.7,0.7143,0.7286,0.7429,0.7571,0.7714,0.7857,0.8,0.8143,0.8286}, 59);
PositionInterpolator164.setKeyValue(new float[]{-54.37,2.848,-8.257,-54.37,2.848,-8.257,-54.37,2.848,-8.257,-54.37,2.848,-8.257,-54.37,2.848,-8.257,-47.14,4.268,-4.764,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-42.89,5.102,-2.711,-54.37,2.848,-8.257,-54.37,2.848,-8.257,-54.37,2.848,-8.257}, 177);
Scene7.addChild(&PositionInterpolator164);

OrientationInterpolator& OrientationInterpolator165 =  OrientationInterpolator();
OrientationInterpolator165.setDEF(CString("SharkEat_Eyeball_L-ROT-INTERP"));
OrientationInterpolator165.setKey(new float[]{0,0.05714,0.07143,0.08571,0.1,0.1143,0.1286,0.1429,0.1571,0.1714,0.1857,0.2,0.2143,0.2286,0.2429,0.2571,0.2714,0.2857,0.3,0.3143,0.3286,0.3429,0.3571,0.3714,0.3857,0.4,0.4143,0.4286,0.4429,0.4571,0.4714,0.4857,0.5,0.5143,0.5286,0.5429,0.5571,0.5714,0.5857,0.6,0.6143,0.6286,0.6429,0.6571,0.6714,0.6857,0.7,0.7143,0.7286,0.7429,0.7571,0.7714,0.7857,0.8}, 54);
OrientationInterpolator165.setKeyValue(new float[]{-0.374592,0.400391,-0.836282,1.719,-0.374592,0.400391,-0.836282,1.719,-0.040862,0.303215,-0.952046,0.4171,0.718259,-0.445474,0.534469,0.4786,0.699612,-0.445407,0.558709,0.5163,0.68429,-0.444994,0.577692,0.5512,0.671532,-0.444521,0.592828,0.5833,0.660917,-0.444011,0.605015,0.6126,0.651993,-0.443495,0.614993,0.6391,0.644498,-0.442998,0.623198,0.663,0.638269,-0.442579,0.62987,0.6842,0.632971,-0.44218,0.635471,0.7028,0.628684,-0.441789,0.639984,0.719,0.625093,-0.441495,0.643693,0.7328,0.622169,-0.441278,0.646668,0.7442,0.619913,-0.441009,0.649014,0.7535,0.618208,-0.440906,0.650708,0.7607,0.61697,-0.440778,0.651968,0.7658,0.616179,-0.440685,0.652778,0.7691,0.615873,-0.44068,0.653071,0.7705,0.615913,-0.440709,0.653014,0.7702,0.616384,-0.440688,0.652583,0.7683,0.617174,-0.440782,0.651773,0.765,0.61831,-0.440907,0.65061,0.7602,0.619811,-0.441008,0.649112,0.7541,0.621526,-0.441218,0.647327,0.7469,0.623602,-0.441401,0.645202,0.7385,0.625975,-0.441583,0.642775,0.7292,0.628684,-0.441789,0.639984,0.719,0.631624,-0.442017,0.636924,0.708,0.634784,-0.442289,0.633584,0.6964,0.638269,-0.442579,0.62987,0.6842,0.642004,-0.442803,0.625904,0.6715,0.645889,-0.443092,0.621689,0.6585,0.649987,-0.443391,0.617188,0.6453,0.654382,-0.443588,0.612383,0.6319,0.658897,-0.443898,0.607297,0.6184,0.663573,-0.444182,0.601975,0.605,0.668324,-0.444416,0.596521,0.5918,0.67323,-0.44462,0.590826,0.5789,0.678137,-0.444824,0.585032,0.5663,0.683058,-0.444973,0.579164,0.5541,0.687902,-0.445101,0.573302,0.5426,0.692676,-0.445285,0.567381,0.5317,0.697239,-0.445325,0.561732,0.5215,0.701516,-0.44541,0.556313,0.5122,0.705492,-0.445495,0.551194,0.5039,0.709116,-0.44551,0.546512,0.4965,0.712198,-0.445499,0.542499,0.4903,0.714786,-0.445492,0.53909,0.4853,0.716675,-0.445485,0.536582,0.4817,0.717873,-0.445483,0.53498,0.4794,0.718259,-0.445474,0.534469,0.4786,-0.374592,0.400391,-0.836282,1.719}, 216);
Scene7.addChild(&OrientationInterpolator165);

TimeSensor& TimeSensor166 =  TimeSensor();
TimeSensor166.setDEF(CString("TimeSensor_inline-TIMER"));
TimeSensor166.setCycleInterval(9.533);
TimeSensor166.setLoop(True);
TimeSensor166.setStartTime(1);
Scene7.addChild(&TimeSensor166);

Script& Script167 =  Script();
Script167.setDEF(CString("TimeSensor_inline-SCRIPT"));
field& field168 =  field();
field168.setName(CString("fractionIn"));
field168.setAccessType(CString("inputOnly"));
field168.setType(CString("SFFloat"));
Script167.addChild(&field168);

field& field169 =  field();
field169.setName(CString("fractionOut"));
field169.setAccessType(CString("outputOnly"));
field169.setType(CString("SFFloat"));
Script167.addChild(&field169);


Script167.setSourceCode(CString("javascript:")+
_T("    function fractionIn(i) {")+
_T("    fractionOut = 0.9931 * i + 0.006944;")+
_T("  }"));
Scene7.addChild(&Script167);

Switch& Switch170 =  Switch();
Switch170.setDEF(CString("SittingSeagull"));
Switch170.setWhichChoice(0);
Group& Group171 =  Group();
Transform& Transform172 =  Transform();
Transform172.setDEF(CString("SittingSeagullCollisionMover"));
Transform172.setTranslation(new float[]{4.242,0,-50.32});
Transform& Transform173 =  Transform();
Transform173.setDEF(CString("SittingSeagullCollisionSpinner"));
Transform173.setRotation(new float[]{1,0,0,0.0134964});
ProximitySensor& ProximitySensor174 =  ProximitySensor();
ProximitySensor174.setDEF(CString("EatSittingSeagull"));
ProximitySensor174.setSize(new float[]{5,4,4});
ProximitySensor174.setCenter(new float[]{0,0,4});
Transform173.addChild(&ProximitySensor174);

Transform172.addChild(&Transform173);

Group171.addChild(&Transform172);

Transform& Transform175 =  Transform();
Transform175.setDEF(CString("Inline_Gull_sit-ROOT"));
Transform175.setTranslation(new float[]{4.242,0,-50.32});
VisibilitySensor& VisibilitySensor176 =  VisibilitySensor();
VisibilitySensor176.setDEF(CString("sittingSeagullVisible"));
VisibilitySensor176.setSize(new float[]{1,1,1});
Transform175.addChild(&VisibilitySensor176);

Inline& Inline177 =  Inline();
Inline177.setUrl(new CString[]{CString("gullswim.x3d")}, 1);
Transform175.addChild(&Inline177);

Group171.addChild(&Transform175);

Switch170.addChild(&Group171);

Scene7.addChild(&Switch170);

TimeSensor& TimeSensor178 =  TimeSensor();
TimeSensor178.setDEF(CString("TimeSensor_gullswim-TIMER"));
TimeSensor178.setCycleInterval(9.6);
TimeSensor178.setLoop(True);
TimeSensor178.setStartTime(1);
Scene7.addChild(&TimeSensor178);

PositionInterpolator& PositionInterpolator179 =  PositionInterpolator();
PositionInterpolator179.setDEF(CString("Inline_Gullswim-POS-INTERP"));
PositionInterpolator179.setKey(new float[]{0,0.02083,0.04167,0.0625,0.08333,0.1042,0.125,0.1458,0.1667,0.1875,0.2083,0.2292,0.25,0.2708,0.2917,0.3125,0.3333,0.3542,0.375,0.3958,0.4167,0.4375,0.4583,0.4792,0.5,0.5208,0.5417,0.5625,0.5833,0.6042,0.625,0.6458,0.6667,0.6875,0.7083,0.7292,0.75,0.7708,0.7917,0.8125,0.8333,0.8542,0.875,0.8958,0.9167,0.9375,0.9583,0.9792,1}, 49);
PositionInterpolator179.setKeyValue(new float[]{-8.996,0,-185.5,-8.956,0,-186.4,-8.816,0,-187.3,-8.523,0,-188.1,-8.102,0,-188.8,-7.58,0,-189.5,-6.987,0,-190.1,-6.337,0,-190.7,-5.645,0,-191.2,-4.919,0,-191.6,-4.165,0,-192,-3.387,0,-192.4,-2.587,0,-192.7,-1.768,0,-192.9,-0.9306,0,-193.1,-0.07939,0,-193.1,0.7576,0,-193,1.426,0,-192.4,1.902,0,-191.7,2.281,0,-190.9,2.602,0,-190,2.879,0,-189.2,3.121,0,-188.3,3.333,0,-187.5,3.516,0,-186.6,3.671,0,-185.7,3.797,0,-184.8,3.891,0,-184,3.947,0,-183.1,3.956,0,-182.2,3.89,0,-181.3,3.702,0,-180.4,3.222,0,-179.7,2.314,0,-179.4,1.357,0,-179.3,0.395,0,-179.3,-0.5648,0,-179.4,-1.519,0,-179.5,-2.465,0,-179.7,-3.4,0,-179.9,-4.32,0,-180.2,-5.22,0,-180.5,-6.089,0,-180.9,-6.914,0,-181.4,-7.667,0,-182,-8.303,0,-182.8,-8.751,0,-183.6,-8.946,0,-184.5,-8.996,0,-185.5}, 147);
Scene7.addChild(&PositionInterpolator179);

OrientationInterpolator& OrientationInterpolator180 =  OrientationInterpolator();
OrientationInterpolator180.setDEF(CString("Inline_Gullswim-ROT-INTERP"));
OrientationInterpolator180.setKey(new float[]{0,0.02083,0.04167,0.0625,0.08333,0.1042,0.125,0.1458,0.1667,0.1875,0.2083,0.2292,0.25,0.2708,0.2917,0.3125,0.3333,0.3542,0.375,0.3958,0.4167,0.4375,0.4583,0.4792,0.5,0.5208,0.5417,0.5625,0.5833,0.6042,0.625,0.6458,0.6667,0.6875,0.7083,0.7292,0.75,0.7708,0.7917,0.8125,0.8333,0.8542,0.875,0.8958,0.9167,0.9375,0.9583,0.9792,1}, 49);
OrientationInterpolator180.setKeyValue(new float[]{0,0,1,0,0,-1,0,0.146499,0,-1,0,0.3004,0,-1,0,0.4543,0,-1,0,0.6008,0,-1,0,0.7324,0,-1,0,0.8419,0,-1,0,0.9194,0,-1,0,0.9686,0,-1,0,1.002,0,-1,0,1.031,0,-1,0,1.07,0,-1,0,1.13,0,-1,0,1.223,0,-1,0,1.368,0,-1,0,1.616,0,-1,0,1.937,0,-1,0,2.273,0,-1,0,2.569,0,-1,0,2.768,0,-1,0,2.878,0,-1,0,2.949,0,-1,0,2.992,0,-1,0,3.017,0,-1,0,3.033,0,-1,0,3.051,0,-1,0,3.08,0,-1,0,3.131,0,-1,0,3.214,0,-1,0,3.341,0,-1,0,3.523,0,-1,0,3.742,0,-1,0,3.979,0,1,0,2.068,0,1,0,1.85,0,1,0,1.669,0,1,0,1.537,0,1,0,1.437,0,1,0,1.36,0,1,0,1.298,0,1,0,1.241,0,1,0,1.18,0,1,0,1.108,0,1,0,1.015,0,1,0,0.8902,0,1,0,0.7053,0,1,0,0.4765,0,1,0,0.2319,0,0,1,0}, 196);
Scene7.addChild(&OrientationInterpolator180);

Switch& Switch181 =  Switch();
Switch181.setDEF(CString("Seagull"));
Switch181.setWhichChoice(0);
Group& Group182 =  Group();
Transform& Transform183 =  Transform();
Transform183.setDEF(CString("SeagullCollisionMover"));
Transform183.setTranslation(new float[]{-1.33807,0,-179.481});
Transform& Transform184 =  Transform();
Transform184.setDEF(CString("SeagullCollisionSpinner"));
Transform184.setRotation(new float[]{1,0,0,0.0134964});
ProximitySensor& ProximitySensor185 =  ProximitySensor();
ProximitySensor185.setDEF(CString("EatSeagull"));
ProximitySensor185.setSize(new float[]{3,3,2});
ProximitySensor185.setCenter(new float[]{0,0,4});
Transform184.addChild(&ProximitySensor185);

Transform183.addChild(&Transform184);

Group182.addChild(&Transform183);

Transform& Transform186 =  Transform();
Transform186.setDEF(CString("Inline_Gullswim-ROOT"));
Transform186.setTranslation(new float[]{-1.33807,0,-179.481});
Transform186.setRotation(new float[]{0,1,0,1.45596});
VisibilitySensor& VisibilitySensor187 =  VisibilitySensor();
VisibilitySensor187.setDEF(CString("seagullVisible"));
VisibilitySensor187.setSize(new float[]{1,1,1});
Transform186.addChild(&VisibilitySensor187);

Inline& Inline188 =  Inline();
Inline188.setUrl(new CString[]{CString("gullswim.x3d")}, 1);
Transform186.addChild(&Inline188);

Group182.addChild(&Transform186);

Switch181.addChild(&Group182);

Scene7.addChild(&Switch181);

TimeSensor& TimeSensor189 =  TimeSensor();
TimeSensor189.setDEF(CString("TimeSensor_Fishswim-TIMER"));
TimeSensor189.setCycleInterval(9.6);
TimeSensor189.setLoop(True);
TimeSensor189.setStartTime(1);
Scene7.addChild(&TimeSensor189);

PositionInterpolator& PositionInterpolator190 =  PositionInterpolator();
PositionInterpolator190.setDEF(CString("Inline_Fishswim-POS-INTERP"));
PositionInterpolator190.setKey(new float[]{0,0.02083,0.04167,0.0625,0.08333,0.1042,0.125,0.1458,0.1667,0.1875,0.2083,0.2292,0.25,0.2708,0.2917,0.3125,0.3333,0.3542,0.375,0.3958,0.4167,0.4375,0.4583,0.4792,0.5,0.5208,0.5417,0.5625,0.5833,0.6042,0.625,0.6458,0.6667,0.6875,0.7083,0.7292,0.75,0.7708,0.7917,0.8125,0.8333,0.8542,0.875,0.8958,0.9167,0.9375,0.9583,0.9792,1}, 49);
PositionInterpolator190.setKeyValue(new float[]{1.603,-5.208,-121.5,1.378,-4.873,-121.5,1.174,-4.566,-121.4,0.9889,-4.287,-121.4,0.8242,-4.036,-121.3,0.6794,-3.813,-121.3,0.5545,-3.619,-121.2,0.4495,-3.453,-121.2,0.3644,-3.315,-121.1,0.2992,-3.205,-121.1,0.254,-3.124,-121,0.2287,-3.07,-121,0.2232,-3.045,-120.9,0.2377,-3.048,-120.8,0.2722,-3.079,-120.8,0.3265,-3.139,-120.7,0.4007,-3.226,-120.7,0.5204,-3.371,-120.6,0.6953,-3.595,-120.5,0.9022,-3.885,-120.4,1.118,-4.231,-120.3,1.318,-4.621,-120.2,1.481,-5.042,-120.1,1.582,-5.484,-120,1.598,-5.935,-119.9,1.527,-6.383,-119.8,1.386,-6.817,-119.7,1.199,-7.224,-119.6,0.9874,-7.594,-119.5,0.7722,-7.915,-119.5,0.5753,-8.174,-119.5,0.4186,-8.362,-119.5,0.3236,-8.465,-119.5,0.3071,-8.498,-119.5,0.3628,-8.486,-119.6,0.4779,-8.432,-119.8,0.6395,-8.339,-119.9,0.8349,-8.209,-120.1,1.051,-8.045,-120.3,1.275,-7.851,-120.5,1.495,-7.63,-120.7,1.697,-7.384,-120.9,1.869,-7.116,-121.1,1.997,-6.83,-121.2,2.069,-6.528,-121.4,2.073,-6.213,-121.5,1.995,-5.889,-121.5,1.825,-5.557,-121.5,1.603,-5.208,-121.5}, 147);
Scene7.addChild(&PositionInterpolator190);

OrientationInterpolator& OrientationInterpolator191 =  OrientationInterpolator();
OrientationInterpolator191.setDEF(CString("Inline_Fishswim-ROT-INTERP"));
OrientationInterpolator191.setKey(new float[]{0,0.02083,0.04167,0.0625,0.08333,0.1042,0.125,0.1458,0.1667,0.1875,0.2083,0.2292,0.25,0.2708,0.2917,0.3125,0.3333,0.3542,0.375,0.3958,0.4167,0.4375,0.4583,0.4792,0.5,0.5208,0.5417,0.5625,0.5833,0.6042,0.625,0.6458,0.6667,0.6875,0.7083,0.7292,0.75,0.7708,0.7917,0.8125,0.8333,0.8542,0.875,0.8958,0.9167,0.9375,0.9583,0.9792,1}, 49);
OrientationInterpolator191.setKeyValue(new float[]{0,0,1,0,0,-1,0,0.0907388,0,-1,0,0.165701,0,-1,0,0.2249,0,-1,0,0.2682,0,-1,0,0.2958,0,-1,0,0.3076,0,-1,0,0.3036,0,-1,0,0.2838,0,-1,0,0.2467,0,-1,0,0.177299,0,-1,0,0.0818187,0,1,0,0.0265027,0,1,0,0.134501,0,1,0,0.229101,0,1,0,0.297,0,1,0,0.3326,0,1,0,0.3414,0,1,0,0.3272,0,1,0,0.2939,0,1,0,0.2452,0,1,0,0.184899,0,1,0,0.116801,0,1,0,0.0447313,0,-1,0,0.0275438,0,-1,0,0.0961895,0,-1,0,0.157501,0,-1,0,0.207501,0,-1,0,0.2426,0,-1,0,0.2589,0,-1,0,0.2526,0,-1,0,0.2238,0,-1,0,0.176501,0,-1,0,0.1153,0,-1,0,0.0444908,0,1,0,0.0313569,0,1,0,0.107801,0,1,0,0.1805,0,1,0,0.2449,0,1,0,0.2965,0,1,0,0.331,0,1,0,0.3438,0,1,0,0.3316,0,1,0,0.3045,0,1,0,0.2661,0,1,0,0.2164,0,1,0,0.1555,0,1,0,0.0833692,0,0,1,0}, 196);
Scene7.addChild(&OrientationInterpolator191);

Switch& Switch192 =  Switch();
Switch192.setDEF(CString("FishSwim"));
Switch192.setWhichChoice(0);
Group& Group193 =  Group();
Transform& Transform194 =  Transform();
Transform194.setDEF(CString("FishSwimCollisionMover"));
Transform194.setTranslation(new float[]{0.797849,-8.23365,-120.062});
Transform& Transform195 =  Transform();
Transform195.setDEF(CString("FishSwimCollisionSpinner"));
Transform195.setRotation(new float[]{1,0,0,0.0134964});
ProximitySensor& ProximitySensor196 =  ProximitySensor();
ProximitySensor196.setDEF(CString("EatFishSwim"));
ProximitySensor196.setSize(new float[]{5,5,6});
ProximitySensor196.setCenter(new float[]{0,2,6});
Transform195.addChild(&ProximitySensor196);

Transform194.addChild(&Transform195);

Group193.addChild(&Transform194);

Transform& Transform197 =  Transform();
Transform197.setDEF(CString("Inline_Fishswim-ROOT"));
Transform197.setTranslation(new float[]{0.797849,-8.23365,-120.062});
Transform197.setRotation(new float[]{0,1,0,0.166717});
VisibilitySensor& VisibilitySensor198 =  VisibilitySensor();
VisibilitySensor198.setDEF(CString("fishSwimVisible"));
VisibilitySensor198.setSize(new float[]{1,1,1});
Transform197.addChild(&VisibilitySensor198);

Inline& Inline199 =  Inline();
Inline199.setUrl(new CString[]{CString("fishswim.x3d")}, 1);
Transform197.addChild(&Inline199);

Group193.addChild(&Transform197);

Switch192.addChild(&Group193);

Scene7.addChild(&Switch192);

TimeSensor& TimeSensor200 =  TimeSensor();
TimeSensor200.setDEF(CString("TimeSensor_Fishbott-TIMER"));
TimeSensor200.setCycleInterval(12.6);
TimeSensor200.setLoop(True);
TimeSensor200.setStartTime(1);
Scene7.addChild(&TimeSensor200);

Switch& Switch201 =  Switch();
Switch201.setDEF(CString("Fish"));
Switch201.setWhichChoice(0);
Group& Group202 =  Group();
Transform& Transform203 =  Transform();
Transform203.setDEF(CString("FishCollisionMover"));
Transform203.setTranslation(new float[]{-70.8306,-13.977,-248.981});
Transform& Transform204 =  Transform();
Transform204.setDEF(CString("FishCollisionSpinner"));
Transform204.setRotation(new float[]{1,0,0,0.0134964});
ProximitySensor& ProximitySensor205 =  ProximitySensor();
ProximitySensor205.setDEF(CString("EatFish"));
ProximitySensor205.setSize(new float[]{5,5,6});
ProximitySensor205.setCenter(new float[]{0,1,5});
Transform204.addChild(&ProximitySensor205);

Transform203.addChild(&Transform204);

Group202.addChild(&Transform203);

Transform& Transform206 =  Transform();
Transform206.setDEF(CString("Inline_Fishbott-ROOT"));
Transform206.setTranslation(new float[]{-70.8306,-13.977,-248.981});
Transform206.setRotation(new float[]{-0.176036,-0.979666,-0.0962573,1.28339});
VisibilitySensor& VisibilitySensor207 =  VisibilitySensor();
VisibilitySensor207.setDEF(CString("fishVisible"));
VisibilitySensor207.setSize(new float[]{1,1,1});
Transform206.addChild(&VisibilitySensor207);

Inline& Inline208 =  Inline();
Inline208.setUrl(new CString[]{CString("fishswim.x3d")}, 1);
Transform206.addChild(&Inline208);

Group202.addChild(&Transform206);

Switch201.addChild(&Group202);

Scene7.addChild(&Switch201);

PositionInterpolator& PositionInterpolator209 =  PositionInterpolator();
PositionInterpolator209.setDEF(CString("Inline_Fishbott-POS-INTERP"));
PositionInterpolator209.setKey(new float[]{0,0.02083,0.04167,0.0625,0.08333,0.1042,0.125,0.1458,0.1667,0.1875,0.2083,0.2292,0.25,0.2708,0.2917,0.3125,0.3333,0.3542,0.375,0.3958,0.4167,0.4375,0.4583,0.4792,0.5,0.5208,0.5417,0.5625,0.5833,0.6042,0.625,0.6458,0.6667,0.6875,0.7083,0.7292,0.75,0.7708,0.7917,0.8125,0.8333,0.8542,0.875,0.8958,0.9167,0.9375,0.9583,0.9792,1}, 49);
PositionInterpolator209.setKeyValue(new float[]{-62.58,-13.97,-248,-60.3,-14.04,-247.6,-58.11,-14.04,-247.1,-55.99,-13.95,-246.6,-53.96,-13.75,-246.3,-51.9,-13.44,-246.8,-49.87,-13.01,-247.8,-48.1,-12.48,-248.6,-46.81,-11.84,-248.6,-45.92,-10.87,-247.7,-45.4,-9.861,-246.5,-45.29,-9.219,-245.2,-45.68,-9.32,-244,-46.62,-10.06,-242.7,-47.84,-11.03,-241.6,-49.03,-11.85,-241.2,-50.1,-12.42,-241.7,-51.19,-12.93,-243,-52.35,-13.37,-244.5,-53.66,-13.71,-245.9,-55.17,-13.94,-246.6,-56.86,-14.05,-247,-58.68,-14.07,-247.2,-60.58,-14.05,-247.4,-62.51,-14.04,-247.6,-64.51,-14.08,-248,-66.61,-14.12,-248.5,-68.71,-14.12,-248.9,-70.74,-13.99,-249,-72.69,-13.71,-248.6,-74.65,-13.3,-247.7,-76.41,-12.79,-246.9,-77.76,-12.21,-246.7,-78.71,-11.37,-247.3,-79.34,-10.45,-248.4,-79.65,-9.759,-249.5,-79.64,-9.58,-250.5,-79.25,-9.961,-251.7,-78.54,-10.67,-252.9,-77.62,-11.44,-253.7,-76.57,-12.07,-253.7,-75.34,-12.68,-252.7,-73.93,-13.29,-251.2,-72.37,-13.79,-249.7,-70.71,-14.08,-248.9,-68.95,-14.19,-248.5,-67.04,-14.16,-248.4,-64.93,-14.09,-248.3,-62.58,-13.97,-248}, 147);
Scene7.addChild(&PositionInterpolator209);

OrientationInterpolator& OrientationInterpolator210 =  OrientationInterpolator();
OrientationInterpolator210.setDEF(CString("Inline_Fishbott-ROT-INTERP"));
OrientationInterpolator210.setKey(new float[]{0,0.02083,0.04167,0.0625,0.08333,0.1042,0.125,0.1458,0.1667,0.1875,0.2083,0.2292,0.25,0.2708,0.2917,0.3125,0.3333,0.3542,0.375,0.3958,0.4167,0.4375,0.4583,0.4792,0.5,0.5208,0.5417,0.5625,0.5833,0.6042,0.625,0.6458,0.6667,0.6875,0.7083,0.7292,0.75,0.7708,0.7917,0.8125,0.8333,0.8542,0.875,0.8958,0.9167,0.9375,0.9583,0.9792,1}, 49);
OrientationInterpolator210.setKeyValue(new float[]{0,1,0,1.387,0.00527826,0.999949,-0.00860442,1.438,0.0117406,0.999748,-0.0191409,1.487,0.00633917,0.999927,-0.0103303,1.565,-0.0381515,0.997539,0.0588223,1.796,-0.0955276,0.983175,0.155696,2.056,-0.0739823,0.97673,0.201306,1.8,-0.150297,0.961083,0.231796,1.416,-0.496611,0.840718,0.215805,1.105,-0.726613,0.631211,0.271305,0.7756,-0.772669,0.179593,0.608875,0.3776,0.154501,-0.788506,0.595305,0.4326,0.441097,-0.838395,0.320198,0.8782,0.424126,-0.876454,0.227914,1.286,0.306211,-0.933535,0.186407,1.683,0.1735,-0.971601,0.1609,2.041,0.0748678,-0.987571,0.138196,2.282,0.0367917,-0.992947,0.112705,2.326,0.0194807,-0.996435,0.0820829,2.199,0.0117394,-0.998751,0.0485676,1.995,0.00634929,-0.999846,0.0163708,1.807,-0.00395491,-0.999976,-0.00565387,1.724,-0.0128301,-0.999806,-0.0149601,1.725,-0.0190897,-0.999683,-0.0163897,1.763,-0.0255789,-0.999558,-0.0151694,1.809,-0.0353514,-0.99924,-0.0163907,1.833,-0.0518221,-0.998341,-0.025081,1.804,-0.0966312,-0.994312,-0.0447905,1.578,-0.174097,-0.980385,-0.0923886,1.284,-0.215302,-0.960611,-0.175702,1.275,-0.2139,-0.9346,-0.2842,1.495,-0.196103,-0.911712,-0.361005,1.821,-0.173506,-0.907133,-0.383414,2.174,-0.150394,-0.926666,-0.344487,2.476,-0.112299,-0.967188,-0.227897,2.741,-0.0677372,-0.995058,-0.072597,3.012,-0.0339284,-0.997152,0.0673568,3.314,-0.0273792,-0.98917,0.144196,3.668,-0.0533996,-0.981792,0.182299,4.122,0.110004,0.974634,-0.194907,1.666,0.196598,0.963988,-0.179098,1.217,0.290908,0.946526,-0.139504,0.8946,0.282509,0.954231,-0.0981432,0.8004,0.140801,0.989108,-0.0428904,0.9928,0.0340686,0.99936,-0.0108996,1.276,-0.00788971,0.999964,0.00326288,1.419,-0.0138898,0.999887,0.00574493,1.436,-0.00617586,0.999978,0.00255394,1.409,0,1,0,1.387}, 196);
Scene7.addChild(&OrientationInterpolator210);

OrientationInterpolator& OrientationInterpolator211 =  OrientationInterpolator();
OrientationInterpolator211.setDEF(CString("Surfer_L_Toe03-ROT-INTERP"));
OrientationInterpolator211.setKey(new float[]{0,0.03125,0.0625,0.09375,0.125,0.1563,0.1875,0.2188,0.25,0.2813,0.3125,0.3438,0.375,0.4063,0.4375,0.4688,0.5,0.5313,0.5625,0.5938,0.625,0.6563,0.6875,0.7188,0.75,0.7813,0.8125,0.8438,0.875,0.9063,0.9375,0.9688,1}, 33);
OrientationInterpolator211.setKeyValue(new float[]{0,-1,0,1.036,0,-1,0,0.1159,0,1,0,0.4363,0,-1,0,0.3716,0,-1,0,1.118,0,-1,0,1.234,0,-1,0,0.4363,0,1,0,0.3613,0,-1,0,0.0818099,0,-1,0,0.9102,0,-1,0,1.309,0,-1,0,0.7568,0,1,0,0.1636,0,1,0,0.194299,0,-1,0,0.6545,0,-1,0,1.258,0,-1,0,1.036,0,-1,0,0.1159,0,1,0,0.4363,0,-1,0,0.3716,0,-1,0,1.118,0,-1,0,1.234,0,-1,0,0.4363,0,1,0,0.3613,0,-1,0,0.0818099,0,-1,0,0.9102,0,-1,0,1.309,0,-1,0,0.7568,0,1,0,0.1636,0,1,0,0.194299,0,-1,0,0.6545,0,-1,0,1.258,0,-1,0,1.036}, 132);
Scene7.addChild(&OrientationInterpolator211);

OrientationInterpolator& OrientationInterpolator212 =  OrientationInterpolator();
OrientationInterpolator212.setDEF(CString("Surfer_L_Toe02-ROT-INTERP"));
OrientationInterpolator212.setKey(new float[]{0,0.03125,0.0625,0.09375,0.125,0.1563,0.1875,0.2188,0.25,0.2813,0.3125,0.3438,0.375,0.4063,0.4375,0.4688,0.5,0.5313,0.5625,0.5938,0.625,0.6563,0.6875,0.7188,0.75,0.7813,0.8125,0.8438,0.875,0.9063,0.9375,0.9688,1}, 33);
OrientationInterpolator212.setKeyValue(new float[]{0,-1,0,0.060679,0,1,0,0.4363,0,-1,0,0.2908,0,-1,0,0.9627,0,-1,0,1.067,0,-1,0,0.3491,0,1,0,0.3688,0,-1,0,0.0299968,0,-1,0,0.7755,0,-1,0,1.134,0,-1,0,0.6375,0,1,0,0.1909,0,1,0,0.2185,0,-1,0,0.5454,0,-1,0,1.088,0,-1,0,0.889,0,-1,0,0.060679,0,1,0,0.4363,0,-1,0,0.2908,0,-1,0,0.9627,0,-1,0,1.067,0,-1,0,0.3491,0,1,0,0.3688,0,-1,0,0.0299968,0,-1,0,0.7755,0,-1,0,1.134,0,-1,0,0.6375,0,1,0,0.1909,0,1,0,0.2185,0,-1,0,0.5454,0,-1,0,1.088,0,-1,0,0.889,0,-1,0,0.060679}, 132);
Scene7.addChild(&OrientationInterpolator212);

OrientationInterpolator& OrientationInterpolator213 =  OrientationInterpolator();
OrientationInterpolator213.setDEF(CString("Surfer_L_Toe01-ROT-INTERP"));
OrientationInterpolator213.setKey(new float[]{0,0.03125,0.0625,0.09375,0.125,0.1563,0.1875,0.2188,0.25,0.2813,0.3125,0.3438,0.375,0.4063,0.4375,0.4688,0.5,0.5313,0.5625,0.5938,0.625,0.6563,0.6875,0.7188,0.75,0.7813,0.8125,0.8438,0.875,0.9063,0.9375,0.9688,1}, 33);
OrientationInterpolator213.setKeyValue(new float[]{0,1,0,0.3491,0,-1,0,0.2021,0,-1,0,0.6245,0,-1,0,0.6214,0,1,0,0.0218149,0,1,0,0.6405,0,-1,0,0.0190868,0,-1,0,0.5151,0,-1,0,0.6981,0,-1,0,0.2308,0,1,0,0.4881,0,1,0,0.168101,0,-1,0,0.3709,0,-1,0,0.6889,0,-1,0,0.4554,0,1,0,0.2717,0,1,0,0.3491,0,-1,0,0.2021,0,-1,0,0.6245,0,-1,0,0.6214,0,1,0,0.0218149,0,1,0,0.6405,0,-1,0,0.0190868,0,-1,0,0.5151,0,-1,0,0.6981,0,-1,0,0.2308,0,1,0,0.4881,0,1,0,0.168101,0,-1,0,0.3709,0,-1,0,0.6889,0,-1,0,0.4554,0,1,0,0.2717,0,1,0,0.3491}, 132);
Scene7.addChild(&OrientationInterpolator213);

OrientationInterpolator& OrientationInterpolator214 =  OrientationInterpolator();
OrientationInterpolator214.setDEF(CString("Surfer_Heel_L-ROT-INTERP"));
OrientationInterpolator214.setKey(new float[]{0,0.03125,0.0625,0.09375,0.125,0.1563,0.1875,0.2188,0.25,0.2813,0.3125,0.3438,0.375,0.4063,0.4375,0.4688,0.5,0.5313,0.5625,0.5938,0.625,0.6563,0.6875,0.7188,0.75,0.7813,0.8125,0.8438,0.875,0.9063,0.9375,0.9688,1}, 33);
OrientationInterpolator214.setKeyValue(new float[]{-0.57735,-0.57735,0.57735,4.189,0.582283,0.597983,-0.550784,2.034,0.58791,0.621811,-0.517409,1.978,0.590506,0.639406,-0.492405,1.915,0.587206,0.642207,-0.492705,1.835,0.560618,0.590119,-0.580919,1.687,0.511601,0.498401,-0.699901,1.554,0.497316,0.473715,-0.726823,1.526,0.502616,0.482816,-0.717123,1.537,0.518613,0.510313,-0.686018,1.573,0.538528,0.545928,-0.641833,1.627,0.561276,0.609974,-0.559376,1.712,0.5838,0.6697,-0.459,1.847,0.622537,0.651739,-0.433226,2.021,-0.677261,-0.52567,0.51477,4.052,-0.67519,-0.521493,0.521693,4.046,-0.672327,-0.51902,0.527821,4.043,-0.668882,-0.517986,0.533186,4.043,-0.664822,-0.518217,0.538018,4.045,-0.660277,-0.519582,0.542281,4.05,-0.655201,-0.522001,0.546101,4.057,-0.649736,-0.525329,0.54943,4.066,-0.643894,-0.529395,0.552395,4.076,-0.637715,-0.534012,0.555113,4.087,-0.631307,-0.539006,0.557606,4.099,-0.624605,-0.544404,0.559904,4.111,-0.617696,-0.549897,0.562197,4.124,-0.610806,-0.555405,0.564306,4.137,-0.603802,-0.560702,0.566602,4.149,-0.596914,-0.565713,0.568913,4.161,-0.590112,-0.570312,0.571412,4.171,-0.5836,-0.5742,0.5742,4.181,-0.57735,-0.57735,0.57735,4.189}, 132);
Scene7.addChild(&OrientationInterpolator214);

OrientationInterpolator& OrientationInterpolator215 =  OrientationInterpolator();
OrientationInterpolator215.setDEF(CString("Surfer_Leg_L-ROT-INTERP"));
OrientationInterpolator215.setKey(new float[]{0,0.03125,0.0625,0.09375,0.125,0.1563,0.1875,0.2188,0.25,0.2813,0.3125,0.3438,0.375,0.4063,0.4375,0.4688,0.5,0.5313,0.5625,0.5938,0.625,0.6563,0.6875,0.7188,0.75,0.7813,0.8125,0.8438,0.875,0.9063,0.9375,0.9688,1}, 33);
OrientationInterpolator215.setKeyValue(new float[]{0,0,1,3.142,0.000821696,-0.00309498,0.999995,3.192,0.00332404,-0.0127602,0.999913,3.351,0.00700607,-0.0270303,0.99961,3.582,0.0107701,-0.0407205,0.999112,3.784,0.0132596,-0.0434686,0.998967,3.791,0.0155599,-0.0526197,0.998493,3.718,0.0165896,-0.0645684,0.997775,3.702,0.0102599,-0.0574796,0.998294,3.782,0.00440881,-0.0475979,0.998857,3.839,0.00522582,-0.0451585,0.998966,3.767,0.00814869,-0.0448183,0.998962,3.653,0.0101904,-0.0448718,0.998941,3.577,0.00985537,-0.0450317,0.998937,3.593,0.0086892,-0.045581,0.998923,3.647,0.00849517,-0.0456709,0.99892,3.656,0.0101904,-0.0448718,0.998941,3.577,0.0121606,-0.0442321,0.998947,3.49,0.0142906,-0.0437019,0.998942,3.397,0.0161808,-0.0429021,0.998948,3.307,0.0174198,-0.0414495,0.998989,3.229,0.01753,-0.0385601,0.999103,3.163,0.0167693,-0.0347285,0.999256,3.112,0.0158196,-0.0315393,0.999377,3.086,0.0150105,-0.0302309,0.99943,3.102,0.0140195,-0.0295689,0.999464,3.142,0.0125805,-0.0274812,0.999543,3.169,0.01006,-0.02224,0.999702,3.171,0.00726731,-0.0161507,0.999843,3.165,0.00434319,-0.00963743,0.999944,3.155,0.00190098,-0.00419096,0.999989,3.147,0.0004681,-0.001025,0.999999,3.143,0,0,1,3.142}, 132);
Scene7.addChild(&OrientationInterpolator215);

OrientationInterpolator& OrientationInterpolator216 =  OrientationInterpolator();
OrientationInterpolator216.setDEF(CString("Surfer_R_Toe03-ROT-INTERP"));
OrientationInterpolator216.setKey(new float[]{0,0.03125,0.0625,0.09375,0.125,0.1563,0.1875,0.2188,0.25,0.2813,0.3125,0.3438,0.375,0.4063,0.4375,0.4688,0.5}, 17);
OrientationInterpolator216.setKeyValue(new float[]{0,0,1,0,-0.0562295,0.986392,-0.154499,0.187401,-0.0728275,0.977066,-0.200093,0.3857,-0.0560588,0.98648,-0.153997,0.5628,0,1,0,0.6981,0.142793,0.85996,0.489978,0.8999,0.285794,0.549088,0.785382,1.171,0.561875,0.160693,0.811464,0.9919,0.691169,-0.66357,0.286287,1.33,0.189701,0.640102,0.744502,1.29,0.230101,0.603802,0.763202,1.279,0.724797,-0.302099,0.619197,1.053,0.726196,-0.533997,0.432998,1.025,0.713763,-0.595869,0.368081,0.8367,0.711498,-0.604299,0.358599,0.564,0.72098,-0.564084,0.402489,0.265,0,0,1,0}, 68);
Scene7.addChild(&OrientationInterpolator216);

OrientationInterpolator& OrientationInterpolator217 =  OrientationInterpolator();
OrientationInterpolator217.setDEF(CString("Surfer_R_Toe02-ROT-INTERP"));
OrientationInterpolator217.setKey(new float[]{0,0.03125,0.0625,0.09375,0.125,0.1563,0.1875,0.2188,0.25,0.2813,0.3125,0.3438,0.375,0.4063,0.4375,0.4688,0.5}, 17);
OrientationInterpolator217.setKeyValue(new float[]{0,0,1,0,-0.0464815,0.993932,-0.0996932,0.2327,-0.0605004,0.989706,-0.129701,0.4765,-0.0462991,0.99398,-0.099298,0.6987,0,1,0,0.8727,0.131006,0.930039,0.343314,1.037,0.295794,0.714185,0.634386,1.157,0.643701,0.29,0.708201,0.8382,0.747609,-0.587507,0.309704,0.9851,0.192391,0.786564,0.586773,1.337,0.252005,0.746916,0.615313,1.268,0.800285,-0.190096,0.568689,0.8336,0.774871,-0.508881,0.374986,0.8172,0.746207,-0.590906,0.306603,0.6754,0.741562,-0.601569,0.296985,0.4561,0.762483,-0.548488,0.343192,0.212401,0,0,1,0}, 68);
Scene7.addChild(&OrientationInterpolator217);

OrientationInterpolator& OrientationInterpolator218 =  OrientationInterpolator();
OrientationInterpolator218.setDEF(CString("Surfer_R_Toe01-ROT-INTERP"));
OrientationInterpolator218.setKey(new float[]{0,0.03125,0.0625,0.09375,0.125,0.1563,0.1875,0.2188,0.25,0.2813,0.3125,0.3438,0.375,0.4063,0.4375,0.4688,0.5}, 17);
OrientationInterpolator218.setKeyValue(new float[]{0,0,1,0,0.0180505,0.999829,0.00400112,0.3708,0.0225907,0.999732,0.00500716,0.7852,0.0176406,0.999837,0.00391014,1.112,0,1,0,1.222,-0.130404,0.990629,-0.0406012,0.6596,-0.543577,-0.830665,-0.120495,0.3144,-0.164797,-0.985885,0.0295396,1.106,-0.319013,-0.947339,-0.0279112,0.5513,-0.128699,0.981993,-0.138299,0.9589,-0.177695,0.971771,-0.155195,0.7804,-0.534196,-0.837295,-0.116499,0.3328,-0.297808,-0.954426,-0.0195305,0.5258,-0.255103,-0.96691,-0.00284103,0.4767,-0.249893,-0.968273,-0.000794078,0.3257,-0.276816,-0.960856,-0.0113107,0.143199,0,0,1,0}, 68);
Scene7.addChild(&OrientationInterpolator218);

OrientationInterpolator& OrientationInterpolator219 =  OrientationInterpolator();
OrientationInterpolator219.setDEF(CString("Surfer_Heel_R-ROT-INTERP"));
OrientationInterpolator219.setKey(new float[]{0,0.03125,0.0625,0.09375,0.125,0.1563,0.1875,0.2188,0.25,0.2813,0.3125,0.3438,0.375,0.4063,0.4375,0.4688,0.5,0.5313,0.5625,0.5938,0.625,0.6563,0.6875,0.7188,0.75,0.7813,0.8125,0.8438,0.875,0.9063,0.9375,0.9688,1}, 33);
OrientationInterpolator219.setKeyValue(new float[]{-0.57735,-0.57735,0.57735,4.189,0.52398,0.558479,-0.643076,2.023,0.516485,0.582783,-0.627382,2.077,-0.516498,-0.612397,0.598498,4.132,-0.503005,-0.623807,0.598206,4.114,0.432401,0.573002,-0.696202,2.004,0.363802,0.511903,-0.778205,1.869,0.467284,0.59648,-0.652578,2.074,-0.554128,-0.660433,0.506725,3.946,-0.504221,-0.624626,0.596325,4.111,0.43959,0.576487,-0.688784,2.016,0.360095,0.514993,-0.77789,1.878,0.335011,0.487116,-0.806527,1.826,0.43501,0.545712,-0.716216,1.93,-0.558075,-0.611073,0.561375,4.143,-0.609804,-0.623004,0.489903,4.043,0.577384,0.577284,-0.577384,2.094,0.563695,0.563095,-0.604295,2.054,0.549596,0.549596,-0.629196,2.018,0.54071,0.54071,-0.644412,1.997,0.550128,0.554928,-0.624031,2.019,0.564424,0.573925,-0.593326,2.058,0.57735,0.57735,-0.57735,2.094,-0.597196,-0.526397,0.605196,4.137,-0.59339,-0.489992,0.638589,4.138,0.527405,0.555905,-0.642506,1.995,0.426798,0.649096,-0.629696,1.817,0.387612,0.660321,-0.643221,1.749,0.478007,0.520108,-0.707811,1.871,0.518783,0.495484,-0.696677,1.946,0.542926,0.516925,-0.661831,1.996,0.561276,0.550076,-0.618373,2.042,0.578483,0.576783,-0.576783,2.093}, 132);
Scene7.addChild(&OrientationInterpolator219);

OrientationInterpolator& OrientationInterpolator220 =  OrientationInterpolator();
OrientationInterpolator220.setDEF(CString("Surfer_Leg_R-ROT-INTERP"));
OrientationInterpolator220.setKey(new float[]{0,0.03125,0.0625,0.09375,0.125,0.1563,0.1875,0.2188,0.25,0.2813,0.3125,0.3438,0.375,0.4063,0.4375,0.4688,0.5,0.5313,0.5625,0.5938,0.625,0.6563,0.6875,0.7188,0.75,0.7813,0.8125,0.8438,0.875,0.9063,0.9375,0.9688,1}, 33);
OrientationInterpolator220.setKeyValue(new float[]{0,0,1,2.967,-0.00809825,-0.0259208,0.999631,2.901,-0.0343386,-0.111596,0.99316,2.688,-0.07042,-0.2289,0.9709,2.416,-0.100705,-0.319416,0.942248,2.23,-0.105306,-0.300816,0.94785,2.293,-0.0995772,-0.260693,0.960273,2.389,-0.101795,-0.307286,0.946157,2.199,-0.00988315,-0.368906,0.929414,2.206,-0.000357718,-0.347318,0.937747,2.266,-0.0196202,-0.327604,0.944611,2.335,-0.0215906,-0.269608,0.962728,2.439,-0.0169906,-0.198606,0.979932,2.559,-0.0106197,-0.125997,0.991974,2.685,-0.00438084,-0.0587478,0.998263,2.808,-0.000939975,-0.00724781,0.999973,2.916,0,0,1,2.967,0.0158996,0.000673982,0.999873,2.976,0.03461,-0.001994,0.999399,2.971,0.0436218,-0.00381516,0.999041,2.967,0.00681684,-0.000594886,0.999977,2.967,0.0191603,-0.00167503,0.999815,2.967,0.0436218,-0.00381516,0.999041,2.967,-0.0277603,0.00253303,0.999611,2.962,-0.087147,0.00762574,0.996166,2.968,-0.0517575,0.00374382,0.998653,3.004,0.0135001,-0.00287401,0.999905,3.045,0.0495177,-0.00611372,0.998755,3.048,0.0493285,-0.00495285,0.99877,2.99,0.0387118,-0.00303014,0.999246,2.941,0.0234605,-0.00165704,0.999723,2.942,0.00599589,-0.000444992,0.999982,2.962,0,0,1,2.967}, 132);
Scene7.addChild(&OrientationInterpolator220);

PositionInterpolator& PositionInterpolator221 =  PositionInterpolator();
PositionInterpolator221.setDEF(CString("Surfer_Leg_R-POS-INTERP"));
PositionInterpolator221.setKey(new float[]{0,0.03125,0.0625,0.09375,0.125,0.1563,0.1875,0.2188,0.25,0.2813,0.3125,0.3438,0.375,0.4063,0.4375,0.4688}, 16);
PositionInterpolator221.setKeyValue(new float[]{-1.012,-0.06006,-1.719,-1.039,-0.05002,-1.719,-1.1,-0.02683,-1.719,-1.169,-0.0008667,-1.719,-1.218,0.01748,-1.719,-1.24,0.0259,-1.719,-1.25,0.02954,-1.719,-1.249,0.02921,-1.719,-1.24,0.0257,-1.719,-1.224,0.01982,-1.719,-1.199,0.01044,-1.719,-1.155,-0.006231,-1.719,-1.102,-0.02614,-1.719,-1.053,-0.04468,-1.719,-1.019,-0.05726,-1.719,-1.012,-0.06006,-1.719}, 48);
Scene7.addChild(&PositionInterpolator221);

PositionInterpolator& PositionInterpolator222 =  PositionInterpolator();
PositionInterpolator222.setDEF(CString("Surfer__Boolean-POS-INTERP"));
PositionInterpolator222.setKey(new float[]{0,0.03125,0.0625,0.09375,0.125,0.1563,0.1875,0.2188,0.25,0.2813,0.3125,0.3438,0.375,0.4063,0.4375,0.4688,0.5,0.5313,0.5625,0.5938,0.625,0.6563,0.6875,0.7188,0.75,0.7813,0.8125,0.8438,0.875,0.9063,0.9375,0.9688,1}, 33);
PositionInterpolator222.setKeyValue(new float[]{0,0,0,0,0.01074,0,0,0.03906,0,0,0.0791,0,0,0.125,0,0,0.1709,0,0,0.2109,0,0,0.2393,0,0,0.25,0,0,0.2393,0,0,0.2109,0,0,0.1709,0,0,0.125,0,0,0.0791,0,0,0.03906,0,0,0.01074,0,0,0,0,0,0.01074,0,0,0.03906,0,0,0.0791,0,0,0.125,0,0,0.1709,0,0,0.2109,0,0,0.2393,0,0,0.25,0,0,0.2393,0,0,0.2109,0,0,0.1709,0,0,0.125,0,0,0.0791,0,0,0.03906,0,0,0.01074,0,0,0,0}, 99);
Scene7.addChild(&PositionInterpolator222);

Switch& Switch223 =  Switch();
Switch223.setDEF(CString("Surfer"));
Switch223.setWhichChoice(0);
Group& Group224 =  Group();
Transform& Transform225 =  Transform();
Transform225.setDEF(CString("SurferCollisionMover"));
Transform225.setTranslation(new float[]{-126.6,0,-384.3});
Transform& Transform226 =  Transform();
Transform226.setDEF(CString("SurferCollisionSpinner"));
Transform226.setRotation(new float[]{1,0,0,0.0134964});
ProximitySensor& ProximitySensor227 =  ProximitySensor();
ProximitySensor227.setDEF(CString("EatSurfer"));
ProximitySensor227.setSize(new float[]{4,4,4});
ProximitySensor227.setCenter(new float[]{0,0,4});
Transform226.addChild(&ProximitySensor227);

Transform225.addChild(&Transform226);

Group224.addChild(&Transform225);

Transform& Transform228 =  Transform();
Transform228.setDEF(CString("Inline_Surfer01-ROOT"));
Transform228.setTranslation(new float[]{-126.6,0,-384.3});
Transform228.setRotation(new float[]{0,-1,0,0.6981});
ProximitySensor& ProximitySensor229 =  ProximitySensor();
ProximitySensor229.setDEF(CString("ScareSurfer"));
ProximitySensor229.setSize(new float[]{23,5,23});
ProximitySensor229.setCenter(new float[]{0,0,-6});
Transform228.addChild(&ProximitySensor229);

VisibilitySensor& VisibilitySensor230 =  VisibilitySensor();
VisibilitySensor230.setDEF(CString("surferVisible"));
VisibilitySensor230.setSize(new float[]{1,1,1});
Transform228.addChild(&VisibilitySensor230);

TimeSensor& TimeSensor231 =  TimeSensor();
TimeSensor231.setDEF(CString("TimeSensor_Surfer-TIMER"));
TimeSensor231.setCycleInterval(6.4);
TimeSensor231.setLoop(True);
TimeSensor231.setStartTime(1);
Transform228.addChild(&TimeSensor231);

Transform& Transform232 =  Transform();
Transform232.setDEF(CString("Surfer__Boolean-ROOT"));
Transform232.setTranslation(new float[]{0,0.221774,0});
Shape& Shape233 =  Shape();
Appearance& Appearance234 =  Appearance();
Material& Material235 =  Material();
Material235.setDiffuseColor(new float[]{0,0,0});
Material235.setEmissiveColor(new float[]{0.007843,0.3922,0.6157});
Material235.setShininess(0);
Appearance234.addChild(&Material235);

Shape233.addChild(&Appearance234);

IndexedFaceSet& IndexedFaceSet236 =  IndexedFaceSet();
IndexedFaceSet236.setDEF(CString("Surfer__Boolean-FACES"));
IndexedFaceSet236.setCoordIndex(new int32_t[]{0,2,3,-1,3,1,0,-1,4,5,7,-1,7,6,4,-1,0,1,5,-1,5,4,0,-1,1,3,7,-1,7,5,1,-1,3,2,6,-1,6,7,3,-1,2,0,4,-1,4,6,2,-1}, 48);
Coordinate& Coordinate237 =  Coordinate();
Coordinate237.setDEF(CString("Surfer__Boolean-COORD"));
Coordinate237.setPoint(new float[]{-5.98,0,5.451,5.98,0,5.451,-5.98,0,-5.451,5.98,0,-5.451,-5.98,3,5.451,5.98,3,5.451,-5.98,3,-5.451,5.98,3,-5.451}, 24);
IndexedFaceSet236.setCoord(&Coordinate237);

Shape233.setGeometry(&IndexedFaceSet236);

Transform232.addChild(&Shape233);

Transform& Transform238 =  Transform();
Transform238.setDEF(CString("Surfer_Board-ROOT"));
Transform238.setTranslation(new float[]{-0.0417,-0.0001604,0.9788});
Transform238.setRotation(new float[]{0,0,1,3.142});
PositionInterpolator& PositionInterpolator239 =  PositionInterpolator();
PositionInterpolator239.setDEF(CString("SurferAv_Board-POS-INTERP"));
PositionInterpolator239.setKey(new float[]{0,0.1875,0.375,0.5625,0.75,0.9375,1}, 7);
PositionInterpolator239.setKeyValue(new float[]{-0.0417,-0.0001604,0.9788,-0.0417,0.07741,0.9807,-0.0417,-0.02425,0.9775,-0.0417,-0.2906,0.9381,-0.0417,0.07953,0.9807,-0.0417,-0.06991,0.974,-0.0417,-0.0001608,0.9788}, 21);
Transform238.addChild(&PositionInterpolator239);

OrientationInterpolator& OrientationInterpolator240 =  OrientationInterpolator();
OrientationInterpolator240.setDEF(CString("SurferAv_Board-ROT-INTERP"));
OrientationInterpolator240.setKey(new float[]{0,0.1875,0.375,0.5625,0.75,0.9375,1}, 7);
OrientationInterpolator240.setKeyValue(new float[]{0,0,1,3.142,0,0.0242102,0.999707,3.142,0,-0.00752679,0.999972,3.142,0,-0.0915005,0.995805,3.142,0,0.0248698,0.999691,3.142,0,-0.0218092,0.999762,3.142,0,0,1,3.142}, 28);
Transform238.addChild(&OrientationInterpolator240);

Shape& Shape241 =  Shape();
Appearance& Appearance242 =  Appearance();
Material& Material243 =  Material();
Material243.setDiffuseColor(new float[]{1,0.9882,0});
Material243.setShininess(0.25);
Appearance242.addChild(&Material243);

Shape241.addChild(&Appearance242);

IndexedFaceSet& IndexedFaceSet244 =  IndexedFaceSet();
IndexedFaceSet244.setDEF(CString("Surfer_Board-FACES"));
IndexedFaceSet244.setCoordIndex(new int32_t[]{25,26,27,-1,28,29,30,-1,31,32,33,-1,34,25,27,-1,34,27,35,-1,34,35,36,-1,37,34,36,-1,38,31,33,-1,33,28,30,-1,33,30,39,-1,38,33,39,-1,38,39,37,-1,40,38,37,-1,41,42,43,-1,44,45,40,-1,44,40,37,-1,46,44,37,-1,43,46,37,-1,41,43,37,-1,47,41,37,-1,47,37,36,-1,48,47,36,-1,48,36,49,-1,19,20,26,-1,26,25,19,-1,20,21,27,-1,27,26,20,-1,13,14,29,-1,29,28,13,-1,14,15,30,-1,30,29,14,-1,10,11,32,-1,32,31,10,-1,11,12,33,-1,33,32,11,-1,18,19,25,-1,25,34,18,-1,21,22,35,-1,35,27,21,-1,22,23,36,-1,36,35,22,-1,17,18,34,-1,34,37,17,-1,9,10,31,-1,31,38,9,-1,12,13,28,-1,28,33,12,-1,15,16,39,-1,39,30,15,-1,16,17,37,-1,37,39,16,-1,8,9,38,-1,38,40,8,-1,2,3,42,-1,42,41,2,-1,3,4,43,-1,43,42,3,-1,6,7,45,-1,45,44,6,-1,7,8,40,-1,40,45,7,-1,5,6,44,-1,44,46,5,-1,4,5,46,-1,46,43,4,-1,1,2,41,-1,41,47,1,-1,0,1,47,-1,47,48,0,-1,23,24,49,-1,49,36,23,-1,24,0,48,-1,48,49,24,-1}, 292);
Coordinate& Coordinate245 =  Coordinate();
Coordinate245.setDEF(CString("Surfer_Board-COORD"));
Coordinate245.setPoint(new float[]{0.1657,0,1.216,0.06499,0,1.079,0.08306,0,0.8577,0.1982,0,0.7584,0.08321,0,0.5542,0.09455,0,0.4045,0.2046,0,0.2595,0.4192,0,0.2487,0.4933,0,0.07054,0.611,0,0.005771,0.7443,0,0.02052,0.8736,0,0.1151,1.001,0,-0.9694,0.5954,0,-2.897,0.01121,0,-4.026,-0.5899,0,-2.87,-0.9896,0,-0.9747,-0.8437,0,0.5138,-0.4811,0,2.019,0.5406,0,2.023,0.6324,0,1.543,0.5527,0,1.594,0.406,0,1.551,0.3175,0,1.475,0.2886,0,1.288,0.5152,0.1,1.879,0.6324,0.1,1.543,0.5527,0.1,1.594,0.5674,0.1,-2.807,0.01095,0.1,-3.882,-0.5615,0.1,-2.781,0.7443,0.1,0.02052,0.8736,0.1,0.1151,0.9539,0.1,-0.971,-0.4579,0.1,1.875,0.406,0.1,1.551,0.3175,0.1,1.475,-0.8032,0.1,0.4417,0.611,0.1,0.005771,-0.9422,0.1,-0.976,0.4933,0.1,0.07054,0.08306,0.1,0.8577,0.1982,0.1,0.7584,0.08321,0.1,0.5542,0.2046,0.1,0.2595,0.4192,0.1,0.2487,0.09455,0.1,0.4045,0.06499,0.1,1.079,0.1657,0.1,1.216,0.2886,0.1,1.288}, 150);
IndexedFaceSet244.setCoord(&Coordinate245);

Shape241.setGeometry(&IndexedFaceSet244);

Transform238.addChild(&Shape241);

Transform& Transform246 =  Transform();
Transform246.setDEF(CString("Surfer_Leg_R-ROOT"));
Transform246.setTranslation(new float[]{-1.012,-0.06006,-1.719});
Transform246.setRotation(new float[]{0.0167852,-0.00146719,0.999858,2.967});
PositionInterpolator& PositionInterpolator247 =  PositionInterpolator();
PositionInterpolator247.setDEF(CString("SurferAv_Leg_R-POS-INTERP"));
PositionInterpolator247.setKey(new float[]{0,0.1875,0.375,0.5625,0.75}, 5);
PositionInterpolator247.setKeyValue(new float[]{-1.015,-0.03887,-1.643,-1.015,-0.183,-1.643,-1.131,-0.6489,-1.327,-1.119,-1.619,-0.7108,-1.038,-0.64,-0.1306}, 15);
Transform246.addChild(&PositionInterpolator247);

OrientationInterpolator& OrientationInterpolator248 =  OrientationInterpolator();
OrientationInterpolator248.setDEF(CString("SurferAv_Leg_R-ROT-INTERP"));
OrientationInterpolator248.setKey(new float[]{0,0.1875,0.375,0.5625,0.75}, 5);
OrientationInterpolator248.setKeyValue(new float[]{-0.0126894,0.0231689,0.999651,2.981,0.00260013,-0.282214,0.959348,2.971,-0.122899,0.00777991,0.992389,3.061,-0.230396,0.368594,0.900586,3.257,0.137796,-0.71608,-0.684281,3.233}, 20);
Transform246.addChild(&OrientationInterpolator248);

Shape& Shape249 =  Shape();
Appearance& Appearance250 =  Appearance();
Material& Material251 =  Material();
Material251.setDiffuseColor(new float[]{0.702,0.6,0.3843});
Material251.setShininess(0.25);
Appearance250.addChild(&Material251);

Shape249.addChild(&Appearance250);

IndexedFaceSet& IndexedFaceSet252 =  IndexedFaceSet();
IndexedFaceSet252.setDEF(CString("Surfer_Leg_R-FACES"));
IndexedFaceSet252.setCreaseAngle(3);
IndexedFaceSet252.setCoordIndex(new int32_t[]{0,2,1,-1,0,3,2,-1,0,4,3,-1,0,5,4,-1,0,6,5,-1,0,7,6,-1,0,8,7,-1,0,1,8,-1,1,10,9,-1,1,2,10,-1,2,11,10,-1,2,3,11,-1,3,12,11,-1,3,4,12,-1,4,13,12,-1,4,5,13,-1,5,14,13,-1,5,6,14,-1,6,15,14,-1,6,7,15,-1,7,16,15,-1,7,8,16,-1,8,9,16,-1,8,1,9,-1,17,9,10,-1,17,10,11,-1,17,11,12,-1,17,12,13,-1,17,13,14,-1,17,14,15,-1,17,15,16,-1,17,16,9,-1}, 128);
Coordinate& Coordinate253 =  Coordinate();
Coordinate253.setDEF(CString("Surfer_Leg_R-COORD"));
Coordinate253.setPoint(new float[]{0,0,0,0.1413,0,0,0.0999,0,0.0999,0,0,0.1413,-0.0999,0,0.0999,-0.1413,0,0,-0.0999,0,-0.0999,0,0,-0.1413,0.0999,0,-0.0999,0.1413,-1.496,0,0.0999,-1.496,0.0999,0,-1.496,0.1413,-0.0999,-1.496,0.0999,-0.1413,-1.496,0,-0.0999,-1.496,-0.0999,0,-1.496,-0.1413,0.0999,-1.496,-0.0999,0,-1.496,0}, 54);
IndexedFaceSet252.setCoord(&Coordinate253);

Shape249.setGeometry(&IndexedFaceSet252);

Transform246.addChild(&Shape249);

Transform& Transform254 =  Transform();
Transform254.setDEF(CString("Surfer_Calf_R-ROOT"));
Transform254.setTranslation(new float[]{0.02795,-0.3406,0.07907});
Transform254.setRotation(new float[]{-1,0,0,0.0872687});
Transform254.setScale(new float[]{1,1.958,0.8});
Shape& Shape255 =  Shape();
Appearance& Appearance256 =  Appearance();
Material& Material257 =  Material();
Material257.setDiffuseColor(new float[]{0.702,0.6,0.3843});
Material257.setShininess(0.25);
Appearance256.addChild(&Material257);

Shape255.addChild(&Appearance256);

IndexedFaceSet& IndexedFaceSet258 =  IndexedFaceSet();
IndexedFaceSet258.setDEF(CString("Surfer_Calf_R-FACES"));
IndexedFaceSet258.setCreaseAngle(3);
IndexedFaceSet258.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,1,-1,1,9,10,-1,1,10,2,-1,2,10,11,-1,2,11,3,-1,3,11,12,-1,3,12,4,-1,4,12,13,-1,4,13,5,-1,5,13,14,-1,5,14,6,-1,6,14,15,-1,6,15,7,-1,7,15,16,-1,7,16,8,-1,8,16,9,-1,8,9,1,-1,9,17,18,-1,9,18,10,-1,10,18,19,-1,10,19,11,-1,11,19,20,-1,11,20,12,-1,12,20,21,-1,12,21,13,-1,13,21,22,-1,13,22,14,-1,14,22,23,-1,14,23,15,-1,15,23,24,-1,15,24,16,-1,16,24,17,-1,16,17,9,-1,25,18,17,-1,25,19,18,-1,25,20,19,-1,25,21,20,-1,25,22,21,-1,25,23,22,-1,25,24,23,-1,25,17,24,-1}, 192);
Coordinate& Coordinate259 =  Coordinate();
Coordinate259.setDEF(CString("Surfer_Calf_R-COORD"));
Coordinate259.setPoint(new float[]{0,0.278,0,0,0.1966,-0.1966,-0.139,0.1966,-0.139,-0.1966,0.1966,0,-0.139,0.1966,0.139,0,0.1966,0.1966,0.139,0.1966,0.139,0.1966,0.1966,0,0.139,0.1966,-0.139,0,0,-0.278,-0.1966,0,-0.1966,-0.278,0,0,-0.1966,0,0.1966,0,0,0.278,0.1966,0,0.1966,0.278,0,0,0.1966,0,-0.1966,0,-0.1966,-0.1966,-0.139,-0.1966,-0.139,-0.1966,-0.1966,0,-0.139,-0.1966,0.139,0,-0.1966,0.1966,0.139,-0.1966,0.139,0.1966,-0.1966,0,0.139,-0.1966,-0.139,0,-0.278,0}, 78);
IndexedFaceSet258.setCoord(&Coordinate259);

Shape255.setGeometry(&IndexedFaceSet258);

Transform254.addChild(&Shape255);

Transform246.addChild(&Transform254);

Transform& Transform260 =  Transform();
Transform260.setDEF(CString("Surfer_Heel_R-ROOT"));
Transform260.setTranslation(new float[]{0.00156,-1.517,-0.02254});
Transform260.setRotation(new float[]{0.561764,0.570371,-0.599248,2.05039});
Shape& Shape261 =  Shape();
Appearance& Appearance262 =  Appearance();
Material& Material263 =  Material();
Material263.setDiffuseColor(new float[]{0.702,0.6,0.3843});
Material263.setShininess(0.25);
Appearance262.addChild(&Material263);

Shape261.addChild(&Appearance262);

IndexedFaceSet& IndexedFaceSet264 =  IndexedFaceSet();
IndexedFaceSet264.setDEF(CString("Surfer_Heel_R-FACES"));
IndexedFaceSet264.setCreaseAngle(3);
IndexedFaceSet264.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,1,-1,1,7,8,-1,1,8,2,-1,2,8,9,-1,2,9,3,-1,3,9,10,-1,3,10,4,-1,4,10,11,-1,4,11,5,-1,5,11,12,-1,5,12,6,-1,6,12,7,-1,6,7,1,-1,13,8,7,-1,13,9,8,-1,13,10,9,-1,13,11,10,-1,13,12,11,-1,13,7,12,-1}, 96);
Coordinate& Coordinate265 =  Coordinate();
Coordinate265.setDEF(CString("Surfer_Heel_R-COORD"));
Coordinate265.setPoint(new float[]{0,0.1824,0,0,0.0912,-0.158,-0.1368,0.0912,-0.07898,-0.1368,0.0912,0.07898,0,0.0912,0.158,0.1368,0.0912,0.07898,0.1368,0.0912,-0.07898,0,-0.0912,-0.158,-0.1368,-0.0912,-0.07898,-0.1368,-0.0912,0.07898,0,-0.0912,0.158,0.1368,-0.0912,0.07898,0.1368,-0.0912,-0.07898,0,-0.1824,0}, 42);
IndexedFaceSet264.setCoord(&Coordinate265);

Shape261.setGeometry(&IndexedFaceSet264);

Transform260.addChild(&Shape261);

Transform& Transform266 =  Transform();
Transform266.setDEF(CString("Surfer_Foot_R-ROOT"));
Transform266.setTranslation(new float[]{0.2704,0,-0.02074});
Transform266.setRotation(new float[]{1,0,0,0.2618});
Transform266.setScale(new float[]{2.05,1,0.4436});
PositionInterpolator& PositionInterpolator267 =  PositionInterpolator();
PositionInterpolator267.setDEF(CString("SurferAv_Foot_R-POS-INTERP"));
PositionInterpolator267.setKey(new float[]{0,0.1875,0.375,0.5625,0.75}, 5);
PositionInterpolator267.setKeyValue(new float[]{0.2884,0.08679,0.0007157,0.2509,0.1126,0.1181,0.1482,0.1242,0.2566,0.0839,0.1066,0.3088,0.06327,0.0714,0.3248}, 15);
Transform266.addChild(&PositionInterpolator267);

OrientationInterpolator& OrientationInterpolator268 =  OrientationInterpolator();
OrientationInterpolator268.setDEF(CString("SurferAv_Foot_R-ROT-INTERP"));
OrientationInterpolator268.setKey(new float[]{0,0.1875,0.375,0.5625,0.75}, 5);
OrientationInterpolator268.setKeyValue(new float[]{-0.967379,-0.253195,0.00832282,0.3729,-0.70973,-0.704429,0.00795233,0.5513,-0.46399,-0.88358,-0.0632386,0.8957,-0.346388,-0.931667,-0.109596,1.043,-0.250092,-0.955768,-0.154795,1.064}, 20);
Transform266.addChild(&OrientationInterpolator268);

Shape& Shape269 =  Shape();
Appearance& Appearance270 =  Appearance();
Material& Material271 =  Material();
Material271.setDiffuseColor(new float[]{0.702,0.6,0.3843});
Material271.setShininess(0.25);
Appearance270.addChild(&Material271);

Shape269.addChild(&Appearance270);

IndexedFaceSet& IndexedFaceSet272 =  IndexedFaceSet();
IndexedFaceSet272.setDEF(CString("Surfer_Foot_R-FACES"));
IndexedFaceSet272.setCreaseAngle(3);
IndexedFaceSet272.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,1,-1,1,9,10,-1,1,10,2,-1,2,10,11,-1,2,11,3,-1,3,11,12,-1,3,12,4,-1,4,12,13,-1,4,13,5,-1,5,13,14,-1,5,14,6,-1,6,14,15,-1,6,15,7,-1,7,15,16,-1,7,16,8,-1,8,16,9,-1,8,9,1,-1,9,17,18,-1,9,18,10,-1,10,18,19,-1,10,19,11,-1,11,19,20,-1,11,20,12,-1,12,20,21,-1,12,21,13,-1,13,21,22,-1,13,22,14,-1,14,22,23,-1,14,23,15,-1,15,23,24,-1,15,24,16,-1,16,24,17,-1,16,17,9,-1,25,18,17,-1,25,19,18,-1,25,20,19,-1,25,21,20,-1,25,22,21,-1,25,23,22,-1,25,24,23,-1,25,17,24,-1}, 192);
Coordinate& Coordinate273 =  Coordinate();
Coordinate273.setDEF(CString("Surfer_Foot_R-COORD"));
Coordinate273.setPoint(new float[]{0,0.2224,0,0,0.1573,-0.1573,-0.1112,0.1573,-0.1112,-0.1573,0.1573,0,-0.1112,0.1573,0.1112,0,0.1573,0.1573,0.1112,0.1573,0.1112,0.1573,0.1573,0,0.1112,0.1573,-0.1112,0,0,-0.2224,-0.1573,0,-0.1573,-0.2224,0,0,-0.1573,0,0.1573,0,0,0.2224,0.1573,0,0.1573,0.2224,0,0,0.1573,0,-0.1573,0,-0.1573,-0.1573,-0.1112,-0.1573,-0.1112,-0.1573,-0.1573,0,-0.1112,-0.1573,0.1112,0,-0.1573,0.1573,0.1112,-0.1573,0.1112,0.1573,-0.1573,0,0.1112,-0.1573,-0.1112,0,-0.2224,0}, 78);
IndexedFaceSet272.setCoord(&Coordinate273);

Shape269.setGeometry(&IndexedFaceSet272);

Transform266.addChild(&Shape269);

Transform& Transform274 =  Transform();
Transform274.setDEF(CString("Surfer_R_Toe02-ROOT"));
Transform274.setTranslation(new float[]{0.2303,0.006877,-0.04773});
Transform274.setScaleOrientation(new float[]{-0.0943647,0.793154,-0.601665,0.3048});
PositionInterpolator& PositionInterpolator275 =  PositionInterpolator();
PositionInterpolator275.setDEF(CString("SurferAv_R_Toe02-POS-INTERP"));
PositionInterpolator275.setKey(new float[]{0,0.1875,0.375}, 3);
PositionInterpolator275.setKeyValue(new float[]{0.2303,0.006877,-0.04773,0.2298,0.006892,-0.1269,0.2311,0.006852,0.08421}, 9);
Transform274.addChild(&PositionInterpolator275);

Shape& Shape276 =  Shape();
Appearance& Appearance277 =  Appearance();
Material& Material278 =  Material();
Material278.setDiffuseColor(new float[]{0.702,0.6,0.3843});
Material278.setShininess(0.25);
Appearance277.addChild(&Material278);

Shape276.addChild(&Appearance277);

IndexedFaceSet& IndexedFaceSet279 =  IndexedFaceSet();
IndexedFaceSet279.setDEF(CString("Surfer_R_Toe02-FACES"));
IndexedFaceSet279.setCreaseAngle(3);
IndexedFaceSet279.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,1,-1,1,7,8,-1,1,8,2,-1,2,8,9,-1,2,9,3,-1,3,9,10,-1,3,10,4,-1,4,10,11,-1,4,11,5,-1,5,11,12,-1,5,12,6,-1,6,12,7,-1,6,7,1,-1,13,8,7,-1,13,9,8,-1,13,10,9,-1,13,11,10,-1,13,12,11,-1,13,7,12,-1}, 96);
Coordinate& Coordinate280 =  Coordinate();
Coordinate280.setDEF(CString("Surfer_R_Toe02-COORD"));
Coordinate280.setPoint(new float[]{0,0.0624,0,0,0.0312,-0.05404,-0.0468,0.0312,-0.02702,-0.0468,0.0312,0.02702,0,0.0312,0.05404,0.0468,0.0312,0.02702,0.0468,0.0312,-0.02702,0,-0.0312,-0.05404,-0.0468,-0.0312,-0.02702,-0.0468,-0.0312,0.02702,0,-0.0312,0.05404,0.0468,-0.0312,0.02702,0.0468,-0.0312,-0.02702,0,-0.0624,0}, 42);
IndexedFaceSet279.setCoord(&Coordinate280);

Shape276.setGeometry(&IndexedFaceSet279);

Transform274.addChild(&Shape276);

Transform266.addChild(&Transform274);

Transform& Transform281 =  Transform();
Transform281.setDEF(CString("Surfer_R_Toe03-ROOT"));
Transform281.setTranslation(new float[]{0.1815,0.1298,-0.01264});
Transform281.setScale(new float[]{0.6226,1.016,2.312});
Transform281.setScaleOrientation(new float[]{-0.225302,0.706107,-0.671306,0.4788});
PositionInterpolator& PositionInterpolator282 =  PositionInterpolator();
PositionInterpolator282.setDEF(CString("SurferAv_R_Toe03-POS-INTERP"));
PositionInterpolator282.setKey(new float[]{0,0.1875,0.375}, 3);
PositionInterpolator282.setKeyValue(new float[]{0.1815,0.1298,-0.01264,0.1818,0.1315,-0.09173,0.1811,0.1269,0.1192}, 9);
Transform281.addChild(&PositionInterpolator282);

Shape& Shape283 =  Shape();
Appearance& Appearance284 =  Appearance();
Material& Material285 =  Material();
Material285.setDiffuseColor(new float[]{0.702,0.6,0.3843});
Material285.setShininess(0.25);
Appearance284.addChild(&Material285);

Shape283.addChild(&Appearance284);

IndexedFaceSet& IndexedFaceSet286 =  IndexedFaceSet();
IndexedFaceSet286.setDEF(CString("Surfer_R_Toe03-FACES"));
IndexedFaceSet286.setCreaseAngle(3);
IndexedFaceSet286.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,1,-1,1,7,8,-1,1,8,2,-1,2,8,9,-1,2,9,3,-1,3,9,10,-1,3,10,4,-1,4,10,11,-1,4,11,5,-1,5,11,12,-1,5,12,6,-1,6,12,7,-1,6,7,1,-1,13,8,7,-1,13,9,8,-1,13,10,9,-1,13,11,10,-1,13,12,11,-1,13,7,12,-1}, 96);
Coordinate& Coordinate287 =  Coordinate();
Coordinate287.setDEF(CString("Surfer_R_Toe03-COORD"));
Coordinate287.setPoint(new float[]{0,0.0524,0,0,0.0262,-0.04538,-0.0393,0.0262,-0.02269,-0.0393,0.0262,0.02269,0,0.0262,0.04538,0.0393,0.0262,0.02269,0.0393,0.0262,-0.02269,0,-0.0262,-0.04538,-0.0393,-0.0262,-0.02269,-0.0393,-0.0262,0.02269,0,-0.0262,0.04538,0.0393,-0.0262,0.02269,0.0393,-0.0262,-0.02269,0,-0.0524,0}, 42);
IndexedFaceSet286.setCoord(&Coordinate287);

Shape283.setGeometry(&IndexedFaceSet286);

Transform281.addChild(&Shape283);

Transform266.addChild(&Transform281);

Transform& Transform288 =  Transform();
Transform288.setDEF(CString("Surfer_R_Toe01-ROOT"));
Transform288.setTranslation(new float[]{0.2213,-0.1486,0.02582});
Transform288.setScale(new float[]{0.7877,1.009,2.394});
Transform288.setScaleOrientation(new float[]{0.477093,0.832788,-0.280796,0.5705});
PositionInterpolator& PositionInterpolator289 =  PositionInterpolator();
PositionInterpolator289.setDEF(CString("SurferAv_R_Toe01-POS-INTERP"));
PositionInterpolator289.setKey(new float[]{0,0.1875,0.375}, 3);
PositionInterpolator289.setKeyValue(new float[]{0.2213,-0.1486,0.02582,0.2217,-0.16,-0.04911,0.2207,-0.1297,0.1507}, 9);
Transform288.addChild(&PositionInterpolator289);

Shape& Shape290 =  Shape();
Appearance& Appearance291 =  Appearance();
Material& Material292 =  Material();
Material292.setDiffuseColor(new float[]{0.702,0.6,0.3843});
Material292.setShininess(0.25);
Appearance291.addChild(&Material292);

Shape290.addChild(&Appearance291);

IndexedFaceSet& IndexedFaceSet293 =  IndexedFaceSet();
IndexedFaceSet293.setDEF(CString("Surfer_R_Toe01-FACES"));
IndexedFaceSet293.setCreaseAngle(3);
IndexedFaceSet293.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,1,-1,1,7,8,-1,1,8,2,-1,2,8,9,-1,2,9,3,-1,3,9,10,-1,3,10,4,-1,4,10,11,-1,4,11,5,-1,5,11,12,-1,5,12,6,-1,6,12,7,-1,6,7,1,-1,13,8,7,-1,13,9,8,-1,13,10,9,-1,13,11,10,-1,13,12,11,-1,13,7,12,-1}, 96);
Coordinate& Coordinate294 =  Coordinate();
Coordinate294.setDEF(CString("Surfer_R_Toe01-COORD"));
Coordinate294.setPoint(new float[]{0,0.0724,0,0,0.0362,-0.0627,-0.0543,0.0362,-0.03135,-0.0543,0.0362,0.03135,0,0.0362,0.0627,0.0543,0.0362,0.03135,0.0543,0.0362,-0.03135,0,-0.0362,-0.0627,-0.0543,-0.0362,-0.03135,-0.0543,-0.0362,0.03135,0,-0.0362,0.0627,0.0543,-0.0362,0.03135,0.0543,-0.0362,-0.03135,0,-0.0724,0}, 42);
IndexedFaceSet293.setCoord(&Coordinate294);

Shape290.setGeometry(&IndexedFaceSet293);

Transform288.addChild(&Shape290);

Transform266.addChild(&Transform288);

Transform260.addChild(&Transform266);

Transform246.addChild(&Transform260);

Transform238.addChild(&Transform246);

Transform& Transform295 =  Transform();
Transform295.setDEF(CString("Surfer_Leg_L-ROOT"));
Transform295.setTranslation(new float[]{1.032,-0.004764,-1.719});
Transform295.setRotation(new float[]{0.0175088,-0.0391158,0.999081,3.1757});
PositionInterpolator& PositionInterpolator296 =  PositionInterpolator();
PositionInterpolator296.setDEF(CString("SurferAv_Leg_L-POS-INTERP"));
PositionInterpolator296.setKey(new float[]{0,0.1875,0.375,0.5625,0.75}, 5);
PositionInterpolator296.setKeyValue(new float[]{1.032,0.0148,-1.708,1.032,-0.08853,-1.708,1.056,-0.5187,-1.727,1.15,-2.219,-1.381,1.026,-0.6396,0.09846}, 15);
Transform295.addChild(&PositionInterpolator296);

OrientationInterpolator& OrientationInterpolator297 =  OrientationInterpolator();
OrientationInterpolator297.setDEF(CString("SurferAv_Leg_L-ROT-INTERP"));
OrientationInterpolator297.setKey(new float[]{0,0.1875,0.375,0.5625,0.75}, 5);
OrientationInterpolator297.setKeyValue(new float[]{0.001255,0,0.999999,3.116,0.000456082,-0.198692,0.980062,3.022,0.04641,-0.2029,0.978099,2.956,0.145703,0.332107,0.93192,3.061,-0.0862392,-0.720193,-0.688393,3.155}, 20);
Transform295.addChild(&OrientationInterpolator297);

Shape& Shape298 =  Shape();
Appearance& Appearance299 =  Appearance();
Material& Material300 =  Material();
Material300.setDiffuseColor(new float[]{0.702,0.6,0.3843});
Material300.setShininess(0.25);
Appearance299.addChild(&Material300);

Shape298.addChild(&Appearance299);

IndexedFaceSet& IndexedFaceSet301 =  IndexedFaceSet();
IndexedFaceSet301.setDEF(CString("Surfer_Leg_L-FACES"));
IndexedFaceSet301.setCreaseAngle(3);
IndexedFaceSet301.setCoordIndex(new int32_t[]{0,2,1,-1,0,3,2,-1,0,4,3,-1,0,5,4,-1,0,6,5,-1,0,7,6,-1,0,8,7,-1,0,1,8,-1,1,10,9,-1,1,2,10,-1,2,11,10,-1,2,3,11,-1,3,12,11,-1,3,4,12,-1,4,13,12,-1,4,5,13,-1,5,14,13,-1,5,6,14,-1,6,15,14,-1,6,7,15,-1,7,16,15,-1,7,8,16,-1,8,9,16,-1,8,1,9,-1,17,9,10,-1,17,10,11,-1,17,11,12,-1,17,12,13,-1,17,13,14,-1,17,14,15,-1,17,15,16,-1,17,16,9,-1}, 128);
Coordinate& Coordinate302 =  Coordinate();
Coordinate302.setDEF(CString("Surfer_Leg_L-COORD"));
Coordinate302.setPoint(new float[]{0,0,0,0.1413,0,0,0.0999,0,0.0999,0,0,0.1413,-0.0999,0,0.0999,-0.1413,0,0,-0.0999,0,-0.0999,0,0,-0.1413,0.0999,0,-0.0999,0.1413,-1.496,0,0.0999,-1.496,0.0999,0,-1.496,0.1413,-0.0999,-1.496,0.0999,-0.1413,-1.496,0,-0.0999,-1.496,-0.0999,0,-1.496,-0.1413,0.0999,-1.496,-0.0999,0,-1.496,0}, 54);
IndexedFaceSet301.setCoord(&Coordinate302);

Shape298.setGeometry(&IndexedFaceSet301);

Transform295.addChild(&Shape298);

Transform& Transform303 =  Transform();
Transform303.setDEF(CString("Surfer_Calf_L-ROOT"));
Transform303.setTranslation(new float[]{-0.03083,-0.4032,0.05773});
Transform303.setRotation(new float[]{-1,0,0,0.0872687});
Transform303.setScale(new float[]{1,1.958,0.8});
Shape& Shape304 =  Shape();
Appearance& Appearance305 =  Appearance();
Material& Material306 =  Material();
Material306.setDiffuseColor(new float[]{0.702,0.6,0.3843});
Material306.setShininess(0.25);
Appearance305.addChild(&Material306);

Shape304.addChild(&Appearance305);

IndexedFaceSet& IndexedFaceSet307 =  IndexedFaceSet();
IndexedFaceSet307.setDEF(CString("Surfer_Calf_L-FACES"));
IndexedFaceSet307.setCreaseAngle(3);
IndexedFaceSet307.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,1,-1,1,9,10,-1,1,10,2,-1,2,10,11,-1,2,11,3,-1,3,11,12,-1,3,12,4,-1,4,12,13,-1,4,13,5,-1,5,13,14,-1,5,14,6,-1,6,14,15,-1,6,15,7,-1,7,15,16,-1,7,16,8,-1,8,16,9,-1,8,9,1,-1,9,17,18,-1,9,18,10,-1,10,18,19,-1,10,19,11,-1,11,19,20,-1,11,20,12,-1,12,20,21,-1,12,21,13,-1,13,21,22,-1,13,22,14,-1,14,22,23,-1,14,23,15,-1,15,23,24,-1,15,24,16,-1,16,24,17,-1,16,17,9,-1,25,18,17,-1,25,19,18,-1,25,20,19,-1,25,21,20,-1,25,22,21,-1,25,23,22,-1,25,24,23,-1,25,17,24,-1}, 192);
Coordinate& Coordinate308 =  Coordinate();
Coordinate308.setDEF(CString("Surfer_Calf_L-COORD"));
Coordinate308.setPoint(new float[]{0,0.278,0,0,0.1966,-0.1966,-0.139,0.1966,-0.139,-0.1966,0.1966,0,-0.139,0.1966,0.139,0,0.1966,0.1966,0.139,0.1966,0.139,0.1966,0.1966,0,0.139,0.1966,-0.139,0,0,-0.278,-0.1966,0,-0.1966,-0.278,0,0,-0.1966,0,0.1966,0,0,0.278,0.1966,0,0.1966,0.278,0,0,0.1966,0,-0.1966,0,-0.1966,-0.1966,-0.139,-0.1966,-0.139,-0.1966,-0.1966,0,-0.139,-0.1966,0.139,0,-0.1966,0.1966,0.139,-0.1966,0.139,0.1966,-0.1966,0,0.139,-0.1966,-0.139,0,-0.278,0}, 78);
IndexedFaceSet307.setCoord(&Coordinate308);

Shape304.setGeometry(&IndexedFaceSet307);

Transform303.addChild(&Shape304);

Transform295.addChild(&Transform303);

Transform& Transform309 =  Transform();
Transform309.setDEF(CString("Surfer_Heel_L-ROOT"));
Transform309.setTranslation(new float[]{0.001562,-1.517,-0.02254});
Transform309.setRotation(new float[]{-0.650792,-0.524689,0.54879,4.06427});
Shape& Shape310 =  Shape();
Appearance& Appearance311 =  Appearance();
Material& Material312 =  Material();
Material312.setDiffuseColor(new float[]{0.702,0.6,0.3843});
Material312.setShininess(0.25);
Appearance311.addChild(&Material312);

Shape310.addChild(&Appearance311);

IndexedFaceSet& IndexedFaceSet313 =  IndexedFaceSet();
IndexedFaceSet313.setDEF(CString("Surfer_Heel_L-FACES"));
IndexedFaceSet313.setCreaseAngle(3);
IndexedFaceSet313.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,1,-1,1,7,8,-1,1,8,2,-1,2,8,9,-1,2,9,3,-1,3,9,10,-1,3,10,4,-1,4,10,11,-1,4,11,5,-1,5,11,12,-1,5,12,6,-1,6,12,7,-1,6,7,1,-1,13,8,7,-1,13,9,8,-1,13,10,9,-1,13,11,10,-1,13,12,11,-1,13,7,12,-1}, 96);
Coordinate& Coordinate314 =  Coordinate();
Coordinate314.setDEF(CString("Surfer_Heel_L-COORD"));
Coordinate314.setPoint(new float[]{0,0.1824,0,0,0.0912,-0.158,-0.1368,0.0912,-0.07898,-0.1368,0.0912,0.07898,0,0.0912,0.158,0.1368,0.0912,0.07898,0.1368,0.0912,-0.07898,0,-0.0912,-0.158,-0.1368,-0.0912,-0.07898,-0.1368,-0.0912,0.07898,0,-0.0912,0.158,0.1368,-0.0912,0.07898,0.1368,-0.0912,-0.07898,0,-0.1824,0}, 42);
IndexedFaceSet313.setCoord(&Coordinate314);

Shape310.setGeometry(&IndexedFaceSet313);

Transform309.addChild(&Shape310);

Transform& Transform315 =  Transform();
Transform315.setDEF(CString("Surfer_Foot_L-ROOT"));
Transform315.setTranslation(new float[]{0.2704,0,-0.02074});
Transform315.setRotation(new float[]{-1,0,0,0.3491});
Transform315.setScale(new float[]{2.05,1,0.4436});
PositionInterpolator& PositionInterpolator316 =  PositionInterpolator();
PositionInterpolator316.setDEF(CString("SurferAv_Foot_L-POS-INTERP"));
PositionInterpolator316.setKey(new float[]{0,0.1875,0.375,0.5625,0.75}, 5);
PositionInterpolator316.setKeyValue(new float[]{0.2704,0,-0.02074,0.2453,0.02323,0.09197,0.1736,0.06152,0.2113,0.04483,0.109,0.3067,-0.1263,0.1462,0.3438}, 15);
Transform315.addChild(&PositionInterpolator316);

OrientationInterpolator& OrientationInterpolator317 =  OrientationInterpolator();
OrientationInterpolator317.setDEF(CString("SurferAv_Foot_L-ROT-INTERP"));
OrientationInterpolator317.setKey(new float[]{0,0.1875,0.375,0.5625,0.75}, 5);
OrientationInterpolator317.setKeyValue(new float[]{-1,0,0,0.3491,-0.801627,-0.597821,0.00195907,0.4735,-0.557019,-0.830128,0.0248308,0.7583,-0.403795,-0.91329,0.0533994,1.13,-0.297683,-0.951147,0.0818755,1.539}, 20);
Transform315.addChild(&OrientationInterpolator317);

Shape& Shape318 =  Shape();
Appearance& Appearance319 =  Appearance();
Material& Material320 =  Material();
Material320.setDiffuseColor(new float[]{0.702,0.6,0.3843});
Material320.setShininess(0.25);
Appearance319.addChild(&Material320);

Shape318.addChild(&Appearance319);

IndexedFaceSet& IndexedFaceSet321 =  IndexedFaceSet();
IndexedFaceSet321.setDEF(CString("Surfer_Foot_L-FACES"));
IndexedFaceSet321.setCreaseAngle(3);
IndexedFaceSet321.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,1,-1,1,9,10,-1,1,10,2,-1,2,10,11,-1,2,11,3,-1,3,11,12,-1,3,12,4,-1,4,12,13,-1,4,13,5,-1,5,13,14,-1,5,14,6,-1,6,14,15,-1,6,15,7,-1,7,15,16,-1,7,16,8,-1,8,16,9,-1,8,9,1,-1,9,17,18,-1,9,18,10,-1,10,18,19,-1,10,19,11,-1,11,19,20,-1,11,20,12,-1,12,20,21,-1,12,21,13,-1,13,21,22,-1,13,22,14,-1,14,22,23,-1,14,23,15,-1,15,23,24,-1,15,24,16,-1,16,24,17,-1,16,17,9,-1,25,18,17,-1,25,19,18,-1,25,20,19,-1,25,21,20,-1,25,22,21,-1,25,23,22,-1,25,24,23,-1,25,17,24,-1}, 192);
Coordinate& Coordinate322 =  Coordinate();
Coordinate322.setDEF(CString("Surfer_Foot_L-COORD"));
Coordinate322.setPoint(new float[]{0,0.2224,0,0,0.1573,-0.1573,-0.1112,0.1573,-0.1112,-0.1573,0.1573,0,-0.1112,0.1573,0.1112,0,0.1573,0.1573,0.1112,0.1573,0.1112,0.1573,0.1573,0,0.1112,0.1573,-0.1112,0,0,-0.2224,-0.1573,0,-0.1573,-0.2224,0,0,-0.1573,0,0.1573,0,0,0.2224,0.1573,0,0.1573,0.2224,0,0,0.1573,0,-0.1573,0,-0.1573,-0.1573,-0.1112,-0.1573,-0.1112,-0.1573,-0.1573,0,-0.1112,-0.1573,0.1112,0,-0.1573,0.1573,0.1112,-0.1573,0.1112,0.1573,-0.1573,0,0.1112,-0.1573,-0.1112,0,-0.2224,0}, 78);
IndexedFaceSet321.setCoord(&Coordinate322);

Shape318.setGeometry(&IndexedFaceSet321);

Transform315.addChild(&Shape318);

Transform& Transform323 =  Transform();
Transform323.setDEF(CString("Surfer_L_Toe01-ROOT"));
Transform323.setTranslation(new float[]{0.2209,0.1316,0.1773});
Transform323.setRotation(new float[]{0,1,0,0.521445});
Transform323.setScaleOrientation(new float[]{-0.522691,0.780787,0.342294,0.5581});
Shape& Shape324 =  Shape();
Appearance& Appearance325 =  Appearance();
Material& Material326 =  Material();
Material326.setDiffuseColor(new float[]{0.702,0.6,0.3843});
Material326.setShininess(0.25);
Appearance325.addChild(&Material326);

Shape324.addChild(&Appearance325);

IndexedFaceSet& IndexedFaceSet327 =  IndexedFaceSet();
IndexedFaceSet327.setDEF(CString("Surfer_L_Toe01-FACES"));
IndexedFaceSet327.setCreaseAngle(3);
IndexedFaceSet327.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,1,-1,1,7,8,-1,1,8,2,-1,2,8,9,-1,2,9,3,-1,3,9,10,-1,3,10,4,-1,4,10,11,-1,4,11,5,-1,5,11,12,-1,5,12,6,-1,6,12,7,-1,6,7,1,-1,13,8,7,-1,13,9,8,-1,13,10,9,-1,13,11,10,-1,13,12,11,-1,13,7,12,-1}, 96);
Coordinate& Coordinate328 =  Coordinate();
Coordinate328.setDEF(CString("Surfer_L_Toe01-COORD"));
Coordinate328.setPoint(new float[]{0,0.0724,0,0,0.0362,-0.0627,-0.0543,0.0362,-0.03135,-0.0543,0.0362,0.03135,0,0.0362,0.0627,0.0543,0.0362,0.03135,0.0543,0.0362,-0.03135,0,-0.0362,-0.0627,-0.0543,-0.0362,-0.03135,-0.0543,-0.0362,0.03135,0,-0.0362,0.0627,0.0543,-0.0362,0.03135,0.0543,-0.0362,-0.03135,0,-0.0724,0}, 42);
IndexedFaceSet327.setCoord(&Coordinate328);

Shape324.setGeometry(&IndexedFaceSet327);

Transform323.addChild(&Shape324);

Transform315.addChild(&Transform323);

Transform& Transform329 =  Transform();
Transform329.setDEF(CString("Surfer_L_Toe02-ROOT"));
Transform329.setTranslation(new float[]{0.2165,-0.01985,0.1629});
Transform329.setRotation(new float[]{0,-1,0,0.487246});
Transform329.setScaleOrientation(new float[]{-0.0953681,-0.782984,0.614688,0.4729});
Shape& Shape330 =  Shape();
Appearance& Appearance331 =  Appearance();
Material& Material332 =  Material();
Material332.setDiffuseColor(new float[]{0.702,0.6,0.3843});
Material332.setShininess(0.25);
Appearance331.addChild(&Material332);

Shape330.addChild(&Appearance331);

IndexedFaceSet& IndexedFaceSet333 =  IndexedFaceSet();
IndexedFaceSet333.setDEF(CString("Surfer_L_Toe02-FACES"));
IndexedFaceSet333.setCreaseAngle(3);
IndexedFaceSet333.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,1,-1,1,7,8,-1,1,8,2,-1,2,8,9,-1,2,9,3,-1,3,9,10,-1,3,10,4,-1,4,10,11,-1,4,11,5,-1,5,11,12,-1,5,12,6,-1,6,12,7,-1,6,7,1,-1,13,8,7,-1,13,9,8,-1,13,10,9,-1,13,11,10,-1,13,12,11,-1,13,7,12,-1}, 96);
Coordinate& Coordinate334 =  Coordinate();
Coordinate334.setDEF(CString("Surfer_L_Toe02-COORD"));
Coordinate334.setPoint(new float[]{0,0.0624,0,0,0.0312,-0.05404,-0.0468,0.0312,-0.02702,-0.0468,0.0312,0.02702,0,0.0312,0.05404,0.0468,0.0312,0.02702,0.0468,0.0312,-0.02702,0,-0.0312,-0.05404,-0.0468,-0.0312,-0.02702,-0.0468,-0.0312,0.02702,0,-0.0312,0.05404,0.0468,-0.0312,0.02702,0.0468,-0.0312,-0.02702,0,-0.0624,0}, 42);
IndexedFaceSet333.setCoord(&Coordinate334);

Shape330.setGeometry(&IndexedFaceSet333);

Transform329.addChild(&Shape330);

Transform315.addChild(&Transform329);

Transform& Transform335 =  Transform();
Transform335.setDEF(CString("Surfer_L_Toe03-ROOT"));
Transform335.setTranslation(new float[]{0.1743,-0.1208,0.1519});
Transform335.setRotation(new float[]{0,-1,0,1.21168});
Transform335.setScaleOrientation(new float[]{-0.0780288,-0.882186,0.464392,0.5791});
Shape& Shape336 =  Shape();
Appearance& Appearance337 =  Appearance();
Material& Material338 =  Material();
Material338.setDiffuseColor(new float[]{0.702,0.6,0.3843});
Material338.setShininess(0.25);
Appearance337.addChild(&Material338);

Shape336.addChild(&Appearance337);

IndexedFaceSet& IndexedFaceSet339 =  IndexedFaceSet();
IndexedFaceSet339.setDEF(CString("Surfer_L_Toe03-FACES"));
IndexedFaceSet339.setCreaseAngle(3);
IndexedFaceSet339.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,1,-1,1,7,8,-1,1,8,2,-1,2,8,9,-1,2,9,3,-1,3,9,10,-1,3,10,4,-1,4,10,11,-1,4,11,5,-1,5,11,12,-1,5,12,6,-1,6,12,7,-1,6,7,1,-1,13,8,7,-1,13,9,8,-1,13,10,9,-1,13,11,10,-1,13,12,11,-1,13,7,12,-1}, 96);
Coordinate& Coordinate340 =  Coordinate();
Coordinate340.setDEF(CString("Surfer_L_Toe03-COORD"));
Coordinate340.setPoint(new float[]{0,0.0524,0,0,0.0262,-0.04538,-0.0393,0.0262,-0.02269,-0.0393,0.0262,0.02269,0,0.0262,0.04538,0.0393,0.0262,0.02269,0.0393,0.0262,-0.02269,0,-0.0262,-0.04538,-0.0393,-0.0262,-0.02269,-0.0393,-0.0262,0.02269,0,-0.0262,0.04538,0.0393,-0.0262,0.02269,0.0393,-0.0262,-0.02269,0,-0.0524,0}, 42);
IndexedFaceSet339.setCoord(&Coordinate340);

Shape336.setGeometry(&IndexedFaceSet339);

Transform335.addChild(&Shape336);

Transform315.addChild(&Transform335);

Transform309.addChild(&Transform315);

Transform295.addChild(&Transform309);

Transform238.addChild(&Transform295);

Transform232.addChild(&Transform238);

Transform228.addChild(&Transform232);

Group224.addChild(&Transform228);

Switch223.addChild(&Group224);

Scene7.addChild(&Switch223);

PositionInterpolator& PositionInterpolator341 =  PositionInterpolator();
PositionInterpolator341.setDEF(CString("SurferFloat__Boolean-POS-INTERP"));
PositionInterpolator341.setKey(new float[]{0,0.03125,0.0625,0.09375,0.125,0.1563,0.1875,0.2188,0.25,0.2813,0.3125,0.3438,0.375,0.4063,0.4375,0.4688,0.5,0.5313,0.5625,0.5938,0.625,0.6563,0.6875,0.7188,0.75,0.7813,0.8125,0.8438,0.875,0.9063,0.9375,0.9688,1}, 33);
PositionInterpolator341.setKeyValue(new float[]{0,0,0,0,0.01074,0,0,0.03906,0,0,0.0791,0,0,0.125,0,0,0.1709,0,0,0.2109,0,0,0.2393,0,0,0.25,0,0,0.2393,0,0,0.2109,0,0,0.1709,0,0,0.125,0,0,0.0791,0,0,0.03906,0,0,0.01074,0,0,0,0,0,0.01074,0,0,0.03906,0,0,0.0791,0,0,0.125,0,0,0.1709,0,0,0.2109,0,0,0.2393,0,0,0.25,0,0,0.2393,0,0,0.2109,0,0,0.1709,0,0,0.125,0,0,0.0791,0,0,0.03906,0,0,0.01074,0,0,0,0}, 99);
Scene7.addChild(&PositionInterpolator341);

TimeSensor& TimeSensor342 =  TimeSensor();
TimeSensor342.setDEF(CString("TimeSensor_Surfer_Av01-TIMER"));
Scene7.addChild(&TimeSensor342);

TimeSensor& TimeSensor343 =  TimeSensor();
TimeSensor343.setDEF(CString("TimeSensor_SurferFloat-TIMER"));
TimeSensor343.setCycleInterval(3.2);
TimeSensor343.setLoop(True);
Scene7.addChild(&TimeSensor343);

Script& Script344 =  Script();
Script344.setDEF(CString("SurferCollide"));
Script344.setMustEvaluate(True);
field& field345 =  field();
field345.setName(CString("runAway"));
field345.setAccessType(CString("inputOnly"));
field345.setType(CString("SFTime"));
Script344.addChild(&field345);

field& field346 =  field();
field346.setName(CString("inputFraction"));
field346.setAccessType(CString("inputOnly"));
field346.setType(CString("SFFloat"));
Script344.addChild(&field346);

field& field347 =  field();
field347.setName(CString("allSafe"));
field347.setAccessType(CString("inputOnly"));
field347.setType(CString("SFTime"));
Script344.addChild(&field347);

field& field348 =  field();
field348.setName(CString("beingEaten"));
field348.setAccessType(CString("inputOnly"));
field348.setType(CString("SFBool"));
Script344.addChild(&field348);

field& field349 =  field();
field349.setName(CString("scared"));
field349.setAccessType(CString("initializeOnly"));
field349.setType(CString("SFInt32"));
Script344.addChild(&field349);

field& field350 =  field();
field350.setName(CString("switcher"));
field350.setAccessType(CString("outputOnly"));
field350.setType(CString("SFInt32"));
Script344.addChild(&field350);

field& field351 =  field();
field351.setName(CString("startAnim"));
field351.setAccessType(CString("outputOnly"));
field351.setType(CString("SFTime"));
Script344.addChild(&field351);

field& field352 =  field();
field352.setName(CString("outputFraction"));
field352.setAccessType(CString("outputOnly"));
field352.setType(CString("SFFloat"));
Script344.addChild(&field352);

field& field353 =  field();
field353.setName(CString("eatEnabled"));
field353.setAccessType(CString("outputOnly"));
field353.setType(CString("SFBool"));
Script344.addChild(&field353);

field& field354 =  field();
field354.setName(CString("startAnimLoop"));
field354.setAccessType(CString("outputOnly"));
field354.setType(CString("SFTime"));
Script344.addChild(&field354);

field& field355 =  field();
field355.setName(CString("stopAnimLoop"));
field355.setAccessType(CString("outputOnly"));
field355.setType(CString("SFTime"));
Script344.addChild(&field355);

field& field356 =  field();
field356.setName(CString("startFloating"));
field356.setAccessType(CString("outputOnly"));
field356.setType(CString("SFTime"));
Script344.addChild(&field356);

field& field357 =  field();
field357.setName(CString("stopFloating"));
field357.setAccessType(CString("outputOnly"));
field357.setType(CString("SFTime"));
Script344.addChild(&field357);

field& field358 =  field();
field358.setName(CString("playOops"));
field358.setAccessType(CString("outputOnly"));
field358.setType(CString("SFTime"));
Script344.addChild(&field358);

field& field359 =  field();
field359.setName(CString("avoidEnabled"));
field359.setAccessType(CString("outputOnly"));
field359.setType(CString("SFBool"));
Script344.addChild(&field359);


Script344.setSourceCode(CString("javascript:")+
_T("		function beingEaten(input) {")+
_T("			if (input == TRUE) {")+
_T("				avoidEnabled = FALSE;")+
_T("				eatEnabled = FALSE;")+
_T("			}")+
_T("		}	")+
_T("		function runAway(input, time){")+
_T("			switcher = 1;")+
_T("			scared = 1;")+
_T("			eatEnabled = FALSE;")+
_T("			startAnim = time;")+
_T("			playOops = time;")+
_T("			stopAnimLoop = time;")+
_T("			//Browser.loadURL(new MFString('oops1.htm'), new MFString('target=helpertext'));")+
_T("		}")+
_T("	  function allSafe(input, time) {")+
_T("			scared = 0;")+
_T("			stopFloating = time;")+
_T("			startAnim = time;")+
_T("		}")+
_T("		function inputFraction(input, time) {")+
_T("			if (scared == 1) {")+
_T("				outputFraction = input;")+
_T("				if (input == 1.0) {")+
_T("					startFloating = time;")+
_T("				}")+
_T("			} else {")+
_T("				outputFraction = 1.0 - input;")+
_T("				if (input == 1.0) {")+
_T("					switcher = 0;")+
_T("					eatEnabled = TRUE;")+
_T("					startAnimLoop = time;")+
_T("				}")+
_T("			}")+
_T("		}"));
Scene7.addChild(&Script344);

TimeSensor& TimeSensor360 =  TimeSensor();
TimeSensor360.setDEF(CString("TimeSensor_Surfer2-TIMER"));
TimeSensor360.setCycleInterval(6.4);
TimeSensor360.setLoop(True);
TimeSensor360.setStartTime(1);
Scene7.addChild(&TimeSensor360);

OrientationInterpolator& OrientationInterpolator361 =  OrientationInterpolator();
OrientationInterpolator361.setDEF(CString("Surfer2_L_Toe03-ROT-INTERP"));
OrientationInterpolator361.setKey(new float[]{0,0.03125,0.0625,0.09375,0.125,0.1563,0.1875,0.2188,0.25,0.2813,0.3125,0.3438,0.375,0.4063,0.4375,0.4688,0.5,0.5313,0.5625,0.5938,0.625,0.6563,0.6875,0.7188,0.75,0.7813,0.8125,0.8438,0.875,0.9063,0.9375,0.9688,1}, 33);
OrientationInterpolator361.setKeyValue(new float[]{0,-1,0,1.036,0,-1,0,0.1159,0,1,0,0.4363,0,-1,0,0.3716,0,-1,0,1.118,0,-1,0,1.234,0,-1,0,0.4363,0,1,0,0.3613,0,-1,0,0.0818099,0,-1,0,0.9102,0,-1,0,1.309,0,-1,0,0.7568,0,1,0,0.1636,0,1,0,0.194299,0,-1,0,0.6545,0,-1,0,1.258,0,-1,0,1.036,0,-1,0,0.1159,0,1,0,0.4363,0,-1,0,0.3716,0,-1,0,1.118,0,-1,0,1.234,0,-1,0,0.4363,0,1,0,0.3613,0,-1,0,0.0818099,0,-1,0,0.9102,0,-1,0,1.309,0,-1,0,0.7568,0,1,0,0.1636,0,1,0,0.194299,0,-1,0,0.6545,0,-1,0,1.258,0,-1,0,1.036}, 132);
Scene7.addChild(&OrientationInterpolator361);

OrientationInterpolator& OrientationInterpolator362 =  OrientationInterpolator();
OrientationInterpolator362.setDEF(CString("Surfer2_L_Toe02-ROT-INTERP"));
OrientationInterpolator362.setKey(new float[]{0,0.03125,0.0625,0.09375,0.125,0.1563,0.1875,0.2188,0.25,0.2813,0.3125,0.3438,0.375,0.4063,0.4375,0.4688,0.5,0.5313,0.5625,0.5938,0.625,0.6563,0.6875,0.7188,0.75,0.7813,0.8125,0.8438,0.875,0.9063,0.9375,0.9688,1}, 33);
OrientationInterpolator362.setKeyValue(new float[]{0,-1,0,0.060679,0,1,0,0.4363,0,-1,0,0.2908,0,-1,0,0.9627,0,-1,0,1.067,0,-1,0,0.3491,0,1,0,0.3688,0,-1,0,0.0299968,0,-1,0,0.7755,0,-1,0,1.134,0,-1,0,0.6375,0,1,0,0.1909,0,1,0,0.2185,0,-1,0,0.5454,0,-1,0,1.088,0,-1,0,0.889,0,-1,0,0.060679,0,1,0,0.4363,0,-1,0,0.2908,0,-1,0,0.9627,0,-1,0,1.067,0,-1,0,0.3491,0,1,0,0.3688,0,-1,0,0.0299968,0,-1,0,0.7755,0,-1,0,1.134,0,-1,0,0.6375,0,1,0,0.1909,0,1,0,0.2185,0,-1,0,0.5454,0,-1,0,1.088,0,-1,0,0.889,0,-1,0,0.060679}, 132);
Scene7.addChild(&OrientationInterpolator362);

OrientationInterpolator& OrientationInterpolator363 =  OrientationInterpolator();
OrientationInterpolator363.setDEF(CString("Surfer2_L_Toe01-ROT-INTERP"));
OrientationInterpolator363.setKey(new float[]{0,0.03125,0.0625,0.09375,0.125,0.1563,0.1875,0.2188,0.25,0.2813,0.3125,0.3438,0.375,0.4063,0.4375,0.4688,0.5,0.5313,0.5625,0.5938,0.625,0.6563,0.6875,0.7188,0.75,0.7813,0.8125,0.8438,0.875,0.9063,0.9375,0.9688,1}, 33);
OrientationInterpolator363.setKeyValue(new float[]{0,1,0,0.3491,0,-1,0,0.2021,0,-1,0,0.6245,0,-1,0,0.6214,0,1,0,0.0218149,0,1,0,0.6405,0,-1,0,0.0190868,0,-1,0,0.5151,0,-1,0,0.6981,0,-1,0,0.2308,0,1,0,0.4881,0,1,0,0.168101,0,-1,0,0.3709,0,-1,0,0.6889,0,-1,0,0.4554,0,1,0,0.2717,0,1,0,0.3491,0,-1,0,0.2021,0,-1,0,0.6245,0,-1,0,0.6214,0,1,0,0.0218149,0,1,0,0.6405,0,-1,0,0.0190868,0,-1,0,0.5151,0,-1,0,0.6981,0,-1,0,0.2308,0,1,0,0.4881,0,1,0,0.168101,0,-1,0,0.3709,0,-1,0,0.6889,0,-1,0,0.4554,0,1,0,0.2717,0,1,0,0.3491}, 132);
Scene7.addChild(&OrientationInterpolator363);

OrientationInterpolator& OrientationInterpolator364 =  OrientationInterpolator();
OrientationInterpolator364.setDEF(CString("Surfer2_Heel_L-ROT-INTERP"));
OrientationInterpolator364.setKey(new float[]{0,0.03125,0.0625,0.09375,0.125,0.1563,0.1875,0.2188,0.25,0.2813,0.3125,0.3438,0.375,0.4063,0.4375,0.4688,0.5,0.5313,0.5625,0.5938,0.625,0.6563,0.6875,0.7188,0.75,0.7813,0.8125,0.8438,0.875,0.9063,0.9375,0.9688,1}, 33);
OrientationInterpolator364.setKeyValue(new float[]{-0.57735,-0.57735,0.57735,4.189,0.582283,0.597983,-0.550784,2.034,0.58791,0.621811,-0.517409,1.978,0.590506,0.639406,-0.492405,1.915,0.587206,0.642207,-0.492705,1.835,0.560618,0.590119,-0.580919,1.687,0.511601,0.498401,-0.699901,1.554,0.497316,0.473715,-0.726823,1.526,0.502616,0.482816,-0.717123,1.537,0.518613,0.510313,-0.686018,1.573,0.538528,0.545928,-0.641833,1.627,0.561276,0.609974,-0.559376,1.712,0.5838,0.6697,-0.459,1.847,0.622537,0.651739,-0.433226,2.021,-0.677261,-0.52567,0.51477,4.052,-0.67519,-0.521493,0.521693,4.046,-0.672327,-0.51902,0.527821,4.043,-0.668882,-0.517986,0.533186,4.043,-0.664822,-0.518217,0.538018,4.045,-0.660277,-0.519582,0.542281,4.05,-0.655201,-0.522001,0.546101,4.057,-0.649736,-0.525329,0.54943,4.066,-0.643894,-0.529395,0.552395,4.076,-0.637715,-0.534012,0.555113,4.087,-0.631307,-0.539006,0.557606,4.099,-0.624605,-0.544404,0.559904,4.111,-0.617696,-0.549897,0.562197,4.124,-0.610806,-0.555405,0.564306,4.137,-0.603802,-0.560702,0.566602,4.149,-0.596914,-0.565713,0.568913,4.161,-0.590112,-0.570312,0.571412,4.171,-0.5836,-0.5742,0.5742,4.181,-0.57735,-0.57735,0.57735,4.189}, 132);
Scene7.addChild(&OrientationInterpolator364);

OrientationInterpolator& OrientationInterpolator365 =  OrientationInterpolator();
OrientationInterpolator365.setDEF(CString("Surfer2_Leg_L-ROT-INTERP"));
OrientationInterpolator365.setKey(new float[]{0,0.03125,0.0625,0.09375,0.125,0.1563,0.1875,0.2188,0.25,0.2813,0.3125,0.3438,0.375,0.4063,0.4375,0.4688,0.5,0.5313,0.5625,0.5938,0.625,0.6563,0.6875,0.7188,0.75,0.7813,0.8125,0.8438,0.875,0.9063,0.9375,0.9688,1}, 33);
OrientationInterpolator365.setKeyValue(new float[]{0,0,1,3.142,0.000821696,-0.00309498,0.999995,3.192,0.00332404,-0.0127602,0.999913,3.351,0.00700607,-0.0270303,0.99961,3.582,0.0107701,-0.0407205,0.999112,3.784,0.0132596,-0.0434686,0.998967,3.791,0.0155599,-0.0526197,0.998493,3.718,0.0165896,-0.0645684,0.997775,3.702,0.0102599,-0.0574796,0.998294,3.782,0.00440881,-0.0475979,0.998857,3.839,0.00522582,-0.0451585,0.998966,3.767,0.00814869,-0.0448183,0.998962,3.653,0.0101904,-0.0448718,0.998941,3.577,0.00985537,-0.0450317,0.998937,3.593,0.0086892,-0.045581,0.998923,3.647,0.00849517,-0.0456709,0.99892,3.656,0.0101904,-0.0448718,0.998941,3.577,0.0121606,-0.0442321,0.998947,3.49,0.0142906,-0.0437019,0.998942,3.397,0.0161808,-0.0429021,0.998948,3.307,0.0174198,-0.0414495,0.998989,3.229,0.01753,-0.0385601,0.999103,3.163,0.0167693,-0.0347285,0.999256,3.112,0.0158196,-0.0315393,0.999377,3.086,0.0150105,-0.0302309,0.99943,3.102,0.0140195,-0.0295689,0.999464,3.142,0.0125805,-0.0274812,0.999543,3.169,0.01006,-0.02224,0.999702,3.171,0.00726731,-0.0161507,0.999843,3.165,0.00434319,-0.00963743,0.999944,3.155,0.00190098,-0.00419096,0.999989,3.147,0.0004681,-0.001025,0.999999,3.143,0,0,1,3.142}, 132);
Scene7.addChild(&OrientationInterpolator365);

OrientationInterpolator& OrientationInterpolator366 =  OrientationInterpolator();
OrientationInterpolator366.setDEF(CString("Surfer2_R_Toe03-ROT-INTERP"));
OrientationInterpolator366.setKey(new float[]{0,0.03125,0.0625,0.09375,0.125,0.1563,0.1875,0.2188,0.25,0.2813,0.3125,0.3438,0.375,0.4063,0.4375,0.4688,0.5}, 17);
OrientationInterpolator366.setKeyValue(new float[]{0,0,1,0,-0.0562295,0.986392,-0.154499,0.187401,-0.0728275,0.977066,-0.200093,0.3857,-0.0560588,0.98648,-0.153997,0.5628,0,1,0,0.6981,0.142793,0.85996,0.489978,0.8999,0.285794,0.549088,0.785382,1.171,0.561875,0.160693,0.811464,0.9919,0.691169,-0.66357,0.286287,1.33,0.189701,0.640102,0.744502,1.29,0.230101,0.603802,0.763202,1.279,0.724797,-0.302099,0.619197,1.053,0.726196,-0.533997,0.432998,1.025,0.713763,-0.595869,0.368081,0.8367,0.711498,-0.604299,0.358599,0.564,0.72098,-0.564084,0.402489,0.265,0,0,1,0}, 68);
Scene7.addChild(&OrientationInterpolator366);

OrientationInterpolator& OrientationInterpolator367 =  OrientationInterpolator();
OrientationInterpolator367.setDEF(CString("Surfer2_R_Toe02-ROT-INTERP"));
OrientationInterpolator367.setKey(new float[]{0,0.03125,0.0625,0.09375,0.125,0.1563,0.1875,0.2188,0.25,0.2813,0.3125,0.3438,0.375,0.4063,0.4375,0.4688,0.5}, 17);
OrientationInterpolator367.setKeyValue(new float[]{0,0,1,0,-0.0464815,0.993932,-0.0996932,0.2327,-0.0605004,0.989706,-0.129701,0.4765,-0.0462991,0.99398,-0.099298,0.6987,0,1,0,0.8727,0.131006,0.930039,0.343314,1.037,0.295794,0.714185,0.634386,1.157,0.643701,0.29,0.708201,0.8382,0.747609,-0.587507,0.309704,0.9851,0.192391,0.786564,0.586773,1.337,0.252005,0.746916,0.615313,1.268,0.800285,-0.190096,0.568689,0.8336,0.774871,-0.508881,0.374986,0.8172,0.746207,-0.590906,0.306603,0.6754,0.741562,-0.601569,0.296985,0.4561,0.762483,-0.548488,0.343192,0.212401,0,0,1,0}, 68);
Scene7.addChild(&OrientationInterpolator367);

OrientationInterpolator& OrientationInterpolator368 =  OrientationInterpolator();
OrientationInterpolator368.setDEF(CString("Surfer2_R_Toe01-ROT-INTERP"));
OrientationInterpolator368.setKey(new float[]{0,0.03125,0.0625,0.09375,0.125,0.1563,0.1875,0.2188,0.25,0.2813,0.3125,0.3438,0.375,0.4063,0.4375,0.4688,0.5}, 17);
OrientationInterpolator368.setKeyValue(new float[]{0,0,1,0,0.0180505,0.999829,0.00400112,0.3708,0.0225907,0.999732,0.00500716,0.7852,0.0176406,0.999837,0.00391014,1.112,0,1,0,1.222,-0.130404,0.990629,-0.0406012,0.6596,-0.543577,-0.830665,-0.120495,0.3144,-0.164797,-0.985885,0.0295396,1.106,-0.319013,-0.947339,-0.0279112,0.5513,-0.128699,0.981993,-0.138299,0.9589,-0.177695,0.971771,-0.155195,0.7804,-0.534196,-0.837295,-0.116499,0.3328,-0.297808,-0.954426,-0.0195305,0.5258,-0.255103,-0.96691,-0.00284103,0.4767,-0.249893,-0.968273,-0.000794078,0.3257,-0.276816,-0.960856,-0.0113107,0.143199,0,0,1,0}, 68);
Scene7.addChild(&OrientationInterpolator368);

OrientationInterpolator& OrientationInterpolator369 =  OrientationInterpolator();
OrientationInterpolator369.setDEF(CString("Surfer2_Heel_R-ROT-INTERP"));
OrientationInterpolator369.setKey(new float[]{0,0.03125,0.0625,0.09375,0.125,0.1563,0.1875,0.2188,0.25,0.2813,0.3125,0.3438,0.375,0.4063,0.4375,0.4688,0.5,0.5313,0.5625,0.5938,0.625,0.6563,0.6875,0.7188,0.75,0.7813,0.8125,0.8438,0.875,0.9063,0.9375,0.9688,1}, 33);
OrientationInterpolator369.setKeyValue(new float[]{-0.57735,-0.57735,0.57735,4.189,0.52398,0.558479,-0.643076,2.023,0.516485,0.582783,-0.627382,2.077,-0.516498,-0.612397,0.598498,4.132,-0.503005,-0.623807,0.598206,4.114,0.432401,0.573002,-0.696202,2.004,0.363802,0.511903,-0.778205,1.869,0.467284,0.59648,-0.652578,2.074,-0.554128,-0.660433,0.506725,3.946,-0.504221,-0.624626,0.596325,4.111,0.43959,0.576487,-0.688784,2.016,0.360095,0.514993,-0.77789,1.878,0.335011,0.487116,-0.806527,1.826,0.43501,0.545712,-0.716216,1.93,-0.558075,-0.611073,0.561375,4.143,-0.609804,-0.623004,0.489903,4.043,0.577384,0.577284,-0.577384,2.094,0.563695,0.563095,-0.604295,2.054,0.549596,0.549596,-0.629196,2.018,0.54071,0.54071,-0.644412,1.997,0.550128,0.554928,-0.624031,2.019,0.564424,0.573925,-0.593326,2.058,0.57735,0.57735,-0.57735,2.094,-0.597196,-0.526397,0.605196,4.137,-0.59339,-0.489992,0.638589,4.138,0.527405,0.555905,-0.642506,1.995,0.426798,0.649096,-0.629696,1.817,0.387612,0.660321,-0.643221,1.749,0.478007,0.520108,-0.707811,1.871,0.518783,0.495484,-0.696677,1.946,0.542926,0.516925,-0.661831,1.996,0.561276,0.550076,-0.618373,2.042,0.578483,0.576783,-0.576783,2.093}, 132);
Scene7.addChild(&OrientationInterpolator369);

OrientationInterpolator& OrientationInterpolator370 =  OrientationInterpolator();
OrientationInterpolator370.setDEF(CString("Surfer2_Leg_R-ROT-INTERP"));
OrientationInterpolator370.setKey(new float[]{0,0.03125,0.0625,0.09375,0.125,0.1563,0.1875,0.2188,0.25,0.2813,0.3125,0.3438,0.375,0.4063,0.4375,0.4688,0.5,0.5313,0.5625,0.5938,0.625,0.6563,0.6875,0.7188,0.75,0.7813,0.8125,0.8438,0.875,0.9063,0.9375,0.9688,1}, 33);
OrientationInterpolator370.setKeyValue(new float[]{0,0,1,2.967,-0.00809825,-0.0259208,0.999631,2.901,-0.0343386,-0.111596,0.99316,2.688,-0.07042,-0.2289,0.9709,2.416,-0.100705,-0.319416,0.942248,2.23,-0.105306,-0.300816,0.94785,2.293,-0.0995772,-0.260693,0.960273,2.389,-0.101795,-0.307286,0.946157,2.199,-0.00988315,-0.368906,0.929414,2.206,-0.000357718,-0.347318,0.937747,2.266,-0.0196202,-0.327604,0.944611,2.335,-0.0215906,-0.269608,0.962728,2.439,-0.0169906,-0.198606,0.979932,2.559,-0.0106197,-0.125997,0.991974,2.685,-0.00438084,-0.0587478,0.998263,2.808,-0.000939975,-0.00724781,0.999973,2.916,0,0,1,2.967,0.0158996,0.000673982,0.999873,2.976,0.03461,-0.001994,0.999399,2.971,0.0436218,-0.00381516,0.999041,2.967,0.00681684,-0.000594886,0.999977,2.967,0.0191603,-0.00167503,0.999815,2.967,0.0436218,-0.00381516,0.999041,2.967,-0.0277603,0.00253303,0.999611,2.962,-0.087147,0.00762574,0.996166,2.968,-0.0517575,0.00374382,0.998653,3.004,0.0135001,-0.00287401,0.999905,3.045,0.0495177,-0.00611372,0.998755,3.048,0.0493285,-0.00495285,0.99877,2.99,0.0387118,-0.00303014,0.999246,2.941,0.0234605,-0.00165704,0.999723,2.942,0.00599589,-0.000444992,0.999982,2.962,0,0,1,2.967}, 132);
Scene7.addChild(&OrientationInterpolator370);

PositionInterpolator& PositionInterpolator371 =  PositionInterpolator();
PositionInterpolator371.setDEF(CString("Surfer2_Leg_R-POS-INTERP"));
PositionInterpolator371.setKey(new float[]{0,0.03125,0.0625,0.09375,0.125,0.1563,0.1875,0.2188,0.25,0.2813,0.3125,0.3438,0.375,0.4063,0.4375,0.4688}, 16);
PositionInterpolator371.setKeyValue(new float[]{-1.012,-0.06006,-1.719,-1.039,-0.05002,-1.719,-1.1,-0.02683,-1.719,-1.169,-0.0008667,-1.719,-1.218,0.01748,-1.719,-1.24,0.0259,-1.719,-1.25,0.02954,-1.719,-1.249,0.02921,-1.719,-1.24,0.0257,-1.719,-1.224,0.01982,-1.719,-1.199,0.01044,-1.719,-1.155,-0.006231,-1.719,-1.102,-0.02614,-1.719,-1.053,-0.04468,-1.719,-1.019,-0.05726,-1.719,-1.012,-0.06006,-1.719}, 48);
Scene7.addChild(&PositionInterpolator371);

PositionInterpolator& PositionInterpolator372 =  PositionInterpolator();
PositionInterpolator372.setDEF(CString("Surfer2__Boolean-POS-INTERP"));
PositionInterpolator372.setKey(new float[]{0,0.03125,0.0625,0.09375,0.125,0.1563,0.1875,0.2188,0.25,0.2813,0.3125,0.3438,0.375,0.4063,0.4375,0.4688,0.5,0.5313,0.5625,0.5938,0.625,0.6563,0.6875,0.7188,0.75,0.7813,0.8125,0.8438,0.875,0.9063,0.9375,0.9688,1}, 33);
PositionInterpolator372.setKeyValue(new float[]{0,0,0,0,0.01074,0,0,0.03906,0,0,0.0791,0,0,0.125,0,0,0.1709,0,0,0.2109,0,0,0.2393,0,0,0.25,0,0,0.2393,0,0,0.2109,0,0,0.1709,0,0,0.125,0,0,0.0791,0,0,0.03906,0,0,0.01074,0,0,0,0,0,0.01074,0,0,0.03906,0,0,0.0791,0,0,0.125,0,0,0.1709,0,0,0.2109,0,0,0.2393,0,0,0.25,0,0,0.2393,0,0,0.2109,0,0,0.1709,0,0,0.125,0,0,0.0791,0,0,0.03906,0,0,0.01074,0,0,0,0}, 99);
Scene7.addChild(&PositionInterpolator372);

Switch& Switch373 =  Switch();
Switch373.setDEF(CString("Surfer2"));
Switch373.setWhichChoice(0);
Group& Group374 =  Group();
Transform& Transform375 =  Transform();
Transform375.setDEF(CString("Surfer2CollisionMover"));
Transform375.setTranslation(new float[]{-30.65,0,-483.6});
Transform& Transform376 =  Transform();
Transform376.setDEF(CString("Surfer2CollisionSpinner"));
Transform376.setRotation(new float[]{1,0,0,0.0134964});
ProximitySensor& ProximitySensor377 =  ProximitySensor();
ProximitySensor377.setDEF(CString("EatSurfer2"));
ProximitySensor377.setSize(new float[]{4,4,4});
ProximitySensor377.setCenter(new float[]{0,0,4});
Transform376.addChild(&ProximitySensor377);

Transform375.addChild(&Transform376);

Group374.addChild(&Transform375);

Transform& Transform378 =  Transform();
Transform378.setDEF(CString("Inline_Surfer02-ROOT"));
Transform378.setTranslation(new float[]{-30.65,0,-483.6});
Transform378.setRotation(new float[]{0,-1,0,0.6981});
ProximitySensor& ProximitySensor379 =  ProximitySensor();
ProximitySensor379.setDEF(CString("ScareSurfer2"));
ProximitySensor379.setSize(new float[]{23,5,23});
ProximitySensor379.setCenter(new float[]{0,0,-6});
Transform378.addChild(&ProximitySensor379);

VisibilitySensor& VisibilitySensor380 =  VisibilitySensor();
VisibilitySensor380.setDEF(CString("surfer2Visible"));
VisibilitySensor380.setSize(new float[]{1,1,1});
Transform378.addChild(&VisibilitySensor380);

Transform& Transform381 =  Transform();
Transform381.setDEF(CString("Surfer2__Boolean-ROOT"));
Transform381.setTranslation(new float[]{0,0.221774,0});
Shape& Shape382 =  Shape();
Appearance& Appearance383 =  Appearance();
Material& Material384 =  Material();
Material384.setDiffuseColor(new float[]{0,0,0});
Material384.setEmissiveColor(new float[]{0.007843,0.3922,0.6157});
Material384.setShininess(0);
Appearance383.addChild(&Material384);

Shape382.addChild(&Appearance383);

IndexedFaceSet& IndexedFaceSet385 =  IndexedFaceSet();
IndexedFaceSet385.setUSE(CString("Surfer__Boolean-FACES"));
Shape382.setGeometry(&IndexedFaceSet385);

Transform381.addChild(&Shape382);

Transform& Transform386 =  Transform();
Transform386.setDEF(CString("Surfer2_Board-ROOT"));
Transform386.setTranslation(new float[]{-0.0417,-0.0001604,0.9788});
Transform386.setRotation(new float[]{0,0,1,3.142});
PositionInterpolator& PositionInterpolator387 =  PositionInterpolator();
PositionInterpolator387.setDEF(CString("Surfer2Av_Board-POS-INTERP"));
PositionInterpolator387.setKey(new float[]{0,0.1875,0.375,0.5625,0.75,0.9375,1}, 7);
PositionInterpolator387.setKeyValue(new float[]{-0.0417,-0.0001604,0.9788,-0.0417,0.07741,0.9807,-0.0417,-0.02425,0.9775,-0.0417,-0.2906,0.9381,-0.0417,0.07953,0.9807,-0.0417,-0.06991,0.974,-0.0417,-0.0001608,0.9788}, 21);
Transform386.addChild(&PositionInterpolator387);

OrientationInterpolator& OrientationInterpolator388 =  OrientationInterpolator();
OrientationInterpolator388.setDEF(CString("Surfer2Av_Board-ROT-INTERP"));
OrientationInterpolator388.setKey(new float[]{0,0.1875,0.375,0.5625,0.75,0.9375,1}, 7);
OrientationInterpolator388.setKeyValue(new float[]{0,0,1,3.142,0,0.0242102,0.999707,3.142,0,-0.00752679,0.999972,3.142,0,-0.0915005,0.995805,3.142,0,0.0248698,0.999691,3.142,0,-0.0218092,0.999762,3.142,0,0,1,3.142}, 28);
Transform386.addChild(&OrientationInterpolator388);

Shape& Shape389 =  Shape();
Appearance& Appearance390 =  Appearance();
Material& Material391 =  Material();
Material391.setDiffuseColor(new float[]{1,0.9882,0});
Material391.setShininess(0.25);
Appearance390.addChild(&Material391);

Shape389.addChild(&Appearance390);

IndexedFaceSet& IndexedFaceSet392 =  IndexedFaceSet();
IndexedFaceSet392.setUSE(CString("Surfer_Board-FACES"));
Shape389.setGeometry(&IndexedFaceSet392);

Transform386.addChild(&Shape389);

Transform& Transform393 =  Transform();
Transform393.setDEF(CString("Surfer2_Leg_R-ROOT"));
Transform393.setTranslation(new float[]{-1.012,-0.06006,-1.719});
Transform393.setRotation(new float[]{0.0167852,-0.00146719,0.999858,2.967});
PositionInterpolator& PositionInterpolator394 =  PositionInterpolator();
PositionInterpolator394.setDEF(CString("Surfer2Av_Leg_R-POS-INTERP"));
PositionInterpolator394.setKey(new float[]{0,0.1875,0.375,0.5625,0.75}, 5);
PositionInterpolator394.setKeyValue(new float[]{-1.015,-0.03887,-1.643,-1.015,-0.183,-1.643,-1.131,-0.6489,-1.327,-1.119,-1.619,-0.7108,-1.038,-0.64,-0.1306}, 15);
Transform393.addChild(&PositionInterpolator394);

OrientationInterpolator& OrientationInterpolator395 =  OrientationInterpolator();
OrientationInterpolator395.setDEF(CString("Surfer2Av_Leg_R-ROT-INTERP"));
OrientationInterpolator395.setKey(new float[]{0,0.1875,0.375,0.5625,0.75}, 5);
OrientationInterpolator395.setKeyValue(new float[]{-0.0126894,0.0231689,0.999651,2.981,0.00260013,-0.282214,0.959348,2.971,-0.122899,0.00777991,0.992389,3.061,-0.230396,0.368594,0.900586,3.257,0.137796,-0.71608,-0.684281,3.233}, 20);
Transform393.addChild(&OrientationInterpolator395);

Shape& Shape396 =  Shape();
Appearance& Appearance397 =  Appearance();
Material& Material398 =  Material();
Material398.setDiffuseColor(new float[]{0.702,0.6,0.3843});
Material398.setShininess(0.25);
Appearance397.addChild(&Material398);

Shape396.addChild(&Appearance397);

IndexedFaceSet& IndexedFaceSet399 =  IndexedFaceSet();
IndexedFaceSet399.setUSE(CString("Surfer_Leg_R-FACES"));
Shape396.setGeometry(&IndexedFaceSet399);

Transform393.addChild(&Shape396);

Transform& Transform400 =  Transform();
Transform400.setDEF(CString("Surfer2_Calf_R-ROOT"));
Transform400.setTranslation(new float[]{0.02795,-0.3406,0.07907});
Transform400.setRotation(new float[]{-1,0,0,0.0872687});
Transform400.setScale(new float[]{1,1.958,0.8});
Shape& Shape401 =  Shape();
Appearance& Appearance402 =  Appearance();
Material& Material403 =  Material();
Material403.setDiffuseColor(new float[]{0.702,0.6,0.3843});
Material403.setShininess(0.25);
Appearance402.addChild(&Material403);

Shape401.addChild(&Appearance402);

IndexedFaceSet& IndexedFaceSet404 =  IndexedFaceSet();
IndexedFaceSet404.setUSE(CString("Surfer_Calf_R-FACES"));
Shape401.setGeometry(&IndexedFaceSet404);

Transform400.addChild(&Shape401);

Transform393.addChild(&Transform400);

Transform& Transform405 =  Transform();
Transform405.setDEF(CString("Surfer2_Heel_R-ROOT"));
Transform405.setTranslation(new float[]{0.00156,-1.517,-0.02254});
Transform405.setRotation(new float[]{0.561764,0.570371,-0.599248,2.05039});
Shape& Shape406 =  Shape();
Appearance& Appearance407 =  Appearance();
Material& Material408 =  Material();
Material408.setDiffuseColor(new float[]{0.702,0.6,0.3843});
Material408.setShininess(0.25);
Appearance407.addChild(&Material408);

Shape406.addChild(&Appearance407);

IndexedFaceSet& IndexedFaceSet409 =  IndexedFaceSet();
IndexedFaceSet409.setUSE(CString("Surfer_Heel_R-FACES"));
Shape406.setGeometry(&IndexedFaceSet409);

Transform405.addChild(&Shape406);

Transform& Transform410 =  Transform();
Transform410.setDEF(CString("Surfer2_Foot_R-ROOT"));
Transform410.setTranslation(new float[]{0.2704,0,-0.02074});
Transform410.setRotation(new float[]{1,0,0,0.2618});
Transform410.setScale(new float[]{2.05,1,0.4436});
PositionInterpolator& PositionInterpolator411 =  PositionInterpolator();
PositionInterpolator411.setDEF(CString("Surfer2Av_Foot_R-POS-INTERP"));
PositionInterpolator411.setKey(new float[]{0,0.1875,0.375,0.5625,0.75}, 5);
PositionInterpolator411.setKeyValue(new float[]{0.2884,0.08679,0.0007157,0.2509,0.1126,0.1181,0.1482,0.1242,0.2566,0.0839,0.1066,0.3088,0.06327,0.0714,0.3248}, 15);
Transform410.addChild(&PositionInterpolator411);

OrientationInterpolator& OrientationInterpolator412 =  OrientationInterpolator();
OrientationInterpolator412.setDEF(CString("Surfer2Av_Foot_R-ROT-INTERP"));
OrientationInterpolator412.setKey(new float[]{0,0.1875,0.375,0.5625,0.75}, 5);
OrientationInterpolator412.setKeyValue(new float[]{-0.967379,-0.253195,0.00832282,0.3729,-0.70973,-0.704429,0.00795233,0.5513,-0.46399,-0.88358,-0.0632386,0.8957,-0.346388,-0.931667,-0.109596,1.043,-0.250092,-0.955768,-0.154795,1.064}, 20);
Transform410.addChild(&OrientationInterpolator412);

Shape& Shape413 =  Shape();
Appearance& Appearance414 =  Appearance();
Material& Material415 =  Material();
Material415.setDiffuseColor(new float[]{0.702,0.6,0.3843});
Material415.setShininess(0.25);
Appearance414.addChild(&Material415);

Shape413.addChild(&Appearance414);

IndexedFaceSet& IndexedFaceSet416 =  IndexedFaceSet();
IndexedFaceSet416.setUSE(CString("Surfer_Foot_R-FACES"));
Shape413.setGeometry(&IndexedFaceSet416);

Transform410.addChild(&Shape413);

Transform& Transform417 =  Transform();
Transform417.setDEF(CString("Surfer2_R_Toe02-ROOT"));
Transform417.setTranslation(new float[]{0.2303,0.006877,-0.04773});
Transform417.setScaleOrientation(new float[]{-0.0943647,0.793154,-0.601665,0.3048});
PositionInterpolator& PositionInterpolator418 =  PositionInterpolator();
PositionInterpolator418.setDEF(CString("Surfer2Av_R_Toe02-POS-INTERP"));
PositionInterpolator418.setKey(new float[]{0,0.1875,0.375}, 3);
PositionInterpolator418.setKeyValue(new float[]{0.2303,0.006877,-0.04773,0.2298,0.006892,-0.1269,0.2311,0.006852,0.08421}, 9);
Transform417.addChild(&PositionInterpolator418);

Shape& Shape419 =  Shape();
Appearance& Appearance420 =  Appearance();
Material& Material421 =  Material();
Material421.setDiffuseColor(new float[]{0.702,0.6,0.3843});
Material421.setShininess(0.25);
Appearance420.addChild(&Material421);

Shape419.addChild(&Appearance420);

IndexedFaceSet& IndexedFaceSet422 =  IndexedFaceSet();
IndexedFaceSet422.setUSE(CString("Surfer_R_Toe02-FACES"));
Shape419.setGeometry(&IndexedFaceSet422);

Transform417.addChild(&Shape419);

Transform410.addChild(&Transform417);

Transform& Transform423 =  Transform();
Transform423.setDEF(CString("Surfer2_R_Toe03-ROOT"));
Transform423.setTranslation(new float[]{0.1815,0.1298,-0.01264});
Transform423.setScale(new float[]{0.6226,1.016,2.312});
Transform423.setScaleOrientation(new float[]{-0.225302,0.706107,-0.671306,0.4788});
PositionInterpolator& PositionInterpolator424 =  PositionInterpolator();
PositionInterpolator424.setDEF(CString("Surfer2Av_R_Toe03-POS-INTERP"));
PositionInterpolator424.setKey(new float[]{0,0.1875,0.375}, 3);
PositionInterpolator424.setKeyValue(new float[]{0.1815,0.1298,-0.01264,0.1818,0.1315,-0.09173,0.1811,0.1269,0.1192}, 9);
Transform423.addChild(&PositionInterpolator424);

Shape& Shape425 =  Shape();
Appearance& Appearance426 =  Appearance();
Material& Material427 =  Material();
Material427.setDiffuseColor(new float[]{0.702,0.6,0.3843});
Material427.setShininess(0.25);
Appearance426.addChild(&Material427);

Shape425.addChild(&Appearance426);

IndexedFaceSet& IndexedFaceSet428 =  IndexedFaceSet();
IndexedFaceSet428.setUSE(CString("Surfer_R_Toe03-FACES"));
Shape425.setGeometry(&IndexedFaceSet428);

Transform423.addChild(&Shape425);

Transform410.addChild(&Transform423);

Transform& Transform429 =  Transform();
Transform429.setDEF(CString("Surfer2_R_Toe01-ROOT"));
Transform429.setTranslation(new float[]{0.2213,-0.1486,0.02582});
Transform429.setScale(new float[]{0.7877,1.009,2.394});
Transform429.setScaleOrientation(new float[]{0.477093,0.832788,-0.280796,0.5705});
PositionInterpolator& PositionInterpolator430 =  PositionInterpolator();
PositionInterpolator430.setDEF(CString("Surfer2Av_R_Toe01-POS-INTERP"));
PositionInterpolator430.setKey(new float[]{0,0.1875,0.375}, 3);
PositionInterpolator430.setKeyValue(new float[]{0.2213,-0.1486,0.02582,0.2217,-0.16,-0.04911,0.2207,-0.1297,0.1507}, 9);
Transform429.addChild(&PositionInterpolator430);

Shape& Shape431 =  Shape();
Appearance& Appearance432 =  Appearance();
Material& Material433 =  Material();
Material433.setDiffuseColor(new float[]{0.702,0.6,0.3843});
Material433.setShininess(0.25);
Appearance432.addChild(&Material433);

Shape431.addChild(&Appearance432);

IndexedFaceSet& IndexedFaceSet434 =  IndexedFaceSet();
IndexedFaceSet434.setUSE(CString("Surfer_R_Toe01-FACES"));
Shape431.setGeometry(&IndexedFaceSet434);

Transform429.addChild(&Shape431);

Transform410.addChild(&Transform429);

Transform405.addChild(&Transform410);

Transform393.addChild(&Transform405);

Transform386.addChild(&Transform393);

Transform& Transform435 =  Transform();
Transform435.setDEF(CString("Surfer2_Leg_L-ROOT"));
Transform435.setTranslation(new float[]{1.032,-0.004764,-1.719});
Transform435.setRotation(new float[]{0.0175088,-0.0391158,0.999081,3.1757});
PositionInterpolator& PositionInterpolator436 =  PositionInterpolator();
PositionInterpolator436.setDEF(CString("Surfer2Av_Leg_L-POS-INTERP"));
PositionInterpolator436.setKey(new float[]{0,0.1875,0.375,0.5625,0.75}, 5);
PositionInterpolator436.setKeyValue(new float[]{1.032,0.0148,-1.708,1.032,-0.08853,-1.708,1.056,-0.5187,-1.727,1.15,-2.219,-1.381,1.026,-0.6396,0.09846}, 15);
Transform435.addChild(&PositionInterpolator436);

OrientationInterpolator& OrientationInterpolator437 =  OrientationInterpolator();
OrientationInterpolator437.setDEF(CString("Surfer2Av_Leg_L-ROT-INTERP"));
OrientationInterpolator437.setKey(new float[]{0,0.1875,0.375,0.5625,0.75}, 5);
OrientationInterpolator437.setKeyValue(new float[]{0.001255,0,0.999999,3.116,0.000456082,-0.198692,0.980062,3.022,0.04641,-0.2029,0.978099,2.956,0.145703,0.332107,0.93192,3.061,-0.0862391,-0.720193,-0.688393,3.155}, 20);
Transform435.addChild(&OrientationInterpolator437);

Shape& Shape438 =  Shape();
Appearance& Appearance439 =  Appearance();
Material& Material440 =  Material();
Material440.setDiffuseColor(new float[]{0.702,0.6,0.3843});
Material440.setShininess(0.25);
Appearance439.addChild(&Material440);

Shape438.addChild(&Appearance439);

IndexedFaceSet& IndexedFaceSet441 =  IndexedFaceSet();
IndexedFaceSet441.setUSE(CString("Surfer_Leg_L-FACES"));
Shape438.setGeometry(&IndexedFaceSet441);

Transform435.addChild(&Shape438);

Transform& Transform442 =  Transform();
Transform442.setDEF(CString("Surfer2_Calf_L-ROOT"));
Transform442.setTranslation(new float[]{-0.03083,-0.4032,0.05773});
Transform442.setRotation(new float[]{-1,0,0,0.0872687});
Transform442.setScale(new float[]{1,1.958,0.8});
Shape& Shape443 =  Shape();
Appearance& Appearance444 =  Appearance();
Material& Material445 =  Material();
Material445.setDiffuseColor(new float[]{0.702,0.6,0.3843});
Material445.setShininess(0.25);
Appearance444.addChild(&Material445);

Shape443.addChild(&Appearance444);

IndexedFaceSet& IndexedFaceSet446 =  IndexedFaceSet();
IndexedFaceSet446.setUSE(CString("Surfer_Calf_L-FACES"));
Shape443.setGeometry(&IndexedFaceSet446);

Transform442.addChild(&Shape443);

Transform435.addChild(&Transform442);

Transform& Transform447 =  Transform();
Transform447.setDEF(CString("Surfer2_Heel_L-ROOT"));
Transform447.setTranslation(new float[]{0.001562,-1.517,-0.02254});
Transform447.setRotation(new float[]{-0.650792,-0.524689,0.54879,4.06427});
Shape& Shape448 =  Shape();
Appearance& Appearance449 =  Appearance();
Material& Material450 =  Material();
Material450.setDiffuseColor(new float[]{0.702,0.6,0.3843});
Material450.setShininess(0.25);
Appearance449.addChild(&Material450);

Shape448.addChild(&Appearance449);

IndexedFaceSet& IndexedFaceSet451 =  IndexedFaceSet();
IndexedFaceSet451.setUSE(CString("Surfer_Heel_L-FACES"));
Shape448.setGeometry(&IndexedFaceSet451);

Transform447.addChild(&Shape448);

Transform& Transform452 =  Transform();
Transform452.setDEF(CString("Surfer2_Foot_L-ROOT"));
Transform452.setTranslation(new float[]{0.2704,0,-0.02074});
Transform452.setRotation(new float[]{-1,0,0,0.3491});
Transform452.setScale(new float[]{2.05,1,0.4436});
PositionInterpolator& PositionInterpolator453 =  PositionInterpolator();
PositionInterpolator453.setDEF(CString("Surfer2Av_Foot_L-POS-INTERP"));
PositionInterpolator453.setKey(new float[]{0,0.1875,0.375,0.5625,0.75}, 5);
PositionInterpolator453.setKeyValue(new float[]{0.2704,0,-0.02074,0.2453,0.02323,0.09197,0.1736,0.06152,0.2113,0.04483,0.109,0.3067,-0.1263,0.1462,0.3438}, 15);
Transform452.addChild(&PositionInterpolator453);

OrientationInterpolator& OrientationInterpolator454 =  OrientationInterpolator();
OrientationInterpolator454.setDEF(CString("Surfer2Av_Foot_L-ROT-INTERP"));
OrientationInterpolator454.setKey(new float[]{0,0.1875,0.375,0.5625,0.75}, 5);
OrientationInterpolator454.setKeyValue(new float[]{-1,0,0,0.3491,-0.801627,-0.597821,0.00195907,0.4735,-0.557019,-0.830128,0.0248308,0.7583,-0.403795,-0.91329,0.0533994,1.13,-0.297683,-0.951147,0.0818755,1.539}, 20);
Transform452.addChild(&OrientationInterpolator454);

Shape& Shape455 =  Shape();
Appearance& Appearance456 =  Appearance();
Material& Material457 =  Material();
Material457.setDiffuseColor(new float[]{0.702,0.6,0.3843});
Material457.setShininess(0.25);
Appearance456.addChild(&Material457);

Shape455.addChild(&Appearance456);

IndexedFaceSet& IndexedFaceSet458 =  IndexedFaceSet();
IndexedFaceSet458.setUSE(CString("Surfer_Foot_L-FACES"));
Shape455.setGeometry(&IndexedFaceSet458);

Transform452.addChild(&Shape455);

Transform& Transform459 =  Transform();
Transform459.setDEF(CString("Surfer2_L_Toe01-ROOT"));
Transform459.setTranslation(new float[]{0.2209,0.1316,0.1773});
Transform459.setRotation(new float[]{0,1,0,0.521445});
Transform459.setScaleOrientation(new float[]{-0.522691,0.780787,0.342294,0.5581});
Shape& Shape460 =  Shape();
Appearance& Appearance461 =  Appearance();
Material& Material462 =  Material();
Material462.setDiffuseColor(new float[]{0.702,0.6,0.3843});
Material462.setShininess(0.25);
Appearance461.addChild(&Material462);

Shape460.addChild(&Appearance461);

IndexedFaceSet& IndexedFaceSet463 =  IndexedFaceSet();
IndexedFaceSet463.setUSE(CString("Surfer_L_Toe01-FACES"));
Shape460.setGeometry(&IndexedFaceSet463);

Transform459.addChild(&Shape460);

Transform452.addChild(&Transform459);

Transform& Transform464 =  Transform();
Transform464.setDEF(CString("Surfer2_L_Toe02-ROOT"));
Transform464.setTranslation(new float[]{0.2165,-0.01985,0.1629});
Transform464.setRotation(new float[]{0,-1,0,0.487246});
Transform464.setScaleOrientation(new float[]{-0.0953681,-0.782984,0.614688,0.4729});
Shape& Shape465 =  Shape();
Appearance& Appearance466 =  Appearance();
Material& Material467 =  Material();
Material467.setDiffuseColor(new float[]{0.702,0.6,0.3843});
Material467.setShininess(0.25);
Appearance466.addChild(&Material467);

Shape465.addChild(&Appearance466);

IndexedFaceSet& IndexedFaceSet468 =  IndexedFaceSet();
IndexedFaceSet468.setUSE(CString("Surfer_L_Toe02-FACES"));
Shape465.setGeometry(&IndexedFaceSet468);

Transform464.addChild(&Shape465);

Transform452.addChild(&Transform464);

Transform& Transform469 =  Transform();
Transform469.setDEF(CString("Surfer2_L_Toe03-ROOT"));
Transform469.setTranslation(new float[]{0.1743,-0.1208,0.1519});
Transform469.setRotation(new float[]{0,-1,0,1.21168});
Transform469.setScaleOrientation(new float[]{-0.0780288,-0.882186,0.464392,0.5791});
Shape& Shape470 =  Shape();
Appearance& Appearance471 =  Appearance();
Material& Material472 =  Material();
Material472.setDiffuseColor(new float[]{0.702,0.6,0.3843});
Material472.setShininess(0.25);
Appearance471.addChild(&Material472);

Shape470.addChild(&Appearance471);

IndexedFaceSet& IndexedFaceSet473 =  IndexedFaceSet();
IndexedFaceSet473.setUSE(CString("Surfer_L_Toe03-FACES"));
Shape470.setGeometry(&IndexedFaceSet473);

Transform469.addChild(&Shape470);

Transform452.addChild(&Transform469);

Transform447.addChild(&Transform452);

Transform435.addChild(&Transform447);

Transform386.addChild(&Transform435);

Transform381.addChild(&Transform386);

Transform378.addChild(&Transform381);

Group374.addChild(&Transform378);

Switch373.addChild(&Group374);

Scene7.addChild(&Switch373);

Script& Script474 =  Script();
Script474.setDEF(CString("Surfer2Collide"));
Script474.setMustEvaluate(True);
field& field475 =  field();
field475.setName(CString("runAway"));
field475.setAccessType(CString("inputOnly"));
field475.setType(CString("SFTime"));
Script474.addChild(&field475);

field& field476 =  field();
field476.setName(CString("inputFraction"));
field476.setAccessType(CString("inputOnly"));
field476.setType(CString("SFFloat"));
Script474.addChild(&field476);

field& field477 =  field();
field477.setName(CString("allSafe"));
field477.setAccessType(CString("inputOnly"));
field477.setType(CString("SFTime"));
Script474.addChild(&field477);

field& field478 =  field();
field478.setName(CString("beingEaten"));
field478.setAccessType(CString("inputOnly"));
field478.setType(CString("SFBool"));
Script474.addChild(&field478);

field& field479 =  field();
field479.setName(CString("scared"));
field479.setAccessType(CString("initializeOnly"));
field479.setType(CString("SFInt32"));
Script474.addChild(&field479);

field& field480 =  field();
field480.setName(CString("switcher"));
field480.setAccessType(CString("outputOnly"));
field480.setType(CString("SFInt32"));
Script474.addChild(&field480);

field& field481 =  field();
field481.setName(CString("startAnim"));
field481.setAccessType(CString("outputOnly"));
field481.setType(CString("SFTime"));
Script474.addChild(&field481);

field& field482 =  field();
field482.setName(CString("outputFraction"));
field482.setAccessType(CString("outputOnly"));
field482.setType(CString("SFFloat"));
Script474.addChild(&field482);

field& field483 =  field();
field483.setName(CString("eatEnabled"));
field483.setAccessType(CString("outputOnly"));
field483.setType(CString("SFBool"));
Script474.addChild(&field483);

field& field484 =  field();
field484.setName(CString("startAnimLoop"));
field484.setAccessType(CString("outputOnly"));
field484.setType(CString("SFTime"));
Script474.addChild(&field484);

field& field485 =  field();
field485.setName(CString("stopAnimLoop"));
field485.setAccessType(CString("outputOnly"));
field485.setType(CString("SFTime"));
Script474.addChild(&field485);

field& field486 =  field();
field486.setName(CString("startFloating"));
field486.setAccessType(CString("outputOnly"));
field486.setType(CString("SFTime"));
Script474.addChild(&field486);

field& field487 =  field();
field487.setName(CString("stopFloating"));
field487.setAccessType(CString("outputOnly"));
field487.setType(CString("SFTime"));
Script474.addChild(&field487);

field& field488 =  field();
field488.setName(CString("playOops"));
field488.setAccessType(CString("outputOnly"));
field488.setType(CString("SFTime"));
Script474.addChild(&field488);

field& field489 =  field();
field489.setName(CString("avoidEnabled"));
field489.setAccessType(CString("outputOnly"));
field489.setType(CString("SFBool"));
Script474.addChild(&field489);


Script474.setSourceCode(CString("javascript:")+
_T("		function beingEaten(input) {")+
_T("			if (input == TRUE) {")+
_T("				avoidEnabled = FALSE;")+
_T("				eatEnabled = FALSE;")+
_T("			}")+
_T("		}	")+
_T("		function runAway(input, time){")+
_T("			switcher = 1;")+
_T("			scared = 1;")+
_T("			eatEnabled = FALSE;")+
_T("			startAnim = time;")+
_T("			playOops = time;")+
_T("			stopAnimLoop = time;")+
_T("			//Browser.loadURL(new MFString('oops1.htm'), new MFString('target=helpertext'));")+
_T("		}")+
_T("	  function allSafe(input, time) {")+
_T("			scared = 0;")+
_T("			stopFloating = time;")+
_T("			startAnim = time;")+
_T("		}")+
_T("		function inputFraction(input, time) {")+
_T("			if (scared == 1) {")+
_T("				outputFraction = input;")+
_T("				if (input == 1.0) {")+
_T("					startFloating = time;")+
_T("				}")+
_T("			} else {")+
_T("				outputFraction = 1.0 - input;")+
_T("				if (input == 1.0) {")+
_T("					switcher = 0;")+
_T("					eatEnabled = TRUE;")+
_T("					startAnimLoop = time;")+
_T("				}")+
_T("			}")+
_T("		}"));
Scene7.addChild(&Script474);

PositionInterpolator& PositionInterpolator490 =  PositionInterpolator();
PositionInterpolator490.setDEF(CString("Surfer2Float__Boolean-POS-INTERP"));
PositionInterpolator490.setKey(new float[]{0,0.03125,0.0625,0.09375,0.125,0.1563,0.1875,0.2188,0.25,0.2813,0.3125,0.3438,0.375,0.4063,0.4375,0.4688,0.5,0.5313,0.5625,0.5938,0.625,0.6563,0.6875,0.7188,0.75,0.7813,0.8125,0.8438,0.875,0.9063,0.9375,0.9688,1}, 33);
PositionInterpolator490.setKeyValue(new float[]{0,0,0,0,0.01074,0,0,0.03906,0,0,0.0791,0,0,0.125,0,0,0.1709,0,0,0.2109,0,0,0.2393,0,0,0.25,0,0,0.2393,0,0,0.2109,0,0,0.1709,0,0,0.125,0,0,0.0791,0,0,0.03906,0,0,0.01074,0,0,0,0,0,0.01074,0,0,0.03906,0,0,0.0791,0,0,0.125,0,0,0.1709,0,0,0.2109,0,0,0.2393,0,0,0.25,0,0,0.2393,0,0,0.2109,0,0,0.1709,0,0,0.125,0,0,0.0791,0,0,0.03906,0,0,0.01074,0,0,0,0}, 99);
Scene7.addChild(&PositionInterpolator490);

TimeSensor& TimeSensor491 =  TimeSensor();
TimeSensor491.setDEF(CString("TimeSensor_Surfer2_Av01-TIMER"));
Scene7.addChild(&TimeSensor491);

TimeSensor& TimeSensor492 =  TimeSensor();
TimeSensor492.setDEF(CString("TimeSensor_Surfer2Float-TIMER"));
TimeSensor492.setCycleInterval(3.2);
TimeSensor492.setLoop(True);
Scene7.addChild(&TimeSensor492);

TimeSensor& TimeSensor493 =  TimeSensor();
TimeSensor493.setDEF(CString("TimeSensor_Innertube-TIMER"));
TimeSensor493.setCycleInterval(3);
TimeSensor493.setLoop(True);
TimeSensor493.setStartTime(1);
Scene7.addChild(&TimeSensor493);

TimeSensor& TimeSensor494 =  TimeSensor();
TimeSensor494.setDEF(CString("TimeSensor_InnertubeFast-TIMER"));
TimeSensor494.setEnabled(False);
TimeSensor494.setLoop(True);
Scene7.addChild(&TimeSensor494);

Switch& Switch495 =  Switch();
Switch495.setDEF(CString("Tuber"));
Switch495.setWhichChoice(0);
Group& Group496 =  Group();
Transform& Transform497 =  Transform();
Transform497.setDEF(CString("TuberCollisionMover"));
Transform497.setTranslation(new float[]{-100.8,0,-451.9});
Transform& Transform498 =  Transform();
Transform498.setDEF(CString("TuberCollisionSpinner"));
Transform498.setRotation(new float[]{1,0,0,0.0134964});
ProximitySensor& ProximitySensor499 =  ProximitySensor();
ProximitySensor499.setDEF(CString("EatTuber"));
ProximitySensor499.setSize(new float[]{6,6,4});
ProximitySensor499.setCenter(new float[]{0,0,4});
Transform498.addChild(&ProximitySensor499);

Transform497.addChild(&Transform498);

Group496.addChild(&Transform497);

Transform& Transform500 =  Transform();
Transform500.setDEF(CString("Inline_Tube01-ROOT"));
Transform500.setTranslation(new float[]{-100.8,0,-451.9});
Transform500.setRotation(new float[]{0,-1,0,3.944});
ProximitySensor& ProximitySensor501 =  ProximitySensor();
ProximitySensor501.setDEF(CString("ScareTuber"));
ProximitySensor501.setSize(new float[]{15,5,17});
Transform500.addChild(&ProximitySensor501);

VisibilitySensor& VisibilitySensor502 =  VisibilitySensor();
VisibilitySensor502.setDEF(CString("tuberVisible"));
VisibilitySensor502.setSize(new float[]{1,1,1});
Transform500.addChild(&VisibilitySensor502);

Transform& Transform503 =  Transform();
Transform503.setDEF(CString("Innertube_boolean-ROOT"));
Transform503.setTranslation(new float[]{-0.05191,0,-0.05077});
Shape& Shape504 =  Shape();
Appearance& Appearance505 =  Appearance();
Material& Material506 =  Material();
Material506.setDiffuseColor(new float[]{0,0,0});
Material506.setEmissiveColor(new float[]{0.007843,0.3922,0.6157});
Material506.setShininess(0);
Appearance505.addChild(&Material506);

Shape504.addChild(&Appearance505);

IndexedFaceSet& IndexedFaceSet507 =  IndexedFaceSet();
IndexedFaceSet507.setDEF(CString("Innertube_boolean-FACES"));
IndexedFaceSet507.setColorIndex(new int[]{0,2,3,-1,3,1,0,-1,0,1,5,-1,5,4,0,-1,1,3,7,-1,7,5,1,-1,3,2,6,-1,6,7,3,-1,2,0,4,-1,4,6,2,-1}, 40);
IndexedFaceSet507.setCoordIndex(new int32_t[]{0,2,3,-1,3,1,0,-1,0,1,5,-1,5,4,0,-1,1,3,7,-1,7,5,1,-1,3,2,6,-1,6,7,3,-1,2,0,4,-1,4,6,2,-1}, 40);
CColor& Color508 =  CColor();
Color508.setColor(new float[]{0.007843,0.3922,0.6157,0.007843,0.3922,0.6157,0.007843,0.3922,0.6157,0.007843,0.3922,0.6157,0.007843,0.3922,0.6157,0.007843,0.3922,0.6157,0.007843,0.3922,0.6157,0.007843,0.3922,0.6157}, 24);
IndexedFaceSet507.setColor(&Color508);

Coordinate& Coordinate509 =  Coordinate();
Coordinate509.setDEF(CString("Innertube_boolean-COORD"));
Coordinate509.setPoint(new float[]{-2.523,0,2.66,2.605,0,2.66,-2.523,0,-5.753,2.605,0,-5.753,-2.523,1.182,2.66,2.605,1.182,2.66,-2.523,1.182,-5.753,2.605,1.182,-5.753}, 24);
IndexedFaceSet507.setCoord(&Coordinate509);

Shape504.setGeometry(&IndexedFaceSet507);

Transform503.addChild(&Shape504);

Transform& Transform510 =  Transform();
Transform510.setDEF(CString("Innertube-ROOT"));
Transform510.setTranslation(new float[]{0.05259,-0.002682,0.04626});
Transform510.setRotation(new float[]{-0.0180521,0.999674,0.0180521,1.57099});
Transform510.setScaleOrientation(new float[]{0.834748,-0.4924,-0.24645,0.00573601});
OrientationInterpolator& OrientationInterpolator511 =  OrientationInterpolator();
OrientationInterpolator511.setDEF(CString("Innertube-ROT-INTERP"));
OrientationInterpolator511.setKey(new float[]{0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1}, 11);
OrientationInterpolator511.setKeyValue(new float[]{-0.00217899,0.999995,0.00217899,1.571,-0.01416,0.999799,0.01416,1.571,-0.021251,0.999548,0.021251,1.571,-0.0153195,0.999765,0.0153195,1.571,-0.00403993,0.999984,0.00403993,1.571,0.00724634,0.999947,-0.00724634,1.571,0.0164405,0.99973,-0.0164405,1.571,0.0214309,0.999541,-0.0214309,1.571,0.0196902,0.999612,-0.0196902,1.571,0.0104999,0.99989,-0.0104999,1.571,-0.00217899,0.999995,0.00217899,1.571}, 44);
Transform510.addChild(&OrientationInterpolator511);

Shape& Shape512 =  Shape();
Appearance& Appearance513 =  Appearance();
Material& Material514 =  Material();
Material514.setDiffuseColor(new float[]{0.2353,0.2353,0.2353});
Material514.setShininess(0.25);
Appearance513.addChild(&Material514);

Shape512.addChild(&Appearance513);

IndexedFaceSet& IndexedFaceSet515 =  IndexedFaceSet();
IndexedFaceSet515.setDEF(CString("Innertube-FACES"));
IndexedFaceSet515.setCreaseAngle(3);
IndexedFaceSet515.setColorIndex(new int[]{0,9,8,-1,0,1,9,-1,2,11,10,-1,2,3,11,-1,3,12,11,-1,3,4,12,-1,4,13,12,-1,4,5,13,-1,5,14,13,-1,5,6,14,-1,6,15,14,-1,6,7,15,-1,7,8,15,-1,7,0,8,-1,8,17,16,-1,8,9,17,-1,10,19,18,-1,10,11,19,-1,11,20,19,-1,11,12,20,-1,12,21,20,-1,12,13,21,-1,13,22,21,-1,13,14,22,-1,14,23,22,-1,14,15,23,-1,15,16,23,-1,15,8,16,-1,16,25,24,-1,16,17,25,-1,18,27,26,-1,18,19,27,-1,19,28,27,-1,19,20,28,-1,20,29,28,-1,20,21,29,-1,21,30,29,-1,21,22,30,-1,22,31,30,-1,22,23,31,-1,23,24,31,-1,23,16,24,-1,24,33,32,-1,24,25,33,-1,26,35,34,-1,26,27,35,-1,27,36,35,-1,27,28,36,-1,28,37,36,-1,28,29,37,-1,29,38,37,-1,29,30,38,-1,30,39,38,-1,30,31,39,-1,31,32,39,-1,31,24,32,-1,32,41,40,-1,32,33,41,-1,34,43,42,-1,34,35,43,-1,35,44,43,-1,35,36,44,-1,36,45,44,-1,36,37,45,-1,37,46,45,-1,37,38,46,-1,38,47,46,-1,38,39,47,-1,39,40,47,-1,39,32,40,-1,40,49,48,-1,40,41,49,-1,42,51,50,-1,42,43,51,-1,43,52,51,-1,43,44,52,-1,44,53,52,-1,44,45,53,-1,45,54,53,-1,45,46,54,-1,46,55,54,-1,46,47,55,-1,47,48,55,-1,47,40,48,-1,48,57,56,-1,48,49,57,-1,50,59,58,-1,50,51,59,-1,51,60,59,-1,51,52,60,-1,52,61,60,-1,52,53,61,-1,53,62,61,-1,53,54,62,-1,54,63,62,-1,54,55,63,-1,55,56,63,-1,55,48,56,-1,56,1,0,-1,56,57,1,-1,58,3,2,-1,58,59,3,-1,59,4,3,-1,59,60,4,-1,60,5,4,-1,60,61,5,-1,61,6,5,-1,61,62,6,-1,62,7,6,-1,62,63,7,-1,63,0,7,-1,63,56,0,-1}, 448);
IndexedFaceSet515.setCoordIndex(new int32_t[]{0,9,8,-1,0,1,9,-1,2,11,10,-1,2,3,11,-1,3,12,11,-1,3,4,12,-1,4,13,12,-1,4,5,13,-1,5,14,13,-1,5,6,14,-1,6,15,14,-1,6,7,15,-1,7,8,15,-1,7,0,8,-1,8,17,16,-1,8,9,17,-1,10,19,18,-1,10,11,19,-1,11,20,19,-1,11,12,20,-1,12,21,20,-1,12,13,21,-1,13,22,21,-1,13,14,22,-1,14,23,22,-1,14,15,23,-1,15,16,23,-1,15,8,16,-1,16,25,24,-1,16,17,25,-1,18,27,26,-1,18,19,27,-1,19,28,27,-1,19,20,28,-1,20,29,28,-1,20,21,29,-1,21,30,29,-1,21,22,30,-1,22,31,30,-1,22,23,31,-1,23,24,31,-1,23,16,24,-1,24,33,32,-1,24,25,33,-1,26,35,34,-1,26,27,35,-1,27,36,35,-1,27,28,36,-1,28,37,36,-1,28,29,37,-1,29,38,37,-1,29,30,38,-1,30,39,38,-1,30,31,39,-1,31,32,39,-1,31,24,32,-1,32,41,40,-1,32,33,41,-1,34,43,42,-1,34,35,43,-1,35,44,43,-1,35,36,44,-1,36,45,44,-1,36,37,45,-1,37,46,45,-1,37,38,46,-1,38,47,46,-1,38,39,47,-1,39,40,47,-1,39,32,40,-1,40,49,48,-1,40,41,49,-1,42,51,50,-1,42,43,51,-1,43,52,51,-1,43,44,52,-1,44,53,52,-1,44,45,53,-1,45,54,53,-1,45,46,54,-1,46,55,54,-1,46,47,55,-1,47,48,55,-1,47,40,48,-1,48,57,56,-1,48,49,57,-1,50,59,58,-1,50,51,59,-1,51,60,59,-1,51,52,60,-1,52,61,60,-1,52,53,61,-1,53,62,61,-1,53,54,62,-1,54,63,62,-1,54,55,63,-1,55,56,63,-1,55,48,56,-1,56,1,0,-1,56,57,1,-1,58,3,2,-1,58,59,3,-1,59,4,3,-1,59,60,4,-1,60,5,4,-1,60,61,5,-1,61,6,5,-1,61,62,6,-1,62,7,6,-1,62,63,7,-1,63,0,7,-1,63,56,0,-1}, 448);
CColor& Color516 =  CColor();
Color516.setColor(new float[]{0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.4353,0.4353,0.4353,0.4353,0.4353,0.4353,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.4353,0.4353,0.4353,0.4353,0.4353,0.4353,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.4353,0.4353,0.4353,0.4353,0.4353,0.4353,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.4353,0.4353,0.4353,0.4353,0.4353,0.4353,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.4353,0.4353,0.4353,0.4353,0.4353,0.4353,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.4353,0.4353,0.4353,0.4353,0.4353,0.4353,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.4353,0.4353,0.4353,0.4353,0.4353,0.4353,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.4353,0.4353,0.4353,0.4353,0.4353,0.4353,0.1647,0.1647,0.1647}, 192);
IndexedFaceSet515.setColor(&Color516);

Coordinate& Coordinate517 =  Coordinate();
Coordinate517.setDEF(CString("Innertube-COORD"));
Coordinate517.setPoint(new float[]{0,0,-2.37,0,0.4114,-2.237,0,0.4114,-1.104,0,0,-0.9704,0,-0.4114,-1.104,0,-0.6657,-1.454,0,-0.6657,-1.887,0,-0.4114,-2.237,1.676,0,-1.676,1.582,0.4114,-1.582,0.7807,0.4114,-0.7807,0.6862,0,-0.6862,0.7807,-0.4114,-0.7807,1.028,-0.6657,-1.028,1.334,-0.6657,-1.334,1.582,-0.4114,-1.582,2.37,0,0,2.237,0.4114,0,1.104,0.4114,0,0.9704,0,0,1.104,-0.4114,0,1.454,-0.6657,0,1.887,-0.6657,0,2.237,-0.4114,0,1.676,0,1.676,1.582,0.4114,1.582,0.7807,0.4114,0.7807,0.6862,0,0.6862,0.7807,-0.4114,0.7807,1.028,-0.6657,1.028,1.334,-0.6657,1.334,1.582,-0.4114,1.582,0,0,2.37,0,0.4114,2.237,0,0.4114,1.104,0,0,0.9704,0,-0.4114,1.104,0,-0.6657,1.454,0,-0.6657,1.887,0,-0.4114,2.237,-1.676,0,1.676,-1.582,0.4114,1.582,-0.7807,0.4114,0.7807,-0.6862,0,0.6862,-0.7807,-0.4114,0.7807,-1.028,-0.6657,1.028,-1.334,-0.6657,1.334,-1.582,-0.4114,1.582,-2.37,0,0,-2.237,0.4114,0,-1.104,0.4114,0,-0.9704,0,0,-1.104,-0.4114,0,-1.454,-0.6657,0,-1.887,-0.6657,0,-2.237,-0.4114,0,-1.676,0,-1.676,-1.582,0.4114,-1.582,-0.7807,0.4114,-0.7807,-0.6862,0,-0.6862,-0.7807,-0.4114,-0.7807,-1.028,-0.6657,-1.028,-1.334,-0.6657,-1.334,-1.582,-0.4114,-1.582}, 192);
IndexedFaceSet515.setCoord(&Coordinate517);

Shape512.setGeometry(&IndexedFaceSet515);

Transform510.addChild(&Shape512);

Transform& Transform518 =  Transform();
Transform518.setDEF(CString("Innertube_L_leg-ROOT"));
Transform518.setTranslation(new float[]{3.1493,-0.334482,-0.816699});
Transform518.setRotation(new float[]{-0.00159022,-0.0416662,0.99913,0.596085});
Transform518.setScaleOrientation(new float[]{0,-0.0296788,-0.99956,0.0631516});
PositionInterpolator& PositionInterpolator519 =  PositionInterpolator();
PositionInterpolator519.setDEF(CString("Innertube_L_leg-POS-INTERP"));
PositionInterpolator519.setKey(new float[]{0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1}, 11);
PositionInterpolator519.setKeyValue(new float[]{2.832,-0.4993,-0.8342,2.897,-0.4733,-0.8304,3.104,-0.3649,-0.8174,3.188,-0.3085,-0.8161,3.216,-0.2875,-0.8233,3.222,-0.2834,-0.8288,3.199,-0.3004,-0.8233,3.167,-0.3234,-0.8193,3.079,-0.3805,-0.8225,2.937,-0.4554,-0.8298,2.832,-0.4993,-0.8342}, 33);
Transform518.addChild(&PositionInterpolator519);

OrientationInterpolator& OrientationInterpolator520 =  OrientationInterpolator();
OrientationInterpolator520.setDEF(CString("Innertube_L_leg-ROT-INTERP"));
OrientationInterpolator520.setKey(new float[]{0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1}, 11);
OrientationInterpolator520.setKeyValue(new float[]{0.0107304,-0.00139006,0.999942,0.3562,0.006565,-0.01893,0.999799,0.4029,-0.000998629,-0.0462613,0.998929,0.5599,-0.00204294,-0.0381489,0.99927,0.627,-0.000941888,-0.0149998,0.999887,0.6502,0,0,1,0.6545,-0.00026581,-0.0179207,0.999839,0.6358,-0.000293105,-0.0341306,0.999417,0.6097,0.00150899,-0.0347598,0.999395,0.5396,0.00600693,-0.0197098,0.999788,0.4325,0.0107304,-0.00139006,0.999942,0.3562}, 44);
Transform518.addChild(&OrientationInterpolator520);

Shape& Shape521 =  Shape();
Appearance& Appearance522 =  Appearance();
Material& Material523 =  Material();
Material523.setDiffuseColor(new float[]{0.9804,0.7686,0.7255});
Material523.setShininess(0.25);
Appearance522.addChild(&Material523);

Shape521.addChild(&Appearance522);

IndexedFaceSet& IndexedFaceSet524 =  IndexedFaceSet();
IndexedFaceSet524.setDEF(CString("Innertube_L_leg-FACES"));
IndexedFaceSet524.setCreaseAngle(3);
IndexedFaceSet524.setColorIndex(new int[]{0,9,8,-1,0,1,9,-1,1,10,9,-1,1,2,10,-1,2,11,10,-1,2,3,11,-1,3,12,11,-1,3,4,12,-1,4,13,12,-1,4,5,13,-1,5,14,13,-1,5,6,14,-1,6,15,14,-1,6,7,15,-1,7,8,15,-1,7,0,8,-1}, 64);
IndexedFaceSet524.setCoordIndex(new int32_t[]{0,9,8,-1,0,1,9,-1,1,10,9,-1,1,2,10,-1,2,11,10,-1,2,3,11,-1,3,12,11,-1,3,4,12,-1,4,13,12,-1,4,5,13,-1,5,14,13,-1,5,6,14,-1,6,15,14,-1,6,7,15,-1,7,8,15,-1,7,0,8,-1}, 64);
CColor& Color525 =  CColor();
Color525.setColor(new float[]{0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549}, 48);
IndexedFaceSet524.setColor(&Color525);

Coordinate& Coordinate526 =  Coordinate();
Coordinate526.setDEF(CString("Innertube_L_leg-COORD"));
Coordinate526.setPoint(new float[]{0.2432,0,0,0.172,0,-0.172,0,0,-0.2432,-0.172,0,-0.172,-0.2432,0,0,-0.172,0,0.172,0,0,0.2432,0.172,0,0.172,0.2432,1.5,0,0.172,1.5,-0.172,0,1.5,-0.2432,-0.172,1.5,-0.172,-0.2432,1.5,0,-0.172,1.5,0.172,0,1.5,0.2432,0.172,1.5,0.172}, 48);
IndexedFaceSet524.setCoord(&Coordinate526);

Shape521.setGeometry(&IndexedFaceSet524);

Transform518.addChild(&Shape521);

Transform& Transform527 =  Transform();
Transform527.setDEF(CString("Innertube_L_flipper-ROOT"));
Transform527.setTranslation(new float[]{-0.304026,-0.965158,-0.0556783});
Transform527.setRotation(new float[]{-0.603271,-0.529571,-0.596338,2.01785});
Transform527.setScale(new float[]{1,1.343,0.9976});
Transform527.setScaleOrientation(new float[]{-0.317708,0.946024,-0.0640316,0.2952});
PositionInterpolator& PositionInterpolator528 =  PositionInterpolator();
PositionInterpolator528.setDEF(CString("Innertube_L_flipper-POS-INTERP"));
PositionInterpolator528.setKey(new float[]{0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1}, 11);
PositionInterpolator528.setKeyValue(new float[]{-0.05453,-1.021,-0.05153,-0.2899,-0.9813,-0.05595,-0.46,-0.915,-0.05577,-0.1708,-1.008,-0.0556,0.4498,-0.9173,-0.02782,0.7328,-0.7119,0.0002907,0.6523,-0.7863,-0.009747,0.5533,-0.8589,-0.0198,0.3896,-0.9445,-0.03199,0.1714,-1.007,-0.04351,-0.05453,-1.021,-0.05153}, 33);
Transform527.addChild(&PositionInterpolator528);

OrientationInterpolator& OrientationInterpolator529 =  OrientationInterpolator();
OrientationInterpolator529.setDEF(CString("Innertube_L_flipper-ROT-INTERP"));
OrientationInterpolator529.setKey(new float[]{0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1}, 11);
OrientationInterpolator529.setKeyValue(new float[]{-0.549493,-0.637292,-0.540293,1.897,-0.599003,-0.538203,-0.592903,2.012,-0.629609,-0.461607,-0.624909,2.105,-0.576491,-0.587791,-0.567591,1.948,-0.396498,-0.836197,-0.378898,1.701,-0.255398,-0.938192,-0.233598,1.627,-0.302699,-0.910597,-0.281399,1.644,-0.352683,-0.874758,-0.332284,1.668,-0.420293,-0.813087,-0.402794,1.72,-0.491279,-0.728069,-0.47808,1.801,-0.549493,-0.637292,-0.540293,1.897}, 44);
Transform527.addChild(&OrientationInterpolator529);

Shape& Shape530 =  Shape();
Appearance& Appearance531 =  Appearance();
Material& Material532 =  Material();
Material532.setDiffuseColor(new float[]{0.8941,0.8392,0.6});
Appearance531.addChild(&Material532);

Shape530.addChild(&Appearance531);

IndexedFaceSet& IndexedFaceSet533 =  IndexedFaceSet();
IndexedFaceSet533.setDEF(CString("Innertube_L_flipper-FACES"));
IndexedFaceSet533.setColorIndex(new int[]{8,6,1,-1,6,9,1,-1,6,5,9,-1,5,6,7,-1,8,1,5,-1,8,5,7,-1,3,5,1,-1,2,0,4,-1,4,6,10,-1,6,0,10,-1,6,4,7,-1,0,7,4,-1,8,0,6,-1,0,8,7,-1,1,9,3,-1,5,3,9,-1,4,10,2,-1,10,0,2,-1}, 72);
IndexedFaceSet533.setCoordIndex(new int32_t[]{8,6,1,-1,6,9,1,-1,6,5,9,-1,5,6,7,-1,8,1,5,-1,8,5,7,-1,3,5,1,-1,2,0,4,-1,4,6,10,-1,6,0,10,-1,6,4,7,-1,0,7,4,-1,8,0,6,-1,0,8,7,-1,1,9,3,-1,5,3,9,-1,4,10,2,-1,10,0,2,-1}, 72);
CColor& Color534 =  CColor();
Color534.setColor(new float[]{0.6588,0.451,0,0.6588,0.451,0,1,0.8941,0,1,0.8941,0,1,0.8941,0,1,0.8941,0,1,0.8941,0,1,0.8941,0,0.6588,0.451,0,0.6588,0.451,0,0.6588,0.451,0}, 33);
IndexedFaceSet533.setColor(&Color534);

Coordinate& Coordinate535 =  Coordinate();
Coordinate535.setDEF(CString("Innertube_L_flipper-COORD"));
Coordinate535.setPoint(new float[]{-0.3059,0,1.228,0.3059,0,1.228,-0.7598,0.07611,-1.079,0.7598,0.07611,-1.079,-0.3059,0.1522,1.228,0.3059,0.1522,1.228,0,0.07611,-1.258,0,0.1522,1.374,0,0,1.374,0.3598,0.07611,-1.037,-0.4,0.07611,-1.037}, 33);
IndexedFaceSet533.setCoord(&Coordinate535);

Shape530.setGeometry(&IndexedFaceSet533);

Transform527.addChild(&Shape530);

Transform& Transform536 =  Transform();
Transform536.setDEF(CString("Innertube_foot_L-ROOT"));
Transform536.setTranslation(new float[]{0.009344,0.2285,1.015});
Transform536.setRotation(new float[]{0.548102,0.543802,-0.635502,2.018});
Transform536.setScale(new float[]{1.002,1,0.7445});
Transform536.setScaleOrientation(new float[]{-0.0369916,0.178508,-0.983243,0.2825});
Shape& Shape537 =  Shape();
Appearance& Appearance538 =  Appearance();
Material& Material539 =  Material();
Material539.setDiffuseColor(new float[]{0.9804,0.7686,0.7255});
Material539.setShininess(0.25);
Appearance538.addChild(&Material539);

Shape537.addChild(&Appearance538);

IndexedFaceSet& IndexedFaceSet540 =  IndexedFaceSet();
IndexedFaceSet540.setDEF(CString("Innertube_foot_L-FACES"));
IndexedFaceSet540.setCreaseAngle(3);
IndexedFaceSet540.setColorIndex(new int[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,1,-1,1,8,9,-1,1,9,2,-1,2,9,10,-1,2,10,3,-1,3,10,11,-1,3,11,4,-1,4,11,12,-1,4,12,5,-1,5,12,13,-1,5,13,6,-1,6,13,14,-1,6,14,7,-1,7,14,8,-1,7,8,1,-1,15,9,8,-1,15,10,9,-1,15,11,10,-1,15,12,11,-1,15,13,12,-1,15,14,13,-1,15,8,14,-1}, 112);
IndexedFaceSet540.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,1,-1,1,8,9,-1,1,9,2,-1,2,9,10,-1,2,10,3,-1,3,10,11,-1,3,11,4,-1,4,11,12,-1,4,12,5,-1,5,12,13,-1,5,13,6,-1,6,13,14,-1,6,14,7,-1,7,14,8,-1,7,8,1,-1,15,9,8,-1,15,10,9,-1,15,11,10,-1,15,12,11,-1,15,13,12,-1,15,14,13,-1,15,8,14,-1}, 112);
CColor& Color541 =  CColor();
Color541.setColor(new float[]{0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549}, 48);
IndexedFaceSet540.setColor(&Color541);

Coordinate& Coordinate542 =  Coordinate();
Coordinate542.setDEF(CString("Innertube_foot_L-COORD"));
Coordinate542.setPoint(new float[]{0,0.2454,0,0.003793,0.1584,-0.1692,-0.1576,0.1608,-0.1257,-0.1965,0.1608,0.04486,-0.1069,0.1608,0.08578,0.07954,0.1608,0.07121,0.7156,0.1608,-0.002197,0.1576,0.1608,-0.1257,0.003793,-0.05973,-0.219,-0.1965,-0.05738,-0.1567,-0.2451,-0.05738,0.05594,-0.1285,-0.05738,0.1306,0.1053,-0.05738,0.09845,0.7641,-0.05738,0.008882,0.1965,-0.05738,-0.1567,0,-0.2395,0}, 48);
IndexedFaceSet540.setCoord(&Coordinate542);

Shape537.setGeometry(&IndexedFaceSet540);

Transform536.addChild(&Shape537);

Transform527.addChild(&Transform536);

Transform518.addChild(&Transform527);

Transform510.addChild(&Transform518);

Transform& Transform543 =  Transform();
Transform543.setDEF(CString("Innertube_R_leg-ROOT"));
Transform543.setTranslation(new float[]{3.11954,-0.354196,0.821474});
Transform543.setRotation(new float[]{0.000625451,-0.0344513,0.999406,0.571893});
Transform543.setScaleOrientation(new float[]{0,-0.00266799,0.999996,0.7854});
PositionInterpolator& PositionInterpolator544 =  PositionInterpolator();
PositionInterpolator544.setDEF(CString("Innertube_R_leg-POS-INTERP"));
PositionInterpolator544.setKey(new float[]{0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1}, 11);
PositionInterpolator544.setKeyValue(new float[]{3.222,-0.2834,0.8137,3.199,-0.3004,0.8192,3.167,-0.3234,0.8232,3.079,-0.3805,0.82,2.937,-0.4554,0.8127,2.832,-0.4993,0.8083,2.897,-0.4733,0.8121,3.104,-0.3649,0.8251,3.188,-0.3085,0.8264,3.216,-0.2875,0.8192,3.222,-0.2835,0.8144}, 33);
Transform543.addChild(&PositionInterpolator544);

OrientationInterpolator& OrientationInterpolator545 =  OrientationInterpolator();
OrientationInterpolator545.setDEF(CString("Innertube_R_leg-ROT-INTERP"));
OrientationInterpolator545.setKey(new float[]{0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1}, 11);
OrientationInterpolator545.setKeyValue(new float[]{0,0,1,0.6545,-0.00026581,-0.0179207,0.999839,0.6358,-0.000293105,-0.0341306,0.999417,0.6097,0.00150899,-0.0347598,0.999395,0.5396,0.00600693,-0.0197098,0.999788,0.4325,0.0107304,-0.00139006,0.999942,0.3562,0.006565,-0.01893,0.999799,0.4029,-0.000998629,-0.0462613,0.998929,0.5599,-0.00204294,-0.0381489,0.99927,0.627,-0.000941888,-0.0149998,0.999887,0.6502,-0.0001246,-0.001844,0.999998,0.6544}, 44);
Transform543.addChild(&OrientationInterpolator545);

Shape& Shape546 =  Shape();
Appearance& Appearance547 =  Appearance();
Material& Material548 =  Material();
Material548.setDiffuseColor(new float[]{0.9804,0.7686,0.7255});
Material548.setShininess(0.25);
Appearance547.addChild(&Material548);

Shape546.addChild(&Appearance547);

IndexedFaceSet& IndexedFaceSet549 =  IndexedFaceSet();
IndexedFaceSet549.setUSE(CString("Innertube_L_leg-FACES"));
Shape546.setGeometry(&IndexedFaceSet549);

Transform543.addChild(&Shape546);

Transform& Transform550 =  Transform();
Transform550.setDEF(CString("Innertube_R_flipper-ROOT"));
Transform550.setTranslation(new float[]{0.414497,-0.929076,-0.0268408});
Transform550.setRotation(new float[]{-0.41021,-0.823318,-0.392271,1.71108});
Transform550.setScale(new float[]{1,1.343,0.9976});
Transform550.setScaleOrientation(new float[]{-0.317708,0.946024,-0.0640316,0.2952});
PositionInterpolator& PositionInterpolator551 =  PositionInterpolator();
PositionInterpolator551.setDEF(CString("Innertube_R_flipper-POS-INTERP"));
PositionInterpolator551.setKey(new float[]{0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1}, 11);
PositionInterpolator551.setKeyValue(new float[]{0.7328,-0.7119,0.00338,0.6326,-0.8022,-0.008813,0.5071,-0.8869,-0.02059,0.3354,-0.9651,-0.03218,0.1384,-1.013,-0.04181,-0.06012,-1.021,-0.04859,-0.2865,-0.9823,-0.05284,-0.4595,-0.9153,-0.05269,-0.1708,-1.008,-0.05251,0.4498,-0.9173,-0.02473,0.7328,-0.7119,0.00338}, 33);
Transform550.addChild(&PositionInterpolator551);

OrientationInterpolator& OrientationInterpolator552 =  OrientationInterpolator();
OrientationInterpolator552.setDEF(CString("Innertube_R_flipper-ROT-INTERP"));
OrientationInterpolator552.setKey(new float[]{0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1}, 11);
OrientationInterpolator552.setKeyValue(new float[]{-0.255398,-0.938192,-0.233598,1.627,-0.313304,-0.903613,-0.292104,1.648,-0.373312,-0.857628,-0.353712,1.682,-0.439697,-0.792194,-0.423197,1.739,-0.500608,-0.715011,-0.488008,1.814,-0.550788,-0.634986,-0.541688,1.9,-0.598382,-0.539684,-0.592182,2.01,-0.629501,-0.461901,-0.624801,2.105,-0.576491,-0.587791,-0.567591,1.948,-0.396498,-0.836197,-0.378898,1.701,-0.255398,-0.938192,-0.233598,1.627}, 44);
Transform550.addChild(&OrientationInterpolator552);

Shape& Shape553 =  Shape();
Appearance& Appearance554 =  Appearance();
Material& Material555 =  Material();
Material555.setDiffuseColor(new float[]{0.8941,0.8392,0.6});
Appearance554.addChild(&Material555);

Shape553.addChild(&Appearance554);

IndexedFaceSet& IndexedFaceSet556 =  IndexedFaceSet();
IndexedFaceSet556.setUSE(CString("Innertube_L_flipper-FACES"));
Shape553.setGeometry(&IndexedFaceSet556);

Transform550.addChild(&Shape553);

Transform& Transform557 =  Transform();
Transform557.setDEF(CString("Innertube_foot_R-ROOT"));
Transform557.setTranslation(new float[]{0.000116,0.2244,0.9932});
Transform557.setRotation(new float[]{0.552227,0.536026,-0.638531,2.029});
Transform557.setScale(new float[]{1.002,1,0.7445});
Transform557.setScaleOrientation(new float[]{-0.102804,0.168407,-0.980342,0.2838});
Shape& Shape558 =  Shape();
Appearance& Appearance559 =  Appearance();
Material& Material560 =  Material();
Material560.setDiffuseColor(new float[]{0.9804,0.7686,0.7255});
Material560.setShininess(0.25);
Appearance559.addChild(&Material560);

Shape558.addChild(&Appearance559);

IndexedFaceSet& IndexedFaceSet561 =  IndexedFaceSet();
IndexedFaceSet561.setDEF(CString("Innertube_foot_R-FACES"));
IndexedFaceSet561.setCreaseAngle(3);
IndexedFaceSet561.setColorIndex(new int[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,1,-1,1,8,9,-1,1,9,2,-1,2,9,10,-1,2,10,3,-1,3,10,11,-1,3,11,4,-1,4,11,12,-1,4,12,5,-1,5,12,13,-1,5,13,6,-1,6,13,14,-1,6,14,7,-1,7,14,8,-1,7,8,1,-1,15,9,8,-1,15,10,9,-1,15,11,10,-1,15,12,11,-1,15,13,12,-1,15,14,13,-1,15,8,14,-1}, 112);
IndexedFaceSet561.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,1,-1,1,8,9,-1,1,9,2,-1,2,9,10,-1,2,10,3,-1,3,10,11,-1,3,11,4,-1,4,11,12,-1,4,12,5,-1,5,12,13,-1,5,13,6,-1,6,13,14,-1,6,14,7,-1,7,14,8,-1,7,8,1,-1,15,9,8,-1,15,10,9,-1,15,11,10,-1,15,12,11,-1,15,13,12,-1,15,14,13,-1,15,8,14,-1}, 112);
CColor& Color562 =  CColor();
Color562.setColor(new float[]{0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549}, 48);
IndexedFaceSet561.setColor(&Color562);

Coordinate& Coordinate563 =  Coordinate();
Coordinate563.setDEF(CString("Innertube_foot_R-COORD"));
Coordinate563.setPoint(new float[]{0,0.2454,0,-0.04862,0.1547,-0.1776,-0.1576,0.1608,-0.1257,-0.1965,0.1608,0.04486,-0.1069,0.1608,0.08578,0.07954,0.1608,0.07121,0.7156,0.1608,-0.002197,0.1576,0.1608,-0.1257,-0.04862,-0.06344,-0.2273,-0.1965,-0.05738,-0.1567,-0.2451,-0.05738,0.05594,-0.1285,-0.05738,0.1306,0.1053,-0.05738,0.09845,0.7641,-0.05738,0.008882,0.1965,-0.05738,-0.1567,0,-0.2395,0}, 48);
IndexedFaceSet561.setCoord(&Coordinate563);

Shape558.setGeometry(&IndexedFaceSet561);

Transform557.addChild(&Shape558);

Transform550.addChild(&Transform557);

Transform543.addChild(&Transform550);

Transform510.addChild(&Transform543);

Transform& Transform564 =  Transform();
Transform564.setDEF(CString("Innertube_Dummy-ROOT"));
Transform564.setTranslation(new float[]{-0.004756,-0.7784,0.073});
Transform564.setRotation(new float[]{0.565059,-0.565059,0.601179,2.05904});
Transform564.setScaleOrientation(new float[]{0.745084,-0.0868981,0.661286,0.1436});
OrientationInterpolator& OrientationInterpolator565 =  OrientationInterpolator();
OrientationInterpolator565.setDEF(CString("Innertube_Dummy-ROT-INTERP"));
OrientationInterpolator565.setKey(new float[]{0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1}, 11);
OrientationInterpolator565.setKeyValue(new float[]{0.554691,-0.554691,0.62019,2.031,0.550539,-0.550539,0.627545,2.021,0.559636,-0.559636,0.61124,2.044,0.569582,-0.569582,0.592581,2.072,0.578481,-0.578481,0.575081,2.098,0.584818,-0.584818,0.562117,2.117,0.587209,-0.587209,0.557109,2.125,0.583712,-0.583712,0.564412,2.114,0.575075,-0.575075,0.581875,2.088,0.564197,-0.564197,0.602797,2.057,0.554691,-0.554691,0.62019,2.031}, 44);
Transform564.addChild(&OrientationInterpolator565);

Transform& Transform566 =  Transform();
Transform566.setDEF(CString("Innertube_L_butt-ROOT"));
Transform566.setTranslation(new float[]{-0.4121,0.006308,-0.3326});
Transform566.setRotation(new float[]{-0.999991,0.00291315,0.00291315,1.5707});
Transform566.setScale(new float[]{1.47,1.55,1.893});
OrientationInterpolator& OrientationInterpolator567 =  OrientationInterpolator();
OrientationInterpolator567.setDEF(CString("Innertube_L_butt-ROT-INTERP"));
OrientationInterpolator567.setKey(new float[]{0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1}, 11);
OrientationInterpolator567.setKeyValue(new float[]{-0.992815,-0.0846113,-0.0846113,1.578,-0.997238,-0.052522,-0.052522,1.574,-0.999752,-0.0157592,-0.0157592,1.571,-0.999644,0.0188608,0.0188608,1.571,-0.998018,0.0445008,0.0445008,1.573,-0.997025,0.0545014,0.0545014,1.574,-0.998395,0.0400498,0.0400498,1.572,-0.99997,0.00546484,0.00546484,1.571,-0.998715,-0.0358305,-0.0358305,1.572,-0.995052,-0.0702566,-0.0702566,1.576,-0.992815,-0.0846113,-0.0846113,1.578}, 44);
Transform566.addChild(&OrientationInterpolator567);

Shape& Shape568 =  Shape();
Appearance& Appearance569 =  Appearance();
Material& Material570 =  Material();
Material570.setDiffuseColor(new float[]{0.6902,0.102,0.102});
Appearance569.addChild(&Material570);

Shape568.addChild(&Appearance569);

IndexedFaceSet& IndexedFaceSet571 =  IndexedFaceSet();
IndexedFaceSet571.setDEF(CString("Innertube_L_butt-FACES"));
IndexedFaceSet571.setCreaseAngle(3);
IndexedFaceSet571.setColorIndex(new int[]{0,8,9,-1,0,9,1,-1,1,9,10,-1,1,10,2,-1,2,10,11,-1,2,11,3,-1,3,11,12,-1,3,12,4,-1,4,12,13,-1,4,13,5,-1,5,13,14,-1,5,14,6,-1,6,14,15,-1,6,15,7,-1,7,15,8,-1,7,8,0,-1,16,9,8,-1,16,10,9,-1,16,11,10,-1,16,12,11,-1,16,13,12,-1,16,14,13,-1,16,15,14,-1,16,8,15,-1}, 96);
IndexedFaceSet571.setCoordIndex(new int32_t[]{0,8,9,-1,0,9,1,-1,1,9,10,-1,1,10,2,-1,2,10,11,-1,2,11,3,-1,3,11,12,-1,3,12,4,-1,4,12,13,-1,4,13,5,-1,5,13,14,-1,5,14,6,-1,6,14,15,-1,6,15,7,-1,7,15,8,-1,7,8,0,-1,16,9,8,-1,16,10,9,-1,16,11,10,-1,16,12,11,-1,16,13,12,-1,16,14,13,-1,16,15,14,-1,16,8,15,-1}, 96);
CColor& Color572 =  CColor();
Color572.setColor(new float[]{1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0}, 51);
IndexedFaceSet571.setColor(&Color572);

Coordinate& Coordinate573 =  Coordinate();
Coordinate573.setDEF(CString("Innertube_L_butt-COORD"));
Coordinate573.setPoint(new float[]{-0.003811,0.1463,-0.4831,-0.3454,0.1463,-0.3416,-0.4869,0.1463,0,-0.3454,0.1463,0.3416,-0.003811,0.1463,0.4831,0.3378,0.1463,0.3416,0.4793,0.1463,0,0.3378,0.1463,-0.3416,0,-0.3416,-0.3416,-0.2415,-0.3416,-0.2415,-0.3416,-0.3416,0,-0.2415,-0.3416,0.2415,0,-0.3416,0.3416,0.2415,-0.3416,0.2415,0.3416,-0.3416,0,0.2415,-0.3416,-0.2415,0,-0.4831,0}, 51);
IndexedFaceSet571.setCoord(&Coordinate573);

Shape568.setGeometry(&IndexedFaceSet571);

Transform566.addChild(&Shape568);

Transform564.addChild(&Transform566);

Transform& Transform574 =  Transform();
Transform574.setDEF(CString("Innertube_R_butt-ROOT"));
Transform574.setTranslation(new float[]{0.3298,0.006308,-0.3294});
Transform574.setRotation(new float[]{-0.999996,-0.00210999,-0.00210999,1.571});
Transform574.setScale(new float[]{1.47,1.55,1.893});
Shape& Shape575 =  Shape();
Appearance& Appearance576 =  Appearance();
Material& Material577 =  Material();
Material577.setDiffuseColor(new float[]{0.6902,0.102,0.102});
Appearance576.addChild(&Material577);

Shape575.addChild(&Appearance576);

IndexedFaceSet& IndexedFaceSet578 =  IndexedFaceSet();
IndexedFaceSet578.setUSE(CString("Innertube_L_butt-FACES"));
Shape575.setGeometry(&IndexedFaceSet578);

Transform574.addChild(&Shape575);

Transform564.addChild(&Transform574);

Transform510.addChild(&Transform564);

Transform503.addChild(&Transform510);

Transform500.addChild(&Transform503);

Group496.addChild(&Transform500);

Switch495.addChild(&Group496);

Scene7.addChild(&Switch495);

ScalarInterpolator& ScalarInterpolator579 =  ScalarInterpolator();
ScalarInterpolator579.setDEF(CString("Mapper"));
ScalarInterpolator579.setKey(new float[]{0,1}, 2);
ScalarInterpolator579.setKeyValue(new float[]{0,1}, 2);
Scene7.addChild(&ScalarInterpolator579);

Script& Script580 =  Script();
Script580.setDEF(CString("TubeCollide"));
Script580.setMustEvaluate(True);
field& field581 =  field();
field581.setName(CString("finishedRunning"));
field581.setAccessType(CString("inputOnly"));
field581.setType(CString("SFBool"));
Script580.addChild(&field581);

field& field582 =  field();
field582.setName(CString("finishedRunning2"));
field582.setAccessType(CString("inputOnly"));
field582.setType(CString("SFBool"));
Script580.addChild(&field582);

field& field583 =  field();
field583.setName(CString("runAway"));
field583.setAccessType(CString("inputOnly"));
field583.setType(CString("SFTime"));
Script580.addChild(&field583);

field& field584 =  field();
field584.setName(CString("beingEaten"));
field584.setAccessType(CString("inputOnly"));
field584.setType(CString("SFBool"));
Script580.addChild(&field584);

field& field585 =  field();
field585.setName(CString("tubePosition"));
field585.setAccessType(CString("initializeOnly"));
field585.setType(CString("SFInt32"));
Script580.addChild(&field585);

field& field586 =  field();
field586.setName(CString("tubeHit"));
field586.setAccessType(CString("outputOnly"));
field586.setType(CString("SFTime"));
Script580.addChild(&field586);

field& field587 =  field();
field587.setName(CString("tubeRun"));
field587.setAccessType(CString("outputOnly"));
field587.setType(CString("SFTime"));
Script580.addChild(&field587);

field& field588 =  field();
field588.setName(CString("tubeRun2"));
field588.setAccessType(CString("outputOnly"));
field588.setType(CString("SFTime"));
Script580.addChild(&field588);

field& field589 =  field();
field589.setName(CString("enableHit"));
field589.setAccessType(CString("outputOnly"));
field589.setType(CString("SFBool"));
Script580.addChild(&field589);

field& field590 =  field();
field590.setName(CString("enableRun"));
field590.setAccessType(CString("outputOnly"));
field590.setType(CString("SFBool"));
Script580.addChild(&field590);

field& field591 =  field();
field591.setName(CString("kickFaster"));
field591.setAccessType(CString("outputOnly"));
field591.setType(CString("SFBool"));
Script580.addChild(&field591);

field& field592 =  field();
field592.setName(CString("kickSlower"));
field592.setAccessType(CString("outputOnly"));
field592.setType(CString("SFBool"));
Script580.addChild(&field592);

field& field593 =  field();
field593.setName(CString("kickStart"));
field593.setAccessType(CString("outputOnly"));
field593.setType(CString("SFTime"));
Script580.addChild(&field593);


Script580.setSourceCode(CString("javascript:")+
_T("		function beingEaten (input){")+
_T("			if (input == TRUE) {")+
_T("				enableRun = FALSE;")+
_T("				enableHit = FALSE;")+
_T("			}")+
_T("		}")+
_T("		function runAway (input, time) {")+
_T("			enableHit = FALSE;")+
_T("			kickSlower = FALSE;")+
_T("			kickFaster = TRUE;")+
_T("			//Browser.loadURL(new MFString('oops2.htm'), new MFString('target=helpertext'));")+
_T("			if (tubePosition == 0) {")+
_T("				tubeRun = time;")+
_T("			} else {")+
_T("				tubeRun2 = time;")+
_T("			}")+
_T("		}")+
_T("		function finishedRunning (input, time) {")+
_T("			if (input == FALSE) {")+
_T("				tubePosition = 1;")+
_T("				enableHit = TRUE;")+
_T("				kickFaster = FALSE;")+
_T("				kickSlower = TRUE;")+
_T("				kickStart = time;")+
_T("			}")+
_T("		}")+
_T("		function finishedRunning2 (input, time) {")+
_T("			if (input == FALSE) {")+
_T("				tubePosition = 0;")+
_T("				enableHit = TRUE;")+
_T("				kickFaster = FALSE;")+
_T("				kickSlower = TRUE;")+
_T("				kickStart = time;")+
_T("			}")+
_T("		}"));
Scene7.addChild(&Script580);

TimeSensor& TimeSensor594 =  TimeSensor();
TimeSensor594.setDEF(CString("TuberRun"));
TimeSensor594.setCycleInterval(2);
Scene7.addChild(&TimeSensor594);

TimeSensor& TimeSensor595 =  TimeSensor();
TimeSensor595.setDEF(CString("TuberRun2"));
TimeSensor595.setCycleInterval(2);
Scene7.addChild(&TimeSensor595);

PositionInterpolator& PositionInterpolator596 =  PositionInterpolator();
PositionInterpolator596.setDEF(CString("Inline_Tube01_avoid01-POS-INTERP"));
PositionInterpolator596.setKey(new float[]{0.0588,0.1176,0.1764,0.2353,0.2941,0.3529,0.4117,0.4705,0.4705,0.5882,0.647,0.7058,0.7647,0.8235,0.8823,0.9411,1}, 17);
PositionInterpolator596.setKeyValue(new float[]{-100.8,0,-451.9,-100.7,0,-452.1,-100.4,0,-452.8,-99.9,0,-453.9,-99.31,0,-455.4,-98.93,0,-457.2,-99,0,-459,-99.67,0,-460.9,-101.1,0,-462.8,-102.9,0,-464.3,-104.8,0,-465,-106.6,0,-465.1,-108.4,0,-464.8,-110,0,-464.3,-111.1,0,-463.8,-111.8,0,-463.5,-112,0,-463.4}, 51);
Scene7.addChild(&PositionInterpolator596);

OrientationInterpolator& OrientationInterpolator597 =  OrientationInterpolator();
OrientationInterpolator597.setDEF(CString("Inline_Tube01_avoid01-ROT-INTERP"));
OrientationInterpolator597.setKey(new float[]{0.0588,0.1176,0.1764,0.2353,0.2941,0.3529,0.4117,0.4705,0.4705,0.5882,0.647,0.7058,0.7647,0.8235,0.8823,0.9411,1}, 17);
OrientationInterpolator597.setKeyValue(new float[]{0,-1,0,3.944,0,-1,0,3.92,0,-1,0,3.845,0,-1,0,3.72,0,-1,0,3.546,0,-1,0,3.322,0,-1,0,3.048,0,-1,0,2.725,0,-1,0,2.351,0,-1,0,1.978,0,-1,0,1.654,0,-1,0,1.381,0,-1,0,1.157,0,-1,0,0.9823,0,-1,0,0.8578,0,-1,0,0.7831,0,-1,0,0.7582}, 68);
Scene7.addChild(&OrientationInterpolator597);

PositionInterpolator& PositionInterpolator598 =  PositionInterpolator();
PositionInterpolator598.setDEF(CString("Inline_Tube01_avoid02-POS-INTERP"));
PositionInterpolator598.setKey(new float[]{0,0.0588,0.1176,0.1764,0.2353,0.2941,0.3529,0.4117,0.4705,0.4705,0.5882,0.647,0.7058,0.7647,0.8235,0.8823,0.9411,1}, 18);
PositionInterpolator598.setKeyValue(new float[]{-112,0,-463.4,-112,0,-463.4,-112.1,0,-463.2,-112.5,0,-462.6,-113.1,0,-461.5,-113.8,0,-460,-114.3,0,-458.3,-114.3,0,-456.5,-113.7,0,-454.7,-112.3,0,-452.8,-110.4,0,-451.3,-108.5,0,-450.5,-106.6,0,-450.4,-104.7,0,-450.6,-103,0,-451.1,-101.8,0,-451.5,-101.1,0,-451.8,-100.8,0,-451.9}, 54);
Scene7.addChild(&PositionInterpolator598);

OrientationInterpolator& OrientationInterpolator599 =  OrientationInterpolator();
OrientationInterpolator599.setDEF(CString("Inline_Tube01_avoid02-ROT-INTERP"));
OrientationInterpolator599.setKey(new float[]{0,0.0588,0.1176,0.1764,0.2353,0.2941,0.3529,0.4117,0.4705,0.4705,0.5882,0.647,0.7058,0.7647,0.8235,0.8823,0.9411,1}, 18);
OrientationInterpolator599.setKeyValue(new float[]{0,-1,0,0.7582,0,-1,0,0.7582,0,-1,0,0.7341,0,-1,0,0.6615,0,-1,0,0.5405,0,-1,0,0.3711,0,-1,0,0.1534,0,1,0,0.112801,0,1,0,0.4273,0,1,0,0.7902,0,1,0,1.153,0,1,0,1.468,0,1,0,1.734,0,1,0,1.952,0,-1,0,4.162,0,-1,0,4.041,0,-1,0,3.969,0,-1,0,3.944}, 72);
Scene7.addChild(&OrientationInterpolator599);

VisibilitySensor& VisibilitySensor600 =  VisibilitySensor();
VisibilitySensor600.setDEF(CString("SeeEnd"));
VisibilitySensor600.setSize(new float[]{1,1,1});
VisibilitySensor600.setCenter(new float[]{7,0,-650});
Scene7.addChild(&VisibilitySensor600);

TimeSensor& TimeSensor601 =  TimeSensor();
TimeSensor601.setDEF(CString("Tuber2Run"));
TimeSensor601.setCycleInterval(2);
Scene7.addChild(&TimeSensor601);

TimeSensor& TimeSensor602 =  TimeSensor();
TimeSensor602.setDEF(CString("Tuber2Run2"));
TimeSensor602.setCycleInterval(2);
Scene7.addChild(&TimeSensor602);

Switch& Switch603 =  Switch();
Switch603.setDEF(CString("Tuber2"));
Switch603.setWhichChoice(0);
Group& Group604 =  Group();
Transform& Transform605 =  Transform();
Transform605.setDEF(CString("Tuber2CollisionMover"));
Transform605.setTranslation(new float[]{6.848,0,-554.5});
Transform& Transform606 =  Transform();
Transform606.setDEF(CString("Tuber2CollisionSpinner"));
Transform606.setRotation(new float[]{1,0,0,0.0134964});
ProximitySensor& ProximitySensor607 =  ProximitySensor();
ProximitySensor607.setDEF(CString("EatTuber2"));
ProximitySensor607.setSize(new float[]{6,6,4});
ProximitySensor607.setCenter(new float[]{0,0,4});
Transform606.addChild(&ProximitySensor607);

Transform605.addChild(&Transform606);

Group604.addChild(&Transform605);

Transform& Transform608 =  Transform();
Transform608.setDEF(CString("Inline_Tube02-ROOT"));
Transform608.setTranslation(new float[]{6.848,0,-554.5});
Transform608.setRotation(new float[]{0,-1,0,3.944});
ProximitySensor& ProximitySensor609 =  ProximitySensor();
ProximitySensor609.setDEF(CString("ScareTuber2"));
ProximitySensor609.setSize(new float[]{15,5,17});
Transform608.addChild(&ProximitySensor609);

VisibilitySensor& VisibilitySensor610 =  VisibilitySensor();
VisibilitySensor610.setDEF(CString("tuber2Visible"));
VisibilitySensor610.setSize(new float[]{1,1,1});
Transform608.addChild(&VisibilitySensor610);

Transform& Transform611 =  Transform();
Transform& Transform612 =  Transform();
Transform612.setUSE(CString("Innertube_boolean-ROOT"));
Transform611.addChild(&Transform612);

Transform608.addChild(&Transform611);

Group604.addChild(&Transform608);

Switch603.addChild(&Group604);

Scene7.addChild(&Switch603);

Script& Script613 =  Script();
Script613.setDEF(CString("TubeCollide2"));
Script613.setMustEvaluate(True);
field& field614 =  field();
field614.setName(CString("finishedRunning"));
field614.setAccessType(CString("inputOnly"));
field614.setType(CString("SFBool"));
Script613.addChild(&field614);

field& field615 =  field();
field615.setName(CString("finishedRunning2"));
field615.setAccessType(CString("inputOnly"));
field615.setType(CString("SFBool"));
Script613.addChild(&field615);

field& field616 =  field();
field616.setName(CString("runAway"));
field616.setAccessType(CString("inputOnly"));
field616.setType(CString("SFTime"));
Script613.addChild(&field616);

field& field617 =  field();
field617.setName(CString("beingEaten"));
field617.setAccessType(CString("inputOnly"));
field617.setType(CString("SFBool"));
Script613.addChild(&field617);

field& field618 =  field();
field618.setName(CString("tubePosition"));
field618.setAccessType(CString("initializeOnly"));
field618.setType(CString("SFInt32"));
Script613.addChild(&field618);

field& field619 =  field();
field619.setName(CString("tubeHit"));
field619.setAccessType(CString("outputOnly"));
field619.setType(CString("SFTime"));
Script613.addChild(&field619);

field& field620 =  field();
field620.setName(CString("tubeRun"));
field620.setAccessType(CString("outputOnly"));
field620.setType(CString("SFTime"));
Script613.addChild(&field620);

field& field621 =  field();
field621.setName(CString("tubeRun2"));
field621.setAccessType(CString("outputOnly"));
field621.setType(CString("SFTime"));
Script613.addChild(&field621);

field& field622 =  field();
field622.setName(CString("enableHit"));
field622.setAccessType(CString("outputOnly"));
field622.setType(CString("SFBool"));
Script613.addChild(&field622);

field& field623 =  field();
field623.setName(CString("enableRun"));
field623.setAccessType(CString("outputOnly"));
field623.setType(CString("SFBool"));
Script613.addChild(&field623);

field& field624 =  field();
field624.setName(CString("kickFaster"));
field624.setAccessType(CString("outputOnly"));
field624.setType(CString("SFBool"));
Script613.addChild(&field624);

field& field625 =  field();
field625.setName(CString("kickSlower"));
field625.setAccessType(CString("outputOnly"));
field625.setType(CString("SFBool"));
Script613.addChild(&field625);

field& field626 =  field();
field626.setName(CString("kickStart"));
field626.setAccessType(CString("outputOnly"));
field626.setType(CString("SFTime"));
Script613.addChild(&field626);


Script613.setSourceCode(CString("javascript:")+
_T("		function beingEaten (input){")+
_T("			if (input == TRUE) {")+
_T("				enableRun = FALSE;")+
_T("				enableHit = FALSE;")+
_T("			}")+
_T("		}")+
_T("		function runAway (input, time) {")+
_T("			enableHit = FALSE;")+
_T("			kickSlower = FALSE;")+
_T("			kickFaster = TRUE;")+
_T("			//Browser.loadURL(new MFString('oops2.htm'), new MFString('target=helpertext'));")+
_T("			if (tubePosition == 0) {")+
_T("				tubeRun = time;")+
_T("			} else {")+
_T("				tubeRun2 = time;")+
_T("			}")+
_T("		}")+
_T("		function finishedRunning (input, time) {")+
_T("			if (input == FALSE) {")+
_T("				tubePosition = 1;")+
_T("				enableHit = TRUE;")+
_T("				kickFaster = FALSE;")+
_T("				kickSlower = TRUE;")+
_T("				kickStart = time;")+
_T("			}")+
_T("		}")+
_T("		function finishedRunning2 (input, time) {")+
_T("			if (input == FALSE) {")+
_T("				tubePosition = 0;")+
_T("				enableHit = TRUE;")+
_T("				kickFaster = FALSE;")+
_T("				kickSlower = TRUE;")+
_T("				kickStart = time;")+
_T("			}")+
_T("		}"));
Scene7.addChild(&Script613);

PositionInterpolator& PositionInterpolator627 =  PositionInterpolator();
PositionInterpolator627.setDEF(CString("Inline_Tube02_avoid01-POS-INTERP"));
PositionInterpolator627.setKey(new float[]{0.0588,0.1176,0.1764,0.2353,0.2941,0.3529,0.4117,0.4705,0.4705,0.5882,0.647,0.7058,0.7647,0.8235,0.8823,0.9411,1}, 17);
PositionInterpolator627.setKeyValue(new float[]{6.848,0,-554.5,6.955,0,-554.7,7.276,0,-555.4,7.783,0,-556.5,8.374,0,-558,8.759,0,-559.8,8.69,0,-561.6,8.017,0,-563.5,6.588,0,-565.4,4.741,0,-566.9,2.912,0,-567.6,1.097,0,-567.8,-0.7067,0,-567.4,-2.279,0,-566.9,-3.4,0,-566.4,-4.072,0,-566.1,-4.296,0,-566}, 51);
Scene7.addChild(&PositionInterpolator627);

OrientationInterpolator& OrientationInterpolator628 =  OrientationInterpolator();
OrientationInterpolator628.setDEF(CString("Inline_Tube02_avoid01-ROT-INTERP"));
OrientationInterpolator628.setKey(new float[]{0.0588,0.1176,0.1764,0.2353,0.2941,0.3529,0.4117,0.4705,0.4705,0.5882,0.647,0.7058,0.7647,0.8235,0.8823,0.9411,1}, 17);
OrientationInterpolator628.setKeyValue(new float[]{0,-1,0,3.944,0,-1,0,3.92,0,-1,0,3.845,0,-1,0,3.72,0,-1,0,3.546,0,-1,0,3.322,0,-1,0,3.048,0,-1,0,2.725,0,-1,0,2.351,0,-1,0,1.978,0,-1,0,1.654,0,-1,0,1.381,0,-1,0,1.157,0,-1,0,0.9823,0,-1,0,0.8578,0,-1,0,0.7831,0,-1,0,0.7582}, 68);
Scene7.addChild(&OrientationInterpolator628);

PositionInterpolator& PositionInterpolator629 =  PositionInterpolator();
PositionInterpolator629.setDEF(CString("Inline_Tube02_avoid02-POS-INTERP"));
PositionInterpolator629.setKey(new float[]{0,0.0588,0.1176,0.1764,0.2353,0.2941,0.3529,0.4117,0.4705,0.4705,0.5882,0.647,0.7058,0.7647,0.8235,0.8823,0.9411,1}, 18);
PositionInterpolator629.setKeyValue(new float[]{-4.296,0,-566,-4.296,0,-566,-4.423,0,-565.8,-4.798,0,-565.2,-5.394,0,-564.1,-6.103,0,-562.6,-6.608,0,-560.9,-6.635,0,-559.1,-6.026,0,-557.3,-4.62,0,-555.4,-2.75,0,-553.9,-0.857,0,-553.2,1.053,0,-553,2.977,0,-553.2,4.668,0,-553.7,5.879,0,-554.1,6.605,0,-554.4,6.848,0,-554.5}, 54);
Scene7.addChild(&PositionInterpolator629);

OrientationInterpolator& OrientationInterpolator630 =  OrientationInterpolator();
OrientationInterpolator630.setDEF(CString("Inline_Tube02_avoid02-ROT-INTERP"));
OrientationInterpolator630.setKey(new float[]{0,0.0588,0.1176,0.1764,0.2353,0.2941,0.3529,0.4117,0.4705,0.4705,0.5882,0.647,0.7058,0.7647,0.8235,0.8823,0.9411,1}, 18);
OrientationInterpolator630.setKeyValue(new float[]{0,-1,0,0.7582,0,-1,0,0.7582,0,-1,0,0.7341,0,-1,0,0.6615,0,-1,0,0.5405,0,-1,0,0.3711,0,-1,0,0.1534,0,1,0,0.112801,0,1,0,0.4273,0,1,0,0.7902,0,1,0,1.153,0,1,0,1.468,0,1,0,1.734,0,1,0,1.952,0,-1,0,4.162,0,-1,0,4.041,0,-1,0,3.969,0,-1,0,3.944}, 72);
Scene7.addChild(&OrientationInterpolator630);

TimeSensor& TimeSensor631 =  TimeSensor();
TimeSensor631.setDEF(CString("frameRateTimer"));
TimeSensor631.setCycleInterval(3);
TimeSensor631.setLoop(True);
TimeSensor631.setStartTime(1);
Scene7.addChild(&TimeSensor631);

TimeSensor& TimeSensor632 =  TimeSensor();
TimeSensor632.setDEF(CString("TimeSensor01-TIMER"));
TimeSensor632.setCycleInterval(1.6);
TimeSensor632.setLoop(True);
TimeSensor632.setStartTime(1);
Scene7.addChild(&TimeSensor632);

Script& Script633 =  Script();
Script633.setDEF(CString("TimeSensor01-SCRIPT"));
field& field634 =  field();
field634.setName(CString("fractionIn"));
field634.setAccessType(CString("inputOnly"));
field634.setType(CString("SFFloat"));
Script633.addChild(&field634);

field& field635 =  field();
field635.setName(CString("fractionOut"));
field635.setAccessType(CString("outputOnly"));
field635.setType(CString("SFFloat"));
Script633.addChild(&field635);


Script633.setSourceCode(CString("javascript:")+
_T("    function fractionIn(i) {")+
_T("    fractionOut = 0.48 * i;")+
_T("  }"));
Scene7.addChild(&Script633);

TimeSensor& TimeSensor636 =  TimeSensor();
TimeSensor636.setDEF(CString("TimeSensor02-TIMER"));
TimeSensor636.setCycleInterval(3.333);
TimeSensor636.setLoop(True);
TimeSensor636.setStartTime(1);
Scene7.addChild(&TimeSensor636);

Transform& Transform637 =  Transform();
Transform637.setDEF(CString("SharkHead"));
Transform637.setTranslation(new float[]{0,-3.143,5.7195});
Transform637.setRotation(new float[]{1,0,0,0.0134964});
Collision& Collision638 =  Collision();
Collision638.setEnabled(False);
Group& Group639 =  Group();
Transform& Transform640 =  Transform();
Transform640.setDEF(CString("Shark-ROOT"));
Transform640.setTranslation(new float[]{-0.01057,-0.2844,-1.188});
Transform640.setRotation(new float[]{-0.998454,-0.0414381,0.0370383,4.165});
Transform640.setScale(new float[]{0.001994,0.001994,0.001994});
Transform640.setScaleOrientation(new float[]{0.0561707,-0.194402,-0.979312,0.8002});
TimeSensor& TimeSensor641 =  TimeSensor();
TimeSensor641.setDEF(CString("Shark-TIMER"));
TimeSensor641.setCycleInterval(3.333);
Transform640.addChild(&TimeSensor641);

PositionInterpolator& PositionInterpolator642 =  PositionInterpolator();
PositionInterpolator642.setDEF(CString("Shark-POS-INTERP"));
PositionInterpolator642.setKey(new float[]{0,0.02,0.04,0.06,0.08,0.1,0.12,0.14,0.16,0.18,0.2,0.22,0.24,0.26,0.28,0.3,0.32,0.34,0.36,0.38,0.4,0.42,0.44,0.46,0.48,0.5,0.52,0.54,0.56,0.58,0.6,0.62,0.64,0.66,0.68,0.7,0.72,0.74,0.76,0.78,0.8,0.82,0.84,0.86,0.88,0.9,0.92,0.94,0.96,0.98,1}, 51);
PositionInterpolator642.setKeyValue(new float[]{-0.01057,-0.2844,-1.188,-0.03506,-0.2843,-1.188,-0.05755,-0.2843,-1.188,-0.07656,-0.2843,-1.188,-0.09057,-0.2842,-1.188,-0.09815,-0.2842,-1.188,-0.09812,-0.2842,-1.188,-0.09068,-0.2842,-1.188,-0.07758,-0.2843,-1.188,-0.05998,-0.2843,-1.188,-0.03892,-0.2843,-1.188,-0.01543,-0.2843,-1.188,0.009348,-0.2843,-1.188,0.0341,-0.2843,-1.188,0.05732,-0.2843,-1.188,0.07724,-0.2843,-1.188,0.09202,-0.2842,-1.188,0.09988,-0.2842,-1.188,0.09939,-0.2842,-1.188,0.09103,-0.2842,-1.188,0.07713,-0.2843,-1.188,0.05904,-0.2843,-1.188,0.03776,-0.2843,-1.188,0.01421,-0.2844,-1.188,-0.01057,-0.2844,-1.188,-0.03506,-0.2843,-1.188,-0.05755,-0.2843,-1.188,-0.07656,-0.2843,-1.188,-0.09057,-0.2842,-1.188,-0.09815,-0.2842,-1.188,-0.09812,-0.2842,-1.188,-0.09068,-0.2842,-1.188,-0.07758,-0.2843,-1.188,-0.05998,-0.2843,-1.188,-0.03892,-0.2843,-1.188,-0.01543,-0.2843,-1.188,0.009348,-0.2843,-1.188,0.0341,-0.2843,-1.188,0.05732,-0.2843,-1.188,0.07724,-0.2843,-1.188,0.09202,-0.2842,-1.188,0.09988,-0.2842,-1.188,0.09939,-0.2842,-1.188,0.09103,-0.2842,-1.188,0.07713,-0.2843,-1.188,0.05904,-0.2843,-1.188,0.03776,-0.2843,-1.188,0.01421,-0.2844,-1.188,-0.01057,-0.2844,-1.188,-0.03506,-0.2843,-1.188,-0.05755,-0.2843,-1.188}, 153);
Transform640.addChild(&PositionInterpolator642);

OrientationInterpolator& OrientationInterpolator643 =  OrientationInterpolator();
OrientationInterpolator643.setDEF(CString("Shark-ROT-INTERP"));
OrientationInterpolator643.setKey(new float[]{0,0.02,0.04,0.06,0.08,0.1,0.12,0.14,0.16,0.18,0.2,0.22,0.24,0.26,0.28,0.3,0.32,0.34,0.36,0.38,0.4,0.42,0.44,0.46,0.48,0.5,0.52,0.54,0.56,0.58,0.6,0.62,0.64,0.66,0.68,0.7,0.72,0.74,0.76,0.78,0.8,0.82,0.84,0.86,0.88,0.9,0.92,0.94,0.96,0.98,1}, 51);
OrientationInterpolator643.setKeyValue(new float[]{-0.998454,-0.0414381,0.0370383,4.165,-0.998536,-0.0403614,0.0360213,4.165,-0.998779,-0.0369492,0.0327793,4.166,-0.999163,-0.0307989,0.026919,4.166,-0.999608,-0.0214202,0.0180201,4.166,-0.999944,-0.00871439,0.00593626,4.167,-0.999941,0.00659827,-0.00861635,4.167,-0.999568,0.0201093,-0.0214593,4.166,-0.99915,0.0286786,-0.0295985,4.166,-0.998876,0.0331692,-0.0338692,4.166,-0.998756,0.0349584,-0.0355684,4.166,-0.998726,0.0353909,-0.0359809,4.166,-0.998724,0.0354208,-0.0360108,4.166,-0.998727,0.0353809,-0.035961,4.166,-0.998771,0.034739,-0.035349,4.166,-0.998943,0.0321214,-0.0328714,4.166,-0.99931,0.0257303,-0.0267903,4.166,-0.999778,0.0140597,-0.0157096,4.166,-0.999995,-0.00301499,0.000521898,4.167,-0.999658,-0.0200892,0.0167493,4.166,-0.999108,-0.0317503,0.0278402,4.166,-0.998697,-0.0381399,0.0339099,4.165,-0.998506,-0.0407602,0.0363902,4.165,-0.998457,-0.0413982,0.0369984,4.165,-0.998454,-0.0414381,0.0370383,4.165,-0.998536,-0.0403614,0.0360213,4.165,-0.998779,-0.0369492,0.0327793,4.166,-0.999163,-0.0307989,0.026919,4.166,-0.999608,-0.0214202,0.0180201,4.166,-0.999944,-0.00871439,0.00593626,4.167,-0.999941,0.00659827,-0.00861635,4.167,-0.999568,0.0201093,-0.0214593,4.166,-0.99915,0.0286786,-0.0295985,4.166,-0.998876,0.0331692,-0.0338692,4.166,-0.998756,0.0349584,-0.0355684,4.166,-0.998726,0.0353909,-0.0359809,4.166,-0.998724,0.0354208,-0.0360108,4.166,-0.998727,0.0353809,-0.035961,4.166,-0.998771,0.034739,-0.035349,4.166,-0.998943,0.0321214,-0.0328714,4.166,-0.99931,0.0257303,-0.0267903,4.166,-0.999778,0.0140597,-0.0157096,4.166,-0.999995,-0.00301499,0.000521898,4.167,-0.999658,-0.0200892,0.0167493,4.166,-0.999108,-0.0317503,0.0278402,4.166,-0.998697,-0.0381399,0.0339099,4.165,-0.998506,-0.0407602,0.0363902,4.165,-0.998457,-0.0413982,0.0369984,4.165,-0.998454,-0.0414381,0.0370383,4.165,-0.998536,-0.0403614,0.0360213,4.165,-0.998779,-0.0369492,0.0327793,4.166}, 204);
Transform640.addChild(&OrientationInterpolator643);

Shape& Shape644 =  Shape();
Appearance& Appearance645 =  Appearance();
Material& Material646 =  Material();
Material646.setDiffuseColor(new float[]{0.2353,0.2353,0.2353});
Material646.setShininess(0.25);
Appearance645.addChild(&Material646);

Shape644.addChild(&Appearance645);

IndexedFaceSet& IndexedFaceSet647 =  IndexedFaceSet();
IndexedFaceSet647.setDEF(CString("Shark-FACES"));
IndexedFaceSet647.setCreaseAngle(3);
IndexedFaceSet647.setColorIndex(new int[]{0,2,1,-1,0,3,2,-1,0,4,3,-1,1,6,5,-1,1,2,6,-1,2,7,6,-1,2,3,7,-1,3,8,7,-1,3,4,8,-1,5,10,9,-1,5,6,10,-1,6,11,10,-1,6,7,11,-1,7,12,11,-1,7,8,12,-1}, 60);
IndexedFaceSet647.setCoordIndex(new int32_t[]{0,2,1,-1,0,3,2,-1,0,4,3,-1,1,6,5,-1,1,2,6,-1,2,7,6,-1,2,3,7,-1,3,8,7,-1,3,4,8,-1,5,10,9,-1,5,6,10,-1,6,11,10,-1,6,7,11,-1,7,12,11,-1,7,8,12,-1}, 60);
CColor& Color648 =  CColor();
Color648.setColor(new float[]{0.5333,0.5333,0.5333,0.5333,0.5333,0.5333,0.2353,0.2353,0.2353,0.2353,0.2353,0.2353,0.5333,0.5333,0.5333,0.5333,0.5333,0.5333,0.2353,0.2353,0.2353,0.2353,0.2353,0.2353,0.5333,0.5333,0.5333,0.5333,0.5333,0.5333,0.2353,0.2353,0.2353,0.2353,0.2353,0.2353,0.5333,0.5333,0.5333}, 39);
IndexedFaceSet647.setColor(&Color648);

Coordinate& Coordinate649 =  Coordinate();
Coordinate649.setDEF(CString("Shark-COORD"));
Coordinate649.setPoint(new float[]{0,-89.63,0,38.19,-45.09,-0.4825,15.62,-19.32,-23.37,-16.02,-19.32,-23.37,-37.67,-45.09,-0.4825,59.07,11.28,0,29.53,18.3,-33.92,-29.54,18.3,-33.92,-59.07,11.28,0,75.19,183.2,0.2692,34.67,186.3,-38.64,-35.03,186.3,-38.64,-75.37,183.2,0.2692}, 39);
IndexedFaceSet647.setCoord(&Coordinate649);

Shape644.setGeometry(&IndexedFaceSet647);

Transform640.addChild(&Shape644);

Transform& Transform650 =  Transform();
Transform650.setDEF(CString("Shark_Eyeball_R-ROOT"));
Transform650.setTranslation(new float[]{55.09,1.822,-6.84});
Transform650.setRotation(new float[]{-0.682571,0.661772,-0.310087,2.578});
Transform650.setScale(new float[]{1.042,1.042,1.042});
Transform650.setScaleOrientation(new float[]{0.225199,0.944898,0.237599,0.6613});
Shape& Shape651 =  Shape();
Appearance& Appearance652 =  Appearance();
Material& Material653 =  Material();
Material653.setDiffuseColor(new float[]{1,1,1});
Appearance652.addChild(&Material653);

Shape651.addChild(&Appearance652);

IndexedFaceSet& IndexedFaceSet654 =  IndexedFaceSet();
IndexedFaceSet654.setDEF(CString("Shark_Eyeball_R-FACES"));
IndexedFaceSet654.setCreaseAngle(3);
IndexedFaceSet654.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,1,-1,1,9,10,-1,1,10,2,-1,2,10,11,-1,2,11,3,-1,3,11,12,-1,3,12,4,-1,4,12,13,-1,4,13,5,-1,5,13,14,-1,5,14,6,-1,6,14,15,-1,6,15,7,-1,7,15,16,-1,7,16,8,-1,8,16,9,-1,8,9,1,-1,9,17,18,-1,9,18,10,-1,10,18,19,-1,10,19,11,-1,11,19,20,-1,11,20,12,-1,12,20,21,-1,12,21,13,-1,13,21,22,-1,13,22,14,-1,14,22,23,-1,14,23,15,-1,15,23,24,-1,15,24,16,-1,16,24,17,-1,16,17,9,-1,25,18,17,-1,25,19,18,-1,25,20,19,-1,25,21,20,-1,25,22,21,-1,25,23,22,-1,25,24,23,-1,25,17,24,-1}, 192);
Coordinate& Coordinate655 =  Coordinate();
Coordinate655.setDEF(CString("Shark_Eyeball_R-COORD"));
Coordinate655.setPoint(new float[]{0,8.453,0,5.977,5.977,0,4.226,5.977,-4.226,0,5.977,-5.977,-4.226,5.977,-4.226,-5.977,5.977,0,-4.226,5.977,4.226,0,5.977,5.977,4.226,5.977,4.226,8.453,0,0,5.977,0,-5.977,0,0,-8.453,-5.977,0,-5.977,-8.453,0,0,-5.977,0,5.977,0,0,8.453,5.977,0,5.977,5.977,-5.977,0,4.226,-5.977,-4.226,0,-5.977,-5.977,-4.226,-5.977,-4.226,-5.977,-5.977,0,-4.226,-5.977,4.226,0,-5.977,5.977,4.226,-5.977,4.226,0,-8.453,0}, 78);
IndexedFaceSet654.setCoord(&Coordinate655);

Shape651.setGeometry(&IndexedFaceSet654);

Transform650.addChild(&Shape651);

Transform& Transform656 =  Transform();
Transform656.setDEF(CString("Shark_Pupil_R-ROOT"));
Transform656.setTranslation(new float[]{0.00001311,0,8.714});
Transform656.setScaleOrientation(new float[]{-0.6563,0,-0.7545,0.2488});
TouchSensor& TouchSensor657 =  TouchSensor();
TouchSensor657.setDEF(CString("eyeClick"));
Transform656.addChild(&TouchSensor657);

Shape& Shape658 =  Shape();
Appearance& Appearance659 =  Appearance();
Material& Material660 =  Material();
Material660.setDiffuseColor(new float[]{0.102,0.102,0.102});
Material660.setShininess(0.25);
Appearance659.addChild(&Material660);

Shape658.addChild(&Appearance659);

IndexedFaceSet& IndexedFaceSet661 =  IndexedFaceSet();
IndexedFaceSet661.setDEF(CString("Shark_Pupil_R-FACES"));
IndexedFaceSet661.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,1,-1,1,7,8,-1,1,8,2,-1,2,8,9,-1,2,9,3,-1,3,9,10,-1,3,10,4,-1,4,10,11,-1,4,11,5,-1,5,11,12,-1,5,12,6,-1,6,12,7,-1,6,7,1,-1,13,8,7,-1,13,9,8,-1,13,10,9,-1,13,11,10,-1,13,12,11,-1,13,7,12,-1}, 96);
Coordinate& Coordinate662 =  Coordinate();
Coordinate662.setDEF(CString("Shark_Pupil_R-COORD"));
Coordinate662.setPoint(new float[]{0,2.536,0,2.196,1.268,0,1.098,1.268,-1.902,-1.098,1.268,-1.902,-2.196,1.268,0,-1.098,1.268,1.902,1.098,1.268,1.902,2.196,-1.268,0,1.098,-1.268,-1.902,-1.098,-1.268,-1.902,-2.196,-1.268,0,-1.098,-1.268,1.902,1.098,-1.268,1.902,0,-2.536,0}, 42);
IndexedFaceSet661.setCoord(&Coordinate662);

Shape658.setGeometry(&IndexedFaceSet661);

Transform656.addChild(&Shape658);

Transform650.addChild(&Transform656);

Transform640.addChild(&Transform650);

Transform& Transform663 =  Transform();
Transform663.setDEF(CString("Shark_Eyeball_L-ROOT"));
Transform663.setTranslation(new float[]{-54.37,2.848,-8.257});
Transform663.setRotation(new float[]{-0.374592,0.400391,-0.836282,1.719});
Transform663.setScale(new float[]{1.048,1.048,1.048});
Transform663.setScaleOrientation(new float[]{-0.756681,-0.653784,0,0.5694});
Shape& Shape664 =  Shape();
Appearance& Appearance665 =  Appearance();
Material& Material666 =  Material();
Material666.setDiffuseColor(new float[]{1,1,1});
Appearance665.addChild(&Material666);

Shape664.addChild(&Appearance665);

IndexedFaceSet& IndexedFaceSet667 =  IndexedFaceSet();
IndexedFaceSet667.setUSE(CString("Shark_Eyeball_R-FACES"));
Shape664.setGeometry(&IndexedFaceSet667);

Transform663.addChild(&Shape664);

Transform& Transform668 =  Transform();
Transform668.setDEF(CString("Shark_Pupil_L-ROOT"));
Transform668.setTranslation(new float[]{0,0,-9.028});
Transform668.setScaleOrientation(new float[]{0,-0.415701,0.909501,0.2019});
TouchSensor& TouchSensor669 =  TouchSensor();
TouchSensor669.setDEF(CString("eyeClick2"));
Transform668.addChild(&TouchSensor669);

Shape& Shape670 =  Shape();
Appearance& Appearance671 =  Appearance();
Material& Material672 =  Material();
Material672.setDiffuseColor(new float[]{0.102,0.102,0.102});
Material672.setShininess(0.25);
Appearance671.addChild(&Material672);

Shape670.addChild(&Appearance671);

IndexedFaceSet& IndexedFaceSet673 =  IndexedFaceSet();
IndexedFaceSet673.setUSE(CString("Shark_Pupil_R-FACES"));
Shape670.setGeometry(&IndexedFaceSet673);

Transform668.addChild(&Shape670);

Transform663.addChild(&Transform668);

Transform640.addChild(&Transform663);

Transform& Transform674 =  Transform();
Transform674.setDEF(CString("Shark_Gill_L01-ROOT"));
Transform674.setTranslation(new float[]{-49.99,54.17,-2.679});
Transform674.setRotation(new float[]{0.645888,-0.686787,0.333394,3.713});
Transform674.setScale(new float[]{21.15,23.8704,21.15});
Transform674.setScaleOrientation(new float[]{0.770007,-0.632706,-0.0823007,0.2026});
PositionInterpolator& PositionInterpolator675 =  PositionInterpolator();
PositionInterpolator675.setDEF(CString("Shark_Gill_L01-SCALE-INTERP"));
PositionInterpolator675.setKey(new float[]{0,0.02,0.04,0.06,0.08,0.1,0.12,0.14,0.16,0.18,0.2,0.22,0.24,0.26,0.28,0.3,0.32,0.34,0.36,0.38,0.4,0.42,0.44,0.46,0.48,0.5,0.52,0.54,0.56,0.58,0.6,0.62,0.64,0.66,0.68,0.7,0.72,0.74,0.76,0.78,0.8,0.82,0.84,0.86,0.88,0.9,0.92,0.94,0.96,0.98,1}, 51);
PositionInterpolator675.setKeyValue(new float[]{21.15,40.57,21.15,21.15,37.34,21.15,21.15,34.1,21.15,21.15,30.86,21.15,21.15,27.63,21.15,21.15,24.39,21.15,21.15,21.15,21.15,21.15,24.39,21.15,21.15,27.63,21.15,21.15,30.86,21.15,21.15,34.1,21.15,21.15,37.34,21.15,21.15,40.57,21.15,21.15,43.81,21.15,21.15,47.05,21.15,21.15,50.29,21.15,21.15,53.53,21.15,21.15,56.76,21.15,21.15,60,21.15,21.15,56.76,21.15,21.15,53.53,21.15,21.15,50.29,21.15,21.15,47.05,21.15,21.15,43.81,21.15,21.15,40.57,21.15,21.15,37.34,21.15,21.15,34.1,21.15,21.15,30.86,21.15,21.15,27.63,21.15,21.15,24.39,21.15,21.15,21.15,21.15,21.15,24.39,21.15,21.15,27.63,21.15,21.15,30.86,21.15,21.15,34.1,21.15,21.15,37.34,21.15,21.15,40.57,21.15,21.15,43.81,21.15,21.15,47.05,21.15,21.15,50.29,21.15,21.15,53.53,21.15,21.15,56.76,21.15,21.15,60,21.15,21.15,56.76,21.15,21.15,53.53,21.15,21.15,50.29,21.15,21.15,47.05,21.15,21.15,43.81,21.15,21.15,40.57,21.15,21.15,37.34,21.15,21.15,34.1,21.15}, 153);
Transform674.addChild(&PositionInterpolator675);

Transform& Transform676 =  Transform();
Transform676.setTranslation(new float[]{0,0.1148,0});
Shape& Shape677 =  Shape();
Appearance& Appearance678 =  Appearance();
Material& Material679 =  Material();
Material679.setDiffuseColor(new float[]{0.102,0.102,0.102});
Material679.setShininess(0.25);
Appearance678.addChild(&Material679);

Shape677.addChild(&Appearance678);

Box& Box680 =  Box();
Box680.setSize(new float[]{0.2295,0.2295,1.071});
Shape677.setGeometry(&Box680);

Transform676.addChild(&Shape677);

Transform674.addChild(&Transform676);

Transform640.addChild(&Transform674);

Transform& Transform681 =  Transform();
Transform681.setDEF(CString("Shark_Gill_L03-ROOT"));
Transform681.setTranslation(new float[]{-51.44,81.59,-3.382});
Transform681.setRotation(new float[]{0.645888,-0.686787,0.333394,3.713});
Transform681.setScale(new float[]{21.15,23.8704,21.15});
Transform681.setScaleOrientation(new float[]{0.770007,-0.632706,-0.0823007,0.2026});
PositionInterpolator& PositionInterpolator682 =  PositionInterpolator();
PositionInterpolator682.setDEF(CString("Shark_Gill_L03-SCALE-INTERP"));
PositionInterpolator682.setKey(new float[]{0,0.02,0.04,0.06,0.08,0.1,0.12,0.14,0.16,0.18,0.2,0.22,0.24,0.26,0.28,0.3,0.32,0.34,0.36,0.38,0.4,0.42,0.44,0.46,0.48,0.5,0.52,0.54,0.56,0.58,0.6,0.62,0.64,0.66,0.68,0.7,0.72,0.74,0.76,0.78,0.8,0.82,0.84,0.86,0.88,0.9,0.92,0.94,0.96,0.98,1}, 51);
PositionInterpolator682.setKeyValue(new float[]{21.15,40.57,21.15,21.15,37.34,21.15,21.15,34.1,21.15,21.15,30.86,21.15,21.15,27.63,21.15,21.15,24.39,21.15,21.15,21.15,21.15,21.15,24.39,21.15,21.15,27.63,21.15,21.15,30.86,21.15,21.15,34.1,21.15,21.15,37.34,21.15,21.15,40.57,21.15,21.15,43.81,21.15,21.15,47.05,21.15,21.15,50.29,21.15,21.15,53.53,21.15,21.15,56.76,21.15,21.15,60,21.15,21.15,56.76,21.15,21.15,53.53,21.15,21.15,50.29,21.15,21.15,47.05,21.15,21.15,43.81,21.15,21.15,40.57,21.15,21.15,37.34,21.15,21.15,34.1,21.15,21.15,30.86,21.15,21.15,27.63,21.15,21.15,24.39,21.15,21.15,21.15,21.15,21.15,24.39,21.15,21.15,27.63,21.15,21.15,30.86,21.15,21.15,34.1,21.15,21.15,37.34,21.15,21.15,40.57,21.15,21.15,43.81,21.15,21.15,47.05,21.15,21.15,50.29,21.15,21.15,53.53,21.15,21.15,56.76,21.15,21.15,60,21.15,21.15,56.76,21.15,21.15,53.53,21.15,21.15,50.29,21.15,21.15,47.05,21.15,21.15,43.81,21.15,21.15,40.57,21.15,21.15,37.34,21.15,21.15,34.1,21.15}, 153);
Transform681.addChild(&PositionInterpolator682);

Transform& Transform683 =  Transform();
Transform683.setTranslation(new float[]{0,0.1148,0});
Shape& Shape684 =  Shape();
Appearance& Appearance685 =  Appearance();
Material& Material686 =  Material();
Material686.setDiffuseColor(new float[]{0.102,0.102,0.102});
Material686.setShininess(0.25);
Appearance685.addChild(&Material686);

Shape684.addChild(&Appearance685);

Box& Box687 =  Box();
Box687.setSize(new float[]{0.2295,0.2295,1.071});
Shape684.setGeometry(&Box687);

Transform683.addChild(&Shape684);

Transform681.addChild(&Transform683);

Transform640.addChild(&Transform681);

Transform& Transform688 =  Transform();
Transform688.setDEF(CString("Shark_Gill_R02-ROOT"));
Transform688.setTranslation(new float[]{48.9,67.81,-5.426});
Transform688.setRotation(new float[]{-0.316607,0.318407,-0.89352,1.764});
Transform688.setScale(new float[]{21.15,23.8704,21.15});
Transform688.setScaleOrientation(new float[]{0.536701,-0.840101,-0.0786301,0.347});
PositionInterpolator& PositionInterpolator689 =  PositionInterpolator();
PositionInterpolator689.setDEF(CString("Shark_Gill_R02-SCALE-INTERP"));
PositionInterpolator689.setKey(new float[]{0,0.02,0.04,0.06,0.08,0.1,0.12,0.14,0.16,0.18,0.2,0.22,0.24,0.26,0.28,0.3,0.32,0.34,0.36,0.38,0.4,0.42,0.44,0.46,0.48,0.5,0.52,0.54,0.56,0.58,0.6,0.62,0.64,0.66,0.68,0.7,0.72,0.74,0.76,0.78,0.8,0.82,0.84,0.86,0.88,0.9,0.92,0.94,0.96,0.98,1}, 51);
PositionInterpolator689.setKeyValue(new float[]{21.15,40.57,21.15,21.15,37.34,21.15,21.15,34.1,21.15,21.15,30.86,21.15,21.15,27.62,21.15,21.15,24.39,21.15,21.15,21.15,21.15,21.15,24.39,21.15,21.15,27.62,21.15,21.15,30.86,21.15,21.15,34.1,21.15,21.15,37.34,21.15,21.15,40.57,21.15,21.15,43.81,21.15,21.15,47.05,21.15,21.15,50.29,21.15,21.15,53.52,21.15,21.15,56.76,21.15,21.15,60,21.15,21.15,56.76,21.15,21.15,53.53,21.15,21.15,50.29,21.15,21.15,47.05,21.15,21.15,43.81,21.15,21.15,40.57,21.15,21.15,37.34,21.15,21.15,34.1,21.15,21.15,30.86,21.15,21.15,27.62,21.15,21.15,24.39,21.15,21.15,21.15,21.15,21.15,24.39,21.15,21.15,27.62,21.15,21.15,30.86,21.15,21.15,34.1,21.15,21.15,37.34,21.15,21.15,40.57,21.15,21.15,43.81,21.15,21.15,47.05,21.15,21.15,50.29,21.15,21.15,53.52,21.15,21.15,56.76,21.15,21.15,60,21.15,21.15,56.76,21.15,21.15,53.53,21.15,21.15,50.29,21.15,21.15,47.05,21.15,21.15,43.81,21.15,21.15,40.57,21.15,21.15,37.34,21.15,21.15,34.1,21.15}, 153);
Transform688.addChild(&PositionInterpolator689);

Transform& Transform690 =  Transform();
Transform690.setTranslation(new float[]{0,0.1148,0});
Shape& Shape691 =  Shape();
Appearance& Appearance692 =  Appearance();
Material& Material693 =  Material();
Material693.setDiffuseColor(new float[]{0.102,0.102,0.102});
Material693.setShininess(0.25);
Appearance692.addChild(&Material693);

Shape691.addChild(&Appearance692);

Box& Box694 =  Box();
Box694.setSize(new float[]{0.2295,0.2295,1.071});
Shape691.setGeometry(&Box694);

Transform690.addChild(&Shape691);

Transform688.addChild(&Transform690);

Transform640.addChild(&Transform688);

Transform& Transform695 =  Transform();
Transform695.setDEF(CString("Shark_Gill_R01-ROOT"));
Transform695.setTranslation(new float[]{47.87,53.67,-5.074});
Transform695.setRotation(new float[]{-0.316607,0.318407,-0.89352,1.764});
Transform695.setScale(new float[]{21.15,23.8704,21.15});
Transform695.setScaleOrientation(new float[]{0.536701,-0.840101,-0.0786301,0.347});
PositionInterpolator& PositionInterpolator696 =  PositionInterpolator();
PositionInterpolator696.setDEF(CString("Shark_Gill_R01-SCALE-INTERP"));
PositionInterpolator696.setKey(new float[]{0,0.02,0.04,0.06,0.08,0.1,0.12,0.14,0.16,0.18,0.2,0.22,0.24,0.26,0.28,0.3,0.32,0.34,0.36,0.38,0.4,0.42,0.44,0.46,0.48,0.5,0.52,0.54,0.56,0.58,0.6,0.62,0.64,0.66,0.68,0.7,0.72,0.74,0.76,0.78,0.8,0.82,0.84,0.86,0.88,0.9,0.92,0.94,0.96,0.98,1}, 51);
PositionInterpolator696.setKeyValue(new float[]{21.15,40.57,21.15,21.15,37.34,21.15,21.15,34.1,21.15,21.15,30.86,21.15,21.15,27.62,21.15,21.15,24.39,21.15,21.15,21.15,21.15,21.15,24.39,21.15,21.15,27.62,21.15,21.15,30.86,21.15,21.15,34.1,21.15,21.15,37.34,21.15,21.15,40.57,21.15,21.15,43.81,21.15,21.15,47.05,21.15,21.15,50.29,21.15,21.15,53.52,21.15,21.15,56.76,21.15,21.15,60,21.15,21.15,56.76,21.15,21.15,53.53,21.15,21.15,50.29,21.15,21.15,47.05,21.15,21.15,43.81,21.15,21.15,40.57,21.15,21.15,37.34,21.15,21.15,34.1,21.15,21.15,30.86,21.15,21.15,27.62,21.15,21.15,24.39,21.15,21.15,21.15,21.15,21.15,24.39,21.15,21.15,27.62,21.15,21.15,30.86,21.15,21.15,34.1,21.15,21.15,37.34,21.15,21.15,40.57,21.15,21.15,43.81,21.15,21.15,47.05,21.15,21.15,50.29,21.15,21.15,53.52,21.15,21.15,56.76,21.15,21.15,60,21.15,21.15,56.76,21.15,21.15,53.53,21.15,21.15,50.29,21.15,21.15,47.05,21.15,21.15,43.81,21.15,21.15,40.57,21.15,21.15,37.34,21.15,21.15,34.1,21.15}, 153);
Transform695.addChild(&PositionInterpolator696);

Transform& Transform697 =  Transform();
Transform697.setTranslation(new float[]{0,0.1148,0});
Shape& Shape698 =  Shape();
Appearance& Appearance699 =  Appearance();
Material& Material700 =  Material();
Material700.setDiffuseColor(new float[]{0.102,0.102,0.102});
Material700.setShininess(0.25);
Appearance699.addChild(&Material700);

Shape698.addChild(&Appearance699);

Box& Box701 =  Box();
Box701.setSize(new float[]{0.2295,0.2295,1.071});
Shape698.setGeometry(&Box701);

Transform697.addChild(&Shape698);

Transform695.addChild(&Transform697);

Transform640.addChild(&Transform695);

Transform& Transform702 =  Transform();
Transform702.setDEF(CString("Shark_Gill_R03-ROOT"));
Transform702.setTranslation(new float[]{49.86,81.06,-5.755});
Transform702.setRotation(new float[]{-0.316607,0.318407,-0.89352,1.764});
Transform702.setScale(new float[]{21.15,23.8704,21.15});
Transform702.setScaleOrientation(new float[]{0.536701,-0.840101,-0.0786301,0.347});
PositionInterpolator& PositionInterpolator703 =  PositionInterpolator();
PositionInterpolator703.setDEF(CString("Shark_Gill_R03-SCALE-INTERP"));
PositionInterpolator703.setKey(new float[]{0,0.02,0.04,0.06,0.08,0.1,0.12,0.14,0.16,0.18,0.2,0.22,0.24,0.26,0.28,0.3,0.32,0.34,0.36,0.38,0.4,0.42,0.44,0.46,0.48,0.5,0.52,0.54,0.56,0.58,0.6,0.62,0.64,0.66,0.68,0.7,0.72,0.74,0.76,0.78,0.8,0.82,0.84,0.86,0.88,0.9,0.92,0.94,0.96,0.98,1}, 51);
PositionInterpolator703.setKeyValue(new float[]{21.15,40.57,21.15,21.15,37.34,21.15,21.15,34.1,21.15,21.15,30.86,21.15,21.15,27.62,21.15,21.15,24.39,21.15,21.15,21.15,21.15,21.15,24.39,21.15,21.15,27.62,21.15,21.15,30.86,21.15,21.15,34.1,21.15,21.15,37.34,21.15,21.15,40.57,21.15,21.15,43.81,21.15,21.15,47.05,21.15,21.15,50.29,21.15,21.15,53.52,21.15,21.15,56.76,21.15,21.15,60,21.15,21.15,56.76,21.15,21.15,53.53,21.15,21.15,50.29,21.15,21.15,47.05,21.15,21.15,43.81,21.15,21.15,40.57,21.15,21.15,37.34,21.15,21.15,34.1,21.15,21.15,30.86,21.15,21.15,27.62,21.15,21.15,24.39,21.15,21.15,21.15,21.15,21.15,24.39,21.15,21.15,27.62,21.15,21.15,30.86,21.15,21.15,34.1,21.15,21.15,37.34,21.15,21.15,40.57,21.15,21.15,43.81,21.15,21.15,47.05,21.15,21.15,50.29,21.15,21.15,53.52,21.15,21.15,56.76,21.15,21.15,60,21.15,21.15,56.76,21.15,21.15,53.53,21.15,21.15,50.29,21.15,21.15,47.05,21.15,21.15,43.81,21.15,21.15,40.57,21.15,21.15,37.34,21.15,21.15,34.1,21.15}, 153);
Transform702.addChild(&PositionInterpolator703);

Transform& Transform704 =  Transform();
Transform704.setTranslation(new float[]{0,0.1148,0});
Shape& Shape705 =  Shape();
Appearance& Appearance706 =  Appearance();
Material& Material707 =  Material();
Material707.setDiffuseColor(new float[]{0.102,0.102,0.102});
Material707.setShininess(0.25);
Appearance706.addChild(&Material707);

Shape705.addChild(&Appearance706);

Box& Box708 =  Box();
Box708.setSize(new float[]{0.2295,0.2295,1.071});
Shape705.setGeometry(&Box708);

Transform704.addChild(&Shape705);

Transform702.addChild(&Transform704);

Transform640.addChild(&Transform702);

Transform& Transform709 =  Transform();
Transform709.setDEF(CString("Shark_Gill_L02-ROOT"));
Transform709.setTranslation(new float[]{-50.64,67.65,-3.755});
Transform709.setRotation(new float[]{0.646034,-0.686736,0.333217,3.713});
Transform709.setScale(new float[]{21.15,23.8704,21.15});
Transform709.setScaleOrientation(new float[]{0.927626,0,-0.37351,0.187601});
PositionInterpolator& PositionInterpolator710 =  PositionInterpolator();
PositionInterpolator710.setDEF(CString("Shark_Gill_L02-SCALE-INTERP"));
PositionInterpolator710.setKey(new float[]{0,0.02,0.04,0.06,0.08,0.1,0.12,0.14,0.16,0.18,0.2,0.22,0.24,0.26,0.28,0.3,0.32,0.34,0.36,0.38,0.4,0.42,0.44,0.46,0.48,0.5,0.52,0.54,0.56,0.58,0.6,0.62,0.64,0.66,0.68,0.7,0.72,0.74,0.76,0.78,0.8,0.82,0.84,0.86,0.88,0.9,0.92,0.94,0.96,0.98,1}, 51);
PositionInterpolator710.setKeyValue(new float[]{21.15,40.58,21.15,21.15,37.34,21.15,21.15,34.1,21.15,21.15,30.86,21.15,21.15,27.62,21.15,21.15,24.39,21.15,21.15,21.15,21.15,21.15,24.39,21.15,21.15,27.62,21.15,21.15,30.86,21.15,21.15,34.1,21.15,21.15,37.34,21.15,21.15,40.57,21.15,21.15,43.81,21.15,21.15,47.05,21.15,21.15,50.29,21.15,21.15,53.53,21.15,21.15,56.76,21.15,21.15,60,21.15,21.15,56.76,21.15,21.15,53.52,21.15,21.15,50.29,21.15,21.15,47.05,21.15,21.15,43.81,21.15,21.15,40.58,21.15,21.15,37.34,21.15,21.15,34.1,21.15,21.15,30.86,21.15,21.15,27.62,21.15,21.15,24.39,21.15,21.15,21.15,21.15,21.15,24.39,21.15,21.15,27.62,21.15,21.15,30.86,21.15,21.15,34.1,21.15,21.15,37.34,21.15,21.15,40.57,21.15,21.15,43.81,21.15,21.15,47.05,21.15,21.15,50.29,21.15,21.15,53.53,21.15,21.15,56.76,21.15,21.15,60,21.15,21.15,56.76,21.15,21.15,53.52,21.15,21.15,50.29,21.15,21.15,47.05,21.15,21.15,43.81,21.15,21.15,40.58,21.15,21.15,37.34,21.15,21.15,34.1,21.15}, 153);
Transform709.addChild(&PositionInterpolator710);

Transform& Transform711 =  Transform();
Transform711.setTranslation(new float[]{0,0.1148,0});
Shape& Shape712 =  Shape();
Appearance& Appearance713 =  Appearance();
Material& Material714 =  Material();
Material714.setDiffuseColor(new float[]{0.102,0.102,0.102});
Material714.setShininess(0.25);
Appearance713.addChild(&Material714);

Shape712.addChild(&Appearance713);

Box& Box715 =  Box();
Box715.setSize(new float[]{0.2295,0.2295,1.071});
Shape712.setGeometry(&Box715);

Transform711.addChild(&Shape712);

Transform709.addChild(&Transform711);

Transform640.addChild(&Transform709);

Transform& Transform716 =  Transform();
Transform716.setDEF(CString("Shark_Fin_L-ROOT"));
Transform716.setTranslation(new float[]{-68.62,84.59,15.82});
Transform716.setRotation(new float[]{-0.775069,0.451282,-0.442282,1.789});
Transform716.setScale(new float[]{253.3,501.6,779.7});
Transform716.setScaleOrientation(new float[]{0,1,0,0.719});
Transform& Transform717 =  Transform();
Transform717.setTranslation(new float[]{0,0.005132,0});
Shape& Shape718 =  Shape();
Appearance& Appearance719 =  Appearance();
Material& Material720 =  Material();
Material720.setDiffuseColor(new float[]{0.2353,0.2353,0.2353});
Material720.setShininess(0.25);
Appearance719.addChild(&Material720);

Shape718.addChild(&Appearance719);

Box& Box721 =  Box();
Box721.setSize(new float[]{0.1078,0.01026,0.1052});
Shape718.setGeometry(&Box721);

Transform717.addChild(&Shape718);

Transform716.addChild(&Transform717);

Transform640.addChild(&Transform716);

Transform& Transform722 =  Transform();
Transform722.setDEF(CString("Shark_Fin_R-ROOT"));
Transform722.setTranslation(new float[]{72.39,86.19,16.73});
Transform722.setRotation(new float[]{-0.903272,0.305291,-0.301491,1.64});
Transform722.setScale(new float[]{253.3,501.6,779.7});
Transform722.setScaleOrientation(new float[]{0,1,0,0.719});
Transform& Transform723 =  Transform();
Transform723.setTranslation(new float[]{0,0.005132,0});
Shape& Shape724 =  Shape();
Appearance& Appearance725 =  Appearance();
Material& Material726 =  Material();
Material726.setDiffuseColor(new float[]{0.2353,0.2353,0.2353});
Material726.setShininess(0.25);
Appearance725.addChild(&Material726);

Shape724.addChild(&Appearance725);

Box& Box727 =  Box();
Box727.setSize(new float[]{0.1078,0.01026,0.1052});
Shape724.setGeometry(&Box727);

Transform723.addChild(&Shape724);

Transform722.addChild(&Transform723);

Transform640.addChild(&Transform722);

Transform& Transform728 =  Transform();
Transform728.setDEF(CString("Shark_Fin_T-ROOT"));
Transform728.setTranslation(new float[]{-3.415,141.4,-20.76});
Transform728.setRotation(new float[]{-0.105105,-0.112805,-0.988042,1.578});
Transform728.setScale(new float[]{372.2,501.6,895.7});
Transform728.setScaleOrientation(new float[]{-0.000692,0.999999,-0.0007271,0.7108});
Shape& Shape729 =  Shape();
Appearance& Appearance730 =  Appearance();
Material& Material731 =  Material();
Material731.setDiffuseColor(new float[]{0.2353,0.2353,0.2353});
Material731.setShininess(0.25);
Appearance730.addChild(&Material731);

Shape729.addChild(&Appearance730);

IndexedFaceSet& IndexedFaceSet732 =  IndexedFaceSet();
IndexedFaceSet732.setDEF(CString("Shark_Fin_T-FACES"));
IndexedFaceSet732.setCoordIndex(new int32_t[]{0,7,2,-1,6,8,3,-1,7,1,4,-1,6,5,2,-1,9,0,3,-1,8,4,1,-1,5,6,3,-1,4,6,7,-1,9,1,7,-1,2,7,6,-1,6,4,8,-1,3,8,9,-1,1,9,8,-1,0,9,7,-1}, 56);
Coordinate& Coordinate733 =  Coordinate();
Coordinate733.setDEF(CString("Shark_Fin_T-COORD"));
Coordinate733.setPoint(new float[]{-0.07286,-0.0002971,0.02072,-0.09155,-0.002948,-0.02931,0.06054,0.00003569,-0.05069,-0.07286,0.006703,0.02072,-0.09155,0.004052,-0.02931,0.06054,0.007036,-0.05069,-0.02512,0.007556,-0.0462,-0.02512,0.0005558,-0.0462,-0.07472,0.005046,-0.01182,-0.07472,-0.001954,-0.01182}, 30);
IndexedFaceSet732.setCoord(&Coordinate733);

Shape729.setGeometry(&IndexedFaceSet732);

Transform728.addChild(&Shape729);

Transform640.addChild(&Transform728);

Group639.addChild(&Transform640);

TimeSensor& TimeSensor734 =  TimeSensor();
TimeSensor734.setDEF(CString("SharkDeathTimer"));
TimeSensor734.setCycleInterval(15);
Group639.addChild(&TimeSensor734);

TimeSensor& TimeSensor735 =  TimeSensor();
TimeSensor735.setDEF(CString("SharkBoomTimer"));
TimeSensor735.setCycleInterval(5.6);
Group639.addChild(&TimeSensor735);

TimeSensor& TimeSensor736 =  TimeSensor();
TimeSensor736.setDEF(CString("FishBurpTimer"));
TimeSensor736.setCycleInterval(11);
Group639.addChild(&TimeSensor736);

PositionInterpolator& PositionInterpolator737 =  PositionInterpolator();
PositionInterpolator737.setDEF(CString("SharkDeath-POS-INTERP"));
PositionInterpolator737.setKey(new float[]{0,0.01333,0.02667,0.04,0.05333,0.06667,0.08,0.09333,0.1067,0.12,0.1333,0.1467,0.16,0.1733,0.1867,0.2,0.2133,0.2267,0.24,0.2533,0.2667,0.28,0.2933,0.3067,0.32,0.3333,0.3467,0.36,0.3733,0.3867}, 30);
PositionInterpolator737.setKeyValue(new float[]{0.001881,-0.2842,-1.188,-0.006575,-0.2482,-1.068,0.0003181,-0.2849,-1.189,0.0008941,-0.2852,-1.189,0.0009147,-0.2853,-1.189,0.0006456,-0.2852,-1.189,0.0003574,-0.285,-1.189,0.0003181,-0.2849,-1.189,0.0006044,-0.2844,-1.188,0.001038,-0.2836,-1.188,0.001502,-0.2833,-1.188,0.001881,-0.2842,-1.188,0.001798,-0.2354,-0.8653,0.0004518,-0.2849,-1.189,0.0004518,-0.2849,-1.189,0.001798,-0.2733,-0.9422,0.0004518,-0.2849,-1.189,0.02244,-0.2735,-0.9417,0.0004518,-0.2849,-1.189,0.002354,-0.2591,-0.9724,0.001798,-0.2733,-0.9422,0.002354,-0.2591,-1.05,0.002118,-0.2651,-1.094,0.003038,-0.2415,-1.159,0.002682,-0.2506,-1.178,0.0009442,-0.2082,-1.348,0.001113,-0.1891,-1.58,0.0012,-0.1793,-1.676,0.001513,-0.1439,-1.656,0.001513,-2.072,-1.656}, 90);
Group639.addChild(&PositionInterpolator737);

OrientationInterpolator& OrientationInterpolator738 =  OrientationInterpolator();
OrientationInterpolator738.setDEF(CString("SharkDeath-ROT-INTERP"));
OrientationInterpolator738.setKey(new float[]{0,0.01333,0.02667,0.04,0.05333,0.06667,0.08,0.09333,0.1067,0.12,0.1333,0.1467,0.16,0.1733,0.1867,0.2,0.2133,0.2267,0.24,0.2533,0.32,0.3333}, 22);
OrientationInterpolator738.setKeyValue(new float[]{-0.999941,0.00659827,-0.00861636,4.167,-0.995366,0.0222392,0.0935568,4.139,-0.999992,-0.000109199,-0.00407597,4.174,-0.999891,-0.00264198,-0.0145299,4.177,-0.999872,-0.00318291,-0.0156896,4.178,-0.99993,-0.00245707,-0.0116103,4.177,-0.999979,-0.00118997,-0.00638587,4.175,-0.999992,-0.000109199,-0.00407597,4.174,-0.999987,0.00111799,-0.00492194,4.169,-0.999976,0.00296893,-0.00619885,4.16,-0.999959,0.0049528,-0.00754669,4.157,-0.999941,0.00659827,-0.00861636,4.167,0.999946,-0.0065003,0.00814537,2.013,-0.99999,0.000493395,-0.00441496,4.174,-0.99999,0.000493395,-0.00441496,4.174,0.999946,-0.0065013,0.00814537,2.013,-0.99999,0.000493395,-0.00441496,4.174,0.998106,-0.0500803,0.0357302,2.015,-0.99999,0.000493495,-0.00441496,4.174,0.999946,-0.0065013,0.00814537,2.013,0.999946,-0.0065013,0.00814537,2.013,-0.99999,0.000493395,-0.00441496,4.174}, 88);
Group639.addChild(&OrientationInterpolator738);

PositionInterpolator& PositionInterpolator739 =  PositionInterpolator();
PositionInterpolator739.setDEF(CString("SharkDeath-SCALE-INTERP"));
PositionInterpolator739.setKey(new float[]{0,0.24,0.2533,0.2667,0.28,0.2933,0.3067,0.32,0.3333,0.3467,0.36,0.3733,0.3734}, 13);
PositionInterpolator739.setKeyValue(new float[]{0.001994,0.001994,0.001994,0.001994,0.001994,0.001994,0.002592,0.002592,0.002592,0.001994,0.001994,0.001994,0.002592,0.002592,0.002592,0.002339,0.002339,0.002339,0.003329,0.003329,0.003329,0.002946,0.002946,0.002946,0.003939,0.003939,0.003939,0.004608,0.004608,0.004608,0.00495,0.00495,0.00495,0.006188,0.006188,0.006188,0.000001,0.000001,0.000001}, 39);
Group639.addChild(&PositionInterpolator739);

Transform& Transform740 =  Transform();
Transform740.setDEF(CString("SharkDeath-ROOT"));
Transform740.setTranslation(new float[]{0.001881,-0.2842,-1.188});
Transform740.setRotation(new float[]{-0.999941,0.00659827,-0.00861635,4.167});
Transform740.setScale(new float[]{0.001994,0.001994,0.001994});
Transform740.setScaleOrientation(new float[]{-0.00414896,0.999991,0,0.3366});
Transform& Transform741 =  Transform();
Transform741.setDEF(CString("SharkDeath_Eyeball_R-ROOT"));
Transform741.setTranslation(new float[]{55.09,1.822,-6.84});
Transform741.setRotation(new float[]{-0.682571,0.661772,-0.310087,2.578});
Transform741.setScale(new float[]{1.042,1.042,1.042});
Transform741.setScaleOrientation(new float[]{-0.859288,-0.0939287,0.502793,0.2111});
PositionInterpolator& PositionInterpolator742 =  PositionInterpolator();
PositionInterpolator742.setDEF(CString("SharkDeath_Eyeball_R-POS-INTERP"));
PositionInterpolator742.setKey(new float[]{0}, 1);
PositionInterpolator742.setKeyValue(new float[]{55.09,1.822,-6.84}, 3);
Transform741.addChild(&PositionInterpolator742);

OrientationInterpolator& OrientationInterpolator743 =  OrientationInterpolator();
OrientationInterpolator743.setDEF(CString("SharkDeath_Eyeball_R-ROT-INTERP"));
OrientationInterpolator743.setKey(new float[]{0,0.06667,0.08,0.09333,0.1067,0.12,0.1333,0.1467,0.16,0.1733,0.1867,0.2,0.2133,0.2267,0.24,0.2533,0.2667,0.28,0.2933}, 19);
OrientationInterpolator743.setKeyValue(new float[]{-0.682571,0.661772,-0.310087,2.578,-0.682571,0.661772,-0.310087,2.578,-0.711681,0.699782,-0.0617684,3.069,-0.706442,0.700642,0.100206,3.397,-0.703618,0.698918,0.128203,3.452,-0.702038,0.697837,0.142008,3.479,-0.701805,0.697705,0.143801,3.483,-0.702782,0.698382,0.135497,3.466,-0.704594,0.699494,0.119399,3.435,-0.706684,0.700785,0.0974579,3.391,-0.708719,0.701819,0.0718819,3.34,-0.710388,0.702388,0.0447192,3.285,-0.711647,0.702446,0.0113307,3.218,-0.712116,0.701315,-0.0323707,3.129,-0.711003,0.698203,-0.0835904,3.025,-0.707543,0.692742,-0.139609,2.912,-0.70152,0.684619,-0.197906,2.796,-0.693003,0.674103,-0.255601,2.683,-0.682571,0.661772,-0.310087,2.578}, 76);
Transform741.addChild(&OrientationInterpolator743);

PositionInterpolator& PositionInterpolator744 =  PositionInterpolator();
PositionInterpolator744.setDEF(CString("SharkDeath_Eyeball_R-SCALE-INTERP"));
PositionInterpolator744.setKey(new float[]{0,0.01333,0.02667,0.1467,0.16,0.1733,0.2933,0.3067,0.32}, 9);
PositionInterpolator744.setKeyValue(new float[]{1.042,1.042,1.042,2.454,2.454,2.454,1.042,1.042,1.042,1.042,1.042,1.042,1.938,1.938,1.937,1.042,1.042,1.042,1.042,1.042,1.042,1.583,1.583,1.583,1.042,1.042,1.042}, 27);
Transform741.addChild(&PositionInterpolator744);

Transform740.addChild(&Transform741);

Transform& Transform745 =  Transform();
Transform745.setDEF(CString("SharkDeath_Eyeball_L-ROOT"));
Transform745.setTranslation(new float[]{-54.37,2.848,-8.257});
Transform745.setRotation(new float[]{-0.374592,0.400391,-0.836282,1.719});
Transform745.setScale(new float[]{1.048,1.048,1.048});
Transform745.setScaleOrientation(new float[]{0.682806,-0.223402,-0.695606,0.2779});
PositionInterpolator& PositionInterpolator746 =  PositionInterpolator();
PositionInterpolator746.setDEF(CString("SharkDeath_Eyeball_L-POS-INTERP"));
PositionInterpolator746.setKey(new float[]{0}, 1);
PositionInterpolator746.setKeyValue(new float[]{-54.37,2.848,-8.257}, 3);
Transform745.addChild(&PositionInterpolator746);

OrientationInterpolator& OrientationInterpolator747 =  OrientationInterpolator();
OrientationInterpolator747.setDEF(CString("SharkDeath_Eyeball_L-ROT-INTERP"));
OrientationInterpolator747.setKey(new float[]{0,0.06667,0.08,0.09333,0.1067,0.12,0.1333,0.1467,0.16,0.1733,0.1867,0.2,0.2133,0.2267,0.24,0.2533,0.2667,0.28,0.2933,0.3067}, 20);
OrientationInterpolator747.setKeyValue(new float[]{-0.374592,0.400391,-0.836282,1.719,-0.374592,0.400391,-0.836282,1.719,-0.113603,0.148104,-0.982425,1.57,0.0838699,-0.04633,-0.995399,1.564,0.119496,-0.0817271,-0.989465,1.571,0.138505,-0.100604,-0.985239,1.576,0.143596,-0.105697,-0.983976,1.578,0.137193,-0.0993252,-0.985552,1.576,0.121495,-0.0836666,-0.98906,1.572,0.0985271,-0.0608682,-0.993271,1.567,0.0705967,-0.0331684,-0.996953,1.562,0.0399898,-0.00286899,-0.999196,1.559,0.00276406,0.0338807,-0.999422,1.557,-0.0448909,0.0807816,-0.99572,1.559,-0.100001,0.134802,-0.985813,1.567,-0.159306,0.192708,-0.968238,1.583,-0.219304,0.251004,-0.942816,1.607,-0.276809,0.30651,-0.91073,1.639,-0.329115,0.356916,-0.874239,1.677,-0.374592,0.400391,-0.836282,1.719}, 80);
Transform745.addChild(&OrientationInterpolator747);

PositionInterpolator& PositionInterpolator748 =  PositionInterpolator();
PositionInterpolator748.setDEF(CString("SharkDeath_Eyeball_L-SCALE-INTERP"));
PositionInterpolator748.setKey(new float[]{0,0.01333,0.02667,0.1867,0.2,0.2133,0.3067,0.32,0.3333}, 9);
PositionInterpolator748.setKeyValue(new float[]{1.048,1.048,1.048,2.548,2.548,2.548,1.048,1.048,1.048,1.048,1.048,1.048,1.928,1.928,1.928,1.048,1.048,1.048,1.048,1.048,1.048,1.582,1.582,1.582,1.048,1.048,1.048}, 27);
Transform745.addChild(&PositionInterpolator748);

Transform740.addChild(&Transform745);

Group639.addChild(&Transform740);

Group& Group749 =  Group();
Transform& Transform750 =  Transform();
Transform750.setDEF(CString("Dummy_SharkDeath_explode-ROOT"));
Transform750.setTranslation(new float[]{-0.000025,-1.738,-1.326});
PositionInterpolator& PositionInterpolator751 =  PositionInterpolator();
PositionInterpolator751.setDEF(CString("Dummy_SharkDeath_explode-POS-INTERP"));
PositionInterpolator751.setKey(new float[]{0,0.3733,0.3867}, 3);
PositionInterpolator751.setKeyValue(new float[]{-0.000025,-1.738,-1.326,-0.000025,-1.738,-1.326,-0.000025,-0.2489,-1.326}, 9);
Transform750.addChild(&PositionInterpolator751);

Transform& Transform752 =  Transform();
Transform752.setDEF(CString("SharkDeath_explode_Eyeball_L-ROOT"));
Transform752.setTranslation(new float[]{-0.3353,0.1388,-0.2908});
Transform752.setRotation(new float[]{0.520301,0.852102,-0.0566501,1.925});
Transform752.setScale(new float[]{0.006484,0.006484,0.006484});
Transform752.setScaleOrientation(new float[]{-0.710431,0.595526,0.375016,0.0659083});
PositionInterpolator& PositionInterpolator753 =  PositionInterpolator();
PositionInterpolator753.setDEF(CString("SharkDeath_explode_Eyeball_L-POS-INTERP"));
PositionInterpolator753.setKey(new float[]{0,0.3867,0.4,0.4133}, 4);
PositionInterpolator753.setKeyValue(new float[]{-0.3353,0.1388,-0.2908,-0.3353,0.1388,-0.2908,-0.8877,0.6117,-0.2908,-1.44,1.085,-0.2908}, 12);
Transform752.addChild(&PositionInterpolator753);

Shape& Shape754 =  Shape();
Appearance& Appearance755 =  Appearance();
Material& Material756 =  Material();
Material756.setDiffuseColor(new float[]{1,1,1});
Appearance755.addChild(&Material756);

Shape754.addChild(&Appearance755);

IndexedFaceSet& IndexedFaceSet757 =  IndexedFaceSet();
IndexedFaceSet757.setDEF(CString("SharkDeath_explode_Eyeball_L-FACES"));
IndexedFaceSet757.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,1,-1,1,7,8,-1,1,8,2,-1,2,8,9,-1,2,9,3,-1,3,9,10,-1,3,10,4,-1,4,10,11,-1,4,11,5,-1,5,11,12,-1,5,12,6,-1,6,12,7,-1,6,7,1,-1,13,8,7,-1,13,9,8,-1,13,10,9,-1,13,11,10,-1,13,12,11,-1,13,7,12,-1}, 96);
Coordinate& Coordinate758 =  Coordinate();
Coordinate758.setDEF(CString("SharkDeath_explode_Eyeball_L-COORD"));
Coordinate758.setPoint(new float[]{0,8.453,0,0,4.226,-7.32,-6.34,4.226,-3.66,-6.34,4.226,3.66,0,4.226,7.32,6.34,4.226,3.66,6.34,4.226,-3.66,0,-4.226,-7.32,-6.34,-4.226,-3.66,-6.34,-4.226,3.66,0,-4.226,7.32,6.34,-4.226,3.66,6.34,-4.226,-3.66,0,-8.453,0}, 42);
IndexedFaceSet757.setCoord(&Coordinate758);

Shape754.setGeometry(&IndexedFaceSet757);

Transform752.addChild(&Shape754);

Transform& Transform759 =  Transform();
Transform759.setDEF(CString("SharkDeath_explode_Pupil_L-ROOT"));
Transform759.setTranslation(new float[]{0,0,-9.027});
Shape& Shape760 =  Shape();
Appearance& Appearance761 =  Appearance();
Material& Material762 =  Material();
Material762.setDiffuseColor(new float[]{0.102,0.102,0.102});
Material762.setShininess(0.25);
Appearance761.addChild(&Material762);

Shape760.addChild(&Appearance761);

IndexedFaceSet& IndexedFaceSet763 =  IndexedFaceSet();
IndexedFaceSet763.setDEF(CString("SharkDeath_explode_Pupil_L-FACES"));
IndexedFaceSet763.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,1,-1,1,7,8,-1,1,8,2,-1,2,8,9,-1,2,9,3,-1,3,9,10,-1,3,10,4,-1,4,10,11,-1,4,11,5,-1,5,11,12,-1,5,12,6,-1,6,12,7,-1,6,7,1,-1,13,8,7,-1,13,9,8,-1,13,10,9,-1,13,11,10,-1,13,12,11,-1,13,7,12,-1}, 96);
Coordinate& Coordinate764 =  Coordinate();
Coordinate764.setDEF(CString("SharkDeath_explode_Pupil_L-COORD"));
Coordinate764.setPoint(new float[]{0,2.536,0,0,1.268,-2.196,-1.902,1.268,-1.098,-1.902,1.268,1.098,0,1.268,2.196,1.902,1.268,1.098,1.902,1.268,-1.098,0,-1.268,-2.196,-1.902,-1.268,-1.098,-1.902,-1.268,1.098,0,-1.268,2.196,1.902,-1.268,1.098,1.902,-1.268,-1.098,0,-2.536,0}, 42);
IndexedFaceSet763.setCoord(&Coordinate764);

Shape760.setGeometry(&IndexedFaceSet763);

Transform759.addChild(&Shape760);

Transform752.addChild(&Transform759);

Transform750.addChild(&Transform752);

Transform& Transform765 =  Transform();
Transform765.setDEF(CString("SharkDeath_explode_Eyeball_R-ROOT"));
Transform765.setTranslation(new float[]{0.3421,0.1366,-0.2959});
Transform765.setRotation(new float[]{-0.119501,0.808308,0.576505,1.566});
Transform765.setScale(new float[]{0.006446,0.006446,0.006446});
Transform765.setScaleOrientation(new float[]{-0.315206,0.144103,-0.938019,0.524});
PositionInterpolator& PositionInterpolator766 =  PositionInterpolator();
PositionInterpolator766.setDEF(CString("SharkDeath_explode_Eyeball_R-POS-INTERP"));
PositionInterpolator766.setKey(new float[]{0,0.3867,0.4,0.4133}, 4);
PositionInterpolator766.setKeyValue(new float[]{0.3421,0.1366,-0.2959,0.3421,0.1366,-0.2959,0.8428,0.5922,-0.2959,1.343,1.048,-0.2959}, 12);
Transform765.addChild(&PositionInterpolator766);

Shape& Shape767 =  Shape();
Appearance& Appearance768 =  Appearance();
Material& Material769 =  Material();
Material769.setDiffuseColor(new float[]{1,1,1});
Appearance768.addChild(&Material769);

Shape767.addChild(&Appearance768);

IndexedFaceSet& IndexedFaceSet770 =  IndexedFaceSet();
IndexedFaceSet770.setUSE(CString("SharkDeath_explode_Eyeball_L-FACES"));
Shape767.setGeometry(&IndexedFaceSet770);

Transform765.addChild(&Shape767);

Transform& Transform771 =  Transform();
Transform771.setDEF(CString("SharkDeath_explode_Pupil_R-ROOT"));
Transform771.setTranslation(new float[]{0,-0.0000144,8.714});
Shape& Shape772 =  Shape();
Appearance& Appearance773 =  Appearance();
Material& Material774 =  Material();
Material774.setDiffuseColor(new float[]{0.102,0.102,0.102});
Material774.setShininess(0.25);
Appearance773.addChild(&Material774);

Shape772.addChild(&Appearance773);

IndexedFaceSet& IndexedFaceSet775 =  IndexedFaceSet();
IndexedFaceSet775.setUSE(CString("SharkDeath_explode_Pupil_L-FACES"));
Shape772.setGeometry(&IndexedFaceSet775);

Transform771.addChild(&Shape772);

Transform765.addChild(&Transform771);

Transform750.addChild(&Transform765);

Transform& Transform776 =  Transform();
Transform776.setDEF(CString("SharkDeath_explode00-ROOT"));
Transform776.setTranslation(new float[]{-0.4308,-0.2435,0.06649});
Transform776.setRotation(new float[]{0.445898,0.858995,0.251599,1.161});
Transform776.setScale(new float[]{1.567,3.104,4.824});
Transform776.setScaleOrientation(new float[]{0,1,0,0.719});
PositionInterpolator& PositionInterpolator777 =  PositionInterpolator();
PositionInterpolator777.setDEF(CString("SharkDeath_explode00-POS-INTERP"));
PositionInterpolator777.setKey(new float[]{0,0.3867,0.4,0.4133}, 4);
PositionInterpolator777.setKeyValue(new float[]{-0.4308,-0.2435,0.06649,-0.4308,-0.2435,0.06649,-0.8008,-0.09703,0.06649,-1.171,0.04949,0.06649}, 12);
Transform776.addChild(&PositionInterpolator777);

Shape& Shape778 =  Shape();
Appearance& Appearance779 =  Appearance();
Material& Material780 =  Material();
Material780.setDiffuseColor(new float[]{0.2353,0.2353,0.2353});
Material780.setShininess(0.25);
Appearance779.addChild(&Material780);

Shape778.addChild(&Appearance779);

IndexedFaceSet& IndexedFaceSet781 =  IndexedFaceSet();
IndexedFaceSet781.setDEF(CString("SharkDeath_explode00-FACES"));
IndexedFaceSet781.setCoordIndex(new int32_t[]{2,1,0,-1}, 4);
Coordinate& Coordinate782 =  Coordinate();
Coordinate782.setDEF(CString("SharkDeath_explode00-COORD"));
Coordinate782.setPoint(new float[]{-0.05388,0.01026,0.0526,-0.05388,0.01026,-0.0526,0.05388,0.01026,-0.0526}, 9);
IndexedFaceSet781.setCoord(&Coordinate782);

Shape778.setGeometry(&IndexedFaceSet781);

Transform776.addChild(&Shape778);

Transform750.addChild(&Transform776);

Transform& Transform783 =  Transform();
Transform783.setDEF(CString("SharkDeath_explode01-ROOT"));
Transform783.setTranslation(new float[]{0.4502,-0.2508,0.07826});
Transform783.setRotation(new float[]{0.650419,0.728922,0.213606,0.8453});
Transform783.setScale(new float[]{1.567,3.104,4.824});
Transform783.setScaleOrientation(new float[]{0,1,0,0.719});
PositionInterpolator& PositionInterpolator784 =  PositionInterpolator();
PositionInterpolator784.setDEF(CString("SharkDeath_explode01-POS-INTERP"));
PositionInterpolator784.setKey(new float[]{0,0.3867,0.4,0.4133}, 4);
PositionInterpolator784.setKeyValue(new float[]{0.4502,-0.2508,0.07826,0.4502,-0.2508,0.07826,0.7577,-0.08718,0.07826,1.065,0.07641,0.07826}, 12);
Transform783.addChild(&PositionInterpolator784);

Shape& Shape785 =  Shape();
Appearance& Appearance786 =  Appearance();
Material& Material787 =  Material();
Material787.setDiffuseColor(new float[]{0.2353,0.2353,0.2353});
Material787.setShininess(0.25);
Appearance786.addChild(&Material787);

Shape785.addChild(&Appearance786);

IndexedFaceSet& IndexedFaceSet788 =  IndexedFaceSet();
IndexedFaceSet788.setDEF(CString("SharkDeath_explode01-FACES"));
IndexedFaceSet788.setCoordIndex(new int32_t[]{0,1,2,-1}, 4);
Coordinate& Coordinate789 =  Coordinate();
Coordinate789.setDEF(CString("SharkDeath_explode01-COORD"));
Coordinate789.setPoint(new float[]{-0.05388,0.01026,0.0526,0.05388,0.01026,0.0526,0.05388,0.01026,-0.0526}, 9);
IndexedFaceSet788.setCoord(&Coordinate789);

Shape785.setGeometry(&IndexedFaceSet788);

Transform783.addChild(&Shape785);

Transform750.addChild(&Transform783);

Transform& Transform790 =  Transform();
Transform790.setDEF(CString("SharkDeath_explode02-ROOT"));
Transform790.setTranslation(new float[]{-0.03068,0.05687,-0.3348});
Transform790.setRotation(new float[]{-0.99999,0.000493995,-0.00441496,4.174});
Transform790.setScale(new float[]{0.006236,0.006236,0.006236});
Transform790.setScaleOrientation(new float[]{-0.0063492,0.0223107,0.999731,0.7856});
PositionInterpolator& PositionInterpolator791 =  PositionInterpolator();
PositionInterpolator791.setDEF(CString("SharkDeath_explode02-POS-INTERP"));
PositionInterpolator791.setKey(new float[]{0,0.3867,0.4,0.4133}, 4);
PositionInterpolator791.setKeyValue(new float[]{-0.03068,0.05687,-0.3348,-0.03068,0.05687,-0.3348,-0.2365,0.6657,0.016,-0.4852,1.238,0.3554}, 12);
Transform790.addChild(&PositionInterpolator791);

OrientationInterpolator& OrientationInterpolator792 =  OrientationInterpolator();
OrientationInterpolator792.setDEF(CString("SharkDeath_explode02-ROT-INTERP"));
OrientationInterpolator792.setKey(new float[]{0,0.3867,0.4,0.4133}, 4);
OrientationInterpolator792.setKeyValue(new float[]{-0.99999,0.000493995,-0.00441496,4.174,-0.99999,0.000493995,-0.00441496,4.174,-0.929108,0.294703,0.223402,4.018,-0.748303,0.526602,0.403402,3.76}, 16);
Transform790.addChild(&OrientationInterpolator792);

PositionInterpolator& PositionInterpolator793 =  PositionInterpolator();
PositionInterpolator793.setDEF(CString("SharkDeath_explode02-SCALE-INTERP"));
PositionInterpolator793.setKey(new float[]{0,0.3867,0.4,0.4133}, 4);
PositionInterpolator793.setKeyValue(new float[]{0.006236,0.006236,0.006236,0.006236,0.006236,0.006236,0.002989,0.002989,0.002989,0.0002585,0.0002585,0.0002585}, 12);
Transform790.addChild(&PositionInterpolator793);

Shape& Shape794 =  Shape();
Appearance& Appearance795 =  Appearance();
Material& Material796 =  Material();
Material796.setDiffuseColor(new float[]{0.2353,0.2353,0.2353});
Material796.setShininess(0.25);
Appearance795.addChild(&Material796);

Shape794.addChild(&Appearance795);

IndexedFaceSet& IndexedFaceSet797 =  IndexedFaceSet();
IndexedFaceSet797.setDEF(CString("SharkDeath_explode02-FACES"));
IndexedFaceSet797.setCoordIndex(new int32_t[]{0,1,2,-1}, 4);
Coordinate& Coordinate798 =  Coordinate();
Coordinate798.setDEF(CString("SharkDeath_explode02-COORD"));
Coordinate798.setPoint(new float[]{29.53,18.3,-33.92,-29.54,18.3,-33.92,-35.03,186.3,-38.64}, 9);
IndexedFaceSet797.setCoord(&Coordinate798);

Shape794.setGeometry(&IndexedFaceSet797);

Transform790.addChild(&Shape794);

Transform750.addChild(&Transform790);

Transform& Transform799 =  Transform();
Transform799.setDEF(CString("SharkDeath_explode03-ROOT"));
Transform799.setTranslation(new float[]{0.0338,0.09924,-0.1897});
Transform799.setRotation(new float[]{-0.99999,0.000493995,-0.00441496,4.174});
Transform799.setScale(new float[]{0.004872,0.004872,0.004872});
Transform799.setScaleOrientation(new float[]{0.314787,-0.949162,0,0.2634});
PositionInterpolator& PositionInterpolator800 =  PositionInterpolator();
PositionInterpolator800.setDEF(CString("SharkDeath_explode03-POS-INTERP"));
PositionInterpolator800.setKey(new float[]{0,0.3867,0.4,0.4133}, 4);
PositionInterpolator800.setKeyValue(new float[]{0.0338,0.09924,-0.1897,0.0338,0.09924,-0.1897,0.2199,0.713,0.08534,0.4266,1.263,0.3428}, 12);
Transform799.addChild(&PositionInterpolator800);

OrientationInterpolator& OrientationInterpolator801 =  OrientationInterpolator();
OrientationInterpolator801.setDEF(CString("SharkDeath_explode03-ROT-INTERP"));
OrientationInterpolator801.setKey(new float[]{0,0.3867,0.4,0.4133}, 4);
OrientationInterpolator801.setKeyValue(new float[]{-0.99999,0.000493995,-0.00441496,4.174,-0.99999,0.000493995,-0.00441496,4.174,-0.985139,0.109404,0.132405,4.044,-0.943824,0.208205,0.256607,3.892}, 16);
Transform799.addChild(&OrientationInterpolator801);

PositionInterpolator& PositionInterpolator802 =  PositionInterpolator();
PositionInterpolator802.setDEF(CString("SharkDeath_explode03-SCALE-INTERP"));
PositionInterpolator802.setKey(new float[]{0,0.3867,0.4,0.4133}, 4);
PositionInterpolator802.setKeyValue(new float[]{0.004872,0.004872,0.004872,0.004872,0.004872,0.004872,0.002364,0.002364,0.002364,0.0001437,0.0001437,0.0001437}, 12);
Transform799.addChild(&PositionInterpolator802);

Shape& Shape803 =  Shape();
Appearance& Appearance804 =  Appearance();
Material& Material805 =  Material();
Material805.setDiffuseColor(new float[]{0.2353,0.2353,0.2353});
Material805.setShininess(0.25);
Appearance804.addChild(&Material805);

Shape803.addChild(&Appearance804);

IndexedFaceSet& IndexedFaceSet806 =  IndexedFaceSet();
IndexedFaceSet806.setDEF(CString("SharkDeath_explode03-FACES"));
IndexedFaceSet806.setCoordIndex(new int32_t[]{0,2,1,-1}, 4);
Coordinate& Coordinate807 =  Coordinate();
Coordinate807.setDEF(CString("SharkDeath_explode03-COORD"));
Coordinate807.setPoint(new float[]{29.53,18.3,-33.92,34.67,186.3,-38.64,-35.03,186.3,-38.64}, 9);
IndexedFaceSet806.setCoord(&Coordinate807);

Shape803.setGeometry(&IndexedFaceSet806);

Transform799.addChild(&Shape803);

Transform750.addChild(&Transform799);

Transform& Transform808 =  Transform();
Transform808.setDEF(CString("SharkDeath_explode04-ROOT"));
Transform808.setTranslation(new float[]{-0.1079,0.03875,-0.1554});
Transform808.setRotation(new float[]{-0.99999,0.000493995,-0.00441496,4.174});
Transform808.setScale(new float[]{0.004288,0.004288,0.004288});
Transform808.setScaleOrientation(new float[]{-0.098672,0,0.99512,0.369});
PositionInterpolator& PositionInterpolator809 =  PositionInterpolator();
PositionInterpolator809.setDEF(CString("SharkDeath_explode04-POS-INTERP"));
PositionInterpolator809.setKey(new float[]{0,0.3867,0.4,0.4133}, 4);
PositionInterpolator809.setKeyValue(new float[]{-0.1079,0.03875,-0.1554,-0.1079,0.03875,-0.1554,-0.4529,0.3377,-0.1004,-0.7978,0.6366,-0.04533}, 12);
Transform808.addChild(&PositionInterpolator809);

PositionInterpolator& PositionInterpolator810 =  PositionInterpolator();
PositionInterpolator810.setDEF(CString("SharkDeath_explode04-SCALE-INTERP"));
PositionInterpolator810.setKey(new float[]{0,0.3867,0.4,0.4133}, 4);
PositionInterpolator810.setKeyValue(new float[]{0.004288,0.004288,0.004288,0.004288,0.004288,0.004288,0.003688,0.003688,0.003688,0.003088,0.003088,0.003088}, 12);
Transform808.addChild(&PositionInterpolator810);

Shape& Shape811 =  Shape();
Appearance& Appearance812 =  Appearance();
Material& Material813 =  Material();
Material813.setDiffuseColor(new float[]{0.2353,0.2353,0.2353});
Material813.setShininess(0.25);
Appearance812.addChild(&Material813);

Shape811.addChild(&Appearance812);

IndexedFaceSet& IndexedFaceSet814 =  IndexedFaceSet();
IndexedFaceSet814.setDEF(CString("SharkDeath_explode04-FACES"));
IndexedFaceSet814.setCoordIndex(new int32_t[]{0,1,2,-1}, 4);
Coordinate& Coordinate815 =  Coordinate();
Coordinate815.setDEF(CString("SharkDeath_explode04-COORD"));
Coordinate815.setPoint(new float[]{-29.54,18.3,-33.92,-59.07,11.28,0,-75.37,183.2,0.2692}, 9);
IndexedFaceSet814.setCoord(&Coordinate815);

Shape811.setGeometry(&IndexedFaceSet814);

Transform808.addChild(&Shape811);

Transform750.addChild(&Transform808);

Transform& Transform816 =  Transform();
Transform816.setDEF(CString("SharkDeath_explode05-ROOT"));
Transform816.setTranslation(new float[]{0.04049,0.01028,-0.3648});
Transform816.setRotation(new float[]{-0.99999,0.000493995,-0.00441496,4.174});
Transform816.setScale(new float[]{0.008663,0.008663,0.008663});
Transform816.setScaleOrientation(new float[]{0.999889,-0.0148998,0,0.7854});
PositionInterpolator& PositionInterpolator817 =  PositionInterpolator();
PositionInterpolator817.setDEF(CString("SharkDeath_explode05-POS-INTERP"));
PositionInterpolator817.setKey(new float[]{0,0.3867,0.4,0.4133}, 4);
PositionInterpolator817.setKeyValue(new float[]{0.04049,0.01028,-0.3648,0.04049,0.01028,-0.3648,-0.08023,0.5155,-0.3648,-0.201,1.021,-0.3648}, 12);
Transform816.addChild(&PositionInterpolator817);

Shape& Shape818 =  Shape();
Appearance& Appearance819 =  Appearance();
Material& Material820 =  Material();
Material820.setDiffuseColor(new float[]{0.2353,0.2353,0.2353});
Material820.setShininess(0.25);
Appearance819.addChild(&Material820);

Shape818.addChild(&Appearance819);

IndexedFaceSet& IndexedFaceSet821 =  IndexedFaceSet();
IndexedFaceSet821.setDEF(CString("SharkDeath_explode05-FACES"));
IndexedFaceSet821.setCoordIndex(new int32_t[]{0,1,2,-1}, 4);
Coordinate& Coordinate822 =  Coordinate();
Coordinate822.setDEF(CString("SharkDeath_explode05-COORD"));
Coordinate822.setPoint(new float[]{15.62,-19.32,-23.37,-16.02,-19.32,-23.37,-29.54,18.3,-33.92}, 9);
IndexedFaceSet821.setCoord(&Coordinate822);

Shape818.setGeometry(&IndexedFaceSet821);

Transform816.addChild(&Shape818);

Transform750.addChild(&Transform816);

Transform& Transform823 =  Transform();
Transform823.setDEF(CString("SharkDeath_explode06-ROOT"));
Transform823.setTranslation(new float[]{-0.02379,0.1379,-0.3297});
Transform823.setRotation(new float[]{-0.99999,0.000493995,-0.00441496,4.174});
Transform823.setScale(new float[]{0.006188,0.006188,0.006188});
Transform823.setScaleOrientation(new float[]{-0.176294,0.0335388,-0.983766,0.797});
PositionInterpolator& PositionInterpolator824 =  PositionInterpolator();
PositionInterpolator824.setDEF(CString("SharkDeath_explode06-POS-INTERP"));
PositionInterpolator824.setKey(new float[]{0,0.3867,0.4,0.4133}, 4);
PositionInterpolator824.setKeyValue(new float[]{-0.02379,0.1379,-0.3297,-0.02379,0.1379,-0.3297,0.2675,0.5166,-0.3297,0.5589,0.8954,-0.3297}, 12);
Transform823.addChild(&PositionInterpolator824);

Shape& Shape825 =  Shape();
Appearance& Appearance826 =  Appearance();
Material& Material827 =  Material();
Material827.setDiffuseColor(new float[]{0.2353,0.2353,0.2353});
Material827.setShininess(0.25);
Appearance826.addChild(&Material827);

Shape825.addChild(&Appearance826);

IndexedFaceSet& IndexedFaceSet828 =  IndexedFaceSet();
IndexedFaceSet828.setDEF(CString("SharkDeath_explode06-FACES"));
IndexedFaceSet828.setCoordIndex(new int32_t[]{0,2,1,-1}, 4);
Coordinate& Coordinate829 =  Coordinate();
Coordinate829.setDEF(CString("SharkDeath_explode06-COORD"));
Coordinate829.setPoint(new float[]{38.19,-45.09,-0.4825,59.07,11.28,0,29.53,18.3,-33.92}, 9);
IndexedFaceSet828.setCoord(&Coordinate829);

Shape825.setGeometry(&IndexedFaceSet828);

Transform823.addChild(&Shape825);

Transform750.addChild(&Transform823);

Transform& Transform830 =  Transform();
Transform830.setDEF(CString("SharkDeath_explode07-ROOT"));
Transform830.setTranslation(new float[]{0.006222,0.1048,-0.3297});
Transform830.setRotation(new float[]{-0.99999,0.000493995,-0.00441496,4.174});
Transform830.setScale(new float[]{0.006188,0.006188,0.006188});
Transform830.setScaleOrientation(new float[]{-0.176294,0.0335388,-0.983766,0.797});
PositionInterpolator& PositionInterpolator831 =  PositionInterpolator();
PositionInterpolator831.setDEF(CString("SharkDeath_explode07-POS-INTERP"));
PositionInterpolator831.setKey(new float[]{0,0.3867,0.4,0.4133}, 4);
PositionInterpolator831.setKeyValue(new float[]{0.006222,0.1048,-0.3297,0.006222,0.1048,-0.3297,0.3083,0.5231,-0.3297,0.6104,0.9414,-0.3297}, 12);
Transform830.addChild(&PositionInterpolator831);

Shape& Shape832 =  Shape();
Appearance& Appearance833 =  Appearance();
Material& Material834 =  Material();
Material834.setDiffuseColor(new float[]{0.2353,0.2353,0.2353});
Material834.setShininess(0.25);
Appearance833.addChild(&Material834);

Shape832.addChild(&Appearance833);

IndexedFaceSet& IndexedFaceSet835 =  IndexedFaceSet();
IndexedFaceSet835.setDEF(CString("SharkDeath_explode07-FACES"));
IndexedFaceSet835.setCoordIndex(new int32_t[]{0,2,1,-1}, 4);
Coordinate& Coordinate836 =  Coordinate();
Coordinate836.setDEF(CString("SharkDeath_explode07-COORD"));
Coordinate836.setPoint(new float[]{0,-89.63,0,38.19,-45.09,-0.4825,15.62,-19.32,-23.37}, 9);
IndexedFaceSet835.setCoord(&Coordinate836);

Shape832.setGeometry(&IndexedFaceSet835);

Transform830.addChild(&Shape832);

Transform750.addChild(&Transform830);

Transform& Transform837 =  Transform();
Transform837.setDEF(CString("SharkDeath_explode08-ROOT"));
Transform837.setTranslation(new float[]{-0.002922,0.1146,-0.3297});
Transform837.setRotation(new float[]{-0.99999,0.000493995,-0.00441496,4.174});
Transform837.setScale(new float[]{0.006188,0.006188,0.006188});
Transform837.setScaleOrientation(new float[]{-0.176294,0.0335388,-0.983766,0.797});
PositionInterpolator& PositionInterpolator838 =  PositionInterpolator();
PositionInterpolator838.setDEF(CString("SharkDeath_explode08-POS-INTERP"));
PositionInterpolator838.setKey(new float[]{0,0.3867,0.4,0.4133}, 4);
PositionInterpolator838.setKeyValue(new float[]{-0.002922,0.1146,-0.3297,-0.002922,0.1146,-0.3297,-0.2865,0.5781,-0.3297,-0.5701,1.042,-0.3297}, 12);
Transform837.addChild(&PositionInterpolator838);

Shape& Shape839 =  Shape();
Appearance& Appearance840 =  Appearance();
Material& Material841 =  Material();
Material841.setDiffuseColor(new float[]{0.2353,0.2353,0.2353});
Material841.setShininess(0.25);
Appearance840.addChild(&Material841);

Shape839.addChild(&Appearance840);

IndexedFaceSet& IndexedFaceSet842 =  IndexedFaceSet();
IndexedFaceSet842.setDEF(CString("SharkDeath_explode08-FACES"));
IndexedFaceSet842.setCoordIndex(new int32_t[]{0,2,1,-1}, 4);
Coordinate& Coordinate843 =  Coordinate();
Coordinate843.setDEF(CString("SharkDeath_explode08-COORD"));
Coordinate843.setPoint(new float[]{0,-89.63,0,-16.02,-19.32,-23.37,-37.67,-45.09,-0.4825}, 9);
IndexedFaceSet842.setCoord(&Coordinate843);

Shape839.setGeometry(&IndexedFaceSet842);

Transform837.addChild(&Shape839);

Transform750.addChild(&Transform837);

Transform& Transform844 =  Transform();
Transform844.setDEF(CString("SharkDeath_explode09-ROOT"));
Transform844.setTranslation(new float[]{-0.009646,0.1135,-0.3297});
Transform844.setRotation(new float[]{-0.99999,0.000493995,-0.00441496,4.174});
Transform844.setScale(new float[]{0.006188,0.006188,0.006188});
Transform844.setScaleOrientation(new float[]{-0.176294,0.0335388,-0.983766,0.797});
PositionInterpolator& PositionInterpolator845 =  PositionInterpolator();
PositionInterpolator845.setDEF(CString("SharkDeath_explode09-POS-INTERP"));
PositionInterpolator845.setKey(new float[]{0,0.3867,0.4,0.4133}, 4);
PositionInterpolator845.setKeyValue(new float[]{-0.009646,0.1135,-0.3297,-0.009646,0.1135,-0.3297,0.02514,0.574,-0.3297,0.05992,1.034,-0.3297}, 12);
Transform844.addChild(&PositionInterpolator845);

Shape& Shape846 =  Shape();
Appearance& Appearance847 =  Appearance();
Material& Material848 =  Material();
Material848.setDiffuseColor(new float[]{0.2353,0.2353,0.2353});
Material848.setShininess(0.25);
Appearance847.addChild(&Material848);

Shape846.addChild(&Appearance847);

IndexedFaceSet& IndexedFaceSet849 =  IndexedFaceSet();
IndexedFaceSet849.setDEF(CString("SharkDeath_explode09-FACES"));
IndexedFaceSet849.setCoordIndex(new int32_t[]{0,2,1,-1}, 4);
Coordinate& Coordinate850 =  Coordinate();
Coordinate850.setDEF(CString("SharkDeath_explode09-COORD"));
Coordinate850.setPoint(new float[]{0,-89.63,0,15.62,-19.32,-23.37,-16.02,-19.32,-23.37}, 9);
IndexedFaceSet849.setCoord(&Coordinate850);

Shape846.setGeometry(&IndexedFaceSet849);

Transform844.addChild(&Shape846);

Transform750.addChild(&Transform844);

Transform& Transform851 =  Transform();
Transform851.setDEF(CString("SharkDeath_explode10-ROOT"));
Transform851.setTranslation(new float[]{-0.01117,0.1097,-0.3297});
Transform851.setRotation(new float[]{-0.99999,0.000493995,-0.00441496,4.174});
Transform851.setScale(new float[]{0.006188,0.006188,0.006188});
Transform851.setScaleOrientation(new float[]{-0.176294,0.0335388,-0.983766,0.797});
PositionInterpolator& PositionInterpolator852 =  PositionInterpolator();
PositionInterpolator852.setDEF(CString("SharkDeath_explode10-POS-INTERP"));
PositionInterpolator852.setKey(new float[]{0,0.3867,0.4,0.4133}, 4);
PositionInterpolator852.setKeyValue(new float[]{-0.01117,0.1097,-0.3297,-0.01117,0.1097,-0.3297,-0.2838,0.4991,-0.3297,-0.5564,0.8885,-0.3297}, 12);
Transform851.addChild(&PositionInterpolator852);

Shape& Shape853 =  Shape();
Appearance& Appearance854 =  Appearance();
Material& Material855 =  Material();
Material855.setDiffuseColor(new float[]{0.2353,0.2353,0.2353});
Material855.setShininess(0.25);
Appearance854.addChild(&Material855);

Shape853.addChild(&Appearance854);

IndexedFaceSet& IndexedFaceSet856 =  IndexedFaceSet();
IndexedFaceSet856.setDEF(CString("SharkDeath_explode10-FACES"));
IndexedFaceSet856.setCoordIndex(new int32_t[]{0,1,2,-1}, 4);
Coordinate& Coordinate857 =  Coordinate();
Coordinate857.setDEF(CString("SharkDeath_explode10-COORD"));
Coordinate857.setPoint(new float[]{-16.02,-19.32,-23.37,-37.67,-45.09,-0.4825,-59.07,11.28,0}, 9);
IndexedFaceSet856.setCoord(&Coordinate857);

Shape853.setGeometry(&IndexedFaceSet856);

Transform851.addChild(&Shape853);

Transform750.addChild(&Transform851);

Transform& Transform858 =  Transform();
Transform858.setDEF(CString("SharkDeath_explode11-ROOT"));
Transform858.setTranslation(new float[]{0.01048,0.1126,-0.3297});
Transform858.setRotation(new float[]{-0.99999,0.000493995,-0.00441496,4.174});
Transform858.setScale(new float[]{0.006188,0.006188,0.006188});
Transform858.setScaleOrientation(new float[]{-0.176294,0.0335388,-0.983766,0.797});
PositionInterpolator& PositionInterpolator859 =  PositionInterpolator();
PositionInterpolator859.setDEF(CString("SharkDeath_explode11-POS-INTERP"));
PositionInterpolator859.setKey(new float[]{0,0.3867,0.4,0.4133}, 4);
PositionInterpolator859.setKeyValue(new float[]{0.01048,0.1126,-0.3297,0.01048,0.1126,-0.3297,0.3472,0.398,-0.3297,0.684,0.6834,-0.3297}, 12);
Transform858.addChild(&PositionInterpolator859);

Shape& Shape860 =  Shape();
Appearance& Appearance861 =  Appearance();
Material& Material862 =  Material();
Material862.setDiffuseColor(new float[]{0.2353,0.2353,0.2353});
Material862.setShininess(0.25);
Appearance861.addChild(&Material862);

Shape860.addChild(&Appearance861);

IndexedFaceSet& IndexedFaceSet863 =  IndexedFaceSet();
IndexedFaceSet863.setDEF(CString("SharkDeath_explode11-FACES"));
IndexedFaceSet863.setCoordIndex(new int32_t[]{0,1,2,-1}, 4);
Coordinate& Coordinate864 =  Coordinate();
Coordinate864.setDEF(CString("SharkDeath_explode11-COORD"));
Coordinate864.setPoint(new float[]{59.07,11.28,0,29.53,18.3,-33.92,34.67,186.3,-38.64}, 9);
IndexedFaceSet863.setCoord(&Coordinate864);

Shape860.setGeometry(&IndexedFaceSet863);

Transform858.addChild(&Shape860);

Transform750.addChild(&Transform858);

Group749.addChild(&Transform750);

Transform& Transform865 =  Transform();
Transform865.setDEF(CString("Inline_fishswim-ROOT"));
Transform865.setTranslation(new float[]{-0.02236,-0.6315,-0.8669});
Transform865.setRotation(new float[]{0,-0.965929,-0.258808,3.142});
Transform865.setScale(new float[]{0.1238,0.1238,0.1238});
Transform865.setScaleOrientation(new float[]{-0.240894,-0.763981,-0.598585,0.113899});
TimeSensor& TimeSensor866 =  TimeSensor();
TimeSensor866.setDEF(CString("Inline_fishswim-TIMER"));
TimeSensor866.setCycleInterval(15);
Transform865.addChild(&TimeSensor866);

PositionInterpolator& PositionInterpolator867 =  PositionInterpolator();
PositionInterpolator867.setDEF(CString("Inline_fishswim-POS-INTERP"));
PositionInterpolator867.setKey(new float[]{0,0.36,0.3733,0.3867,0.4,0.4133,0.4267,0.44,0.4533,0.4667,0.48,0.4933,0.5067,0.52,0.5333,0.5467,0.56,0.5733,0.5867,0.6,0.6133,0.6267,0.64,0.6533,0.6667,0.68,0.6933,0.7067,0.72,0.7333,0.7467,0.76,0.7733,0.7867,0.8,0.8133,0.8267,0.84,0.8533,0.8667,0.88,0.8933,0.9067,0.92,0.9333,0.9467,0.96,0.9733,0.9867,1}, 50);
PositionInterpolator867.setKeyValue(new float[]{-0.02236,-0.6315,-0.8669,-0.02236,-0.6315,-0.8669,-0.03172,-0.5782,-0.9776,-0.02413,-0.5193,-1.097,0.01141,-0.452,-1.231,0.04188,-0.3847,-1.364,0.01603,-0.3309,-1.47,-0.0004942,-0.2725,-1.589,0.0637,-0.1885,-1.783,0.1401,-0.1018,-1.967,0.1695,-0.03244,-2.04,0.1668,0.02534,-2.023,0.1427,0.07361,-1.948,0.1081,0.1145,-1.845,0.0737,0.1499,-1.748,0.05022,0.1822,-1.69,0.03484,0.2085,-1.666,0.01801,0.2257,-1.652,0.0003233,0.2354,-1.647,-0.01759,0.2388,-1.648,-0.03511,0.2373,-1.655,-0.05163,0.2322,-1.665,-0.06653,0.225,-1.677,-0.07919,0.217,-1.689,-0.089,0.2096,-1.7,-0.09534,0.2042,-1.707,-0.09759,0.2021,-1.71,-0.09414,0.2021,-1.708,-0.08552,0.2021,-1.704,-0.07431,0.2021,-1.698,-0.06311,0.2021,-1.692,-0.05449,0.2021,-1.687,-0.05104,0.2021,-1.685,-0.05356,0.1989,-1.679,-0.06107,0.1894,-1.661,-0.07347,0.1739,-1.63,-0.09068,0.1526,-1.589,-0.1126,0.1257,-1.537,-0.1391,0.09354,-1.475,-0.1702,0.05628,-1.404,-0.2057,0.01418,-1.323,-0.2456,-0.03252,-1.234,-0.2897,-0.08359,-1.137,-0.338,-0.1388,-1.032,-0.3903,-0.1979,-0.9198,-0.4467,-0.2606,-0.8014,-0.5069,-0.3268,-0.6769,-0.571,-0.3961,-0.547,-0.6387,-0.4684,-0.4121,-0.7101,-0.5434,-0.2727}, 150);
Transform865.addChild(&PositionInterpolator867);

OrientationInterpolator& OrientationInterpolator868 =  OrientationInterpolator();
OrientationInterpolator868.setDEF(CString("Inline_fishswim-ROT-INTERP"));
OrientationInterpolator868.setKey(new float[]{0,0.36,0.3733,0.3867,0.4,0.4133,0.4267,0.44,0.4533,0.4667,0.48,0.4933,0.5067,0.52,0.5333,0.5467,0.56,0.5733,0.5867,0.6,0.6133,0.6267,0.64,0.6533,0.6667,0.68,0.6933,0.7067,0.72,0.7333,0.7467,0.76,0.7733,0.7867,0.8,0.8133,0.8267,0.84,0.8533,0.8667,0.88,0.8933,0.9067,0.92,0.9333,0.9467,0.96,0.9733,0.9867,1}, 50);
OrientationInterpolator868.setKeyValue(new float[]{0,-0.965929,-0.258808,3.142,0,-0.965929,-0.258808,3.142,0.0044542,-0.851138,-0.524923,3.078,-0.0149201,0.678005,0.734906,3.353,-0.0268292,0.451886,0.891672,3.519,-0.0355304,0.173402,0.98421,3.637,-0.0370716,-0.141506,0.989243,3.658,-0.0299285,-0.454477,0.890255,3.562,-0.0161206,-0.720828,0.692927,3.37,0,-0.909965,0.414684,3.142,0.0261693,-0.883877,0.466988,2.783,0.0719675,-0.853571,0.515982,2.22,0.145901,-0.825508,0.545205,1.562,0.289898,-0.793695,0.534797,0.9193,0.648467,-0.662367,0.375181,0.4311,0.993662,-0.0487281,-0.101296,0.2808,0.864109,0.399904,-0.305603,0.3186,0.720988,0.57609,-0.385093,0.3746,0.646913,0.635612,-0.421308,0.4089,0.622901,0.644301,-0.443701,0.4159,0.634714,0.620613,-0.46041,0.4001,0.675089,0.566491,-0.472592,0.3693,0.737495,0.477996,-0.477096,0.3325,0.809589,0.354195,-0.468094,0.2985,0.871798,0.211199,-0.441999,0.274,0.90905,0.0905749,-0.406723,0.2608,0.923058,0.043598,-0.382183,0.2563,0.92601,0.0466705,-0.374604,0.2557,0.946623,0.0688317,-0.314908,0.2533,0.984594,0.113399,-0.133099,0.2547,0.993376,0.104397,0.0480188,0.2684,0.992771,0.0511185,0.108597,0.2792,0.992865,0.0235492,0.116896,0.2828,0.992866,0.0164294,0.118096,0.2837,0.992604,-0.00492202,0.1213,0.2863,0.991218,-0.0404507,0.125902,0.291,0.987349,-0.0897645,0.130707,0.2983,0.97923,-0.151805,0.134404,0.3088,0.965042,-0.22441,0.135406,0.3235,0.943302,-0.304301,0.1326,0.3434,0.913488,-0.386995,0.125598,0.3695,0.876874,-0.466886,0.114497,0.4026,0.83878,-0.534888,0.101698,0.4396,0.801628,-0.591221,0.0886031,0.4797,0.766688,-0.63749,0.0761388,0.5221,0.734643,-0.67534,0.0649238,0.5663,0.705725,-0.706325,0.055292,0.6115,0.679934,-0.731736,0.0474623,0.6573,0.657291,-0.75249,0.0415594,0.703,0.637514,-0.769517,0.0376609,0.7482}, 200);
Transform865.addChild(&OrientationInterpolator868);

Inline& Inline869 =  Inline();
Inline869.setUrl(new CString[]{CString("fishswim.x3d")}, 1);
Transform865.addChild(&Inline869);

Group749.addChild(&Transform865);

Transform& Transform870 =  Transform();
Transform870.setDEF(CString("burp-ROOT"));
Transform870.setTranslation(new float[]{-0.09553,-10.3051,-1.28});
Transform870.setRotation(new float[]{1,0,0,1.571});
TimeSensor& TimeSensor871 =  TimeSensor();
TimeSensor871.setDEF(CString("burp-TIMER"));
TimeSensor871.setCycleInterval(15);
Transform870.addChild(&TimeSensor871);

PositionInterpolator& PositionInterpolator872 =  PositionInterpolator();
PositionInterpolator872.setDEF(CString("burp-POS-INTERP"));
PositionInterpolator872.setKey(new float[]{0,0.01333,0.02667,0.04,0.05333,0.06667,0.08,0.09333,0.1067,0.12,0.1333,0.1467,0.16,0.1733,0.1867,0.2,0.2133,0.2267,0.24,0.2533,0.2667,0.28}, 22);
PositionInterpolator872.setKeyValue(new float[]{-0.09553,-10.3051,-1.28,-0.08801,-0.3051,-1.28,-0.0803,-0.2393,-1.28,-0.08052,-0.156,-1.28,-0.1039,-0.1078,-1.28,-0.1264,-0.06574,-1.28,-0.119,-0.01489,-1.28,-0.112,0.03499,-1.28,-0.1388,0.07693,-1.28,-0.1615,0.1175,-1.28,-0.1386,0.1606,-1.28,-0.1143,0.2069,-1.28,-0.1326,0.2585,-1.28,-0.1535,0.3143,-1.28,-0.1401,0.3757,-1.28,-0.1276,0.4379,-1.28,-0.1525,0.4961,-1.28,-0.1739,0.5516,-1.28,-0.1464,0.6022,-1.28,-0.1195,0.6542,-1.28,-0.1321,0.714,-1.28,-0.1712,0.7796,-1.28}, 66);
Transform870.addChild(&PositionInterpolator872);

Shape& Shape873 =  Shape();
Appearance& Appearance874 =  Appearance();
Material& Material875 =  Material();
Material875.setDiffuseColor(new float[]{0.4745,0.6784,0.7961});
Material875.setEmissiveColor(new float[]{0.1,0.1,0.1});
Material875.setShininess(0.25);
Appearance874.addChild(&Material875);

Shape873.addChild(&Appearance874);

IndexedFaceSet& IndexedFaceSet876 =  IndexedFaceSet();
IndexedFaceSet876.setDEF(CString("burp-FACES"));
IndexedFaceSet876.setCreaseAngle(3);
IndexedFaceSet876.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,1,-1}, 24);
Coordinate& Coordinate877 =  Coordinate();
Coordinate877.setDEF(CString("burp-COORD"));
Coordinate877.setPoint(new float[]{0,0.03649,0,0,0.002896,-0.01732,-0.015,0.002896,-0.00866,-0.015,0.002896,0.00866,0,0.002896,0.01732,0.015,0.002896,0.00866,0.015,0.002896,-0.00866}, 21);
IndexedFaceSet876.setCoord(&Coordinate877);

Shape873.setGeometry(&IndexedFaceSet876);

Transform870.addChild(&Shape873);

Group749.addChild(&Transform870);

Transform& Transform878 =  Transform();
Transform878.setDEF(CString("fish_burp-ROOT"));
Transform878.setTranslation(new float[]{-0.05316,1.028,-1.539});
Transform878.setRotation(new float[]{0.999799,0.01741,0.00989699,1.991});
Transform878.setScale(new float[]{1.24,1.24,1.24});
Transform878.setScaleOrientation(new float[]{0.358393,-0.0232395,0.933282,0.58});
TimeSensor& TimeSensor879 =  TimeSensor();
TimeSensor879.setDEF(CString("fish_burp-TIMER"));
TimeSensor879.setCycleInterval(15);
Transform878.addChild(&TimeSensor879);

PositionInterpolator& PositionInterpolator880 =  PositionInterpolator();
PositionInterpolator880.setDEF(CString("fish_burp-POS-INTERP"));
PositionInterpolator880.setKey(new float[]{0,0.7732,0.7733,0.7867,0.8,0.8133,0.8267,0.84,0.8533,0.8667,0.88,0.8933,0.9067,0.92,0.9333,0.9467,0.96,0.9733,0.9867,1}, 20);
PositionInterpolator880.setKeyValue(new float[]{-0.05316,1.028,-1.539,-0.05316,1.028,-1.539,-0.05316,0.1777,-1.539,-0.02811,0.2511,-1.539,-0.01774,0.3112,-1.539,-0.03321,0.3522,-1.539,-0.06465,0.3798,-1.539,-0.08247,0.4118,-1.539,-0.06718,0.4562,-1.539,-0.03827,0.5048,-1.539,-0.02458,0.5506,-1.539,-0.0474,0.5896,-1.539,-0.08545,0.6256,-1.539,-0.1037,0.6634,-1.539,-0.07577,0.7016,-1.539,-0.02804,0.7414,-1.539,-0.00471,0.7913,-1.539,-0.02052,0.8543,-1.539,-0.06074,0.9273,-1.539,-0.1254,1.01,-1.539}, 60);
Transform878.addChild(&PositionInterpolator880);

Shape& Shape881 =  Shape();
Appearance& Appearance882 =  Appearance();
Material& Material883 =  Material();
Material883.setDiffuseColor(new float[]{0.4745,0.6784,0.7961});
Material883.setEmissiveColor(new float[]{0.1,0.1,0.1});
Material883.setShininess(0.25);
Appearance882.addChild(&Material883);

Shape881.addChild(&Appearance882);

IndexedFaceSet& IndexedFaceSet884 =  IndexedFaceSet();
IndexedFaceSet884.setDEF(CString("fish_burp-FACES"));
IndexedFaceSet884.setCreaseAngle(3);
IndexedFaceSet884.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,1,-1}, 24);
Coordinate& Coordinate885 =  Coordinate();
Coordinate885.setDEF(CString("fish_burp-COORD"));
Coordinate885.setPoint(new float[]{0,0.03649,0,0,0.002896,-0.01732,-0.015,0.002896,-0.00866,-0.015,0.002896,0.00866,0,0.002896,0.01732,0.015,0.002896,0.00866,0.015,0.002896,-0.00866}, 21);
IndexedFaceSet884.setCoord(&Coordinate885);

Shape881.setGeometry(&IndexedFaceSet884);

Transform878.addChild(&Shape881);

Group749.addChild(&Transform878);

Transform& Transform886 =  Transform();
Transform886.setDEF(CString("fish_burp02-ROOT"));
Transform886.setTranslation(new float[]{-0.04055,1.031,-1.526});
Transform886.setRotation(new float[]{0.999799,0.01741,0.00989699,1.991});
Transform886.setScale(new float[]{0.6944,0.6944,0.6944});
Transform886.setScaleOrientation(new float[]{0.995277,0.089008,0.0387391,0.3357});
TimeSensor& TimeSensor887 =  TimeSensor();
TimeSensor887.setDEF(CString("fish_burp02-TIMER"));
TimeSensor887.setCycleInterval(15);
Transform886.addChild(&TimeSensor887);

PositionInterpolator& PositionInterpolator888 =  PositionInterpolator();
PositionInterpolator888.setDEF(CString("fish_burp02-POS-INTERP"));
PositionInterpolator888.setKey(new float[]{0,0.7867,0.7867,0.8,0.8133,0.8267,0.84,0.8533,0.8667,0.88,0.8933,0.9067,0.92,0.9333,0.9467,0.96,0.9733,0.9867,1}, 19);
PositionInterpolator888.setKeyValue(new float[]{-0.04055,1.031,-1.526,-0.04055,1.031,-1.526,-0.04185,0.1809,-1.526,-0.0155,0.2542,-1.526,-0.005125,0.3143,-1.526,-0.02059,0.3553,-1.526,-0.05204,0.383,-1.526,-0.06986,0.4149,-1.526,-0.05457,0.4593,-1.526,-0.02566,0.508,-1.526,-0.01197,0.5537,-1.526,-0.03479,0.5927,-1.526,-0.07284,0.6288,-1.526,-0.0911,0.6665,-1.526,-0.05885,0.6992,-1.526,-0.006807,0.7334,-1.526,0.007901,0.7945,-1.526,-0.03376,0.8907,-1.526,-0.1128,1.014,-1.526}, 57);
Transform886.addChild(&PositionInterpolator888);

Shape& Shape889 =  Shape();
Appearance& Appearance890 =  Appearance();
Material& Material891 =  Material();
Material891.setDiffuseColor(new float[]{0.4745,0.6784,0.7961});
Material891.setEmissiveColor(new float[]{0.1,0.1,0.1});
Material891.setShininess(0.25);
Appearance890.addChild(&Material891);

Shape889.addChild(&Appearance890);

IndexedFaceSet& IndexedFaceSet892 =  IndexedFaceSet();
IndexedFaceSet892.setDEF(CString("fish_burp02-FACES"));
IndexedFaceSet892.setCreaseAngle(3);
IndexedFaceSet892.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,1,-1}, 24);
Coordinate& Coordinate893 =  Coordinate();
Coordinate893.setDEF(CString("fish_burp02-COORD"));
Coordinate893.setPoint(new float[]{0,0.03649,0,0,0.002896,-0.01732,-0.015,0.002896,-0.00866,-0.015,0.002896,0.00866,0,0.002896,0.01732,0.015,0.002896,0.00866,0.015,0.002896,-0.00866}, 21);
IndexedFaceSet892.setCoord(&Coordinate893);

Shape889.setGeometry(&IndexedFaceSet892);

Transform886.addChild(&Shape889);

Group749.addChild(&Transform886);

Group639.addChild(&Group749);

Collision638.addChildren(&Group639);

Transform637.addChild(&Collision638);

Scene7.addChild(&Transform637);

ProximitySensor& ProximitySensor894 =  ProximitySensor();
ProximitySensor894.setDEF(CString("WorldProx"));
ProximitySensor894.setSize(new float[]{10000,10000,10000});
Scene7.addChild(&ProximitySensor894);

Script& Script895 =  Script();
Script895.setDEF(CString("SharkSwim"));
Script895.setMustEvaluate(True);
field& field896 =  field();
field896.setName(CString("position_changed"));
field896.setAccessType(CString("inputOnly"));
field896.setType(CString("SFVec3f"));
Script895.addChild(&field896);

field& field897 =  field();
field897.setName(CString("time"));
field897.setAccessType(CString("inputOnly"));
field897.setType(CString("SFFloat"));
Script895.addChild(&field897);

field& field898 =  field();
field898.setName(CString("eatingSeagull"));
field898.setAccessType(CString("inputOnly"));
field898.setType(CString("SFTime"));
Script895.addChild(&field898);

field& field899 =  field();
field899.setName(CString("eatingSittingSeagull"));
field899.setAccessType(CString("inputOnly"));
field899.setType(CString("SFTime"));
Script895.addChild(&field899);

field& field900 =  field();
field900.setName(CString("eatingFishSwim"));
field900.setAccessType(CString("inputOnly"));
field900.setType(CString("SFTime"));
Script895.addChild(&field900);

field& field901 =  field();
field901.setName(CString("eatingFish"));
field901.setAccessType(CString("inputOnly"));
field901.setType(CString("SFTime"));
Script895.addChild(&field901);

field& field902 =  field();
field902.setName(CString("eatingSurfer"));
field902.setAccessType(CString("inputOnly"));
field902.setType(CString("SFTime"));
Script895.addChild(&field902);

field& field903 =  field();
field903.setName(CString("eatingSurfer2"));
field903.setAccessType(CString("inputOnly"));
field903.setType(CString("SFTime"));
Script895.addChild(&field903);

field& field904 =  field();
field904.setName(CString("eatingTuber"));
field904.setAccessType(CString("inputOnly"));
field904.setType(CString("SFTime"));
Script895.addChild(&field904);

field& field905 =  field();
field905.setName(CString("eatingTuber2"));
field905.setAccessType(CString("inputOnly"));
field905.setType(CString("SFTime"));
Script895.addChild(&field905);

field& field906 =  field();
field906.setName(CString("doneEating"));
field906.setAccessType(CString("inputOnly"));
field906.setType(CString("SFBool"));
Script895.addChild(&field906);

field& field907 =  field();
field907.setName(CString("killObject"));
field907.setAccessType(CString("inputOnly"));
field907.setType(CString("SFBool"));
Script895.addChild(&field907);

field& field908 =  field();
field908.setName(CString("testEnd"));
field908.setAccessType(CString("inputOnly"));
field908.setType(CString("SFBool"));
Script895.addChild(&field908);

field& field909 =  field();
field909.setName(CString("animating"));
field909.setAccessType(CString("initializeOnly"));
field909.setType(CString("SFBool"));
Script895.addChild(&field909);

field& field910 =  field();
field910.setName(CString("eating"));
field910.setAccessType(CString("initializeOnly"));
field910.setType(CString("SFBool"));
Script895.addChild(&field910);

field& field911 =  field();
field911.setName(CString("position"));
field911.setAccessType(CString("initializeOnly"));
field911.setType(CString("SFVec3f"));
Script895.addChild(&field911);

field& field912 =  field();
field912.setName(CString("oldTime"));
field912.setAccessType(CString("initializeOnly"));
field912.setType(CString("SFFloat"));
field912.setValue(CString("0.601192"));
Script895.addChild(&field912);

field& field913 =  field();
field913.setName(CString("timeDelta"));
field913.setAccessType(CString("initializeOnly"));
field913.setType(CString("SFFloat"));
field913.setValue(CString("0.0121604"));
Script895.addChild(&field913);

field& field914 =  field();
field914.setName(CString("eatingWhichObject"));
field914.setAccessType(CString("initializeOnly"));
field914.setType(CString("SFInt32"));
Script895.addChild(&field914);

field& field915 =  field();
field915.setName(CString("numEatenObjects"));
field915.setAccessType(CString("initializeOnly"));
field915.setType(CString("SFInt32"));
Script895.addChild(&field915);

field& field916 =  field();
field916.setName(CString("seagullSwitcher"));
field916.setAccessType(CString("outputOnly"));
field916.setType(CString("SFInt32"));
Script895.addChild(&field916);

field& field917 =  field();
field917.setName(CString("sittingSeagullSwitcher"));
field917.setAccessType(CString("outputOnly"));
field917.setType(CString("SFInt32"));
Script895.addChild(&field917);

field& field918 =  field();
field918.setName(CString("fishSwimSwitcher"));
field918.setAccessType(CString("outputOnly"));
field918.setType(CString("SFInt32"));
Script895.addChild(&field918);

field& field919 =  field();
field919.setName(CString("fishSwitcher"));
field919.setAccessType(CString("outputOnly"));
field919.setType(CString("SFInt32"));
Script895.addChild(&field919);

field& field920 =  field();
field920.setName(CString("surferSwitcher"));
field920.setAccessType(CString("outputOnly"));
field920.setType(CString("SFInt32"));
Script895.addChild(&field920);

field& field921 =  field();
field921.setName(CString("surfer2Switcher"));
field921.setAccessType(CString("outputOnly"));
field921.setType(CString("SFInt32"));
Script895.addChild(&field921);

field& field922 =  field();
field922.setName(CString("tuberSwitcher"));
field922.setAccessType(CString("outputOnly"));
field922.setType(CString("SFInt32"));
Script895.addChild(&field922);

field& field923 =  field();
field923.setName(CString("tuber2Switcher"));
field923.setAccessType(CString("outputOnly"));
field923.setType(CString("SFInt32"));
Script895.addChild(&field923);

field& field924 =  field();
field924.setName(CString("animation_timer"));
field924.setAccessType(CString("outputOnly"));
field924.setType(CString("SFFloat"));
Script895.addChild(&field924);

field& field925 =  field();
field925.setName(CString("playChompSound"));
field925.setAccessType(CString("outputOnly"));
field925.setType(CString("SFTime"));
Script895.addChild(&field925);

field& field926 =  field();
field926.setName(CString("killTrigger"));
field926.setAccessType(CString("outputOnly"));
field926.setType(CString("SFInt32"));
Script895.addChild(&field926);


Script895.setSourceCode(CString("javascript:")+
_T("		function testEnd(input){")+
_T("			if (numEatenObjects == 8) {")+
_T("				killTrigger = 1;")+
_T("			}")+
_T("		}	")+
_T("		function doneEating(done){")+
_T("			if(done == FALSE){")+
_T("			 eating=FALSE;")+
_T("			}")+
_T("		}")+
_T("		function killObject(i, time) {")+
_T("			if (i==FALSE) {")+
_T("				playChompSound = time;")+
_T("				if (eatingWhichObject == 1) {numEatenObjects = numEatenObjects + 1; seagullSwitcher = -1; /*Browser.loadURL(new MFString('point.htm'), new MFString('target=score3'));Browser.loadURL(new MFString('chomp3.htm'), new MFString('target=helpertext'));*/return;}")+
_T("				if (eatingWhichObject == 2) {numEatenObjects = numEatenObjects + 1; sittingSeagullSwitcher = -1; /*Browser.loadURL(new MFString('point.htm'), new MFString('target=score1'));Browser.loadURL(new MFString('chomp1.htm'), new MFString('target=helpertext'));*/return;}")+
_T("				if (eatingWhichObject == 3) {numEatenObjects = numEatenObjects + 1; fishSwimSwitcher = -1; /*Browser.loadURL(new MFString('point.htm'), new MFString('target=score2'));Browser.loadURL(new MFString('chomp2.htm'), new MFString('target=helpertext'));*/return;}")+
_T("				if (eatingWhichObject == 4) {numEatenObjects = numEatenObjects + 1; fishSwitcher = -1; /*Browser.loadURL(new MFString('point.htm'), new MFString('target=score4'));Browser.loadURL(new MFString('chomp4.htm'), new MFString('target=helpertext'));*/return;}")+
_T("				if (eatingWhichObject == 5) {numEatenObjects = numEatenObjects + 1; surferSwitcher = -1; /*Browser.loadURL(new MFString('point.htm'), new MFString('target=score5'));Browser.loadURL(new MFString('chomp5.htm'), new MFString('target=helpertext'));*/return;}")+
_T("				if (eatingWhichObject == 6) {numEatenObjects = numEatenObjects + 1; surfer2Switcher = -1; /*Browser.loadURL(new MFString('point.htm'), new MFString('target=score7'));Browser.loadURL(new MFString('chomp7.htm'), new MFString('target=helpertext'));*/return;}				")+
_T("				if (eatingWhichObject == 7) {numEatenObjects = numEatenObjects + 1; tuberSwitcher = -1; /*Browser.loadURL(new MFString('point.htm'), new MFString('target=score6'));Browser.loadURL(new MFString('chomp6.htm'), new MFString('target=helpertext'));*/return;}")+
_T("				if (eatingWhichObject == 8) {numEatenObjects = numEatenObjects + 1; tuber2Switcher = -1; /*Browser.loadURL(new MFString('point.htm'), new MFString('target=score8'));Browser.loadURL(new MFString('chomp8.htm'), new MFString('target=helpertext'));*/return;}")+
_T("			}")+
_T("		}")+
_T("		function eatingSeagull() {")+
_T("			eatingWhichObject = 1;")+
_T("			eating = TRUE;")+
_T("		}")+
_T("		function eatingSittingSeagull() {")+
_T("			eatingWhichObject = 2;")+
_T("			eating = TRUE;")+
_T("		}")+
_T("		function eatingFishSwim() {")+
_T("			eatingWhichObject = 3;")+
_T("			eating = TRUE;")+
_T("		}")+
_T("		function eatingFish() {")+
_T("			eatingWhichObject = 4;")+
_T("			eating = TRUE;")+
_T("		}")+
_T("		function eatingSurfer() {")+
_T("			eatingWhichObject = 5;")+
_T("			eating = TRUE;")+
_T("		}")+
_T("		function eatingSurfer2() {")+
_T("			eatingWhichObject = 6;")+
_T("			eating = TRUE;")+
_T("		}")+
_T("		function eatingTuber() {")+
_T("			eatingWhichObject = 7;")+
_T("			eating = TRUE;")+
_T("		}")+
_T("		function eatingTuber2() {")+
_T("			eatingWhichObject = 8;")+
_T("			eating = TRUE;")+
_T("		}")+
_T("		function position_changed(pos, time) {")+
_T("			if (eating == FALSE) {")+
_T("				animating = TRUE;")+
_T("				animation_timer = (animation_timer + timeDelta) % 1.01;")+
_T("			}")+
_T("		}")+
_T("		function time(currentTime) {")+
_T("			timeDelta = currentTime - oldTime;")+
_T("			oldTime = currentTime;")+
_T("			if (timeDelta < 0.0){timeDelta += 1.0;}")+
_T("			if (animating == TRUE || eating == TRUE) {")+
_T("				animating = FALSE;")+
_T("				return;")+
_T("			}")+
_T("			if (animation_timer > .99) {")+
_T("				animation_timer = 1.0")+
_T("			} else {")+
_T("				animation_timer = animation_timer + (1.3 - animation_timer) * timeDelta;")+
_T("			}")+
_T("		}"));
Scene7.addChild(&Script895);

TimeSensor& TimeSensor927 =  TimeSensor();
TimeSensor927.setDEF(CString("FadeTimer"));
TimeSensor927.setCycleInterval(3);
Scene7.addChild(&TimeSensor927);

ScalarInterpolator& ScalarInterpolator928 =  ScalarInterpolator();
ScalarInterpolator928.setDEF(CString("FadeInterp"));
ScalarInterpolator928.setKey(new float[]{0,1}, 2);
ScalarInterpolator928.setKeyValue(new float[]{50,0.01}, 2);
Scene7.addChild(&ScalarInterpolator928);

ColorInterpolator& ColorInterpolator929 =  ColorInterpolator();
ColorInterpolator929.setDEF(CString("FadeColorInterp"));
ColorInterpolator929.setKey(new float[]{0,1}, 2);
ColorInterpolator929.setKeyValue(new float[]{0.007843,0.3922,0.6157,0,0,0}, 6);
Scene7.addChild(&ColorInterpolator929);

Script& Script930 =  Script();
Script930.setDEF(CString("TextDisplay"));
field& field931 =  field();
field931.setName(CString("endVisible"));
field931.setAccessType(CString("inputOnly"));
field931.setType(CString("SFTime"));
Script930.addChild(&field931);

field& field932 =  field();
field932.setName(CString("seagullVisible"));
field932.setAccessType(CString("inputOnly"));
field932.setType(CString("SFTime"));
Script930.addChild(&field932);

field& field933 =  field();
field933.setName(CString("sittingSeagullVisible"));
field933.setAccessType(CString("inputOnly"));
field933.setType(CString("SFTime"));
Script930.addChild(&field933);

field& field934 =  field();
field934.setName(CString("fishVisible"));
field934.setAccessType(CString("inputOnly"));
field934.setType(CString("SFTime"));
Script930.addChild(&field934);

field& field935 =  field();
field935.setName(CString("fishSwimVisible"));
field935.setAccessType(CString("inputOnly"));
field935.setType(CString("SFTime"));
Script930.addChild(&field935);

field& field936 =  field();
field936.setName(CString("surferVisible"));
field936.setAccessType(CString("inputOnly"));
field936.setType(CString("SFTime"));
Script930.addChild(&field936);

field& field937 =  field();
field937.setName(CString("surfer2Visible"));
field937.setAccessType(CString("inputOnly"));
field937.setType(CString("SFTime"));
Script930.addChild(&field937);

field& field938 =  field();
field938.setName(CString("tuberVisible"));
field938.setAccessType(CString("inputOnly"));
field938.setType(CString("SFTime"));
Script930.addChild(&field938);

field& field939 =  field();
field939.setName(CString("tuber2Visible"));
field939.setAccessType(CString("inputOnly"));
field939.setType(CString("SFTime"));
Script930.addChild(&field939);

field& field940 =  field();
field940.setName(CString("skeletonVisible"));
field940.setAccessType(CString("inputOnly"));
field940.setType(CString("SFTime"));
Script930.addChild(&field940);

field& field941 =  field();
field941.setName(CString("whichVisible"));
field941.setAccessType(CString("initializeOnly"));
field941.setType(CString("SFInt32"));
field941.setValue(CString("4"));
Script930.addChild(&field941);


Script930.setSourceCode(CString("javascript:")+
_T("		function endVisible() {")+
_T("			whichVisible = 0;")+
_T("		}")+
_T("		function skeletonVisible() {")+
_T("		if (whichVisible != 9) {")+
_T("			whichVisible = 9;")+
_T("			//Browser.loadURL(new MFString('text9.htm'), new MFString('target=helpertext'));")+
_T("		}")+
_T("		}")+
_T("		function seagullVisible() {")+
_T("		if (whichVisible != 1) {")+
_T("			whichVisible = 1;")+
_T("			//Browser.loadURL(new MFString('text3.htm'), new MFString('target=helpertext'));")+
_T("		}")+
_T("		}")+
_T("		function sittingSeagullVisible() {")+
_T("		if (whichVisible != 2) {")+
_T("			whichVisible = 2;")+
_T("			//Browser.loadURL(new MFString('text1.htm'), new MFString('target=helpertext'));")+
_T("		}")+
_T("		}")+
_T("		function fishVisible() {")+
_T("			if (whichVisible != 3) {")+
_T("			whichVisible = 3;")+
_T("			//Browser.loadURL(new MFString('text4.htm'), new MFString('target=helpertext'));")+
_T("			}")+
_T("		}")+
_T("		function fishSwimVisible() {")+
_T("		if (whichVisible != 4) {")+
_T("			whichVisible = 4;")+
_T("			//Browser.loadURL(new MFString('text2.htm'), new MFString('target=helpertext'));")+
_T("		}")+
_T("		}")+
_T("		function surferVisible() {")+
_T("		if (whichVisible != 5) {")+
_T("			whichVisible = 5;")+
_T("			//Browser.loadURL(new MFString('text5.htm'), new MFString('target=helpertext'));")+
_T("		}")+
_T("		}")+
_T("		function surfer2Visible() {")+
_T("		if (whichVisible != 6) {")+
_T("			whichVisible = 6;")+
_T("			//Browser.loadURL(new MFString('text7.htm'), new MFString('target=helpertext'));")+
_T("		}")+
_T("		}")+
_T("		function tuberVisible() {")+
_T("		if (whichVisible != 7) {")+
_T("			whichVisible = 7;")+
_T("			//Browser.loadURL(new MFString('text6.htm'), new MFString('target=helpertext'));")+
_T("		}")+
_T("		}")+
_T("		function tuber2Visible() {")+
_T("		if (whichVisible != 8) {")+
_T("			whichVisible = 8;")+
_T("			//Browser.loadURL(new MFString('text8.htm'), new MFString('target=helpertext'));")+
_T("		}}"));
Scene7.addChild(&Script930);

Script& Script942 =  Script();
Script942.setDEF(CString("BoomScript"));
field& field943 =  field();
field943.setName(CString("startBoom"));
field943.setAccessType(CString("inputOnly"));
field943.setType(CString("SFBool"));
Script942.addChild(&field943);

field& field944 =  field();
field944.setName(CString("playBoom"));
field944.setAccessType(CString("outputOnly"));
field944.setType(CString("SFTime"));
Script942.addChild(&field944);


Script942.setSourceCode(CString("javascript:")+
_T("		function startBoom(boom, time){")+
_T("			if (boom == FALSE) {")+
_T("				playBoom = time;")+
_T("			}")+
_T("		}"));
Scene7.addChild(&Script942);

Script& Script945 =  Script();
Script945.setDEF(CString("KillShark"));
Script945.setMustEvaluate(True);
field& field946 =  field();
field946.setName(CString("canyonEnd"));
field946.setAccessType(CString("inputOnly"));
field946.setType(CString("SFBool"));
Script945.addChild(&field946);

field& field947 =  field();
field947.setName(CString("Kill"));
field947.setAccessType(CString("inputOnly"));
field947.setType(CString("SFInt32"));
Script945.addChild(&field947);

field& field948 =  field();
field948.setName(CString("deathAnimation"));
field948.setAccessType(CString("inputOnly"));
field948.setType(CString("SFBool"));
Script945.addChild(&field948);

field& field949 =  field();
field949.setName(CString("inputSkyColor"));
field949.setAccessType(CString("inputOnly"));
field949.setType(CString("SFColor"));
Script945.addChild(&field949);

field& field950 =  field();
field950.setName(CString("fadeDone"));
field950.setAccessType(CString("inputOnly"));
field950.setType(CString("SFBool"));
Script945.addChild(&field950);

field& field951 =  field();
field951.setName(CString("fishBurp"));
field951.setAccessType(CString("inputOnly"));
field951.setType(CString("SFBool"));
Script945.addChild(&field951);

field& field952 =  field();
field952.setName(CString("readyToKill"));
field952.setAccessType(CString("initializeOnly"));
field952.setType(CString("SFInt32"));
Script945.addChild(&field952);

field& field953 =  field();
field953.setName(CString("beenToEnd"));
field953.setAccessType(CString("initializeOnly"));
field953.setType(CString("SFBool"));
field953.setValue(CString("true"));
Script945.addChild(&field953);

field& field954 =  field();
field954.setName(CString("startDeath"));
field954.setAccessType(CString("outputOnly"));
field954.setType(CString("SFTime"));
Script945.addChild(&field954);

field& field955 =  field();
field955.setName(CString("sharkSwitcher"));
field955.setAccessType(CString("outputOnly"));
field955.setType(CString("SFInt32"));
Script945.addChild(&field955);

field& field956 =  field();
field956.setName(CString("startFade"));
field956.setAccessType(CString("outputOnly"));
field956.setType(CString("SFTime"));
Script945.addChild(&field956);

field& field957 =  field();
field957.setName(CString("outputSkyColor"));
field957.setAccessType(CString("outputOnly"));
field957.setType(CString("MFColor"));
Script945.addChild(&field957);

field& field958 =  field();
field958.setName(CString("navInfoControl"));
field958.setAccessType(CString("outputOnly"));
field958.setType(CString("MFString"));
Script945.addChild(&field958);

field& field959 =  field();
field959.setName(CString("burp"));
field959.setAccessType(CString("outputOnly"));
field959.setType(CString("SFTime"));
Script945.addChild(&field959);


Script945.setSourceCode(CString("javascript:")+
_T("		function fishBurp(input, time) {")+
_T("			if(!input) {")+
_T("				burp = time;")+
_T("			}")+
_T("		}")+
_T("		function fadeDone(input) {")+
_T("			if (input == FALSE) {")+
_T("				//Browser.loadURL(new MFString('end.htm'), new MFString('target=_parent'));")+
_T("			}")+
_T("		}")+
_T("		function Kill(input, time) {")+
_T("			readyToKill = input;")+
_T("			if (beenToEnd == TRUE) {")+
_T("				//Browser.loadURL(new MFString('whoa.htm'), new MFString('target=helpertext'));")+
_T("				startDeath = time;")+
_T("				sharkSwitcher = 0;")+
_T("				navInfoControl[0] = 'NONE';")+
_T("			}")+
_T("		}")+
_T("		function canyonEnd(input, t) {")+
_T("			if (input == TRUE && readyToKill == 1) {")+
_T("				//Browser.loadURL(new MFString('whoa.htm'), new MFString('target=helpertext'));")+
_T("				startDeath = t;")+
_T("				sharkSwitcher = 0;")+
_T("				navInfoControl[0] = 'NONE';")+
_T("			} else {")+
_T("				//Browser.loadURL(new MFString('noend.htm'), new MFString('target=helpertext'));")+
_T("				beenToEnd = TRUE;")+
_T("			}")+
_T("		}")+
_T("		function deathAnimation(input, t) {")+
_T("			if (input == FALSE) {")+
_T("				startFade = t;")+
_T("				sharkSwitcher = -1;")+
_T("			}")+
_T("		}")+
_T("		function inputSkyColor(input) {")+
_T("			outputSkyColor[0] = input;")+
_T("		}"));
Scene7.addChild(&Script945);

Script& Script960 =  Script();
Script960.setDEF(CString("JumpToEnd"));
field& field961 =  field();
field961.setName(CString("eyeClick"));
field961.setAccessType(CString("inputOnly"));
field961.setType(CString("SFTime"));
Script960.addChild(&field961);

field& field962 =  field();
field962.setName(CString("eyeClick2"));
field962.setAccessType(CString("inputOnly"));
field962.setType(CString("SFTime"));
Script960.addChild(&field962);

field& field963 =  field();
field963.setName(CString("LClick"));
field963.setAccessType(CString("initializeOnly"));
field963.setType(CString("SFBool"));
Script960.addChild(&field963);

field& field964 =  field();
field964.setName(CString("RClick"));
field964.setAccessType(CString("initializeOnly"));
field964.setType(CString("SFBool"));
Script960.addChild(&field964);

field& field965 =  field();
field965.setName(CString("endGame"));
field965.setAccessType(CString("outputOnly"));
field965.setType(CString("SFInt32"));
Script960.addChild(&field965);

field& field966 =  field();
field966.setName(CString("endGame2"));
field966.setAccessType(CString("outputOnly"));
field966.setType(CString("SFBool"));
Script960.addChild(&field966);


Script960.setSourceCode(CString("javascript:")+
_T("		function eyeClick() {")+
_T("			if (LClick == TRUE) {")+
_T("				endGame = 1;")+
_T("				endGame2 = TRUE;")+
_T("			}				")+
_T("			RClick = TRUE;")+
_T("		}")+
_T("		function eyeClick2() {")+
_T("			if (RClick == TRUE) {")+
_T("				endGame = 1;")+
_T("				endGame2 = TRUE;")+
_T("			}				")+
_T("			LClick = TRUE;")+
_T("		}"));
Scene7.addChild(&Script960);

ROUTE& ROUTE967 =  ROUTE();
ROUTE967.setFromNode(CString("BubbleTimer"));
ROUTE967.setFromField(CString("fraction_changed"));
ROUTE967.setToNode(CString("BubbleScript"));
ROUTE967.setToField(CString("inputFraction"));
Scene7.addChild(&ROUTE967);

ROUTE& ROUTE968 =  ROUTE();
ROUTE968.setFromNode(CString("BubbleScript"));
ROUTE968.setFromField(CString("playSound"));
ROUTE968.setToNode(CString("bubbleSound"));
ROUTE968.setToField(CString("set_stopTime"));
Scene7.addChild(&ROUTE968);

ROUTE& ROUTE969 =  ROUTE();
ROUTE969.setFromNode(CString("BubbleScript"));
ROUTE969.setFromField(CString("playSound"));
ROUTE969.setToNode(CString("bubbleSound"));
ROUTE969.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE969);

ROUTE& ROUTE970 =  ROUTE();
ROUTE970.setFromNode(CString("BubbleScript"));
ROUTE970.setFromField(CString("playSound2"));
ROUTE970.setToNode(CString("bubbleSound2"));
ROUTE970.setToField(CString("set_stopTime"));
Scene7.addChild(&ROUTE970);

ROUTE& ROUTE971 =  ROUTE();
ROUTE971.setFromNode(CString("BubbleScript"));
ROUTE971.setFromField(CString("playSound2"));
ROUTE971.setToNode(CString("bubbleSound2"));
ROUTE971.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE971);

ROUTE& ROUTE972 =  ROUTE();
ROUTE972.setFromNode(CString("EatTimer"));
ROUTE972.setFromField(CString("startTime_changed"));
ROUTE972.setToNode(CString("KillTimer"));
ROUTE972.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE972);

ROUTE& ROUTE973 =  ROUTE();
ROUTE973.setFromNode(CString("EatSeagull"));
ROUTE973.setFromField(CString("isActive"));
ROUTE973.setToNode(CString("EatSeagull"));
ROUTE973.setToField(CString("set_enabled"));
Scene7.addChild(&ROUTE973);

ROUTE& ROUTE974 =  ROUTE();
ROUTE974.setFromNode(CString("TimeSensor_gullswim-TIMER"));
ROUTE974.setFromField(CString("fraction_changed"));
ROUTE974.setToNode(CString("Inline_Gullswim-POS-INTERP"));
ROUTE974.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE974);

ROUTE& ROUTE975 =  ROUTE();
ROUTE975.setFromNode(CString("TimeSensor_gullswim-TIMER"));
ROUTE975.setFromField(CString("fraction_changed"));
ROUTE975.setToNode(CString("Inline_Gullswim-ROT-INTERP"));
ROUTE975.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE975);

ROUTE& ROUTE976 =  ROUTE();
ROUTE976.setFromNode(CString("Inline_Gullswim-POS-INTERP"));
ROUTE976.setFromField(CString("value_changed"));
ROUTE976.setToNode(CString("Inline_Gullswim-ROOT"));
ROUTE976.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE976);

ROUTE& ROUTE977 =  ROUTE();
ROUTE977.setFromNode(CString("Inline_Gullswim-ROT-INTERP"));
ROUTE977.setFromField(CString("value_changed"));
ROUTE977.setToNode(CString("Inline_Gullswim-ROOT"));
ROUTE977.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE977);

ROUTE& ROUTE978 =  ROUTE();
ROUTE978.setFromNode(CString("EatFishSwim"));
ROUTE978.setFromField(CString("isActive"));
ROUTE978.setToNode(CString("EatFishSwim"));
ROUTE978.setToField(CString("set_enabled"));
Scene7.addChild(&ROUTE978);

ROUTE& ROUTE979 =  ROUTE();
ROUTE979.setFromNode(CString("TimeSensor_Fishswim-TIMER"));
ROUTE979.setFromField(CString("fraction_changed"));
ROUTE979.setToNode(CString("Inline_Fishswim-POS-INTERP"));
ROUTE979.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE979);

ROUTE& ROUTE980 =  ROUTE();
ROUTE980.setFromNode(CString("TimeSensor_Fishswim-TIMER"));
ROUTE980.setFromField(CString("fraction_changed"));
ROUTE980.setToNode(CString("Inline_Fishswim-ROT-INTERP"));
ROUTE980.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE980);

ROUTE& ROUTE981 =  ROUTE();
ROUTE981.setFromNode(CString("Inline_Fishswim-POS-INTERP"));
ROUTE981.setFromField(CString("value_changed"));
ROUTE981.setToNode(CString("Inline_Fishswim-ROOT"));
ROUTE981.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE981);

ROUTE& ROUTE982 =  ROUTE();
ROUTE982.setFromNode(CString("Inline_Fishswim-ROT-INTERP"));
ROUTE982.setFromField(CString("value_changed"));
ROUTE982.setToNode(CString("Inline_Fishswim-ROOT"));
ROUTE982.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE982);

ROUTE& ROUTE983 =  ROUTE();
ROUTE983.setFromNode(CString("Inline_Fishbott-POS-INTERP"));
ROUTE983.setFromField(CString("value_changed"));
ROUTE983.setToNode(CString("Inline_Fishbott-ROOT"));
ROUTE983.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE983);

ROUTE& ROUTE984 =  ROUTE();
ROUTE984.setFromNode(CString("TimeSensor_Fishbott-TIMER"));
ROUTE984.setFromField(CString("fraction_changed"));
ROUTE984.setToNode(CString("Inline_Fishbott-POS-INTERP"));
ROUTE984.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE984);

ROUTE& ROUTE985 =  ROUTE();
ROUTE985.setFromNode(CString("Inline_Fishbott-ROT-INTERP"));
ROUTE985.setFromField(CString("value_changed"));
ROUTE985.setToNode(CString("Inline_Fishbott-ROOT"));
ROUTE985.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE985);

ROUTE& ROUTE986 =  ROUTE();
ROUTE986.setFromNode(CString("TimeSensor_Fishbott-TIMER"));
ROUTE986.setFromField(CString("fraction_changed"));
ROUTE986.setToNode(CString("Inline_Fishbott-ROT-INTERP"));
ROUTE986.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE986);

ROUTE& ROUTE987 =  ROUTE();
ROUTE987.setFromNode(CString("EatSurfer"));
ROUTE987.setFromField(CString("isActive"));
ROUTE987.setToNode(CString("SurferCollide"));
ROUTE987.setToField(CString("beingEaten"));
Scene7.addChild(&ROUTE987);

ROUTE& ROUTE988 =  ROUTE();
ROUTE988.setFromNode(CString("SurferCollide"));
ROUTE988.setFromField(CString("avoidEnabled"));
ROUTE988.setToNode(CString("ScareSurfer"));
ROUTE988.setToField(CString("set_enabled"));
Scene7.addChild(&ROUTE988);

ROUTE& ROUTE989 =  ROUTE();
ROUTE989.setFromNode(CString("SurferCollide"));
ROUTE989.setFromField(CString("startFloating"));
ROUTE989.setToNode(CString("TimeSensor_SurferFloat-TIMER"));
ROUTE989.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE989);

ROUTE& ROUTE990 =  ROUTE();
ROUTE990.setFromNode(CString("SurferCollide"));
ROUTE990.setFromField(CString("stopFloating"));
ROUTE990.setToNode(CString("TimeSensor_SurferFloat-TIMER"));
ROUTE990.setToField(CString("set_stopTime"));
Scene7.addChild(&ROUTE990);

ROUTE& ROUTE991 =  ROUTE();
ROUTE991.setFromNode(CString("TimeSensor_SurferFloat-TIMER"));
ROUTE991.setFromField(CString("fraction_changed"));
ROUTE991.setToNode(CString("SurferFloat__Boolean-POS-INTERP"));
ROUTE991.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE991);

ROUTE& ROUTE992 =  ROUTE();
ROUTE992.setFromNode(CString("SurferFloat__Boolean-POS-INTERP"));
ROUTE992.setFromField(CString("value_changed"));
ROUTE992.setToNode(CString("Surfer__Boolean-ROOT"));
ROUTE992.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE992);

ROUTE& ROUTE993 =  ROUTE();
ROUTE993.setFromNode(CString("SurferAv_Board-POS-INTERP"));
ROUTE993.setFromField(CString("value_changed"));
ROUTE993.setToNode(CString("Surfer_Board-ROOT"));
ROUTE993.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE993);

ROUTE& ROUTE994 =  ROUTE();
ROUTE994.setFromNode(CString("SurferCollide"));
ROUTE994.setFromField(CString("outputFraction"));
ROUTE994.setToNode(CString("SurferAv_Board-POS-INTERP"));
ROUTE994.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE994);

ROUTE& ROUTE995 =  ROUTE();
ROUTE995.setFromNode(CString("SurferAv_Board-ROT-INTERP"));
ROUTE995.setFromField(CString("value_changed"));
ROUTE995.setToNode(CString("Surfer_Board-ROOT"));
ROUTE995.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE995);

ROUTE& ROUTE996 =  ROUTE();
ROUTE996.setFromNode(CString("SurferCollide"));
ROUTE996.setFromField(CString("outputFraction"));
ROUTE996.setToNode(CString("SurferAv_Board-ROT-INTERP"));
ROUTE996.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE996);

ROUTE& ROUTE997 =  ROUTE();
ROUTE997.setFromNode(CString("SurferAv_Leg_R-POS-INTERP"));
ROUTE997.setFromField(CString("value_changed"));
ROUTE997.setToNode(CString("Surfer_Leg_R-ROOT"));
ROUTE997.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE997);

ROUTE& ROUTE998 =  ROUTE();
ROUTE998.setFromNode(CString("SurferCollide"));
ROUTE998.setFromField(CString("outputFraction"));
ROUTE998.setToNode(CString("SurferAv_Leg_R-POS-INTERP"));
ROUTE998.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE998);

ROUTE& ROUTE999 =  ROUTE();
ROUTE999.setFromNode(CString("SurferAv_Leg_R-ROT-INTERP"));
ROUTE999.setFromField(CString("value_changed"));
ROUTE999.setToNode(CString("Surfer_Leg_R-ROOT"));
ROUTE999.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE999);

ROUTE& ROUTE1000 =  ROUTE();
ROUTE1000.setFromNode(CString("SurferCollide"));
ROUTE1000.setFromField(CString("outputFraction"));
ROUTE1000.setToNode(CString("SurferAv_Leg_R-ROT-INTERP"));
ROUTE1000.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1000);

ROUTE& ROUTE1001 =  ROUTE();
ROUTE1001.setFromNode(CString("SurferAv_Foot_R-POS-INTERP"));
ROUTE1001.setFromField(CString("value_changed"));
ROUTE1001.setToNode(CString("Surfer_Foot_R-ROOT"));
ROUTE1001.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE1001);

ROUTE& ROUTE1002 =  ROUTE();
ROUTE1002.setFromNode(CString("SurferCollide"));
ROUTE1002.setFromField(CString("outputFraction"));
ROUTE1002.setToNode(CString("SurferAv_Foot_R-POS-INTERP"));
ROUTE1002.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1002);

ROUTE& ROUTE1003 =  ROUTE();
ROUTE1003.setFromNode(CString("SurferAv_Foot_R-ROT-INTERP"));
ROUTE1003.setFromField(CString("value_changed"));
ROUTE1003.setToNode(CString("Surfer_Foot_R-ROOT"));
ROUTE1003.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE1003);

ROUTE& ROUTE1004 =  ROUTE();
ROUTE1004.setFromNode(CString("SurferCollide"));
ROUTE1004.setFromField(CString("outputFraction"));
ROUTE1004.setToNode(CString("SurferAv_Foot_R-ROT-INTERP"));
ROUTE1004.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1004);

ROUTE& ROUTE1005 =  ROUTE();
ROUTE1005.setFromNode(CString("SurferAv_R_Toe02-POS-INTERP"));
ROUTE1005.setFromField(CString("value_changed"));
ROUTE1005.setToNode(CString("Surfer_R_Toe02-ROOT"));
ROUTE1005.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE1005);

ROUTE& ROUTE1006 =  ROUTE();
ROUTE1006.setFromNode(CString("SurferCollide"));
ROUTE1006.setFromField(CString("outputFraction"));
ROUTE1006.setToNode(CString("SurferAv_R_Toe02-POS-INTERP"));
ROUTE1006.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1006);

ROUTE& ROUTE1007 =  ROUTE();
ROUTE1007.setFromNode(CString("SurferAv_R_Toe03-POS-INTERP"));
ROUTE1007.setFromField(CString("value_changed"));
ROUTE1007.setToNode(CString("Surfer_R_Toe03-ROOT"));
ROUTE1007.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE1007);

ROUTE& ROUTE1008 =  ROUTE();
ROUTE1008.setFromNode(CString("SurferCollide"));
ROUTE1008.setFromField(CString("outputFraction"));
ROUTE1008.setToNode(CString("SurferAv_R_Toe03-POS-INTERP"));
ROUTE1008.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1008);

ROUTE& ROUTE1009 =  ROUTE();
ROUTE1009.setFromNode(CString("SurferAv_R_Toe01-POS-INTERP"));
ROUTE1009.setFromField(CString("value_changed"));
ROUTE1009.setToNode(CString("Surfer_R_Toe01-ROOT"));
ROUTE1009.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE1009);

ROUTE& ROUTE1010 =  ROUTE();
ROUTE1010.setFromNode(CString("SurferCollide"));
ROUTE1010.setFromField(CString("outputFraction"));
ROUTE1010.setToNode(CString("SurferAv_R_Toe01-POS-INTERP"));
ROUTE1010.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1010);

ROUTE& ROUTE1011 =  ROUTE();
ROUTE1011.setFromNode(CString("SurferAv_Leg_L-POS-INTERP"));
ROUTE1011.setFromField(CString("value_changed"));
ROUTE1011.setToNode(CString("Surfer_Leg_L-ROOT"));
ROUTE1011.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE1011);

ROUTE& ROUTE1012 =  ROUTE();
ROUTE1012.setFromNode(CString("SurferCollide"));
ROUTE1012.setFromField(CString("outputFraction"));
ROUTE1012.setToNode(CString("SurferAv_Leg_L-POS-INTERP"));
ROUTE1012.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1012);

ROUTE& ROUTE1013 =  ROUTE();
ROUTE1013.setFromNode(CString("SurferAv_Leg_L-ROT-INTERP"));
ROUTE1013.setFromField(CString("value_changed"));
ROUTE1013.setToNode(CString("Surfer_Leg_L-ROOT"));
ROUTE1013.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE1013);

ROUTE& ROUTE1014 =  ROUTE();
ROUTE1014.setFromNode(CString("SurferCollide"));
ROUTE1014.setFromField(CString("outputFraction"));
ROUTE1014.setToNode(CString("SurferAv_Leg_L-ROT-INTERP"));
ROUTE1014.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1014);

ROUTE& ROUTE1015 =  ROUTE();
ROUTE1015.setFromNode(CString("SurferAv_Foot_L-POS-INTERP"));
ROUTE1015.setFromField(CString("value_changed"));
ROUTE1015.setToNode(CString("Surfer_Foot_L-ROOT"));
ROUTE1015.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE1015);

ROUTE& ROUTE1016 =  ROUTE();
ROUTE1016.setFromNode(CString("SurferCollide"));
ROUTE1016.setFromField(CString("outputFraction"));
ROUTE1016.setToNode(CString("SurferAv_Foot_L-POS-INTERP"));
ROUTE1016.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1016);

ROUTE& ROUTE1017 =  ROUTE();
ROUTE1017.setFromNode(CString("SurferAv_Foot_L-ROT-INTERP"));
ROUTE1017.setFromField(CString("value_changed"));
ROUTE1017.setToNode(CString("Surfer_Foot_L-ROOT"));
ROUTE1017.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE1017);

ROUTE& ROUTE1018 =  ROUTE();
ROUTE1018.setFromNode(CString("Surfer__Boolean-POS-INTERP"));
ROUTE1018.setFromField(CString("value_changed"));
ROUTE1018.setToNode(CString("Surfer__Boolean-ROOT"));
ROUTE1018.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE1018);

ROUTE& ROUTE1019 =  ROUTE();
ROUTE1019.setFromNode(CString("TimeSensor_Surfer-TIMER"));
ROUTE1019.setFromField(CString("fraction_changed"));
ROUTE1019.setToNode(CString("Surfer__Boolean-POS-INTERP"));
ROUTE1019.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1019);

ROUTE& ROUTE1020 =  ROUTE();
ROUTE1020.setFromNode(CString("Surfer_Leg_R-POS-INTERP"));
ROUTE1020.setFromField(CString("value_changed"));
ROUTE1020.setToNode(CString("Surfer_Leg_R-ROOT"));
ROUTE1020.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE1020);

ROUTE& ROUTE1021 =  ROUTE();
ROUTE1021.setFromNode(CString("TimeSensor_Surfer-TIMER"));
ROUTE1021.setFromField(CString("fraction_changed"));
ROUTE1021.setToNode(CString("Surfer_Leg_R-POS-INTERP"));
ROUTE1021.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1021);

ROUTE& ROUTE1022 =  ROUTE();
ROUTE1022.setFromNode(CString("Surfer_Leg_R-ROT-INTERP"));
ROUTE1022.setFromField(CString("value_changed"));
ROUTE1022.setToNode(CString("Surfer_Leg_R-ROOT"));
ROUTE1022.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE1022);

ROUTE& ROUTE1023 =  ROUTE();
ROUTE1023.setFromNode(CString("TimeSensor_Surfer-TIMER"));
ROUTE1023.setFromField(CString("fraction_changed"));
ROUTE1023.setToNode(CString("Surfer_Leg_R-ROT-INTERP"));
ROUTE1023.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1023);

ROUTE& ROUTE1024 =  ROUTE();
ROUTE1024.setFromNode(CString("Surfer_Heel_R-ROT-INTERP"));
ROUTE1024.setFromField(CString("value_changed"));
ROUTE1024.setToNode(CString("Surfer_Heel_R-ROOT"));
ROUTE1024.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE1024);

ROUTE& ROUTE1025 =  ROUTE();
ROUTE1025.setFromNode(CString("TimeSensor_Surfer-TIMER"));
ROUTE1025.setFromField(CString("fraction_changed"));
ROUTE1025.setToNode(CString("Surfer_Heel_R-ROT-INTERP"));
ROUTE1025.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1025);

ROUTE& ROUTE1026 =  ROUTE();
ROUTE1026.setFromNode(CString("Surfer_R_Toe01-ROT-INTERP"));
ROUTE1026.setFromField(CString("value_changed"));
ROUTE1026.setToNode(CString("Surfer_R_Toe01-ROOT"));
ROUTE1026.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE1026);

ROUTE& ROUTE1027 =  ROUTE();
ROUTE1027.setFromNode(CString("TimeSensor_Surfer-TIMER"));
ROUTE1027.setFromField(CString("fraction_changed"));
ROUTE1027.setToNode(CString("Surfer_R_Toe01-ROT-INTERP"));
ROUTE1027.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1027);

ROUTE& ROUTE1028 =  ROUTE();
ROUTE1028.setFromNode(CString("Surfer_R_Toe02-ROT-INTERP"));
ROUTE1028.setFromField(CString("value_changed"));
ROUTE1028.setToNode(CString("Surfer_R_Toe02-ROOT"));
ROUTE1028.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE1028);

ROUTE& ROUTE1029 =  ROUTE();
ROUTE1029.setFromNode(CString("TimeSensor_Surfer-TIMER"));
ROUTE1029.setFromField(CString("fraction_changed"));
ROUTE1029.setToNode(CString("Surfer_R_Toe02-ROT-INTERP"));
ROUTE1029.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1029);

ROUTE& ROUTE1030 =  ROUTE();
ROUTE1030.setFromNode(CString("Surfer_R_Toe03-ROT-INTERP"));
ROUTE1030.setFromField(CString("value_changed"));
ROUTE1030.setToNode(CString("Surfer_R_Toe03-ROOT"));
ROUTE1030.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE1030);

ROUTE& ROUTE1031 =  ROUTE();
ROUTE1031.setFromNode(CString("TimeSensor_Surfer-TIMER"));
ROUTE1031.setFromField(CString("fraction_changed"));
ROUTE1031.setToNode(CString("Surfer_R_Toe03-ROT-INTERP"));
ROUTE1031.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1031);

ROUTE& ROUTE1032 =  ROUTE();
ROUTE1032.setFromNode(CString("Surfer_Leg_L-ROT-INTERP"));
ROUTE1032.setFromField(CString("value_changed"));
ROUTE1032.setToNode(CString("Surfer_Leg_L-ROOT"));
ROUTE1032.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE1032);

ROUTE& ROUTE1033 =  ROUTE();
ROUTE1033.setFromNode(CString("TimeSensor_Surfer-TIMER"));
ROUTE1033.setFromField(CString("fraction_changed"));
ROUTE1033.setToNode(CString("Surfer_Leg_L-ROT-INTERP"));
ROUTE1033.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1033);

ROUTE& ROUTE1034 =  ROUTE();
ROUTE1034.setFromNode(CString("Surfer_Heel_L-ROT-INTERP"));
ROUTE1034.setFromField(CString("value_changed"));
ROUTE1034.setToNode(CString("Surfer_Heel_L-ROOT"));
ROUTE1034.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE1034);

ROUTE& ROUTE1035 =  ROUTE();
ROUTE1035.setFromNode(CString("TimeSensor_Surfer-TIMER"));
ROUTE1035.setFromField(CString("fraction_changed"));
ROUTE1035.setToNode(CString("Surfer_Heel_L-ROT-INTERP"));
ROUTE1035.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1035);

ROUTE& ROUTE1036 =  ROUTE();
ROUTE1036.setFromNode(CString("Surfer_L_Toe01-ROT-INTERP"));
ROUTE1036.setFromField(CString("value_changed"));
ROUTE1036.setToNode(CString("Surfer_L_Toe01-ROOT"));
ROUTE1036.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE1036);

ROUTE& ROUTE1037 =  ROUTE();
ROUTE1037.setFromNode(CString("TimeSensor_Surfer-TIMER"));
ROUTE1037.setFromField(CString("fraction_changed"));
ROUTE1037.setToNode(CString("Surfer_L_Toe01-ROT-INTERP"));
ROUTE1037.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1037);

ROUTE& ROUTE1038 =  ROUTE();
ROUTE1038.setFromNode(CString("Surfer_L_Toe02-ROT-INTERP"));
ROUTE1038.setFromField(CString("value_changed"));
ROUTE1038.setToNode(CString("Surfer_L_Toe02-ROOT"));
ROUTE1038.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE1038);

ROUTE& ROUTE1039 =  ROUTE();
ROUTE1039.setFromNode(CString("TimeSensor_Surfer-TIMER"));
ROUTE1039.setFromField(CString("fraction_changed"));
ROUTE1039.setToNode(CString("Surfer_L_Toe02-ROT-INTERP"));
ROUTE1039.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1039);

ROUTE& ROUTE1040 =  ROUTE();
ROUTE1040.setFromNode(CString("Surfer_L_Toe03-ROT-INTERP"));
ROUTE1040.setFromField(CString("value_changed"));
ROUTE1040.setToNode(CString("Surfer_L_Toe03-ROOT"));
ROUTE1040.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE1040);

ROUTE& ROUTE1041 =  ROUTE();
ROUTE1041.setFromNode(CString("TimeSensor_Surfer-TIMER"));
ROUTE1041.setFromField(CString("fraction_changed"));
ROUTE1041.setToNode(CString("Surfer_L_Toe03-ROT-INTERP"));
ROUTE1041.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1041);

ROUTE& ROUTE1042 =  ROUTE();
ROUTE1042.setFromNode(CString("SurferCollide"));
ROUTE1042.setFromField(CString("outputFraction"));
ROUTE1042.setToNode(CString("SurferAv_Foot_L-ROT-INTERP"));
ROUTE1042.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1042);

ROUTE& ROUTE1043 =  ROUTE();
ROUTE1043.setFromNode(CString("SurferCollide"));
ROUTE1043.setFromField(CString("eatEnabled"));
ROUTE1043.setToNode(CString("EatSurfer"));
ROUTE1043.setToField(CString("set_enabled"));
Scene7.addChild(&ROUTE1043);

ROUTE& ROUTE1044 =  ROUTE();
ROUTE1044.setFromNode(CString("ScareSurfer"));
ROUTE1044.setFromField(CString("enterTime"));
ROUTE1044.setToNode(CString("SurferCollide"));
ROUTE1044.setToField(CString("runAway"));
Scene7.addChild(&ROUTE1044);

ROUTE& ROUTE1045 =  ROUTE();
ROUTE1045.setFromNode(CString("ScareSurfer"));
ROUTE1045.setFromField(CString("exitTime"));
ROUTE1045.setToNode(CString("SurferCollide"));
ROUTE1045.setToField(CString("allSafe"));
Scene7.addChild(&ROUTE1045);

ROUTE& ROUTE1046 =  ROUTE();
ROUTE1046.setFromNode(CString("SurferCollide"));
ROUTE1046.setFromField(CString("startAnim"));
ROUTE1046.setToNode(CString("TimeSensor_Surfer_Av01-TIMER"));
ROUTE1046.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE1046);

ROUTE& ROUTE1047 =  ROUTE();
ROUTE1047.setFromNode(CString("SurferCollide"));
ROUTE1047.setFromField(CString("playOops"));
ROUTE1047.setToNode(CString("oopsSound"));
ROUTE1047.setToField(CString("set_stopTime"));
Scene7.addChild(&ROUTE1047);

ROUTE& ROUTE1048 =  ROUTE();
ROUTE1048.setFromNode(CString("SurferCollide"));
ROUTE1048.setFromField(CString("playOops"));
ROUTE1048.setToNode(CString("oopsSound"));
ROUTE1048.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE1048);

ROUTE& ROUTE1049 =  ROUTE();
ROUTE1049.setFromNode(CString("SurferCollide"));
ROUTE1049.setFromField(CString("stopAnimLoop"));
ROUTE1049.setToNode(CString("TimeSensor_Surfer-TIMER"));
ROUTE1049.setToField(CString("set_stopTime"));
Scene7.addChild(&ROUTE1049);

ROUTE& ROUTE1050 =  ROUTE();
ROUTE1050.setFromNode(CString("SurferCollide"));
ROUTE1050.setFromField(CString("startAnimLoop"));
ROUTE1050.setToNode(CString("TimeSensor_Surfer-TIMER"));
ROUTE1050.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE1050);

ROUTE& ROUTE1051 =  ROUTE();
ROUTE1051.setFromNode(CString("TimeSensor_Surfer_Av01-TIMER"));
ROUTE1051.setFromField(CString("fraction_changed"));
ROUTE1051.setToNode(CString("SurferCollide"));
ROUTE1051.setToField(CString("inputFraction"));
Scene7.addChild(&ROUTE1051);

ROUTE& ROUTE1052 =  ROUTE();
ROUTE1052.setFromNode(CString("EatSurfer2"));
ROUTE1052.setFromField(CString("isActive"));
ROUTE1052.setToNode(CString("Surfer2Collide"));
ROUTE1052.setToField(CString("beingEaten"));
Scene7.addChild(&ROUTE1052);

ROUTE& ROUTE1053 =  ROUTE();
ROUTE1053.setFromNode(CString("Surfer2Collide"));
ROUTE1053.setFromField(CString("avoidEnabled"));
ROUTE1053.setToNode(CString("ScareSurfer2"));
ROUTE1053.setToField(CString("set_enabled"));
Scene7.addChild(&ROUTE1053);

ROUTE& ROUTE1054 =  ROUTE();
ROUTE1054.setFromNode(CString("Surfer2Collide"));
ROUTE1054.setFromField(CString("startFloating"));
ROUTE1054.setToNode(CString("TimeSensor_Surfer2Float-TIMER"));
ROUTE1054.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE1054);

ROUTE& ROUTE1055 =  ROUTE();
ROUTE1055.setFromNode(CString("Surfer2Collide"));
ROUTE1055.setFromField(CString("stopFloating"));
ROUTE1055.setToNode(CString("TimeSensor_Surfer2Float-TIMER"));
ROUTE1055.setToField(CString("set_stopTime"));
Scene7.addChild(&ROUTE1055);

ROUTE& ROUTE1056 =  ROUTE();
ROUTE1056.setFromNode(CString("TimeSensor_Surfer2Float-TIMER"));
ROUTE1056.setFromField(CString("fraction_changed"));
ROUTE1056.setToNode(CString("Surfer2Float__Boolean-POS-INTERP"));
ROUTE1056.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1056);

ROUTE& ROUTE1057 =  ROUTE();
ROUTE1057.setFromNode(CString("Surfer2Float__Boolean-POS-INTERP"));
ROUTE1057.setFromField(CString("value_changed"));
ROUTE1057.setToNode(CString("Surfer2__Boolean-ROOT"));
ROUTE1057.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE1057);

ROUTE& ROUTE1058 =  ROUTE();
ROUTE1058.setFromNode(CString("Surfer2Av_Board-POS-INTERP"));
ROUTE1058.setFromField(CString("value_changed"));
ROUTE1058.setToNode(CString("Surfer2_Board-ROOT"));
ROUTE1058.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE1058);

ROUTE& ROUTE1059 =  ROUTE();
ROUTE1059.setFromNode(CString("Surfer2Collide"));
ROUTE1059.setFromField(CString("outputFraction"));
ROUTE1059.setToNode(CString("Surfer2Av_Board-POS-INTERP"));
ROUTE1059.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1059);

ROUTE& ROUTE1060 =  ROUTE();
ROUTE1060.setFromNode(CString("Surfer2Av_Board-ROT-INTERP"));
ROUTE1060.setFromField(CString("value_changed"));
ROUTE1060.setToNode(CString("Surfer2_Board-ROOT"));
ROUTE1060.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE1060);

ROUTE& ROUTE1061 =  ROUTE();
ROUTE1061.setFromNode(CString("Surfer2Collide"));
ROUTE1061.setFromField(CString("outputFraction"));
ROUTE1061.setToNode(CString("Surfer2Av_Board-ROT-INTERP"));
ROUTE1061.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1061);

ROUTE& ROUTE1062 =  ROUTE();
ROUTE1062.setFromNode(CString("Surfer2Av_Leg_R-POS-INTERP"));
ROUTE1062.setFromField(CString("value_changed"));
ROUTE1062.setToNode(CString("Surfer2_Leg_R-ROOT"));
ROUTE1062.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE1062);

ROUTE& ROUTE1063 =  ROUTE();
ROUTE1063.setFromNode(CString("Surfer2Collide"));
ROUTE1063.setFromField(CString("outputFraction"));
ROUTE1063.setToNode(CString("Surfer2Av_Leg_R-POS-INTERP"));
ROUTE1063.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1063);

ROUTE& ROUTE1064 =  ROUTE();
ROUTE1064.setFromNode(CString("Surfer2Av_Leg_R-ROT-INTERP"));
ROUTE1064.setFromField(CString("value_changed"));
ROUTE1064.setToNode(CString("Surfer2_Leg_R-ROOT"));
ROUTE1064.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE1064);

ROUTE& ROUTE1065 =  ROUTE();
ROUTE1065.setFromNode(CString("Surfer2Collide"));
ROUTE1065.setFromField(CString("outputFraction"));
ROUTE1065.setToNode(CString("Surfer2Av_Leg_R-ROT-INTERP"));
ROUTE1065.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1065);

ROUTE& ROUTE1066 =  ROUTE();
ROUTE1066.setFromNode(CString("Surfer2Av_Foot_R-POS-INTERP"));
ROUTE1066.setFromField(CString("value_changed"));
ROUTE1066.setToNode(CString("Surfer2_Foot_R-ROOT"));
ROUTE1066.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE1066);

ROUTE& ROUTE1067 =  ROUTE();
ROUTE1067.setFromNode(CString("Surfer2Collide"));
ROUTE1067.setFromField(CString("outputFraction"));
ROUTE1067.setToNode(CString("Surfer2Av_Foot_R-POS-INTERP"));
ROUTE1067.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1067);

ROUTE& ROUTE1068 =  ROUTE();
ROUTE1068.setFromNode(CString("Surfer2Av_Foot_R-ROT-INTERP"));
ROUTE1068.setFromField(CString("value_changed"));
ROUTE1068.setToNode(CString("Surfer2_Foot_R-ROOT"));
ROUTE1068.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE1068);

ROUTE& ROUTE1069 =  ROUTE();
ROUTE1069.setFromNode(CString("Surfer2Collide"));
ROUTE1069.setFromField(CString("outputFraction"));
ROUTE1069.setToNode(CString("Surfer2Av_Foot_R-ROT-INTERP"));
ROUTE1069.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1069);

ROUTE& ROUTE1070 =  ROUTE();
ROUTE1070.setFromNode(CString("Surfer2Av_R_Toe02-POS-INTERP"));
ROUTE1070.setFromField(CString("value_changed"));
ROUTE1070.setToNode(CString("Surfer2_R_Toe02-ROOT"));
ROUTE1070.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE1070);

ROUTE& ROUTE1071 =  ROUTE();
ROUTE1071.setFromNode(CString("Surfer2Collide"));
ROUTE1071.setFromField(CString("outputFraction"));
ROUTE1071.setToNode(CString("Surfer2Av_R_Toe02-POS-INTERP"));
ROUTE1071.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1071);

ROUTE& ROUTE1072 =  ROUTE();
ROUTE1072.setFromNode(CString("Surfer2Av_R_Toe03-POS-INTERP"));
ROUTE1072.setFromField(CString("value_changed"));
ROUTE1072.setToNode(CString("Surfer2_R_Toe03-ROOT"));
ROUTE1072.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE1072);

ROUTE& ROUTE1073 =  ROUTE();
ROUTE1073.setFromNode(CString("Surfer2Collide"));
ROUTE1073.setFromField(CString("outputFraction"));
ROUTE1073.setToNode(CString("Surfer2Av_R_Toe03-POS-INTERP"));
ROUTE1073.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1073);

ROUTE& ROUTE1074 =  ROUTE();
ROUTE1074.setFromNode(CString("Surfer2Av_R_Toe01-POS-INTERP"));
ROUTE1074.setFromField(CString("value_changed"));
ROUTE1074.setToNode(CString("Surfer2_R_Toe01-ROOT"));
ROUTE1074.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE1074);

ROUTE& ROUTE1075 =  ROUTE();
ROUTE1075.setFromNode(CString("Surfer2Collide"));
ROUTE1075.setFromField(CString("outputFraction"));
ROUTE1075.setToNode(CString("Surfer2Av_R_Toe01-POS-INTERP"));
ROUTE1075.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1075);

ROUTE& ROUTE1076 =  ROUTE();
ROUTE1076.setFromNode(CString("Surfer2Av_Leg_L-POS-INTERP"));
ROUTE1076.setFromField(CString("value_changed"));
ROUTE1076.setToNode(CString("Surfer2_Leg_L-ROOT"));
ROUTE1076.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE1076);

ROUTE& ROUTE1077 =  ROUTE();
ROUTE1077.setFromNode(CString("Surfer2Collide"));
ROUTE1077.setFromField(CString("outputFraction"));
ROUTE1077.setToNode(CString("Surfer2Av_Leg_L-POS-INTERP"));
ROUTE1077.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1077);

ROUTE& ROUTE1078 =  ROUTE();
ROUTE1078.setFromNode(CString("Surfer2Av_Leg_L-ROT-INTERP"));
ROUTE1078.setFromField(CString("value_changed"));
ROUTE1078.setToNode(CString("Surfer2_Leg_L-ROOT"));
ROUTE1078.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE1078);

ROUTE& ROUTE1079 =  ROUTE();
ROUTE1079.setFromNode(CString("Surfer2Collide"));
ROUTE1079.setFromField(CString("outputFraction"));
ROUTE1079.setToNode(CString("Surfer2Av_Leg_L-ROT-INTERP"));
ROUTE1079.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1079);

ROUTE& ROUTE1080 =  ROUTE();
ROUTE1080.setFromNode(CString("Surfer2Av_Foot_L-POS-INTERP"));
ROUTE1080.setFromField(CString("value_changed"));
ROUTE1080.setToNode(CString("Surfer2_Foot_L-ROOT"));
ROUTE1080.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE1080);

ROUTE& ROUTE1081 =  ROUTE();
ROUTE1081.setFromNode(CString("Surfer2Collide"));
ROUTE1081.setFromField(CString("outputFraction"));
ROUTE1081.setToNode(CString("Surfer2Av_Foot_L-POS-INTERP"));
ROUTE1081.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1081);

ROUTE& ROUTE1082 =  ROUTE();
ROUTE1082.setFromNode(CString("Surfer2Av_Foot_L-ROT-INTERP"));
ROUTE1082.setFromField(CString("value_changed"));
ROUTE1082.setToNode(CString("Surfer2_Foot_L-ROOT"));
ROUTE1082.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE1082);

ROUTE& ROUTE1083 =  ROUTE();
ROUTE1083.setFromNode(CString("Surfer2__Boolean-POS-INTERP"));
ROUTE1083.setFromField(CString("value_changed"));
ROUTE1083.setToNode(CString("Surfer2__Boolean-ROOT"));
ROUTE1083.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE1083);

ROUTE& ROUTE1084 =  ROUTE();
ROUTE1084.setFromNode(CString("TimeSensor_Surfer2-TIMER"));
ROUTE1084.setFromField(CString("fraction_changed"));
ROUTE1084.setToNode(CString("Surfer2__Boolean-POS-INTERP"));
ROUTE1084.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1084);

ROUTE& ROUTE1085 =  ROUTE();
ROUTE1085.setFromNode(CString("Surfer2_Leg_R-POS-INTERP"));
ROUTE1085.setFromField(CString("value_changed"));
ROUTE1085.setToNode(CString("Surfer2_Leg_R-ROOT"));
ROUTE1085.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE1085);

ROUTE& ROUTE1086 =  ROUTE();
ROUTE1086.setFromNode(CString("TimeSensor_Surfer2-TIMER"));
ROUTE1086.setFromField(CString("fraction_changed"));
ROUTE1086.setToNode(CString("Surfer2_Leg_R-POS-INTERP"));
ROUTE1086.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1086);

ROUTE& ROUTE1087 =  ROUTE();
ROUTE1087.setFromNode(CString("Surfer2_Leg_R-ROT-INTERP"));
ROUTE1087.setFromField(CString("value_changed"));
ROUTE1087.setToNode(CString("Surfer2_Leg_R-ROOT"));
ROUTE1087.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE1087);

ROUTE& ROUTE1088 =  ROUTE();
ROUTE1088.setFromNode(CString("TimeSensor_Surfer2-TIMER"));
ROUTE1088.setFromField(CString("fraction_changed"));
ROUTE1088.setToNode(CString("Surfer2_Leg_R-ROT-INTERP"));
ROUTE1088.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1088);

ROUTE& ROUTE1089 =  ROUTE();
ROUTE1089.setFromNode(CString("Surfer2_Heel_R-ROT-INTERP"));
ROUTE1089.setFromField(CString("value_changed"));
ROUTE1089.setToNode(CString("Surfer2_Heel_R-ROOT"));
ROUTE1089.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE1089);

ROUTE& ROUTE1090 =  ROUTE();
ROUTE1090.setFromNode(CString("TimeSensor_Surfer2-TIMER"));
ROUTE1090.setFromField(CString("fraction_changed"));
ROUTE1090.setToNode(CString("Surfer2_Heel_R-ROT-INTERP"));
ROUTE1090.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1090);

ROUTE& ROUTE1091 =  ROUTE();
ROUTE1091.setFromNode(CString("Surfer2_R_Toe01-ROT-INTERP"));
ROUTE1091.setFromField(CString("value_changed"));
ROUTE1091.setToNode(CString("Surfer2_R_Toe01-ROOT"));
ROUTE1091.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE1091);

ROUTE& ROUTE1092 =  ROUTE();
ROUTE1092.setFromNode(CString("TimeSensor_Surfer2-TIMER"));
ROUTE1092.setFromField(CString("fraction_changed"));
ROUTE1092.setToNode(CString("Surfer2_R_Toe01-ROT-INTERP"));
ROUTE1092.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1092);

ROUTE& ROUTE1093 =  ROUTE();
ROUTE1093.setFromNode(CString("Surfer2_R_Toe02-ROT-INTERP"));
ROUTE1093.setFromField(CString("value_changed"));
ROUTE1093.setToNode(CString("Surfer2_R_Toe02-ROOT"));
ROUTE1093.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE1093);

ROUTE& ROUTE1094 =  ROUTE();
ROUTE1094.setFromNode(CString("TimeSensor_Surfer2-TIMER"));
ROUTE1094.setFromField(CString("fraction_changed"));
ROUTE1094.setToNode(CString("Surfer2_R_Toe02-ROT-INTERP"));
ROUTE1094.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1094);

ROUTE& ROUTE1095 =  ROUTE();
ROUTE1095.setFromNode(CString("Surfer2_R_Toe03-ROT-INTERP"));
ROUTE1095.setFromField(CString("value_changed"));
ROUTE1095.setToNode(CString("Surfer2_R_Toe03-ROOT"));
ROUTE1095.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE1095);

ROUTE& ROUTE1096 =  ROUTE();
ROUTE1096.setFromNode(CString("TimeSensor_Surfer2-TIMER"));
ROUTE1096.setFromField(CString("fraction_changed"));
ROUTE1096.setToNode(CString("Surfer2_R_Toe03-ROT-INTERP"));
ROUTE1096.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1096);

ROUTE& ROUTE1097 =  ROUTE();
ROUTE1097.setFromNode(CString("Surfer2_Leg_L-ROT-INTERP"));
ROUTE1097.setFromField(CString("value_changed"));
ROUTE1097.setToNode(CString("Surfer2_Leg_L-ROOT"));
ROUTE1097.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE1097);

ROUTE& ROUTE1098 =  ROUTE();
ROUTE1098.setFromNode(CString("TimeSensor_Surfer2-TIMER"));
ROUTE1098.setFromField(CString("fraction_changed"));
ROUTE1098.setToNode(CString("Surfer2_Leg_L-ROT-INTERP"));
ROUTE1098.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1098);

ROUTE& ROUTE1099 =  ROUTE();
ROUTE1099.setFromNode(CString("Surfer2_Heel_L-ROT-INTERP"));
ROUTE1099.setFromField(CString("value_changed"));
ROUTE1099.setToNode(CString("Surfer2_Heel_L-ROOT"));
ROUTE1099.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE1099);

ROUTE& ROUTE1100 =  ROUTE();
ROUTE1100.setFromNode(CString("TimeSensor_Surfer2-TIMER"));
ROUTE1100.setFromField(CString("fraction_changed"));
ROUTE1100.setToNode(CString("Surfer2_Heel_L-ROT-INTERP"));
ROUTE1100.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1100);

ROUTE& ROUTE1101 =  ROUTE();
ROUTE1101.setFromNode(CString("Surfer2_L_Toe01-ROT-INTERP"));
ROUTE1101.setFromField(CString("value_changed"));
ROUTE1101.setToNode(CString("Surfer2_L_Toe01-ROOT"));
ROUTE1101.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE1101);

ROUTE& ROUTE1102 =  ROUTE();
ROUTE1102.setFromNode(CString("TimeSensor_Surfer2-TIMER"));
ROUTE1102.setFromField(CString("fraction_changed"));
ROUTE1102.setToNode(CString("Surfer2_L_Toe01-ROT-INTERP"));
ROUTE1102.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1102);

ROUTE& ROUTE1103 =  ROUTE();
ROUTE1103.setFromNode(CString("Surfer2_L_Toe02-ROT-INTERP"));
ROUTE1103.setFromField(CString("value_changed"));
ROUTE1103.setToNode(CString("Surfer2_L_Toe02-ROOT"));
ROUTE1103.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE1103);

ROUTE& ROUTE1104 =  ROUTE();
ROUTE1104.setFromNode(CString("TimeSensor_Surfer2-TIMER"));
ROUTE1104.setFromField(CString("fraction_changed"));
ROUTE1104.setToNode(CString("Surfer2_L_Toe02-ROT-INTERP"));
ROUTE1104.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1104);

ROUTE& ROUTE1105 =  ROUTE();
ROUTE1105.setFromNode(CString("Surfer2_L_Toe03-ROT-INTERP"));
ROUTE1105.setFromField(CString("value_changed"));
ROUTE1105.setToNode(CString("Surfer2_L_Toe03-ROOT"));
ROUTE1105.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE1105);

ROUTE& ROUTE1106 =  ROUTE();
ROUTE1106.setFromNode(CString("TimeSensor_Surfer2-TIMER"));
ROUTE1106.setFromField(CString("fraction_changed"));
ROUTE1106.setToNode(CString("Surfer2_L_Toe03-ROT-INTERP"));
ROUTE1106.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1106);

ROUTE& ROUTE1107 =  ROUTE();
ROUTE1107.setFromNode(CString("Surfer2Collide"));
ROUTE1107.setFromField(CString("outputFraction"));
ROUTE1107.setToNode(CString("Surfer2Av_Foot_L-ROT-INTERP"));
ROUTE1107.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1107);

ROUTE& ROUTE1108 =  ROUTE();
ROUTE1108.setFromNode(CString("Surfer2Collide"));
ROUTE1108.setFromField(CString("eatEnabled"));
ROUTE1108.setToNode(CString("EatSurfer2"));
ROUTE1108.setToField(CString("set_enabled"));
Scene7.addChild(&ROUTE1108);

ROUTE& ROUTE1109 =  ROUTE();
ROUTE1109.setFromNode(CString("ScareSurfer2"));
ROUTE1109.setFromField(CString("enterTime"));
ROUTE1109.setToNode(CString("Surfer2Collide"));
ROUTE1109.setToField(CString("runAway"));
Scene7.addChild(&ROUTE1109);

ROUTE& ROUTE1110 =  ROUTE();
ROUTE1110.setFromNode(CString("ScareSurfer2"));
ROUTE1110.setFromField(CString("exitTime"));
ROUTE1110.setToNode(CString("Surfer2Collide"));
ROUTE1110.setToField(CString("allSafe"));
Scene7.addChild(&ROUTE1110);

ROUTE& ROUTE1111 =  ROUTE();
ROUTE1111.setFromNode(CString("Surfer2Collide"));
ROUTE1111.setFromField(CString("startAnim"));
ROUTE1111.setToNode(CString("TimeSensor_Surfer2_Av01-TIMER"));
ROUTE1111.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE1111);

ROUTE& ROUTE1112 =  ROUTE();
ROUTE1112.setFromNode(CString("Surfer2Collide"));
ROUTE1112.setFromField(CString("playOops"));
ROUTE1112.setToNode(CString("oopsSound"));
ROUTE1112.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE1112);

ROUTE& ROUTE1113 =  ROUTE();
ROUTE1113.setFromNode(CString("Surfer2Collide"));
ROUTE1113.setFromField(CString("stopAnimLoop"));
ROUTE1113.setToNode(CString("TimeSensor_Surfer2-TIMER"));
ROUTE1113.setToField(CString("set_stopTime"));
Scene7.addChild(&ROUTE1113);

ROUTE& ROUTE1114 =  ROUTE();
ROUTE1114.setFromNode(CString("Surfer2Collide"));
ROUTE1114.setFromField(CString("startAnimLoop"));
ROUTE1114.setToNode(CString("TimeSensor_Surfer2-TIMER"));
ROUTE1114.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE1114);

ROUTE& ROUTE1115 =  ROUTE();
ROUTE1115.setFromNode(CString("TimeSensor_Surfer2_Av01-TIMER"));
ROUTE1115.setFromField(CString("fraction_changed"));
ROUTE1115.setToNode(CString("Surfer2Collide"));
ROUTE1115.setToField(CString("inputFraction"));
Scene7.addChild(&ROUTE1115);

ROUTE& ROUTE1116 =  ROUTE();
ROUTE1116.setFromNode(CString("TimeSensor_Innertube-TIMER"));
ROUTE1116.setFromField(CString("fraction_changed"));
ROUTE1116.setToNode(CString("Mapper"));
ROUTE1116.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1116);

ROUTE& ROUTE1117 =  ROUTE();
ROUTE1117.setFromNode(CString("TimeSensor_InnertubeFast-TIMER"));
ROUTE1117.setFromField(CString("fraction_changed"));
ROUTE1117.setToNode(CString("Mapper"));
ROUTE1117.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1117);

ROUTE& ROUTE1118 =  ROUTE();
ROUTE1118.setFromNode(CString("Innertube-ROT-INTERP"));
ROUTE1118.setFromField(CString("value_changed"));
ROUTE1118.setToNode(CString("Innertube-ROOT"));
ROUTE1118.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE1118);

ROUTE& ROUTE1119 =  ROUTE();
ROUTE1119.setFromNode(CString("Mapper"));
ROUTE1119.setFromField(CString("value_changed"));
ROUTE1119.setToNode(CString("Innertube-ROT-INTERP"));
ROUTE1119.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1119);

ROUTE& ROUTE1120 =  ROUTE();
ROUTE1120.setFromNode(CString("Innertube_L_leg-POS-INTERP"));
ROUTE1120.setFromField(CString("value_changed"));
ROUTE1120.setToNode(CString("Innertube_L_leg-ROOT"));
ROUTE1120.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE1120);

ROUTE& ROUTE1121 =  ROUTE();
ROUTE1121.setFromNode(CString("Mapper"));
ROUTE1121.setFromField(CString("value_changed"));
ROUTE1121.setToNode(CString("Innertube_L_leg-POS-INTERP"));
ROUTE1121.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1121);

ROUTE& ROUTE1122 =  ROUTE();
ROUTE1122.setFromNode(CString("Innertube_L_leg-ROT-INTERP"));
ROUTE1122.setFromField(CString("value_changed"));
ROUTE1122.setToNode(CString("Innertube_L_leg-ROOT"));
ROUTE1122.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE1122);

ROUTE& ROUTE1123 =  ROUTE();
ROUTE1123.setFromNode(CString("Mapper"));
ROUTE1123.setFromField(CString("value_changed"));
ROUTE1123.setToNode(CString("Innertube_L_leg-ROT-INTERP"));
ROUTE1123.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1123);

ROUTE& ROUTE1124 =  ROUTE();
ROUTE1124.setFromNode(CString("Innertube_L_flipper-POS-INTERP"));
ROUTE1124.setFromField(CString("value_changed"));
ROUTE1124.setToNode(CString("Innertube_L_flipper-ROOT"));
ROUTE1124.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE1124);

ROUTE& ROUTE1125 =  ROUTE();
ROUTE1125.setFromNode(CString("Mapper"));
ROUTE1125.setFromField(CString("value_changed"));
ROUTE1125.setToNode(CString("Innertube_L_flipper-POS-INTERP"));
ROUTE1125.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1125);

ROUTE& ROUTE1126 =  ROUTE();
ROUTE1126.setFromNode(CString("Innertube_L_flipper-ROT-INTERP"));
ROUTE1126.setFromField(CString("value_changed"));
ROUTE1126.setToNode(CString("Innertube_L_flipper-ROOT"));
ROUTE1126.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE1126);

ROUTE& ROUTE1127 =  ROUTE();
ROUTE1127.setFromNode(CString("Mapper"));
ROUTE1127.setFromField(CString("value_changed"));
ROUTE1127.setToNode(CString("Innertube_L_flipper-ROT-INTERP"));
ROUTE1127.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1127);

ROUTE& ROUTE1128 =  ROUTE();
ROUTE1128.setFromNode(CString("Innertube_R_leg-POS-INTERP"));
ROUTE1128.setFromField(CString("value_changed"));
ROUTE1128.setToNode(CString("Innertube_R_leg-ROOT"));
ROUTE1128.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE1128);

ROUTE& ROUTE1129 =  ROUTE();
ROUTE1129.setFromNode(CString("Mapper"));
ROUTE1129.setFromField(CString("value_changed"));
ROUTE1129.setToNode(CString("Innertube_R_leg-POS-INTERP"));
ROUTE1129.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1129);

ROUTE& ROUTE1130 =  ROUTE();
ROUTE1130.setFromNode(CString("Innertube_R_leg-ROT-INTERP"));
ROUTE1130.setFromField(CString("value_changed"));
ROUTE1130.setToNode(CString("Innertube_R_leg-ROOT"));
ROUTE1130.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE1130);

ROUTE& ROUTE1131 =  ROUTE();
ROUTE1131.setFromNode(CString("Mapper"));
ROUTE1131.setFromField(CString("value_changed"));
ROUTE1131.setToNode(CString("Innertube_R_leg-ROT-INTERP"));
ROUTE1131.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1131);

ROUTE& ROUTE1132 =  ROUTE();
ROUTE1132.setFromNode(CString("Innertube_R_flipper-POS-INTERP"));
ROUTE1132.setFromField(CString("value_changed"));
ROUTE1132.setToNode(CString("Innertube_R_flipper-ROOT"));
ROUTE1132.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE1132);

ROUTE& ROUTE1133 =  ROUTE();
ROUTE1133.setFromNode(CString("Mapper"));
ROUTE1133.setFromField(CString("value_changed"));
ROUTE1133.setToNode(CString("Innertube_R_flipper-POS-INTERP"));
ROUTE1133.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1133);

ROUTE& ROUTE1134 =  ROUTE();
ROUTE1134.setFromNode(CString("Innertube_R_flipper-ROT-INTERP"));
ROUTE1134.setFromField(CString("value_changed"));
ROUTE1134.setToNode(CString("Innertube_R_flipper-ROOT"));
ROUTE1134.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE1134);

ROUTE& ROUTE1135 =  ROUTE();
ROUTE1135.setFromNode(CString("Mapper"));
ROUTE1135.setFromField(CString("value_changed"));
ROUTE1135.setToNode(CString("Innertube_R_flipper-ROT-INTERP"));
ROUTE1135.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1135);

ROUTE& ROUTE1136 =  ROUTE();
ROUTE1136.setFromNode(CString("Innertube_Dummy-ROT-INTERP"));
ROUTE1136.setFromField(CString("value_changed"));
ROUTE1136.setToNode(CString("Innertube_Dummy-ROOT"));
ROUTE1136.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE1136);

ROUTE& ROUTE1137 =  ROUTE();
ROUTE1137.setFromNode(CString("Mapper"));
ROUTE1137.setFromField(CString("value_changed"));
ROUTE1137.setToNode(CString("Innertube_Dummy-ROT-INTERP"));
ROUTE1137.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1137);

ROUTE& ROUTE1138 =  ROUTE();
ROUTE1138.setFromNode(CString("Innertube_L_butt-ROT-INTERP"));
ROUTE1138.setFromField(CString("value_changed"));
ROUTE1138.setToNode(CString("Innertube_L_butt-ROOT"));
ROUTE1138.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE1138);

ROUTE& ROUTE1139 =  ROUTE();
ROUTE1139.setFromNode(CString("Mapper"));
ROUTE1139.setFromField(CString("value_changed"));
ROUTE1139.setToNode(CString("Innertube_L_butt-ROT-INTERP"));
ROUTE1139.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1139);

ROUTE& ROUTE1140 =  ROUTE();
ROUTE1140.setFromNode(CString("TubeCollide"));
ROUTE1140.setFromField(CString("kickStart"));
ROUTE1140.setToNode(CString("TimeSensor_Innertube-TIMER"));
ROUTE1140.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE1140);

ROUTE& ROUTE1141 =  ROUTE();
ROUTE1141.setFromNode(CString("TubeCollide"));
ROUTE1141.setFromField(CString("kickSlower"));
ROUTE1141.setToNode(CString("TimeSensor_Innertube-TIMER"));
ROUTE1141.setToField(CString("set_enabled"));
Scene7.addChild(&ROUTE1141);

ROUTE& ROUTE1142 =  ROUTE();
ROUTE1142.setFromNode(CString("TubeCollide"));
ROUTE1142.setFromField(CString("kickFaster"));
ROUTE1142.setToNode(CString("TimeSensor_InnertubeFast-TIMER"));
ROUTE1142.setToField(CString("set_enabled"));
Scene7.addChild(&ROUTE1142);

ROUTE& ROUTE1143 =  ROUTE();
ROUTE1143.setFromNode(CString("TubeCollide"));
ROUTE1143.setFromField(CString("enableRun"));
ROUTE1143.setToNode(CString("ScareTuber"));
ROUTE1143.setToField(CString("set_enabled"));
Scene7.addChild(&ROUTE1143);

ROUTE& ROUTE1144 =  ROUTE();
ROUTE1144.setFromNode(CString("EatTuber"));
ROUTE1144.setFromField(CString("isActive"));
ROUTE1144.setToNode(CString("TubeCollide"));
ROUTE1144.setToField(CString("beingEaten"));
Scene7.addChild(&ROUTE1144);

ROUTE& ROUTE1145 =  ROUTE();
ROUTE1145.setFromNode(CString("ScareTuber"));
ROUTE1145.setFromField(CString("enterTime"));
ROUTE1145.setToNode(CString("TubeCollide"));
ROUTE1145.setToField(CString("runAway"));
Scene7.addChild(&ROUTE1145);

ROUTE& ROUTE1146 =  ROUTE();
ROUTE1146.setFromNode(CString("TubeCollide"));
ROUTE1146.setFromField(CString("enableHit"));
ROUTE1146.setToNode(CString("EatTuber"));
ROUTE1146.setToField(CString("set_enabled"));
Scene7.addChild(&ROUTE1146);

ROUTE& ROUTE1147 =  ROUTE();
ROUTE1147.setFromNode(CString("TubeCollide"));
ROUTE1147.setFromField(CString("tubeRun"));
ROUTE1147.setToNode(CString("TuberRun"));
ROUTE1147.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE1147);

ROUTE& ROUTE1148 =  ROUTE();
ROUTE1148.setFromNode(CString("TubeCollide"));
ROUTE1148.setFromField(CString("tubeRun2"));
ROUTE1148.setToNode(CString("TuberRun2"));
ROUTE1148.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE1148);

ROUTE& ROUTE1149 =  ROUTE();
ROUTE1149.setFromNode(CString("TubeCollide"));
ROUTE1149.setFromField(CString("tubeRun"));
ROUTE1149.setToNode(CString("oopsSound"));
ROUTE1149.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE1149);

ROUTE& ROUTE1150 =  ROUTE();
ROUTE1150.setFromNode(CString("TubeCollide"));
ROUTE1150.setFromField(CString("tubeRun2"));
ROUTE1150.setToNode(CString("oopsSound"));
ROUTE1150.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE1150);

ROUTE& ROUTE1151 =  ROUTE();
ROUTE1151.setFromNode(CString("TuberRun"));
ROUTE1151.setFromField(CString("isActive"));
ROUTE1151.setToNode(CString("TubeCollide"));
ROUTE1151.setToField(CString("finishedRunning"));
Scene7.addChild(&ROUTE1151);

ROUTE& ROUTE1152 =  ROUTE();
ROUTE1152.setFromNode(CString("TuberRun2"));
ROUTE1152.setFromField(CString("isActive"));
ROUTE1152.setToNode(CString("TubeCollide"));
ROUTE1152.setToField(CString("finishedRunning2"));
Scene7.addChild(&ROUTE1152);

ROUTE& ROUTE1153 =  ROUTE();
ROUTE1153.setFromNode(CString("TuberRun"));
ROUTE1153.setFromField(CString("fraction_changed"));
ROUTE1153.setToNode(CString("Inline_Tube01_avoid01-POS-INTERP"));
ROUTE1153.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1153);

ROUTE& ROUTE1154 =  ROUTE();
ROUTE1154.setFromNode(CString("TuberRun"));
ROUTE1154.setFromField(CString("fraction_changed"));
ROUTE1154.setToNode(CString("Inline_Tube01_avoid01-ROT-INTERP"));
ROUTE1154.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1154);

ROUTE& ROUTE1155 =  ROUTE();
ROUTE1155.setFromNode(CString("TuberRun2"));
ROUTE1155.setFromField(CString("fraction_changed"));
ROUTE1155.setToNode(CString("Inline_Tube01_avoid02-POS-INTERP"));
ROUTE1155.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1155);

ROUTE& ROUTE1156 =  ROUTE();
ROUTE1156.setFromNode(CString("TuberRun2"));
ROUTE1156.setFromField(CString("fraction_changed"));
ROUTE1156.setToNode(CString("Inline_Tube01_avoid02-ROT-INTERP"));
ROUTE1156.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1156);

ROUTE& ROUTE1157 =  ROUTE();
ROUTE1157.setFromNode(CString("Inline_Tube01_avoid01-POS-INTERP"));
ROUTE1157.setFromField(CString("value_changed"));
ROUTE1157.setToNode(CString("Inline_Tube01-ROOT"));
ROUTE1157.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE1157);

ROUTE& ROUTE1158 =  ROUTE();
ROUTE1158.setFromNode(CString("Inline_Tube01_avoid01-ROT-INTERP"));
ROUTE1158.setFromField(CString("value_changed"));
ROUTE1158.setToNode(CString("Inline_Tube01-ROOT"));
ROUTE1158.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE1158);

ROUTE& ROUTE1159 =  ROUTE();
ROUTE1159.setFromNode(CString("Inline_Tube01_avoid02-POS-INTERP"));
ROUTE1159.setFromField(CString("value_changed"));
ROUTE1159.setToNode(CString("Inline_Tube01-ROOT"));
ROUTE1159.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE1159);

ROUTE& ROUTE1160 =  ROUTE();
ROUTE1160.setFromNode(CString("Inline_Tube01_avoid02-ROT-INTERP"));
ROUTE1160.setFromField(CString("value_changed"));
ROUTE1160.setToNode(CString("Inline_Tube01-ROOT"));
ROUTE1160.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE1160);

ROUTE& ROUTE1161 =  ROUTE();
ROUTE1161.setFromNode(CString("Inline_Tube01_avoid01-POS-INTERP"));
ROUTE1161.setFromField(CString("value_changed"));
ROUTE1161.setToNode(CString("TuberCollisionMover"));
ROUTE1161.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE1161);

ROUTE& ROUTE1162 =  ROUTE();
ROUTE1162.setFromNode(CString("Inline_Tube01_avoid02-POS-INTERP"));
ROUTE1162.setFromField(CString("value_changed"));
ROUTE1162.setToNode(CString("TuberCollisionMover"));
ROUTE1162.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE1162);

ROUTE& ROUTE1163 =  ROUTE();
ROUTE1163.setFromNode(CString("TubeCollide2"));
ROUTE1163.setFromField(CString("enableRun"));
ROUTE1163.setToNode(CString("ScareTuber2"));
ROUTE1163.setToField(CString("set_enabled"));
Scene7.addChild(&ROUTE1163);

ROUTE& ROUTE1164 =  ROUTE();
ROUTE1164.setFromNode(CString("TubeCollide2"));
ROUTE1164.setFromField(CString("kickStart"));
ROUTE1164.setToNode(CString("TimeSensor_Innertube-TIMER"));
ROUTE1164.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE1164);

ROUTE& ROUTE1165 =  ROUTE();
ROUTE1165.setFromNode(CString("TubeCollide2"));
ROUTE1165.setFromField(CString("kickSlower"));
ROUTE1165.setToNode(CString("TimeSensor_Innertube-TIMER"));
ROUTE1165.setToField(CString("set_enabled"));
Scene7.addChild(&ROUTE1165);

ROUTE& ROUTE1166 =  ROUTE();
ROUTE1166.setFromNode(CString("TubeCollide2"));
ROUTE1166.setFromField(CString("kickFaster"));
ROUTE1166.setToNode(CString("TimeSensor_InnertubeFast-TIMER"));
ROUTE1166.setToField(CString("set_enabled"));
Scene7.addChild(&ROUTE1166);

ROUTE& ROUTE1167 =  ROUTE();
ROUTE1167.setFromNode(CString("EatTuber2"));
ROUTE1167.setFromField(CString("isActive"));
ROUTE1167.setToNode(CString("TubeCollide2"));
ROUTE1167.setToField(CString("beingEaten"));
Scene7.addChild(&ROUTE1167);

ROUTE& ROUTE1168 =  ROUTE();
ROUTE1168.setFromNode(CString("ScareTuber2"));
ROUTE1168.setFromField(CString("enterTime"));
ROUTE1168.setToNode(CString("TubeCollide2"));
ROUTE1168.setToField(CString("runAway"));
Scene7.addChild(&ROUTE1168);

ROUTE& ROUTE1169 =  ROUTE();
ROUTE1169.setFromNode(CString("TubeCollide2"));
ROUTE1169.setFromField(CString("enableHit"));
ROUTE1169.setToNode(CString("EatTuber2"));
ROUTE1169.setToField(CString("set_enabled"));
Scene7.addChild(&ROUTE1169);

ROUTE& ROUTE1170 =  ROUTE();
ROUTE1170.setFromNode(CString("TubeCollide2"));
ROUTE1170.setFromField(CString("tubeRun"));
ROUTE1170.setToNode(CString("oopsSound"));
ROUTE1170.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE1170);

ROUTE& ROUTE1171 =  ROUTE();
ROUTE1171.setFromNode(CString("TubeCollide2"));
ROUTE1171.setFromField(CString("tubeRun2"));
ROUTE1171.setToNode(CString("oopsSound"));
ROUTE1171.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE1171);

ROUTE& ROUTE1172 =  ROUTE();
ROUTE1172.setFromNode(CString("TubeCollide2"));
ROUTE1172.setFromField(CString("tubeRun"));
ROUTE1172.setToNode(CString("Tuber2Run"));
ROUTE1172.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE1172);

ROUTE& ROUTE1173 =  ROUTE();
ROUTE1173.setFromNode(CString("TubeCollide2"));
ROUTE1173.setFromField(CString("tubeRun2"));
ROUTE1173.setToNode(CString("Tuber2Run2"));
ROUTE1173.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE1173);

ROUTE& ROUTE1174 =  ROUTE();
ROUTE1174.setFromNode(CString("Tuber2Run"));
ROUTE1174.setFromField(CString("isActive"));
ROUTE1174.setToNode(CString("TubeCollide2"));
ROUTE1174.setToField(CString("finishedRunning"));
Scene7.addChild(&ROUTE1174);

ROUTE& ROUTE1175 =  ROUTE();
ROUTE1175.setFromNode(CString("Tuber2Run2"));
ROUTE1175.setFromField(CString("isActive"));
ROUTE1175.setToNode(CString("TubeCollide2"));
ROUTE1175.setToField(CString("finishedRunning"));
Scene7.addChild(&ROUTE1175);

ROUTE& ROUTE1176 =  ROUTE();
ROUTE1176.setFromNode(CString("Tuber2Run"));
ROUTE1176.setFromField(CString("fraction_changed"));
ROUTE1176.setToNode(CString("Inline_Tube02_avoid01-POS-INTERP"));
ROUTE1176.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1176);

ROUTE& ROUTE1177 =  ROUTE();
ROUTE1177.setFromNode(CString("Tuber2Run"));
ROUTE1177.setFromField(CString("fraction_changed"));
ROUTE1177.setToNode(CString("Inline_Tube02_avoid01-ROT-INTERP"));
ROUTE1177.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1177);

ROUTE& ROUTE1178 =  ROUTE();
ROUTE1178.setFromNode(CString("Tuber2Run2"));
ROUTE1178.setFromField(CString("fraction_changed"));
ROUTE1178.setToNode(CString("Inline_Tube02_avoid02-POS-INTERP"));
ROUTE1178.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1178);

ROUTE& ROUTE1179 =  ROUTE();
ROUTE1179.setFromNode(CString("Tuber2Run2"));
ROUTE1179.setFromField(CString("fraction_changed"));
ROUTE1179.setToNode(CString("Inline_Tube02_avoid02-ROT-INTERP"));
ROUTE1179.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1179);

ROUTE& ROUTE1180 =  ROUTE();
ROUTE1180.setFromNode(CString("Inline_Tube02_avoid01-POS-INTERP"));
ROUTE1180.setFromField(CString("value_changed"));
ROUTE1180.setToNode(CString("Inline_Tube02-ROOT"));
ROUTE1180.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE1180);

ROUTE& ROUTE1181 =  ROUTE();
ROUTE1181.setFromNode(CString("Inline_Tube02_avoid01-ROT-INTERP"));
ROUTE1181.setFromField(CString("value_changed"));
ROUTE1181.setToNode(CString("Inline_Tube02-ROOT"));
ROUTE1181.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE1181);

ROUTE& ROUTE1182 =  ROUTE();
ROUTE1182.setFromNode(CString("Inline_Tube02_avoid02-POS-INTERP"));
ROUTE1182.setFromField(CString("value_changed"));
ROUTE1182.setToNode(CString("Inline_Tube02-ROOT"));
ROUTE1182.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE1182);

ROUTE& ROUTE1183 =  ROUTE();
ROUTE1183.setFromNode(CString("Inline_Tube02_avoid02-ROT-INTERP"));
ROUTE1183.setFromField(CString("value_changed"));
ROUTE1183.setToNode(CString("Inline_Tube02-ROOT"));
ROUTE1183.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE1183);

ROUTE& ROUTE1184 =  ROUTE();
ROUTE1184.setFromNode(CString("Inline_Tube02_avoid01-POS-INTERP"));
ROUTE1184.setFromField(CString("value_changed"));
ROUTE1184.setToNode(CString("Tuber2CollisionMover"));
ROUTE1184.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE1184);

ROUTE& ROUTE1185 =  ROUTE();
ROUTE1185.setFromNode(CString("Inline_Tube02_avoid02-POS-INTERP"));
ROUTE1185.setFromField(CString("value_changed"));
ROUTE1185.setToNode(CString("Tuber2CollisionMover"));
ROUTE1185.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE1185);

ROUTE& ROUTE1186 =  ROUTE();
ROUTE1186.setFromNode(CString("FadeTimer"));
ROUTE1186.setFromField(CString("fraction_changed"));
ROUTE1186.setToNode(CString("FadeInterp"));
ROUTE1186.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1186);

ROUTE& ROUTE1187 =  ROUTE();
ROUTE1187.setFromNode(CString("FadeTimer"));
ROUTE1187.setFromField(CString("fraction_changed"));
ROUTE1187.setToNode(CString("FadeColorInterp"));
ROUTE1187.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1187);

ROUTE& ROUTE1188 =  ROUTE();
ROUTE1188.setFromNode(CString("FadeColorInterp"));
ROUTE1188.setFromField(CString("value_changed"));
ROUTE1188.setToNode(CString("Fog01"));
ROUTE1188.setToField(CString("set_color"));
Scene7.addChild(&ROUTE1188);

ROUTE& ROUTE1189 =  ROUTE();
ROUTE1189.setFromNode(CString("FadeInterp"));
ROUTE1189.setFromField(CString("value_changed"));
ROUTE1189.setToNode(CString("Fog01"));
ROUTE1189.setToField(CString("set_visibilityRange"));
Scene7.addChild(&ROUTE1189);

ROUTE& ROUTE1190 =  ROUTE();
ROUTE1190.setFromNode(CString("seagullVisible"));
ROUTE1190.setFromField(CString("enterTime"));
ROUTE1190.setToNode(CString("TextDisplay"));
ROUTE1190.setToField(CString("seagullVisible"));
Scene7.addChild(&ROUTE1190);

ROUTE& ROUTE1191 =  ROUTE();
ROUTE1191.setFromNode(CString("sittingSeagullVisible"));
ROUTE1191.setFromField(CString("enterTime"));
ROUTE1191.setToNode(CString("TextDisplay"));
ROUTE1191.setToField(CString("sittingSeagullVisible"));
Scene7.addChild(&ROUTE1191);

ROUTE& ROUTE1192 =  ROUTE();
ROUTE1192.setFromNode(CString("fishVisible"));
ROUTE1192.setFromField(CString("enterTime"));
ROUTE1192.setToNode(CString("TextDisplay"));
ROUTE1192.setToField(CString("fishVisible"));
Scene7.addChild(&ROUTE1192);

ROUTE& ROUTE1193 =  ROUTE();
ROUTE1193.setFromNode(CString("fishSwimVisible"));
ROUTE1193.setFromField(CString("enterTime"));
ROUTE1193.setToNode(CString("TextDisplay"));
ROUTE1193.setToField(CString("fishSwimVisible"));
Scene7.addChild(&ROUTE1193);

ROUTE& ROUTE1194 =  ROUTE();
ROUTE1194.setFromNode(CString("surferVisible"));
ROUTE1194.setFromField(CString("enterTime"));
ROUTE1194.setToNode(CString("TextDisplay"));
ROUTE1194.setToField(CString("surferVisible"));
Scene7.addChild(&ROUTE1194);

ROUTE& ROUTE1195 =  ROUTE();
ROUTE1195.setFromNode(CString("surfer2Visible"));
ROUTE1195.setFromField(CString("enterTime"));
ROUTE1195.setToNode(CString("TextDisplay"));
ROUTE1195.setToField(CString("surfer2Visible"));
Scene7.addChild(&ROUTE1195);

ROUTE& ROUTE1196 =  ROUTE();
ROUTE1196.setFromNode(CString("tuberVisible"));
ROUTE1196.setFromField(CString("enterTime"));
ROUTE1196.setToNode(CString("TextDisplay"));
ROUTE1196.setToField(CString("tuberVisible"));
Scene7.addChild(&ROUTE1196);

ROUTE& ROUTE1197 =  ROUTE();
ROUTE1197.setFromNode(CString("tuber2Visible"));
ROUTE1197.setFromField(CString("enterTime"));
ROUTE1197.setToNode(CString("TextDisplay"));
ROUTE1197.setToField(CString("tuber2Visible"));
Scene7.addChild(&ROUTE1197);

ROUTE& ROUTE1198 =  ROUTE();
ROUTE1198.setFromNode(CString("skeletonVisible"));
ROUTE1198.setFromField(CString("enterTime"));
ROUTE1198.setToNode(CString("TextDisplay"));
ROUTE1198.setToField(CString("skeletonVisible"));
Scene7.addChild(&ROUTE1198);

ROUTE& ROUTE1199 =  ROUTE();
ROUTE1199.setFromNode(CString("SeeEnd"));
ROUTE1199.setFromField(CString("enterTime"));
ROUTE1199.setToNode(CString("TextDisplay"));
ROUTE1199.setToField(CString("endVisible"));
Scene7.addChild(&ROUTE1199);

ROUTE& ROUTE1200 =  ROUTE();
ROUTE1200.setFromNode(CString("SharkBoomTimer"));
ROUTE1200.setFromField(CString("isActive"));
ROUTE1200.setToNode(CString("BoomScript"));
ROUTE1200.setToField(CString("startBoom"));
Scene7.addChild(&ROUTE1200);

ROUTE& ROUTE1201 =  ROUTE();
ROUTE1201.setFromNode(CString("BoomScript"));
ROUTE1201.setFromField(CString("playBoom"));
ROUTE1201.setToNode(CString("boomSound"));
ROUTE1201.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE1201);

ROUTE& ROUTE1202 =  ROUTE();
ROUTE1202.setFromNode(CString("JumpToEnd"));
ROUTE1202.setFromField(CString("endGame"));
ROUTE1202.setToNode(CString("KillShark"));
ROUTE1202.setToField(CString("Kill"));
Scene7.addChild(&ROUTE1202);

ROUTE& ROUTE1203 =  ROUTE();
ROUTE1203.setFromNode(CString("JumpToEnd"));
ROUTE1203.setFromField(CString("endGame2"));
ROUTE1203.setToNode(CString("KillShark"));
ROUTE1203.setToField(CString("canyonEnd"));
Scene7.addChild(&ROUTE1203);

ROUTE& ROUTE1204 =  ROUTE();
ROUTE1204.setFromNode(CString("eyeClick"));
ROUTE1204.setFromField(CString("touchTime"));
ROUTE1204.setToNode(CString("JumpToEnd"));
ROUTE1204.setToField(CString("eyeClick"));
Scene7.addChild(&ROUTE1204);

ROUTE& ROUTE1205 =  ROUTE();
ROUTE1205.setFromNode(CString("eyeClick2"));
ROUTE1205.setFromField(CString("touchTime"));
ROUTE1205.setToNode(CString("JumpToEnd"));
ROUTE1205.setToField(CString("eyeClick2"));
Scene7.addChild(&ROUTE1205);

ROUTE& ROUTE1206 =  ROUTE();
ROUTE1206.setFromNode(CString("EatTimer"));
ROUTE1206.setFromField(CString("isActive"));
ROUTE1206.setToNode(CString("SharkSwim"));
ROUTE1206.setToField(CString("testEnd"));
Scene7.addChild(&ROUTE1206);

ROUTE& ROUTE1207 =  ROUTE();
ROUTE1207.setFromNode(CString("SeeEnd"));
ROUTE1207.setFromField(CString("isActive"));
ROUTE1207.setToNode(CString("KillShark"));
ROUTE1207.setToField(CString("canyonEnd"));
Scene7.addChild(&ROUTE1207);

ROUTE& ROUTE1208 =  ROUTE();
ROUTE1208.setFromNode(CString("SharkSwim"));
ROUTE1208.setFromField(CString("killTrigger"));
ROUTE1208.setToNode(CString("KillShark"));
ROUTE1208.setToField(CString("Kill"));
Scene7.addChild(&ROUTE1208);

ROUTE& ROUTE1209 =  ROUTE();
ROUTE1209.setFromNode(CString("KillShark"));
ROUTE1209.setFromField(CString("startDeath"));
ROUTE1209.setToNode(CString("SharkDeathTimer"));
ROUTE1209.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE1209);

ROUTE& ROUTE1210 =  ROUTE();
ROUTE1210.setFromNode(CString("KillShark"));
ROUTE1210.setFromField(CString("startDeath"));
ROUTE1210.setToNode(CString("SharkBoomTimer"));
ROUTE1210.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE1210);

ROUTE& ROUTE1211 =  ROUTE();
ROUTE1211.setFromNode(CString("KillShark"));
ROUTE1211.setFromField(CString("startDeath"));
ROUTE1211.setToNode(CString("FishBurpTimer"));
ROUTE1211.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE1211);

ROUTE& ROUTE1212 =  ROUTE();
ROUTE1212.setFromNode(CString("KillShark"));
ROUTE1212.setFromField(CString("startDeath"));
ROUTE1212.setToNode(CString("burpSound"));
ROUTE1212.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE1212);

ROUTE& ROUTE1213 =  ROUTE();
ROUTE1213.setFromNode(CString("KillShark"));
ROUTE1213.setFromField(CString("burp"));
ROUTE1213.setToNode(CString("burpSound"));
ROUTE1213.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE1213);

ROUTE& ROUTE1214 =  ROUTE();
ROUTE1214.setFromNode(CString("SharkDeathTimer"));
ROUTE1214.setFromField(CString("isActive"));
ROUTE1214.setToNode(CString("KillShark"));
ROUTE1214.setToField(CString("deathAnimation"));
Scene7.addChild(&ROUTE1214);

ROUTE& ROUTE1215 =  ROUTE();
ROUTE1215.setFromNode(CString("FishBurpTimer"));
ROUTE1215.setFromField(CString("isActive"));
ROUTE1215.setToNode(CString("KillShark"));
ROUTE1215.setToField(CString("fishBurp"));
Scene7.addChild(&ROUTE1215);

ROUTE& ROUTE1216 =  ROUTE();
ROUTE1216.setFromNode(CString("KillShark"));
ROUTE1216.setFromField(CString("startFade"));
ROUTE1216.setToNode(CString("FadeTimer"));
ROUTE1216.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE1216);

ROUTE& ROUTE1217 =  ROUTE();
ROUTE1217.setFromNode(CString("FadeColorInterp"));
ROUTE1217.setFromField(CString("value_changed"));
ROUTE1217.setToNode(CString("KillShark"));
ROUTE1217.setToField(CString("inputSkyColor"));
Scene7.addChild(&ROUTE1217);

ROUTE& ROUTE1218 =  ROUTE();
ROUTE1218.setFromNode(CString("KillShark"));
ROUTE1218.setFromField(CString("outputSkyColor"));
ROUTE1218.setToNode(CString("Background01"));
ROUTE1218.setToField(CString("set_skyColor"));
Scene7.addChild(&ROUTE1218);

ROUTE& ROUTE1219 =  ROUTE();
ROUTE1219.setFromNode(CString("FadeTimer"));
ROUTE1219.setFromField(CString("isActive"));
ROUTE1219.setToNode(CString("KillShark"));
ROUTE1219.setToField(CString("fadeDone"));
Scene7.addChild(&ROUTE1219);

ROUTE& ROUTE1220 =  ROUTE();
ROUTE1220.setFromNode(CString("KillShark"));
ROUTE1220.setFromField(CString("navInfoControl"));
ROUTE1220.setToNode(CString("NavInfo01"));
ROUTE1220.setToField(CString("set_type"));
Scene7.addChild(&ROUTE1220);

ROUTE& ROUTE1221 =  ROUTE();
ROUTE1221.setFromNode(CString("WorldProx"));
ROUTE1221.setFromField(CString("orientation_changed"));
ROUTE1221.setToNode(CString("SurferCollisionSpinner"));
ROUTE1221.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE1221);

ROUTE& ROUTE1222 =  ROUTE();
ROUTE1222.setFromNode(CString("WorldProx"));
ROUTE1222.setFromField(CString("orientation_changed"));
ROUTE1222.setToNode(CString("Surfer2CollisionSpinner"));
ROUTE1222.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE1222);

ROUTE& ROUTE1223 =  ROUTE();
ROUTE1223.setFromNode(CString("WorldProx"));
ROUTE1223.setFromField(CString("orientation_changed"));
ROUTE1223.setToNode(CString("TuberCollisionSpinner"));
ROUTE1223.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE1223);

ROUTE& ROUTE1224 =  ROUTE();
ROUTE1224.setFromNode(CString("WorldProx"));
ROUTE1224.setFromField(CString("orientation_changed"));
ROUTE1224.setToNode(CString("Tuber2CollisionSpinner"));
ROUTE1224.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE1224);

ROUTE& ROUTE1225 =  ROUTE();
ROUTE1225.setFromNode(CString("WorldProx"));
ROUTE1225.setFromField(CString("orientation_changed"));
ROUTE1225.setToNode(CString("SittingSeagullCollisionSpinner"));
ROUTE1225.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE1225);

ROUTE& ROUTE1226 =  ROUTE();
ROUTE1226.setFromNode(CString("WorldProx"));
ROUTE1226.setFromField(CString("orientation_changed"));
ROUTE1226.setToNode(CString("SeagullCollisionSpinner"));
ROUTE1226.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE1226);

ROUTE& ROUTE1227 =  ROUTE();
ROUTE1227.setFromNode(CString("Inline_Gullswim-ROOT"));
ROUTE1227.setFromField(CString("translation_changed"));
ROUTE1227.setToNode(CString("SeagullCollisionMover"));
ROUTE1227.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE1227);

ROUTE& ROUTE1228 =  ROUTE();
ROUTE1228.setFromNode(CString("WorldProx"));
ROUTE1228.setFromField(CString("orientation_changed"));
ROUTE1228.setToNode(CString("FishSwimCollisionSpinner"));
ROUTE1228.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE1228);

ROUTE& ROUTE1229 =  ROUTE();
ROUTE1229.setFromNode(CString("Inline_Fishswim-ROOT"));
ROUTE1229.setFromField(CString("translation_changed"));
ROUTE1229.setToNode(CString("FishSwimCollisionMover"));
ROUTE1229.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE1229);

ROUTE& ROUTE1230 =  ROUTE();
ROUTE1230.setFromNode(CString("WorldProx"));
ROUTE1230.setFromField(CString("orientation_changed"));
ROUTE1230.setToNode(CString("FishCollisionSpinner"));
ROUTE1230.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE1230);

ROUTE& ROUTE1231 =  ROUTE();
ROUTE1231.setFromNode(CString("Inline_Fishbott-ROOT"));
ROUTE1231.setFromField(CString("translation_changed"));
ROUTE1231.setToNode(CString("FishCollisionMover"));
ROUTE1231.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE1231);

ROUTE& ROUTE1232 =  ROUTE();
ROUTE1232.setFromNode(CString("WorldProx"));
ROUTE1232.setFromField(CString("position_changed"));
ROUTE1232.setToNode(CString("SharkSwim"));
ROUTE1232.setToField(CString("position_changed"));
Scene7.addChild(&ROUTE1232);

ROUTE& ROUTE1233 =  ROUTE();
ROUTE1233.setFromNode(CString("TimeSensor01-TIMER"));
ROUTE1233.setFromField(CString("fraction_changed"));
ROUTE1233.setToNode(CString("SharkSwim"));
ROUTE1233.setToField(CString("time"));
Scene7.addChild(&ROUTE1233);

ROUTE& ROUTE1234 =  ROUTE();
ROUTE1234.setFromNode(CString("WorldProx"));
ROUTE1234.setFromField(CString("position_changed"));
ROUTE1234.setToNode(CString("SharkHead"));
ROUTE1234.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE1234);

ROUTE& ROUTE1235 =  ROUTE();
ROUTE1235.setFromNode(CString("WorldProx"));
ROUTE1235.setFromField(CString("orientation_changed"));
ROUTE1235.setToNode(CString("SharkHead"));
ROUTE1235.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE1235);

ROUTE& ROUTE1236 =  ROUTE();
ROUTE1236.setFromNode(CString("Shark-TIMER"));
ROUTE1236.setFromField(CString("fraction_changed"));
ROUTE1236.setToNode(CString("Shark-POS-INTERP"));
ROUTE1236.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1236);

ROUTE& ROUTE1237 =  ROUTE();
ROUTE1237.setFromNode(CString("Shark-POS-INTERP"));
ROUTE1237.setFromField(CString("value_changed"));
ROUTE1237.setToNode(CString("Shark-ROOT"));
ROUTE1237.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE1237);

ROUTE& ROUTE1238 =  ROUTE();
ROUTE1238.setFromNode(CString("SharkSwim"));
ROUTE1238.setFromField(CString("animation_timer"));
ROUTE1238.setToNode(CString("TimeSensor01-SCRIPT"));
ROUTE1238.setToField(CString("fractionIn"));
Scene7.addChild(&ROUTE1238);

ROUTE& ROUTE1239 =  ROUTE();
ROUTE1239.setFromNode(CString("TimeSensor01-SCRIPT"));
ROUTE1239.setFromField(CString("fractionOut"));
ROUTE1239.setToNode(CString("Shark-POS-INTERP"));
ROUTE1239.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1239);

ROUTE& ROUTE1240 =  ROUTE();
ROUTE1240.setFromNode(CString("Shark-TIMER"));
ROUTE1240.setFromField(CString("fraction_changed"));
ROUTE1240.setToNode(CString("Shark-ROT-INTERP"));
ROUTE1240.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1240);

ROUTE& ROUTE1241 =  ROUTE();
ROUTE1241.setFromNode(CString("Shark-ROT-INTERP"));
ROUTE1241.setFromField(CString("value_changed"));
ROUTE1241.setToNode(CString("Shark-ROOT"));
ROUTE1241.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE1241);

ROUTE& ROUTE1242 =  ROUTE();
ROUTE1242.setFromNode(CString("TimeSensor01-SCRIPT"));
ROUTE1242.setFromField(CString("fractionOut"));
ROUTE1242.setToNode(CString("Shark-ROT-INTERP"));
ROUTE1242.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1242);

ROUTE& ROUTE1243 =  ROUTE();
ROUTE1243.setFromNode(CString("TimeSensor02-TIMER"));
ROUTE1243.setFromField(CString("fraction_changed"));
ROUTE1243.setToNode(CString("Shark_Gill_L01-SCALE-INTERP"));
ROUTE1243.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1243);

ROUTE& ROUTE1244 =  ROUTE();
ROUTE1244.setFromNode(CString("Shark_Gill_L01-SCALE-INTERP"));
ROUTE1244.setFromField(CString("value_changed"));
ROUTE1244.setToNode(CString("Shark_Gill_L01-ROOT"));
ROUTE1244.setToField(CString("set_scale"));
Scene7.addChild(&ROUTE1244);

ROUTE& ROUTE1245 =  ROUTE();
ROUTE1245.setFromNode(CString("TimeSensor02-TIMER"));
ROUTE1245.setFromField(CString("fraction_changed"));
ROUTE1245.setToNode(CString("Shark_Gill_L03-SCALE-INTERP"));
ROUTE1245.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1245);

ROUTE& ROUTE1246 =  ROUTE();
ROUTE1246.setFromNode(CString("Shark_Gill_L03-SCALE-INTERP"));
ROUTE1246.setFromField(CString("value_changed"));
ROUTE1246.setToNode(CString("Shark_Gill_L03-ROOT"));
ROUTE1246.setToField(CString("set_scale"));
Scene7.addChild(&ROUTE1246);

ROUTE& ROUTE1247 =  ROUTE();
ROUTE1247.setFromNode(CString("TimeSensor02-TIMER"));
ROUTE1247.setFromField(CString("fraction_changed"));
ROUTE1247.setToNode(CString("Shark_Gill_R02-SCALE-INTERP"));
ROUTE1247.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1247);

ROUTE& ROUTE1248 =  ROUTE();
ROUTE1248.setFromNode(CString("Shark_Gill_R02-SCALE-INTERP"));
ROUTE1248.setFromField(CString("value_changed"));
ROUTE1248.setToNode(CString("Shark_Gill_R02-ROOT"));
ROUTE1248.setToField(CString("set_scale"));
Scene7.addChild(&ROUTE1248);

ROUTE& ROUTE1249 =  ROUTE();
ROUTE1249.setFromNode(CString("TimeSensor02-TIMER"));
ROUTE1249.setFromField(CString("fraction_changed"));
ROUTE1249.setToNode(CString("Shark_Gill_R01-SCALE-INTERP"));
ROUTE1249.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1249);

ROUTE& ROUTE1250 =  ROUTE();
ROUTE1250.setFromNode(CString("Shark_Gill_R01-SCALE-INTERP"));
ROUTE1250.setFromField(CString("value_changed"));
ROUTE1250.setToNode(CString("Shark_Gill_R01-ROOT"));
ROUTE1250.setToField(CString("set_scale"));
Scene7.addChild(&ROUTE1250);

ROUTE& ROUTE1251 =  ROUTE();
ROUTE1251.setFromNode(CString("TimeSensor02-TIMER"));
ROUTE1251.setFromField(CString("fraction_changed"));
ROUTE1251.setToNode(CString("Shark_Gill_R03-SCALE-INTERP"));
ROUTE1251.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1251);

ROUTE& ROUTE1252 =  ROUTE();
ROUTE1252.setFromNode(CString("Shark_Gill_R03-SCALE-INTERP"));
ROUTE1252.setFromField(CString("value_changed"));
ROUTE1252.setToNode(CString("Shark_Gill_R03-ROOT"));
ROUTE1252.setToField(CString("set_scale"));
Scene7.addChild(&ROUTE1252);

ROUTE& ROUTE1253 =  ROUTE();
ROUTE1253.setFromNode(CString("TimeSensor02-TIMER"));
ROUTE1253.setFromField(CString("fraction_changed"));
ROUTE1253.setToNode(CString("Shark_Gill_L02-SCALE-INTERP"));
ROUTE1253.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1253);

ROUTE& ROUTE1254 =  ROUTE();
ROUTE1254.setFromNode(CString("Shark_Gill_L02-SCALE-INTERP"));
ROUTE1254.setFromField(CString("value_changed"));
ROUTE1254.setToNode(CString("Shark_Gill_L02-ROOT"));
ROUTE1254.setToField(CString("set_scale"));
Scene7.addChild(&ROUTE1254);

ROUTE& ROUTE1255 =  ROUTE();
ROUTE1255.setFromNode(CString("EatSeagull"));
ROUTE1255.setFromField(CString("enterTime"));
ROUTE1255.setToNode(CString("EatTimer"));
ROUTE1255.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE1255);

ROUTE& ROUTE1256 =  ROUTE();
ROUTE1256.setFromNode(CString("EatSeagull"));
ROUTE1256.setFromField(CString("enterTime"));
ROUTE1256.setToNode(CString("TimeSensor_gullswim-TIMER"));
ROUTE1256.setToField(CString("set_stopTime"));
Scene7.addChild(&ROUTE1256);

ROUTE& ROUTE1257 =  ROUTE();
ROUTE1257.setFromNode(CString("EatSeagull"));
ROUTE1257.setFromField(CString("enterTime"));
ROUTE1257.setToNode(CString("SharkSwim"));
ROUTE1257.setToField(CString("eatingSeagull"));
Scene7.addChild(&ROUTE1257);

ROUTE& ROUTE1258 =  ROUTE();
ROUTE1258.setFromNode(CString("EatFishSwim"));
ROUTE1258.setFromField(CString("enterTime"));
ROUTE1258.setToNode(CString("EatTimer"));
ROUTE1258.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE1258);

ROUTE& ROUTE1259 =  ROUTE();
ROUTE1259.setFromNode(CString("EatFishSwim"));
ROUTE1259.setFromField(CString("enterTime"));
ROUTE1259.setToNode(CString("TimeSensor_Fishswim-TIMER"));
ROUTE1259.setToField(CString("set_stopTime"));
Scene7.addChild(&ROUTE1259);

ROUTE& ROUTE1260 =  ROUTE();
ROUTE1260.setFromNode(CString("EatFishSwim"));
ROUTE1260.setFromField(CString("enterTime"));
ROUTE1260.setToNode(CString("SharkSwim"));
ROUTE1260.setToField(CString("eatingFishSwim"));
Scene7.addChild(&ROUTE1260);

ROUTE& ROUTE1261 =  ROUTE();
ROUTE1261.setFromNode(CString("EatFish"));
ROUTE1261.setFromField(CString("enterTime"));
ROUTE1261.setToNode(CString("EatTimer"));
ROUTE1261.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE1261);

ROUTE& ROUTE1262 =  ROUTE();
ROUTE1262.setFromNode(CString("EatFish"));
ROUTE1262.setFromField(CString("enterTime"));
ROUTE1262.setToNode(CString("TimeSensor_Fishbott-TIMER"));
ROUTE1262.setToField(CString("set_stopTime"));
Scene7.addChild(&ROUTE1262);

ROUTE& ROUTE1263 =  ROUTE();
ROUTE1263.setFromNode(CString("EatFish"));
ROUTE1263.setFromField(CString("enterTime"));
ROUTE1263.setToNode(CString("SharkSwim"));
ROUTE1263.setToField(CString("eatingFish"));
Scene7.addChild(&ROUTE1263);

ROUTE& ROUTE1264 =  ROUTE();
ROUTE1264.setFromNode(CString("EatSittingSeagull"));
ROUTE1264.setFromField(CString("enterTime"));
ROUTE1264.setToNode(CString("EatTimer"));
ROUTE1264.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE1264);

ROUTE& ROUTE1265 =  ROUTE();
ROUTE1265.setFromNode(CString("EatSittingSeagull"));
ROUTE1265.setFromField(CString("enterTime"));
ROUTE1265.setToNode(CString("SharkSwim"));
ROUTE1265.setToField(CString("eatingSittingSeagull"));
Scene7.addChild(&ROUTE1265);

ROUTE& ROUTE1266 =  ROUTE();
ROUTE1266.setFromNode(CString("EatSurfer"));
ROUTE1266.setFromField(CString("enterTime"));
ROUTE1266.setToNode(CString("EatTimer"));
ROUTE1266.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE1266);

ROUTE& ROUTE1267 =  ROUTE();
ROUTE1267.setFromNode(CString("EatSurfer"));
ROUTE1267.setFromField(CString("enterTime"));
ROUTE1267.setToNode(CString("SharkSwim"));
ROUTE1267.setToField(CString("eatingSurfer"));
Scene7.addChild(&ROUTE1267);

ROUTE& ROUTE1268 =  ROUTE();
ROUTE1268.setFromNode(CString("EatSurfer2"));
ROUTE1268.setFromField(CString("enterTime"));
ROUTE1268.setToNode(CString("EatTimer"));
ROUTE1268.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE1268);

ROUTE& ROUTE1269 =  ROUTE();
ROUTE1269.setFromNode(CString("EatSurfer2"));
ROUTE1269.setFromField(CString("enterTime"));
ROUTE1269.setToNode(CString("SharkSwim"));
ROUTE1269.setToField(CString("eatingSurfer2"));
Scene7.addChild(&ROUTE1269);

ROUTE& ROUTE1270 =  ROUTE();
ROUTE1270.setFromNode(CString("EatTuber"));
ROUTE1270.setFromField(CString("enterTime"));
ROUTE1270.setToNode(CString("EatTimer"));
ROUTE1270.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE1270);

ROUTE& ROUTE1271 =  ROUTE();
ROUTE1271.setFromNode(CString("EatTuber"));
ROUTE1271.setFromField(CString("enterTime"));
ROUTE1271.setToNode(CString("SharkSwim"));
ROUTE1271.setToField(CString("eatingTuber"));
Scene7.addChild(&ROUTE1271);

ROUTE& ROUTE1272 =  ROUTE();
ROUTE1272.setFromNode(CString("EatTuber2"));
ROUTE1272.setFromField(CString("enterTime"));
ROUTE1272.setToNode(CString("EatTimer"));
ROUTE1272.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE1272);

ROUTE& ROUTE1273 =  ROUTE();
ROUTE1273.setFromNode(CString("EatTuber2"));
ROUTE1273.setFromField(CString("enterTime"));
ROUTE1273.setToNode(CString("SharkSwim"));
ROUTE1273.setToField(CString("eatingTuber2"));
Scene7.addChild(&ROUTE1273);

ROUTE& ROUTE1274 =  ROUTE();
ROUTE1274.setFromNode(CString("SharkSwim"));
ROUTE1274.setFromField(CString("seagullSwitcher"));
ROUTE1274.setToNode(CString("Seagull"));
ROUTE1274.setToField(CString("set_whichChoice"));
Scene7.addChild(&ROUTE1274);

ROUTE& ROUTE1275 =  ROUTE();
ROUTE1275.setFromNode(CString("SharkSwim"));
ROUTE1275.setFromField(CString("fishSwimSwitcher"));
ROUTE1275.setToNode(CString("FishSwim"));
ROUTE1275.setToField(CString("set_whichChoice"));
Scene7.addChild(&ROUTE1275);

ROUTE& ROUTE1276 =  ROUTE();
ROUTE1276.setFromNode(CString("SharkSwim"));
ROUTE1276.setFromField(CString("fishSwitcher"));
ROUTE1276.setToNode(CString("Fish"));
ROUTE1276.setToField(CString("set_whichChoice"));
Scene7.addChild(&ROUTE1276);

ROUTE& ROUTE1277 =  ROUTE();
ROUTE1277.setFromNode(CString("SharkSwim"));
ROUTE1277.setFromField(CString("sittingSeagullSwitcher"));
ROUTE1277.setToNode(CString("SittingSeagull"));
ROUTE1277.setToField(CString("set_whichChoice"));
Scene7.addChild(&ROUTE1277);

ROUTE& ROUTE1278 =  ROUTE();
ROUTE1278.setFromNode(CString("SharkSwim"));
ROUTE1278.setFromField(CString("surferSwitcher"));
ROUTE1278.setToNode(CString("Surfer"));
ROUTE1278.setToField(CString("set_whichChoice"));
Scene7.addChild(&ROUTE1278);

ROUTE& ROUTE1279 =  ROUTE();
ROUTE1279.setFromNode(CString("SharkSwim"));
ROUTE1279.setFromField(CString("surfer2Switcher"));
ROUTE1279.setToNode(CString("Surfer2"));
ROUTE1279.setToField(CString("set_whichChoice"));
Scene7.addChild(&ROUTE1279);

ROUTE& ROUTE1280 =  ROUTE();
ROUTE1280.setFromNode(CString("SharkSwim"));
ROUTE1280.setFromField(CString("tuberSwitcher"));
ROUTE1280.setToNode(CString("Tuber"));
ROUTE1280.setToField(CString("set_whichChoice"));
Scene7.addChild(&ROUTE1280);

ROUTE& ROUTE1281 =  ROUTE();
ROUTE1281.setFromNode(CString("SharkSwim"));
ROUTE1281.setFromField(CString("tuber2Switcher"));
ROUTE1281.setToNode(CString("Tuber2"));
ROUTE1281.setToField(CString("set_whichChoice"));
Scene7.addChild(&ROUTE1281);

ROUTE& ROUTE1282 =  ROUTE();
ROUTE1282.setFromNode(CString("SharkSwim"));
ROUTE1282.setFromField(CString("playChompSound"));
ROUTE1282.setToNode(CString("chompSound"));
ROUTE1282.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE1282);

ROUTE& ROUTE1283 =  ROUTE();
ROUTE1283.setFromNode(CString("EatTimer"));
ROUTE1283.setFromField(CString("isActive"));
ROUTE1283.setToNode(CString("SharkSwim"));
ROUTE1283.setToField(CString("doneEating"));
Scene7.addChild(&ROUTE1283);

ROUTE& ROUTE1284 =  ROUTE();
ROUTE1284.setFromNode(CString("KillTimer"));
ROUTE1284.setFromField(CString("isActive"));
ROUTE1284.setToNode(CString("SharkSwim"));
ROUTE1284.setToField(CString("killObject"));
Scene7.addChild(&ROUTE1284);

ROUTE& ROUTE1285 =  ROUTE();
ROUTE1285.setFromNode(CString("SharkEat-POS-INTERP"));
ROUTE1285.setFromField(CString("value_changed"));
ROUTE1285.setToNode(CString("Shark-ROOT"));
ROUTE1285.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE1285);

ROUTE& ROUTE1286 =  ROUTE();
ROUTE1286.setFromNode(CString("EatTimer"));
ROUTE1286.setFromField(CString("fraction_changed"));
ROUTE1286.setToNode(CString("SharkEat-POS-INTERP"));
ROUTE1286.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1286);

ROUTE& ROUTE1287 =  ROUTE();
ROUTE1287.setFromNode(CString("SharkEat-ROT-INTERP"));
ROUTE1287.setFromField(CString("value_changed"));
ROUTE1287.setToNode(CString("Shark-ROOT"));
ROUTE1287.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE1287);

ROUTE& ROUTE1288 =  ROUTE();
ROUTE1288.setFromNode(CString("EatTimer"));
ROUTE1288.setFromField(CString("fraction_changed"));
ROUTE1288.setToNode(CString("SharkEat-ROT-INTERP"));
ROUTE1288.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1288);

ROUTE& ROUTE1289 =  ROUTE();
ROUTE1289.setFromNode(CString("SharkEat-SCALE-INTERP"));
ROUTE1289.setFromField(CString("value_changed"));
ROUTE1289.setToNode(CString("Shark-ROOT"));
ROUTE1289.setToField(CString("set_scale"));
Scene7.addChild(&ROUTE1289);

ROUTE& ROUTE1290 =  ROUTE();
ROUTE1290.setFromNode(CString("EatTimer"));
ROUTE1290.setFromField(CString("fraction_changed"));
ROUTE1290.setToNode(CString("SharkEat-SCALE-INTERP"));
ROUTE1290.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1290);

ROUTE& ROUTE1291 =  ROUTE();
ROUTE1291.setFromNode(CString("SharkEat_Eyeball_R-POS-INTERP"));
ROUTE1291.setFromField(CString("value_changed"));
ROUTE1291.setToNode(CString("Shark_Eyeball_R-ROOT"));
ROUTE1291.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE1291);

ROUTE& ROUTE1292 =  ROUTE();
ROUTE1292.setFromNode(CString("EatTimer"));
ROUTE1292.setFromField(CString("fraction_changed"));
ROUTE1292.setToNode(CString("SharkEat_Eyeball_R-POS-INTERP"));
ROUTE1292.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1292);

ROUTE& ROUTE1293 =  ROUTE();
ROUTE1293.setFromNode(CString("SharkEat_Eyeball_R-ROT-INTERP"));
ROUTE1293.setFromField(CString("value_changed"));
ROUTE1293.setToNode(CString("Shark_Eyeball_R-ROOT"));
ROUTE1293.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE1293);

ROUTE& ROUTE1294 =  ROUTE();
ROUTE1294.setFromNode(CString("EatTimer"));
ROUTE1294.setFromField(CString("fraction_changed"));
ROUTE1294.setToNode(CString("SharkEat_Eyeball_R-ROT-INTERP"));
ROUTE1294.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1294);

ROUTE& ROUTE1295 =  ROUTE();
ROUTE1295.setFromNode(CString("SharkEat_Eyeball_L-POS-INTERP"));
ROUTE1295.setFromField(CString("value_changed"));
ROUTE1295.setToNode(CString("Shark_Eyeball_L-ROOT"));
ROUTE1295.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE1295);

ROUTE& ROUTE1296 =  ROUTE();
ROUTE1296.setFromNode(CString("EatTimer"));
ROUTE1296.setFromField(CString("fraction_changed"));
ROUTE1296.setToNode(CString("SharkEat_Eyeball_L-POS-INTERP"));
ROUTE1296.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1296);

ROUTE& ROUTE1297 =  ROUTE();
ROUTE1297.setFromNode(CString("SharkEat_Eyeball_L-ROT-INTERP"));
ROUTE1297.setFromField(CString("value_changed"));
ROUTE1297.setToNode(CString("Shark_Eyeball_L-ROOT"));
ROUTE1297.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE1297);

ROUTE& ROUTE1298 =  ROUTE();
ROUTE1298.setFromNode(CString("EatTimer"));
ROUTE1298.setFromField(CString("fraction_changed"));
ROUTE1298.setToNode(CString("SharkEat_Eyeball_L-ROT-INTERP"));
ROUTE1298.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1298);

ROUTE& ROUTE1299 =  ROUTE();
ROUTE1299.setFromNode(CString("burp-TIMER"));
ROUTE1299.setFromField(CString("fraction_changed"));
ROUTE1299.setToNode(CString("burp-POS-INTERP"));
ROUTE1299.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1299);

ROUTE& ROUTE1300 =  ROUTE();
ROUTE1300.setFromNode(CString("burp-POS-INTERP"));
ROUTE1300.setFromField(CString("value_changed"));
ROUTE1300.setToNode(CString("burp-ROOT"));
ROUTE1300.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE1300);

ROUTE& ROUTE1301 =  ROUTE();
ROUTE1301.setFromNode(CString("SharkDeathTimer"));
ROUTE1301.setFromField(CString("fraction_changed"));
ROUTE1301.setToNode(CString("burp-POS-INTERP"));
ROUTE1301.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1301);

ROUTE& ROUTE1302 =  ROUTE();
ROUTE1302.setFromNode(CString("SharkDeath-POS-INTERP"));
ROUTE1302.setFromField(CString("value_changed"));
ROUTE1302.setToNode(CString("Shark-ROOT"));
ROUTE1302.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE1302);

ROUTE& ROUTE1303 =  ROUTE();
ROUTE1303.setFromNode(CString("SharkDeathTimer"));
ROUTE1303.setFromField(CString("fraction_changed"));
ROUTE1303.setToNode(CString("SharkDeath-POS-INTERP"));
ROUTE1303.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1303);

ROUTE& ROUTE1304 =  ROUTE();
ROUTE1304.setFromNode(CString("SharkDeath-ROT-INTERP"));
ROUTE1304.setFromField(CString("value_changed"));
ROUTE1304.setToNode(CString("Shark-ROOT"));
ROUTE1304.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE1304);

ROUTE& ROUTE1305 =  ROUTE();
ROUTE1305.setFromNode(CString("SharkDeathTimer"));
ROUTE1305.setFromField(CString("fraction_changed"));
ROUTE1305.setToNode(CString("SharkDeath-ROT-INTERP"));
ROUTE1305.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1305);

ROUTE& ROUTE1306 =  ROUTE();
ROUTE1306.setFromNode(CString("SharkDeath-SCALE-INTERP"));
ROUTE1306.setFromField(CString("value_changed"));
ROUTE1306.setToNode(CString("Shark-ROOT"));
ROUTE1306.setToField(CString("set_scale"));
Scene7.addChild(&ROUTE1306);

ROUTE& ROUTE1307 =  ROUTE();
ROUTE1307.setFromNode(CString("SharkDeathTimer"));
ROUTE1307.setFromField(CString("fraction_changed"));
ROUTE1307.setToNode(CString("SharkDeath-SCALE-INTERP"));
ROUTE1307.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1307);

ROUTE& ROUTE1308 =  ROUTE();
ROUTE1308.setFromNode(CString("SharkDeath_Eyeball_R-POS-INTERP"));
ROUTE1308.setFromField(CString("value_changed"));
ROUTE1308.setToNode(CString("Shark_Eyeball_R-ROOT"));
ROUTE1308.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE1308);

ROUTE& ROUTE1309 =  ROUTE();
ROUTE1309.setFromNode(CString("SharkDeathTimer"));
ROUTE1309.setFromField(CString("fraction_changed"));
ROUTE1309.setToNode(CString("SharkDeath_Eyeball_R-POS-INTERP"));
ROUTE1309.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1309);

ROUTE& ROUTE1310 =  ROUTE();
ROUTE1310.setFromNode(CString("SharkDeath_Eyeball_R-ROT-INTERP"));
ROUTE1310.setFromField(CString("value_changed"));
ROUTE1310.setToNode(CString("Shark_Eyeball_R-ROOT"));
ROUTE1310.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE1310);

ROUTE& ROUTE1311 =  ROUTE();
ROUTE1311.setFromNode(CString("SharkDeathTimer"));
ROUTE1311.setFromField(CString("fraction_changed"));
ROUTE1311.setToNode(CString("SharkDeath_Eyeball_R-ROT-INTERP"));
ROUTE1311.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1311);

ROUTE& ROUTE1312 =  ROUTE();
ROUTE1312.setFromNode(CString("SharkDeath_Eyeball_R-SCALE-INTERP"));
ROUTE1312.setFromField(CString("value_changed"));
ROUTE1312.setToNode(CString("Shark_Eyeball_R-ROOT"));
ROUTE1312.setToField(CString("set_scale"));
Scene7.addChild(&ROUTE1312);

ROUTE& ROUTE1313 =  ROUTE();
ROUTE1313.setFromNode(CString("SharkDeathTimer"));
ROUTE1313.setFromField(CString("fraction_changed"));
ROUTE1313.setToNode(CString("SharkDeath_Eyeball_R-SCALE-INTERP"));
ROUTE1313.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1313);

ROUTE& ROUTE1314 =  ROUTE();
ROUTE1314.setFromNode(CString("SharkDeath_Eyeball_L-POS-INTERP"));
ROUTE1314.setFromField(CString("value_changed"));
ROUTE1314.setToNode(CString("Shark_Eyeball_L-ROOT"));
ROUTE1314.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE1314);

ROUTE& ROUTE1315 =  ROUTE();
ROUTE1315.setFromNode(CString("SharkDeathTimer"));
ROUTE1315.setFromField(CString("fraction_changed"));
ROUTE1315.setToNode(CString("SharkDeath_Eyeball_L-POS-INTERP"));
ROUTE1315.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1315);

ROUTE& ROUTE1316 =  ROUTE();
ROUTE1316.setFromNode(CString("SharkDeath_Eyeball_L-ROT-INTERP"));
ROUTE1316.setFromField(CString("value_changed"));
ROUTE1316.setToNode(CString("Shark_Eyeball_L-ROOT"));
ROUTE1316.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE1316);

ROUTE& ROUTE1317 =  ROUTE();
ROUTE1317.setFromNode(CString("SharkDeathTimer"));
ROUTE1317.setFromField(CString("fraction_changed"));
ROUTE1317.setToNode(CString("SharkDeath_Eyeball_L-ROT-INTERP"));
ROUTE1317.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1317);

ROUTE& ROUTE1318 =  ROUTE();
ROUTE1318.setFromNode(CString("SharkDeath_Eyeball_L-SCALE-INTERP"));
ROUTE1318.setFromField(CString("value_changed"));
ROUTE1318.setToNode(CString("Shark_Eyeball_L-ROOT"));
ROUTE1318.setToField(CString("set_scale"));
Scene7.addChild(&ROUTE1318);

ROUTE& ROUTE1319 =  ROUTE();
ROUTE1319.setFromNode(CString("SharkDeathTimer"));
ROUTE1319.setFromField(CString("fraction_changed"));
ROUTE1319.setToNode(CString("SharkDeath_Eyeball_L-SCALE-INTERP"));
ROUTE1319.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1319);

ROUTE& ROUTE1320 =  ROUTE();
ROUTE1320.setFromNode(CString("Dummy_SharkDeath_explode-POS-INTERP"));
ROUTE1320.setFromField(CString("value_changed"));
ROUTE1320.setToNode(CString("Dummy_SharkDeath_explode-ROOT"));
ROUTE1320.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE1320);

ROUTE& ROUTE1321 =  ROUTE();
ROUTE1321.setFromNode(CString("SharkDeathTimer"));
ROUTE1321.setFromField(CString("fraction_changed"));
ROUTE1321.setToNode(CString("Dummy_SharkDeath_explode-POS-INTERP"));
ROUTE1321.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1321);

ROUTE& ROUTE1322 =  ROUTE();
ROUTE1322.setFromNode(CString("SharkDeath_explode_Eyeball_L-POS-INTERP"));
ROUTE1322.setFromField(CString("value_changed"));
ROUTE1322.setToNode(CString("SharkDeath_explode_Eyeball_L-ROOT"));
ROUTE1322.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE1322);

ROUTE& ROUTE1323 =  ROUTE();
ROUTE1323.setFromNode(CString("SharkDeathTimer"));
ROUTE1323.setFromField(CString("fraction_changed"));
ROUTE1323.setToNode(CString("SharkDeath_explode_Eyeball_L-POS-INTERP"));
ROUTE1323.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1323);

ROUTE& ROUTE1324 =  ROUTE();
ROUTE1324.setFromNode(CString("SharkDeath_explode_Eyeball_R-POS-INTERP"));
ROUTE1324.setFromField(CString("value_changed"));
ROUTE1324.setToNode(CString("SharkDeath_explode_Eyeball_R-ROOT"));
ROUTE1324.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE1324);

ROUTE& ROUTE1325 =  ROUTE();
ROUTE1325.setFromNode(CString("SharkDeathTimer"));
ROUTE1325.setFromField(CString("fraction_changed"));
ROUTE1325.setToNode(CString("SharkDeath_explode_Eyeball_R-POS-INTERP"));
ROUTE1325.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1325);

ROUTE& ROUTE1326 =  ROUTE();
ROUTE1326.setFromNode(CString("SharkDeath_explode00-POS-INTERP"));
ROUTE1326.setFromField(CString("value_changed"));
ROUTE1326.setToNode(CString("SharkDeath_explode00-ROOT"));
ROUTE1326.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE1326);

ROUTE& ROUTE1327 =  ROUTE();
ROUTE1327.setFromNode(CString("SharkDeathTimer"));
ROUTE1327.setFromField(CString("fraction_changed"));
ROUTE1327.setToNode(CString("SharkDeath_explode00-POS-INTERP"));
ROUTE1327.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1327);

ROUTE& ROUTE1328 =  ROUTE();
ROUTE1328.setFromNode(CString("SharkDeath_explode01-POS-INTERP"));
ROUTE1328.setFromField(CString("value_changed"));
ROUTE1328.setToNode(CString("SharkDeath_explode01-ROOT"));
ROUTE1328.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE1328);

ROUTE& ROUTE1329 =  ROUTE();
ROUTE1329.setFromNode(CString("SharkDeathTimer"));
ROUTE1329.setFromField(CString("fraction_changed"));
ROUTE1329.setToNode(CString("SharkDeath_explode01-POS-INTERP"));
ROUTE1329.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1329);

ROUTE& ROUTE1330 =  ROUTE();
ROUTE1330.setFromNode(CString("SharkDeath_explode02-POS-INTERP"));
ROUTE1330.setFromField(CString("value_changed"));
ROUTE1330.setToNode(CString("SharkDeath_explode02-ROOT"));
ROUTE1330.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE1330);

ROUTE& ROUTE1331 =  ROUTE();
ROUTE1331.setFromNode(CString("SharkDeathTimer"));
ROUTE1331.setFromField(CString("fraction_changed"));
ROUTE1331.setToNode(CString("SharkDeath_explode02-POS-INTERP"));
ROUTE1331.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1331);

ROUTE& ROUTE1332 =  ROUTE();
ROUTE1332.setFromNode(CString("SharkDeath_explode02-ROT-INTERP"));
ROUTE1332.setFromField(CString("value_changed"));
ROUTE1332.setToNode(CString("SharkDeath_explode02-ROOT"));
ROUTE1332.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE1332);

ROUTE& ROUTE1333 =  ROUTE();
ROUTE1333.setFromNode(CString("SharkDeathTimer"));
ROUTE1333.setFromField(CString("fraction_changed"));
ROUTE1333.setToNode(CString("SharkDeath_explode02-ROT-INTERP"));
ROUTE1333.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1333);

ROUTE& ROUTE1334 =  ROUTE();
ROUTE1334.setFromNode(CString("SharkDeath_explode02-SCALE-INTERP"));
ROUTE1334.setFromField(CString("value_changed"));
ROUTE1334.setToNode(CString("SharkDeath_explode02-ROOT"));
ROUTE1334.setToField(CString("set_scale"));
Scene7.addChild(&ROUTE1334);

ROUTE& ROUTE1335 =  ROUTE();
ROUTE1335.setFromNode(CString("SharkDeathTimer"));
ROUTE1335.setFromField(CString("fraction_changed"));
ROUTE1335.setToNode(CString("SharkDeath_explode02-SCALE-INTERP"));
ROUTE1335.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1335);

ROUTE& ROUTE1336 =  ROUTE();
ROUTE1336.setFromNode(CString("SharkDeath_explode03-POS-INTERP"));
ROUTE1336.setFromField(CString("value_changed"));
ROUTE1336.setToNode(CString("SharkDeath_explode03-ROOT"));
ROUTE1336.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE1336);

ROUTE& ROUTE1337 =  ROUTE();
ROUTE1337.setFromNode(CString("SharkDeathTimer"));
ROUTE1337.setFromField(CString("fraction_changed"));
ROUTE1337.setToNode(CString("SharkDeath_explode03-POS-INTERP"));
ROUTE1337.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1337);

ROUTE& ROUTE1338 =  ROUTE();
ROUTE1338.setFromNode(CString("SharkDeath_explode03-ROT-INTERP"));
ROUTE1338.setFromField(CString("value_changed"));
ROUTE1338.setToNode(CString("SharkDeath_explode03-ROOT"));
ROUTE1338.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE1338);

ROUTE& ROUTE1339 =  ROUTE();
ROUTE1339.setFromNode(CString("SharkDeathTimer"));
ROUTE1339.setFromField(CString("fraction_changed"));
ROUTE1339.setToNode(CString("SharkDeath_explode03-ROT-INTERP"));
ROUTE1339.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1339);

ROUTE& ROUTE1340 =  ROUTE();
ROUTE1340.setFromNode(CString("SharkDeath_explode03-SCALE-INTERP"));
ROUTE1340.setFromField(CString("value_changed"));
ROUTE1340.setToNode(CString("SharkDeath_explode03-ROOT"));
ROUTE1340.setToField(CString("set_scale"));
Scene7.addChild(&ROUTE1340);

ROUTE& ROUTE1341 =  ROUTE();
ROUTE1341.setFromNode(CString("SharkDeathTimer"));
ROUTE1341.setFromField(CString("fraction_changed"));
ROUTE1341.setToNode(CString("SharkDeath_explode03-SCALE-INTERP"));
ROUTE1341.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1341);

ROUTE& ROUTE1342 =  ROUTE();
ROUTE1342.setFromNode(CString("SharkDeath_explode04-POS-INTERP"));
ROUTE1342.setFromField(CString("value_changed"));
ROUTE1342.setToNode(CString("SharkDeath_explode04-ROOT"));
ROUTE1342.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE1342);

ROUTE& ROUTE1343 =  ROUTE();
ROUTE1343.setFromNode(CString("SharkDeathTimer"));
ROUTE1343.setFromField(CString("fraction_changed"));
ROUTE1343.setToNode(CString("SharkDeath_explode04-POS-INTERP"));
ROUTE1343.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1343);

ROUTE& ROUTE1344 =  ROUTE();
ROUTE1344.setFromNode(CString("SharkDeath_explode04-SCALE-INTERP"));
ROUTE1344.setFromField(CString("value_changed"));
ROUTE1344.setToNode(CString("SharkDeath_explode04-ROOT"));
ROUTE1344.setToField(CString("set_scale"));
Scene7.addChild(&ROUTE1344);

ROUTE& ROUTE1345 =  ROUTE();
ROUTE1345.setFromNode(CString("SharkDeathTimer"));
ROUTE1345.setFromField(CString("fraction_changed"));
ROUTE1345.setToNode(CString("SharkDeath_explode04-SCALE-INTERP"));
ROUTE1345.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1345);

ROUTE& ROUTE1346 =  ROUTE();
ROUTE1346.setFromNode(CString("SharkDeath_explode05-POS-INTERP"));
ROUTE1346.setFromField(CString("value_changed"));
ROUTE1346.setToNode(CString("SharkDeath_explode05-ROOT"));
ROUTE1346.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE1346);

ROUTE& ROUTE1347 =  ROUTE();
ROUTE1347.setFromNode(CString("SharkDeathTimer"));
ROUTE1347.setFromField(CString("fraction_changed"));
ROUTE1347.setToNode(CString("SharkDeath_explode05-POS-INTERP"));
ROUTE1347.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1347);

ROUTE& ROUTE1348 =  ROUTE();
ROUTE1348.setFromNode(CString("SharkDeath_explode06-POS-INTERP"));
ROUTE1348.setFromField(CString("value_changed"));
ROUTE1348.setToNode(CString("SharkDeath_explode06-ROOT"));
ROUTE1348.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE1348);

ROUTE& ROUTE1349 =  ROUTE();
ROUTE1349.setFromNode(CString("SharkDeathTimer"));
ROUTE1349.setFromField(CString("fraction_changed"));
ROUTE1349.setToNode(CString("SharkDeath_explode06-POS-INTERP"));
ROUTE1349.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1349);

ROUTE& ROUTE1350 =  ROUTE();
ROUTE1350.setFromNode(CString("SharkDeath_explode07-POS-INTERP"));
ROUTE1350.setFromField(CString("value_changed"));
ROUTE1350.setToNode(CString("SharkDeath_explode07-ROOT"));
ROUTE1350.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE1350);

ROUTE& ROUTE1351 =  ROUTE();
ROUTE1351.setFromNode(CString("SharkDeathTimer"));
ROUTE1351.setFromField(CString("fraction_changed"));
ROUTE1351.setToNode(CString("SharkDeath_explode07-POS-INTERP"));
ROUTE1351.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1351);

ROUTE& ROUTE1352 =  ROUTE();
ROUTE1352.setFromNode(CString("SharkDeath_explode08-POS-INTERP"));
ROUTE1352.setFromField(CString("value_changed"));
ROUTE1352.setToNode(CString("SharkDeath_explode08-ROOT"));
ROUTE1352.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE1352);

ROUTE& ROUTE1353 =  ROUTE();
ROUTE1353.setFromNode(CString("SharkDeathTimer"));
ROUTE1353.setFromField(CString("fraction_changed"));
ROUTE1353.setToNode(CString("SharkDeath_explode08-POS-INTERP"));
ROUTE1353.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1353);

ROUTE& ROUTE1354 =  ROUTE();
ROUTE1354.setFromNode(CString("SharkDeath_explode09-POS-INTERP"));
ROUTE1354.setFromField(CString("value_changed"));
ROUTE1354.setToNode(CString("SharkDeath_explode09-ROOT"));
ROUTE1354.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE1354);

ROUTE& ROUTE1355 =  ROUTE();
ROUTE1355.setFromNode(CString("SharkDeathTimer"));
ROUTE1355.setFromField(CString("fraction_changed"));
ROUTE1355.setToNode(CString("SharkDeath_explode09-POS-INTERP"));
ROUTE1355.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1355);

ROUTE& ROUTE1356 =  ROUTE();
ROUTE1356.setFromNode(CString("SharkDeath_explode10-POS-INTERP"));
ROUTE1356.setFromField(CString("value_changed"));
ROUTE1356.setToNode(CString("SharkDeath_explode10-ROOT"));
ROUTE1356.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE1356);

ROUTE& ROUTE1357 =  ROUTE();
ROUTE1357.setFromNode(CString("SharkDeathTimer"));
ROUTE1357.setFromField(CString("fraction_changed"));
ROUTE1357.setToNode(CString("SharkDeath_explode10-POS-INTERP"));
ROUTE1357.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1357);

ROUTE& ROUTE1358 =  ROUTE();
ROUTE1358.setFromNode(CString("SharkDeath_explode11-POS-INTERP"));
ROUTE1358.setFromField(CString("value_changed"));
ROUTE1358.setToNode(CString("SharkDeath_explode11-ROOT"));
ROUTE1358.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE1358);

ROUTE& ROUTE1359 =  ROUTE();
ROUTE1359.setFromNode(CString("SharkDeathTimer"));
ROUTE1359.setFromField(CString("fraction_changed"));
ROUTE1359.setToNode(CString("SharkDeath_explode11-POS-INTERP"));
ROUTE1359.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1359);

ROUTE& ROUTE1360 =  ROUTE();
ROUTE1360.setFromNode(CString("Inline_fishswim-TIMER"));
ROUTE1360.setFromField(CString("fraction_changed"));
ROUTE1360.setToNode(CString("Inline_fishswim-POS-INTERP"));
ROUTE1360.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1360);

ROUTE& ROUTE1361 =  ROUTE();
ROUTE1361.setFromNode(CString("Inline_fishswim-POS-INTERP"));
ROUTE1361.setFromField(CString("value_changed"));
ROUTE1361.setToNode(CString("Inline_fishswim-ROOT"));
ROUTE1361.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE1361);

ROUTE& ROUTE1362 =  ROUTE();
ROUTE1362.setFromNode(CString("SharkDeathTimer"));
ROUTE1362.setFromField(CString("fraction_changed"));
ROUTE1362.setToNode(CString("Inline_fishswim-POS-INTERP"));
ROUTE1362.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1362);

ROUTE& ROUTE1363 =  ROUTE();
ROUTE1363.setFromNode(CString("Inline_fishswim-TIMER"));
ROUTE1363.setFromField(CString("fraction_changed"));
ROUTE1363.setToNode(CString("Inline_fishswim-ROT-INTERP"));
ROUTE1363.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1363);

ROUTE& ROUTE1364 =  ROUTE();
ROUTE1364.setFromNode(CString("Inline_fishswim-ROT-INTERP"));
ROUTE1364.setFromField(CString("value_changed"));
ROUTE1364.setToNode(CString("Inline_fishswim-ROOT"));
ROUTE1364.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE1364);

ROUTE& ROUTE1365 =  ROUTE();
ROUTE1365.setFromNode(CString("SharkDeathTimer"));
ROUTE1365.setFromField(CString("fraction_changed"));
ROUTE1365.setToNode(CString("Inline_fishswim-ROT-INTERP"));
ROUTE1365.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1365);

ROUTE& ROUTE1366 =  ROUTE();
ROUTE1366.setFromNode(CString("fish_burp-TIMER"));
ROUTE1366.setFromField(CString("fraction_changed"));
ROUTE1366.setToNode(CString("fish_burp-POS-INTERP"));
ROUTE1366.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1366);

ROUTE& ROUTE1367 =  ROUTE();
ROUTE1367.setFromNode(CString("SharkDeathTimer"));
ROUTE1367.setFromField(CString("fraction_changed"));
ROUTE1367.setToNode(CString("fish_burp-POS-INTERP"));
ROUTE1367.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1367);

ROUTE& ROUTE1368 =  ROUTE();
ROUTE1368.setFromNode(CString("fish_burp-POS-INTERP"));
ROUTE1368.setFromField(CString("value_changed"));
ROUTE1368.setToNode(CString("fish_burp-ROOT"));
ROUTE1368.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE1368);

ROUTE& ROUTE1369 =  ROUTE();
ROUTE1369.setFromNode(CString("fish_burp02-TIMER"));
ROUTE1369.setFromField(CString("fraction_changed"));
ROUTE1369.setToNode(CString("fish_burp02-POS-INTERP"));
ROUTE1369.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1369);

ROUTE& ROUTE1370 =  ROUTE();
ROUTE1370.setFromNode(CString("SharkDeathTimer"));
ROUTE1370.setFromField(CString("fraction_changed"));
ROUTE1370.setToNode(CString("fish_burp02-POS-INTERP"));
ROUTE1370.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE1370);

ROUTE& ROUTE1371 =  ROUTE();
ROUTE1371.setFromNode(CString("fish_burp02-POS-INTERP"));
ROUTE1371.setFromField(CString("value_changed"));
ROUTE1371.setToNode(CString("fish_burp02-ROOT"));
ROUTE1371.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE1371);

X3D0.setScene(&Scene7);

}
