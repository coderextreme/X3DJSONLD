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
X3D0->setVersion("4.0");
Chead* head1 = new Chead();
Cmeta* meta2 = new Cmeta();
meta2->setName("title");
meta2->setContent("flower.x3d");
head1->addMeta(*meta2);

Cmeta* meta3 = new Cmeta();
meta3->setName("creator");
meta3->setContent("John Carlson");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("generator");
meta4->setContent("manual");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("identifier");
meta5->setContent("https://coderextreme.net/X3DJSONLD/src/main/personal/flower.x3d");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("description");
meta6->setContent("a flower");
head1->addMeta(*meta6);

X3D0->setHead(*head1);

CScene* Scene7 = new CScene();
CNavigationInfo* NavigationInfo8 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
group->addChildren(*NavigationInfo8);

CDirectionalLight* DirectionalLight9 = (CDirectionalLight *)(m_pScene.createNode("DirectionalLight"));
DirectionalLight9->setDirection(new float[3]{0,-0.8,-0.2});
DirectionalLight9->setIntensity(0.5);
group->addChildren(*DirectionalLight9);

CBackground* Background10 = (CBackground *)(m_pScene.createNode("Background"));
Background10->setSkyColor(new float[3]{1,1,1});
group->addChildren(*Background10);

CViewpoint* Viewpoint11 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint11->setDescription("One mathematical orbital");
Viewpoint11->setPosition(new float[3]{0,0,50});
group->addChildren(*Viewpoint11);

CTransform* Transform12 = (CTransform *)(m_pScene.createNode("Transform"));
Transform12->setTranslation(new float[3]{0,-1,1});
Transform12->setRotation(new float[4]{0,1,0,3.1415926});
Transform12->setScale(new float[3]{1.5,1.5,1.5});
CShape* Shape13 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance14 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material15 = (CMaterial *)(m_pScene.createNode("Material"));
Material15->setTransparency(0.1);
Material15->setDiffuseColor(new float[3]{0.9,0.3,0.3});
Material15->setSpecularColor(new float[3]{0.8,0.8,0.8});
Material15->setShininess(0.145);
Appearance14->setMaterial(*Material15);

Shape13->setAppearance(*Appearance14);

CIndexedFaceSet* IndexedFaceSet16 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet16->setCcw(False);
IndexedFaceSet16->setConvex(False);
IndexedFaceSet16->setCoordIndex(new int[4]{0,1,2,-1});
IndexedFaceSet16->setDEF("Orbit");
CCoordinate* Coordinate17 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate17->setDEF("OrbitCoordinates");
Coordinate17->setPoint(new float[9]{0,0,1,0,1,0,1,0,0});
IndexedFaceSet16->setCoord(*Coordinate17);

Shape13->setGeometry(IndexedFaceSet16);

Transform12->addChild(*Shape13);

group->addChildren(*Transform12);

CScript* Script18 = (CScript *)(m_pScene.createNode("Script"));
Script18->setDEF("OrbitScript");
Cfield* field19 = new Cfield();
field19->setName("set_fraction");
field19->setAccessType("inputOnly");
field19->setType("SFFloat");
Script18->addField(*field19);

Cfield* field20 = new Cfield();
field20->setName("coordinates");
field20->setAccessType("outputOnly");
field20->setType("MFVec3f");
Script18->addField(*field20);

Cfield* field21 = new Cfield();
field21->setName("coordIndexes");
field21->setAccessType("outputOnly");
field21->setType("MFInt32");
Script18->addField(*field21);

//<field accessType=\"inputOutput\" name=\"e\" type=\"SFFloat\" value=\"5\"/> <field accessType=\"inputOutput\" name=\"f\" type=\"SFFloat\" value=\"5\"/> <field accessType=\"inputOutput\" name=\"g\" type=\"SFFloat\" value=\"5\"/> <field accessType=\"inputOutput\" name=\"h\" type=\"SFFloat\" value=\"5\"/> <field accessType=\"inputOutput\" name=\"t\" type=\"SFFloat\" value=\"0\"/> <field accessType=\"inputOutput\" name=\"p\" type=\"SFFloat\" value=\"0\"/> <field accessType=\"inputOutput\" name=\"resolution\" type=\"SFInt32\" value=\"150\"/>

Script18.setSourceCode(`ecmascript:\n"+
"\n"+
"var e = 5;\n"+
"var f = 5;\n"+
"var g = 5;\n"+
"var h = 5;\n"+
"var resolution = 100;\n"+
"var t = 0;\n"+
"var p = 0;\n"+
"\n"+
"function initialize() {\n"+
"     generateCoordinates(resolution);\n"+
"     var localci = [];\n"+
"     for ( i = 0; i < resolution-1; i++) {\n"+
"     	for ( j = 0; j < resolution-1; j++) {\n"+
"	     localci.push(i*resolution+j);\n"+
"	     localci.push(i*resolution+j+1);\n"+
"	     localci.push((i+1)*resolution+j+1);\n"+
"	     localci.push((i+1)*resolution+j);\n"+
"	     localci.push(-1);\n"+
"	}\n"+
"    }\n"+
"    coordIndexes = new MFInt32(...localci);\n"+
"}\n"+
"\n"+
"function generateCoordinates(resolution) {\n"+
"     var theta = 0.0;\n"+
"     var phi = 0.0;\n"+
"     var delta = (2 * 3.141592653) / (resolution-1);\n"+
"     var localc = [];\n"+
"     for ( i = 0; i < resolution; i++) {\n"+
"     	for ( j = 0; j < resolution; j++) {\n"+
"		var rho = e + f * Math.cos(g * theta) * Math.cos(h * phi);\n"+
"		localc.push(new SFVec3f(\n"+
"			rho * Math.cos(phi) * Math.cos(theta),\n"+
"			rho * Math.cos(phi) * Math.sin(theta),\n"+
"			rho * Math.sin(phi)\n"+
"		));\n"+
"		theta += delta;\n"+
"	}\n"+
"	phi += delta;\n"+
"     }\n"+
"     coordinates = new MFVec3f(...localc);\n"+
"}\n"+
"\n"+
"function set_fraction(fraction, eventTime) {\n"+
"	t += 0.5;\n"+
"	p += 0.5;\n"+
"	var choice = Math.floor(Math.random() * 4);\n"+
"	switch (choice) {\n"+
"	case 0:\n"+
"		e += Math.floor(Math.random() * 2) * 2 - 1;\n"+
"		break;\n"+
"	case 1:\n"+
"		f += Math.floor(Math.random() * 2) * 2 - 1;\n"+
"		break;\n"+
"	case 2:\n"+
"		g += Math.floor(Math.random() * 2) * 2 - 1;\n"+
"		break;\n"+
"	case 3:\n"+
"		h += Math.floor(Math.random() * 2) * 2 - 1;\n"+
"		break;\n"+
"	}\n"+
"	if (f < 1) {\n"+
"		f = 10;\n"+
"	}\n"+
"	if (g < 1) {\n"+
"		g = 4;\n"+
"	}\n"+
"	if (h < 1) {\n"+
"		h = 4;\n"+
"	}\n"+
"	generateCoordinates(resolution);\n"+
"}`)
group->addChildren(*Script18);

CTimeSensor* TimeSensor22 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor22->setDEF("Clock");
TimeSensor22->setCycleInterval(16);
TimeSensor22->setLoop(True);
group->addChildren(*TimeSensor22);

CROUTE* ROUTE23 = new CROUTE();
ROUTE23->setFromNode("OrbitScript");
ROUTE23->setFromField("coordIndexes");
ROUTE23->setToNode("Orbit");
ROUTE23->setToField("set_coordIndex");
group->addChildren(*ROUTE23);

CROUTE* ROUTE24 = new CROUTE();
ROUTE24->setFromNode("OrbitScript");
ROUTE24->setFromField("coordinates");
ROUTE24->setToNode("OrbitCoordinates");
ROUTE24->setToField("point");
group->addChildren(*ROUTE24);

CROUTE* ROUTE25 = new CROUTE();
ROUTE25->setFromNode("Clock");
ROUTE25->setFromField("fraction_changed");
ROUTE25->setToNode("OrbitScript");
ROUTE25->setToField("set_fraction");
group->addChildren(*ROUTE25);

X3D0->setScene(*Scene7);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
