#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "3.0";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "title";
meta2.content = "F16.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "description";
meta3.content = "F-16, The Fighting Falcon, Turkish Air Force (TUAF), Turkey";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Murat ONDER, LTJG, Turkish Navy";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "creator";
meta5.content = "The coordinates of the main body (Except landing gears, nose antenna, flag, weapons, missile holders, cockpit, cockpit seat and fuel tanks) are mostly similar to the model of Soji Yamakawa and used with permission.";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "created";
meta6.content = "13 July 2003";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "modified";
meta7.content = "27 November 2015";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "reference";
meta8.content = "http://www.fas.org/man/dod-101/sys/ac/f-16.htm";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "permission";
meta9.content = "Here is a copy of the permission for the usage of the main hull; -----Original Message----- From: Soji Yamakawa [mailto:soji@andrew.cmu.edu] Sent: Tuesday, September 16, 2003 8:00 PM To: Onder, Murat TUR Subject: Re: VRML model points usage permission Sure. No problem. Soji ----- Original Message ----- From: \"Murat Onder\" <monder@nps.navy.mil> To: <Soji_Yamakawa@cmu.edu>; <PEB01130@nifty.ne.jp> Sent: Monday, September 15, 2003 3:50 PM Subject: VRML model points usage permission Hi Sir, I&apos;m a MS student in Naval Postgraduate School. I'm making a model of Turkish F-16 for my project in a VRML course. For the main hull of the F-16, I want to use the coordinate points of your VRML model since I think that model represents well enough F-16. This is going to be only a student project and will not be used for any commercial purposes. Of course I'll make the citation and put the reference links to your page in the meta files of x3d file. I'd like to know if you can give permission to use those points in my model. V/R, Murat Onder LTJG, TU NAVY";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "reference";
meta10.content = "The landing gears are taken from the Savage Archive, from F18 Blue Angel, then modified and re-animated.";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "drawing";
meta11.content = "\"Drawing.jpg\" \"../../../Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/Drawing.jpg\" \"https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/Drawing.jpg\"";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "Image";
meta12.content = "\"FrontView.jpg\" \"FrontView2.jpg\" \"Missiles.jpg\" \"../../../Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/FrontView.jpg\" \"https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/FrontView.jpg\" \"../../../Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/FrontView2.jpg\" \"https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/FrontView2.jpg\" \"../../../Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/Missiles.jpg\" \"https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/Missiles.jpg\"";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "identifier";
meta13.content = "https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/F16.x3d";
head1.meta[11] = meta13;

meta meta14 = createNode("meta");
meta14.name = "subject";
meta14.content = "F16, F-16, Fighting Falcon";
head1.meta[12] = meta14;

meta meta15 = createNode("meta");
meta15.name = "generator";
meta15.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
head1.meta[13] = meta15;

meta meta16 = createNode("meta");
meta16.name = "license";
meta16.content = "../../license.html";
head1.meta[14] = meta16;

head = head1;

Transform Transform18 = createNode("Transform");
Transform18.DEF = "F16Transform";
Transform Transform19 = createNode("Transform");
Transform19.DEF = "MainFrameTransform";
Transform19.scale = new SFVec3f(new float[3,3,3]);
Shape Shape20 = createNode("Shape");
Shape20.DEF = "Nose";
Appearance Appearance21 = createNode("Appearance");
Material Material22 = createNode("Material");
Material22.diffuseColor = new SFColor(new float[0.25,0.25,0.25]);
Appearance21.material = Material22;

Shape20.appearance = Appearance21;

IndexedFaceSet IndexedFaceSet23 = createNode("IndexedFaceSet");
IndexedFaceSet23.coordIndex = new MFInt32(new int[24,0,3,-1,4,0,24,-1,25,26,27,-1,28,25,27,-1,27,29,28,-1,27,30,29,-1,27,31,30,-1,3,18,24,-1]);
IndexedFaceSet23.creaseAngle = 0.5;
IndexedFaceSet23.normalIndex = new MFInt32(new int[16,0,3,-1,4,0,16,-1,17,17,17,-1,18,18,18,-1,19,19,19,-1,20,20,20,-1,21,21,21,-1,3,14,16,-1]);
IndexedFaceSet23.solid = False;
Coordinate Coordinate24 = createNode("Coordinate");
Coordinate24.DEF = "coordinates";
Coordinate24.point = new MFVec3f(new float[-0.32,0.36,-4.91,-0.38,0.43,-4.21,0,0.6,-4.2,0,0.5,-4.9,-0.5,0,-4.9,-0.6,0,-4.2,1,0,5.8,1,0,5.3,2.8,-0.4,6.3,2.8,-0.4,6.61,0.31,-0.36,-4.9,0.4,-0.35,-4.2,0,-0.4,-4.2,0,-0.4,-4.9,-0.31,-0.36,-4.9,-0.4,-0.35,-4.2,0.5,0,-4.9,0.6,0,-4.2,0.32,0.36,-4.91,0.38,0.43,-4.21,-1,0,5.8,-1,0,5.3,-2.8,-0.4,6.3,-2.8,-0.4,6.61,0,-0.1,-7,-0.31,-0.36,-4.9,-0.5,0,-4.9,0,-0.1,-7,0,-0.4,-4.9,0.31,-0.36,-4.9,0.5,0,-4.9,0.32,0.36,-4.91,-0.27,0.93,-3.51,0,1.1,-3.6,-0.33,0.5,-3.41,-0.34,0.9,-1.73,0,0.9,-1,0,1.1,-1.8,-0.38,0.64,-1.68,0.34,0.9,-1.73,0,0.9,-1,0.38,0.64,-1.68,0.34,0.9,-1.73,0.27,0.93,-3.51,0.33,0.5,-3.41,0,1.3,-2.8,0.45,1.02,-2.68,0.38,0.64,-1.68,0.53,0.5,-2.56,-0.53,0.5,-2.56,-0.45,1.02,-2.68,-0.53,0.75,0,-0.56,0.66,2.8,0,0.7,2.8,0,0.8,0,-1.1,0.3,0,-1,0.3,2.8,-0.37,0.57,4.9,0,0.59,4.9,-0.7,0.3,4.9,-0.7,0.3,4.9,-0.7,0,7,-0.5,0.49,7,-0.5,0.49,7,0,0.7,7,-1.4,0,0,-1.4,0,3.9,-1.4,0,3.9,-1,0,3.9,-1,0.3,2.8,-1,0.3,4.9,-0.59,0.65,-0.77,-0.8,0.3,-0.6,-1.4,0,-0.7,-1,-0.1,2.8,-0.7,-0.7,-2.5,-0.5,-0.9,-2.5,-0.5,-0.9,-0.6,-0.7,-0.7,-0.6,0,-1,-2.5,0,-1,-0.6,-0.72,-0.12,-2.5,-0.8,-0.3,-2.5,-0.8,-0.3,-0.6,-0.8,-0.3,-2.5,-0.8,-0.3,-0.6,-1.4,0,0,-1.4,0,-0.7,-0.7,-0.1,4.9,-1,-0.1,4.9,-0.5,-0.9,4.9,-0.7,-0.7,4.9,0,-1,4.9,-0.7,-0.1,4.9,-0.5,-0.5,7,-0.7,0,7,0,-0.7,7,-1,0,7.4,-2.8,-0.4,7.1,-2.57,-0.32,7.42,-4.9,0.1,4,-5.1,0.1,4,-5.1,-0.1,4,-4.9,-0.1,4,-5.1,0.1,1.6,-5.1,-0.1,1.6,-4.9,0.1,2.8,-4.9,-0.1,2.8,-0.58,-0.83,3.6,-0.72,-1.4,3.9,-0.69,-1.32,4.9,-0.58,-0.83,4.9,0.58,-0.83,3.6,0.72,-1.4,3.9,0.69,-1.32,4.9,0.58,-0.83,4.9,4.9,-0.1,2.8,5.1,-0.1,1.6,5.1,-0.1,4,4.9,-0.1,4,-0.8,0,-2.5,4.9,0.1,4,5.1,0.1,4,5.1,0.1,1.6,4.9,0.1,2.8,0.59,0.65,-0.77,0.8,0.3,-0.6,0.8,0,-2.5,-0.8,0,-2.5,0.8,-0.3,-0.6,0.72,-0.12,-2.5,0.8,0,-2.5,1,0,7.4,2.8,-0.4,7.1,2.57,-0.32,7.42,-0.7,0,7.4,0.5,-0.9,4.9,0.7,-0.7,4.9,0.5,-0.5,7,-4.9,0,2.8,-4.9,0,3.9,0.7,-0.1,4.9,0.7,0,7,1.4,0,0,4.9,0,2.8,4.9,0,3.9,1.4,0,3.9,1.4,0,-0.7,1.4,0,-0.7,0.7,-0.7,-0.6,0.8,-0.3,-0.6,0.5,-0.9,-0.6,1,-0.1,4.9,1,0.3,4.9,0.7,0,7.4,0.7,0.3,4.9,0.7,-0.1,4.9,0.56,0.66,2.8,0.53,0.75,0,1,0.3,2.8,1.1,0.3,0,0.37,0.57,4.9,0.7,0.3,4.9,0.5,0.49,7,0.7,0,7,0.5,0.49,7,1.4,0,3.9,1.4,0,0,1,0.3,2.8,1,0,3.9,1,-0.1,2.8,0.5,-0.9,-2.5,0.7,-0.7,-2.5,0.8,-0.3,-2.5,0.8,-0.3,-2.5,1,0.3,3.9,0.59,0.65,-0.77,0,0.7,2.8,0,1.4,4.5,0,0.59,4.9,0,3.5,6.8,0,3.5,8.1,0,1.4,7.3,0,0.7,7,0,0.7,7.3,-1,0.3,3.9,0,0.35,7.7,-0.25,0.24,7.7,-0.35,0,7.7,-0.25,-0.25,7.7,0,-0.35,7.7,0.25,-0.25,7.7,0.35,0,7.7,0.25,0.24,7.7,0,-0.2,-2.5,0.7,-0.7,-2.5,0.5,-0.9,-2.5,0,-1,-2.5,-0.5,-0.9,-2.5,-0.7,-0.7,-2.5,0,-0.2,-2.5,-0.72,-0.12,-2.5,0.72,-0.12,-2.5,0.25,0.24,7.7,0.35,0,7.7,-0.35,0,7.7,-0.25,0.24,7.7]);
IndexedFaceSet23.coord = Coordinate24;

Normal Normal25 = createNode("Normal");
Normal25.DEF = "normalVector";
Normal25.vector = new MFVec3f(new float[-0.68,0.714,-0.166,-0.689,0.721,-0.072,0,0.965,-0.26,0,0.985,-0.175,-0.99,-0.016,-0.138,-0.999,-0.022,-0.037,0.567,-0.819,-0.093,0.561,-0.828,0,0,-1,0,0,-0.997,-0.071,-0.567,-0.819,-0.093,-0.561,-0.828,0,0.99,-0.016,-0.138,0.999,-0.022,-0.037,0.68,0.714,-0.166,0.689,0.721,-0.072,-0.351,0.889,-0.294,-0.868,-0.459,-0.19,-0.13,-0.982,-0.14,0.13,-0.982,-0.14,0.868,-0.459,-0.19,0.872,0.431,-0.231,-0.834,0.445,-0.327,0,0.929,-0.369,-0.88,0.401,-0.256,-0.799,0.577,0.169,-0.58,0.798,0.164,0,0.998,0.065,-0.862,0.486,0.146,0.886,0.219,0.408,0.799,0.577,0.169,0.834,0.445,-0.327,0.88,0.401,-0.256,0,0.995,-0.096,0.842,0.534,-0.08,0.862,0.486,0.146,0.833,0.549,-0.073,-0.833,0.549,-0.073,-0.842,0.534,-0.08,-0.485,0.87,-0.089,-0.37,0.929,0,0,1,0,0,1,-0.01,-0.592,0.796,-0.125,-0.573,0.818,0.05,-0.37,0.929,-0.01,0,1,-0.025,-0.487,0.873,0.036,-0.923,0.381,0.05,-0.683,0.704,0.195,0,0.99,0.14,-0.707,0.707,0,-0.385,0.912,0.141,0,0.966,0.259,-0.563,0.826,-0.037,-0.661,0.738,-0.138,-0.521,0.846,-0.115,0,-0.996,0.09,-0.773,-0.436,-0.461,-0.42,-0.781,-0.463,-0.474,-0.881,0,-0.871,-0.492,0,0,-0.891,-0.455,-0.917,0.399,0,-0.881,0.074,-0.467,-0.902,-0.429,-0.039,-0.09,-0.995,0.05,-0.451,-0.892,0,-0.28,-0.959,0.04,-0.468,-0.878,0.097,-0.877,-0.474,0.085,0,-0.997,0.072,-0.693,-0.72,0.045,-0.79,-0.562,0.244,-0.968,0.003,0.25,0,-0.966,0.257,0,0,1,-1,0,0,0.987,0,-0.16,1,0,0,-0.831,-0.551,-0.08,0.563,0.826,-0.037,0.661,0.738,-0.138,0.998,-0.037,-0.049,-0.987,0,-0.16,-0.998,-0.037,-0.049,0.831,-0.551,-0.08,0,-0.999,0.04,0,0.993,0.12,0.468,-0.878,0.097,0.877,-0.474,0.085,0.79,-0.562,0.244,-0.419,-0.897,-0.14,0.693,-0.72,0.045,0.968,0.003,0.25,0.521,0.846,-0.115,0.419,-0.897,-0.14,0.871,-0.492,0,0.902,-0.429,-0.039,0.474,-0.881,0,0.37,0.929,0,0.485,0.87,-0.089,0.573,0.818,0.05,0.592,0.796,-0.125,0.37,0.929,-0.01,0.487,0.873,0.036,0.923,0.381,0.05,0.683,0.704,0.195,0.385,0.912,0.141,0.707,0.707,0,0.42,-0.781,-0.463,0.773,-0.436,-0.461,0.917,0.399,0,0.881,0.074,-0.467,0.09,-0.995,0.05,0.451,-0.892,0,0.28,-0.959,0.04,0.42,0.901,-0.11,0,0.666,0.746,-0.481,0.468,0.741,-0.674,0,0.738,-0.475,-0.475,0.741,0,-0.674,0.738,0.475,-0.475,0.741,0.674,0,0.738,0.481,0.468,0.741,0,0,-1,0,-0.893,-0.45,-0.901,-0.224,-0.372,0.901,-0.224,-0.372,0.841,0.34,0.421,-0.841,0.34,0.421]);
IndexedFaceSet23.normal = Normal25;

Shape20.geometry = IndexedFaceSet23;

Transform19.children = new MFNode();

Transform19.children[0] = Shape20;

Shape Shape26 = createNode("Shape");
Shape26.DEF = "Canopy";
Appearance Appearance27 = createNode("Appearance");
Material Material28 = createNode("Material");
Material28.diffuseColor = new SFColor(new float[0.25,0.25,0.25]);
Material28.transparency = 0.8;
Appearance27.material = Material28;

Shape26.appearance = Appearance27;

IndexedFaceSet IndexedFaceSet29 = createNode("IndexedFaceSet");
IndexedFaceSet29.coordIndex = new MFInt32(new int[2,32,33,-1,34,32,2,-1,35,36,37,-1,38,36,35,-1,39,40,41,-1,37,36,42,-1,2,43,44,-1,33,43,2,-1,45,37,42,46,-1,46,42,47,48,-1,33,45,46,43,-1,43,46,48,44,-1,34,49,50,32,-1,32,50,45,33,-1,49,38,35,50,-1,50,35,37,45,-1]);
IndexedFaceSet29.creaseAngle = 0.5;
IndexedFaceSet29.normalIndex = new MFInt32(new int[2,22,23,-1,24,22,2,-1,25,26,27,-1,28,26,25,-1,29,29,29,-1,27,26,30,-1,2,31,32,-1,23,31,2,-1,33,27,30,34,-1,34,30,35,36,-1,23,33,34,31,-1,31,34,36,32,-1,24,37,38,22,-1,22,38,33,23,-1,37,28,25,38,-1,38,25,27,33,-1]);
IndexedFaceSet29.solid = False;
Coordinate Coordinate30 = createNode("Coordinate");
Coordinate30.USE = "coordinates";
IndexedFaceSet29.coord = Coordinate30;

Normal Normal31 = createNode("Normal");
Normal31.USE = "normalVector";
IndexedFaceSet29.normal = Normal31;

Shape26.geometry = IndexedFaceSet29;

Transform19.children[1] = Shape26;

Shape Shape32 = createNode("Shape");
Shape32.DEF = "MainBodyAndWingEdges";
Appearance Appearance33 = createNode("Appearance");
Material Material34 = createNode("Material");
Material34.diffuseColor = new SFColor(new float[0.1796,0.1914,0.2382]);
Appearance33.material = Material34;

Shape32.appearance = Appearance33;

IndexedFaceSet IndexedFaceSet35 = createNode("IndexedFaceSet");
IndexedFaceSet35.coordIndex = new MFInt32(new int[51,52,53,54,-1,55,56,52,51,-1,52,57,58,53,-1,56,59,57,52,-1,60,61,62,-1,57,59,63,-1,57,63,64,-1,58,57,64,-1,56,55,65,66,-1,67,68,69,-1,69,70,60,-1,71,54,36,-1,51,54,71,-1,72,51,71,-1,55,51,72,-1,72,73,55,-1,65,55,73,-1,68,67,74,-1,75,76,77,78,-1,76,79,80,77,-1,81,82,83,-1,84,75,78,85,-1,83,74,67,-1,67,86,87,83,-1,74,88,89,-1,88,74,83,-1,78,77,90,91,-1,77,80,92,90,-1,85,91,93,-1,85,78,91,-1,94,95,93,-1,94,93,91,-1,91,96,94,-1,96,91,90,-1,90,92,96,-1,100,101,102,103,-1,101,104,105,102,-1,104,106,107,105,-1,106,100,103,107,-1,106,104,101,100,-1,103,102,105,107,-1,116,117,118,119,-1,120,81,83,-1,121,122,123,124,-1,116,119,121,124,-1,48,125,126,127,-1,117,116,124,123,-1,128,72,71,49,-1,118,117,123,122,-1,119,118,122,121,-1,129,130,131,-1,89,88,135,97,-1,60,70,97,135,-1,70,89,97,-1,96,92,136,-1,136,137,96,-1,138,96,137,-1,120,83,87,-1,128,73,72,-1,137,141,138,-1,141,142,138,-1,126,147,127,-1,148,129,131,-1,137,149,150,-1,141,137,150,-1,136,92,80,151,-1,137,136,151,149,-1,132,152,153,-1,154,132,153,155,-1,132,154,156,152,-1,54,53,157,158,-1,158,157,159,160,-1,53,58,161,157,-1,157,161,162,159,-1,163,164,155,-1,165,162,161,-1,64,165,161,-1,64,161,58,-1,166,167,160,159,-1,168,169,146,-1,155,153,168,-1,36,54,125,-1,125,54,158,-1,125,158,126,-1,126,158,160,-1,160,147,126,-1,147,160,167,-1,170,146,169,-1,149,151,171,172,-1,151,80,79,171,-1,129,173,130,-1,150,149,172,174,-1,146,170,129,-1,129,148,143,146,-1,152,156,170,-1,129,170,156,-1,156,154,164,-1,154,155,164,-1,168,175,169,-1,175,153,152,169,-1,152,170,169,-1,48,47,125,-1,41,40,176,-1,71,38,49,-1,71,36,38,-1,61,135,88,-1,61,60,135,-1,68,185,69,-1,68,74,89,-1,68,89,70,185,-1]);
IndexedFaceSet35.creaseAngle = 0.5;
IndexedFaceSet35.normalIndex = new MFInt32(new int[39,40,41,42,-1,43,44,40,39,-1,40,45,46,41,-1,44,47,45,40,-1,48,48,48,-1,45,47,49,-1,45,49,50,-1,46,45,50,-1,44,43,51,52,-1,53,53,53,-1,41,41,41,-1,54,42,26,-1,39,42,54,-1,55,39,54,-1,43,39,55,-1,55,56,43,-1,51,43,56,-1,57,57,57,-1,58,59,60,61,-1,59,62,8,60,-1,63,63,63,-1,64,58,61,65,-1,66,66,66,-1,67,67,67,67,-1,8,8,8,-1,68,68,68,-1,61,60,69,70,-1,60,8,71,69,-1,65,70,72,-1,65,61,70,-1,73,74,72,-1,73,72,70,-1,70,75,73,-1,75,70,69,-1,69,71,75,-1,76,76,76,76,-1,77,77,77,77,-1,78,78,78,78,-1,79,79,79,79,-1,41,41,41,41,-1,8,8,8,8,-1,8,8,8,8,-1,80,80,80,-1,41,41,41,41,-1,77,77,77,77,-1,36,81,82,83,-1,84,84,84,84,-1,85,55,54,37,-1,79,79,79,79,-1,76,76,76,76,-1,86,86,86,-1,87,87,87,87,-1,88,88,88,88,-1,77,77,77,-1,75,71,89,-1,89,90,75,-1,91,75,90,-1,92,92,92,-1,85,56,55,-1,90,93,91,-1,93,94,91,-1,82,95,83,-1,96,96,96,-1,90,97,98,-1,93,90,98,-1,89,71,8,99,-1,90,89,99,97,-1,79,79,79,-1,88,88,88,88,-1,87,87,87,87,-1,42,41,100,101,-1,101,100,102,103,-1,41,46,104,100,-1,100,104,105,102,-1,106,106,106,-1,107,105,104,-1,50,107,104,-1,50,104,46,-1,108,109,103,102,-1,53,53,53,-1,41,41,41,-1,26,42,81,-1,81,42,101,-1,81,101,82,-1,82,101,103,-1,103,95,82,-1,95,103,109,-1,57,57,57,-1,97,99,110,111,-1,99,8,62,110,-1,112,112,112,-1,98,97,111,113,-1,114,114,114,-1,115,115,115,115,-1,8,8,8,-1,116,116,116,-1,77,77,77,-1,77,77,77,-1,79,79,79,-1,79,79,79,79,-1,79,79,79,-1,36,35,81,-1,117,117,117,-1,54,28,37,-1,54,26,28,-1,79,79,79,-1,79,79,79,-1,77,77,77,-1,77,77,77,-1,77,77,77,77,-1]);
IndexedFaceSet35.solid = False;
Coordinate Coordinate36 = createNode("Coordinate");
Coordinate36.USE = "coordinates";
IndexedFaceSet35.coord = Coordinate36;

Normal Normal37 = createNode("Normal");
Normal37.USE = "normalVector";
IndexedFaceSet35.normal = Normal37;

Shape32.geometry = IndexedFaceSet35;

Transform19.children[2] = Shape32;

Shape Shape38 = createNode("Shape");
Shape38.DEF = "ExhaustExitFlatPanel";
Appearance Appearance39 = createNode("Appearance");
Material Material40 = createNode("Material");
Material40.diffuseColor = new SFColor(new float[0.5,0.5,0.5]);
Appearance39.material = Material40;

Shape38.appearance = Appearance39;

IndexedFaceSet IndexedFaceSet41 = createNode("IndexedFaceSet");
IndexedFaceSet41.coordIndex = new MFInt32(new int[186,187,188,189,190,-1,190,191,192,193,186,-1]);
IndexedFaceSet41.creaseAngle = 0.5;
IndexedFaceSet41.normalIndex = new MFInt32(new int[118,119,120,121,122,-1,122,123,124,125,118,-1]);
IndexedFaceSet41.solid = False;
Coordinate Coordinate42 = createNode("Coordinate");
Coordinate42.USE = "coordinates";
IndexedFaceSet41.coord = Coordinate42;

Normal Normal43 = createNode("Normal");
Normal43.USE = "normalVector";
IndexedFaceSet41.normal = Normal43;

Shape38.geometry = IndexedFaceSet41;

Transform19.children[3] = Shape38;

Shape Shape44 = createNode("Shape");
Shape44.DEF = "ExhaustEntranceFrontBottomPart";
Appearance Appearance45 = createNode("Appearance");
Material Material46 = createNode("Material");
Material46.diffuseColor = new SFColor(new float[0.2304,0.2304,0.2304]);
Appearance45.material = Material46;

Shape44.appearance = Appearance45;

IndexedFaceSet IndexedFaceSet47 = createNode("IndexedFaceSet");
IndexedFaceSet47.coordIndex = new MFInt32(new int[194,130,173,195,196,197,-1,197,198,199,82,81,194,-1]);
IndexedFaceSet47.creaseAngle = 0.5;
IndexedFaceSet47.normalIndex = new MFInt32(new int[126,126,126,126,126,126,-1,126,126,126,126,126,126,-1]);
IndexedFaceSet47.solid = False;
Coordinate Coordinate48 = createNode("Coordinate");
Coordinate48.USE = "coordinates";
IndexedFaceSet47.coord = Coordinate48;

Normal Normal49 = createNode("Normal");
Normal49.USE = "normalVector";
IndexedFaceSet47.normal = Normal49;

Shape44.geometry = IndexedFaceSet47;

Transform19.children[4] = Shape44;

Shape Shape50 = createNode("Shape");
Shape50.DEF = "ThirdPartFromNoseUnderCanopy";
Appearance Appearance51 = createNode("Appearance");
Material Material52 = createNode("Material");
Material52.diffuseColor = new SFColor(new float[0.6,0.6,0.6]);
Appearance51.material = Material52;

Shape50.appearance = Appearance51;

IndexedFaceSet IndexedFaceSet53 = createNode("IndexedFaceSet");
IndexedFaceSet53.coordIndex = new MFInt32(new int[12,200,201,15,-1,19,48,127,17,-1,15,201,128,5,-1,17,127,202,11,-1,11,202,200,12,-1,5,128,49,1,-1,48,19,44,-1,19,2,44,-1,34,1,49,-1,34,2,1,-1]);
IndexedFaceSet53.creaseAngle = 0.5;
IndexedFaceSet53.normalIndex = new MFInt32(new int[8,127,128,11,-1,15,36,83,13,-1,11,128,85,5,-1,13,83,129,7,-1,7,129,127,8,-1,5,85,37,1,-1,36,15,32,-1,15,2,32,-1,24,1,37,-1,24,2,1,-1]);
IndexedFaceSet53.solid = False;
Coordinate Coordinate54 = createNode("Coordinate");
Coordinate54.USE = "coordinates";
IndexedFaceSet53.coord = Coordinate54;

Normal Normal55 = createNode("Normal");
Normal55.USE = "normalVector";
IndexedFaceSet53.normal = Normal55;

Shape50.geometry = IndexedFaceSet53;

Transform19.children[5] = Shape50;

Shape Shape56 = createNode("Shape");
Shape56.DEF = "RearExhaustExitPartLastPartOfMainBody";
Appearance Appearance57 = createNode("Appearance");
Material Material58 = createNode("Material");
Material58.diffuseColor = new SFColor(new float[0.37,0.37,0.37]);
Material58.shininess = 0.5;
Appearance57.material = Material58;

Shape56.appearance = Appearance57;

IndexedFaceSet IndexedFaceSet59 = createNode("IndexedFaceSet");
IndexedFaceSet59.coordIndex = new MFInt32(new int[64,186,193,165,-1,203,204,164,163,-1,192,191,138,142,-1,191,190,96,138,-1,94,96,190,189,-1,95,94,189,188,-1,63,187,186,64,-1,62,61,205,206,-1]);
IndexedFaceSet59.creaseAngle = 0.5;
IndexedFaceSet59.normalIndex = new MFInt32(new int[50,118,125,107,-1,130,130,130,130,-1,124,123,91,94,-1,123,122,75,91,-1,73,75,122,121,-1,74,73,121,120,-1,49,119,118,50,-1,131,131,131,131,-1]);
IndexedFaceSet59.solid = False;
Coordinate Coordinate60 = createNode("Coordinate");
Coordinate60.USE = "coordinates";
IndexedFaceSet59.coord = Coordinate60;

Normal Normal61 = createNode("Normal");
Normal61.USE = "normalVector";
IndexedFaceSet59.normal = Normal61;

Shape56.geometry = IndexedFaceSet59;

Transform19.children[6] = Shape56;

Shape Shape62 = createNode("Shape");
Shape62.DEF = "WingsAndTail";
Appearance Appearance63 = createNode("Appearance");
Material Material64 = createNode("Material");
Material64.emissiveColor = new SFColor(new float[0.1796,0.1914,0.2382]);
Appearance63.material = Material64;

Shape62.appearance = Appearance63;

IndexedFaceSet IndexedFaceSet65 = createNode("IndexedFaceSet");
IndexedFaceSet65.colorPerVertex = False;
IndexedFaceSet65.coordIndex = new MFInt32(new int[6,7,8,9,-1,9,8,7,6,-1,20,21,22,23,-1,23,22,21,20,-1,97,20,23,98,99,-1,99,98,23,20,97,-1,108,109,110,111,-1,111,110,109,108,-1,112,113,114,115,-1,115,114,113,112,-1,132,6,9,133,134,-1,134,133,9,6,132,-1,86,139,140,67,-1,67,140,139,86,-1,143,144,145,146,-1,146,145,144,143,-1,177,178,179,-1,179,178,177,-1,178,180,181,182,183,179,-1,179,183,182,181,180,178,-1,182,184,183,-1,183,184,182,-1,177,178,179,-1,179,178,177,-1,178,180,181,182,183,179,-1,179,183,182,181,180,178,-1,182,184,183,-1,183,184,182,-1]);
IndexedFaceSet65.creaseAngle = 0.5;
IndexedFaceSet65.normalIndex = new MFInt32(new int[50,118,125,107,-1,130,130,130,130,-1,124,123,91,94,-1,123,122,75,91,-1,73,75,122,121,-1,74,73,121,120,-1,49,119,118,50,-1,131,131,131,131,-1]);
IndexedFaceSet65.solid = False;
Coordinate Coordinate66 = createNode("Coordinate");
Coordinate66.USE = "coordinates";
IndexedFaceSet65.coord = Coordinate66;

Normal Normal67 = createNode("Normal");
Normal67.USE = "normalVector";
IndexedFaceSet65.normal = Normal67;

Shape62.geometry = IndexedFaceSet65;

Transform19.children[7] = Shape62;

Shape Shape68 = createNode("Shape");
Shape68.DEF = "SecondPartAfterNose";
Appearance Appearance69 = createNode("Appearance");
Material Material70 = createNode("Material");
Material70.diffuseColor = new SFColor(new float[0.6,0.6,0.6]);
Appearance69.material = Material70;

Shape68.appearance = Appearance69;

IndexedFaceSet IndexedFaceSet71 = createNode("IndexedFaceSet");
IndexedFaceSet71.coordIndex = new MFInt32(new int[0,1,2,3,-1,4,5,1,0,-1,10,11,12,13,-1,14,15,5,4,-1,13,12,15,14,-1,16,17,11,10,-1,18,19,17,16,-1,3,2,19,18,-1]);
IndexedFaceSet71.creaseAngle = 0.5;
IndexedFaceSet71.normalIndex = new MFInt32(new int[0,1,2,3,-1,4,5,1,0,-1,6,7,8,9,-1,10,11,5,4,-1,9,8,11,10,-1,12,13,7,6,-1,14,15,13,12,-1,3,2,15,14,-1]);
IndexedFaceSet71.solid = False;
Coordinate Coordinate72 = createNode("Coordinate");
Coordinate72.USE = "coordinates";
IndexedFaceSet71.coord = Coordinate72;

Normal Normal73 = createNode("Normal");
Normal73.USE = "normalVector";
IndexedFaceSet71.normal = Normal73;

Shape68.geometry = IndexedFaceSet71;

Transform19.children[8] = Shape68;

Transform18.children = new MFNode();

Transform18.children[0] = Transform19;

Transform Transform74 = createNode("Transform");
Transform74.DEF = "CockpitTransform";
Transform74.rotation = new SFRotation(new float[1,0,0,-0.1]);
Transform74.scale = new SFVec3f(new float[0.045,0.045,0.045]);
Transform74.translation = new SFVec3f(new float[0,1,-10]);
Inline Inline75 = createNode("Inline");
Inline75.url = new MFString(new java.lang.String["Cockpit.x3d","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/Cockpit.x3d","Cockpit.wrl","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/Cockpit.wrl"]);
Transform74.children = new MFNode();

Transform74.children[0] = Inline75;

Transform18.children[1] = Transform74;

Transform Transform76 = createNode("Transform");
Transform76.DEF = "SeatTransform";
Transform76.rotation = new SFRotation(new float[-1,0,0,-0.1]);
Transform76.scale = new SFVec3f(new float[0.9,0.9,0.9]);
Transform76.translation = new SFVec3f(new float[0,0,-8.3]);
Inline Inline77 = createNode("Inline");
Inline77.url = new MFString(new java.lang.String["Seat.x3d","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/Seat.x3d","Seat.wrl","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/Seat.wrl"]);
Transform76.children = new MFNode();

Transform76.children[0] = Inline77;

Transform18.children[2] = Transform76;

Transform Transform78 = createNode("Transform");
Transform78.DEF = "FrontWheelTransform";
Transform78.center = new SFVec3f(new float[0,2.5,0]);
Transform78.rotation = new SFRotation(new float[-1,0,0,1.92]);
Transform78.translation = new SFVec3f(new float[0.7,-5.2,-6.5]);
//Front wheel is taken from the Savage Library, modified and re-animated.(from F18 Blue Angel)
Inline Inline79 = createNode("Inline");
Inline79.url = new MFString(new java.lang.String["FrontWheel.x3d","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/FrontWheel.x3d","FrontWheel.wrl","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/FrontWheel.wrl"]);
Transform78.children = new MFNode();

Transform78.children[0] = Inline79;

Transform18.children[3] = Transform78;

Transform Transform80 = createNode("Transform");
Transform80.DEF = "RearLeftWheelTransform";
Transform80.center = new SFVec3f(new float[0,2.5,0]);
Transform80.rotation = new SFRotation(new float[1,0,1,1.92]);
Transform80.translation = new SFVec3f(new float[-2.95,-5,7]);
//Rear wheels are taken from the Savage Library and re-animated (from F18 Blue Angel)
Inline Inline81 = createNode("Inline");
Inline81.url = new MFString(new java.lang.String["RearLeftWheel.x3d","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/RearLeftWheel.x3d","RearLeftWheel.wrl","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/RearLeftWheel.wrl"]);
Transform80.children = new MFNode();

Transform80.children[0] = Inline81;

Transform18.children[4] = Transform80;

Transform Transform82 = createNode("Transform");
Transform82.DEF = "RearRightWheelTransform";
Transform82.center = new SFVec3f(new float[0,2.5,0]);
Transform82.rotation = new SFRotation(new float[-1,0,-1,1.92]);
Transform82.translation = new SFVec3f(new float[2.95,-5,7]);
//Rear wheels are taken from the Savage Library and re-animated (from F18 Blue Angel)
Inline Inline83 = createNode("Inline");
Inline83.url = new MFString(new java.lang.String["RearRightWheel.x3d","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/RearRightWheel.x3d","RearRightWheel.wrl","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/RearRightWheel.wrl"]);
Transform82.children = new MFNode();

Transform82.children[0] = Inline83;

Transform18.children[5] = Transform82;

Transform Transform84 = createNode("Transform");
Transform84.DEF = "CockpitButtonsTransform";
Transform Transform85 = createNode("Transform");
Transform85.DEF = "UpButtonTransform";
Transform85.rotation = new SFRotation(new float[1,0,0,1.57]);
Transform85.scale = new SFVec3f(new float[0.008,0.008,0.008]);
Transform85.translation = new SFVec3f(new float[-0.95,1.05,-10]);
Shape Shape86 = createNode("Shape");
Cylinder Cylinder87 = createNode("Cylinder");
Cylinder87.height = 1;
Cylinder87.radius = 4;
Shape86.geometry = Cylinder87;

Appearance Appearance88 = createNode("Appearance");
Material Material89 = createNode("Material");
Material89.diffuseColor = new SFColor(new float[1,0,0]);
Material89.shininess = 0.8;
Appearance88.material = Material89;

Shape86.appearance = Appearance88;

Transform85.children = new MFNode();

Transform85.children[0] = Shape86;

TouchSensor TouchSensor90 = createNode("TouchSensor");
TouchSensor90.DEF = "TouchSensorUp";
TouchSensor90.description = "click for gears up";
Transform85.children[1] = TouchSensor90;

Transform84.children = new MFNode();

Transform84.children[0] = Transform85;

Transform Transform91 = createNode("Transform");
Transform91.DEF = "DownButtonTransform";
Transform91.rotation = new SFRotation(new float[1,0,0,1.57]);
Transform91.scale = new SFVec3f(new float[0.008,0.008,0.008]);
Transform91.translation = new SFVec3f(new float[-0.83,1.05,-10]);
Shape Shape92 = createNode("Shape");
Cylinder Cylinder93 = createNode("Cylinder");
Cylinder93.height = 1;
Cylinder93.radius = 4;
Shape92.geometry = Cylinder93;

Appearance Appearance94 = createNode("Appearance");
Material Material95 = createNode("Material");
Material95.diffuseColor = new SFColor(new float[1,1,0]);
Material95.shininess = 0.8;
Appearance94.material = Material95;

Shape92.appearance = Appearance94;

Transform91.children = new MFNode();

Transform91.children[0] = Shape92;

TouchSensor TouchSensor96 = createNode("TouchSensor");
TouchSensor96.DEF = "TouchSensorDown";
TouchSensor96.description = "click for gears down";
Transform91.children[1] = TouchSensor96;

Transform84.children[1] = Transform91;

Transform Transform97 = createNode("Transform");
Transform97.DEF = "GearUpTextTransform";
Transform97.scale = new SFVec3f(new float[0.06,0.06,0.06]);
Transform97.translation = new SFVec3f(new float[-0.65,1.55,-10]);
Shape Shape98 = createNode("Shape");
Text Text99 = createNode("Text");
Text99.string = new MFString(new java.lang.String["RED Button","Gear Up"]);
Shape98.geometry = Text99;

Appearance Appearance100 = createNode("Appearance");
Material Material101 = createNode("Material");
Material101.diffuseColor = new SFColor(new float[1,0,0]);
Appearance100.material = Material101;

Shape98.appearance = Appearance100;

Transform97.children = new MFNode();

Transform97.children[0] = Shape98;

Transform84.children[2] = Transform97;

Transform Transform102 = createNode("Transform");
Transform102.DEF = "GearDownTextTransform";
Transform102.scale = new SFVec3f(new float[0.06,0.06,0.06]);
Transform102.translation = new SFVec3f(new float[-0.65,1.35,-10]);
Shape Shape103 = createNode("Shape");
Text Text104 = createNode("Text");
Text104.length = new MFFloat(new float[5.5]);
Text104.string = new MFString(new java.lang.String["YELLOW Button","Gear Down"]);
Shape103.geometry = Text104;

Appearance Appearance105 = createNode("Appearance");
Material Material106 = createNode("Material");
Material106.diffuseColor = new SFColor(new float[1,1,0]);
Appearance105.material = Material106;

Shape103.appearance = Appearance105;

Transform102.children = new MFNode();

Transform102.children[0] = Shape103;

Transform84.children[3] = Transform102;

Transform Transform107 = createNode("Transform");
Transform107.DEF = "FireButtonTransform";
Transform107.rotation = new SFRotation(new float[1,0,0,1.57]);
Transform107.scale = new SFVec3f(new float[0.008,0.008,0.008]);
Transform107.translation = new SFVec3f(new float[0.52,1.6,-10]);
Shape Shape108 = createNode("Shape");
Cylinder Cylinder109 = createNode("Cylinder");
Cylinder109.height = 1;
Cylinder109.radius = 4;
Shape108.geometry = Cylinder109;

Appearance Appearance110 = createNode("Appearance");
Material Material111 = createNode("Material");
Material111.diffuseColor = new SFColor(new float[0,0.75,0.18]);
Material111.shininess = 0.8;
Appearance110.material = Material111;

Shape108.appearance = Appearance110;

Transform107.children = new MFNode();

Transform107.children[0] = Shape108;

TouchSensor TouchSensor112 = createNode("TouchSensor");
TouchSensor112.DEF = "FireSensor";
TouchSensor112.description = "click to fire";
Transform107.children[1] = TouchSensor112;

Transform84.children[4] = Transform107;

Transform Transform113 = createNode("Transform");
Transform113.DEF = "FireTextTransform";
Transform113.scale = new SFVec3f(new float[0.06,0.06,0.06]);
Transform113.translation = new SFVec3f(new float[0.36,1.5,-10]);
Shape Shape114 = createNode("Shape");
Text Text115 = createNode("Text");
Text115.string = new MFString(new java.lang.String["Target Locked"," FIRE!..","(Green Button)"]);
Shape114.geometry = Text115;

Appearance Appearance116 = createNode("Appearance");
Material Material117 = createNode("Material");
Material117.diffuseColor = new SFColor(new float[0,0.75,0.18]);
Appearance116.material = Material117;

Shape114.appearance = Appearance116;

Transform113.children = new MFNode();

Transform113.children[0] = Shape114;

Transform84.children[5] = Transform113;

Transform18.children[6] = Transform84;

Viewpoint Viewpoint118 = createNode("Viewpoint");
Viewpoint118.description = "F16 Close Look-up";
Viewpoint118.orientation = new SFRotation(new float[-0.559,-0.827,-0.057,1.3534]);
Viewpoint118.position = new SFVec3f(new float[-28.7,19.9,17.4]);
Transform18.children[7] = Viewpoint118;

Viewpoint Viewpoint119 = createNode("Viewpoint");
Viewpoint119.description = "Cockpit";
Viewpoint119.orientation = new SFRotation(new float[-1,0,0,0.1249]);
Viewpoint119.position = new SFVec3f(new float[0,1.5,-7.9]);
Transform18.children[8] = Viewpoint119;

Viewpoint Viewpoint120 = createNode("Viewpoint");
Viewpoint120.DEF = "LandingGearAnimationView";
Viewpoint120.description = "Landing Gear Animation View";
Viewpoint120.orientation = new SFRotation(new float[-0.003,1,-0.012,2.5741]);
Viewpoint120.position = new SFVec3f(new float[16.1,-5.8,-24.6]);
Transform18.children[9] = Viewpoint120;

Viewpoint Viewpoint121 = createNode("Viewpoint");
Viewpoint121.description = "Cockpit Left View";
Viewpoint121.orientation = new SFRotation(new float[-0.276,-0.922,-0.271,1.2338]);
Viewpoint121.position = new SFVec3f(new float[-6.7,6.1,-3.9]);
Transform18.children[10] = Viewpoint121;

Viewpoint Viewpoint122 = createNode("Viewpoint");
Viewpoint122.description = "F-16 Front View";
Viewpoint122.orientation = new SFRotation(new float[-0.007,0.995,0.102,3.1152]);
Viewpoint122.position = new SFVec3f(new float[-0.1,13.4,-65]);
Transform18.children[11] = Viewpoint122;

Viewpoint Viewpoint123 = createNode("Viewpoint");
Viewpoint123.description = "Cockpit Target View";
Viewpoint123.orientation = new SFRotation(new float[-0.834,-0.523,-0.176,0.0875]);
Viewpoint123.position = new SFVec3f(new float[0,2.4,-7.9]);
Transform18.children[12] = Viewpoint123;

Transform Transform124 = createNode("Transform");
Transform124.DEF = "NoseAntennaTransform";
Transform124.rotation = new SFRotation(new float[1,0,0,1.57]);
Transform124.translation = new SFVec3f(new float[0,-0.275,-21]);
Shape Shape125 = createNode("Shape");
Cylinder Cylinder126 = createNode("Cylinder");
Cylinder126.radius = 0.05;
Shape125.geometry = Cylinder126;

Appearance Appearance127 = createNode("Appearance");
Material Material128 = createNode("Material");
Material128.diffuseColor = new SFColor(new float[0.5,0.5,0.5]);
Material128.shininess = 0.5;
Appearance127.material = Material128;

Shape125.appearance = Appearance127;

Transform124.children = new MFNode();

Transform124.children[0] = Shape125;

Transform18.children[13] = Transform124;

children = new MFNode();

children[0] = Transform18;

TimeSensor TimeSensor129 = createNode("TimeSensor");
TimeSensor129.DEF = "WheelUp";
TimeSensor129.cycleInterval = 8;
children[1] = TimeSensor129;

OrientationInterpolator OrientationInterpolator130 = createNode("OrientationInterpolator");
OrientationInterpolator130.DEF = "GearUpInterpolator";
OrientationInterpolator130.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator130.keyValue = new MFRotation(new float[1,0,0,0,1,0,0,-0.79,1,0,0,-1.92]);
children[2] = OrientationInterpolator130;

ROUTE ROUTE131 = createNode("ROUTE");
ROUTE131.fromField = "touchTime";
ROUTE131.fromNode = "TouchSensorUp";
ROUTE131.toField = "set_startTime";
ROUTE131.toNode = "WheelUp";
children[3] = ROUTE131;

ROUTE ROUTE132 = createNode("ROUTE");
ROUTE132.fromField = "fraction_changed";
ROUTE132.fromNode = "WheelUp";
ROUTE132.toField = "set_fraction";
ROUTE132.toNode = "GearUpInterpolator";
children[4] = ROUTE132;

ROUTE ROUTE133 = createNode("ROUTE");
ROUTE133.fromField = "value_changed";
ROUTE133.fromNode = "GearUpInterpolator";
ROUTE133.toField = "set_rotation";
ROUTE133.toNode = "FrontWheelTransform";
children[5] = ROUTE133;

TimeSensor TimeSensor134 = createNode("TimeSensor");
TimeSensor134.DEF = "WheelDown";
TimeSensor134.cycleInterval = 8;
children[6] = TimeSensor134;

OrientationInterpolator OrientationInterpolator135 = createNode("OrientationInterpolator");
OrientationInterpolator135.DEF = "GearDownInterpolator";
OrientationInterpolator135.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator135.keyValue = new MFRotation(new float[1,0,0,-1.92,1,0,0,-0.79,1,0,0,0]);
children[7] = OrientationInterpolator135;

ROUTE ROUTE136 = createNode("ROUTE");
ROUTE136.fromField = "touchTime";
ROUTE136.fromNode = "TouchSensorDown";
ROUTE136.toField = "set_startTime";
ROUTE136.toNode = "WheelDown";
children[8] = ROUTE136;

ROUTE ROUTE137 = createNode("ROUTE");
ROUTE137.fromField = "fraction_changed";
ROUTE137.fromNode = "WheelDown";
ROUTE137.toField = "set_fraction";
ROUTE137.toNode = "GearDownInterpolator";
children[9] = ROUTE137;

ROUTE ROUTE138 = createNode("ROUTE");
ROUTE138.fromField = "value_changed";
ROUTE138.fromNode = "GearDownInterpolator";
ROUTE138.toField = "set_rotation";
ROUTE138.toNode = "FrontWheelTransform";
children[10] = ROUTE138;

//Animation commands for Rear Right Wheel Starts
TimeSensor TimeSensor139 = createNode("TimeSensor");
TimeSensor139.DEF = "RRearUp1";
TimeSensor139.cycleInterval = 8;
children[11] = TimeSensor139;

TimeSensor TimeSensor140 = createNode("TimeSensor");
TimeSensor140.DEF = "RRearDown1";
TimeSensor140.cycleInterval = 8;
children[12] = TimeSensor140;

OrientationInterpolator OrientationInterpolator141 = createNode("OrientationInterpolator");
OrientationInterpolator141.DEF = "RRearInterUp1";
OrientationInterpolator141.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator141.keyValue = new MFRotation(new float[-1,0,-1,0,-1,0,-1,0.44,-1,0,-1,1.92]);
children[13] = OrientationInterpolator141;

OrientationInterpolator OrientationInterpolator142 = createNode("OrientationInterpolator");
OrientationInterpolator142.DEF = "RRearInterDown1";
OrientationInterpolator142.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator142.keyValue = new MFRotation(new float[-1,0,-1,1.92,-1,0,-1,0.44,-1,0,-1,0]);
children[14] = OrientationInterpolator142;

ROUTE ROUTE143 = createNode("ROUTE");
ROUTE143.fromField = "touchTime";
ROUTE143.fromNode = "TouchSensorDown";
ROUTE143.toField = "set_startTime";
ROUTE143.toNode = "RRearDown1";
children[15] = ROUTE143;

ROUTE ROUTE144 = createNode("ROUTE");
ROUTE144.fromField = "touchTime";
ROUTE144.fromNode = "TouchSensorUp";
ROUTE144.toField = "set_startTime";
ROUTE144.toNode = "RRearUp1";
children[16] = ROUTE144;

ROUTE ROUTE145 = createNode("ROUTE");
ROUTE145.fromField = "fraction_changed";
ROUTE145.fromNode = "RRearDown1";
ROUTE145.toField = "set_fraction";
ROUTE145.toNode = "RRearInterDown1";
children[17] = ROUTE145;

ROUTE ROUTE146 = createNode("ROUTE");
ROUTE146.fromField = "fraction_changed";
ROUTE146.fromNode = "RRearUp1";
ROUTE146.toField = "set_fraction";
ROUTE146.toNode = "RRearInterUp1";
children[18] = ROUTE146;

ROUTE ROUTE147 = createNode("ROUTE");
ROUTE147.fromField = "value_changed";
ROUTE147.fromNode = "RRearInterDown1";
ROUTE147.toField = "set_rotation";
ROUTE147.toNode = "RearRightWheelTransform";
children[19] = ROUTE147;

ROUTE ROUTE148 = createNode("ROUTE");
ROUTE148.fromField = "value_changed";
ROUTE148.fromNode = "RRearInterUp1";
ROUTE148.toField = "set_rotation";
ROUTE148.toNode = "RearRightWheelTransform";
children[20] = ROUTE148;

//Animation commands for Rear Left Wheel
TimeSensor TimeSensor149 = createNode("TimeSensor");
TimeSensor149.DEF = "LRearUp1";
TimeSensor149.cycleInterval = 8;
children[21] = TimeSensor149;

TimeSensor TimeSensor150 = createNode("TimeSensor");
TimeSensor150.DEF = "LRearDown1";
TimeSensor150.cycleInterval = 8;
children[22] = TimeSensor150;

OrientationInterpolator OrientationInterpolator151 = createNode("OrientationInterpolator");
OrientationInterpolator151.DEF = "LRearInterUp1";
OrientationInterpolator151.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator151.keyValue = new MFRotation(new float[1,0,1,0,1,0,1,0.44,1,0,1,1.92]);
children[23] = OrientationInterpolator151;

OrientationInterpolator OrientationInterpolator152 = createNode("OrientationInterpolator");
OrientationInterpolator152.DEF = "LRearInterDown1";
OrientationInterpolator152.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator152.keyValue = new MFRotation(new float[1,0,1,1.92,1,0,1,0.44,1,0,1,0]);
children[24] = OrientationInterpolator152;

ROUTE ROUTE153 = createNode("ROUTE");
ROUTE153.fromField = "touchTime";
ROUTE153.fromNode = "TouchSensorDown";
ROUTE153.toField = "set_startTime";
ROUTE153.toNode = "LRearDown1";
children[25] = ROUTE153;

ROUTE ROUTE154 = createNode("ROUTE");
ROUTE154.fromField = "touchTime";
ROUTE154.fromNode = "TouchSensorUp";
ROUTE154.toField = "set_startTime";
ROUTE154.toNode = "LRearUp1";
children[26] = ROUTE154;

ROUTE ROUTE155 = createNode("ROUTE");
ROUTE155.fromField = "fraction_changed";
ROUTE155.fromNode = "LRearDown1";
ROUTE155.toField = "set_fraction";
ROUTE155.toNode = "LRearInterDown1";
children[27] = ROUTE155;

ROUTE ROUTE156 = createNode("ROUTE");
ROUTE156.fromField = "fraction_changed";
ROUTE156.fromNode = "LRearUp1";
ROUTE156.toField = "set_fraction";
ROUTE156.toNode = "LRearInterUp1";
children[28] = ROUTE156;

ROUTE ROUTE157 = createNode("ROUTE");
ROUTE157.fromField = "value_changed";
ROUTE157.fromNode = "LRearInterDown1";
ROUTE157.toField = "set_rotation";
ROUTE157.toNode = "RearLeftWheelTransform";
children[29] = ROUTE157;

ROUTE ROUTE158 = createNode("ROUTE");
ROUTE158.fromField = "value_changed";
ROUTE158.fromNode = "LRearInterUp1";
ROUTE158.toField = "set_rotation";
ROUTE158.toNode = "RearLeftWheelTransform";
children[30] = ROUTE158;

Background Background159 = createNode("Background");
Background159.groundAngle = new MFFloat(new float[1.309,1.570796]);
Background159.groundColor = new MFColor(new float[0,0.3,0.7,0,0.35,0.75,0,0.4,0.8]);
Background159.skyAngle = new MFFloat(new float[1.309,1.571]);
Background159.skyColor = new MFColor(new float[0,0.3,0.8,0,0.5,1,1,1,1]);
children[31] = Background159;

Transform Transform160 = createNode("Transform");
Transform160.DEF = "RightmostAmraamTransform";
Transform160.rotation = new SFRotation(new float[-1,0,0,1.57]);
Transform160.scale = new SFVec3f(new float[1.4,1.4,1.4]);
Transform160.translation = new SFVec3f(new float[15.65,0,4.5]);
Inline Inline161 = createNode("Inline");
Inline161.DEF = "Amraam";
Inline161.url = new MFString(new java.lang.String["../../Weapons/Missiles/Amraam.x3d","https://savage.nps.edu/Savage/Weapons/Missiles/Amraam.x3d","../../Weapons/Missiles/Amraam.wrl","https://savage.nps.edu/Savage/Weapons/Missiles/Amraam.wrl"]);
Transform160.children = new MFNode();

Transform160.children[0] = Inline161;

children[32] = Transform160;

Transform Transform162 = createNode("Transform");
Transform162.DEF = "LeftmostAmraamTransform";
Transform162.rotation = new SFRotation(new float[-1,0,0,1.57]);
Transform162.scale = new SFVec3f(new float[1.4,1.4,1.4]);
Transform162.translation = new SFVec3f(new float[-15.65,0,4.5]);
Inline Inline163 = createNode("Inline");
Inline163.USE = "Amraam";
Transform162.children = new MFNode();

Transform162.children[0] = Inline163;

children[33] = Transform162;

Transform Transform164 = createNode("Transform");
Transform164.DEF = "SidewinderHolderTransformRight";
Transform164.rotation = new SFRotation(new float[0,1,0,1.57]);
Transform164.scale = new SFVec3f(new float[6,3,3]);
Transform164.translation = new SFVec3f(new float[9,-1.125,8]);
Inline Inline165 = createNode("Inline");
Inline165.DEF = "SidewinderHolder";
Inline165.url = new MFString(new java.lang.String["SidewinderHolder.x3d","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/SidewinderHolder.x3d","SidewinderHolder.wrl","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/SidewinderHolder.wrl"]);
Transform164.children = new MFNode();

Transform164.children[0] = Inline165;

children[34] = Transform164;

Transform Transform166 = createNode("Transform");
Transform166.DEF = "SidewinderHolderTransformLeft";
Transform166.rotation = new SFRotation(new float[0,1,0,1.57]);
Transform166.scale = new SFVec3f(new float[6,3,3]);
Transform166.translation = new SFVec3f(new float[-8.45,-1.125,8]);
Inline Inline167 = createNode("Inline");
Inline167.USE = "SidewinderHolder";
Transform166.children = new MFNode();

Transform166.children[0] = Inline167;

children[35] = Transform166;

Transform Transform168 = createNode("Transform");
Transform168.DEF = "TurkishFlagTransformLeft";
Transform168.rotation = new SFRotation(new float[0,-1,0,1.57]);
Transform168.scale = new SFVec3f(new float[0.3,0.25,0.3]);
Transform168.translation = new SFVec3f(new float[-0.01,8,19.5]);
Inline Inline169 = createNode("Inline");
Inline169.url = new MFString(new java.lang.String["TurkishFlagLeft.x3d","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/TurkishFlagLeft.x3d","TurkishFlagLeft.wrl","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/TurkishFlagLeft.wrl"]);
Transform168.children = new MFNode();

Transform168.children[0] = Inline169;

children[36] = Transform168;

Transform Transform170 = createNode("Transform");
Transform170.DEF = "TurkishFlagTransformRight";
Transform170.rotation = new SFRotation(new float[0,1,0,1.57]);
Transform170.scale = new SFVec3f(new float[0.3,0.25,0.3]);
Transform170.translation = new SFVec3f(new float[0.01,8,20.5]);
Inline Inline171 = createNode("Inline");
Inline171.url = new MFString(new java.lang.String["TurkishFlagRight.x3d","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/TurkishFlagRight.x3d","TurkishFlagRight.wrl","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/TurkishFlagRight.wrl"]);
Transform170.children = new MFNode();

Transform170.children[0] = Inline171;

children[37] = Transform170;

Transform Transform172 = createNode("Transform");
Transform172.DEF = "AmraamHolderTransformLeft";
Transform172.translation = new SFVec3f(new float[-12,-0.176,10.7]);
Inline Inline173 = createNode("Inline");
Inline173.DEF = "AmraamHolder";
Inline173.url = new MFString(new java.lang.String["AmraamHolder.x3d","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/AmraamHolder.x3d","AmraamHolder.wrl","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/AmraamHolder.wrl"]);
Transform172.children = new MFNode();

Transform172.children[0] = Inline173;

children[38] = Transform172;

Transform Transform174 = createNode("Transform");
Transform174.DEF = "AmraamHolderTransformRight";
Transform174.translation = new SFVec3f(new float[12,-0.176,10.7]);
Inline Inline175 = createNode("Inline");
Inline175.USE = "AmraamHolder";
Transform174.children = new MFNode();

Transform174.children[0] = Inline175;

children[39] = Transform174;

Transform Transform176 = createNode("Transform");
Transform176.DEF = "AmraamInnerTransformRight";
Transform176.rotation = new SFRotation(new float[-1,0,0,1.57]);
Transform176.scale = new SFVec3f(new float[1.4,1.4,1.4]);
Transform176.translation = new SFVec3f(new float[12,-1.6,4.5]);
Inline Inline177 = createNode("Inline");
Inline177.USE = "Amraam";
Transform176.children = new MFNode();

Transform176.children[0] = Inline177;

children[40] = Transform176;

Transform Transform178 = createNode("Transform");
Transform178.DEF = "AmraamInnerTransformLeft";
Transform178.rotation = new SFRotation(new float[-1,0,0,1.57]);
Transform178.scale = new SFVec3f(new float[1.4,1.4,1.4]);
Transform178.translation = new SFVec3f(new float[-12,-1.6,4.5]);
Inline Inline179 = createNode("Inline");
Inline179.USE = "Amraam";
Transform178.children = new MFNode();

Transform178.children[0] = Inline179;

children[41] = Transform178;

Transform Transform180 = createNode("Transform");
Transform180.DEF = "SidewinderTransformLeft";
Transform180.rotation = new SFRotation(new float[-1,0,0,1.57]);
Transform180.scale = new SFVec3f(new float[1.6,1.6,1.6]);
Transform180.translation = new SFVec3f(new float[-8.7,-2,3.5]);
Inline Inline181 = createNode("Inline");
Inline181.DEF = "Sidewinder";
Inline181.url = new MFString(new java.lang.String["../../Weapons/Missiles/Sidewinder.x3d","https://savage.nps.edu/Savage/Weapons/Missiles/Sidewinder.x3d","../../Weapons/Missiles/Sidewinder.wrl","https://savage.nps.edu/Savage/Weapons/Missiles/Sidewinder.wrl"]);
Transform180.children = new MFNode();

Transform180.children[0] = Inline181;

children[42] = Transform180;

Transform Transform182 = createNode("Transform");
Transform182.DEF = "SidewinderTransformRight";
Transform182.rotation = new SFRotation(new float[-1,0,0,1.57]);
Transform182.scale = new SFVec3f(new float[1.6,1.6,1.6]);
Transform182.translation = new SFVec3f(new float[8.7,-2,3.5]);
Inline Inline183 = createNode("Inline");
Inline183.USE = "Sidewinder";
Transform182.children = new MFNode();

Transform182.children[0] = Inline183;

children[43] = Transform182;

Transform Transform184 = createNode("Transform");
Transform184.DEF = "FuelTankHolderTransformLeft";
Transform184.rotation = new SFRotation(new float[0,1,0,1.57]);
Transform184.scale = new SFVec3f(new float[1.5,1.5,1.5]);
Transform184.translation = new SFVec3f(new float[-4.8,-1.125,6]);
Inline Inline185 = createNode("Inline");
Inline185.DEF = "FuelTankHolder";
Inline185.url = new MFString(new java.lang.String["FuelTankHolder.x3d","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/FuelTankHolder.x3d","FuelTankHolder.wrl","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/FuelTankHolder.wrl"]);
Transform184.children = new MFNode();

Transform184.children[0] = Inline185;

children[44] = Transform184;

Transform Transform186 = createNode("Transform");
Transform186.DEF = "FuelTankHolderTransformRight";
Transform186.rotation = new SFRotation(new float[0,1,0,1.57]);
Transform186.scale = new SFVec3f(new float[1.5,1.5,1.5]);
Transform186.translation = new SFVec3f(new float[5.3,-1.125,6]);
Inline Inline187 = createNode("Inline");
Inline187.USE = "FuelTankHolder";
Transform186.children = new MFNode();

Transform186.children[0] = Inline187;

children[45] = Transform186;

Transform Transform188 = createNode("Transform");
Transform188.DEF = "FuelTankTransformRight";
Transform188.rotation = new SFRotation(new float[-1,0,0,1.57]);
Transform188.scale = new SFVec3f(new float[1.5,1.5,1.5]);
Transform188.translation = new SFVec3f(new float[5,-2.85,5.5]);
Inline Inline189 = createNode("Inline");
Inline189.DEF = "FuelTank";
Inline189.url = new MFString(new java.lang.String["FuelTank.x3d","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/FuelTank.x3d","FuelTank.wrl","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/FuelTank.wrl"]);
Transform188.children = new MFNode();

Transform188.children[0] = Inline189;

children[46] = Transform188;

Transform Transform190 = createNode("Transform");
Transform190.DEF = "FuelTankTransformLeft";
Transform190.rotation = new SFRotation(new float[-1,0,0,1.57]);
Transform190.scale = new SFVec3f(new float[1.5,1.5,1.5]);
Transform190.translation = new SFVec3f(new float[-5,-2.85,5.5]);
Inline Inline191 = createNode("Inline");
Inline191.USE = "FuelTank";
Transform190.children = new MFNode();

Transform190.children[0] = Inline191;

children[47] = Transform190;

Transform Transform192 = createNode("Transform");
Transform192.DEF = "InlineCoverOfPlaneTansform";
Shape Shape193 = createNode("Shape");
Box Box194 = createNode("Box");
Box194.size = new SFVec3f(new float[4.15,0.1,20]);
Shape193.geometry = Box194;

Appearance Appearance195 = createNode("Appearance");
Material Material196 = createNode("Material");
Material196.diffuseColor = new SFColor(new float[0.25,0.25,0.25]);
Appearance195.material = Material196;

Shape193.appearance = Appearance195;

Transform192.children = new MFNode();

Transform192.children[0] = Shape193;

children[48] = Transform192;

Transform Transform197 = createNode("Transform");
Transform197.DEF = "TargetHelicopterTransform";
Transform197.translation = new SFVec3f(new float[16,-50,-500]);
Inline Inline198 = createNode("Inline");
Inline198.url = new MFString(new java.lang.String["Target.x3d","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/Target.x3d","Target.wrl","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/Target.wrl"]);
Transform197.children = new MFNode();

Transform197.children[0] = Inline198;

children[49] = Transform197;

TimeSensor TimeSensor199 = createNode("TimeSensor");
TimeSensor199.DEF = "FireClock";
TimeSensor199.cycleInterval = 8;
children[50] = TimeSensor199;

PositionInterpolator PositionInterpolator200 = createNode("PositionInterpolator");
PositionInterpolator200.DEF = "MissilePath";
PositionInterpolator200.key = new MFFloat(new float[0,0.1,1]);
PositionInterpolator200.keyValue = new MFVec3f(new float[-15.65,0,4.5,-15.65,-2,4.5,16,-50,-500]);
children[51] = PositionInterpolator200;

ROUTE ROUTE201 = createNode("ROUTE");
ROUTE201.fromField = "touchTime";
ROUTE201.fromNode = "FireSensor";
ROUTE201.toField = "set_startTime";
ROUTE201.toNode = "FireClock";
children[52] = ROUTE201;

ROUTE ROUTE202 = createNode("ROUTE");
ROUTE202.fromField = "fraction_changed";
ROUTE202.fromNode = "FireClock";
ROUTE202.toField = "set_fraction";
ROUTE202.toNode = "MissilePath";
children[53] = ROUTE202;

ROUTE ROUTE203 = createNode("ROUTE");
ROUTE203.fromField = "value_changed";
ROUTE203.fromNode = "MissilePath";
ROUTE203.toField = "set_translation";
ROUTE203.toNode = "LeftmostAmraamTransform";
children[54] = ROUTE203;

Viewpoint Viewpoint204 = createNode("Viewpoint");
Viewpoint204.DEF = "MissileLaunchView";
Viewpoint204.description = "Missile Fire View";
Viewpoint204.orientation = new SFRotation(new float[0.094,-0.994,0.057,1.1716]);
Viewpoint204.position = new SFVec3f(new float[-344.3,-142.8,-27.7]);
children[55] = Viewpoint204;

ROUTE ROUTE205 = createNode("ROUTE");
ROUTE205.fromField = "isActive";
ROUTE205.fromNode = "FireSensor";
ROUTE205.toField = "set_bind";
ROUTE205.toNode = "MissileLaunchView";
children[56] = ROUTE205;

//TODO fix type, add filter
}
