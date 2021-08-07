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
CGroup* group = (CGroup*)m_pScene.createNode("Group");
group->addChildren(X3D0);
X3D0->setProfile("Immersive");
X3D0->setVersion("4.0");
Chead* head1 = new Chead();
Ccomponent* component2 = new Ccomponent();
component2->setName("EnvironmentalEffects");
component2->setLevel(1);
head1->addComponent(component2);

Ccomponent* component3 = new Ccomponent();
component3->setName("EnvironmentalEffects");
component3->setLevel(3);
head1->addComponent(component3);

Ccomponent* component4 = new Ccomponent();
component4->setName("Shaders");
component4->setLevel(1);
head1->addComponent(component4);

Ccomponent* component5 = new Ccomponent();
component5->setName("CubeMapTexturing");
component5->setLevel(1);
head1->addComponent(component5);

Ccomponent* component6 = new Ccomponent();
component6->setName("Texturing");
component6->setLevel(1);
head1->addComponent(component6);

Ccomponent* component7 = new Ccomponent();
component7->setName("Rendering");
component7->setLevel(1);
head1->addComponent(component7);

Ccomponent* component8 = new Ccomponent();
component8->setName("Shape");
component8->setLevel(4);
head1->addComponent(component8);

Ccomponent* component9 = new Ccomponent();
component9->setName("Grouping");
component9->setLevel(3);
head1->addComponent(component9);

Cmeta* meta10 = new Cmeta();
meta10->setName("title");
meta10->setContent("bubbles.x3d");
head1->addMeta(meta10);

Cmeta* meta11 = new Cmeta();
meta11->setName("creator");
meta11->setContent("John Carlson");
head1->addMeta(meta11);

Cmeta* meta12 = new Cmeta();
meta12->setName("generator");
meta12->setContent("manual");
head1->addMeta(meta12);

Cmeta* meta13 = new Cmeta();
meta13->setName("identifier");
meta13->setContent("https://coderextreme.net/X3DJSONLD/bubbles.x3d");
head1->addMeta(meta13);

Cmeta* meta14 = new Cmeta();
meta14->setName("description");
meta14->setContent("not sure what this is");
head1->addMeta(meta14);

X3D0->setHead(head1);

CScene* Scene15 = new CScene();
CNavigationInfo* NavigationInfo16 = (CNavigationInfo *)m_pScene.createNode("NavigationInfo");
NavigationInfo16->setType(new CString[1]{"EXAMINE"}, 1);
group->addChildren(NavigationInfo16);

CViewpoint* Viewpoint17 = (CViewpoint *)m_pScene.createNode("Viewpoint");
Viewpoint17->setDEF("Tour");
Viewpoint17->setDescription("Tour Views");
group->addChildren(Viewpoint17);

CViewpoint* Viewpoint18 = (CViewpoint *)m_pScene.createNode("Viewpoint");
Viewpoint18->setPosition(new float[3]{0,0,4});
Viewpoint18->setDescription("sphere in road");
group->addChildren(Viewpoint18);

CBackground* Background19 = (CBackground *)m_pScene.createNode("Background");
Background19->setBackUrl(new CString[2]{"../resources/images/all_probes/uffizi_cross/uffizi_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_back.png"}, 2);
Background19->setBottomUrl(new CString[2]{"../resources/images/all_probes/uffizi_cross/uffizi_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_bottom.png"}, 2);
Background19->setFrontUrl(new CString[2]{"../resources/images/all_probes/uffizi_cross/uffizi_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_front.png"}, 2);
Background19->setLeftUrl(new CString[2]{"../resources/images/all_probes/uffizi_cross/uffizi_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_left.png"}, 2);
Background19->setRightUrl(new CString[2]{"../resources/images/all_probes/uffizi_cross/uffizi_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_right.png"}, 2);
Background19->setTopUrl(new CString[2]{"../resources/images/all_probes/uffizi_cross/uffizi_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_top.png"}, 2);
group->addChildren(Background19);

CTransform* Transform20 = (CTransform *)m_pScene.createNode("Transform");
Transform20->setDEF("Rose01");
CShape* Shape21 = (CShape *)m_pScene.createNode("Shape");
CSphere* Sphere22 = (CSphere *)m_pScene.createNode("Sphere");
Shape21->setGeometry(Sphere22);

CAppearance* Appearance23 = (CAppearance *)m_pScene.createNode("Appearance");
Appearance23->setDEF("_01_-_Default");
CMaterial* Material24 = (CMaterial *)m_pScene.createNode("Material");
Material24->setDiffuseColor(new float[3]{0.7,0.7,0.7});
Material24->setSpecularColor(new float[3]{0.5,0.5,0.5});
Appearance23->setMaterial(Material24);

CComposedCubeMapTexture* ComposedCubeMapTexture25 = (CComposedCubeMapTexture *)m_pScene.createNode("ComposedCubeMapTexture");
CImageTexture* ImageTexture26 = (CImageTexture *)m_pScene.createNode("ImageTexture");
ImageTexture26->setUrl(new CString[2]{"../resources/images/all_probes/uffizi_cross/uffizi_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_back.png"}, 2);
ComposedCubeMapTexture25->setBackTexture(ImageTexture26);

CImageTexture* ImageTexture27 = (CImageTexture *)m_pScene.createNode("ImageTexture");
ImageTexture27->setUrl(new CString[2]{"../resources/images/all_probes/uffizi_cross/uffizi_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_bottom.png"}, 2);
ComposedCubeMapTexture25->setBottomTexture(ImageTexture27);

CImageTexture* ImageTexture28 = (CImageTexture *)m_pScene.createNode("ImageTexture");
ImageTexture28->setUrl(new CString[2]{"../resources/images/all_probes/uffizi_cross/uffizi_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_front.png"}, 2);
ComposedCubeMapTexture25->setFrontTexture(ImageTexture28);

CImageTexture* ImageTexture29 = (CImageTexture *)m_pScene.createNode("ImageTexture");
ImageTexture29->setUrl(new CString[2]{"../resources/images/all_probes/uffizi_cross/uffizi_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_left.png"}, 2);
ComposedCubeMapTexture25->setLeftTexture(ImageTexture29);

CImageTexture* ImageTexture30 = (CImageTexture *)m_pScene.createNode("ImageTexture");
ImageTexture30->setUrl(new CString[2]{"../resources/images/all_probes/uffizi_cross/uffizi_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_right.png"}, 2);
ComposedCubeMapTexture25->setRightTexture(ImageTexture30);

CImageTexture* ImageTexture31 = (CImageTexture *)m_pScene.createNode("ImageTexture");
ImageTexture31->setUrl(new CString[2]{"../resources/images/all_probes/uffizi_cross/uffizi_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/uffizi_cross/uffizi_top.png"}, 2);
ComposedCubeMapTexture25->setTopTexture(ImageTexture31);

Appearance23->setTexture(ComposedCubeMapTexture25);

CComposedShader* ComposedShader32 = (CComposedShader *)m_pScene.createNode("ComposedShader");
ComposedShader32->setDEF("x_ite");
ComposedShader32->setLanguage("GLSL");
Cfield* field33 = new Cfield();
field33->setName("cube");
field33->setAccessType("inputOutput");
field33->setType("SFInt32");
field33->setValue("0");
ComposedShader32->addField(field33);

Cfield* field34 = new Cfield();
field34->setName("chromaticDispertion");
field34->setAccessType("inputOutput");
field34->setType("SFVec3f");
field34->setValue("0.98 1 1.033");
ComposedShader32->addField(field34);

Cfield* field35 = new Cfield();
field35->setName("bias");
field35->setAccessType("inputOutput");
field35->setType("SFFloat");
field35->setValue("0.5");
ComposedShader32->addField(field35);

Cfield* field36 = new Cfield();
field36->setName("scale");
field36->setAccessType("inputOutput");
field36->setType("SFFloat");
field36->setValue("0.5");
ComposedShader32->addField(field36);

Cfield* field37 = new Cfield();
field37->setName("power");
field37->setAccessType("inputOutput");
field37->setType("SFFloat");
field37->setValue("2");
ComposedShader32->addField(field37);

CShaderPart* ShaderPart38 = (CShaderPart *)m_pScene.createNode("ShaderPart");
ShaderPart38->setUrl(new CString[2]{"../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"}, 2);
ShaderPart38->setType("VERTEX");
ComposedShader32->addParts(ShaderPart38);

CShaderPart* ShaderPart39 = (CShaderPart *)m_pScene.createNode("ShaderPart");
ShaderPart39->setUrl(new CString[2]{"../shaders/x_itebubbles.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itebubbles.fs"}, 2);
ShaderPart39->setType("FRAGMENT");
ComposedShader32->addParts(ShaderPart39);

Appearance23->addShaders(ComposedShader32);

CComposedShader* ComposedShader40 = (CComposedShader *)m_pScene.createNode("ComposedShader");
ComposedShader40->setDEF("x3dom");
ComposedShader40->setLanguage("GLSL");
Cfield* field41 = new Cfield();
field41->setName("cube");
field41->setAccessType("inputOutput");
field41->setType("SFInt32");
field41->setValue("0");
ComposedShader40->addField(field41);

Cfield* field42 = new Cfield();
field42->setName("chromaticDispertion");
field42->setAccessType("inputOutput");
field42->setType("SFVec3f");
field42->setValue("0.98 1 1.033");
ComposedShader40->addField(field42);

Cfield* field43 = new Cfield();
field43->setName("bias");
field43->setAccessType("inputOutput");
field43->setType("SFFloat");
field43->setValue("0.5");
ComposedShader40->addField(field43);

Cfield* field44 = new Cfield();
field44->setName("scale");
field44->setAccessType("inputOutput");
field44->setType("SFFloat");
field44->setValue("0.5");
ComposedShader40->addField(field44);

Cfield* field45 = new Cfield();
field45->setName("power");
field45->setAccessType("inputOutput");
field45->setType("SFFloat");
field45->setValue("2");
ComposedShader40->addField(field45);

CShaderPart* ShaderPart46 = (CShaderPart *)m_pScene.createNode("ShaderPart");
ShaderPart46->setUrl(new CString[2]{"../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"}, 2);
ShaderPart46->setType("VERTEX");
ComposedShader40->addParts(ShaderPart46);

CShaderPart* ShaderPart47 = (CShaderPart *)m_pScene.createNode("ShaderPart");
ShaderPart47->setUrl(new CString[2]{"../shaders/pc_bubbles.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs"}, 2);
ShaderPart47->setType("FRAGMENT");
ComposedShader40->addParts(ShaderPart47);

Appearance23->addShaders(ComposedShader40);

Shape21->setAppearance(Appearance23);

Transform20->addChildren(Shape21);

group->addChildren(Transform20);

CTimeSensor* TimeSensor48 = (CTimeSensor *)m_pScene.createNode("TimeSensor");
TimeSensor48->setDEF("TourTime");
TimeSensor48->setCycleInterval(5);
TimeSensor48->setLoop(True);
group->addChildren(TimeSensor48);

CPositionInterpolator* PositionInterpolator49 = (CPositionInterpolator *)m_pScene.createNode("PositionInterpolator");
PositionInterpolator49->setDEF("TourPosition");
PositionInterpolator49->setKey(new float[2]{0,1});
PositionInterpolator49->setKeyValue(new float[6]{0,0,10,0,0,-10});
group->addChildren(PositionInterpolator49);

COrientationInterpolator* OrientationInterpolator50 = (COrientationInterpolator *)m_pScene.createNode("OrientationInterpolator");
OrientationInterpolator50->setDEF("TourOrientation");
OrientationInterpolator50->setKey(new float[2]{0,1});
OrientationInterpolator50->setKeyValue(new float[8]{0,1,0,0,0,1,0,3.1416});
group->addChildren(OrientationInterpolator50);

CScript* Script51 = (CScript *)m_pScene.createNode("Script");
Script51->setDEF("RandomTourTime");
Cfield* field52 = new Cfield();
field52->setName("set_cycle");
field52->setAccessType("inputOnly");
field52->setType("SFTime");
Script51->addField(field52);

Cfield* field53 = new Cfield();
field53->setName("lastKey");
field53->setAccessType("inputOutput");
field53->setType("SFFloat");
field53->setValue("0");
Script51->addField(field53);

Cfield* field54 = new Cfield();
field54->setName("orientations");
field54->setAccessType("inputOutput");
field54->setType("MFRotation");
field54->setValue("0 1 0 0 0 1 0 -1.57 0 1 0 3.14 0 1 0 1.57 0 1 0 0 1 0 0 -1.57 0 1 0 0 1 0 0 1.57 0 1 0 0");
Script51->addField(field54);

Cfield* field55 = new Cfield();
field55->setName("positions");
field55->setAccessType("inputOutput");
field55->setType("MFVec3f");
field55->setValue("0 0 10 -10 0 0 0 0 -10 10 0 0 0 0 10 0 10 0 0 0 10 0 -10 0 0 0 10");
Script51->addField(field55);

Cfield* field56 = new Cfield();
field56->setName("fraction_changed");
field56->setAccessType("outputOnly");
field56->setType("SFFloat");
Script51->addField(field56);

Cfield* field57 = new Cfield();
field57->setName("position_changed");
field57->setAccessType("outputOnly");
field57->setType("MFVec3f");
Script51->addField(field57);

Cfield* field58 = new Cfield();
field58->setName("set_orientation");
field58->setAccessType("inputOnly");
field58->setType("MFRotation");
Script51->addField(field58);

Cfield* field59 = new Cfield();
field59->setName("orientation_changed");
field59->setAccessType("outputOnly");
field59->setType("MFRotation");
Script51->addField(field59);


Script51.setSourceCode(`ecmascript:\n"+
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
group->addChildren(Script51);

CROUTE* ROUTE60 = new CROUTE();
ROUTE60->setFromNode("TourTime");
ROUTE60->setFromField("cycleTime");
ROUTE60->setToNode("RandomTourTime");
ROUTE60->setToField("set_cycle");
group->addChildren(ROUTE60);

CROUTE* ROUTE61 = new CROUTE();
ROUTE61->setFromNode("RandomTourTime");
ROUTE61->setFromField("fraction_changed");
ROUTE61->setToNode("TourOrientation");
ROUTE61->setToField("set_fraction");
group->addChildren(ROUTE61);

CROUTE* ROUTE62 = new CROUTE();
ROUTE62->setFromNode("RandomTourTime");
ROUTE62->setFromField("fraction_changed");
ROUTE62->setToNode("TourPosition");
ROUTE62->setToField("set_fraction");
group->addChildren(ROUTE62);

CROUTE* ROUTE63 = new CROUTE();
ROUTE63->setFromNode("RandomTourTime");
ROUTE63->setFromField("orientation_changed");
ROUTE63->setToNode("TourOrientation");
ROUTE63->setToField("set_keyValue");
group->addChildren(ROUTE63);

CROUTE* ROUTE64 = new CROUTE();
ROUTE64->setFromNode("RandomTourTime");
ROUTE64->setFromField("position_changed");
ROUTE64->setToNode("TourPosition");
ROUTE64->setToField("set_keyValue");
group->addChildren(ROUTE64);

CROUTE* ROUTE65 = new CROUTE();
ROUTE65->setFromNode("TourTime");
ROUTE65->setFromField("fraction_changed");
ROUTE65->setToNode("TourOrientation");
ROUTE65->setToField("set_fraction");
group->addChildren(ROUTE65);

CROUTE* ROUTE66 = new CROUTE();
ROUTE66->setFromNode("TourOrientation");
ROUTE66->setFromField("value_changed");
ROUTE66->setToNode("Tour");
ROUTE66->setToField("set_orientation");
group->addChildren(ROUTE66);

CROUTE* ROUTE67 = new CROUTE();
ROUTE67->setFromNode("TourTime");
ROUTE67->setFromField("fraction_changed");
ROUTE67->setToNode("TourPosition");
ROUTE67->setToField("set_fraction");
group->addChildren(ROUTE67);

CROUTE* ROUTE68 = new CROUTE();
ROUTE68->setFromNode("TourPosition");
ROUTE68->setFromField("value_changed");
ROUTE68->setToNode("Tour");
ROUTE68->setToField("set_position");
group->addChildren(ROUTE68);

X3D0->setScene(Scene15);

m_pScene.addRootNode(group);
}
