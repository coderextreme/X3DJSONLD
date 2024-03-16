#ifdef WIN32
#define FALSE false
#define TRUE true
#define WINAPI
#define AFX_EXT_CLASS
#define EXPORT32
#endif
#define False false
#define True true
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/SphereExample/SphereExample/pch.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/SphereExample/SphereExample/framework.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/SphereExample/include/XML_PARSER.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/SphereExample/include/X3DLib.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/SphereExample/include/glMath.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/SphereExample/include/glut.h"
int main(int argc, char ** argv) {
X3D* X3D0 = new X3D();
X3D0->setProfile(CString("Immersive"));
X3D0->setVersion(CString("4.0"));
head* head1 = new head();
meta* meta2 = new meta();
meta2->setName(CString("title"));
meta2->setContent(CString("flower.x3d"));
head1->addMeta(meta2);

meta* meta3 = new meta();
meta3->setName(CString("creator"));
meta3->setContent(CString("John Carlson"));
head1->addMeta(meta3);

meta* meta4 = new meta();
meta4->setName(CString("generator"));
meta4->setContent(CString("manual"));
head1->addMeta(meta4);

meta* meta5 = new meta();
meta5->setName(CString("identifier"));
meta5->setContent(CString("https://coderextreme.net/X3DJSONLD/src/main/personal/flower.x3d"));
head1->addMeta(meta5);

meta* meta6 = new meta();
meta6->setName(CString("description"));
meta6->setContent(CString("a flower"));
head1->addMeta(meta6);

X3D0->setHead(head1);

Scene* Scene7 = new Scene();
NavigationInfo* NavigationInfo8 = new NavigationInfo();
Scene7->addChild(NavigationInfo8);

DirectionalLight* DirectionalLight9 = new DirectionalLight();
DirectionalLight9->setDirection(new float[3]{0,-0.8,-0.2});
DirectionalLight9->setIntensity(0.5);
Scene7->addChild(DirectionalLight9);

Background* Background10 = new Background();
Background10->setSkyColor(new float[3]{1,1,1}, 3);
Scene7->addChild(Background10);

Viewpoint* Viewpoint11 = new Viewpoint();
Viewpoint11->setDescription(CString("One mathematical orbital"));
Viewpoint11->setPosition(new float[3]{0,0,50});
Scene7->addChild(Viewpoint11);

Transform* Transform12 = new Transform();
Transform12->setTranslation(new float[3]{0,-1,1});
Transform12->setRotation(new float[4]{0,1,0,3.1415926});
Transform12->setScale(new float[3]{1.5,1.5,1.5});
Shape* Shape13 = new Shape();
Appearance* Appearance14 = new Appearance();
Material* Material15 = new Material();
Material15->setTransparency(0.1);
Material15->setDiffuseColor(new float[3]{0.9,0.3,0.3});
Material15->setSpecularColor(new float[3]{0.8,0.8,0.8});
Material15->setShininess(0.145);
Appearance14->addChild(Material15);

Shape13->addChild(Appearance14);

IndexedFaceSet* IndexedFaceSet16 = new IndexedFaceSet();
IndexedFaceSet16->setCcw(False);
IndexedFaceSet16->setConvex(False);
IndexedFaceSet16->setCoordIndex(new int32_t[4]{0,1,2,-1}, 4);
IndexedFaceSet16->setDEF(CString("Orbit"));
Coordinate* Coordinate17 = new Coordinate();
Coordinate17->setDEF(CString("OrbitCoordinates"));
Coordinate17->setPoint(new float[9]{0,0,1,0,1,0,1,0,0}, 9);
IndexedFaceSet16->addChild(Coordinate17);

Shape13->setGeometry(IndexedFaceSet16);

Transform12->addChild(Shape13);

Scene7->addChild(Transform12);

Script* Script18 = new Script();
Script18->setDEF(CString("OrbitScript"));
field* field19 = new field();
field19->setName(CString("set_fraction"));
field19->setAccessType(CString("inputOnly"));
field19->setType(CString("SFFloat"));
Script18->addChild(field19);

field* field20 = new field();
field20->setName(CString("coordinates"));
field20->setAccessType(CString("outputOnly"));
field20->setType(CString("MFVec3f"));
Script18->addChild(field20);

field* field21 = new field();
field21->setName(CString("coordIndexes"));
field21->setAccessType(CString("outputOnly"));
field21->setType(CString("MFInt32"));
Script18->addChild(field21);

//<field accessType=\"inputOutput\" name=\"e\" type=\"SFFloat\" value=\"5\"/> <field accessType=\"inputOutput\" name=\"f\" type=\"SFFloat\" value=\"5\"/> <field accessType=\"inputOutput\" name=\"g\" type=\"SFFloat\" value=\"5\"/> <field accessType=\"inputOutput\" name=\"h\" type=\"SFFloat\" value=\"5\"/> <field accessType=\"inputOutput\" name=\"t\" type=\"SFFloat\" value=\"0\"/> <field accessType=\"inputOutput\" name=\"p\" type=\"SFFloat\" value=\"0\"/> <field accessType=\"inputOutput\" name=\"resolution\" type=\"SFInt32\" value=\"150\"/>

Script18->setSourceCode(CString("ecmascript:")+
_T("var e = 5;")+
_T("var f = 5;")+
_T("var g = 5;")+
_T("var h = 5;")+
_T("var resolution = 100;")+
_T("var t = 0;")+
_T("var p = 0;")+
_T("function initialize() {")+
_T("     generateCoordinates(resolution);")+
_T("     var localci = [];")+
_T("     for ( i = 0; i < resolution-1; i++) {")+
_T("     	for ( j = 0; j < resolution-1; j++) {")+
_T("	     localci.push(i*resolution+j);")+
_T("	     localci.push(i*resolution+j+1);")+
_T("	     localci.push((i+1)*resolution+j+1);")+
_T("	     localci.push((i+1)*resolution+j);")+
_T("	     localci.push(-1);")+
_T("	}")+
_T("    }")+
_T("    coordIndexes = new MFInt32(localci);")+
_T("}")+
_T("function generateCoordinates(resolution) {")+
_T("     var theta = 0.0;")+
_T("     var phi = 0.0;")+
_T("     var delta = (2 * 3.141592653) / (resolution-1);")+
_T("     var localc = [];")+
_T("     for ( i = 0; i < resolution; i++) {")+
_T("     	for ( j = 0; j < resolution; j++) {")+
_T("		var rho = e + f * Math.cos(g * theta) * Math.cos(h * phi);")+
_T("		localc.push(new SFVec3f(")+
_T("			rho * Math.cos(phi) * Math.cos(theta),")+
_T("			rho * Math.cos(phi) * Math.sin(theta),")+
_T("			rho * Math.sin(phi)")+
_T("		));")+
_T("		theta += delta;")+
_T("	}")+
_T("	phi += delta;")+
_T("     }")+
_T("     coordinates = new MFVec3f(localc);")+
_T("}")+
_T("function set_fraction(fraction, eventTime) {")+
_T("	t += 0.5;")+
_T("	p += 0.5;")+
_T("	var choice = Math.floor(Math.random() * 4);")+
_T("	switch (choice) {")+
_T("	case 0:")+
_T("		e += Math.floor(Math.random() * 2) * 2 - 1;")+
_T("		break;")+
_T("	case 1:")+
_T("		f += Math.floor(Math.random() * 2) * 2 - 1;")+
_T("		break;")+
_T("	case 2:")+
_T("		g += Math.floor(Math.random() * 2) * 2 - 1;")+
_T("		break;")+
_T("	case 3:")+
_T("		h += Math.floor(Math.random() * 2) * 2 - 1;")+
_T("		break;")+
_T("	}")+
_T("	if (f < 1) {")+
_T("		f = 10;")+
_T("	}")+
_T("	if (g < 1) {")+
_T("		g = 4;")+
_T("	}")+
_T("	if (h < 1) {")+
_T("		h = 4;")+
_T("	}")+
_T("	generateCoordinates(resolution);")+
_T("}"));
Scene7->addChild(Script18);

TimeSensor* TimeSensor22 = new TimeSensor();
TimeSensor22->setDEF(CString("Clock"));
TimeSensor22->setCycleInterval(16);
TimeSensor22->setLoop(True);
Scene7->addChild(TimeSensor22);

ROUTE* ROUTE23 = new ROUTE();
ROUTE23->setFromNode(CString("OrbitScript"));
ROUTE23->setFromField(CString("coordIndexes"));
ROUTE23->setToNode(CString("Orbit"));
ROUTE23->setToField(CString("set_coordIndex"));
Scene7->addChild(ROUTE23);

ROUTE* ROUTE24 = new ROUTE();
ROUTE24->setFromNode(CString("OrbitScript"));
ROUTE24->setFromField(CString("coordinates"));
ROUTE24->setToNode(CString("OrbitCoordinates"));
ROUTE24->setToField(CString("point"));
Scene7->addChild(ROUTE24);

ROUTE* ROUTE25 = new ROUTE();
ROUTE25->setFromNode(CString("Clock"));
ROUTE25->setFromField(CString("fraction_changed"));
ROUTE25->setToNode(CString("OrbitScript"));
ROUTE25->setToField(CString("set_fraction"));
Scene7->addChild(ROUTE25);

X3D0->setScene(Scene7);

}
