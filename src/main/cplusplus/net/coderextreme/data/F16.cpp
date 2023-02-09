/* delete next 5 lines for Visual Studio */
#define FALSE false
#define TRUE true
#define WINAPI
#define AFX_EXT_CLASS
#define EXPORT32
#include "C:/x3d-code/www.web3d.org/x3d/stylesheets/cpp/concretes.h"
int main(int argc, char ** argv) {
CX3DScene m_pScene;
CBrowser browser = X3D.getBrowser();
CX3D* X3D0 = new CX3D();
CGroup* group = (CGroup*)(m_pScene.createNode("Group"));
group->addChildren(X3D0);
X3D0->setProfile("Immersive");
X3D0->setVersion("3.0");
Chead* head1 = new Chead();
Cmeta* meta2 = new Cmeta();
meta2->setName("title");
meta2->setContent("F16.x3d");
head1->addMeta(*meta2);

Cmeta* meta3 = new Cmeta();
meta3->setName("description");
meta3->setContent("F-16, The Fighting Falcon, Turkish Air Force (TUAF), Turkey");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("creator");
meta4->setContent("Murat ONDER, LTJG, Turkish Navy");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("creator");
meta5->setContent("The coordinates of the main body (Except landing gears, nose antenna, flag, weapons, missile holders, cockpit, cockpit seat and fuel tanks) are mostly similar to the model of Soji Yamakawa and used with permission.");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("created");
meta6->setContent("13 July 2003");
head1->addMeta(*meta6);

Cmeta* meta7 = new Cmeta();
meta7->setName("modified");
meta7->setContent("27 November 2015");
head1->addMeta(*meta7);

Cmeta* meta8 = new Cmeta();
meta8->setName("reference");
meta8->setContent("http://www.fas.org/man/dod-101/sys/ac/f-16.htm");
head1->addMeta(*meta8);

Cmeta* meta9 = new Cmeta();
meta9->setName("permission");
meta9->setContent("Here is a copy of the permission for the usage of the main hull; -----Original Message----- From: Soji Yamakawa [mailto:soji@andrew.cmu.edu] Sent: Tuesday, September 16, 2003 8:00 PM To: Onder, Murat TUR Subject: Re: VRML model points usage permission Sure. No problem. Soji ----- Original Message ----- From: \"Murat Onder\" <monder@nps.navy.mil> To: <Soji_Yamakawa@cmu.edu>; <PEB01130@nifty.ne.jp> Sent: Monday, September 15, 2003 3:50 PM Subject: VRML model points usage permission Hi Sir, I&apos;m a MS student in Naval Postgraduate School. I'm making a model of Turkish F-16 for my project in a VRML course. For the main hull of the F-16, I want to use the coordinate points of your VRML model since I think that model represents well enough F-16. This is going to be only a student project and will not be used for any commercial purposes. Of course I'll make the citation and put the reference links to your page in the meta files of x3d file. I'd like to know if you can give permission to use those points in my model. V/R, Murat Onder LTJG, TU NAVY");
head1->addMeta(*meta9);

Cmeta* meta10 = new Cmeta();
meta10->setName("reference");
meta10->setContent("The landing gears are taken from the Savage Archive, from F18 Blue Angel, then modified and re-animated.");
head1->addMeta(*meta10);

Cmeta* meta11 = new Cmeta();
meta11->setName("drawing");
meta11->setContent("\"Drawing.jpg\" \"../../../Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/Drawing.jpg\" \"https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/Drawing.jpg\"");
head1->addMeta(*meta11);

Cmeta* meta12 = new Cmeta();
meta12->setName("Image");
meta12->setContent("\"FrontView.jpg\" \"FrontView2.jpg\" \"Missiles.jpg\" \"../../../Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/FrontView.jpg\" \"https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/FrontView.jpg\" \"../../../Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/FrontView2.jpg\" \"https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/FrontView2.jpg\" \"../../../Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/Missiles.jpg\" \"https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/Missiles.jpg\"");
head1->addMeta(*meta12);

Cmeta* meta13 = new Cmeta();
meta13->setName("identifier");
meta13->setContent("https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/F16.x3d");
head1->addMeta(*meta13);

Cmeta* meta14 = new Cmeta();
meta14->setName("subject");
meta14->setContent("F16, F-16, Fighting Falcon");
head1->addMeta(*meta14);

Cmeta* meta15 = new Cmeta();
meta15->setName("generator");
meta15->setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
head1->addMeta(*meta15);

Cmeta* meta16 = new Cmeta();
meta16->setName("license");
meta16->setContent("../../license.html");
head1->addMeta(*meta16);

X3D0->setHead(*head1);

CScene* Scene17 = new CScene();
CTransform* Transform18 = (CTransform *)(m_pScene.createNode("Transform"));
Transform18->setDEF("F16Transform");
CTransform* Transform19 = (CTransform *)(m_pScene.createNode("Transform"));
Transform19->setDEF("MainFrameTransform");
Transform19->setScale(new float[3]{3,3,3});
CShape* Shape20 = (CShape *)(m_pScene.createNode("Shape"));
Shape20->setDEF("Nose");
CAppearance* Appearance21 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material22 = (CMaterial *)(m_pScene.createNode("Material"));
Material22->setDiffuseColor(new float[3]{0.25,0.25,0.25});
Appearance21->setMaterial(*Material22);

Shape20->setAppearance(*Appearance21);

CIndexedFaceSet* IndexedFaceSet23 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet23->setCoordIndex(new int[32]{24,0,3,-1,4,0,24,-1,25,26,27,-1,28,25,27,-1,27,29,28,-1,27,30,29,-1,27,31,30,-1,3,18,24,-1});
IndexedFaceSet23->setCreaseAngle(0.5);
IndexedFaceSet23->setNormalIndex(new int[32]{16,0,3,-1,4,0,16,-1,17,17,17,-1,18,18,18,-1,19,19,19,-1,20,20,20,-1,21,21,21,-1,3,14,16,-1});
IndexedFaceSet23->setSolid(False);
CCoordinate* Coordinate24 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate24->setDEF("coordinates");
Coordinate24->setPoint(new float[621]{-0.32,0.36,-4.91,-0.38,0.43,-4.21,0,0.6,-4.2,0,0.5,-4.9,-0.5,0,-4.9,-0.6,0,-4.2,1,0,5.8,1,0,5.3,2.8,-0.4,6.3,2.8,-0.4,6.61,0.31,-0.36,-4.9,0.4,-0.35,-4.2,0,-0.4,-4.2,0,-0.4,-4.9,-0.31,-0.36,-4.9,-0.4,-0.35,-4.2,0.5,0,-4.9,0.6,0,-4.2,0.32,0.36,-4.91,0.38,0.43,-4.21,-1,0,5.8,-1,0,5.3,-2.8,-0.4,6.3,-2.8,-0.4,6.61,0,-0.1,-7,-0.31,-0.36,-4.9,-0.5,0,-4.9,0,-0.1,-7,0,-0.4,-4.9,0.31,-0.36,-4.9,0.5,0,-4.9,0.32,0.36,-4.91,-0.27,0.93,-3.51,0,1.1,-3.6,-0.33,0.5,-3.41,-0.34,0.9,-1.73,0,0.9,-1,0,1.1,-1.8,-0.38,0.64,-1.68,0.34,0.9,-1.73,0,0.9,-1,0.38,0.64,-1.68,0.34,0.9,-1.73,0.27,0.93,-3.51,0.33,0.5,-3.41,0,1.3,-2.8,0.45,1.02,-2.68,0.38,0.64,-1.68,0.53,0.5,-2.56,-0.53,0.5,-2.56,-0.45,1.02,-2.68,-0.53,0.75,0,-0.56,0.66,2.8,0,0.7,2.8,0,0.8,0,-1.1,0.3,0,-1,0.3,2.8,-0.37,0.57,4.9,0,0.59,4.9,-0.7,0.3,4.9,-0.7,0.3,4.9,-0.7,0,7,-0.5,0.49,7,-0.5,0.49,7,0,0.7,7,-1.4,0,0,-1.4,0,3.9,-1.4,0,3.9,-1,0,3.9,-1,0.3,2.8,-1,0.3,4.9,-0.59,0.65,-0.77,-0.8,0.3,-0.6,-1.4,0,-0.7,-1,-0.1,2.8,-0.7,-0.7,-2.5,-0.5,-0.9,-2.5,-0.5,-0.9,-0.6,-0.7,-0.7,-0.6,0,-1,-2.5,0,-1,-0.6,-0.72,-0.12,-2.5,-0.8,-0.3,-2.5,-0.8,-0.3,-0.6,-0.8,-0.3,-2.5,-0.8,-0.3,-0.6,-1.4,0,0,-1.4,0,-0.7,-0.7,-0.1,4.9,-1,-0.1,4.9,-0.5,-0.9,4.9,-0.7,-0.7,4.9,0,-1,4.9,-0.7,-0.1,4.9,-0.5,-0.5,7,-0.7,0,7,0,-0.7,7,-1,0,7.4,-2.8,-0.4,7.1,-2.57,-0.32,7.42,-4.9,0.1,4,-5.1,0.1,4,-5.1,-0.1,4,-4.9,-0.1,4,-5.1,0.1,1.6,-5.1,-0.1,1.6,-4.9,0.1,2.8,-4.9,-0.1,2.8,-0.58,-0.83,3.6,-0.72,-1.4,3.9,-0.69,-1.32,4.9,-0.58,-0.83,4.9,0.58,-0.83,3.6,0.72,-1.4,3.9,0.69,-1.32,4.9,0.58,-0.83,4.9,4.9,-0.1,2.8,5.1,-0.1,1.6,5.1,-0.1,4,4.9,-0.1,4,-0.8,0,-2.5,4.9,0.1,4,5.1,0.1,4,5.1,0.1,1.6,4.9,0.1,2.8,0.59,0.65,-0.77,0.8,0.3,-0.6,0.8,0,-2.5,-0.8,0,-2.5,0.8,-0.3,-0.6,0.72,-0.12,-2.5,0.8,0,-2.5,1,0,7.4,2.8,-0.4,7.1,2.57,-0.32,7.42,-0.7,0,7.4,0.5,-0.9,4.9,0.7,-0.7,4.9,0.5,-0.5,7,-4.9,0,2.8,-4.9,0,3.9,0.7,-0.1,4.9,0.7,0,7,1.4,0,0,4.9,0,2.8,4.9,0,3.9,1.4,0,3.9,1.4,0,-0.7,1.4,0,-0.7,0.7,-0.7,-0.6,0.8,-0.3,-0.6,0.5,-0.9,-0.6,1,-0.1,4.9,1,0.3,4.9,0.7,0,7.4,0.7,0.3,4.9,0.7,-0.1,4.9,0.56,0.66,2.8,0.53,0.75,0,1,0.3,2.8,1.1,0.3,0,0.37,0.57,4.9,0.7,0.3,4.9,0.5,0.49,7,0.7,0,7,0.5,0.49,7,1.4,0,3.9,1.4,0,0,1,0.3,2.8,1,0,3.9,1,-0.1,2.8,0.5,-0.9,-2.5,0.7,-0.7,-2.5,0.8,-0.3,-2.5,0.8,-0.3,-2.5,1,0.3,3.9,0.59,0.65,-0.77,0,0.7,2.8,0,1.4,4.5,0,0.59,4.9,0,3.5,6.8,0,3.5,8.1,0,1.4,7.3,0,0.7,7,0,0.7,7.3,-1,0.3,3.9,0,0.35,7.7,-0.25,0.24,7.7,-0.35,0,7.7,-0.25,-0.25,7.7,0,-0.35,7.7,0.25,-0.25,7.7,0.35,0,7.7,0.25,0.24,7.7,0,-0.2,-2.5,0.7,-0.7,-2.5,0.5,-0.9,-2.5,0,-1,-2.5,-0.5,-0.9,-2.5,-0.7,-0.7,-2.5,0,-0.2,-2.5,-0.72,-0.12,-2.5,0.72,-0.12,-2.5,0.25,0.24,7.7,0.35,0,7.7,-0.35,0,7.7,-0.25,0.24,7.7});
IndexedFaceSet23->setCoord(*Coordinate24);

CNormal* Normal25 = (CNormal *)(m_pScene.createNode("Normal"));
Normal25->setDEF("normalVector");
Normal25->setVector(new float[396]{-0.68,0.714,-0.166,-0.689,0.721,-0.072,0,0.965,-0.26,0,0.985,-0.175,-0.99,-0.016,-0.138,-0.999,-0.022,-0.037,0.567,-0.819,-0.093,0.561,-0.828,0,0,-1,0,0,-0.997,-0.071,-0.567,-0.819,-0.093,-0.561,-0.828,0,0.99,-0.016,-0.138,0.999,-0.022,-0.037,0.68,0.714,-0.166,0.689,0.721,-0.072,-0.351,0.889,-0.294,-0.868,-0.459,-0.19,-0.13,-0.982,-0.14,0.13,-0.982,-0.14,0.868,-0.459,-0.19,0.872,0.431,-0.231,-0.834,0.445,-0.327,0,0.929,-0.369,-0.88,0.401,-0.256,-0.799,0.577,0.169,-0.58,0.798,0.164,0,0.998,0.065,-0.862,0.486,0.146,0.886,0.219,0.408,0.799,0.577,0.169,0.834,0.445,-0.327,0.88,0.401,-0.256,0,0.995,-0.096,0.842,0.534,-0.08,0.862,0.486,0.146,0.833,0.549,-0.073,-0.833,0.549,-0.073,-0.842,0.534,-0.08,-0.485,0.87,-0.089,-0.37,0.929,0,0,1,0,0,1,-0.01,-0.592,0.796,-0.125,-0.573,0.818,0.05,-0.37,0.929,-0.01,0,1,-0.025,-0.487,0.873,0.036,-0.923,0.381,0.05,-0.683,0.704,0.195,0,0.99,0.14,-0.707,0.707,0,-0.385,0.912,0.141,0,0.966,0.259,-0.563,0.826,-0.037,-0.661,0.738,-0.138,-0.521,0.846,-0.115,0,-0.996,0.09,-0.773,-0.436,-0.461,-0.42,-0.781,-0.463,-0.474,-0.881,0,-0.871,-0.492,0,0,-0.891,-0.455,-0.917,0.399,0,-0.881,0.074,-0.467,-0.902,-0.429,-0.039,-0.09,-0.995,0.05,-0.451,-0.892,0,-0.28,-0.959,0.04,-0.468,-0.878,0.097,-0.877,-0.474,0.085,0,-0.997,0.072,-0.693,-0.72,0.045,-0.79,-0.562,0.244,-0.968,0.003,0.25,0,-0.966,0.257,0,0,1,-1,0,0,0.987,0,-0.16,1,0,0,-0.831,-0.551,-0.08,0.563,0.826,-0.037,0.661,0.738,-0.138,0.998,-0.037,-0.049,-0.987,0,-0.16,-0.998,-0.037,-0.049,0.831,-0.551,-0.08,0,-0.999,0.04,0,0.993,0.12,0.468,-0.878,0.097,0.877,-0.474,0.085,0.79,-0.562,0.244,-0.419,-0.897,-0.14,0.693,-0.72,0.045,0.968,0.003,0.25,0.521,0.846,-0.115,0.419,-0.897,-0.14,0.871,-0.492,0,0.902,-0.429,-0.039,0.474,-0.881,0,0.37,0.929,0,0.485,0.87,-0.089,0.573,0.818,0.05,0.592,0.796,-0.125,0.37,0.929,-0.01,0.487,0.873,0.036,0.923,0.381,0.05,0.683,0.704,0.195,0.385,0.912,0.141,0.707,0.707,0,0.42,-0.781,-0.463,0.773,-0.436,-0.461,0.917,0.399,0,0.881,0.074,-0.467,0.09,-0.995,0.05,0.451,-0.892,0,0.28,-0.959,0.04,0.42,0.901,-0.11,0,0.666,0.746,-0.481,0.468,0.741,-0.674,0,0.738,-0.475,-0.475,0.741,0,-0.674,0.738,0.475,-0.475,0.741,0.674,0,0.738,0.481,0.468,0.741,0,0,-1,0,-0.893,-0.45,-0.901,-0.224,-0.372,0.901,-0.224,-0.372,0.841,0.34,0.421,-0.841,0.34,0.421});
IndexedFaceSet23->setNormal(*Normal25);

Shape20->setGeometry(IndexedFaceSet23);

Transform19->addChildren(*Shape20);

CShape* Shape26 = (CShape *)(m_pScene.createNode("Shape"));
Shape26->setDEF("Canopy");
CAppearance* Appearance27 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material28 = (CMaterial *)(m_pScene.createNode("Material"));
Material28->setDiffuseColor(new float[3]{0.25,0.25,0.25});
Material28->setTransparency(0.8);
Appearance27->setMaterial(*Material28);

Shape26->setAppearance(*Appearance27);

CIndexedFaceSet* IndexedFaceSet29 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet29->setCoordIndex(new int[72]{2,32,33,-1,34,32,2,-1,35,36,37,-1,38,36,35,-1,39,40,41,-1,37,36,42,-1,2,43,44,-1,33,43,2,-1,45,37,42,46,-1,46,42,47,48,-1,33,45,46,43,-1,43,46,48,44,-1,34,49,50,32,-1,32,50,45,33,-1,49,38,35,50,-1,50,35,37,45,-1});
IndexedFaceSet29->setCreaseAngle(0.5);
IndexedFaceSet29->setNormalIndex(new int[72]{2,22,23,-1,24,22,2,-1,25,26,27,-1,28,26,25,-1,29,29,29,-1,27,26,30,-1,2,31,32,-1,23,31,2,-1,33,27,30,34,-1,34,30,35,36,-1,23,33,34,31,-1,31,34,36,32,-1,24,37,38,22,-1,22,38,33,23,-1,37,28,25,38,-1,38,25,27,33,-1});
IndexedFaceSet29->setSolid(False);
CCoordinate* Coordinate30 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate30->setUSE("coordinates");
IndexedFaceSet29->setCoord(*Coordinate30);

CNormal* Normal31 = (CNormal *)(m_pScene.createNode("Normal"));
Normal31->setUSE("normalVector");
IndexedFaceSet29->setNormal(*Normal31);

Shape26->setGeometry(IndexedFaceSet29);

Transform19->addChildren(*Shape26);

CShape* Shape32 = (CShape *)(m_pScene.createNode("Shape"));
Shape32->setDEF("MainBodyAndWingEdges");
CAppearance* Appearance33 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material34 = (CMaterial *)(m_pScene.createNode("Material"));
Material34->setDiffuseColor(new float[3]{0.1796,0.1914,0.2382});
Appearance33->setMaterial(*Material34);

Shape32->setAppearance(*Appearance33);

CIndexedFaceSet* IndexedFaceSet35 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet35->setCoordIndex(new int[482]{51,52,53,54,-1,55,56,52,51,-1,52,57,58,53,-1,56,59,57,52,-1,60,61,62,-1,57,59,63,-1,57,63,64,-1,58,57,64,-1,56,55,65,66,-1,67,68,69,-1,69,70,60,-1,71,54,36,-1,51,54,71,-1,72,51,71,-1,55,51,72,-1,72,73,55,-1,65,55,73,-1,68,67,74,-1,75,76,77,78,-1,76,79,80,77,-1,81,82,83,-1,84,75,78,85,-1,83,74,67,-1,67,86,87,83,-1,74,88,89,-1,88,74,83,-1,78,77,90,91,-1,77,80,92,90,-1,85,91,93,-1,85,78,91,-1,94,95,93,-1,94,93,91,-1,91,96,94,-1,96,91,90,-1,90,92,96,-1,100,101,102,103,-1,101,104,105,102,-1,104,106,107,105,-1,106,100,103,107,-1,106,104,101,100,-1,103,102,105,107,-1,116,117,118,119,-1,120,81,83,-1,121,122,123,124,-1,116,119,121,124,-1,48,125,126,127,-1,117,116,124,123,-1,128,72,71,49,-1,118,117,123,122,-1,119,118,122,121,-1,129,130,131,-1,89,88,135,97,-1,60,70,97,135,-1,70,89,97,-1,96,92,136,-1,136,137,96,-1,138,96,137,-1,120,83,87,-1,128,73,72,-1,137,141,138,-1,141,142,138,-1,126,147,127,-1,148,129,131,-1,137,149,150,-1,141,137,150,-1,136,92,80,151,-1,137,136,151,149,-1,132,152,153,-1,154,132,153,155,-1,132,154,156,152,-1,54,53,157,158,-1,158,157,159,160,-1,53,58,161,157,-1,157,161,162,159,-1,163,164,155,-1,165,162,161,-1,64,165,161,-1,64,161,58,-1,166,167,160,159,-1,168,169,146,-1,155,153,168,-1,36,54,125,-1,125,54,158,-1,125,158,126,-1,126,158,160,-1,160,147,126,-1,147,160,167,-1,170,146,169,-1,149,151,171,172,-1,151,80,79,171,-1,129,173,130,-1,150,149,172,174,-1,146,170,129,-1,129,148,143,146,-1,152,156,170,-1,129,170,156,-1,156,154,164,-1,154,155,164,-1,168,175,169,-1,175,153,152,169,-1,152,170,169,-1,48,47,125,-1,41,40,176,-1,71,38,49,-1,71,36,38,-1,61,135,88,-1,61,60,135,-1,68,185,69,-1,68,74,89,-1,68,89,70,185,-1});
IndexedFaceSet35->setCreaseAngle(0.5);
IndexedFaceSet35->setNormalIndex(new int[482]{39,40,41,42,-1,43,44,40,39,-1,40,45,46,41,-1,44,47,45,40,-1,48,48,48,-1,45,47,49,-1,45,49,50,-1,46,45,50,-1,44,43,51,52,-1,53,53,53,-1,41,41,41,-1,54,42,26,-1,39,42,54,-1,55,39,54,-1,43,39,55,-1,55,56,43,-1,51,43,56,-1,57,57,57,-1,58,59,60,61,-1,59,62,8,60,-1,63,63,63,-1,64,58,61,65,-1,66,66,66,-1,67,67,67,67,-1,8,8,8,-1,68,68,68,-1,61,60,69,70,-1,60,8,71,69,-1,65,70,72,-1,65,61,70,-1,73,74,72,-1,73,72,70,-1,70,75,73,-1,75,70,69,-1,69,71,75,-1,76,76,76,76,-1,77,77,77,77,-1,78,78,78,78,-1,79,79,79,79,-1,41,41,41,41,-1,8,8,8,8,-1,8,8,8,8,-1,80,80,80,-1,41,41,41,41,-1,77,77,77,77,-1,36,81,82,83,-1,84,84,84,84,-1,85,55,54,37,-1,79,79,79,79,-1,76,76,76,76,-1,86,86,86,-1,87,87,87,87,-1,88,88,88,88,-1,77,77,77,-1,75,71,89,-1,89,90,75,-1,91,75,90,-1,92,92,92,-1,85,56,55,-1,90,93,91,-1,93,94,91,-1,82,95,83,-1,96,96,96,-1,90,97,98,-1,93,90,98,-1,89,71,8,99,-1,90,89,99,97,-1,79,79,79,-1,88,88,88,88,-1,87,87,87,87,-1,42,41,100,101,-1,101,100,102,103,-1,41,46,104,100,-1,100,104,105,102,-1,106,106,106,-1,107,105,104,-1,50,107,104,-1,50,104,46,-1,108,109,103,102,-1,53,53,53,-1,41,41,41,-1,26,42,81,-1,81,42,101,-1,81,101,82,-1,82,101,103,-1,103,95,82,-1,95,103,109,-1,57,57,57,-1,97,99,110,111,-1,99,8,62,110,-1,112,112,112,-1,98,97,111,113,-1,114,114,114,-1,115,115,115,115,-1,8,8,8,-1,116,116,116,-1,77,77,77,-1,77,77,77,-1,79,79,79,-1,79,79,79,79,-1,79,79,79,-1,36,35,81,-1,117,117,117,-1,54,28,37,-1,54,26,28,-1,79,79,79,-1,79,79,79,-1,77,77,77,-1,77,77,77,-1,77,77,77,77,-1});
IndexedFaceSet35->setSolid(False);
CCoordinate* Coordinate36 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate36->setUSE("coordinates");
IndexedFaceSet35->setCoord(*Coordinate36);

CNormal* Normal37 = (CNormal *)(m_pScene.createNode("Normal"));
Normal37->setUSE("normalVector");
IndexedFaceSet35->setNormal(*Normal37);

Shape32->setGeometry(IndexedFaceSet35);

Transform19->addChildren(*Shape32);

CShape* Shape38 = (CShape *)(m_pScene.createNode("Shape"));
Shape38->setDEF("ExhaustExitFlatPanel");
CAppearance* Appearance39 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material40 = (CMaterial *)(m_pScene.createNode("Material"));
Material40->setDiffuseColor(new float[3]{0.5,0.5,0.5});
Appearance39->setMaterial(*Material40);

Shape38->setAppearance(*Appearance39);

CIndexedFaceSet* IndexedFaceSet41 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet41->setCoordIndex(new int[12]{186,187,188,189,190,-1,190,191,192,193,186,-1});
IndexedFaceSet41->setCreaseAngle(0.5);
IndexedFaceSet41->setNormalIndex(new int[12]{118,119,120,121,122,-1,122,123,124,125,118,-1});
IndexedFaceSet41->setSolid(False);
CCoordinate* Coordinate42 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate42->setUSE("coordinates");
IndexedFaceSet41->setCoord(*Coordinate42);

CNormal* Normal43 = (CNormal *)(m_pScene.createNode("Normal"));
Normal43->setUSE("normalVector");
IndexedFaceSet41->setNormal(*Normal43);

Shape38->setGeometry(IndexedFaceSet41);

Transform19->addChildren(*Shape38);

CShape* Shape44 = (CShape *)(m_pScene.createNode("Shape"));
Shape44->setDEF("ExhaustEntranceFrontBottomPart");
CAppearance* Appearance45 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material46 = (CMaterial *)(m_pScene.createNode("Material"));
Material46->setDiffuseColor(new float[3]{0.2304,0.2304,0.2304});
Appearance45->setMaterial(*Material46);

Shape44->setAppearance(*Appearance45);

CIndexedFaceSet* IndexedFaceSet47 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet47->setCoordIndex(new int[14]{194,130,173,195,196,197,-1,197,198,199,82,81,194,-1});
IndexedFaceSet47->setCreaseAngle(0.5);
IndexedFaceSet47->setNormalIndex(new int[14]{126,126,126,126,126,126,-1,126,126,126,126,126,126,-1});
IndexedFaceSet47->setSolid(False);
CCoordinate* Coordinate48 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate48->setUSE("coordinates");
IndexedFaceSet47->setCoord(*Coordinate48);

CNormal* Normal49 = (CNormal *)(m_pScene.createNode("Normal"));
Normal49->setUSE("normalVector");
IndexedFaceSet47->setNormal(*Normal49);

Shape44->setGeometry(IndexedFaceSet47);

Transform19->addChildren(*Shape44);

CShape* Shape50 = (CShape *)(m_pScene.createNode("Shape"));
Shape50->setDEF("ThirdPartFromNoseUnderCanopy");
CAppearance* Appearance51 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material52 = (CMaterial *)(m_pScene.createNode("Material"));
Material52->setDiffuseColor(new float[3]{0.6,0.6,0.6});
Appearance51->setMaterial(*Material52);

Shape50->setAppearance(*Appearance51);

CIndexedFaceSet* IndexedFaceSet53 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet53->setCoordIndex(new int[46]{12,200,201,15,-1,19,48,127,17,-1,15,201,128,5,-1,17,127,202,11,-1,11,202,200,12,-1,5,128,49,1,-1,48,19,44,-1,19,2,44,-1,34,1,49,-1,34,2,1,-1});
IndexedFaceSet53->setCreaseAngle(0.5);
IndexedFaceSet53->setNormalIndex(new int[46]{8,127,128,11,-1,15,36,83,13,-1,11,128,85,5,-1,13,83,129,7,-1,7,129,127,8,-1,5,85,37,1,-1,36,15,32,-1,15,2,32,-1,24,1,37,-1,24,2,1,-1});
IndexedFaceSet53->setSolid(False);
CCoordinate* Coordinate54 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate54->setUSE("coordinates");
IndexedFaceSet53->setCoord(*Coordinate54);

CNormal* Normal55 = (CNormal *)(m_pScene.createNode("Normal"));
Normal55->setUSE("normalVector");
IndexedFaceSet53->setNormal(*Normal55);

Shape50->setGeometry(IndexedFaceSet53);

Transform19->addChildren(*Shape50);

CShape* Shape56 = (CShape *)(m_pScene.createNode("Shape"));
Shape56->setDEF("RearExhaustExitPartLastPartOfMainBody");
CAppearance* Appearance57 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material58 = (CMaterial *)(m_pScene.createNode("Material"));
Material58->setDiffuseColor(new float[3]{0.37,0.37,0.37});
Material58->setShininess(0.5);
Appearance57->setMaterial(*Material58);

Shape56->setAppearance(*Appearance57);

CIndexedFaceSet* IndexedFaceSet59 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet59->setCoordIndex(new int[40]{64,186,193,165,-1,203,204,164,163,-1,192,191,138,142,-1,191,190,96,138,-1,94,96,190,189,-1,95,94,189,188,-1,63,187,186,64,-1,62,61,205,206,-1});
IndexedFaceSet59->setCreaseAngle(0.5);
IndexedFaceSet59->setNormalIndex(new int[40]{50,118,125,107,-1,130,130,130,130,-1,124,123,91,94,-1,123,122,75,91,-1,73,75,122,121,-1,74,73,121,120,-1,49,119,118,50,-1,131,131,131,131,-1});
IndexedFaceSet59->setSolid(False);
CCoordinate* Coordinate60 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate60->setUSE("coordinates");
IndexedFaceSet59->setCoord(*Coordinate60);

CNormal* Normal61 = (CNormal *)(m_pScene.createNode("Normal"));
Normal61->setUSE("normalVector");
IndexedFaceSet59->setNormal(*Normal61);

Shape56->setGeometry(IndexedFaceSet59);

Transform19->addChildren(*Shape56);

CShape* Shape62 = (CShape *)(m_pScene.createNode("Shape"));
Shape62->setDEF("WingsAndTail");
CAppearance* Appearance63 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material64 = (CMaterial *)(m_pScene.createNode("Material"));
Material64->setEmissiveColor(new float[3]{0.1796,0.1914,0.2382});
Appearance63->setMaterial(*Material64);

Shape62->setAppearance(*Appearance63);

CIndexedFaceSet* IndexedFaceSet65 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet65->setColorPerVertex(False);
IndexedFaceSet65->setCoordIndex(new int[144]{6,7,8,9,-1,9,8,7,6,-1,20,21,22,23,-1,23,22,21,20,-1,97,20,23,98,99,-1,99,98,23,20,97,-1,108,109,110,111,-1,111,110,109,108,-1,112,113,114,115,-1,115,114,113,112,-1,132,6,9,133,134,-1,134,133,9,6,132,-1,86,139,140,67,-1,67,140,139,86,-1,143,144,145,146,-1,146,145,144,143,-1,177,178,179,-1,179,178,177,-1,178,180,181,182,183,179,-1,179,183,182,181,180,178,-1,182,184,183,-1,183,184,182,-1,177,178,179,-1,179,178,177,-1,178,180,181,182,183,179,-1,179,183,182,181,180,178,-1,182,184,183,-1,183,184,182,-1});
IndexedFaceSet65->setCreaseAngle(0.5);
IndexedFaceSet65->setNormalIndex(new int[40]{50,118,125,107,-1,130,130,130,130,-1,124,123,91,94,-1,123,122,75,91,-1,73,75,122,121,-1,74,73,121,120,-1,49,119,118,50,-1,131,131,131,131,-1});
IndexedFaceSet65->setSolid(False);
CCoordinate* Coordinate66 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate66->setUSE("coordinates");
IndexedFaceSet65->setCoord(*Coordinate66);

CNormal* Normal67 = (CNormal *)(m_pScene.createNode("Normal"));
Normal67->setUSE("normalVector");
IndexedFaceSet65->setNormal(*Normal67);

Shape62->setGeometry(IndexedFaceSet65);

Transform19->addChildren(*Shape62);

CShape* Shape68 = (CShape *)(m_pScene.createNode("Shape"));
Shape68->setDEF("SecondPartAfterNose");
CAppearance* Appearance69 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material70 = (CMaterial *)(m_pScene.createNode("Material"));
Material70->setDiffuseColor(new float[3]{0.6,0.6,0.6});
Appearance69->setMaterial(*Material70);

Shape68->setAppearance(*Appearance69);

CIndexedFaceSet* IndexedFaceSet71 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet71->setCoordIndex(new int[40]{0,1,2,3,-1,4,5,1,0,-1,10,11,12,13,-1,14,15,5,4,-1,13,12,15,14,-1,16,17,11,10,-1,18,19,17,16,-1,3,2,19,18,-1});
IndexedFaceSet71->setCreaseAngle(0.5);
IndexedFaceSet71->setNormalIndex(new int[40]{0,1,2,3,-1,4,5,1,0,-1,6,7,8,9,-1,10,11,5,4,-1,9,8,11,10,-1,12,13,7,6,-1,14,15,13,12,-1,3,2,15,14,-1});
IndexedFaceSet71->setSolid(False);
CCoordinate* Coordinate72 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate72->setUSE("coordinates");
IndexedFaceSet71->setCoord(*Coordinate72);

CNormal* Normal73 = (CNormal *)(m_pScene.createNode("Normal"));
Normal73->setUSE("normalVector");
IndexedFaceSet71->setNormal(*Normal73);

Shape68->setGeometry(IndexedFaceSet71);

Transform19->addChildren(*Shape68);

Transform18->addChildren(*Transform19);

CTransform* Transform74 = (CTransform *)(m_pScene.createNode("Transform"));
Transform74->setDEF("CockpitTransform");
Transform74->setRotation(new float[4]{1,0,0,-0.1});
Transform74->setScale(new float[3]{0.045,0.045,0.045});
Transform74->setTranslation(new float[3]{0,1,-10});
CInline* Inline75 = (CInline *)(m_pScene.createNode("Inline"));
Inline75->setUrl(new CString[4]{"Cockpit.x3d","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/Cockpit.x3d","Cockpit.wrl","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/Cockpit.wrl"}, 4);
Transform74->addChildren(*Inline75);

Transform18->addChildren(*Transform74);

CTransform* Transform76 = (CTransform *)(m_pScene.createNode("Transform"));
Transform76->setDEF("SeatTransform");
Transform76->setRotation(new float[4]{-1,0,0,-0.1});
Transform76->setScale(new float[3]{0.9,0.9,0.9});
Transform76->setTranslation(new float[3]{0,0,-8.3});
CInline* Inline77 = (CInline *)(m_pScene.createNode("Inline"));
Inline77->setUrl(new CString[4]{"Seat.x3d","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/Seat.x3d","Seat.wrl","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/Seat.wrl"}, 4);
Transform76->addChildren(*Inline77);

Transform18->addChildren(*Transform76);

CTransform* Transform78 = (CTransform *)(m_pScene.createNode("Transform"));
Transform78->setDEF("FrontWheelTransform");
Transform78->setCenter(new float[3]{0,2.5,0});
Transform78->setRotation(new float[4]{-1,0,0,1.92});
Transform78->setTranslation(new float[3]{0.7,-5.2,-6.5});
//Front wheel is taken from the Savage Library, modified and re-animated.(from F18 Blue Angel)
CInline* Inline79 = (CInline *)(m_pScene.createNode("Inline"));
Inline79->setUrl(new CString[4]{"FrontWheel.x3d","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/FrontWheel.x3d","FrontWheel.wrl","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/FrontWheel.wrl"}, 4);
Transform78->addChildren(*Inline79);

Transform18->addChildren(*Transform78);

CTransform* Transform80 = (CTransform *)(m_pScene.createNode("Transform"));
Transform80->setDEF("RearLeftWheelTransform");
Transform80->setCenter(new float[3]{0,2.5,0});
Transform80->setRotation(new float[4]{1,0,1,1.92});
Transform80->setTranslation(new float[3]{-2.95,-5,7});
//Rear wheels are taken from the Savage Library and re-animated (from F18 Blue Angel)
CInline* Inline81 = (CInline *)(m_pScene.createNode("Inline"));
Inline81->setUrl(new CString[4]{"RearLeftWheel.x3d","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/RearLeftWheel.x3d","RearLeftWheel.wrl","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/RearLeftWheel.wrl"}, 4);
Transform80->addChildren(*Inline81);

Transform18->addChildren(*Transform80);

CTransform* Transform82 = (CTransform *)(m_pScene.createNode("Transform"));
Transform82->setDEF("RearRightWheelTransform");
Transform82->setCenter(new float[3]{0,2.5,0});
Transform82->setRotation(new float[4]{-1,0,-1,1.92});
Transform82->setTranslation(new float[3]{2.95,-5,7});
//Rear wheels are taken from the Savage Library and re-animated (from F18 Blue Angel)
CInline* Inline83 = (CInline *)(m_pScene.createNode("Inline"));
Inline83->setUrl(new CString[4]{"RearRightWheel.x3d","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/RearRightWheel.x3d","RearRightWheel.wrl","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/RearRightWheel.wrl"}, 4);
Transform82->addChildren(*Inline83);

Transform18->addChildren(*Transform82);

CTransform* Transform84 = (CTransform *)(m_pScene.createNode("Transform"));
Transform84->setDEF("CockpitButtonsTransform");
CTransform* Transform85 = (CTransform *)(m_pScene.createNode("Transform"));
Transform85->setDEF("UpButtonTransform");
Transform85->setRotation(new float[4]{1,0,0,1.57});
Transform85->setScale(new float[3]{0.008,0.008,0.008});
Transform85->setTranslation(new float[3]{-0.95,1.05,-10});
CShape* Shape86 = (CShape *)(m_pScene.createNode("Shape"));
CCylinder* Cylinder87 = (CCylinder *)(m_pScene.createNode("Cylinder"));
Cylinder87->setHeight(1);
Cylinder87->setRadius(4);
Shape86->setGeometry(Cylinder87);

CAppearance* Appearance88 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material89 = (CMaterial *)(m_pScene.createNode("Material"));
Material89->setDiffuseColor(new float[3]{1,0,0});
Material89->setShininess(0.8);
Appearance88->setMaterial(*Material89);

Shape86->setAppearance(*Appearance88);

Transform85->addChildren(*Shape86);

CTouchSensor* TouchSensor90 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor90->setDEF("TouchSensorUp");
TouchSensor90->setDescription("click for gears up");
Transform85->addChildren(*TouchSensor90);

Transform84->addChildren(*Transform85);

CTransform* Transform91 = (CTransform *)(m_pScene.createNode("Transform"));
Transform91->setDEF("DownButtonTransform");
Transform91->setRotation(new float[4]{1,0,0,1.57});
Transform91->setScale(new float[3]{0.008,0.008,0.008});
Transform91->setTranslation(new float[3]{-0.83,1.05,-10});
CShape* Shape92 = (CShape *)(m_pScene.createNode("Shape"));
CCylinder* Cylinder93 = (CCylinder *)(m_pScene.createNode("Cylinder"));
Cylinder93->setHeight(1);
Cylinder93->setRadius(4);
Shape92->setGeometry(Cylinder93);

CAppearance* Appearance94 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material95 = (CMaterial *)(m_pScene.createNode("Material"));
Material95->setDiffuseColor(new float[3]{1,1,0});
Material95->setShininess(0.8);
Appearance94->setMaterial(*Material95);

Shape92->setAppearance(*Appearance94);

Transform91->addChildren(*Shape92);

CTouchSensor* TouchSensor96 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor96->setDEF("TouchSensorDown");
TouchSensor96->setDescription("click for gears down");
Transform91->addChildren(*TouchSensor96);

Transform84->addChildren(*Transform91);

CTransform* Transform97 = (CTransform *)(m_pScene.createNode("Transform"));
Transform97->setDEF("GearUpTextTransform");
Transform97->setScale(new float[3]{0.06,0.06,0.06});
Transform97->setTranslation(new float[3]{-0.65,1.55,-10});
CShape* Shape98 = (CShape *)(m_pScene.createNode("Shape"));
CText* Text99 = (CText *)(m_pScene.createNode("Text"));
Text99->setString(new CString[2]{"RED Button","Gear Up"}, 2);
Shape98->setGeometry(Text99);

CAppearance* Appearance100 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material101 = (CMaterial *)(m_pScene.createNode("Material"));
Material101->setDiffuseColor(new float[3]{1,0,0});
Appearance100->setMaterial(*Material101);

Shape98->setAppearance(*Appearance100);

Transform97->addChildren(*Shape98);

Transform84->addChildren(*Transform97);

CTransform* Transform102 = (CTransform *)(m_pScene.createNode("Transform"));
Transform102->setDEF("GearDownTextTransform");
Transform102->setScale(new float[3]{0.06,0.06,0.06});
Transform102->setTranslation(new float[3]{-0.65,1.35,-10});
CShape* Shape103 = (CShape *)(m_pScene.createNode("Shape"));
CText* Text104 = (CText *)(m_pScene.createNode("Text"));
Text104->setLength(new float[1]{5.5}, 1);
Text104->setString(new CString[2]{"YELLOW Button","Gear Down"}, 2);
Shape103->setGeometry(Text104);

CAppearance* Appearance105 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material106 = (CMaterial *)(m_pScene.createNode("Material"));
Material106->setDiffuseColor(new float[3]{1,1,0});
Appearance105->setMaterial(*Material106);

Shape103->setAppearance(*Appearance105);

Transform102->addChildren(*Shape103);

Transform84->addChildren(*Transform102);

CTransform* Transform107 = (CTransform *)(m_pScene.createNode("Transform"));
Transform107->setDEF("FireButtonTransform");
Transform107->setRotation(new float[4]{1,0,0,1.57});
Transform107->setScale(new float[3]{0.008,0.008,0.008});
Transform107->setTranslation(new float[3]{0.52,1.6,-10});
CShape* Shape108 = (CShape *)(m_pScene.createNode("Shape"));
CCylinder* Cylinder109 = (CCylinder *)(m_pScene.createNode("Cylinder"));
Cylinder109->setHeight(1);
Cylinder109->setRadius(4);
Shape108->setGeometry(Cylinder109);

CAppearance* Appearance110 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material111 = (CMaterial *)(m_pScene.createNode("Material"));
Material111->setDiffuseColor(new float[3]{0,0.75,0.18});
Material111->setShininess(0.8);
Appearance110->setMaterial(*Material111);

Shape108->setAppearance(*Appearance110);

Transform107->addChildren(*Shape108);

CTouchSensor* TouchSensor112 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor112->setDEF("FireSensor");
TouchSensor112->setDescription("click to fire");
Transform107->addChildren(*TouchSensor112);

Transform84->addChildren(*Transform107);

CTransform* Transform113 = (CTransform *)(m_pScene.createNode("Transform"));
Transform113->setDEF("FireTextTransform");
Transform113->setScale(new float[3]{0.06,0.06,0.06});
Transform113->setTranslation(new float[3]{0.36,1.5,-10});
CShape* Shape114 = (CShape *)(m_pScene.createNode("Shape"));
CText* Text115 = (CText *)(m_pScene.createNode("Text"));
Text115->setString(new CString[3]{"Target Locked"," FIRE!..","(Green Button)"}, 3);
Shape114->setGeometry(Text115);

CAppearance* Appearance116 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material117 = (CMaterial *)(m_pScene.createNode("Material"));
Material117->setDiffuseColor(new float[3]{0,0.75,0.18});
Appearance116->setMaterial(*Material117);

Shape114->setAppearance(*Appearance116);

Transform113->addChildren(*Shape114);

Transform84->addChildren(*Transform113);

Transform18->addChildren(*Transform84);

CViewpoint* Viewpoint118 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint118->setDescription("F16 Close Look-up");
Viewpoint118->setOrientation(new float[4]{-0.559,-0.827,-0.057,1.3534});
Viewpoint118->setPosition(new float[3]{-28.7,19.9,17.4});
Transform18->addChildren(*Viewpoint118);

CViewpoint* Viewpoint119 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint119->setDescription("Cockpit");
Viewpoint119->setOrientation(new float[4]{-1,0,0,0.1249});
Viewpoint119->setPosition(new float[3]{0,1.5,-7.9});
Transform18->addChildren(*Viewpoint119);

CViewpoint* Viewpoint120 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint120->setDEF("LandingGearAnimationView");
Viewpoint120->setDescription("Landing Gear Animation View");
Viewpoint120->setOrientation(new float[4]{-0.003,1,-0.012,2.5741});
Viewpoint120->setPosition(new float[3]{16.1,-5.8,-24.6});
Transform18->addChildren(*Viewpoint120);

CViewpoint* Viewpoint121 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint121->setDescription("Cockpit Left View");
Viewpoint121->setOrientation(new float[4]{-0.276,-0.922,-0.271,1.2338});
Viewpoint121->setPosition(new float[3]{-6.7,6.1,-3.9});
Transform18->addChildren(*Viewpoint121);

CViewpoint* Viewpoint122 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint122->setDescription("F-16 Front View");
Viewpoint122->setOrientation(new float[4]{-0.007,0.995,0.102,3.1152});
Viewpoint122->setPosition(new float[3]{-0.1,13.4,-65});
Transform18->addChildren(*Viewpoint122);

CViewpoint* Viewpoint123 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint123->setDescription("Cockpit Target View");
Viewpoint123->setOrientation(new float[4]{-0.834,-0.523,-0.176,0.0875});
Viewpoint123->setPosition(new float[3]{0,2.4,-7.9});
Transform18->addChildren(*Viewpoint123);

CTransform* Transform124 = (CTransform *)(m_pScene.createNode("Transform"));
Transform124->setDEF("NoseAntennaTransform");
Transform124->setRotation(new float[4]{1,0,0,1.57});
Transform124->setTranslation(new float[3]{0,-0.275,-21});
CShape* Shape125 = (CShape *)(m_pScene.createNode("Shape"));
CCylinder* Cylinder126 = (CCylinder *)(m_pScene.createNode("Cylinder"));
Cylinder126->setRadius(0.05);
Shape125->setGeometry(Cylinder126);

CAppearance* Appearance127 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material128 = (CMaterial *)(m_pScene.createNode("Material"));
Material128->setDiffuseColor(new float[3]{0.5,0.5,0.5});
Material128->setShininess(0.5);
Appearance127->setMaterial(*Material128);

Shape125->setAppearance(*Appearance127);

Transform124->addChildren(*Shape125);

Transform18->addChildren(*Transform124);

group->addChildren(*Transform18);

CTimeSensor* TimeSensor129 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor129->setDEF("WheelUp");
TimeSensor129->setCycleInterval(8);
group->addChildren(*TimeSensor129);

COrientationInterpolator* OrientationInterpolator130 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator130->setDEF("GearUpInterpolator");
OrientationInterpolator130->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator130->setKeyValue(new float[12]{1,0,0,0,1,0,0,-0.79,1,0,0,-1.92});
group->addChildren(*OrientationInterpolator130);

CROUTE* ROUTE131 = new CROUTE();
ROUTE131->setFromField("touchTime");
ROUTE131->setFromNode("TouchSensorUp");
ROUTE131->setToField("set_startTime");
ROUTE131->setToNode("WheelUp");
group->addChildren(*ROUTE131);

CROUTE* ROUTE132 = new CROUTE();
ROUTE132->setFromField("fraction_changed");
ROUTE132->setFromNode("WheelUp");
ROUTE132->setToField("set_fraction");
ROUTE132->setToNode("GearUpInterpolator");
group->addChildren(*ROUTE132);

CROUTE* ROUTE133 = new CROUTE();
ROUTE133->setFromField("value_changed");
ROUTE133->setFromNode("GearUpInterpolator");
ROUTE133->setToField("set_rotation");
ROUTE133->setToNode("FrontWheelTransform");
group->addChildren(*ROUTE133);

CTimeSensor* TimeSensor134 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor134->setDEF("WheelDown");
TimeSensor134->setCycleInterval(8);
group->addChildren(*TimeSensor134);

COrientationInterpolator* OrientationInterpolator135 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator135->setDEF("GearDownInterpolator");
OrientationInterpolator135->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator135->setKeyValue(new float[12]{1,0,0,-1.92,1,0,0,-0.79,1,0,0,0});
group->addChildren(*OrientationInterpolator135);

CROUTE* ROUTE136 = new CROUTE();
ROUTE136->setFromField("touchTime");
ROUTE136->setFromNode("TouchSensorDown");
ROUTE136->setToField("set_startTime");
ROUTE136->setToNode("WheelDown");
group->addChildren(*ROUTE136);

CROUTE* ROUTE137 = new CROUTE();
ROUTE137->setFromField("fraction_changed");
ROUTE137->setFromNode("WheelDown");
ROUTE137->setToField("set_fraction");
ROUTE137->setToNode("GearDownInterpolator");
group->addChildren(*ROUTE137);

CROUTE* ROUTE138 = new CROUTE();
ROUTE138->setFromField("value_changed");
ROUTE138->setFromNode("GearDownInterpolator");
ROUTE138->setToField("set_rotation");
ROUTE138->setToNode("FrontWheelTransform");
group->addChildren(*ROUTE138);

//Animation commands for Rear Right Wheel Starts
CTimeSensor* TimeSensor139 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor139->setDEF("RRearUp1");
TimeSensor139->setCycleInterval(8);
group->addChildren(*TimeSensor139);

CTimeSensor* TimeSensor140 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor140->setDEF("RRearDown1");
TimeSensor140->setCycleInterval(8);
group->addChildren(*TimeSensor140);

COrientationInterpolator* OrientationInterpolator141 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator141->setDEF("RRearInterUp1");
OrientationInterpolator141->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator141->setKeyValue(new float[12]{-1,0,-1,0,-1,0,-1,0.44,-1,0,-1,1.92});
group->addChildren(*OrientationInterpolator141);

COrientationInterpolator* OrientationInterpolator142 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator142->setDEF("RRearInterDown1");
OrientationInterpolator142->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator142->setKeyValue(new float[12]{-1,0,-1,1.92,-1,0,-1,0.44,-1,0,-1,0});
group->addChildren(*OrientationInterpolator142);

CROUTE* ROUTE143 = new CROUTE();
ROUTE143->setFromField("touchTime");
ROUTE143->setFromNode("TouchSensorDown");
ROUTE143->setToField("set_startTime");
ROUTE143->setToNode("RRearDown1");
group->addChildren(*ROUTE143);

CROUTE* ROUTE144 = new CROUTE();
ROUTE144->setFromField("touchTime");
ROUTE144->setFromNode("TouchSensorUp");
ROUTE144->setToField("set_startTime");
ROUTE144->setToNode("RRearUp1");
group->addChildren(*ROUTE144);

CROUTE* ROUTE145 = new CROUTE();
ROUTE145->setFromField("fraction_changed");
ROUTE145->setFromNode("RRearDown1");
ROUTE145->setToField("set_fraction");
ROUTE145->setToNode("RRearInterDown1");
group->addChildren(*ROUTE145);

CROUTE* ROUTE146 = new CROUTE();
ROUTE146->setFromField("fraction_changed");
ROUTE146->setFromNode("RRearUp1");
ROUTE146->setToField("set_fraction");
ROUTE146->setToNode("RRearInterUp1");
group->addChildren(*ROUTE146);

CROUTE* ROUTE147 = new CROUTE();
ROUTE147->setFromField("value_changed");
ROUTE147->setFromNode("RRearInterDown1");
ROUTE147->setToField("set_rotation");
ROUTE147->setToNode("RearRightWheelTransform");
group->addChildren(*ROUTE147);

CROUTE* ROUTE148 = new CROUTE();
ROUTE148->setFromField("value_changed");
ROUTE148->setFromNode("RRearInterUp1");
ROUTE148->setToField("set_rotation");
ROUTE148->setToNode("RearRightWheelTransform");
group->addChildren(*ROUTE148);

//Animation commands for Rear Left Wheel
CTimeSensor* TimeSensor149 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor149->setDEF("LRearUp1");
TimeSensor149->setCycleInterval(8);
group->addChildren(*TimeSensor149);

CTimeSensor* TimeSensor150 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor150->setDEF("LRearDown1");
TimeSensor150->setCycleInterval(8);
group->addChildren(*TimeSensor150);

COrientationInterpolator* OrientationInterpolator151 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator151->setDEF("LRearInterUp1");
OrientationInterpolator151->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator151->setKeyValue(new float[12]{1,0,1,0,1,0,1,0.44,1,0,1,1.92});
group->addChildren(*OrientationInterpolator151);

COrientationInterpolator* OrientationInterpolator152 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator152->setDEF("LRearInterDown1");
OrientationInterpolator152->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator152->setKeyValue(new float[12]{1,0,1,1.92,1,0,1,0.44,1,0,1,0});
group->addChildren(*OrientationInterpolator152);

CROUTE* ROUTE153 = new CROUTE();
ROUTE153->setFromField("touchTime");
ROUTE153->setFromNode("TouchSensorDown");
ROUTE153->setToField("set_startTime");
ROUTE153->setToNode("LRearDown1");
group->addChildren(*ROUTE153);

CROUTE* ROUTE154 = new CROUTE();
ROUTE154->setFromField("touchTime");
ROUTE154->setFromNode("TouchSensorUp");
ROUTE154->setToField("set_startTime");
ROUTE154->setToNode("LRearUp1");
group->addChildren(*ROUTE154);

CROUTE* ROUTE155 = new CROUTE();
ROUTE155->setFromField("fraction_changed");
ROUTE155->setFromNode("LRearDown1");
ROUTE155->setToField("set_fraction");
ROUTE155->setToNode("LRearInterDown1");
group->addChildren(*ROUTE155);

CROUTE* ROUTE156 = new CROUTE();
ROUTE156->setFromField("fraction_changed");
ROUTE156->setFromNode("LRearUp1");
ROUTE156->setToField("set_fraction");
ROUTE156->setToNode("LRearInterUp1");
group->addChildren(*ROUTE156);

CROUTE* ROUTE157 = new CROUTE();
ROUTE157->setFromField("value_changed");
ROUTE157->setFromNode("LRearInterDown1");
ROUTE157->setToField("set_rotation");
ROUTE157->setToNode("RearLeftWheelTransform");
group->addChildren(*ROUTE157);

CROUTE* ROUTE158 = new CROUTE();
ROUTE158->setFromField("value_changed");
ROUTE158->setFromNode("LRearInterUp1");
ROUTE158->setToField("set_rotation");
ROUTE158->setToNode("RearLeftWheelTransform");
group->addChildren(*ROUTE158);

CBackground* Background159 = (CBackground *)(m_pScene.createNode("Background"));
Background159->setGroundAngle(new float[2]{1.309,1.570796}, 2);
Background159->setGroundColor(new float[9]{0,0.3,0.7,0,0.35,0.75,0,0.4,0.8});
Background159->setSkyAngle(new float[2]{1.309,1.571}, 2);
Background159->setSkyColor(new float[9]{0,0.3,0.8,0,0.5,1,1,1,1});
group->addChildren(*Background159);

CTransform* Transform160 = (CTransform *)(m_pScene.createNode("Transform"));
Transform160->setDEF("RightmostAmraamTransform");
Transform160->setRotation(new float[4]{-1,0,0,1.57});
Transform160->setScale(new float[3]{1.4,1.4,1.4});
Transform160->setTranslation(new float[3]{15.65,0,4.5});
CInline* Inline161 = (CInline *)(m_pScene.createNode("Inline"));
Inline161->setDEF("Amraam");
Inline161->setUrl(new CString[4]{"../../Weapons/Missiles/Amraam.x3d","https://savage.nps.edu/Savage/Weapons/Missiles/Amraam.x3d","../../Weapons/Missiles/Amraam.wrl","https://savage.nps.edu/Savage/Weapons/Missiles/Amraam.wrl"}, 4);
Transform160->addChildren(*Inline161);

group->addChildren(*Transform160);

CTransform* Transform162 = (CTransform *)(m_pScene.createNode("Transform"));
Transform162->setDEF("LeftmostAmraamTransform");
Transform162->setRotation(new float[4]{-1,0,0,1.57});
Transform162->setScale(new float[3]{1.4,1.4,1.4});
Transform162->setTranslation(new float[3]{-15.65,0,4.5});
CInline* Inline163 = (CInline *)(m_pScene.createNode("Inline"));
Inline163->setUSE("Amraam");
Transform162->addChildren(*Inline163);

group->addChildren(*Transform162);

CTransform* Transform164 = (CTransform *)(m_pScene.createNode("Transform"));
Transform164->setDEF("SidewinderHolderTransformRight");
Transform164->setRotation(new float[4]{0,1,0,1.57});
Transform164->setScale(new float[3]{6,3,3});
Transform164->setTranslation(new float[3]{9,-1.125,8});
CInline* Inline165 = (CInline *)(m_pScene.createNode("Inline"));
Inline165->setDEF("SidewinderHolder");
Inline165->setUrl(new CString[4]{"SidewinderHolder.x3d","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/SidewinderHolder.x3d","SidewinderHolder.wrl","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/SidewinderHolder.wrl"}, 4);
Transform164->addChildren(*Inline165);

group->addChildren(*Transform164);

CTransform* Transform166 = (CTransform *)(m_pScene.createNode("Transform"));
Transform166->setDEF("SidewinderHolderTransformLeft");
Transform166->setRotation(new float[4]{0,1,0,1.57});
Transform166->setScale(new float[3]{6,3,3});
Transform166->setTranslation(new float[3]{-8.45,-1.125,8});
CInline* Inline167 = (CInline *)(m_pScene.createNode("Inline"));
Inline167->setUSE("SidewinderHolder");
Transform166->addChildren(*Inline167);

group->addChildren(*Transform166);

CTransform* Transform168 = (CTransform *)(m_pScene.createNode("Transform"));
Transform168->setDEF("TurkishFlagTransformLeft");
Transform168->setRotation(new float[4]{0,-1,0,1.57});
Transform168->setScale(new float[3]{0.3,0.25,0.3});
Transform168->setTranslation(new float[3]{-0.01,8,19.5});
CInline* Inline169 = (CInline *)(m_pScene.createNode("Inline"));
Inline169->setUrl(new CString[4]{"TurkishFlagLeft.x3d","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/TurkishFlagLeft.x3d","TurkishFlagLeft.wrl","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/TurkishFlagLeft.wrl"}, 4);
Transform168->addChildren(*Inline169);

group->addChildren(*Transform168);

CTransform* Transform170 = (CTransform *)(m_pScene.createNode("Transform"));
Transform170->setDEF("TurkishFlagTransformRight");
Transform170->setRotation(new float[4]{0,1,0,1.57});
Transform170->setScale(new float[3]{0.3,0.25,0.3});
Transform170->setTranslation(new float[3]{0.01,8,20.5});
CInline* Inline171 = (CInline *)(m_pScene.createNode("Inline"));
Inline171->setUrl(new CString[4]{"TurkishFlagRight.x3d","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/TurkishFlagRight.x3d","TurkishFlagRight.wrl","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/TurkishFlagRight.wrl"}, 4);
Transform170->addChildren(*Inline171);

group->addChildren(*Transform170);

CTransform* Transform172 = (CTransform *)(m_pScene.createNode("Transform"));
Transform172->setDEF("AmraamHolderTransformLeft");
Transform172->setTranslation(new float[3]{-12,-0.176,10.7});
CInline* Inline173 = (CInline *)(m_pScene.createNode("Inline"));
Inline173->setDEF("AmraamHolder");
Inline173->setUrl(new CString[4]{"AmraamHolder.x3d","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/AmraamHolder.x3d","AmraamHolder.wrl","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/AmraamHolder.wrl"}, 4);
Transform172->addChildren(*Inline173);

group->addChildren(*Transform172);

CTransform* Transform174 = (CTransform *)(m_pScene.createNode("Transform"));
Transform174->setDEF("AmraamHolderTransformRight");
Transform174->setTranslation(new float[3]{12,-0.176,10.7});
CInline* Inline175 = (CInline *)(m_pScene.createNode("Inline"));
Inline175->setUSE("AmraamHolder");
Transform174->addChildren(*Inline175);

group->addChildren(*Transform174);

CTransform* Transform176 = (CTransform *)(m_pScene.createNode("Transform"));
Transform176->setDEF("AmraamInnerTransformRight");
Transform176->setRotation(new float[4]{-1,0,0,1.57});
Transform176->setScale(new float[3]{1.4,1.4,1.4});
Transform176->setTranslation(new float[3]{12,-1.6,4.5});
CInline* Inline177 = (CInline *)(m_pScene.createNode("Inline"));
Inline177->setUSE("Amraam");
Transform176->addChildren(*Inline177);

group->addChildren(*Transform176);

CTransform* Transform178 = (CTransform *)(m_pScene.createNode("Transform"));
Transform178->setDEF("AmraamInnerTransformLeft");
Transform178->setRotation(new float[4]{-1,0,0,1.57});
Transform178->setScale(new float[3]{1.4,1.4,1.4});
Transform178->setTranslation(new float[3]{-12,-1.6,4.5});
CInline* Inline179 = (CInline *)(m_pScene.createNode("Inline"));
Inline179->setUSE("Amraam");
Transform178->addChildren(*Inline179);

group->addChildren(*Transform178);

CTransform* Transform180 = (CTransform *)(m_pScene.createNode("Transform"));
Transform180->setDEF("SidewinderTransformLeft");
Transform180->setRotation(new float[4]{-1,0,0,1.57});
Transform180->setScale(new float[3]{1.6,1.6,1.6});
Transform180->setTranslation(new float[3]{-8.7,-2,3.5});
CInline* Inline181 = (CInline *)(m_pScene.createNode("Inline"));
Inline181->setDEF("Sidewinder");
Inline181->setUrl(new CString[4]{"../../Weapons/Missiles/Sidewinder.x3d","https://savage.nps.edu/Savage/Weapons/Missiles/Sidewinder.x3d","../../Weapons/Missiles/Sidewinder.wrl","https://savage.nps.edu/Savage/Weapons/Missiles/Sidewinder.wrl"}, 4);
Transform180->addChildren(*Inline181);

group->addChildren(*Transform180);

CTransform* Transform182 = (CTransform *)(m_pScene.createNode("Transform"));
Transform182->setDEF("SidewinderTransformRight");
Transform182->setRotation(new float[4]{-1,0,0,1.57});
Transform182->setScale(new float[3]{1.6,1.6,1.6});
Transform182->setTranslation(new float[3]{8.7,-2,3.5});
CInline* Inline183 = (CInline *)(m_pScene.createNode("Inline"));
Inline183->setUSE("Sidewinder");
Transform182->addChildren(*Inline183);

group->addChildren(*Transform182);

CTransform* Transform184 = (CTransform *)(m_pScene.createNode("Transform"));
Transform184->setDEF("FuelTankHolderTransformLeft");
Transform184->setRotation(new float[4]{0,1,0,1.57});
Transform184->setScale(new float[3]{1.5,1.5,1.5});
Transform184->setTranslation(new float[3]{-4.8,-1.125,6});
CInline* Inline185 = (CInline *)(m_pScene.createNode("Inline"));
Inline185->setDEF("FuelTankHolder");
Inline185->setUrl(new CString[4]{"FuelTankHolder.x3d","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/FuelTankHolder.x3d","FuelTankHolder.wrl","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/FuelTankHolder.wrl"}, 4);
Transform184->addChildren(*Inline185);

group->addChildren(*Transform184);

CTransform* Transform186 = (CTransform *)(m_pScene.createNode("Transform"));
Transform186->setDEF("FuelTankHolderTransformRight");
Transform186->setRotation(new float[4]{0,1,0,1.57});
Transform186->setScale(new float[3]{1.5,1.5,1.5});
Transform186->setTranslation(new float[3]{5.3,-1.125,6});
CInline* Inline187 = (CInline *)(m_pScene.createNode("Inline"));
Inline187->setUSE("FuelTankHolder");
Transform186->addChildren(*Inline187);

group->addChildren(*Transform186);

CTransform* Transform188 = (CTransform *)(m_pScene.createNode("Transform"));
Transform188->setDEF("FuelTankTransformRight");
Transform188->setRotation(new float[4]{-1,0,0,1.57});
Transform188->setScale(new float[3]{1.5,1.5,1.5});
Transform188->setTranslation(new float[3]{5,-2.85,5.5});
CInline* Inline189 = (CInline *)(m_pScene.createNode("Inline"));
Inline189->setDEF("FuelTank");
Inline189->setUrl(new CString[4]{"FuelTank.x3d","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/FuelTank.x3d","FuelTank.wrl","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/FuelTank.wrl"}, 4);
Transform188->addChildren(*Inline189);

group->addChildren(*Transform188);

CTransform* Transform190 = (CTransform *)(m_pScene.createNode("Transform"));
Transform190->setDEF("FuelTankTransformLeft");
Transform190->setRotation(new float[4]{-1,0,0,1.57});
Transform190->setScale(new float[3]{1.5,1.5,1.5});
Transform190->setTranslation(new float[3]{-5,-2.85,5.5});
CInline* Inline191 = (CInline *)(m_pScene.createNode("Inline"));
Inline191->setUSE("FuelTank");
Transform190->addChildren(*Inline191);

group->addChildren(*Transform190);

CTransform* Transform192 = (CTransform *)(m_pScene.createNode("Transform"));
Transform192->setDEF("InlineCoverOfPlaneTansform");
CShape* Shape193 = (CShape *)(m_pScene.createNode("Shape"));
CBox* Box194 = (CBox *)(m_pScene.createNode("Box"));
Box194->setSize(new float[3]{4.15,0.1,20});
Shape193->setGeometry(Box194);

CAppearance* Appearance195 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material196 = (CMaterial *)(m_pScene.createNode("Material"));
Material196->setDiffuseColor(new float[3]{0.25,0.25,0.25});
Appearance195->setMaterial(*Material196);

Shape193->setAppearance(*Appearance195);

Transform192->addChildren(*Shape193);

group->addChildren(*Transform192);

CTransform* Transform197 = (CTransform *)(m_pScene.createNode("Transform"));
Transform197->setDEF("TargetHelicopterTransform");
Transform197->setTranslation(new float[3]{16,-50,-500});
CInline* Inline198 = (CInline *)(m_pScene.createNode("Inline"));
Inline198->setUrl(new CString[4]{"Target.x3d","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/Target.x3d","Target.wrl","https://savage.nps.edu/Savage/AircraftFixedWing/F16-FightingFalcon-Turkey/Target.wrl"}, 4);
Transform197->addChildren(*Inline198);

group->addChildren(*Transform197);

CTimeSensor* TimeSensor199 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor199->setDEF("FireClock");
TimeSensor199->setCycleInterval(8);
group->addChildren(*TimeSensor199);

CPositionInterpolator* PositionInterpolator200 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator200->setDEF("MissilePath");
PositionInterpolator200->setKey(new float[3]{0,0.1,1}, 3);
PositionInterpolator200->setKeyValue(new float[9]{-15.65,0,4.5,-15.65,-2,4.5,16,-50,-500});
group->addChildren(*PositionInterpolator200);

CROUTE* ROUTE201 = new CROUTE();
ROUTE201->setFromField("touchTime");
ROUTE201->setFromNode("FireSensor");
ROUTE201->setToField("set_startTime");
ROUTE201->setToNode("FireClock");
group->addChildren(*ROUTE201);

CROUTE* ROUTE202 = new CROUTE();
ROUTE202->setFromField("fraction_changed");
ROUTE202->setFromNode("FireClock");
ROUTE202->setToField("set_fraction");
ROUTE202->setToNode("MissilePath");
group->addChildren(*ROUTE202);

CROUTE* ROUTE203 = new CROUTE();
ROUTE203->setFromField("value_changed");
ROUTE203->setFromNode("MissilePath");
ROUTE203->setToField("set_translation");
ROUTE203->setToNode("LeftmostAmraamTransform");
group->addChildren(*ROUTE203);

CViewpoint* Viewpoint204 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint204->setDEF("MissileLaunchView");
Viewpoint204->setDescription("Missile Fire View");
Viewpoint204->setOrientation(new float[4]{0.094,-0.994,0.057,1.1716});
Viewpoint204->setPosition(new float[3]{-344.3,-142.8,-27.7});
group->addChildren(*Viewpoint204);

CROUTE* ROUTE205 = new CROUTE();
ROUTE205->setFromField("isActive");
ROUTE205->setFromNode("FireSensor");
ROUTE205->setToField("set_bind");
ROUTE205->setToNode("MissileLaunchView");
group->addChildren(*ROUTE205);

//TODO fix type, add filter
X3D0->setScene(*Scene17);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
