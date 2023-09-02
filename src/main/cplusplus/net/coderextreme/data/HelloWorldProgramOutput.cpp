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
X3D0->setCssClass("x3dModel.class");
X3D0->setProfile("Full");
X3D0->setStyle("x3dModel.style");
X3D0->setVersion("4.0");
//x3dVersionComparisonTest for this model: supportsX3dVersion(X3D.VERSION_3_0)=true
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
component3->setName("Shaders");
component3->setLevel(1);
head1->addComponent(*component3);

Ccomponent* component4 = new Ccomponent();
component4->setName("CADGeometry");
component4->setLevel(2);
head1->addComponent(*component4);

Ccomponent* component5 = new Ccomponent();
component5->setName("DIS");
component5->setLevel(2);
head1->addComponent(*component5);

Ccomponent* component6 = new Ccomponent();
component6->setName("HAnim");
component6->setLevel(1);
head1->addComponent(*component6);

Ccomponent* component7 = new Ccomponent();
component7->setName("Grouping");
component7->setLevel(1);
head1->addComponent(*component7);

Ccomponent* component8 = new Ccomponent();
component8->setName("Layering");
component8->setLevel(1);
head1->addComponent(*component8);

Cunit* unit9 = new Cunit();
unit9->setName("AngleUnitConversion");
unit9->setCategory("angle");
unit9->setConversionFactor(1);
head1->addUnit(*unit9);

Cunit* unit10 = new Cunit();
unit10->setName("LengthUnitConversion");
unit10->setCategory("length");
unit10->setConversionFactor(1);
head1->addUnit(*unit10);

Cunit* unit11 = new Cunit();
unit11->setName("ForceFromPoundsToNewtons");
unit11->setCategory("force");
unit11->setConversionFactor(4.4482);
head1->addUnit(*unit11);

Cmeta* meta12 = new Cmeta();
meta12->setName("title");
meta12->setContent("HelloWorldProgramOutput.x3d");
head1->addMeta(*meta12);

Cmeta* meta13 = new Cmeta();
meta13->setName("info");
meta13->setContent("continued development and testing in progress");
head1->addMeta(*meta13);

Cmeta* meta14 = new Cmeta();
meta14->setName("description");
meta14->setContent("Example HelloWorldProgram creates an X3D model using the X3D Java Scene Access Interface Library (X3DJSAIL)");
head1->addMeta(*meta14);

Cmeta* meta15 = new Cmeta();
meta15->setName("reference");
meta15->setContent("https://www.web3d.org/specifications/java/X3DJSAIL.html");
head1->addMeta(*meta15);

Cmeta* meta16 = new Cmeta();
meta16->setName("generator");
meta16->setContent("HelloWorldProgramOutput.java");
head1->addMeta(*meta16);

Cmeta* meta17 = new Cmeta();
meta17->setName("created");
meta17->setContent("6 September 2016");
head1->addMeta(*meta17);

Cmeta* meta18 = new Cmeta();
meta18->setName("modified");
meta18->setContent("30 July 2023");
head1->addMeta(*meta18);

Cmeta* meta19 = new Cmeta();
meta19->setName("generator");
meta19->setContent("X3D Java Scene Access Interface Library (X3DJSAIL)");
head1->addMeta(*meta19);

Cmeta* meta20 = new Cmeta();
meta20->setName("generator");
meta20->setContent("https://www.web3d.org/specifications/java/examples/HelloWorldProgram.java");
head1->addMeta(*meta20);

Cmeta* meta21 = new Cmeta();
meta21->setName("generator");
meta21->setContent("Netbeans https://www.netbeans.org");
head1->addMeta(*meta21);

Cmeta* meta22 = new Cmeta();
meta22->setName("creator");
meta22->setContent("Don Brutzman");
head1->addMeta(*meta22);

Cmeta* meta23 = new Cmeta();
meta23->setName("reference");
meta23->setContent("https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/stylesheets/java/examples/HelloWorldProgramOutput.x3d");
head1->addMeta(*meta23);

Cmeta* meta24 = new Cmeta();
meta24->setName("reference");
meta24->setContent("Console output, ClassicVRML encoding, VRML97 encoding and pretty-print documentation:");
head1->addMeta(*meta24);

Cmeta* meta25 = new Cmeta();
meta25->setName("reference");
meta25->setContent("HelloWorldProgramOutput.txt");
head1->addMeta(*meta25);

Cmeta* meta26 = new Cmeta();
meta26->setName("reference");
meta26->setContent("HelloWorldProgramOutput.x3dv");
head1->addMeta(*meta26);

Cmeta* meta27 = new Cmeta();
meta27->setName("reference");
meta27->setContent("HelloWorldProgramOutput.wrl");
head1->addMeta(*meta27);

Cmeta* meta28 = new Cmeta();
meta28->setName("reference");
meta28->setContent("HelloWorldProgramOutput.html");
head1->addMeta(*meta28);

Cmeta* meta29 = new Cmeta();
meta29->setName("reference");
meta29->setContent("https://savage.nps.edu/X3dValidator?url=https://www.web3d.org/specifications/java/examples/HelloWorldProgramOutput.x3d");
head1->addMeta(*meta29);

Cmeta* meta30 = new Cmeta();
meta30->setName("identifier");
meta30->setContent("https://www.web3d.org/specifications/java/examples/HelloWorldProgramOutput.x3d");
head1->addMeta(*meta30);

Cmeta* meta31 = new Cmeta();
meta31->setName("license");
meta31->setContent("../license.html");
head1->addMeta(*meta31);

X3D0->setHead(*head1);

CScene* Scene32 = new CScene();
CViewpointGroup* ViewpointGroup33 = (CViewpointGroup *)(m_pScene.createNode("ViewpointGroup"));
ViewpointGroup33->setDescription("Available viewpoints");
CViewpoint* Viewpoint34 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint34->setDEF("DefaultView");
Viewpoint34->setDescription("Hello X3DJSAIL");
ViewpointGroup33->addChildren(*Viewpoint34);

CViewpoint* Viewpoint35 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint35->setDEF("TopDownView");
Viewpoint35->setDescription("top-down view from above");
Viewpoint35->setOrientation(new float[4]{1,0,0,-1.570796});
Viewpoint35->setPosition(new float[3]{0,100,0});
ViewpointGroup33->addChildren(*Viewpoint35);

group->addChildren(*ViewpointGroup33);

CNavigationInfo* NavigationInfo36 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
NavigationInfo36->setType(new CString[3]{"EXAMINE","FLY","ANY"}, 3);
group->addChildren(*NavigationInfo36);

CWorldInfo* WorldInfo37 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo37->setDEF("WorldInfoDEF");
WorldInfo37->setCssClass("worldInfoNode.class");
WorldInfo37->setStyle("worldInfoNode.style");
WorldInfo37->setTitle("HelloWorldProgram produced by X3D Java SAI Library (X3DJSAIL)");
group->addChildren(*WorldInfo37);

CWorldInfo* WorldInfo38 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo38->setUSE("WorldInfoDEF");
group->addChildren(*WorldInfo38);

CWorldInfo* WorldInfo39 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo39->setUSE("WorldInfoDEF");
group->addChildren(*WorldInfo39);

CMetadataString* MetadataString40 = (CMetadataString *)(m_pScene.createNode("MetadataString"));
MetadataString40->setName("test");
MetadataString40->setDEF("scene.addChildMetadata");
MetadataString40->setValue(new CString[1]{"Top-level root Metadata node beneath Scene needs to be one of '-children' in JSON encoding"}, 1);
group->addMetadata(*MetadataString40);

CLayerSet* LayerSet41 = (CLayerSet *)(m_pScene.createNode("LayerSet"));
LayerSet41->setDEF("scene.addChildLayerSetTest");
group->addLayerSet(*LayerSet41);

CTransform* Transform42 = (CTransform *)(m_pScene.createNode("Transform"));
Transform42->setDEF("LogoGeometryTransform");
Transform42->setTranslation(new float[3]{0,1.5,0});
CAnchor* Anchor43 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor43->setDEF("siteAnchor");
Anchor43->setDescription("select for X3D Java SAI Library (X3DJSAIL) description");
Anchor43->setUrl(new CString[2]{"../X3DJSAIL.html","https://www.web3d.org/specifications/java/X3DJSAIL.html"}, 2);
CShape* Shape44 = (CShape *)(m_pScene.createNode("Shape"));
Shape44->setDEF("BoxShape");
CAppearance* Appearance45 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material46 = (CMaterial *)(m_pScene.createNode("Material"));
Material46->setDEF("GreenMaterial");
Material46->setDiffuseColor(new float[3]{0,1,1});
Material46->setEmissiveColor(new float[3]{0.8,0,0});
Material46->setTransparency(0.1);
Appearance45->setMaterial(*Material46);

CImageTexture* ImageTexture47 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture47->setUrl(new CString[2]{"images/X3dJavaSceneAccessInterfaceSaiLibrary.png","https://www.web3d.org/specifications/java/examples/images/X3dJavaSceneAccessInterfaceSaiLibrary.png"}, 2);
Appearance45->setTexture(*ImageTexture47);

Shape44->setAppearance(*Appearance45);

CBox* Box48 = (CBox *)(m_pScene.createNode("Box"));
Box48->setDEF("test-NMTOKEN_regex.0123456789");
Box48->setCssClass("untextured");
Shape44->setGeometry(Box48);

Anchor43->addChildren(*Shape44);

Transform42->addChildren(*Anchor43);

group->addChildren(*Transform42);

CShape* Shape49 = (CShape *)(m_pScene.createNode("Shape"));
Shape49->setDEF("LineShape");
CAppearance* Appearance50 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material51 = (CMaterial *)(m_pScene.createNode("Material"));
Material51->setEmissiveColor(new float[3]{0.6,0.19607843,0.8});
Appearance50->setMaterial(*Material51);

Shape49->setAppearance(*Appearance50);

CIndexedLineSet* IndexedLineSet52 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet52->setCoordIndex(new int[6]{0,1,2,3,4,0});
//Coordinate 3-tuple point count: 6
CCoordinate* Coordinate53 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate53->setPoint(new float[18]{0,1.5,0,2,1.5,0,2,1.5,-2,-2,1.5,-2,-2,1.5,0,0,1.5,0});
IndexedLineSet52->setCoord(*Coordinate53);

Shape49->setGeometry(IndexedLineSet52);

group->addChildren(*Shape49);

CPositionInterpolator* PositionInterpolator54 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator54->setDEF("BoxPathAnimator");
PositionInterpolator54->setKey(new float[6]{0,0.125,0.375,0.625,0.875,1}, 6);
PositionInterpolator54->setKeyValue(new float[18]{0,1.5,0,2,1.5,0,2,1.5,-2,-2,1.5,-2,-2,1.5,0,0,1.5,0});
group->addChildren(*PositionInterpolator54);

CTimeSensor* TimeSensor55 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor55->setDEF("OrbitClock");
TimeSensor55->setCycleInterval(8);
TimeSensor55->setLoop(True);
group->addChildren(*TimeSensor55);

CROUTE* ROUTE56 = new CROUTE();
ROUTE56->setFromField("fraction_changed");
ROUTE56->setFromNode("OrbitClock");
ROUTE56->setToField("set_fraction");
ROUTE56->setToNode("BoxPathAnimator");
group->addChildren(*ROUTE56);

CROUTE* ROUTE57 = new CROUTE();
ROUTE57->setFromField("value_changed");
ROUTE57->setFromNode("BoxPathAnimator");
ROUTE57->setToField("set_translation");
ROUTE57->setToNode("LogoGeometryTransform");
group->addChildren(*ROUTE57);

CTransform* Transform58 = (CTransform *)(m_pScene.createNode("Transform"));
Transform58->setDEF("TextTransform");
Transform58->setTranslation(new float[3]{0,-1.5,0});
CShape* Shape59 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance60 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material61 = (CMaterial *)(m_pScene.createNode("Material"));
Material61->setUSE("GreenMaterial");
Appearance60->setMaterial(*Material61);

Shape59->setAppearance(*Appearance60);

CText* Text62 = (CText *)(m_pScene.createNode("Text"));
Text62->setString(new CString[3]{"X3D Java","SAI Library","X3DJSAIL"}, 3);
//Comment example A, plain quotation marks: He said, \"Immel did it!\"
//Comment example B, XML character entities: He said, &quot;Immel did it!&quot;
CMetadataSet* MetadataSet63 = (CMetadataSet *)(m_pScene.createNode("MetadataSet"));
MetadataSet63->setName("EscapedQuotationMarksMetadataSet");
CMetadataString* MetadataString64 = (CMetadataString *)(m_pScene.createNode("MetadataString"));
MetadataString64->setName("quotesTestC");
MetadataString64->setValue(new CString[1]{"MFString example C, backslash-escaped quotes: He said, \"Immel did it!\""}, 1);
MetadataSet63->setValue(*MetadataString64);

CMetadataString* MetadataString65 = (CMetadataString *)(m_pScene.createNode("MetadataString"));
MetadataString65->setName("extraChildTest");
MetadataString65->setValue(new CString[1]{"checks MetadataSet addValue() method"}, 1);
MetadataSet63->setValue(*MetadataString65);

Text62->setMetadata(*MetadataSet63);

CFontStyle* FontStyle66 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle66->setJustify(new CString[2]{"MIDDLE","MIDDLE"}, 2);
Text62->setFontStyle(*FontStyle66);

Shape59->setGeometry(Text62);

Transform58->addChild(*Shape59);

CCollision* Collision67 = (CCollision *)(m_pScene.createNode("Collision"));
//test containerField='proxy'
CShape* Shape68 = (CShape *)(m_pScene.createNode("Shape"));
Shape68->setDEF("ProxyShape");
//alternative XML encoding: Text string='\"One, Two, Comment\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\"'
//alternative XML encoding: Text string='\"One, Two, Comment\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\" \"\"'
//alternative Java source: .setString(new String [] {\"One, Two, Comment\", \"\", \"He said, \\\"\"Immel did it!\\\"\"\"})
//reference: https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/StringArrayEncodingExamplesIndex.html
CText* Text69 = (CText *)(m_pScene.createNode("Text"));
Text69->setString(new CString[3]{"One, Two, Text","","He said, \"Immel did it!\" \"\""}, 3);
Shape68->setGeometry(Text69);

Collision67->setProxy(*Shape68);

Transform58->addChildren(*Collision67);

//It's a beautiful world
//... for you!
//https://en.wikipedia.org/wiki/Beautiful_World_(Devo_song)
group->addChildren(*Transform58);

//repeatedly spin 180 degrees as a readable special effect
COrientationInterpolator* OrientationInterpolator70 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator70->setDEF("SpinInterpolator");
OrientationInterpolator70->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator70->setKeyValue(new float[12]{0,1,0,4.712389,0,1,0,0,0,1,0,1.5707964});
group->addChildren(*OrientationInterpolator70);

CTimeSensor* TimeSensor71 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor71->setDEF("SpinClock");
TimeSensor71->setCycleInterval(5);
TimeSensor71->setLoop(True);
group->addChildren(*TimeSensor71);

CROUTE* ROUTE72 = new CROUTE();
ROUTE72->setFromField("fraction_changed");
ROUTE72->setFromNode("SpinClock");
ROUTE72->setToField("set_fraction");
ROUTE72->setToNode("SpinInterpolator");
group->addChildren(*ROUTE72);

CROUTE* ROUTE73 = new CROUTE();
ROUTE73->setFromField("value_changed");
ROUTE73->setFromNode("SpinInterpolator");
ROUTE73->setToField("rotation");
ROUTE73->setToNode("TextTransform");
group->addChildren(*ROUTE73);

CGroup* Group74 = (CGroup *)(m_pScene.createNode("Group"));
Group74->setDEF("BackgroundGroup");
CBackground* Background75 = (CBackground *)(m_pScene.createNode("Background"));
Background75->setDEF("GradualBackground");
Group74->addChildren(*Background75);

CScript* Script76 = (CScript *)(m_pScene.createNode("Script"));
Script76->setDEF("colorTypeConversionScript");
Cfield* field77 = new Cfield();
field77->setName("colorInput");
field77->setAccessType("inputOnly");
field77->setType("SFColor");
Script76->addField(*field77);

Cfield* field78 = new Cfield();
field78->setName("colorsOutput");
field78->setAccessType("outputOnly");
field78->setType("MFColor");
Script76->addField(*field78);


Script76.setSourceCode(`ecmascript:\n"+
"\n"+
"function colorInput (eventValue) // Example source code\n"+
"{\n"+
"   colorsOutput = new MFColor(eventValue); // assigning value sends output event\n"+
"// Browser.print('colorInput=' + eventValue + ', colorsOutput=' + colorsOutput + '\\n');\n"+
"}`)
Group74->addChildren(*Script76);

CColorInterpolator* ColorInterpolator79 = (CColorInterpolator *)(m_pScene.createNode("ColorInterpolator"));
ColorInterpolator79->setDEF("ColorAnimator");
ColorInterpolator79->setKey(new float[3]{0,0.5,1}, 3);
ColorInterpolator79->setKeyValue(new float[9]{0.9411765,1,1,0.29411766,0,0.50980395,0.9411765,1,1});
//AZURE to INDIGO and back again
Group74->addChildren(*ColorInterpolator79);

CTimeSensor* TimeSensor80 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor80->setDEF("ColorClock");
TimeSensor80->setCycleInterval(60);
TimeSensor80->setLoop(True);
Group74->addChildren(*TimeSensor80);

CROUTE* ROUTE81 = new CROUTE();
ROUTE81->setFromField("colorsOutput");
ROUTE81->setFromNode("colorTypeConversionScript");
ROUTE81->setToField("skyColor");
ROUTE81->setToNode("GradualBackground");
Group74->addChildren(*ROUTE81);

CROUTE* ROUTE82 = new CROUTE();
ROUTE82->setFromField("value_changed");
ROUTE82->setFromNode("ColorAnimator");
ROUTE82->setToField("colorInput");
ROUTE82->setToNode("colorTypeConversionScript");
Group74->addChildren(*ROUTE82);

CROUTE* ROUTE83 = new CROUTE();
ROUTE83->setFromField("fraction_changed");
ROUTE83->setFromNode("ColorClock");
ROUTE83->setToField("set_fraction");
ROUTE83->setToNode("ColorAnimator");
Group74->addChildren(*ROUTE83);

group->addChildren(*Group74);

CProtoDeclare ProtoDeclare84 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ArtDeco01Material" appinfo="tooltip: ArtDeco01Material prototype is a Material node" ><ProtoInterface><field name="description" accessType="inputOutput" appinfo="tooltip for descriptionField" type="SFString" value="ArtDeco01Material prototype is a Material node"></field>
<field name="enabled" accessType="inputOutput" type="SFBool" value="true"></field>
</ProtoInterface>
<ProtoBody><!--Initial node of ProtoBody determines prototype node type--><Material ambientIntensity="0.25" diffuseColor="0.282435 0.085159 0.134462" shininess="0.127273" specularColor="0.276305 0.11431 0.139857"></Material>
<!--[HelloWorldProgram diagnostic] should be connected to scene graph: artDeco01ProtoDeclare.getNodeType()="Material"--><!--presence of follow-on TouchSensor shows that additional nodes are allowed in ProtoBody after initial node, regardless of node types--><TouchSensor description="within ProtoBody"><IS><connect nodeField="description" protoField="description"></connect>
<connect nodeField="enabled" protoField="enabled"></connect>
</IS>
</TouchSensor>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare84->setName("ArtDeco01Material");
ProtoDeclare84->setAppinfo("tooltip: ArtDeco01Material prototype is a Material node");
CProtoInterface* ProtoInterface85 = new CProtoInterface();
Cfield* field86 = new Cfield();
field86->setName("description");
field86->setAccessType("inputOutput");
field86->setAppinfo("tooltip for descriptionField");
field86->setType("SFString");
field86->setValue("ArtDeco01Material prototype is a Material node");
ProtoInterface85->addField(*field86);

Cfield* field87 = new Cfield();
field87->setName("enabled");
field87->setAccessType("inputOutput");
field87->setType("SFBool");
field87->setValue("true");
ProtoInterface85->addField(*field87);

ProtoDeclare84->setProtoInterface(*ProtoInterface85);

CProtoBody* ProtoBody88 = new CProtoBody();
//Initial node of ProtoBody determines prototype node type
CMaterial* Material89 = (CMaterial *)(m_pScene.createNode("Material"));
Material89->setAmbientIntensity(0.25);
Material89->setDiffuseColor(new float[3]{0.282435,0.085159,0.134462});
Material89->setShininess(0.127273);
Material89->setSpecularColor(new float[3]{0.276305,0.11431,0.139857});
ProtoBody88->addChildren(*Material89);

//[HelloWorldProgram diagnostic] should be connected to scene graph: artDeco01ProtoDeclare.getNodeType()=\"Material\"
//presence of follow-on TouchSensor shows that additional nodes are allowed in ProtoBody after initial node, regardless of node types
CTouchSensor* TouchSensor90 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor90->setDescription("within ProtoBody");
CIS* IS91 = new CIS();
Cconnect* connect92 = new Cconnect();
connect92->setNodeField("description");
connect92->setProtoField("description");
IS91->addConnect(*connect92);

Cconnect* connect93 = new Cconnect();
connect93->setNodeField("enabled");
connect93->setProtoField("enabled");
IS91->addConnect(*connect93);

TouchSensor90->setIS(*IS91);

ProtoBody88->addChildren(*TouchSensor90);

ProtoDeclare84->setProtoBody(*ProtoBody88);

group->addChildren(*ProtoDeclare84);

CExternProtoDeclare* ExternProtoDeclare94 = new CExternProtoDeclare();
ExternProtoDeclare94->setName("ArtDeco02Material");
ExternProtoDeclare94->setAppinfo("this is a different Material node");
ExternProtoDeclare94->setUrl(new CString[2]{"https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3d#ArtDeco02Material","https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3dv#ArtDeco02Material"}, 2);
//[HelloWorldProgram diagnostic] artDeco02ExternProtoDeclare.getNodeType()=\"ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02Material' type cannot be remotely accessed at run time. TODO X3DJSAIL needs to add further capability that retrieves the ExternProtoDeclare file.\"
Cfield* field95 = new Cfield();
field95->setName("description");
field95->setAccessType("inputOutput");
field95->setAppinfo("tooltip for descriptionField");
field95->setType("SFString");
ExternProtoDeclare94->addField(*field95);

group->addChildren(*ExternProtoDeclare94);

//Tested ArtDeco01ProtoInstance, ArtDeco02ProtoInstance for improper node type when ProtoInstance is added in wrong place
CShape* Shape96 = (CShape *)(m_pScene.createNode("Shape"));
Shape96->setDEF("TestShape1");
CAppearance* Appearance97 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance97->setDEF("TestAppearance1");
//ArtDeco01Material prototype goes here... TODO ensure setContainerField is handled in exported Java
CProtoInstance* ProtoInstance98 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance98->setName("ArtDeco01Material");
//[HelloWorldProgram diagnostic] ArtDeco01ProtoInstance.getNodeType()=\"Material\"
CfieldValue* fieldValue99 = new CfieldValue();
fieldValue99->setName("description");
fieldValue99->setValue("ArtDeco01Material can substitute for a Material node");
ProtoInstance98->addFieldValue(*fieldValue99);

Appearance97->setMaterial(*ProtoInstance98);

Shape96->setAppearance(*Appearance97);

CSphere* Sphere100 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere100->setRadius(0.001);
Shape96->setGeometry(Sphere100);

group->addChildren(*Shape96);

CShape* Shape101 = (CShape *)(m_pScene.createNode("Shape"));
Shape101->setDEF("TestShape2");
CAppearance* Appearance102 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance102->setDEF("TestAppearance2");
//ArtDeco02Material prototype goes here... TODO ensure setContainerField is handled in exported Java
CProtoInstance* ProtoInstance103 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance103->setName("ArtDeco02Material");
ProtoInstance103->setDEF("ArtDeco02MaterialDEF");
//[HelloWorldProgram diagnostic] ArtDeco02ProtoInstance.getNodeType()=\"ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02Material' type cannot be remotely accessed at run time. TODO X3DJSAIL needs to add further capability that retrieves the ExternProtoDeclare file.\"
CfieldValue* fieldValue104 = new CfieldValue();
fieldValue104->setName("description");
fieldValue104->setValue("ArtDeco02Material can substitute for another Material node");
ProtoInstance103->addFieldValue(*fieldValue104);

Appearance102->setMaterial(*ProtoInstance103);

Shape101->setAppearance(*Appearance102);

CCone* Cone105 = (CCone *)(m_pScene.createNode("Cone"));
Cone105->setBottomRadius(0.001);
Cone105->setHeight(0.001);
Shape101->setGeometry(Cone105);

group->addChildren(*Shape101);

CShape* Shape106 = (CShape *)(m_pScene.createNode("Shape"));
Shape106->setDEF("TestShape3");
CAppearance* Appearance107 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance107->setDEF("TestAppearance3");
//ArtDeco02Material ProtoInstance USE goes here. Note that name field is NOT defined as part of ProtoInstance USE.
CProtoInstance* ProtoInstance108 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance108->setUSE("ArtDeco02MaterialDEF");
Appearance107->setMaterial(*ProtoInstance108);

Shape106->setAppearance(*Appearance107);

CCylinder* Cylinder109 = (CCylinder *)(m_pScene.createNode("Cylinder"));
Cylinder109->setHeight(0.001);
Cylinder109->setRadius(0.001);
Shape106->setGeometry(Cylinder109);

group->addChildren(*Shape106);

CInline* Inline110 = (CInline *)(m_pScene.createNode("Inline"));
Inline110->setDEF("inlineScene");
Inline110->setUrl(new CString[2]{"someOtherScene.x3d","https://www.web3d.org/specifications/java/examples/someOtherScene.x3d"}, 2);
group->addChildren(*Inline110);

CIMPORT* IMPORT111 = new CIMPORT();
IMPORT111->setAS("WorldInfoDEF2");
IMPORT111->setImportedDEF("WorldInfoDEF");
IMPORT111->setInlineDEF("inlineScene");
group->addChildren(*IMPORT111);

CEXPORT* EXPORT112 = new CEXPORT();
EXPORT112->setAS("WorldInfoDEF3");
EXPORT112->setLocalDEF("WorldInfoDEF");
group->addChildren(*EXPORT112);

CProtoDeclare ProtoDeclare113 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="MaterialModulator" appinfo="mimic a Material node and modulate fields as an animation effect" documentation="https://x3dgraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/MaterialModulatorIndex.html" ><ProtoInterface><field name="enabled" accessType="inputOutput" type="SFBool" value="true"></field>
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
ProtoDeclare113->setName("MaterialModulator");
ProtoDeclare113->setAppinfo("mimic a Material node and modulate fields as an animation effect");
ProtoDeclare113->setDocumentation("https://x3dgraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/MaterialModulatorIndex.html");
CProtoInterface* ProtoInterface114 = new CProtoInterface();
Cfield* field115 = new Cfield();
field115->setName("enabled");
field115->setAccessType("inputOutput");
field115->setType("SFBool");
field115->setValue("true");
ProtoInterface114->addField(*field115);

Cfield* field116 = new Cfield();
field116->setName("diffuseColor");
field116->setAccessType("inputOutput");
field116->setType("SFColor");
field116->setValue("0 0 0");
ProtoInterface114->addField(*field116);

Cfield* field117 = new Cfield();
field117->setName("emissiveColor");
field117->setAccessType("inputOutput");
field117->setType("SFColor");
field117->setValue("0.05 0.05 0.5");
ProtoInterface114->addField(*field117);

Cfield* field118 = new Cfield();
field118->setName("specularColor");
field118->setAccessType("inputOutput");
field118->setType("SFColor");
field118->setValue("0 0 0");
ProtoInterface114->addField(*field118);

Cfield* field119 = new Cfield();
field119->setName("transparency");
field119->setAccessType("inputOutput");
field119->setType("SFFloat");
field119->setValue("0");
ProtoInterface114->addField(*field119);

Cfield* field120 = new Cfield();
field120->setName("shininess");
field120->setAccessType("inputOutput");
field120->setType("SFFloat");
field120->setValue("0");
ProtoInterface114->addField(*field120);

Cfield* field121 = new Cfield();
field121->setName("ambientIntensity");
field121->setAccessType("inputOutput");
field121->setType("SFFloat");
field121->setValue("0");
ProtoInterface114->addField(*field121);

ProtoDeclare113->setProtoInterface(*ProtoInterface114);

CProtoBody* ProtoBody122 = new CProtoBody();
CMaterial* Material123 = (CMaterial *)(m_pScene.createNode("Material"));
Material123->setDEF("MaterialNode");
CIS* IS124 = new CIS();
Cconnect* connect125 = new Cconnect();
connect125->setNodeField("diffuseColor");
connect125->setProtoField("diffuseColor");
IS124->addConnect(*connect125);

Cconnect* connect126 = new Cconnect();
connect126->setNodeField("emissiveColor");
connect126->setProtoField("emissiveColor");
IS124->addConnect(*connect126);

Cconnect* connect127 = new Cconnect();
connect127->setNodeField("specularColor");
connect127->setProtoField("specularColor");
IS124->addConnect(*connect127);

Cconnect* connect128 = new Cconnect();
connect128->setNodeField("transparency");
connect128->setProtoField("transparency");
IS124->addConnect(*connect128);

Cconnect* connect129 = new Cconnect();
connect129->setNodeField("shininess");
connect129->setProtoField("shininess");
IS124->addConnect(*connect129);

Cconnect* connect130 = new Cconnect();
connect130->setNodeField("ambientIntensity");
connect130->setProtoField("ambientIntensity");
IS124->addConnect(*connect130);

Material123->setIS(*IS124);

ProtoBody122->addChildren(*Material123);

//Only first node (the node type) is renderable, others are along for the ride
CScript* Script131 = (CScript *)(m_pScene.createNode("Script"));
Script131->setDEF("MaterialModulatorScript");
Cfield* field132 = new Cfield();
field132->setName("enabled");
field132->setAccessType("inputOutput");
field132->setType("SFBool");
Script131->addField(*field132);

Cfield* field133 = new Cfield();
field133->setName("diffuseColor");
field133->setAccessType("inputOutput");
field133->setType("SFColor");
Script131->addField(*field133);

Cfield* field134 = new Cfield();
field134->setName("newColor");
field134->setAccessType("outputOnly");
field134->setType("SFColor");
Script131->addField(*field134);

Cfield* field135 = new Cfield();
field135->setName("clockTrigger");
field135->setAccessType("inputOnly");
field135->setType("SFTime");
Script131->addField(*field135);

CIS* IS136 = new CIS();
Cconnect* connect137 = new Cconnect();
connect137->setNodeField("enabled");
connect137->setProtoField("enabled");
IS136->addConnect(*connect137);

Cconnect* connect138 = new Cconnect();
connect138->setNodeField("diffuseColor");
connect138->setProtoField("diffuseColor");
IS136->addConnect(*connect138);

Script131->setIS(*IS136);


Script131.setSourceCode(`ecmascript:\n"+
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
ProtoBody122->addChildren(*Script131);

ProtoDeclare113->setProtoBody(*ProtoBody122);

group->addChildren(*ProtoDeclare113);

//Test success: declarative statement createDeclarativeShapeTests()
CGroup* Group139 = (CGroup *)(m_pScene.createNode("Group"));
Group139->setDEF("DeclarativeGroupExample");
CShape* Shape140 = (CShape *)(m_pScene.createNode("Shape"));
CMetadataString* MetadataString141 = (CMetadataString *)(m_pScene.createNode("MetadataString"));
MetadataString141->setName("findThisNameValue");
MetadataString141->setDEF("FindableMetadataStringTest");
MetadataString141->setValue(new CString[1]{"test case"}, 1);
Shape140->setValue(*MetadataString141);

CAppearance* Appearance142 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance142->setDEF("DeclarativeAppearanceExample");
//DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance
CProtoInstance* ProtoInstance143 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance143->setName("MaterialModulator");
ProtoInstance143->setDEF("MyMaterialModulator");
Appearance142->setMaterial(*ProtoInstance143);

Shape140->setAppearance(*Appearance142);

CCone* Cone144 = (CCone *)(m_pScene.createNode("Cone"));
Cone144->setBottom(False);
Cone144->setBottomRadius(0.05);
Cone144->setHeight(0.1);
Shape140->setGeometry(Cone144);

Group139->addChildren(*Shape140);

//Test success: declarativeGroup.addChild() singleton pipeline method
group->addChildren(*Group139);

//Test success: declarative statement addChild()
//Test success: x3dModel.findNodeByDEF(DeclarativeAppearanceExample) = <Appearance DEF='DeclarativeAppearanceExample'/> i.e. <Appearance DEF='DeclarativeAppearanceExample'> <!- - DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance - -> <ProtoInstance DEF='MyMaterialModulator' name='MaterialModulator' containerField='material'/> </Appearance>
//Test success: x3dModel.findElementByNameValue(findThisNameValue) = <MetadataString DEF='FindableMetadataStringTest' name='findThisNameValue' value='\"test case\"'/>
//Test success: x3dModel.findElementByNameValue(\"ArtDeco01Material\", \"ProtoDeclare\") found
//Test success: x3dModel.findElementByNameValue(\"MaterialModulator\", \"ProtoDeclare\") found
//Test success: x3dModel.findElementByNameValue(\"MaterialModulator\", \"ProtoInstance\") found
CGroup* Group145 = (CGroup *)(m_pScene.createNode("Group"));
Group145->setDEF("TestFieldObjectsGroup");
//testFieldObjects() results
//SFBool default=false, true=true, false=false, negate()=true
//MFBool default=, initial=true false true, negate()=false true false
//SFFloat default=0.0, initial=1.0, setValue(2)=2.0, setValue(3.0f)=3.0, setValue(4.0)=4.0
//MFFloat default=, initial=1 2 3, append(5)=1 2 3 5, inserts(3,4)(0,0)=0 1 2 3 4 5, append(6)=0 1 2 3 4 5 6, size()=7
//... get1Value[3]=3.0, remove[1]=0 2 3 4 5 6, set1Value(0,10)=10 2 3 4 5 6, multiply(2)=20 4 6 8 10 12, clear=
//SFVec3f default=0 0 0, initial=1 2 3, setValue=4 5 6, multiply(2)=8 10 12, normalize()=0.45584232 0.5698029 0.68376344, regex matches()=true
//regex test SFVec3f().matches(\"1 2 3\")=true, regex test SFVec3f().matches(\"1 2 3 4\")=false, regex test (SFRotation.matches(\"0 0 0 0\")=true, failure detecting illegal (zero axis) rotation value
group->addChildren(*Group145);

CSound* Sound146 = (CSound *)(m_pScene.createNode("Sound"));
Sound146->setLocation(new float[3]{0,1.6,0});
//set sound-ellipsoid location height at 1.6m to match typical avatar height
CAudioClip* AudioClip147 = (CAudioClip *)(m_pScene.createNode("AudioClip"));
AudioClip147->setDescription("chimes");
AudioClip147->setUrl(new CString[2]{"chimes.wav","https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/chimes.wav"}, 2);
//Scene example fragment from https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/default.x3d
Sound146->setSource(*AudioClip147);

group->addChildren(*Sound146);

CSound* Sound148 = (CSound *)(m_pScene.createNode("Sound"));
Sound148->setLocation(new float[3]{0,1.6,0});
//set sound-ellipsoid location height at 1.6m to match typical avatar height
CMovieTexture* MovieTexture149 = (CMovieTexture *)(m_pScene.createNode("MovieTexture"));
MovieTexture149->setDescription("mpgsys.mpg from ConformanceNist suite");
MovieTexture149->setUrl(new CString[2]{"mpgsys.mpg","https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpgsys.mpg"}, 2);
//Scene example fragment from https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpeg1-systems.x3d
//Expected containerField='source', allowed containerField values=\"texture\" \"source\" \"back\" \"bottom\" \"front\" \"left\" \"right\" \"top\" \"backTexture\" \"bottomTexture\" \"frontTexture\" \"leftTexture\" \"rightTexture\" \"topTexture\" \"children\"
Sound148->setSource(*MovieTexture149);

group->addChildren(*Sound148);

//Test success: Anchor.isNode()=true, siteAnchor.isNode()=true
//Test success: Anchor.isStatement()=false, siteAnchor.isStatement()=false
//Test success: ROUTE.isNode()=false, orbitPositionROUTE.isNode()=false
//Test success: ROUTE.isStatement()=true, orbitPositionROUTE.isStatement()=true
//Test success: CommentsBlock.isNode()=false, testComments.isNode()=false
//Test failure: CommentsBlock.isStatement()=true, testComments.isStatement()=true
CShape* Shape150 = (CShape *)(m_pScene.createNode("Shape"));
Shape150->setDEF("ExtrusionShape");
//ExampleExtrusion isCrossSectionClosed()=true, crossSection='[1.0, 1.0, 1.0, -1.0, -1.0, -1.0, -1.0, 1.0, 1.0, 1.0]'
//ExampleExtrusion isSpineClosed()=false, spine='[0.0, 0.0, 0.0, 0.0, 1.0, 0.0]'
CAppearance* Appearance151 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance151->setDEF("TransparentAppearance");
CMaterial* Material152 = (CMaterial *)(m_pScene.createNode("Material"));
Material152->setTransparency(1);
Appearance151->setMaterial(*Material152);

Shape150->setAppearance(*Appearance151);

CExtrusion* Extrusion153 = (CExtrusion *)(m_pScene.createNode("Extrusion"));
Extrusion153->setDEF("ExampleExtrusion");
Shape150->setGeometry(Extrusion153);

group->addChildren(*Shape150);

CGroup* Group154 = (CGroup *)(m_pScene.createNode("Group"));
//Test MFNode children array as an ordered list consisting of comments, statements, ProtoInstance and nodes
CProtoDeclare ProtoDeclare155 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="NewWorldInfo" ><ProtoInterface><field name="description" accessType="initializeOnly" type="SFString"></field>
</ProtoInterface>
<ProtoBody><WorldInfo></WorldInfo>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare155->setName("NewWorldInfo");
CProtoInterface* ProtoInterface156 = new CProtoInterface();
Cfield* field157 = new Cfield();
field157->setName("description");
field157->setAccessType("initializeOnly");
field157->setType("SFString");
ProtoInterface156->addField(*field157);

ProtoDeclare155->setProtoInterface(*ProtoInterface156);

CProtoBody* ProtoBody158 = new CProtoBody();
CWorldInfo* WorldInfo159 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
ProtoBody158->addChildren(*WorldInfo159);

ProtoDeclare155->setProtoBody(*ProtoBody158);

Group154->addChildren(*ProtoDeclare155);

CProtoInstance* ProtoInstance160 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance160->setName("NewWorldInfo");
ProtoInstance160->setDEF("Proto1");
CfieldValue* fieldValue161 = new CfieldValue();
fieldValue161->setName("description");
fieldValue161->setValue("testing 1 2 3");
ProtoInstance160->addFieldValue(*fieldValue161);

Group154->addChildren(*ProtoInstance160);

CGroup* Group162 = (CGroup *)(m_pScene.createNode("Group"));
Group162->setDEF("Node2");
//intentionally empty
Group154->addChildren(*Group162);

CProtoInstance* ProtoInstance163 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance163->setName("NewWorldInfo");
ProtoInstance163->setDEF("Proto3");
Group154->addChildren(*ProtoInstance163);

CTransform* Transform164 = (CTransform *)(m_pScene.createNode("Transform"));
Transform164->setDEF("Node4");
//intentionally empty
Group154->addChildren(*Transform164);

//Test satisfactorily creates MFNode children array as an ordered list with mixed content
group->addChildren(*Group154);

CProtoDeclare ProtoDeclare165 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ShaderProto" ><ProtoBody><ProgramShader></ProgramShader>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare165->setName("ShaderProto");
CProtoBody* ProtoBody166 = new CProtoBody();
CProgramShader* ProgramShader167 = (CProgramShader *)(m_pScene.createNode("ProgramShader"));
ProtoBody166->addChildren(*ProgramShader167);

ProtoDeclare165->setProtoBody(*ProtoBody166);

group->addChildren(*ProtoDeclare165);

CShape* Shape168 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance169 = (CAppearance *)(m_pScene.createNode("Appearance"));
//Test MFNode shaders array as an ordered list consisting of comments, ProtoInstance and nodes
//Test satisfactorily creates MFNode shaders array as an ordered list with mixed content
CProgramShader* ProgramShader170 = (CProgramShader *)(m_pScene.createNode("ProgramShader"));
ProgramShader170->setDEF("TestShader1");
CShaderProgram* ShaderProgram171 = (CShaderProgram *)(m_pScene.createNode("ShaderProgram"));
ShaderProgram171->setDEF("TestShader2");
ShaderProgram171->setType("VERTEX");
ProgramShader170->addPrograms(*ShaderProgram171);

Appearance169->addShaders(*ProgramShader170);

CProtoInstance* ProtoInstance172 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance172->setName("ShaderProto");
ProtoInstance172->setDEF("TestShader3");
Appearance169->addShaders(*ProtoInstance172);

CComposedShader* ComposedShader173 = (CComposedShader *)(m_pScene.createNode("ComposedShader"));
ComposedShader173->setDEF("TestShader4");
CShaderPart* ShaderPart174 = (CShaderPart *)(m_pScene.createNode("ShaderPart"));
ShaderPart174->setDEF("TestShader5");
ShaderPart174->setType("VERTEX");
ComposedShader173->addParts(*ShaderPart174);

Appearance169->addShaders(*ComposedShader173);

Shape168->setAppearance(*Appearance169);

group->addChildren(*Shape168);

CTransform* Transform175 = (CTransform *)(m_pScene.createNode("Transform"));
Transform175->setDEF("SpecialtyNodes");
CCADLayer* CADLayer176 = (CCADLayer *)(m_pScene.createNode("CADLayer"));
CCADAssembly* CADAssembly177 = (CCADAssembly *)(m_pScene.createNode("CADAssembly"));
CCADPart* CADPart178 = (CCADPart *)(m_pScene.createNode("CADPart"));
CCADFace* CADFace179 = (CCADFace *)(m_pScene.createNode("CADFace"));
CADPart178->addChildren(*CADFace179);

CADAssembly177->addChildren(*CADPart178);

CADLayer176->addChildren(*CADAssembly177);

Transform175->addChildren(*CADLayer176);

CEspduTransform* EspduTransform180 = (CEspduTransform *)(m_pScene.createNode("EspduTransform"));
Transform175->addChildren(*EspduTransform180);

CReceiverPdu* ReceiverPdu181 = (CReceiverPdu *)(m_pScene.createNode("ReceiverPdu"));
Transform175->addChildren(*ReceiverPdu181);

CSignalPdu* SignalPdu182 = (CSignalPdu *)(m_pScene.createNode("SignalPdu"));
Transform175->addChildren(*SignalPdu182);

CTransmitterPdu* TransmitterPdu183 = (CTransmitterPdu *)(m_pScene.createNode("TransmitterPdu"));
Transform175->addChildren(*TransmitterPdu183);

CDISEntityManager* DISEntityManager184 = (CDISEntityManager *)(m_pScene.createNode("DISEntityManager"));
CDISEntityTypeMapping* DISEntityTypeMapping185 = (CDISEntityTypeMapping *)(m_pScene.createNode("DISEntityTypeMapping"));
DISEntityManager184->addChildren(*DISEntityTypeMapping185);

Transform175->addChildren(*DISEntityManager184);

group->addChildren(*Transform175);

CEspduTransform* EspduTransform186 = (CEspduTransform *)(m_pScene.createNode("EspduTransform"));
CWorldInfo* WorldInfo187 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
EspduTransform186->addChildren(*WorldInfo187);

group->addChildren(*EspduTransform186);

CReceiverPdu* ReceiverPdu188 = (CReceiverPdu *)(m_pScene.createNode("ReceiverPdu"));
group->addChildren(*ReceiverPdu188);

CSignalPdu* SignalPdu189 = (CSignalPdu *)(m_pScene.createNode("SignalPdu"));
group->addChildren(*SignalPdu189);

CTransmitterPdu* TransmitterPdu190 = (CTransmitterPdu *)(m_pScene.createNode("TransmitterPdu"));
group->addChildren(*TransmitterPdu190);

CDISEntityManager* DISEntityManager191 = (CDISEntityManager *)(m_pScene.createNode("DISEntityManager"));
CDISEntityTypeMapping* DISEntityTypeMapping192 = (CDISEntityTypeMapping *)(m_pScene.createNode("DISEntityTypeMapping"));
DISEntityManager191->addChildren(*DISEntityTypeMapping192);

group->addChildren(*DISEntityManager191);

CLoadSensor* LoadSensor193 = (CLoadSensor *)(m_pScene.createNode("LoadSensor"));
//Contained nodes typically must be USE references for nodes previously DEFined in the scene
//The following nodes are test cases for all X3DUrlObject nodes
CAnchor* Anchor194 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor194->setUSE("siteAnchor");
LoadSensor193->addChildren(*Anchor194);

CInline* Inline195 = (CInline *)(m_pScene.createNode("Inline"));
Inline195->setUSE("inlineScene");
LoadSensor193->addChildren(*Inline195);

CDISEntityTypeMapping* DISEntityTypeMapping196 = (CDISEntityTypeMapping *)(m_pScene.createNode("DISEntityTypeMapping"));
LoadSensor193->addChildren(*DISEntityTypeMapping196);

CGeoMetadata* GeoMetadata197 = (CGeoMetadata *)(m_pScene.createNode("GeoMetadata"));
LoadSensor193->addChildren(*GeoMetadata197);

CAudioClip* AudioClip198 = (CAudioClip *)(m_pScene.createNode("AudioClip"));
LoadSensor193->addChildren(*AudioClip198);

CImageCubeMapTexture* ImageCubeMapTexture199 = (CImageCubeMapTexture *)(m_pScene.createNode("ImageCubeMapTexture"));
LoadSensor193->addChildren(*ImageCubeMapTexture199);

CImageTexture3D* ImageTexture3D200 = (CImageTexture3D *)(m_pScene.createNode("ImageTexture3D"));
LoadSensor193->addChildren(*ImageTexture3D200);

CImageTexture* ImageTexture201 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
LoadSensor193->addChildren(*ImageTexture201);

CMovieTexture* MovieTexture202 = (CMovieTexture *)(m_pScene.createNode("MovieTexture"));
LoadSensor193->addChildren(*MovieTexture202);

CScript* Script203 = (CScript *)(m_pScene.createNode("Script"));
LoadSensor193->addChildren(*Script203);

CPackagedShader* PackagedShader204 = (CPackagedShader *)(m_pScene.createNode("PackagedShader"));
LoadSensor193->addChildren(*PackagedShader204);

CShaderPart* ShaderPart205 = (CShaderPart *)(m_pScene.createNode("ShaderPart"));
ShaderPart205->setType("VERTEX");
LoadSensor193->addChildren(*ShaderPart205);

CShaderProgram* ShaderProgram206 = (CShaderProgram *)(m_pScene.createNode("ShaderProgram"));
ShaderProgram206->setType("VERTEX");
LoadSensor193->addChildren(*ShaderProgram206);

group->addChildren(*LoadSensor193);

X3D0->setScene(*Scene32);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
