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
Ccomponent* component2 = new Ccomponent();
component2->setName("Scripting");
component2->setLevel(1);
head1->addComponent(*component2);

Ccomponent* component3 = new Ccomponent();
component3->setName("EnvironmentalEffects");
component3->setLevel(3);
head1->addComponent(*component3);

Ccomponent* component4 = new Ccomponent();
component4->setName("Shaders");
component4->setLevel(1);
head1->addComponent(*component4);

Ccomponent* component5 = new Ccomponent();
component5->setName("CubeMapTexturing");
component5->setLevel(1);
head1->addComponent(*component5);

Ccomponent* component6 = new Ccomponent();
component6->setName("Texturing");
component6->setLevel(1);
head1->addComponent(*component6);

Ccomponent* component7 = new Ccomponent();
component7->setName("Rendering");
component7->setLevel(1);
head1->addComponent(*component7);

Ccomponent* component8 = new Ccomponent();
component8->setName("Grouping");
component8->setLevel(3);
head1->addComponent(*component8);

Ccomponent* component9 = new Ccomponent();
component9->setName("Core");
component9->setLevel(1);
head1->addComponent(*component9);

//<component name='Shape' level='4'></component>
Cmeta* meta10 = new Cmeta();
meta10->setName("title");
meta10->setContent("flowers4.x3d");
head1->addMeta(*meta10);

Cmeta* meta11 = new Cmeta();
meta11->setName("creator");
meta11->setContent("John Carlson");
head1->addMeta(*meta11);

Cmeta* meta12 = new Cmeta();
meta12->setName("generator");
meta12->setContent("manual");
head1->addMeta(*meta12);

Cmeta* meta13 = new Cmeta();
meta13->setName("identifier");
meta13->setContent("https://coderextreme.net/X3DJSONLD/src/main/data/flowers4.x3d");
head1->addMeta(*meta13);

Cmeta* meta14 = new Cmeta();
meta14->setName("description");
meta14->setContent("an animated flower");
head1->addMeta(*meta14);

X3D0->setHead(*head1);

CScene* Scene15 = new CScene();
CNavigationInfo* NavigationInfo16 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
group->addChildren(*NavigationInfo16);

CBackground* Background17 = (CBackground *)(m_pScene.createNode("Background"));
Background17->setBackUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"}, 2);
Background17->setBottomUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"}, 2);
Background17->setFrontUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"}, 2);
Background17->setLeftUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"}, 2);
Background17->setRightUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"}, 2);
Background17->setTopUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"}, 2);
group->addChildren(*Background17);

CTransform* Transform18 = (CTransform *)(m_pScene.createNode("Transform"));
Transform18->setDEF("transform");
CShape* Shape19 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance20 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material21 = (CMaterial *)(m_pScene.createNode("Material"));
Material21->setDiffuseColor(new float[3]{0.7,0.7,0.7});
Material21->setSpecularColor(new float[3]{0.5,0.5,0.5});
Appearance20->setMaterial(*Material21);

CComposedCubeMapTexture* ComposedCubeMapTexture22 = (CComposedCubeMapTexture *)(m_pScene.createNode("ComposedCubeMapTexture"));
CImageTexture* ImageTexture23 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture23->setUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"}, 2);
ComposedCubeMapTexture22->setBackTexture(*ImageTexture23);

CImageTexture* ImageTexture24 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture24->setUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"}, 2);
ComposedCubeMapTexture22->setBottomTexture(*ImageTexture24);

CImageTexture* ImageTexture25 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture25->setUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"}, 2);
ComposedCubeMapTexture22->setFrontTexture(*ImageTexture25);

CImageTexture* ImageTexture26 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture26->setUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"}, 2);
ComposedCubeMapTexture22->setLeftTexture(*ImageTexture26);

CImageTexture* ImageTexture27 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture27->setUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"}, 2);
ComposedCubeMapTexture22->setRightTexture(*ImageTexture27);

CImageTexture* ImageTexture28 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture28->setUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"}, 2);
ComposedCubeMapTexture22->setTopTexture(*ImageTexture28);

Appearance20->setTexture(*ComposedCubeMapTexture22);

CComposedShader* ComposedShader29 = (CComposedShader *)(m_pScene.createNode("ComposedShader"));
ComposedShader29->setDEF("shader");
ComposedShader29->setLanguage("GLSL");
Cfield* field30 = new Cfield();
field30->setName("cube");
field30->setType("SFInt32");
field30->setAccessType("inputOutput");
field30->setValue("0");
ComposedShader29->addField(*field30);

Cfield* field31 = new Cfield();
field31->setName("chromaticDispertion");
field31->setAccessType("inputOutput");
field31->setType("SFVec3f");
field31->setValue("0.98 1 1.033");
ComposedShader29->addField(*field31);

Cfield* field32 = new Cfield();
field32->setName("bias");
field32->setType("SFFloat");
field32->setAccessType("inputOutput");
field32->setValue("0.5");
ComposedShader29->addField(*field32);

Cfield* field33 = new Cfield();
field33->setName("scale");
field33->setType("SFFloat");
field33->setAccessType("inputOutput");
field33->setValue("0.5");
ComposedShader29->addField(*field33);

Cfield* field34 = new Cfield();
field34->setName("power");
field34->setType("SFFloat");
field34->setAccessType("inputOutput");
field34->setValue("2");
ComposedShader29->addField(*field34);

CShaderPart* ShaderPart35 = (CShaderPart *)(m_pScene.createNode("ShaderPart"));
ShaderPart35->setUrl(new CString[2]{"../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"}, 2);
ShaderPart35->setType("VERTEX");
ComposedShader29->addParts(*ShaderPart35);

CShaderPart* ShaderPart36 = (CShaderPart *)(m_pScene.createNode("ShaderPart"));
ShaderPart36->setUrl(new CString[2]{"../shaders/pc_bubbles.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs"}, 2);
ShaderPart36->setType("FRAGMENT");
ComposedShader29->addParts(*ShaderPart36);

Appearance20->addShaders(*ComposedShader29);

Shape19->setAppearance(*Appearance20);

//<Sphere>
CIndexedFaceSet* IndexedFaceSet37 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet37->setConvex(False);
IndexedFaceSet37->setDEF("Orbit");
CCoordinate* Coordinate38 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate38->setDEF("OrbitCoordinates");
IndexedFaceSet37->setCoord(*Coordinate38);

Shape19->setGeometry(IndexedFaceSet37);

Transform18->addChild(*Shape19);

group->addChildren(*Transform18);

CScript* Script39 = (CScript *)(m_pScene.createNode("Script"));
Script39->setDEF("OrbitScript");
Cfield* field40 = new Cfield();
field40->setName("set_fraction");
field40->setAccessType("inputOnly");
field40->setType("SFFloat");
Script39->addField(*field40);

Cfield* field41 = new Cfield();
field41->setName("coordinates");
field41->setAccessType("inputOutput");
field41->setType("MFVec3f");
Script39->addField(*field41);

Cfield* field42 = new Cfield();
field42->setName("coordIndexes");
field42->setAccessType("outputOnly");
field42->setType("MFInt32");
Script39->addField(*field42);


Script39.setSourceCode(`ecmascript:\n"+
"\n"+
"var e = 5;\n"+
"var f = 5;\n"+
"var g = 5;\n"+
"var h = 5;\n"+
"\n"+
"function initialize() {\n"+
"     var resolution = 100;\n"+
"     updateCoordinates(resolution);\n"+
"     var cis = [];\n"+
"     for ( i = 0; i < resolution-1; i++) {\n"+
"     	for ( j = 0; j < resolution-1; j++) {\n"+
"	     cis.push(i*resolution+j);\n"+
"	     cis.push(i*resolution+j+1);\n"+
"	     cis.push((i+1)*resolution+j+1);\n"+
"	     cis.push((i+1)*resolution+j);\n"+
"	     cis.push(-1);\n"+
"	}\n"+
"    }\n"+
"    coordIndexes = new MFInt32(cis);\n"+
"}\n"+
"\n"+
"function updateCoordinates(resolution) {\n"+
"     var theta = 0.0;\n"+
"     var phi = 0.0;\n"+
"     var delta = (2 * 3.141592653) / (resolution-1);\n"+
"     var crds = [];\n"+
"     for ( i = 0; i < resolution; i++) {\n"+
"     	for ( j = 0; j < resolution; j++) {\n"+
"		var rho = e + f * Math.cos(g * theta) * Math.cos(h * phi);\n"+
"		crds.push(new SFVec3f(\n"+
"			rho * Math.cos(phi) * Math.cos(theta),\n"+
"			rho * Math.cos(phi) * Math.sin(theta),\n"+
"			rho * Math.sin(phi)\n"+
"		));\n"+
"		theta += delta;\n"+
"	}\n"+
"	phi += delta;\n"+
"     }\n"+
"     coordinates = new MFVec3f(crds);\n"+
"}\n"+
"\n"+
"function set_fraction(fraction, eventTime) {\n"+
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
"	var resolution = 100;\n"+
"	updateCoordinates(resolution);\n"+
"}`)
group->addChildren(*Script39);

CTimeSensor* TimeSensor43 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor43->setDEF("Clock");
TimeSensor43->setCycleInterval(16);
TimeSensor43->setLoop(True);
group->addChildren(*TimeSensor43);

CROUTE* ROUTE44 = new CROUTE();
ROUTE44->setFromField("coordIndexes");
ROUTE44->setFromNode("OrbitScript");
ROUTE44->setToField("set_coordIndex");
ROUTE44->setToNode("Orbit");
group->addChildren(*ROUTE44);

CROUTE* ROUTE45 = new CROUTE();
ROUTE45->setFromField("coordinates");
ROUTE45->setFromNode("OrbitScript");
ROUTE45->setToField("set_point");
ROUTE45->setToNode("OrbitCoordinates");
group->addChildren(*ROUTE45);

CROUTE* ROUTE46 = new CROUTE();
ROUTE46->setFromField("fraction_changed");
ROUTE46->setFromNode("Clock");
ROUTE46->setToField("set_fraction");
ROUTE46->setToNode("OrbitScript");
group->addChildren(*ROUTE46);

X3D0->setScene(*Scene15);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
