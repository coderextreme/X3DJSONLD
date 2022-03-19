/* delete next 5 lines for Visual Studio */
#define FALSE false
#define TRUE true
#define WINAPI
#define AFX_EXT_CLASS
#define EXPORT32
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Concretes.h"
int main(int argc, char ** argv) {
CX3DScene m_pScene;
CBrowser browser = X3D.getBrowser();
CX3D* X3D0 = new CX3D();
CGroup* group = (CGroup*)(m_pScene.createNode("Group"));
group->addChildren(X3D0);
X3D0->setProfile("Immersive");
X3D0->setVersion("3.3");
Chead* head1 = new Chead();
Cmeta* meta2 = new Cmeta();
meta2->setName("title");
meta2->setContent("BindingOperations.x3d");
head1->addMeta(*meta2);

Cmeta* meta3 = new Cmeta();
meta3->setName("description");
meta3->setContent("Illustrate Viewpoint binding operations (in gory detail!) as described in Chapter 4 concepts. Scene design: a TimeSensor clock drives and IntegerSequencer for each t0/t1/etc. event, and a customized Script node sends bind/unbind events to the correct Viewpoint. Display the browser console to see occurrence of each event.");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("creator");
meta4->setContent("Don Brutzman");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("created");
meta5->setContent("5 January 2008");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("modified");
meta6->setContent("22 July 2013");
head1->addMeta(*meta6);

Cmeta* meta7 = new Cmeta();
meta7->setName("reference");
meta7->setContent("BindingOperations.console.txt");
head1->addMeta(*meta7);

Cmeta* meta8 = new Cmeta();
meta8->setName("reference");
meta8->setContent("BindingStackOperations.png");
head1->addMeta(*meta8);

Cmeta* meta9 = new Cmeta();
meta9->setName("reference");
meta9->setContent("X3D for Web Authors, Section 2.5.1, Figure 4.1");
head1->addMeta(*meta9);

Cmeta* meta10 = new Cmeta();
meta10->setName("reference");
meta10->setContent("http://X3dGraphics.com");
head1->addMeta(*meta10);

Cmeta* meta11 = new Cmeta();
meta11->setName("reference");
meta11->setContent("https://www.web3d.org/x3d/content/examples/X3dResources.html");
head1->addMeta(*meta11);

Cmeta* meta12 = new Cmeta();
meta12->setName("rights");
meta12->setContent("Copyright Don Brutzman and Leonard Daly 2007");
head1->addMeta(*meta12);

Cmeta* meta13 = new Cmeta();
meta13->setName("subject");
meta13->setContent("X3D book, X3D graphics, X3D-Edit, http://www.x3dGraphics.com");
head1->addMeta(*meta13);

Cmeta* meta14 = new Cmeta();
meta14->setName("identifier");
meta14->setContent("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter04ViewingNavigation/BindingOperations.x3d");
head1->addMeta(*meta14);

Cmeta* meta15 = new Cmeta();
meta15->setName("generator");
meta15->setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
head1->addMeta(*meta15);

Cmeta* meta16 = new Cmeta();
meta16->setName("license");
meta16->setContent("../license.html");
head1->addMeta(*meta16);

X3D0->setHead(*head1);

CScene* Scene17 = new CScene();
CViewpoint* Viewpoint18 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint18->setDEF("View1");
Viewpoint18->setCenterOfRotation(new float[3]{-6,0,0});
Viewpoint18->setDescription("Viewpoint 1");
Viewpoint18->setPosition(new float[3]{-6,0,5});
group->addChildren(*Viewpoint18);

CViewpoint* Viewpoint19 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint19->setDEF("View2");
Viewpoint19->setCenterOfRotation(new float[3]{-2,0,0});
Viewpoint19->setDescription("Viewpoint 2");
Viewpoint19->setPosition(new float[3]{-2,0,5});
group->addChildren(*Viewpoint19);

CViewpoint* Viewpoint20 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint20->setDEF("View3");
Viewpoint20->setCenterOfRotation(new float[3]{2,0,0});
Viewpoint20->setDescription("Viewpoint 3");
Viewpoint20->setPosition(new float[3]{2,0,5});
group->addChildren(*Viewpoint20);

CViewpoint* Viewpoint21 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint21->setDEF("View4");
Viewpoint21->setCenterOfRotation(new float[3]{6,0,0});
Viewpoint21->setDescription("Viewpoint 4");
Viewpoint21->setPosition(new float[3]{6,0,5});
group->addChildren(*Viewpoint21);

//Script initialization ought to first bind view5 below.
CGroup* Group22 = (CGroup *)(m_pScene.createNode("Group"));
CTransform* Transform23 = (CTransform *)(m_pScene.createNode("Transform"));
Transform23->setDEF("Text1");
Transform23->setTranslation(new float[3]{-6,0,0});
CShape* Shape24 = (CShape *)(m_pScene.createNode("Shape"));
CText* Text25 = (CText *)(m_pScene.createNode("Text"));
Text25->setString(new CString[2]{"View","# 1"}, 2);
CFontStyle* FontStyle26 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle26->setDEF("CenterJustify");
FontStyle26->setJustify(new CString[2]{"MIDDLE","MIDDLE"}, 2);
Text25->setFontStyle(*FontStyle26);

Shape24->setGeometry(Text25);

CAppearance* Appearance27 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material28 = (CMaterial *)(m_pScene.createNode("Material"));
Material28->setDiffuseColor(new float[3]{1,0,0});
Appearance27->setMaterial(*Material28);

Shape24->setAppearance(*Appearance27);

Transform23->addChildren(*Shape24);

Group22->addChildren(*Transform23);

CTransform* Transform29 = (CTransform *)(m_pScene.createNode("Transform"));
Transform29->setDEF("Text2");
Transform29->setTranslation(new float[3]{-2,0,0});
CShape* Shape30 = (CShape *)(m_pScene.createNode("Shape"));
CText* Text31 = (CText *)(m_pScene.createNode("Text"));
Text31->setString(new CString[2]{"View","# 2"}, 2);
CFontStyle* FontStyle32 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle32->setUSE("CenterJustify");
Text31->setFontStyle(*FontStyle32);

Shape30->setGeometry(Text31);

CAppearance* Appearance33 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material34 = (CMaterial *)(m_pScene.createNode("Material"));
Material34->setDiffuseColor(new float[3]{0,1,0});
Appearance33->setMaterial(*Material34);

Shape30->setAppearance(*Appearance33);

Transform29->addChildren(*Shape30);

Group22->addChildren(*Transform29);

CTransform* Transform35 = (CTransform *)(m_pScene.createNode("Transform"));
Transform35->setDEF("Text3");
Transform35->setTranslation(new float[3]{2,0,0});
CShape* Shape36 = (CShape *)(m_pScene.createNode("Shape"));
CText* Text37 = (CText *)(m_pScene.createNode("Text"));
Text37->setString(new CString[2]{"View","# 3"}, 2);
CFontStyle* FontStyle38 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle38->setUSE("CenterJustify");
Text37->setFontStyle(*FontStyle38);

Shape36->setGeometry(Text37);

CAppearance* Appearance39 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material40 = (CMaterial *)(m_pScene.createNode("Material"));
Material40->setDiffuseColor(new float[3]{0,0,1});
Appearance39->setMaterial(*Material40);

Shape36->setAppearance(*Appearance39);

Transform35->addChildren(*Shape36);

Group22->addChildren(*Transform35);

CTransform* Transform41 = (CTransform *)(m_pScene.createNode("Transform"));
Transform41->setDEF("Text4");
Transform41->setTranslation(new float[3]{6,0,0});
CShape* Shape42 = (CShape *)(m_pScene.createNode("Shape"));
CText* Text43 = (CText *)(m_pScene.createNode("Text"));
Text43->setString(new CString[2]{"View","# 4"}, 2);
CFontStyle* FontStyle44 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle44->setUSE("CenterJustify");
Text43->setFontStyle(*FontStyle44);

Shape42->setGeometry(Text43);

CAppearance* Appearance45 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material46 = (CMaterial *)(m_pScene.createNode("Material"));
Appearance45->setMaterial(*Material46);

Shape42->setAppearance(*Appearance45);

Transform41->addChildren(*Shape42);

Group22->addChildren(*Transform41);

group->addChildren(*Group22);

//The following advanced animation sequence uses nodes covered in Chapters 7, 8 and 9.
//It does not need to be studied in this chapter.
CTransform* Transform47 = (CTransform *)(m_pScene.createNode("Transform"));
Transform47->setTranslation(new float[3]{0,-3,8});
//notice this next Viewpoint has been transformed with the text, so its position is relative. it is called view5 in the Script.
CViewpoint* Viewpoint48 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint48->setDEF("ClickToAnimateView");
Viewpoint48->setDescription("Select animation sequence");
Viewpoint48->setPosition(new float[3]{0,0,7});
Transform47->addChildren(*Viewpoint48);

CShape* Shape49 = (CShape *)(m_pScene.createNode("Shape"));
CText* Text50 = (CText *)(m_pScene.createNode("Text"));
Text50->setString(new CString[1]{"Click here to animate"}, 1);
CFontStyle* FontStyle51 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle51->setJustify(new CString[2]{"MIDDLE","BEGIN"}, 2);
Text50->setFontStyle(*FontStyle51);

Shape49->setGeometry(Text50);

CAppearance* Appearance52 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material53 = (CMaterial *)(m_pScene.createNode("Material"));
Material53->setDiffuseColor(new float[3]{0.8,0.4,0});
Appearance52->setMaterial(*Material53);

Shape49->setAppearance(*Appearance52);

Transform47->addChildren(*Shape49);

CShape* Shape54 = (CShape *)(m_pScene.createNode("Shape"));
CBox* Box55 = (CBox *)(m_pScene.createNode("Box"));
Box55->setSize(new float[3]{7,1,0.02});
Shape54->setGeometry(Box55);

CAppearance* Appearance56 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material57 = (CMaterial *)(m_pScene.createNode("Material"));
Material57->setTransparency(1);
Appearance56->setMaterial(*Material57);

Shape54->setAppearance(*Appearance56);

Transform47->addChildren(*Shape54);

CTouchSensor* TouchSensor58 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor58->setDEF("TextTouchSensor");
TouchSensor58->setDescription("Click to begin animating viewpoint selections");
Transform47->addChildren(*TouchSensor58);

CTimeSensor* TimeSensor59 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor59->setDEF("Clock");
TimeSensor59->setCycleInterval(10);
Transform47->addChildren(*TimeSensor59);

CROUTE* ROUTE60 = new CROUTE();
ROUTE60->setFromField("touchTime");
ROUTE60->setFromNode("TextTouchSensor");
ROUTE60->setToField("set_startTime");
ROUTE60->setToNode("Clock");
Transform47->addChildren(*ROUTE60);

CIntegerSequencer* IntegerSequencer61 = (CIntegerSequencer *)(m_pScene.createNode("IntegerSequencer"));
IntegerSequencer61->setDEF("TimingSequencer");
IntegerSequencer61->setKey(new float[10]{0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,1}, 10);
IntegerSequencer61->setKeyValue(new int[10]{0,1,2,3,4,5,6,7,8,10});
Transform47->addChildren(*IntegerSequencer61);

CROUTE* ROUTE62 = new CROUTE();
ROUTE62->setFromField("fraction_changed");
ROUTE62->setFromNode("Clock");
ROUTE62->setToField("set_fraction");
ROUTE62->setToNode("TimingSequencer");
Transform47->addChildren(*ROUTE62);

CScript* Script63 = (CScript *)(m_pScene.createNode("Script"));
Script63->setDEF("BindingSequencerEngine");
Cfield* field64 = new Cfield();
field64->setName("set_timeEvent");
field64->setAccessType("inputOnly");
field64->setType("SFInt32");
Script63->addField(*field64);

Cfield* field65 = new Cfield();
field65->setName("bindView1");
field65->setAccessType("outputOnly");
field65->setType("SFBool");
Script63->addField(*field65);

Cfield* field66 = new Cfield();
field66->setName("bindView2");
field66->setAccessType("outputOnly");
field66->setType("SFBool");
Script63->addField(*field66);

Cfield* field67 = new Cfield();
field67->setName("bindView3");
field67->setAccessType("outputOnly");
field67->setType("SFBool");
Script63->addField(*field67);

Cfield* field68 = new Cfield();
field68->setName("bindView4");
field68->setAccessType("outputOnly");
field68->setType("SFBool");
Script63->addField(*field68);

Cfield* field69 = new Cfield();
field69->setName("bindView5");
field69->setAccessType("outputOnly");
field69->setType("SFBool");
Script63->addField(*field69);

Cfield* field70 = new Cfield();
field70->setName("view1Bound");
field70->setAccessType("inputOnly");
field70->setType("SFBool");
Script63->addField(*field70);

Cfield* field71 = new Cfield();
field71->setName("view2Bound");
field71->setAccessType("inputOnly");
field71->setType("SFBool");
Script63->addField(*field71);

Cfield* field72 = new Cfield();
field72->setName("view3Bound");
field72->setAccessType("inputOnly");
field72->setType("SFBool");
Script63->addField(*field72);

Cfield* field73 = new Cfield();
field73->setName("view4Bound");
field73->setAccessType("inputOnly");
field73->setType("SFBool");
Script63->addField(*field73);

Cfield* field74 = new Cfield();
field74->setName("priorInputvalue");
field74->setAccessType("initializeOnly");
field74->setType("SFInt32");
field74->setValue("-1");
Script63->addField(*field74);


Script63.setSourceCode(`ecmascript:\n"+
"\n"+
"function initialize ()\n"+
"{\n"+
"    bindView5 = true;\n"+
"    Browser.print ('Timing script initialized and ready for activation');\n"+
"}\n"+
"function set_timeEvent (inputValue)\n"+
"{\n"+
"    if (inputValue == priorInputvalue)\n"+
"    {\n"+
"        return; // ignore repeated inputs\n"+
"    }\n"+
"    // new value provided\n"+
"    priorInputvalue = inputValue;\n"+
"    // Browser.print ('\\ntimeEvent inputValue=' + inputValue);\n"+
"\n"+
"    // mimics user execution of Figure 4.1 steps t_0 through t_8\n"+
"    if (inputValue == 0)\n"+
"    {\n"+
"        Browser.print ('\\n===========\\n time t0');\n"+
"        bindView1 = true;\n"+
"    }\n"+
"    else if (inputValue == 1)\n"+
"    {\n"+
"        Browser.print ('\\n===========\\n time t1');\n"+
"        bindView2 = true;\n"+
"    }\n"+
"    else if (inputValue == 2)\n"+
"    {\n"+
"        Browser.print ('\\n===========\\n time t2');\n"+
"        bindView3 = true;\n"+
"    }\n"+
"    else if (inputValue == 3)\n"+
"    {\n"+
"        Browser.print ('\\n===========\\n time t3');\n"+
"        bindView3 = false;\n"+
"    }\n"+
"    else if (inputValue == 4)\n"+
"    {\n"+
"        Browser.print ('\\n===========\\n time t4');\n"+
"        bindView1 = true;\n"+
"    }\n"+
"    else if (inputValue == 5)\n"+
"    {\n"+
"        Browser.print ('\\n===========\\n time t5');\n"+
"        bindView2 = false;\n"+
"    }\n"+
"    else if (inputValue == 6)\n"+
"    {\n"+
"        Browser.print ('\\n===========\\n time t6');\n"+
"        bindView1 = false;\n"+
"    }\n"+
"    else if (inputValue == 7)\n"+
"    {\n"+
"        Browser.print ('\\n===========\\n time t7');\n"+
"        bindView4 = true;\n"+
"\n"+
"    }\n"+
"    else if (inputValue == 8)\n"+
"    {\n"+
"        Browser.print ('\\n===========\\n time t8');\n"+
"        Browser.print (', no action, all done');\n"+
"        Browser.print ('\\n\\n');\n"+
"    }\n"+
"}\n"+
"\n"+
"function view1Bound (inputValue)\n"+
"{\n"+
"    Browser.print (', view1Bound ' + (inputValue));\n"+
"    if (priorInputvalue == -1) Browser.print ('\\n');\n"+
"}\n"+
"function view2Bound (inputValue)\n"+
"{\n"+
"    Browser.print (', view2Bound ' + (inputValue));\n"+
"}\n"+
"function view3Bound (inputValue)\n"+
"{\n"+
"    Browser.print (', view3Bound ' + (inputValue));\n"+
"}\n"+
"function view4Bound (inputValue)\n"+
"{\n"+
"    Browser.print (', view4Bound ' + (inputValue));\n"+
"}\n"+
"function view5Bound (inputValue)\n"+
"{\n"+
"    Browser.print (', view5Bound ' + (inputValue));\n"+
"}`)
Transform47->addChildren(*Script63);

//drive Script with TimeSensor clock
CROUTE* ROUTE75 = new CROUTE();
ROUTE75->setFromField("value_changed");
ROUTE75->setFromNode("TimingSequencer");
ROUTE75->setToField("set_timeEvent");
ROUTE75->setToNode("BindingSequencerEngine");
Transform47->addChildren(*ROUTE75);

//Script will bind and unbind Viewpoint nodes
CROUTE* ROUTE76 = new CROUTE();
ROUTE76->setFromField("bindView1");
ROUTE76->setFromNode("BindingSequencerEngine");
ROUTE76->setToField("set_bind");
ROUTE76->setToNode("View1");
Transform47->addChildren(*ROUTE76);

CROUTE* ROUTE77 = new CROUTE();
ROUTE77->setFromField("bindView2");
ROUTE77->setFromNode("BindingSequencerEngine");
ROUTE77->setToField("set_bind");
ROUTE77->setToNode("View2");
Transform47->addChildren(*ROUTE77);

CROUTE* ROUTE78 = new CROUTE();
ROUTE78->setFromField("bindView3");
ROUTE78->setFromNode("BindingSequencerEngine");
ROUTE78->setToField("set_bind");
ROUTE78->setToNode("View3");
Transform47->addChildren(*ROUTE78);

CROUTE* ROUTE79 = new CROUTE();
ROUTE79->setFromField("bindView4");
ROUTE79->setFromNode("BindingSequencerEngine");
ROUTE79->setToField("set_bind");
ROUTE79->setToNode("View4");
Transform47->addChildren(*ROUTE79);

CROUTE* ROUTE80 = new CROUTE();
ROUTE80->setFromField("bindView5");
ROUTE80->setFromNode("BindingSequencerEngine");
ROUTE80->setToField("set_bind");
ROUTE80->setToNode("ClickToAnimateView");
Transform47->addChildren(*ROUTE80);

//Viewpoint nodes report bind and unbind events
CROUTE* ROUTE81 = new CROUTE();
ROUTE81->setFromField("isBound");
ROUTE81->setFromNode("View1");
ROUTE81->setToField("view1Bound");
ROUTE81->setToNode("BindingSequencerEngine");
Transform47->addChildren(*ROUTE81);

CROUTE* ROUTE82 = new CROUTE();
ROUTE82->setFromField("isBound");
ROUTE82->setFromNode("View2");
ROUTE82->setToField("view2Bound");
ROUTE82->setToNode("BindingSequencerEngine");
Transform47->addChildren(*ROUTE82);

CROUTE* ROUTE83 = new CROUTE();
ROUTE83->setFromField("isBound");
ROUTE83->setFromNode("View3");
ROUTE83->setToField("view3Bound");
ROUTE83->setToNode("BindingSequencerEngine");
Transform47->addChildren(*ROUTE83);

CROUTE* ROUTE84 = new CROUTE();
ROUTE84->setFromField("isBound");
ROUTE84->setFromNode("View4");
ROUTE84->setToField("view4Bound");
ROUTE84->setToNode("BindingSequencerEngine");
Transform47->addChildren(*ROUTE84);

group->addChildren(*Transform47);

X3D0->setScene(*Scene17);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
