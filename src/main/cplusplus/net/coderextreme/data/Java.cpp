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
meta6->setContent("Java.x3d");
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
meta9->setContent("Java.java");
head1->addMeta(*meta9);

Cmeta* meta10 = new Cmeta();
meta10->setName("created");
meta10->setContent("6 September 2016");
head1->addMeta(*meta10);

Cmeta* meta11 = new Cmeta();
meta11->setName("modified");
meta11->setContent("6 June 2018");
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
meta16->setContent("https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/stylesheets/java/examples/Java.x3d");
head1->addMeta(*meta16);

Cmeta* meta17 = new Cmeta();
meta17->setName("reference");
meta17->setContent("Console output, ClassicVRML encoding, VRML97 encoding and pretty-print documentation:");
head1->addMeta(*meta17);

Cmeta* meta18 = new Cmeta();
meta18->setName("reference");
meta18->setContent("Java.txt");
head1->addMeta(*meta18);

Cmeta* meta19 = new Cmeta();
meta19->setName("reference");
meta19->setContent("Java.x3dv");
head1->addMeta(*meta19);

Cmeta* meta20 = new Cmeta();
meta20->setName("reference");
meta20->setContent("Java.wrl");
head1->addMeta(*meta20);

Cmeta* meta21 = new Cmeta();
meta21->setName("reference");
meta21->setContent("Java.html");
head1->addMeta(*meta21);

Cmeta* meta22 = new Cmeta();
meta22->setName("reference");
meta22->setContent("X3dValidator https://savage.nps.edu/X3dValidator?url=https://www.web3d.org/specifications/java/examples/Java.x3d");
head1->addMeta(*meta22);

Cmeta* meta23 = new Cmeta();
meta23->setName("identifier");
meta23->setContent("https://www.web3d.org/specifications/java/examples/Java.x3d");
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
meta26->setContent("06 June 2018");
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
group->addChildren(*ViewpointGroup30);

CWorldInfo* WorldInfo31 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo31->setDEF("WorldInfoDEF");
WorldInfo31->setTitle("HelloWorldProgram produced by X3D Java SAI Library (X3DJSAIL)");
group->addChildren(*WorldInfo31);

CWorldInfo* WorldInfo32 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo32->setUSE("WorldInfoDEF");
group->addChildren(*WorldInfo32);

CWorldInfo* WorldInfo33 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo33->setUSE("WorldInfoDEF");
group->addChildren(*WorldInfo33);

CMetadataString* MetadataString34 = (CMetadataString *)(m_pScene.createNode("MetadataString"));
MetadataString34->setName("test");
MetadataString34->setDEF("scene.addChildMetadata");
MetadataString34->setValue(new CString[1]{"Top-level root Metadata node beneath Scene needs to be one of '-children' in JSON encoding"}, 1);
group->addMetadata(*MetadataString34);

CLayerSet* LayerSet35 = (CLayerSet *)(m_pScene.createNode("LayerSet"));
LayerSet35->setDEF("scene.addChildLayerSetTest");
group->addLayerSet(*LayerSet35);

CTransform* Transform36 = (CTransform *)(m_pScene.createNode("Transform"));
Transform36->setDEF("LogoGeometryTransform");
Transform36->setTranslation(new float[3]{0,1.5,0});
CAnchor* Anchor37 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor37->setDescription("select for X3D Java SAI Library (X3DJSAIL) description");
Anchor37->setUrl(new CString[2]{"../X3DJSAIL.html","https://www.web3d.org/specifications/java/X3DJSAIL.html"}, 2);
CShape* Shape38 = (CShape *)(m_pScene.createNode("Shape"));
Shape38->setDEF("BoxShape");
CAppearance* Appearance39 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material40 = (CMaterial *)(m_pScene.createNode("Material"));
Material40->setDEF("GreenMaterial");
Material40->setDiffuseColor(new float[3]{0,1,1});
Material40->setEmissiveColor(new float[3]{0.8,0,0});
Material40->setTransparency(0.1);
Appearance39->setMaterial(*Material40);

CImageTexture* ImageTexture41 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture41->setUrl(new CString[2]{"images/X3dJavaSceneAccessInterfaceSaiLibrary.png","https://www.web3d.org/specifications/java/examples/images/X3dJavaSceneAccessInterfaceSaiLibrary.png"}, 2);
Appearance39->setTexture(*ImageTexture41);

Shape38->setAppearance(*Appearance39);

CBox* Box42 = (CBox *)(m_pScene.createNode("Box"));
Box42->setDEF("test-NMTOKEN_regex.0123456789");
Box42->setCssClass("untextured");
Shape38->setGeometry(Box42);

Anchor37->addChildren(*Shape38);

Transform36->addChildren(*Anchor37);

group->addChildren(*Transform36);

CShape* Shape43 = (CShape *)(m_pScene.createNode("Shape"));
Shape43->setDEF("LineShape");
CAppearance* Appearance44 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material45 = (CMaterial *)(m_pScene.createNode("Material"));
Material45->setEmissiveColor(new float[3]{0.6,0.19607843,0.8});
Appearance44->setMaterial(*Material45);

Shape43->setAppearance(*Appearance44);

CIndexedLineSet* IndexedLineSet46 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet46->setCoordIndex(new int[6]{0,1,2,3,4,0});
//Coordinate 3-tuple point count: 6
CCoordinate* Coordinate47 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate47->setPoint(new float[18]{0,1.5,0,2,1.5,0,2,1.5,-2,-2,1.5,-2,-2,1.5,0,0,1.5,0});
IndexedLineSet46->setCoord(*Coordinate47);

Shape43->setGeometry(IndexedLineSet46);

group->addChildren(*Shape43);

CPositionInterpolator* PositionInterpolator48 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator48->setDEF("BoxPathAnimator");
PositionInterpolator48->setKey(new float[6]{0,0.125,0.375,0.625,0.875,1}, 6);
PositionInterpolator48->setKeyValue(new float[18]{0,1.5,0,2,1.5,0,2,1.5,-2,-2,1.5,-2,-2,1.5,0,0,1.5,0});
group->addChildren(*PositionInterpolator48);

CTimeSensor* TimeSensor49 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor49->setDEF("OrbitClock");
TimeSensor49->setCycleInterval(8);
TimeSensor49->setLoop(True);
group->addChildren(*TimeSensor49);

CROUTE* ROUTE50 = new CROUTE();
ROUTE50->setFromField("fraction_changed");
ROUTE50->setFromNode("OrbitClock");
ROUTE50->setToField("set_fraction");
ROUTE50->setToNode("BoxPathAnimator");
group->addChildren(*ROUTE50);

CROUTE* ROUTE51 = new CROUTE();
ROUTE51->setFromField("value_changed");
ROUTE51->setFromNode("BoxPathAnimator");
ROUTE51->setToField("set_translation");
ROUTE51->setToNode("LogoGeometryTransform");
group->addChildren(*ROUTE51);

CTransform* Transform52 = (CTransform *)(m_pScene.createNode("Transform"));
Transform52->setDEF("TextTransform");
Transform52->setTranslation(new float[3]{0,-1.5,0});
CShape* Shape53 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance54 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material55 = (CMaterial *)(m_pScene.createNode("Material"));
Material55->setUSE("GreenMaterial");
Appearance54->setMaterial(*Material55);

Shape53->setAppearance(*Appearance54);

CText* Text56 = (CText *)(m_pScene.createNode("Text"));
Text56->setString(new CString[3]{"X3D Java","SAI Library","X3DJSAIL"}, 3);
//Comment example A, plain quotation marks: He said, \"Immel did it!\"
//Comment example B, XML character entities: He said, &quot;Immel did it!&quot;
CMetadataSet* MetadataSet57 = (CMetadataSet *)(m_pScene.createNode("MetadataSet"));
MetadataSet57->setName("EscapedQuotationMarksMetadataSet");
CMetadataString* MetadataString58 = (CMetadataString *)(m_pScene.createNode("MetadataString"));
MetadataString58->setName("quotesTestC");
MetadataString58->setValue(new CString[1]{"MFString example C, backslash-escaped quotes: He said, \"Immel did it!\""}, 1);
MetadataSet57->setValue(*MetadataString58);

CMetadataString* MetadataString59 = (CMetadataString *)(m_pScene.createNode("MetadataString"));
MetadataString59->setName("extraChildTest");
MetadataString59->setValue(new CString[1]{"checks MetadataSetObject addValue() method"}, 1);
MetadataSet57->addValue(*MetadataString59);

Text56->setMetadata(*MetadataSet57);

CFontStyle* FontStyle60 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle60->setJustify(new CString[2]{"MIDDLE","MIDDLE"}, 2);
Text56->setFontStyle(*FontStyle60);

Shape53->setGeometry(Text56);

Transform52->addChildren(*Shape53);

CCollision* Collision61 = (CCollision *)(m_pScene.createNode("Collision"));
//test containerField='proxy'
CShape* Shape62 = (CShape *)(m_pScene.createNode("Shape"));
Shape62->setDEF("ProxyShape");
//alternative XML encoding: Text string='\"One, Two, Comment\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\"'
//alternative XML encoding: Text string='\"One, Two, Comment\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\" \"\"'
//alternative Java source: .setString(new String [] {\"One, Two, Comment\", \"\", \"He said, \\\"\"Immel did it!\\\"\"\"})
//reference: https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/StringArrayEncodingExamplesIndex.html
CText* Text63 = (CText *)(m_pScene.createNode("Text"));
Text63->setString(new CString[3]{"One, Two, Text","","He said, \"Immel did it!\" \"\""}, 3);
Shape62->setGeometry(Text63);

Collision61->setProxy(*Shape62);

Transform52->addChildren(*Collision61);

//It's a beautiful world
//... for you!
//https://en.wikipedia.org/wiki/Beautiful_World_(Devo_song)
group->addChildren(*Transform52);

//repeatedly spin 180 degrees as a readable special effect
COrientationInterpolator* OrientationInterpolator64 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator64->setDEF("SpinInterpolator");
OrientationInterpolator64->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator64->setKeyValue(new float[12]{0,1,0,4.712389,0,1,0,0,0,1,0,1.5707964});
group->addChildren(*OrientationInterpolator64);

CTimeSensor* TimeSensor65 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor65->setDEF("SpinClock");
TimeSensor65->setCycleInterval(5);
TimeSensor65->setLoop(True);
group->addChildren(*TimeSensor65);

CROUTE* ROUTE66 = new CROUTE();
ROUTE66->setFromField("fraction_changed");
ROUTE66->setFromNode("SpinClock");
ROUTE66->setToField("set_fraction");
ROUTE66->setToNode("SpinInterpolator");
group->addChildren(*ROUTE66);

CROUTE* ROUTE67 = new CROUTE();
ROUTE67->setFromField("value_changed");
ROUTE67->setFromNode("SpinInterpolator");
ROUTE67->setToField("rotation");
ROUTE67->setToNode("TextTransform");
group->addChildren(*ROUTE67);

CGroup* Group68 = (CGroup *)(m_pScene.createNode("Group"));
Group68->setDEF("BackgroundGroup");
CBackground* Background69 = (CBackground *)(m_pScene.createNode("Background"));
Background69->setDEF("GradualBackground");
Group68->addChildren(*Background69);

CScript* Script70 = (CScript *)(m_pScene.createNode("Script"));
Script70->setDEF("colorTypeConversionScript");
Cfield* field71 = new Cfield();
field71->setName("colorInput");
field71->setAccessType("inputOnly");
field71->setType("SFColor");
Script70->addField(*field71);

Cfield* field72 = new Cfield();
field72->setName("colorsOutput");
field72->setAccessType("outputOnly");
field72->setType("MFColor");
Script70->addField(*field72);


Script70.setSourceCode(`ecmascript:\n"+
"\n"+
"function colorInput (eventValue) // Example source code\n"+
"{\n"+
"   colorsOutput = new MFColor(eventValue); // assigning value sends output event\n"+
"// Browser.print('colorInput=' + eventValue + ', colorsOutput=' + colorsOutput + '\\n');\n"+
"}`)
Group68->addChildren(*Script70);

CColorInterpolator* ColorInterpolator73 = (CColorInterpolator *)(m_pScene.createNode("ColorInterpolator"));
ColorInterpolator73->setDEF("ColorAnimator");
ColorInterpolator73->setKey(new float[3]{0,0.5,1}, 3);
ColorInterpolator73->setKeyValue(new float[9]{0.9411765,1,1,0.29411766,0,0.50980395,0.9411765,1,1});
//AZURE to INDIGO and back again
Group68->addChildren(*ColorInterpolator73);

CTimeSensor* TimeSensor74 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor74->setDEF("ColorClock");
TimeSensor74->setCycleInterval(60);
TimeSensor74->setLoop(True);
Group68->addChildren(*TimeSensor74);

CROUTE* ROUTE75 = new CROUTE();
ROUTE75->setFromField("colorsOutput");
ROUTE75->setFromNode("colorTypeConversionScript");
ROUTE75->setToField("skyColor");
ROUTE75->setToNode("GradualBackground");
Group68->addChildren(*ROUTE75);

CROUTE* ROUTE76 = new CROUTE();
ROUTE76->setFromField("value_changed");
ROUTE76->setFromNode("ColorAnimator");
ROUTE76->setToField("colorInput");
ROUTE76->setToNode("colorTypeConversionScript");
Group68->addChildren(*ROUTE76);

CROUTE* ROUTE77 = new CROUTE();
ROUTE77->setFromField("fraction_changed");
ROUTE77->setFromNode("ColorClock");
ROUTE77->setToField("set_fraction");
ROUTE77->setToNode("ColorAnimator");
Group68->addChildren(*ROUTE77);

group->addChildren(*Group68);

CProtoDeclare ProtoDeclare78 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
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
ProtoDeclare78->setName("ArtDeco01Material");
ProtoDeclare78->setAppinfo("tooltip: ArtDeco01Material prototype is a Material node");
CProtoInterface* ProtoInterface79 = new CProtoInterface();
Cfield* field80 = new Cfield();
field80->setName("description");
field80->setAccessType("inputOutput");
field80->setAppinfo("tooltip for descriptionField");
field80->setType("SFString");
field80->setValue("ArtDeco01Material prototype is a Material node");
ProtoInterface79->addField(*field80);

Cfield* field81 = new Cfield();
field81->setName("enabled");
field81->setAccessType("inputOutput");
field81->setType("SFBool");
field81->setValue("true");
ProtoInterface79->addField(*field81);

ProtoDeclare78->setProtoInterface(*ProtoInterface79);

CProtoBody* ProtoBody82 = new CProtoBody();
//Initial node of ProtoBody determines prototype node type
CMaterial* Material83 = (CMaterial *)(m_pScene.createNode("Material"));
Material83->setAmbientIntensity(0.25);
Material83->setDiffuseColor(new float[3]{0.282435,0.085159,0.134462});
Material83->setShininess(0.127273);
Material83->setSpecularColor(new float[3]{0.276305,0.11431,0.139857});
ProtoBody82->addChildren(*Material83);

//[HelloWorldProgram diagnostic] should be connected to scene graph: ArtDeco01ProtoDeclare.getNodeType()=\"Material\"
//presence of follow-on TouchSensor shows that additional nodes are allowed in ProtoBody after initial node, regardless of node types
CTouchSensor* TouchSensor84 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor84->setDescription("within ProtoBody");
CIS* IS85 = new CIS();
Cconnect* connect86 = new Cconnect();
connect86->setNodeField("description");
connect86->setProtoField("description");
IS85->addConnect(*connect86);

Cconnect* connect87 = new Cconnect();
connect87->setNodeField("enabled");
connect87->setProtoField("enabled");
IS85->addConnect(*connect87);

TouchSensor84->setIS(*IS85);

ProtoBody82->addChildren(*TouchSensor84);

ProtoDeclare78->setProtoBody(*ProtoBody82);

group->addChildren(*ProtoDeclare78);

CExternProtoDeclare* ExternProtoDeclare88 = new CExternProtoDeclare();
ExternProtoDeclare88->setName("ArtDeco02Material");
ExternProtoDeclare88->setAppinfo("this is a different Material node");
ExternProtoDeclare88->setUrl(new CString[2]{"http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3d#ArtDeco02Material","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3dv#ArtDeco02Material"}, 2);
//[HelloWorldProgram diagnostic] ArtDeco02ExternProtoDeclare.getNodeType()=\"ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02Material' type cannot be remotely accessed at run time, TODO X3DJSAIL needs to add further capability.\"
Cfield* field89 = new Cfield();
field89->setName("description");
field89->setAccessType("inputOutput");
field89->setAppinfo("tooltip for descriptionField");
field89->setType("SFString");
ExternProtoDeclare88->addField(*field89);

group->addChildren(*ExternProtoDeclare88);

//Tested ArtDeco01ProtoInstance, ArtDeco02ProtoInstance for improper node type when ProtoInstance is added in wrong place
CShape* Shape90 = (CShape *)(m_pScene.createNode("Shape"));
Shape90->setDEF("TestShape1");
CAppearance* Appearance91 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance91->setDEF("TestAppearance1");
//ArtDeco01Material prototype goes here... TODO ensure setContainerField is handled in exported Java
CProtoInstance* ProtoInstance92 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance92->setName("ArtDeco01Material");
//[HelloWorldProgram diagnostic] ArtDeco01ProtoInstance.getNodeType()=\"Material\"
CfieldValue* fieldValue93 = new CfieldValue();
fieldValue93->setName("description");
fieldValue93->setValue("ArtDeco01Material can substitute for a Material node");
ProtoInstance92->addFieldValue(*fieldValue93);

Appearance91->setMaterial(*ProtoInstance92);

Shape90->setAppearance(*Appearance91);

CSphere* Sphere94 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere94->setRadius(0.001);
Shape90->setGeometry(Sphere94);

group->addChildren(*Shape90);

CShape* Shape95 = (CShape *)(m_pScene.createNode("Shape"));
Shape95->setDEF("TestShape2");
CAppearance* Appearance96 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance96->setDEF("TestAppearance2");
//ArtDeco02Material prototype goes here... TODO ensure setContainerField is handled in exported Java
CProtoInstance* ProtoInstance97 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance97->setName("ArtDeco02Material");
ProtoInstance97->setDEF("ArtDeco02MaterialDEF");
//[HelloWorldProgram diagnostic] ArtDeco02ProtoInstance.getNodeType()=\"ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02Material' type cannot be remotely accessed at run time, TODO X3DJSAIL needs to add further capability.\"
CfieldValue* fieldValue98 = new CfieldValue();
fieldValue98->setName("description");
fieldValue98->setValue("ArtDeco02Material can substitute for another Material node");
ProtoInstance97->addFieldValue(*fieldValue98);

Appearance96->setMaterial(*ProtoInstance97);

Shape95->setAppearance(*Appearance96);

CCone* Cone99 = (CCone *)(m_pScene.createNode("Cone"));
Cone99->setBottomRadius(0.001);
Cone99->setHeight(0.001);
Shape95->setGeometry(Cone99);

group->addChildren(*Shape95);

CShape* Shape100 = (CShape *)(m_pScene.createNode("Shape"));
Shape100->setDEF("TestShape3");
CAppearance* Appearance101 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance101->setDEF("TestAppearance3");
//ArtDeco02Material ProtoInstance USE goes here...
CProtoInstance* ProtoInstance102 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance102->setUSE("ArtDeco02MaterialDEF");
Appearance101->setMaterial(*ProtoInstance102);

Shape100->setAppearance(*Appearance101);

CCylinder* Cylinder103 = (CCylinder *)(m_pScene.createNode("Cylinder"));
Cylinder103->setHeight(0.001);
Cylinder103->setRadius(0.001);
Shape100->setGeometry(Cylinder103);

group->addChildren(*Shape100);

CInline* Inline104 = (CInline *)(m_pScene.createNode("Inline"));
Inline104->setDEF("inlineSceneDef");
Inline104->setUrl(new CString[1]{"someOtherScene.x3d"}, 1);
group->addChildren(*Inline104);

CIMPORT* IMPORT105 = new CIMPORT();
IMPORT105->setAS("WorldInfoDEF2");
IMPORT105->setImportedDEF("WorldInfoDEF");
IMPORT105->setInlineDEF("inlineSceneDef");
group->addChildren(*IMPORT105);

CEXPORT* EXPORT106 = new CEXPORT();
EXPORT106->setAS("WorldInfoDEF3");
EXPORT106->setLocalDEF("WorldInfoDEF");
group->addChildren(*EXPORT106);

CProtoDeclare ProtoDeclare107 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
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
ProtoDeclare107->setName("MaterialModulator");
ProtoDeclare107->setAppinfo("mimic a Material node and modulate fields as an animation effect");
ProtoDeclare107->setDocumentation("http://x3dgraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/MaterialModulatorIndex.html");
CProtoInterface* ProtoInterface108 = new CProtoInterface();
Cfield* field109 = new Cfield();
field109->setName("enabled");
field109->setAccessType("inputOutput");
field109->setType("SFBool");
field109->setValue("true");
ProtoInterface108->addField(*field109);

Cfield* field110 = new Cfield();
field110->setName("diffuseColor");
field110->setAccessType("inputOutput");
field110->setType("SFColor");
field110->setValue("0 0 0");
ProtoInterface108->addField(*field110);

Cfield* field111 = new Cfield();
field111->setName("emissiveColor");
field111->setAccessType("inputOutput");
field111->setType("SFColor");
field111->setValue("0.05 0.05 0.5");
ProtoInterface108->addField(*field111);

Cfield* field112 = new Cfield();
field112->setName("specularColor");
field112->setAccessType("inputOutput");
field112->setType("SFColor");
field112->setValue("0 0 0");
ProtoInterface108->addField(*field112);

Cfield* field113 = new Cfield();
field113->setName("transparency");
field113->setAccessType("inputOutput");
field113->setType("SFFloat");
field113->setValue("0");
ProtoInterface108->addField(*field113);

Cfield* field114 = new Cfield();
field114->setName("shininess");
field114->setAccessType("inputOutput");
field114->setType("SFFloat");
field114->setValue("0");
ProtoInterface108->addField(*field114);

Cfield* field115 = new Cfield();
field115->setName("ambientIntensity");
field115->setAccessType("inputOutput");
field115->setType("SFFloat");
field115->setValue("0");
ProtoInterface108->addField(*field115);

ProtoDeclare107->setProtoInterface(*ProtoInterface108);

CProtoBody* ProtoBody116 = new CProtoBody();
CMaterial* Material117 = (CMaterial *)(m_pScene.createNode("Material"));
Material117->setDEF("MaterialNode");
CIS* IS118 = new CIS();
Cconnect* connect119 = new Cconnect();
connect119->setNodeField("diffuseColor");
connect119->setProtoField("diffuseColor");
IS118->addConnect(*connect119);

Cconnect* connect120 = new Cconnect();
connect120->setNodeField("emissiveColor");
connect120->setProtoField("emissiveColor");
IS118->addConnect(*connect120);

Cconnect* connect121 = new Cconnect();
connect121->setNodeField("specularColor");
connect121->setProtoField("specularColor");
IS118->addConnect(*connect121);

Cconnect* connect122 = new Cconnect();
connect122->setNodeField("transparency");
connect122->setProtoField("transparency");
IS118->addConnect(*connect122);

Cconnect* connect123 = new Cconnect();
connect123->setNodeField("shininess");
connect123->setProtoField("shininess");
IS118->addConnect(*connect123);

Cconnect* connect124 = new Cconnect();
connect124->setNodeField("ambientIntensity");
connect124->setProtoField("ambientIntensity");
IS118->addConnect(*connect124);

Material117->setIS(*IS118);

ProtoBody116->addChildren(*Material117);

//Only first node (the node type) is renderable, others are along for the ride
CScript* Script125 = (CScript *)(m_pScene.createNode("Script"));
Script125->setDEF("MaterialModulatorScript");
Cfield* field126 = new Cfield();
field126->setName("enabled");
field126->setAccessType("inputOutput");
field126->setType("SFBool");
Script125->addField(*field126);

Cfield* field127 = new Cfield();
field127->setName("diffuseColor");
field127->setAccessType("inputOutput");
field127->setType("SFColor");
Script125->addField(*field127);

Cfield* field128 = new Cfield();
field128->setName("newColor");
field128->setAccessType("outputOnly");
field128->setType("SFColor");
Script125->addField(*field128);

Cfield* field129 = new Cfield();
field129->setName("clockTrigger");
field129->setAccessType("inputOnly");
field129->setType("SFTime");
Script125->addField(*field129);

CIS* IS130 = new CIS();
Cconnect* connect131 = new Cconnect();
connect131->setNodeField("enabled");
connect131->setProtoField("enabled");
IS130->addConnect(*connect131);

Cconnect* connect132 = new Cconnect();
connect132->setNodeField("diffuseColor");
connect132->setProtoField("diffuseColor");
IS130->addConnect(*connect132);

Script125->setIS(*IS130);


Script125.setSourceCode(`ecmascript:\n"+
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
ProtoBody116->addChildren(*Script125);

ProtoDeclare107->setProtoBody(*ProtoBody116);

group->addChildren(*ProtoDeclare107);

//Test success: declarative statement createDeclarativeShapeTests()
CGroup* Group133 = (CGroup *)(m_pScene.createNode("Group"));
Group133->setDEF("DeclarativeGroupExample");
CShape* Shape134 = (CShape *)(m_pScene.createNode("Shape"));
CMetadataString* MetadataString135 = (CMetadataString *)(m_pScene.createNode("MetadataString"));
MetadataString135->setName("findThisNameValue");
MetadataString135->setDEF("FindableMetadataStringTest");
MetadataString135->setValue(new CString[1]{"test case"}, 1);
Shape134->setMetadata(*MetadataString135);

CAppearance* Appearance136 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance136->setDEF("DeclarativeAppearanceExample");
//DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance
CProtoInstance* ProtoInstance137 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance137->setName("MaterialModulator");
ProtoInstance137->setDEF("MyMaterialModulator");
Appearance136->setMaterial(*ProtoInstance137);

Shape134->setAppearance(*Appearance136);

CCone* Cone138 = (CCone *)(m_pScene.createNode("Cone"));
Cone138->setBottom(False);
Cone138->setBottomRadius(0.05);
Cone138->setHeight(0.1);
Shape134->setGeometry(Cone138);

Group133->addChildren(*Shape134);

//Test success: declarativeGroup.addChild() singleton pipeline method
group->addChildren(*Group133);

//Test success: declarative statement addChild()
//Test success: x3dModel.findNodeByDEF(DeclarativeAppearanceExample) = <Appearance DEF='DeclarativeAppearanceExample'/> i.e. <Appearance DEF='DeclarativeAppearanceExample'> <!- - DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance - -> <ProtoInstance DEF='MyMaterialModulator' name='MaterialModulator' containerField='material'/> </Appearance>
//Test success: x3dModel.findElementByNameValue(findThisNameValue) = <MetadataString DEF='FindableMetadataStringTest' name='findThisNameValue' value='\"test case\"'/>
//Test success: x3dModel.findElementByNameValue(\"ArtDeco01Material\", \"ProtoDeclare\") found
//Test success: x3dModel.findElementByNameValue(\"MaterialModulator\", \"ProtoDeclare\") found
//Test success: x3dModel.findElementByNameValue(\"MaterialModulator\", \"ProtoInstance\") found
CGroup* Group139 = (CGroup *)(m_pScene.createNode("Group"));
Group139->setDEF("TestFieldObjectsGroup");
//testFieldObjects() results
//SFBool default=true, true=true, false=false, negate()=true
//MFBool default=, initial=true false true, negate()=false true false
//SFFloat default=0.0, initial=1.0, setValue(2)=2.0, setValue(3.0f)=3.0, setValue(4.0)=4.0
//MFFloat default=, initial=1 2 3, append(5)=1 2 3 5, inserts(3,4)(0,0)=0 1 2 3 4 5, append(6)=0 1 2 3 4 5 6, size()=7
//... get1Value[3]=3.0, remove[1]=0 2 3 4 5 6, set1Value(0,10)=10 2 3 4 5 6, multiply(2)=20 4 6 8 10 12, clear=
//SFVec3f default=0 0 0, initial=1 2 3, setValue=4 5 6, multiply(2)=8 10 12, normalize()=0.45584232 0.5698029 0.68376344
group->addChildren(*Group139);

CSound* Sound140 = (CSound *)(m_pScene.createNode("Sound"));
Sound140->setLocation(new float[3]{0,1.6,0});
//set sound-ellipsoid location height at 1.6m to match typical avatar height
CAudioClip* AudioClip141 = (CAudioClip *)(m_pScene.createNode("AudioClip"));
AudioClip141->setDescription("chimes");
AudioClip141->setUrl(new CString[2]{"chimes.wav","https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/chimes.wav"}, 2);
//Scene example fragment from https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/default.x3d
Sound140->setSource(*AudioClip141);

group->addChildren(*Sound140);

CSound* Sound142 = (CSound *)(m_pScene.createNode("Sound"));
Sound142->setLocation(new float[3]{0,1.6,0});
//set sound-ellipsoid location height at 1.6m to match typical avatar height
CMovieTexture* MovieTexture143 = (CMovieTexture *)(m_pScene.createNode("MovieTexture"));
MovieTexture143->setDescription("mpgsys.mpg from ConformanceNist suite");
MovieTexture143->setUrl(new CString[2]{"mpgsys.mpg","https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpgsys.mpg"}, 2);
//Scene example fragment from https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpeg1-systems.x3d
//Expected containerField='source', allowed containerField values=\"texture\" \"source\" \"back\" \"bottom\" \"front\" \"left\" \"right\" \"top\" \"backTexture\" \"bottomTexture\" \"frontTexture\" \"leftTexture\" \"rightTexture\" \"topTexture\"
Sound142->setSource(*MovieTexture143);

group->addChildren(*Sound142);

//Test success: AnchorObject.isNode()=true, siteAnchor.isNode()=true
//Test success: AnchorObject.isStatement()=false, siteAnchor.isStatement()=false
//Test success: ROUTEObject.isNode()=false, orbitPositionROUTE.isNode()=false
//Test success: ROUTEObject.isStatement()=true, orbitPositionROUTE.isStatement()=true
//Test success: CommentsBlock.isNode()=false, testComments.isNode()=false
//Test failure: CommentsBlock.isStatement()=true, testComments.isStatement()=true
CShape* Shape144 = (CShape *)(m_pScene.createNode("Shape"));
Shape144->setDEF("ExtrusionShape");
//ExampleExtrusion isCrossSectionClosed()=true, crossSection='[1.0, 1.0, 1.0, -1.0, -1.0, -1.0, -1.0, 1.0, 1.0, 1.0]'
//ExampleExtrusion isSpineClosed()=false, spine='[0.0, 0.0, 0.0, 0.0, 1.0, 0.0]'
CAppearance* Appearance145 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance145->setDEF("TransparentAppearance");
CMaterial* Material146 = (CMaterial *)(m_pScene.createNode("Material"));
Material146->setTransparency(1);
Appearance145->setMaterial(*Material146);

Shape144->setAppearance(*Appearance145);

CExtrusion* Extrusion147 = (CExtrusion *)(m_pScene.createNode("Extrusion"));
Extrusion147->setDEF("ExampleExtrusion");
Shape144->setGeometry(Extrusion147);

group->addChildren(*Shape144);

X3D0->setScene(*Scene29);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
