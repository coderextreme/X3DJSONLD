/* delete next 5 lines for Visual Studio */
#define FALSE false
#define TRUE true
#define WINAPI
#define AFX_EXT_CLASS
#define EXPORT32
#include "/c/x3d-code/www.web3d.org/x3d/languages/cpp/X3DLib/X3DLib.h"
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
component2->setName("Shaders");
component2->setLevel(1);
head1->addComponent(*component2);

Ccomponent* component3 = new Ccomponent();
component3->setName("CubeMapTexturing");
component3->setLevel(1);
head1->addComponent(*component3);

Ccomponent* component4 = new Ccomponent();
component4->setName("Texturing");
component4->setLevel(1);
head1->addComponent(*component4);

Ccomponent* component5 = new Ccomponent();
component5->setName("Rendering");
component5->setLevel(1);
head1->addComponent(*component5);

Ccomponent* component6 = new Ccomponent();
component6->setName("Shape");
component6->setLevel(4);
head1->addComponent(*component6);

Ccomponent* component7 = new Ccomponent();
component7->setName("Grouping");
component7->setLevel(3);
head1->addComponent(*component7);

Cmeta* meta8 = new Cmeta();
meta8->setName("title");
meta8->setContent("flowers4.x3d");
head1->addMeta(*meta8);

Cmeta* meta9 = new Cmeta();
meta9->setName("creator");
meta9->setContent("John Carlson");
head1->addMeta(*meta9);

Cmeta* meta10 = new Cmeta();
meta10->setName("generator");
meta10->setContent("manual");
head1->addMeta(*meta10);

Cmeta* meta11 = new Cmeta();
meta11->setName("identifier");
meta11->setContent("https://coderextreme.net/X3DJSONLD/flowers4.x3d");
head1->addMeta(*meta11);

Cmeta* meta12 = new Cmeta();
meta12->setName("description");
meta12->setContent("an animated flower");
head1->addMeta(*meta12);

X3D0->setHead(*head1);

CScene* Scene13 = new CScene();
CNavigationInfo* NavigationInfo14 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
group->addChildren(*NavigationInfo14);

CBackground* Background15 = (CBackground *)(m_pScene.createNode("Background"));
Background15->setBackUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"}, 2);
Background15->setBottomUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"}, 2);
Background15->setFrontUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"}, 2);
Background15->setLeftUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"}, 2);
Background15->setRightUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"}, 2);
Background15->setTopUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"}, 2);
group->addChildren(*Background15);

CTransform* Transform16 = (CTransform *)(m_pScene.createNode("Transform"));
Transform16->setDEF("transform");
CShape* Shape17 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance18 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material19 = (CMaterial *)(m_pScene.createNode("Material"));
Material19->setDiffuseColor(new float[3]{0.7,0.7,0.7});
Material19->setSpecularColor(new float[3]{0.5,0.5,0.5});
Appearance18->setMaterial(*Material19);

CComposedCubeMapTexture* ComposedCubeMapTexture20 = (CComposedCubeMapTexture *)(m_pScene.createNode("ComposedCubeMapTexture"));
CImageTexture* ImageTexture21 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture21->setUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"}, 2);
ComposedCubeMapTexture20->setBack(*ImageTexture21);

CImageTexture* ImageTexture22 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture22->setUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"}, 2);
ComposedCubeMapTexture20->setBottom(*ImageTexture22);

CImageTexture* ImageTexture23 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture23->setUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"}, 2);
ComposedCubeMapTexture20->setFront(*ImageTexture23);

CImageTexture* ImageTexture24 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture24->setUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"}, 2);
ComposedCubeMapTexture20->setLeft(*ImageTexture24);

CImageTexture* ImageTexture25 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture25->setUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"}, 2);
ComposedCubeMapTexture20->setRight(*ImageTexture25);

CImageTexture* ImageTexture26 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture26->setUrl(new CString[2]{"../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"}, 2);
ComposedCubeMapTexture20->setTop(*ImageTexture26);

Appearance18->setTexture(*ComposedCubeMapTexture20);

CComposedShader* ComposedShader27 = (CComposedShader *)(m_pScene.createNode("ComposedShader"));
ComposedShader27->setDEF("shader");
ComposedShader27->setLanguage("GLSL");
Cfield* field28 = new Cfield();
field28->setName("cube");
field28->setType("SFInt32");
field28->setAccessType("inputOutput");
field28->setValue("0");
ComposedShader27->addField(*field28);

Cfield* field29 = new Cfield();
field29->setName("chromaticDispertion");
field29->setAccessType("inputOutput");
field29->setType("SFVec3f");
field29->setValue("0.98 1 1.033");
ComposedShader27->addField(*field29);

Cfield* field30 = new Cfield();
field30->setName("bias");
field30->setType("SFFloat");
field30->setAccessType("inputOutput");
field30->setValue("0.5");
ComposedShader27->addField(*field30);

Cfield* field31 = new Cfield();
field31->setName("scale");
field31->setType("SFFloat");
field31->setAccessType("inputOutput");
field31->setValue("0.5");
ComposedShader27->addField(*field31);

Cfield* field32 = new Cfield();
field32->setName("power");
field32->setType("SFFloat");
field32->setAccessType("inputOutput");
field32->setValue("2");
ComposedShader27->addField(*field32);

CShaderPart* ShaderPart33 = (CShaderPart *)(m_pScene.createNode("ShaderPart"));
ShaderPart33->setUrl(new CString[2]{"../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"}, 2);
ShaderPart33->setType("VERTEX");
ComposedShader27->addParts(*ShaderPart33);

CShaderPart* ShaderPart34 = (CShaderPart *)(m_pScene.createNode("ShaderPart"));
ShaderPart34->setUrl(new CString[2]{"../shaders/pc_bubbles.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs"}, 2);
ShaderPart34->setType("FRAGMENT");
ComposedShader27->addParts(*ShaderPart34);

Appearance18->addShaders(*ComposedShader27);

Shape17->setAppearance(*Appearance18);

//<Sphere>
CIndexedFaceSet* IndexedFaceSet35 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet35->setConvex(False);
IndexedFaceSet35->setDEF("Orbit");
CCoordinate* Coordinate36 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate36->setDEF("OrbitCoordinates");
IndexedFaceSet35->setCoord(*Coordinate36);

Shape17->setGeometry(IndexedFaceSet35);

Transform16->addChildren(*Shape17);

group->addChildren(*Transform16);

CScript* Script37 = (CScript *)(m_pScene.createNode("Script"));
Script37->setDEF("OrbitScript");
Cfield* field38 = new Cfield();
field38->setName("set_fraction");
field38->setAccessType("inputOnly");
field38->setType("SFFloat");
Script37->addField(*field38);

Cfield* field39 = new Cfield();
field39->setName("coordinates");
field39->setAccessType("inputOutput");
field39->setType("MFVec3f");
Script37->addField(*field39);

Cfield* field40 = new Cfield();
field40->setName("coordIndexes");
field40->setAccessType("outputOnly");
field40->setType("MFInt32");
Script37->addField(*field40);


Script37.setSourceCode(`ecmascript:\n"+
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
group->addChildren(*Script37);

CTimeSensor* TimeSensor41 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor41->setDEF("Clock");
TimeSensor41->setCycleInterval(16);
TimeSensor41->setLoop(True);
group->addChildren(*TimeSensor41);

CROUTE* ROUTE42 = new CROUTE();
ROUTE42->setFromField("coordIndexes");
ROUTE42->setFromNode("OrbitScript");
ROUTE42->setToField("set_coordIndex");
ROUTE42->setToNode("Orbit");
group->addChildren(*ROUTE42);

CROUTE* ROUTE43 = new CROUTE();
ROUTE43->setFromField("coordinates");
ROUTE43->setFromNode("OrbitScript");
ROUTE43->setToField("set_point");
ROUTE43->setToNode("OrbitCoordinates");
group->addChildren(*ROUTE43);

CROUTE* ROUTE44 = new CROUTE();
ROUTE44->setFromField("fraction_changed");
ROUTE44->setFromNode("Clock");
ROUTE44->setToField("set_fraction");
ROUTE44->setToNode("OrbitScript");
group->addChildren(*ROUTE44);

X3D0->setScene(*Scene13);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
