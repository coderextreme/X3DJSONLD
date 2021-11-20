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
//component name='EnvironmentalEffects' level='1'/
Ccomponent* component2 = new Ccomponent();
component2->setName("EnvironmentalEffects");
component2->setLevel(3);
head1->addComponent(*component2);

Ccomponent* component3 = new Ccomponent();
component3->setName("Shaders");
component3->setLevel(1);
head1->addComponent(*component3);

Ccomponent* component4 = new Ccomponent();
component4->setName("CubeMapTexturing");
component4->setLevel(1);
head1->addComponent(*component4);

Ccomponent* component5 = new Ccomponent();
component5->setName("Texturing");
component5->setLevel(1);
head1->addComponent(*component5);

Ccomponent* component6 = new Ccomponent();
component6->setName("Rendering");
component6->setLevel(1);
head1->addComponent(*component6);

Ccomponent* component7 = new Ccomponent();
component7->setName("Shape");
component7->setLevel(4);
head1->addComponent(*component7);

Ccomponent* component8 = new Ccomponent();
component8->setName("Grouping");
component8->setLevel(3);
head1->addComponent(*component8);

Cmeta* meta9 = new Cmeta();
meta9->setName("title");
meta9->setContent("bubbles.x3d");
head1->addMeta(*meta9);

Cmeta* meta10 = new Cmeta();
meta10->setName("creator");
meta10->setContent("John Carlson");
head1->addMeta(*meta10);

Cmeta* meta11 = new Cmeta();
meta11->setName("generator");
meta11->setContent("manual");
head1->addMeta(*meta11);

Cmeta* meta12 = new Cmeta();
meta12->setName("identifier");
meta12->setContent("https://coderextreme.net/X3DJSONLD/bubbles.x3d");
head1->addMeta(*meta12);

Cmeta* meta13 = new Cmeta();
meta13->setName("description");
meta13->setContent("not sure what this is");
head1->addMeta(*meta13);

X3D0->setHead(*head1);

CScene* Scene14 = new CScene();
CNavigationInfo* NavigationInfo15 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
NavigationInfo15->setType(new CString[1]{"EXAMINE"}, 1);
group->addChildren(*NavigationInfo15);

CViewpoint* Viewpoint16 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint16->setDEF("Tour");
Viewpoint16->setDescription("Tour Views");
group->addChildren(*Viewpoint16);

CViewpoint* Viewpoint17 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint17->setPosition(new float[3]{0,0,4});
Viewpoint17->setDescription("sphere in road");
group->addChildren(*Viewpoint17);

CBackground* Background18 = (CBackground *)(m_pScene.createNode("Background"));
Background18->setBackUrl(new CString[2]{"../resources/images/all_probes/uffizi_cross/uffizi_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_back.png"}, 2);
Background18->setBottomUrl(new CString[2]{"../resources/images/all_probes/uffizi_cross/uffizi_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_bottom.png"}, 2);
Background18->setFrontUrl(new CString[2]{"../resources/images/all_probes/uffizi_cross/uffizi_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_front.png"}, 2);
Background18->setLeftUrl(new CString[2]{"../resources/images/all_probes/uffizi_cross/uffizi_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_left.png"}, 2);
Background18->setRightUrl(new CString[2]{"../resources/images/all_probes/uffizi_cross/uffizi_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_right.png"}, 2);
Background18->setTopUrl(new CString[2]{"../resources/images/all_probes/uffizi_cross/uffizi_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_top.png"}, 2);
group->addChildren(*Background18);

CTransform* Transform19 = (CTransform *)(m_pScene.createNode("Transform"));
Transform19->setDEF("Rose01");
CShape* Shape20 = (CShape *)(m_pScene.createNode("Shape"));
CSphere* Sphere21 = (CSphere *)(m_pScene.createNode("Sphere"));
Shape20->setGeometry(Sphere21);

CAppearance* Appearance22 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance22->setDEF("_01_-_Default");
CMaterial* Material23 = (CMaterial *)(m_pScene.createNode("Material"));
Material23->setDiffuseColor(new float[3]{0.7,0.7,0.7});
Material23->setSpecularColor(new float[3]{0.5,0.5,0.5});
Appearance22->setMaterial(*Material23);

CComposedCubeMapTexture* ComposedCubeMapTexture24 = (CComposedCubeMapTexture *)(m_pScene.createNode("ComposedCubeMapTexture"));
CImageTexture* ImageTexture25 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture25->setUrl(new CString[2]{"../resources/images/all_probes/uffizi_cross/uffizi_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_back.png"}, 2);
ComposedCubeMapTexture24->setBack(*ImageTexture25);

CImageTexture* ImageTexture26 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture26->setUrl(new CString[2]{"../resources/images/all_probes/uffizi_cross/uffizi_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_bottom.png"}, 2);
ComposedCubeMapTexture24->setBottom(*ImageTexture26);

CImageTexture* ImageTexture27 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture27->setUrl(new CString[2]{"../resources/images/all_probes/uffizi_cross/uffizi_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_front.png"}, 2);
ComposedCubeMapTexture24->setFront(*ImageTexture27);

CImageTexture* ImageTexture28 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture28->setUrl(new CString[2]{"../resources/images/all_probes/uffizi_cross/uffizi_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_left.png"}, 2);
ComposedCubeMapTexture24->setLeft(*ImageTexture28);

CImageTexture* ImageTexture29 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture29->setUrl(new CString[2]{"../resources/images/all_probes/uffizi_cross/uffizi_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_right.png"}, 2);
ComposedCubeMapTexture24->setRight(*ImageTexture29);

CImageTexture* ImageTexture30 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture30->setUrl(new CString[2]{"../resources/images/all_probes/uffizi_cross/uffizi_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_top.png"}, 2);
ComposedCubeMapTexture24->setTop(*ImageTexture30);

Appearance22->setTexture(*ComposedCubeMapTexture24);

CComposedShader* ComposedShader31 = (CComposedShader *)(m_pScene.createNode("ComposedShader"));
ComposedShader31->setDEF("x_ite");
ComposedShader31->setLanguage("GLSL");
Cfield* field32 = new Cfield();
field32->setName("cube");
field32->setAccessType("inputOutput");
field32->setType("SFInt32");
field32->setValue("0");
ComposedShader31->addField(*field32);

Cfield* field33 = new Cfield();
field33->setName("chromaticDispertion");
field33->setAccessType("inputOutput");
field33->setType("SFVec3f");
field33->setValue("0.98 1 1.033");
ComposedShader31->addField(*field33);

Cfield* field34 = new Cfield();
field34->setName("bias");
field34->setAccessType("inputOutput");
field34->setType("SFFloat");
field34->setValue("0.5");
ComposedShader31->addField(*field34);

Cfield* field35 = new Cfield();
field35->setName("scale");
field35->setAccessType("inputOutput");
field35->setType("SFFloat");
field35->setValue("0.5");
ComposedShader31->addField(*field35);

Cfield* field36 = new Cfield();
field36->setName("power");
field36->setAccessType("inputOutput");
field36->setType("SFFloat");
field36->setValue("2");
ComposedShader31->addField(*field36);

CShaderPart* ShaderPart37 = (CShaderPart *)(m_pScene.createNode("ShaderPart"));
ShaderPart37->setUrl(new CString[2]{"../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"}, 2);
ShaderPart37->setType("VERTEX");
ComposedShader31->addParts(*ShaderPart37);

CShaderPart* ShaderPart38 = (CShaderPart *)(m_pScene.createNode("ShaderPart"));
ShaderPart38->setUrl(new CString[2]{"../shaders/x_itebubbles.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itebubbles.fs"}, 2);
ShaderPart38->setType("FRAGMENT");
ComposedShader31->addParts(*ShaderPart38);

Appearance22->addShaders(*ComposedShader31);

CComposedShader* ComposedShader39 = (CComposedShader *)(m_pScene.createNode("ComposedShader"));
ComposedShader39->setDEF("x3dom");
ComposedShader39->setLanguage("GLSL");
Cfield* field40 = new Cfield();
field40->setName("cube");
field40->setAccessType("inputOutput");
field40->setType("SFInt32");
field40->setValue("0");
ComposedShader39->addField(*field40);

Cfield* field41 = new Cfield();
field41->setName("chromaticDispertion");
field41->setAccessType("inputOutput");
field41->setType("SFVec3f");
field41->setValue("0.98 1 1.033");
ComposedShader39->addField(*field41);

Cfield* field42 = new Cfield();
field42->setName("bias");
field42->setAccessType("inputOutput");
field42->setType("SFFloat");
field42->setValue("0.5");
ComposedShader39->addField(*field42);

Cfield* field43 = new Cfield();
field43->setName("scale");
field43->setAccessType("inputOutput");
field43->setType("SFFloat");
field43->setValue("0.5");
ComposedShader39->addField(*field43);

Cfield* field44 = new Cfield();
field44->setName("power");
field44->setAccessType("inputOutput");
field44->setType("SFFloat");
field44->setValue("2");
ComposedShader39->addField(*field44);

CShaderPart* ShaderPart45 = (CShaderPart *)(m_pScene.createNode("ShaderPart"));
ShaderPart45->setUrl(new CString[2]{"../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"}, 2);
ShaderPart45->setType("VERTEX");
ComposedShader39->addParts(*ShaderPart45);

CShaderPart* ShaderPart46 = (CShaderPart *)(m_pScene.createNode("ShaderPart"));
ShaderPart46->setUrl(new CString[2]{"../shaders/pc_bubbles.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs"}, 2);
ShaderPart46->setType("FRAGMENT");
ComposedShader39->addParts(*ShaderPart46);

Appearance22->addShaders(*ComposedShader39);

Shape20->setAppearance(*Appearance22);

Transform19->addChildren(*Shape20);

group->addChildren(*Transform19);

CTimeSensor* TimeSensor47 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor47->setDEF("TourTime");
TimeSensor47->setCycleInterval(5);
TimeSensor47->setLoop(True);
group->addChildren(*TimeSensor47);

CPositionInterpolator* PositionInterpolator48 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator48->setDEF("TourPosition");
PositionInterpolator48->setKey(new float[2]{0,1}, 2);
PositionInterpolator48->setKeyValue(new float[6]{0,0,10,0,0,-10});
group->addChildren(*PositionInterpolator48);

COrientationInterpolator* OrientationInterpolator49 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator49->setDEF("TourOrientation");
OrientationInterpolator49->setKey(new float[2]{0,1}, 2);
OrientationInterpolator49->setKeyValue(new float[8]{0,1,0,0,0,1,0,3.1416});
group->addChildren(*OrientationInterpolator49);

CScript* Script50 = (CScript *)(m_pScene.createNode("Script"));
Script50->setDEF("RandomTourTime");
Cfield* field51 = new Cfield();
field51->setName("set_cycle");
field51->setAccessType("inputOnly");
field51->setType("SFTime");
Script50->addField(*field51);

Cfield* field52 = new Cfield();
field52->setName("lastKey");
field52->setAccessType("inputOutput");
field52->setType("SFFloat");
field52->setValue("0");
Script50->addField(*field52);

Cfield* field53 = new Cfield();
field53->setName("orientations");
field53->setAccessType("inputOutput");
field53->setType("MFRotation");
field53->setValue("0 1 0 0 0 1 0 -1.57 0 1 0 3.14 0 1 0 1.57 0 1 0 0 1 0 0 -1.57 0 1 0 0 1 0 0 1.57 0 1 0 0");
Script50->addField(*field53);

Cfield* field54 = new Cfield();
field54->setName("positions");
field54->setAccessType("inputOutput");
field54->setType("MFVec3f");
field54->setValue("0 0 10 -10 0 0 0 0 -10 10 0 0 0 0 10 0 10 0 0 0 10 0 -10 0 0 0 10");
Script50->addField(*field54);

Cfield* field55 = new Cfield();
field55->setName("fraction_changed");
field55->setAccessType("outputOnly");
field55->setType("SFFloat");
Script50->addField(*field55);

Cfield* field56 = new Cfield();
field56->setName("position_changed");
field56->setAccessType("outputOnly");
field56->setType("MFVec3f");
Script50->addField(*field56);

Cfield* field57 = new Cfield();
field57->setName("set_orientation");
field57->setAccessType("inputOnly");
field57->setType("MFRotation");
Script50->addField(*field57);

Cfield* field58 = new Cfield();
field58->setName("orientation_changed");
field58->setAccessType("outputOnly");
field58->setType("MFRotation");
Script50->addField(*field58);


Script50.setSourceCode(`ecmascript:\n"+
"               function set_cycle(value) {\n"+
"	       	   try {\n"+
"                        var ov = lastKey;\n"+
"                        do {\n"+
"                            lastKey = Math.round(Math.random()*(positions.length-1));\n"+
"                        } while (lastKey === ov);\n"+
"                        var vc = lastKey;\n"+
"\n"+
"                        position_changed[0] = positions[ov];\n"+
"                        position_changed[1] = positions[vc];\n"+
"\n"+
"                        orientation_changed[0] = orientations[ov];\n"+
"                        orientation_changed[1] = orientations[vc];\n"+
"\n"+
"                        fraction_changed = 0;\n"+
"		   } catch (e) {\n"+
"		   	if (typeof console.log === 'function') {\n"+
"				console.log(e);\n"+
"			}\n"+
"		   }\n"+
"               }`)
group->addChildren(*Script50);

CROUTE* ROUTE59 = new CROUTE();
ROUTE59->setFromNode("TourTime");
ROUTE59->setFromField("cycleTime");
ROUTE59->setToNode("RandomTourTime");
ROUTE59->setToField("set_cycle");
group->addChildren(*ROUTE59);

CROUTE* ROUTE60 = new CROUTE();
ROUTE60->setFromNode("RandomTourTime");
ROUTE60->setFromField("fraction_changed");
ROUTE60->setToNode("TourOrientation");
ROUTE60->setToField("set_fraction");
group->addChildren(*ROUTE60);

CROUTE* ROUTE61 = new CROUTE();
ROUTE61->setFromNode("RandomTourTime");
ROUTE61->setFromField("fraction_changed");
ROUTE61->setToNode("TourPosition");
ROUTE61->setToField("set_fraction");
group->addChildren(*ROUTE61);

CROUTE* ROUTE62 = new CROUTE();
ROUTE62->setFromNode("RandomTourTime");
ROUTE62->setFromField("orientation_changed");
ROUTE62->setToNode("TourOrientation");
ROUTE62->setToField("set_keyValue");
group->addChildren(*ROUTE62);

CROUTE* ROUTE63 = new CROUTE();
ROUTE63->setFromNode("RandomTourTime");
ROUTE63->setFromField("position_changed");
ROUTE63->setToNode("TourPosition");
ROUTE63->setToField("set_keyValue");
group->addChildren(*ROUTE63);

CROUTE* ROUTE64 = new CROUTE();
ROUTE64->setFromNode("TourTime");
ROUTE64->setFromField("fraction_changed");
ROUTE64->setToNode("TourOrientation");
ROUTE64->setToField("set_fraction");
group->addChildren(*ROUTE64);

CROUTE* ROUTE65 = new CROUTE();
ROUTE65->setFromNode("TourOrientation");
ROUTE65->setFromField("value_changed");
ROUTE65->setToNode("Tour");
ROUTE65->setToField("set_orientation");
group->addChildren(*ROUTE65);

CROUTE* ROUTE66 = new CROUTE();
ROUTE66->setFromNode("TourTime");
ROUTE66->setFromField("fraction_changed");
ROUTE66->setToNode("TourPosition");
ROUTE66->setToField("set_fraction");
group->addChildren(*ROUTE66);

CROUTE* ROUTE67 = new CROUTE();
ROUTE67->setFromNode("TourPosition");
ROUTE67->setFromField("value_changed");
ROUTE67->setToNode("Tour");
ROUTE67->setToField("set_position");
group->addChildren(*ROUTE67);

X3D0->setScene(*Scene14);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
