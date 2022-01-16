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
X3D0->setVersion("3.3");
Chead* head1 = new Chead();
//comment #1
//comment #2
//comment #3
//comment #4
Ccomponent* component2 = new Ccomponent();
component2->setName("Navigation");
component2->setLevel(3);
head1->addComponent(*component2);

Ccomponent* component3 = new Ccomponent();
component3->setName("Layering");
component3->setLevel(1);
head1->addComponent(*component3);

Cunit* unit4 = new Cunit();
unit4->setName("AngleUnitConversion");
unit4->setCategory("angle");
unit4->setConversionFactor(1);
head1->addUnit(*unit4);

Cunit* unit5 = new Cunit();
unit5->setName("LengthUnitConversion");
unit5->setCategory("length");
unit5->setConversionFactor(1);
head1->addUnit(*unit5);

Cmeta* meta6 = new Cmeta();
meta6->setName("title");
meta6->setContent("Quotes.x3d");
head1->addMeta(*meta6);

Cmeta* meta7 = new Cmeta();
meta7->setName("description");
meta7->setContent("Example HelloWorldProgram creates an X3D model using the X3D Java Scene Access Interface (SAI) Library");
head1->addMeta(*meta7);

Cmeta* meta8 = new Cmeta();
meta8->setName("reference");
meta8->setContent("https://www.web3d.org/specifications/java/X3DJSAIL.html");
head1->addMeta(*meta8);

Cmeta* meta9 = new Cmeta();
meta9->setName("generator");
meta9->setContent("HelloWorldProgramOutput.java");
head1->addMeta(*meta9);

Cmeta* meta10 = new Cmeta();
meta10->setName("created");
meta10->setContent("6 September 2016");
head1->addMeta(*meta10);

Cmeta* meta11 = new Cmeta();
meta11->setName("modified");
meta11->setContent("7 April 2018");
head1->addMeta(*meta11);

Cmeta* meta12 = new Cmeta();
meta12->setName("generator");
meta12->setContent("X3D Java Scene Access Interface Library (X3DJSAIL)");
head1->addMeta(*meta12);

Cmeta* meta13 = new Cmeta();
meta13->setName("generator");
meta13->setContent("https://www.web3d.org/specifications/java/examples/HelloWorldProgram.java");
head1->addMeta(*meta13);

Cmeta* meta14 = new Cmeta();
meta14->setName("generator");
meta14->setContent("Netbeans http://www.netbeans.org");
head1->addMeta(*meta14);

Cmeta* meta15 = new Cmeta();
meta15->setName("creator");
meta15->setContent("Don Brutzman");
head1->addMeta(*meta15);

Cmeta* meta16 = new Cmeta();
meta16->setName("reference");
meta16->setContent("https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/stylesheets/java/examples/HelloWorldProgramOutput.x3d");
head1->addMeta(*meta16);

Cmeta* meta17 = new Cmeta();
meta17->setName("reference");
meta17->setContent("Console output, ClassicVRML encoding, VRML97 encoding and pretty-print documentation:");
head1->addMeta(*meta17);

Cmeta* meta18 = new Cmeta();
meta18->setName("reference");
meta18->setContent("HelloWorldProgramOutput.txt");
head1->addMeta(*meta18);

Cmeta* meta19 = new Cmeta();
meta19->setName("reference");
meta19->setContent("HelloWorldProgramOutput.x3dv");
head1->addMeta(*meta19);

Cmeta* meta20 = new Cmeta();
meta20->setName("reference");
meta20->setContent("HelloWorldProgramOutput.wrl");
head1->addMeta(*meta20);

Cmeta* meta21 = new Cmeta();
meta21->setName("reference");
meta21->setContent("HelloWorldProgramOutput.html");
head1->addMeta(*meta21);

Cmeta* meta22 = new Cmeta();
meta22->setName("reference");
meta22->setContent("X3dValidator https://savage.nps.edu/X3dValidator?url=https://www.web3d.org/specifications/java/examples/HelloWorldProgramOutput.x3d");
head1->addMeta(*meta22);

Cmeta* meta23 = new Cmeta();
meta23->setName("identifier");
meta23->setContent("https://www.web3d.org/specifications/java/examples/HelloWorldProgramOutput.x3d");
head1->addMeta(*meta23);

Cmeta* meta24 = new Cmeta();
meta24->setName("license");
meta24->setContent("../license.html");
head1->addMeta(*meta24);

Cmeta* meta25 = new Cmeta();
meta25->setName("info");
meta25->setContent("tested sat: name value cannot contain embedded space character");
head1->addMeta(*meta25);

Cmeta* meta26 = new Cmeta();
meta26->setName("translated");
meta26->setContent("30 April 2018");
head1->addMeta(*meta26);

Cmeta* meta27 = new Cmeta();
meta27->setName("generator");
meta27->setContent("X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html");
head1->addMeta(*meta27);

Cmeta* meta28 = new Cmeta();
meta28->setName("reference");
meta28->setContent("X3D JSON encoding: https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding");
head1->addMeta(*meta28);

X3D0->setHead(*head1);

CScene* Scene29 = new CScene();
CViewpointGroup* ViewpointGroup30 = (CViewpointGroup *)(m_pScene.createNode("ViewpointGroup"));
ViewpointGroup30->setDescription("Available viewpoints");
CViewpoint* Viewpoint31 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint31->setDEF("DefaultView");
Viewpoint31->setDescription("Hello X3DJSAIL");
ViewpointGroup30->addChildren(*Viewpoint31);

CViewpoint* Viewpoint32 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint32->setDEF("TopDownView");
Viewpoint32->setDescription("top-down view from above");
Viewpoint32->setOrientation(new float[4]{1,0,0,-1.570796});
Viewpoint32->setPosition(new float[3]{0,100,0});
ViewpointGroup30->addChildren(*Viewpoint32);

group->addChildren(*ViewpointGroup30);

CWorldInfo* WorldInfo33 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo33->setDEF("WorldInfoDEF");
WorldInfo33->setTitle("HelloWorldProgram produced by X3D Java SAI Library (X3DJSAIL)");
group->addChildren(*WorldInfo33);

CWorldInfo* WorldInfo34 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo34->setUSE("WorldInfoDEF");
group->addChildren(*WorldInfo34);

CWorldInfo* WorldInfo35 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo35->setUSE("WorldInfoDEF");
group->addChildren(*WorldInfo35);

CMetadataString* MetadataString36 = (CMetadataString *)(m_pScene.createNode("MetadataString"));
MetadataString36->setName("test");
MetadataString36->setDEF("scene.addChildMetadata");
MetadataString36->setValue(new CString[1]{"Top-level root Metadata node beneath Scene needs to be one of '-children' in JSON encoding"}, 1);
group->addMetadata(*MetadataString36);

CLayerSet* LayerSet37 = (CLayerSet *)(m_pScene.createNode("LayerSet"));
LayerSet37->setDEF("scene.addChildLayerSetTest");
group->addLayerSet(*LayerSet37);

CTransform* Transform38 = (CTransform *)(m_pScene.createNode("Transform"));
Transform38->setDEF("LogoGeometryTransform");
Transform38->setTranslation(new float[3]{0,1.5,0});
CAnchor* Anchor39 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor39->setDescription("select for X3D Java SAI Library (X3DJSAIL) description");
Anchor39->setUrl(new CString[2]{"../X3DJSAIL.html","https://www.web3d.org/specifications/java/X3DJSAIL.html"}, 2);
CShape* Shape40 = (CShape *)(m_pScene.createNode("Shape"));
Shape40->setDEF("BoxShape");
CAppearance* Appearance41 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material42 = (CMaterial *)(m_pScene.createNode("Material"));
Material42->setDEF("GreenMaterial");
Material42->setDiffuseColor(new float[3]{0,1,1});
Material42->setEmissiveColor(new float[3]{0.8,0,0});
Material42->setTransparency(0.1);
Appearance41->setMaterial(*Material42);

CImageTexture* ImageTexture43 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture43->setUrl(new CString[2]{"images/X3dJavaSceneAccessInterfaceSaiLibrary.png","https://www.web3d.org/specifications/java/examples/images/X3dJavaSceneAccessInterfaceSaiLibrary.png"}, 2);
Appearance41->setTexture(*ImageTexture43);

Shape40->setAppearance(*Appearance41);

CBox* Box44 = (CBox *)(m_pScene.createNode("Box"));
Box44->setDEF("test-NMTOKEN_regex.0123456789");
Box44->setCssClass("untextured");
Shape40->setGeometry(Box44);

Anchor39->addChildren(*Shape40);

Transform38->addChildren(*Anchor39);

group->addChildren(*Transform38);

CShape* Shape45 = (CShape *)(m_pScene.createNode("Shape"));
Shape45->setDEF("LineShape");
CAppearance* Appearance46 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material47 = (CMaterial *)(m_pScene.createNode("Material"));
Material47->setEmissiveColor(new float[3]{0.6,0.19607843,0.8});
Appearance46->setMaterial(*Material47);

Shape45->setAppearance(*Appearance46);

CIndexedLineSet* IndexedLineSet48 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet48->setCoordIndex(new int[6]{0,1,2,3,4,0});
//Coordinate 3-tuple point count: 6
CCoordinate* Coordinate49 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate49->setPoint(new float[18]{0,1.5,0,2,1.5,0,2,1.5,-2,-2,1.5,-2,-2,1.5,0,0,1.5,0});
IndexedLineSet48->setCoord(*Coordinate49);

Shape45->setGeometry(IndexedLineSet48);

group->addChildren(*Shape45);

CPositionInterpolator* PositionInterpolator50 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator50->setDEF("BoxPathAnimator");
PositionInterpolator50->setKey(new float[6]{0,0.125,0.375,0.625,0.875,1}, 6);
PositionInterpolator50->setKeyValue(new float[18]{0,1.5,0,2,1.5,0,2,1.5,-2,-2,1.5,-2,-2,1.5,0,0,1.5,0});
group->addChildren(*PositionInterpolator50);

CTimeSensor* TimeSensor51 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor51->setDEF("OrbitClock");
TimeSensor51->setCycleInterval(8);
TimeSensor51->setLoop(True);
group->addChildren(*TimeSensor51);

CROUTE* ROUTE52 = new CROUTE();
ROUTE52->setFromField("fraction_changed");
ROUTE52->setFromNode("OrbitClock");
ROUTE52->setToField("set_fraction");
ROUTE52->setToNode("BoxPathAnimator");
group->addChildren(*ROUTE52);

CROUTE* ROUTE53 = new CROUTE();
ROUTE53->setFromField("value_changed");
ROUTE53->setFromNode("BoxPathAnimator");
ROUTE53->setToField("set_translation");
ROUTE53->setToNode("LogoGeometryTransform");
group->addChildren(*ROUTE53);

CTransform* Transform54 = (CTransform *)(m_pScene.createNode("Transform"));
Transform54->setDEF("TextTransform");
Transform54->setTranslation(new float[3]{0,-1.5,0});
CShape* Shape55 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance56 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material57 = (CMaterial *)(m_pScene.createNode("Material"));
Material57->setUSE("GreenMaterial");
Appearance56->setMaterial(*Material57);

Shape55->setAppearance(*Appearance56);

CText* Text58 = (CText *)(m_pScene.createNode("Text"));
Text58->setString(new CString[3]{"X3D Java","SAI Library","X3DJSAIL"}, 3);
//Comment example A, plain quotation marks: He said, \"Immel did it!\"
//Comment example B, XML character entities: He said, &quot;Immel did it!&quot;
CMetadataSet* MetadataSet59 = (CMetadataSet *)(m_pScene.createNode("MetadataSet"));
MetadataSet59->setName("EscapedQuotationMarksMetadataSet");
CMetadataString* MetadataString60 = (CMetadataString *)(m_pScene.createNode("MetadataString"));
MetadataString60->setName("quotesTestC");
MetadataString60->setValue(new CString[1]{"MFString example C, backslash-escaped quotes: He said, \"Immel did it!\""}, 1);
MetadataSet59->setValue(*MetadataString60);

CMetadataString* MetadataString61 = (CMetadataString *)(m_pScene.createNode("MetadataString"));
MetadataString61->setName("extraChildTest");
MetadataString61->setValue(new CString[1]{"checks MetadataSetObject addValue() method"}, 1);
MetadataSet59->addValue(*MetadataString61);

Text58->setMetadata(*MetadataSet59);

CFontStyle* FontStyle62 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle62->setJustify(new CString[2]{"MIDDLE","MIDDLE"}, 2);
Text58->setFontStyle(*FontStyle62);

Shape55->setGeometry(Text58);

Transform54->addChildren(*Shape55);

CCollision* Collision63 = (CCollision *)(m_pScene.createNode("Collision"));
//test containerField='proxy'
CShape* Shape64 = (CShape *)(m_pScene.createNode("Shape"));
Shape64->setDEF("ProxyShape");
//alternative XML encoding: Text string='\"One, Two, Comment\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\"'
//alternative XML encoding: Text string='\"One, Two, Comment\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\" \"\"'
//alternative Java source: .setString(new String [] {\"One, Two, Comment\", \"\", \"He said, \\\"\"\"Immel did it!\\\"\"\\\"\"})
//reference: https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/StringArrayEncodingExamplesIndex.html
CText* Text65 = (CText *)(m_pScene.createNode("Text"));
Text65->setString(new CString[3]{"One, Two, Text","","He said, \"Immel did it!\" \"\""}, 3);
Shape64->setGeometry(Text65);

Collision63->setProxy(*Shape64);

Transform54->addChildren(*Collision63);

//It's a beautiful world
//... for you!
//https://en.wikipedia.org/wiki/Beautiful_World_(Devo_song)
group->addChildren(*Transform54);

//repeatedly spin 180 degrees as a readable special effect
COrientationInterpolator* OrientationInterpolator66 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator66->setDEF("SpinInterpolator");
OrientationInterpolator66->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator66->setKeyValue(new float[12]{0,1,0,4.712389,0,1,0,0,0,1,0,1.5707964});
group->addChildren(*OrientationInterpolator66);

CTimeSensor* TimeSensor67 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor67->setDEF("SpinClock");
TimeSensor67->setCycleInterval(5);
TimeSensor67->setLoop(True);
group->addChildren(*TimeSensor67);

CROUTE* ROUTE68 = new CROUTE();
ROUTE68->setFromField("fraction_changed");
ROUTE68->setFromNode("SpinClock");
ROUTE68->setToField("set_fraction");
ROUTE68->setToNode("SpinInterpolator");
group->addChildren(*ROUTE68);

CROUTE* ROUTE69 = new CROUTE();
ROUTE69->setFromField("value_changed");
ROUTE69->setFromNode("SpinInterpolator");
ROUTE69->setToField("rotation");
ROUTE69->setToNode("TextTransform");
group->addChildren(*ROUTE69);

CGroup* Group70 = (CGroup *)(m_pScene.createNode("Group"));
Group70->setDEF("BackgroundGroup");
CBackground* Background71 = (CBackground *)(m_pScene.createNode("Background"));
Background71->setDEF("GradualBackground");
Group70->addChildren(*Background71);

CScript* Script72 = (CScript *)(m_pScene.createNode("Script"));
Script72->setDEF("colorTypeConversionScript");
Cfield* field73 = new Cfield();
field73->setName("colorInput");
field73->setAccessType("inputOnly");
field73->setType("SFColor");
Script72->addField(*field73);

Cfield* field74 = new Cfield();
field74->setName("colorsOutput");
field74->setAccessType("outputOnly");
field74->setType("MFColor");
Script72->addField(*field74);


Script72.setSourceCode(`ecmascript:\n"+
"\n"+
"function colorInput (eventValue) // Example source code\n"+
"{\n"+
"   colorsOutput = new MFColor(eventValue); // assigning value sends output event\n"+
"// Browser.print('colorInput=' + eventValue + ', colorsOutput=' + colorsOutput + '\\n');\n"+
"}`)
Group70->addChildren(*Script72);

CColorInterpolator* ColorInterpolator75 = (CColorInterpolator *)(m_pScene.createNode("ColorInterpolator"));
ColorInterpolator75->setDEF("ColorAnimator");
ColorInterpolator75->setKey(new float[3]{0,0.5,1}, 3);
ColorInterpolator75->setKeyValue(new float[9]{0.9411765,1,1,0.29411766,0,0.50980395,0.9411765,1,1});
//AZURE to INDIGO and back again
Group70->addChildren(*ColorInterpolator75);

CTimeSensor* TimeSensor76 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor76->setDEF("ColorClock");
TimeSensor76->setCycleInterval(60);
TimeSensor76->setLoop(True);
Group70->addChildren(*TimeSensor76);

CROUTE* ROUTE77 = new CROUTE();
ROUTE77->setFromField("colorsOutput");
ROUTE77->setFromNode("colorTypeConversionScript");
ROUTE77->setToField("skyColor");
ROUTE77->setToNode("GradualBackground");
Group70->addChildren(*ROUTE77);

CROUTE* ROUTE78 = new CROUTE();
ROUTE78->setFromField("value_changed");
ROUTE78->setFromNode("ColorAnimator");
ROUTE78->setToField("colorInput");
ROUTE78->setToNode("colorTypeConversionScript");
Group70->addChildren(*ROUTE78);

CROUTE* ROUTE79 = new CROUTE();
ROUTE79->setFromField("fraction_changed");
ROUTE79->setFromNode("ColorClock");
ROUTE79->setToField("set_fraction");
ROUTE79->setToNode("ColorAnimator");
Group70->addChildren(*ROUTE79);

group->addChildren(*Group70);

CProtoDeclare ProtoDeclare80 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ArtDeco01Material" appinfo="tooltip: ArtDeco01Material prototype is a Material node" ><ProtoInterface><field name="description" accessType="inputOutput" appinfo="tooltip for descriptionField" type="SFString" value="ArtDeco01Material prototype is a Material node"></field>
<field name="enabled" accessType="inputOutput" type="SFBool" value="true"></field>
</ProtoInterface>
<ProtoBody><!--Initial node of ProtoBody determines prototype node type--><Material ambientIntensity="0.25" diffuseColor="0.282435 0.085159 0.134462" shininess="0.127273" specularColor="0.276305 0.11431 0.139857"></Material>
<!--[HelloWorldProgram diagnostic] should be connected to scene graph: ArtDeco01ProtoDeclare.getNodeType()="Material"--><!--presence of follow-on TouchSensor shows that additional nodes are allowed in ProtoBody after initial node, regardless of node types--><TouchSensor description="within ProtoBody"><IS><connect nodeField="description" protoField="description"></connect>
<connect nodeField="enabled" protoField="enabled"></connect>
</IS>
</TouchSensor>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare80->setName("ArtDeco01Material");
ProtoDeclare80->setAppinfo("tooltip: ArtDeco01Material prototype is a Material node");
CProtoInterface* ProtoInterface81 = new CProtoInterface();
Cfield* field82 = new Cfield();
field82->setName("description");
field82->setAccessType("inputOutput");
field82->setAppinfo("tooltip for descriptionField");
field82->setType("SFString");
field82->setValue("ArtDeco01Material prototype is a Material node");
ProtoInterface81->addField(*field82);

Cfield* field83 = new Cfield();
field83->setName("enabled");
field83->setAccessType("inputOutput");
field83->setType("SFBool");
field83->setValue("true");
ProtoInterface81->addField(*field83);

ProtoDeclare80->setProtoInterface(*ProtoInterface81);

CProtoBody* ProtoBody84 = new CProtoBody();
//Initial node of ProtoBody determines prototype node type
CMaterial* Material85 = (CMaterial *)(m_pScene.createNode("Material"));
Material85->setAmbientIntensity(0.25);
Material85->setDiffuseColor(new float[3]{0.282435,0.085159,0.134462});
Material85->setShininess(0.127273);
Material85->setSpecularColor(new float[3]{0.276305,0.11431,0.139857});
ProtoBody84->addChildren(*Material85);

//[HelloWorldProgram diagnostic] should be connected to scene graph: ArtDeco01ProtoDeclare.getNodeType()=\"Material\"
//presence of follow-on TouchSensor shows that additional nodes are allowed in ProtoBody after initial node, regardless of node types
CTouchSensor* TouchSensor86 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor86->setDescription("within ProtoBody");
CIS* IS87 = new CIS();
Cconnect* connect88 = new Cconnect();
connect88->setNodeField("description");
connect88->setProtoField("description");
IS87->addConnect(*connect88);

Cconnect* connect89 = new Cconnect();
connect89->setNodeField("enabled");
connect89->setProtoField("enabled");
IS87->addConnect(*connect89);

TouchSensor86->setIS(*IS87);

ProtoBody84->addChildren(*TouchSensor86);

ProtoDeclare80->setProtoBody(*ProtoBody84);

group->addChildren(*ProtoDeclare80);

CExternProtoDeclare* ExternProtoDeclare90 = new CExternProtoDeclare();
ExternProtoDeclare90->setName("ArtDeco02Material");
ExternProtoDeclare90->setAppinfo("this is a different Material node");
ExternProtoDeclare90->setUrl(new CString[2]{"http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3d#ArtDeco02Material","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3dv#ArtDeco02Material"}, 2);
//[HelloWorldProgram diagnostic] ArtDeco02ExternProtoDeclare.getNodeType()=\"ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02Material' type cannot be remotely accessed at run time, TODO X3DJSAIL needs to add further capability.\"
Cfield* field91 = new Cfield();
field91->setName("description");
field91->setAccessType("inputOutput");
field91->setAppinfo("tooltip for descriptionField");
field91->setType("SFString");
ExternProtoDeclare90->addField(*field91);

group->addChildren(*ExternProtoDeclare90);

//Tested ArtDeco01ProtoInstance, ArtDeco02ProtoInstance for improper node type when ProtoInstance is added in wrong place
CShape* Shape92 = (CShape *)(m_pScene.createNode("Shape"));
Shape92->setDEF("TestShape1");
CAppearance* Appearance93 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance93->setDEF("TestAppearance1");
//ArtDeco01Material prototype goes here... TODO ensure setContainerField is handled in exported Java
CProtoInstance* ProtoInstance94 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance94->setName("ArtDeco01Material");
//[HelloWorldProgram diagnostic] ArtDeco01ProtoInstance.getNodeType()=\"Material\"
CfieldValue* fieldValue95 = new CfieldValue();
fieldValue95->setName("description");
fieldValue95->setValue("ArtDeco01Material can substitute for a Material node");
ProtoInstance94->addFieldValue(*fieldValue95);

Appearance93->setMaterial(*ProtoInstance94);

Shape92->setAppearance(*Appearance93);

CSphere* Sphere96 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere96->setRadius(0.001);
Shape92->setGeometry(Sphere96);

group->addChildren(*Shape92);

CShape* Shape97 = (CShape *)(m_pScene.createNode("Shape"));
Shape97->setDEF("TestShape2");
CAppearance* Appearance98 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance98->setDEF("TestAppearance2");
//ArtDeco02Material prototype goes here... TODO ensure setContainerField is handled in exported Java
CProtoInstance* ProtoInstance99 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance99->setName("ArtDeco02Material");
ProtoInstance99->setDEF("ArtDeco02MaterialDEF");
//[HelloWorldProgram diagnostic] ArtDeco02ProtoInstance.getNodeType()=\"ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02Material' type cannot be remotely accessed at run time, TODO X3DJSAIL needs to add further capability.\"
CfieldValue* fieldValue100 = new CfieldValue();
fieldValue100->setName("description");
fieldValue100->setValue("ArtDeco02Material can substitute for another Material node");
ProtoInstance99->addFieldValue(*fieldValue100);

Appearance98->setMaterial(*ProtoInstance99);

Shape97->setAppearance(*Appearance98);

CCone* Cone101 = (CCone *)(m_pScene.createNode("Cone"));
Cone101->setBottomRadius(0.001);
Cone101->setHeight(0.001);
Shape97->setGeometry(Cone101);

group->addChildren(*Shape97);

CShape* Shape102 = (CShape *)(m_pScene.createNode("Shape"));
Shape102->setDEF("TestShape3");
CAppearance* Appearance103 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance103->setDEF("TestAppearance3");
//ArtDeco02Material ProtoInstance USE goes here...
CProtoInstance* ProtoInstance104 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance104->setUSE("ArtDeco02MaterialDEF");
Appearance103->setMaterial(*ProtoInstance104);

Shape102->setAppearance(*Appearance103);

CCylinder* Cylinder105 = (CCylinder *)(m_pScene.createNode("Cylinder"));
Cylinder105->setHeight(0.001);
Cylinder105->setRadius(0.001);
Shape102->setGeometry(Cylinder105);

group->addChildren(*Shape102);

CInline* Inline106 = (CInline *)(m_pScene.createNode("Inline"));
Inline106->setDEF("inlineSceneDef");
Inline106->setUrl(new CString[1]{"someOtherScene.x3d"}, 1);
group->addChildren(*Inline106);

CIMPORT* IMPORT107 = new CIMPORT();
IMPORT107->setAS("WorldInfoDEF2");
IMPORT107->setImportedDEF("WorldInfoDEF");
IMPORT107->setInlineDEF("inlineSceneDef");
group->addChildren(*IMPORT107);

CEXPORT* EXPORT108 = new CEXPORT();
EXPORT108->setAS("WorldInfoDEF3");
EXPORT108->setLocalDEF("WorldInfoDEF");
group->addChildren(*EXPORT108);

CProtoDeclare ProtoDeclare109 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="MaterialModulator" appinfo="mimic a Material node and modulate fields as an animation effect" documentation="http://x3dgraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/MaterialModulatorIndex.html" ><ProtoInterface><field name="enabled" accessType="inputOutput" type="SFBool" value="true"></field>
<field name="diffuseColor" accessType="inputOutput" type="SFColor" value="0 0 0"></field>
<field name="emissiveColor" accessType="inputOutput" type="SFColor" value="0.05 0.05 0.5"></field>
<field name="specularColor" accessType="inputOutput" type="SFColor" value="0 0 0"></field>
<field name="transparency" accessType="inputOutput" type="SFFloat" value="0"></field>
<field name="shininess" accessType="inputOutput" type="SFFloat" value="0"></field>
<field name="ambientIntensity" accessType="inputOutput" type="SFFloat" value="0"></field>
</ProtoInterface>
<ProtoBody><Material DEF="MaterialNode"><IS><connect nodeField="diffuseColor" protoField="diffuseColor"></connect>
<connect nodeField="emissiveColor" protoField="emissiveColor"></connect>
<connect nodeField="specularColor" protoField="specularColor"></connect>
<connect nodeField="transparency" protoField="transparency"></connect>
<connect nodeField="shininess" protoField="shininess"></connect>
<connect nodeField="ambientIntensity" protoField="ambientIntensity"></connect>
</IS>
</Material>
<!--Only first node (the node type) is renderable, others are along for the ride--><Script DEF="MaterialModulatorScript"><field name="enabled" accessType="inputOutput" type="SFBool"></field>
<field name="diffuseColor" accessType="inputOutput" type="SFColor"></field>
<field name="newColor" accessType="outputOnly" type="SFColor"></field>
<field name="clockTrigger" accessType="inputOnly" type="SFTime"></field>
<IS><connect nodeField="enabled" protoField="enabled"></connect>
<connect nodeField="diffuseColor" protoField="diffuseColor"></connect>
</IS>
<![CDATA[ecmascript:
function initialize ()
{
    newColor = diffuseColor; // start with correct color
}
function set_enabled (newValue)
{
	enabled = newValue;
}
function clockTrigger (timeValue)
{
    if (!enabled) return;
    red   = newColor.r;
    green = newColor.g;
    blue  = newColor.b;

    // note different modulation rates for each color component, % is modulus operator
    newColor = new SFColor ((red + 0.02) % 1, (green + 0.03) % 1, (blue + 0.04) % 1);
	if (enabled)
	{
		Browser.print ('diffuseColor=(' + red + ',' + green + ',' + blue + ') newColor=' + newColor.toString() + '\n');
	}
}]]></Script>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare109->setName("MaterialModulator");
ProtoDeclare109->setAppinfo("mimic a Material node and modulate fields as an animation effect");
ProtoDeclare109->setDocumentation("http://x3dgraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/MaterialModulatorIndex.html");
CProtoInterface* ProtoInterface110 = new CProtoInterface();
Cfield* field111 = new Cfield();
field111->setName("enabled");
field111->setAccessType("inputOutput");
field111->setType("SFBool");
field111->setValue("true");
ProtoInterface110->addField(*field111);

Cfield* field112 = new Cfield();
field112->setName("diffuseColor");
field112->setAccessType("inputOutput");
field112->setType("SFColor");
field112->setValue("0 0 0");
ProtoInterface110->addField(*field112);

Cfield* field113 = new Cfield();
field113->setName("emissiveColor");
field113->setAccessType("inputOutput");
field113->setType("SFColor");
field113->setValue("0.05 0.05 0.5");
ProtoInterface110->addField(*field113);

Cfield* field114 = new Cfield();
field114->setName("specularColor");
field114->setAccessType("inputOutput");
field114->setType("SFColor");
field114->setValue("0 0 0");
ProtoInterface110->addField(*field114);

Cfield* field115 = new Cfield();
field115->setName("transparency");
field115->setAccessType("inputOutput");
field115->setType("SFFloat");
field115->setValue("0");
ProtoInterface110->addField(*field115);

Cfield* field116 = new Cfield();
field116->setName("shininess");
field116->setAccessType("inputOutput");
field116->setType("SFFloat");
field116->setValue("0");
ProtoInterface110->addField(*field116);

Cfield* field117 = new Cfield();
field117->setName("ambientIntensity");
field117->setAccessType("inputOutput");
field117->setType("SFFloat");
field117->setValue("0");
ProtoInterface110->addField(*field117);

ProtoDeclare109->setProtoInterface(*ProtoInterface110);

CProtoBody* ProtoBody118 = new CProtoBody();
CMaterial* Material119 = (CMaterial *)(m_pScene.createNode("Material"));
Material119->setDEF("MaterialNode");
CIS* IS120 = new CIS();
Cconnect* connect121 = new Cconnect();
connect121->setNodeField("diffuseColor");
connect121->setProtoField("diffuseColor");
IS120->addConnect(*connect121);

Cconnect* connect122 = new Cconnect();
connect122->setNodeField("emissiveColor");
connect122->setProtoField("emissiveColor");
IS120->addConnect(*connect122);

Cconnect* connect123 = new Cconnect();
connect123->setNodeField("specularColor");
connect123->setProtoField("specularColor");
IS120->addConnect(*connect123);

Cconnect* connect124 = new Cconnect();
connect124->setNodeField("transparency");
connect124->setProtoField("transparency");
IS120->addConnect(*connect124);

Cconnect* connect125 = new Cconnect();
connect125->setNodeField("shininess");
connect125->setProtoField("shininess");
IS120->addConnect(*connect125);

Cconnect* connect126 = new Cconnect();
connect126->setNodeField("ambientIntensity");
connect126->setProtoField("ambientIntensity");
IS120->addConnect(*connect126);

Material119->setIS(*IS120);

ProtoBody118->addChildren(*Material119);

//Only first node (the node type) is renderable, others are along for the ride
CScript* Script127 = (CScript *)(m_pScene.createNode("Script"));
Script127->setDEF("MaterialModulatorScript");
Cfield* field128 = new Cfield();
field128->setName("enabled");
field128->setAccessType("inputOutput");
field128->setType("SFBool");
Script127->addField(*field128);

Cfield* field129 = new Cfield();
field129->setName("diffuseColor");
field129->setAccessType("inputOutput");
field129->setType("SFColor");
Script127->addField(*field129);

Cfield* field130 = new Cfield();
field130->setName("newColor");
field130->setAccessType("outputOnly");
field130->setType("SFColor");
Script127->addField(*field130);

Cfield* field131 = new Cfield();
field131->setName("clockTrigger");
field131->setAccessType("inputOnly");
field131->setType("SFTime");
Script127->addField(*field131);

CIS* IS132 = new CIS();
Cconnect* connect133 = new Cconnect();
connect133->setNodeField("enabled");
connect133->setProtoField("enabled");
IS132->addConnect(*connect133);

Cconnect* connect134 = new Cconnect();
connect134->setNodeField("diffuseColor");
connect134->setProtoField("diffuseColor");
IS132->addConnect(*connect134);

Script127->setIS(*IS132);


Script127.setSourceCode(`ecmascript:\n"+
"function initialize ()\n"+
"{\n"+
"    newColor = diffuseColor; // start with correct color\n"+
"}\n"+
"function set_enabled (newValue)\n"+
"{\n"+
"	enabled = newValue;\n"+
"}\n"+
"function clockTrigger (timeValue)\n"+
"{\n"+
"    if (!enabled) return;\n"+
"    red   = newColor.r;\n"+
"    green = newColor.g;\n"+
"    blue  = newColor.b;\n"+
"\n"+
"    // note different modulation rates for each color component, % is modulus operator\n"+
"    newColor = new SFColor ((red + 0.02) % 1, (green + 0.03) % 1, (blue + 0.04) % 1);\n"+
"	if (enabled)\n"+
"	{\n"+
"		Browser.print ('diffuseColor=(' + red + ',' + green + ',' + blue + ') newColor=' + newColor.toString() + '\\n');\n"+
"	}\n"+
"}`)
ProtoBody118->addChildren(*Script127);

ProtoDeclare109->setProtoBody(*ProtoBody118);

group->addChildren(*ProtoDeclare109);

//Test success: declarative statement createDeclarativeShapeTests()
CGroup* Group135 = (CGroup *)(m_pScene.createNode("Group"));
Group135->setDEF("DeclarativeGroupExample");
CShape* Shape136 = (CShape *)(m_pScene.createNode("Shape"));
CMetadataString* MetadataString137 = (CMetadataString *)(m_pScene.createNode("MetadataString"));
MetadataString137->setName("findThisNameValue");
MetadataString137->setDEF("FindableMetadataStringTest");
MetadataString137->setValue(new CString[1]{"test case"}, 1);
Shape136->setMetadata(*MetadataString137);

CAppearance* Appearance138 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance138->setDEF("DeclarativeAppearanceExample");
//DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance
CProtoInstance* ProtoInstance139 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance139->setName("MaterialModulator");
ProtoInstance139->setDEF("MyMaterialModulator");
Appearance138->setMaterial(*ProtoInstance139);

Shape136->setAppearance(*Appearance138);

CCone* Cone140 = (CCone *)(m_pScene.createNode("Cone"));
Cone140->setBottom(False);
Cone140->setBottomRadius(0.05);
Cone140->setHeight(0.1);
Shape136->setGeometry(Cone140);

Group135->addChildren(*Shape136);

//Test success: declarativeGroup.addChild() singleton pipeline method
group->addChildren(*Group135);

//Test success: declarative statement addChild()
//Test success: x3dModel.findNodeByDEF(DeclarativeAppearanceExample) = <Appearance DEF='DeclarativeAppearanceExample'/> i.e. <Appearance DEF='DeclarativeAppearanceExample'> <!- - DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance - -> <ProtoInstance DEF='MyMaterialModulator' name='MaterialModulator' containerField='material'/> </Appearance>
//Test success: x3dModel.findElementByNameValue(findThisNameValue) = <MetadataString DEF='FindableMetadataStringTest' name='findThisNameValue' value='\"test case\"'/>
//Test success: x3dModel.findElementByNameValue(\"ArtDeco01Material\", \"ProtoDeclare\") found
//Test success: x3dModel.findElementByNameValue(\"MaterialModulator\", \"ProtoDeclare\") found
//Test success: x3dModel.findElementByNameValue(\"MaterialModulator\", \"ProtoInstance\") found
CGroup* Group141 = (CGroup *)(m_pScene.createNode("Group"));
Group141->setDEF("TestFieldObjectsGroup");
//testFieldObjects() results
//SFBool default=true, true=true, false=false, negate()=true
//MFBool default=, initial=true false true, negate()=false true false
//SFFloat default=0.0, initial=1.0, setValue(2)=2.0, setValue(3.0f)=3.0, setValue(4.0)=4.0
//MFFloat default=, initial=1 2 3, append(5)=1 2 3 5, inserts(3,4)(0,0)=0 1 2 3 4 5, append(6)=0 1 2 3 4 5 6, size()=7
//... get1Value[3]=3.0, remove[1]=0 2 3 4 5 6, set1Value(0,10)=10 2 3 4 5 6, multiply(2)=20 4 6 8 10 12, clear=
//SFVec3f default=0 0 0, initial=1 2 3, setValue=4 5 6, multiply(2)=8 10 12, normalize()=0.45584232 0.5698029 0.68376344
group->addChildren(*Group141);

CSound* Sound142 = (CSound *)(m_pScene.createNode("Sound"));
Sound142->setLocation(new float[3]{0,1.6,0});
//set sound-ellipsoid location height at 1.6m to match typical avatar height
CAudioClip* AudioClip143 = (CAudioClip *)(m_pScene.createNode("AudioClip"));
AudioClip143->setDescription("chimes");
AudioClip143->setUrl(new CString[2]{"chimes.wav","https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/chimes.wav"}, 2);
//Scene example fragment from https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/default.x3d
Sound142->setSource(*AudioClip143);

group->addChildren(*Sound142);

CSound* Sound144 = (CSound *)(m_pScene.createNode("Sound"));
Sound144->setLocation(new float[3]{0,1.6,0});
//set sound-ellipsoid location height at 1.6m to match typical avatar height
CMovieTexture* MovieTexture145 = (CMovieTexture *)(m_pScene.createNode("MovieTexture"));
MovieTexture145->setDescription("mpgsys.mpg from ConformanceNist suite");
MovieTexture145->setUrl(new CString[2]{"mpgsys.mpg","https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpgsys.mpg"}, 2);
//Scene example fragment from https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpeg1-systems.x3d
//Expected containerField='source', allowed containerField values=\"texture\" \"source\" \"back\" \"bottom\" \"front\" \"left\" \"right\" \"top\" \"backTexture\" \"bottomTexture\" \"frontTexture\" \"leftTexture\" \"rightTexture\" \"topTexture\"
Sound144->setSource(*MovieTexture145);

group->addChildren(*Sound144);

//Test success: AnchorObject.isNode()=true, siteAnchor.isNode()=true
//Test success: AnchorObject.isStatement()=false, siteAnchor.isStatement()=false
//Test success: ROUTEObject.isNode()=false, orbitPositionROUTE.isNode()=false
//Test success: ROUTEObject.isStatement()=true, orbitPositionROUTE.isStatement()=true
//Test success: CommentsBlock.isNode()=false, testComments.isNode()=false
//Test failure: CommentsBlock.isStatement()=true, testComments.isStatement()=true
CShape* Shape146 = (CShape *)(m_pScene.createNode("Shape"));
Shape146->setDEF("ExtrusionShape");
//ExampleExtrusion isCrossSectionClosed()=true, crossSection='[1.0, 1.0, 1.0, -1.0, -1.0, -1.0, -1.0, 1.0, 1.0, 1.0]'
//ExampleExtrusion isSpineClosed()=false, spine='[0.0, 0.0, 0.0, 0.0, 1.0, 0.0]'
CAppearance* Appearance147 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance147->setDEF("TransparentAppearance");
CMaterial* Material148 = (CMaterial *)(m_pScene.createNode("Material"));
Material148->setTransparency(1);
Appearance147->setMaterial(*Material148);

Shape146->setAppearance(*Appearance147);

CExtrusion* Extrusion149 = (CExtrusion *)(m_pScene.createNode("Extrusion"));
Extrusion149->setDEF("ExampleExtrusion");
Shape146->setGeometry(Extrusion149);

group->addChildren(*Shape146);

X3D0->setScene(*Scene29);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
