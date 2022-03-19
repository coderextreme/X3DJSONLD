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
component6->setName("H-Anim");
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
meta12->setContent("Json.x3d");
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
meta18->setContent("25 May 2020");
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
meta21->setContent("Netbeans http://www.netbeans.org");
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

Cmeta* meta32 = new Cmeta();
meta32->setName("translated");
meta32->setContent("25 May 2020");
head1->addMeta(*meta32);

Cmeta* meta33 = new Cmeta();
meta33->setName("generator");
meta33->setContent("X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html");
head1->addMeta(*meta33);

Cmeta* meta34 = new Cmeta();
meta34->setName("reference");
meta34->setContent("X3D JSON encoding: https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding");
head1->addMeta(*meta34);

X3D0->setHead(*head1);

CScene* Scene35 = new CScene();
CViewpointGroup* ViewpointGroup36 = (CViewpointGroup *)(m_pScene.createNode("ViewpointGroup"));
ViewpointGroup36->setDescription("Available viewpoints");
CViewpoint* Viewpoint37 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint37->setDEF("DefaultView");
Viewpoint37->setDescription("Hello X3DJSAIL");
ViewpointGroup36->addChildren(*Viewpoint37);

CViewpoint* Viewpoint38 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint38->setDEF("TopDownView");
Viewpoint38->setDescription("top-down view from above");
Viewpoint38->setOrientation(new float[4]{1,0,0,-1.570796});
Viewpoint38->setPosition(new float[3]{0,100,0});
ViewpointGroup36->addChildren(*Viewpoint38);

group->addChildren(*ViewpointGroup36);

CNavigationInfo* NavigationInfo39 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
NavigationInfo39->setType(new CString[3]{"EXAMINE","FLY","ANY"}, 3);
group->addChildren(*NavigationInfo39);

CWorldInfo* WorldInfo40 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo40->setDEF("WorldInfoDEF");
WorldInfo40->setTitle("HelloWorldProgram produced by X3D Java SAI Library (X3DJSAIL)");
group->addChildren(*WorldInfo40);

CWorldInfo* WorldInfo41 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo41->setUSE("WorldInfoDEF");
group->addChildren(*WorldInfo41);

CWorldInfo* WorldInfo42 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo42->setUSE("WorldInfoDEF");
group->addChildren(*WorldInfo42);

CMetadataString* MetadataString43 = (CMetadataString *)(m_pScene.createNode("MetadataString"));
MetadataString43->setName("test");
MetadataString43->setDEF("scene.addChildMetadata");
MetadataString43->setValue(new CString[1]{"Top-level root Metadata node beneath Scene needs to be one of '-children' in JSON encoding"}, 1);
group->addMetadata(*MetadataString43);

CLayerSet* LayerSet44 = (CLayerSet *)(m_pScene.createNode("LayerSet"));
LayerSet44->setDEF("scene.addChildLayerSetTest");
group->addLayerSet(*LayerSet44);

CTransform* Transform45 = (CTransform *)(m_pScene.createNode("Transform"));
Transform45->setDEF("LogoGeometryTransform");
Transform45->setTranslation(new float[3]{0,1.5,0});
CAnchor* Anchor46 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor46->setDescription("select for X3D Java SAI Library (X3DJSAIL) description");
Anchor46->setUrl(new CString[2]{"../X3DJSAIL.html","https://www.web3d.org/specifications/java/X3DJSAIL.html"}, 2);
CShape* Shape47 = (CShape *)(m_pScene.createNode("Shape"));
Shape47->setDEF("BoxShape");
CAppearance* Appearance48 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material49 = (CMaterial *)(m_pScene.createNode("Material"));
Material49->setDEF("GreenMaterial");
Material49->setDiffuseColor(new float[3]{0,1,1});
Material49->setEmissiveColor(new float[3]{0.8,0,0});
Material49->setTransparency(0.1);
Appearance48->setMaterial(*Material49);

CImageTexture* ImageTexture50 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture50->setUrl(new CString[2]{"images/X3dJavaSceneAccessInterfaceSaiLibrary.png","https://www.web3d.org/specifications/java/examples/images/X3dJavaSceneAccessInterfaceSaiLibrary.png"}, 2);
Appearance48->setTexture(*ImageTexture50);

Shape47->setAppearance(*Appearance48);

CBox* Box51 = (CBox *)(m_pScene.createNode("Box"));
Box51->setDEF("test-NMTOKEN_regex.0123456789");
Box51->setCssClass("untextured");
Shape47->setGeometry(Box51);

Anchor46->addChildren(*Shape47);

Transform45->addChildren(*Anchor46);

group->addChildren(*Transform45);

CShape* Shape52 = (CShape *)(m_pScene.createNode("Shape"));
Shape52->setDEF("LineShape");
CAppearance* Appearance53 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material54 = (CMaterial *)(m_pScene.createNode("Material"));
Material54->setEmissiveColor(new float[3]{0.6,0.19607843,0.8});
Appearance53->setMaterial(*Material54);

Shape52->setAppearance(*Appearance53);

CIndexedLineSet* IndexedLineSet55 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet55->setCoordIndex(new int[6]{0,1,2,3,4,0});
//Coordinate 3-tuple point count: 6
CCoordinate* Coordinate56 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate56->setPoint(new float[18]{0,1.5,0,2,1.5,0,2,1.5,-2,-2,1.5,-2,-2,1.5,0,0,1.5,0});
IndexedLineSet55->setCoord(*Coordinate56);

Shape52->setGeometry(IndexedLineSet55);

group->addChildren(*Shape52);

CPositionInterpolator* PositionInterpolator57 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator57->setDEF("BoxPathAnimator");
PositionInterpolator57->setKey(new float[6]{0,0.125,0.375,0.625,0.875,1}, 6);
PositionInterpolator57->setKeyValue(new float[18]{0,1.5,0,2,1.5,0,2,1.5,-2,-2,1.5,-2,-2,1.5,0,0,1.5,0});
group->addChildren(*PositionInterpolator57);

CTimeSensor* TimeSensor58 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor58->setDEF("OrbitClock");
TimeSensor58->setCycleInterval(8);
TimeSensor58->setLoop(True);
group->addChildren(*TimeSensor58);

CROUTE* ROUTE59 = new CROUTE();
ROUTE59->setFromField("fraction_changed");
ROUTE59->setFromNode("OrbitClock");
ROUTE59->setToField("set_fraction");
ROUTE59->setToNode("BoxPathAnimator");
group->addChildren(*ROUTE59);

CROUTE* ROUTE60 = new CROUTE();
ROUTE60->setFromField("value_changed");
ROUTE60->setFromNode("BoxPathAnimator");
ROUTE60->setToField("set_translation");
ROUTE60->setToNode("LogoGeometryTransform");
group->addChildren(*ROUTE60);

CTransform* Transform61 = (CTransform *)(m_pScene.createNode("Transform"));
Transform61->setDEF("TextTransform");
Transform61->setTranslation(new float[3]{0,-1.5,0});
CShape* Shape62 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance63 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material64 = (CMaterial *)(m_pScene.createNode("Material"));
Material64->setUSE("GreenMaterial");
Appearance63->setMaterial(*Material64);

Shape62->setAppearance(*Appearance63);

CText* Text65 = (CText *)(m_pScene.createNode("Text"));
Text65->setString(new CString[3]{"X3D Java","SAI Library","X3DJSAIL"}, 3);
//Comment example A, plain quotation marks: He said, \"Immel did it!\"
//Comment example B, XML character entities: He said, &quot;Immel did it!&quot;
CMetadataSet* MetadataSet66 = (CMetadataSet *)(m_pScene.createNode("MetadataSet"));
MetadataSet66->setName("EscapedQuotationMarksMetadataSet");
CMetadataString* MetadataString67 = (CMetadataString *)(m_pScene.createNode("MetadataString"));
MetadataString67->setName("quotesTestC");
MetadataString67->setValue(new CString[1]{"MFString example C, backslash-escaped quotes: He said, \"Immel did it!\""}, 1);
MetadataSet66->setValue(*MetadataString67);

CMetadataString* MetadataString68 = (CMetadataString *)(m_pScene.createNode("MetadataString"));
MetadataString68->setName("extraChildTest");
MetadataString68->setValue(new CString[1]{"checks MetadataSetObject addValue() method"}, 1);
MetadataSet66->addValue(*MetadataString68);

Text65->setMetadata(*MetadataSet66);

CFontStyle* FontStyle69 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle69->setJustify(new CString[2]{"MIDDLE","MIDDLE"}, 2);
Text65->setFontStyle(*FontStyle69);

Shape62->setGeometry(Text65);

Transform61->addChildren(*Shape62);

CCollision* Collision70 = (CCollision *)(m_pScene.createNode("Collision"));
//test containerField='proxy'
CShape* Shape71 = (CShape *)(m_pScene.createNode("Shape"));
Shape71->setDEF("ProxyShape");
//alternative XML encoding: Text string='\"One, Two, Comment\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\"'
//alternative XML encoding: Text string='\"One, Two, Comment\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\" \"\"'
//alternative Java source: .setString(new String [] {\"One, Two, Comment\", \"\", \"He said, \\\"\"Immel did it!\\\"\"\"})
//reference: https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/StringArrayEncodingExamplesIndex.html
CText* Text72 = (CText *)(m_pScene.createNode("Text"));
Text72->setString(new CString[3]{"One, Two, Text","","He said, \"Immel did it!\" \"\""}, 3);
Shape71->setGeometry(Text72);

Collision70->setProxy(*Shape71);

Transform61->addChildren(*Collision70);

//It's a beautiful world
//... for you!
//https://en.wikipedia.org/wiki/Beautiful_World_(Devo_song)
group->addChildren(*Transform61);

//repeatedly spin 180 degrees as a readable special effect
COrientationInterpolator* OrientationInterpolator73 = (COrientationInterpolator *)(m_pScene.createNode("OrientationInterpolator"));
OrientationInterpolator73->setDEF("SpinInterpolator");
OrientationInterpolator73->setKey(new float[3]{0,0.5,1}, 3);
OrientationInterpolator73->setKeyValue(new float[12]{0,1,0,4.712389,0,1,0,0,0,1,0,1.5707964});
group->addChildren(*OrientationInterpolator73);

CTimeSensor* TimeSensor74 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor74->setDEF("SpinClock");
TimeSensor74->setCycleInterval(5);
TimeSensor74->setLoop(True);
group->addChildren(*TimeSensor74);

CROUTE* ROUTE75 = new CROUTE();
ROUTE75->setFromField("fraction_changed");
ROUTE75->setFromNode("SpinClock");
ROUTE75->setToField("set_fraction");
ROUTE75->setToNode("SpinInterpolator");
group->addChildren(*ROUTE75);

CROUTE* ROUTE76 = new CROUTE();
ROUTE76->setFromField("value_changed");
ROUTE76->setFromNode("SpinInterpolator");
ROUTE76->setToField("rotation");
ROUTE76->setToNode("TextTransform");
group->addChildren(*ROUTE76);

CGroup* Group77 = (CGroup *)(m_pScene.createNode("Group"));
Group77->setDEF("BackgroundGroup");
CBackground* Background78 = (CBackground *)(m_pScene.createNode("Background"));
Background78->setDEF("GradualBackground");
Group77->addChildren(*Background78);

CScript* Script79 = (CScript *)(m_pScene.createNode("Script"));
Script79->setDEF("colorTypeConversionScript");
Cfield* field80 = new Cfield();
field80->setName("colorInput");
field80->setAccessType("inputOnly");
field80->setType("SFColor");
Script79->addField(*field80);

Cfield* field81 = new Cfield();
field81->setName("colorsOutput");
field81->setAccessType("outputOnly");
field81->setType("MFColor");
Script79->addField(*field81);


Script79.setSourceCode(`ecmascript:\n"+
"\n"+
"function colorInput (eventValue) // Example source code\n"+
"{\n"+
"   colorsOutput = new MFColor(eventValue); // assigning value sends output event\n"+
"// Browser.print('colorInput=' + eventValue + ', colorsOutput=' + colorsOutput + '\\n');\n"+
"}`)
Group77->addChildren(*Script79);

CColorInterpolator* ColorInterpolator82 = (CColorInterpolator *)(m_pScene.createNode("ColorInterpolator"));
ColorInterpolator82->setDEF("ColorAnimator");
ColorInterpolator82->setKey(new float[3]{0,0.5,1}, 3);
ColorInterpolator82->setKeyValue(new float[9]{0.9411765,1,1,0.29411766,0,0.50980395,0.9411765,1,1});
//AZURE to INDIGO and back again
Group77->addChildren(*ColorInterpolator82);

CTimeSensor* TimeSensor83 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor83->setDEF("ColorClock");
TimeSensor83->setCycleInterval(60);
TimeSensor83->setLoop(True);
Group77->addChildren(*TimeSensor83);

CROUTE* ROUTE84 = new CROUTE();
ROUTE84->setFromField("colorsOutput");
ROUTE84->setFromNode("colorTypeConversionScript");
ROUTE84->setToField("skyColor");
ROUTE84->setToNode("GradualBackground");
Group77->addChildren(*ROUTE84);

CROUTE* ROUTE85 = new CROUTE();
ROUTE85->setFromField("value_changed");
ROUTE85->setFromNode("ColorAnimator");
ROUTE85->setToField("colorInput");
ROUTE85->setToNode("colorTypeConversionScript");
Group77->addChildren(*ROUTE85);

CROUTE* ROUTE86 = new CROUTE();
ROUTE86->setFromField("fraction_changed");
ROUTE86->setFromNode("ColorClock");
ROUTE86->setToField("set_fraction");
ROUTE86->setToNode("ColorAnimator");
Group77->addChildren(*ROUTE86);

group->addChildren(*Group77);

CProtoDeclare ProtoDeclare87 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
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
ProtoDeclare87->setName("ArtDeco01Material");
ProtoDeclare87->setAppinfo("tooltip: ArtDeco01Material prototype is a Material node");
CProtoInterface* ProtoInterface88 = new CProtoInterface();
Cfield* field89 = new Cfield();
field89->setName("description");
field89->setAccessType("inputOutput");
field89->setAppinfo("tooltip for descriptionField");
field89->setType("SFString");
field89->setValue("ArtDeco01Material prototype is a Material node");
ProtoInterface88->addField(*field89);

Cfield* field90 = new Cfield();
field90->setName("enabled");
field90->setAccessType("inputOutput");
field90->setType("SFBool");
field90->setValue("true");
ProtoInterface88->addField(*field90);

ProtoDeclare87->setProtoInterface(*ProtoInterface88);

CProtoBody* ProtoBody91 = new CProtoBody();
//Initial node of ProtoBody determines prototype node type
CMaterial* Material92 = (CMaterial *)(m_pScene.createNode("Material"));
Material92->setAmbientIntensity(0.25);
Material92->setDiffuseColor(new float[3]{0.282435,0.085159,0.134462});
Material92->setShininess(0.127273);
Material92->setSpecularColor(new float[3]{0.276305,0.11431,0.139857});
ProtoBody91->addChildren(*Material92);

//[HelloWorldProgram diagnostic] should be connected to scene graph: artDeco01ProtoDeclare.getNodeType()=\"Material\"
//presence of follow-on TouchSensor shows that additional nodes are allowed in ProtoBody after initial node, regardless of node types
CTouchSensor* TouchSensor93 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor93->setDescription("within ProtoBody");
CIS* IS94 = new CIS();
Cconnect* connect95 = new Cconnect();
connect95->setNodeField("description");
connect95->setProtoField("description");
IS94->addConnect(*connect95);

Cconnect* connect96 = new Cconnect();
connect96->setNodeField("enabled");
connect96->setProtoField("enabled");
IS94->addConnect(*connect96);

TouchSensor93->setIS(*IS94);

ProtoBody91->addChildren(*TouchSensor93);

ProtoDeclare87->setProtoBody(*ProtoBody91);

group->addChildren(*ProtoDeclare87);

CExternProtoDeclare* ExternProtoDeclare97 = new CExternProtoDeclare();
ExternProtoDeclare97->setName("ArtDeco02Material");
ExternProtoDeclare97->setAppinfo("this is a different Material node");
ExternProtoDeclare97->setUrl(new CString[2]{"http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3d#ArtDeco02Material","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3dv#ArtDeco02Material"}, 2);
//[HelloWorldProgram diagnostic] artDeco02ExternProtoDeclare.getNodeType()=\"ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02Material' type cannot be remotely accessed at run time. TODO X3DJSAIL needs to add further capability that retrieves the ExternProtoDeclare file.\"
Cfield* field98 = new Cfield();
field98->setName("description");
field98->setAccessType("inputOutput");
field98->setAppinfo("tooltip for descriptionField");
field98->setType("SFString");
ExternProtoDeclare97->addField(*field98);

group->addChildren(*ExternProtoDeclare97);

//Tested ArtDeco01ProtoInstance, ArtDeco02ProtoInstance for improper node type when ProtoInstance is added in wrong place
CShape* Shape99 = (CShape *)(m_pScene.createNode("Shape"));
Shape99->setDEF("TestShape1");
CAppearance* Appearance100 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance100->setDEF("TestAppearance1");
//ArtDeco01Material prototype goes here... TODO ensure setContainerField is handled in exported Java
CProtoInstance* ProtoInstance101 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance101->setName("ArtDeco01Material");
//[HelloWorldProgram diagnostic] ArtDeco01ProtoInstance.getNodeType()=\"Material\"
CfieldValue* fieldValue102 = new CfieldValue();
fieldValue102->setName("description");
fieldValue102->setValue("ArtDeco01Material can substitute for a Material node");
ProtoInstance101->addFieldValue(*fieldValue102);

Appearance100->setMaterial(*ProtoInstance101);

Shape99->setAppearance(*Appearance100);

CSphere* Sphere103 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere103->setRadius(0.001);
Shape99->setGeometry(Sphere103);

group->addChildren(*Shape99);

CShape* Shape104 = (CShape *)(m_pScene.createNode("Shape"));
Shape104->setDEF("TestShape2");
CAppearance* Appearance105 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance105->setDEF("TestAppearance2");
//ArtDeco02Material prototype goes here... TODO ensure setContainerField is handled in exported Java
CProtoInstance* ProtoInstance106 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance106->setName("ArtDeco02Material");
ProtoInstance106->setDEF("ArtDeco02MaterialDEF");
//[HelloWorldProgram diagnostic] ArtDeco02ProtoInstance.getNodeType()=\"ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02Material' type cannot be remotely accessed at run time. TODO X3DJSAIL needs to add further capability that retrieves the ExternProtoDeclare file.\"
CfieldValue* fieldValue107 = new CfieldValue();
fieldValue107->setName("description");
fieldValue107->setValue("ArtDeco02Material can substitute for another Material node");
ProtoInstance106->addFieldValue(*fieldValue107);

Appearance105->setMaterial(*ProtoInstance106);

Shape104->setAppearance(*Appearance105);

CCone* Cone108 = (CCone *)(m_pScene.createNode("Cone"));
Cone108->setBottomRadius(0.001);
Cone108->setHeight(0.001);
Shape104->setGeometry(Cone108);

group->addChildren(*Shape104);

CShape* Shape109 = (CShape *)(m_pScene.createNode("Shape"));
Shape109->setDEF("TestShape3");
CAppearance* Appearance110 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance110->setDEF("TestAppearance3");
//ArtDeco02Material ProtoInstance USE goes here. Note that name field is NOT defined as part of ProtoInstance USE.
CProtoInstance* ProtoInstance111 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance111->setUSE("ArtDeco02MaterialDEF");
Appearance110->setMaterial(*ProtoInstance111);

Shape109->setAppearance(*Appearance110);

CCylinder* Cylinder112 = (CCylinder *)(m_pScene.createNode("Cylinder"));
Cylinder112->setHeight(0.001);
Cylinder112->setRadius(0.001);
Shape109->setGeometry(Cylinder112);

group->addChildren(*Shape109);

CInline* Inline113 = (CInline *)(m_pScene.createNode("Inline"));
Inline113->setDEF("inlineSceneDef");
Inline113->setUrl(new CString[2]{"someOtherScene.x3d","https://www.web3d.org/specifications/java/examples/someOtherScene.x3d"}, 2);
group->addChildren(*Inline113);

CIMPORT* IMPORT114 = new CIMPORT();
IMPORT114->setAS("WorldInfoDEF2");
IMPORT114->setImportedDEF("WorldInfoDEF");
IMPORT114->setInlineDEF("inlineSceneDef");
group->addChildren(*IMPORT114);

CEXPORT* EXPORT115 = new CEXPORT();
EXPORT115->setAS("WorldInfoDEF3");
EXPORT115->setLocalDEF("WorldInfoDEF");
group->addChildren(*EXPORT115);

CProtoDeclare ProtoDeclare116 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
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
ProtoDeclare116->setName("MaterialModulator");
ProtoDeclare116->setAppinfo("mimic a Material node and modulate fields as an animation effect");
ProtoDeclare116->setDocumentation("http://x3dgraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/MaterialModulatorIndex.html");
CProtoInterface* ProtoInterface117 = new CProtoInterface();
Cfield* field118 = new Cfield();
field118->setName("enabled");
field118->setAccessType("inputOutput");
field118->setType("SFBool");
field118->setValue("true");
ProtoInterface117->addField(*field118);

Cfield* field119 = new Cfield();
field119->setName("diffuseColor");
field119->setAccessType("inputOutput");
field119->setType("SFColor");
field119->setValue("0 0 0");
ProtoInterface117->addField(*field119);

Cfield* field120 = new Cfield();
field120->setName("emissiveColor");
field120->setAccessType("inputOutput");
field120->setType("SFColor");
field120->setValue("0.05 0.05 0.5");
ProtoInterface117->addField(*field120);

Cfield* field121 = new Cfield();
field121->setName("specularColor");
field121->setAccessType("inputOutput");
field121->setType("SFColor");
field121->setValue("0 0 0");
ProtoInterface117->addField(*field121);

Cfield* field122 = new Cfield();
field122->setName("transparency");
field122->setAccessType("inputOutput");
field122->setType("SFFloat");
field122->setValue("0");
ProtoInterface117->addField(*field122);

Cfield* field123 = new Cfield();
field123->setName("shininess");
field123->setAccessType("inputOutput");
field123->setType("SFFloat");
field123->setValue("0");
ProtoInterface117->addField(*field123);

Cfield* field124 = new Cfield();
field124->setName("ambientIntensity");
field124->setAccessType("inputOutput");
field124->setType("SFFloat");
field124->setValue("0");
ProtoInterface117->addField(*field124);

ProtoDeclare116->setProtoInterface(*ProtoInterface117);

CProtoBody* ProtoBody125 = new CProtoBody();
CMaterial* Material126 = (CMaterial *)(m_pScene.createNode("Material"));
Material126->setDEF("MaterialNode");
CIS* IS127 = new CIS();
Cconnect* connect128 = new Cconnect();
connect128->setNodeField("diffuseColor");
connect128->setProtoField("diffuseColor");
IS127->addConnect(*connect128);

Cconnect* connect129 = new Cconnect();
connect129->setNodeField("emissiveColor");
connect129->setProtoField("emissiveColor");
IS127->addConnect(*connect129);

Cconnect* connect130 = new Cconnect();
connect130->setNodeField("specularColor");
connect130->setProtoField("specularColor");
IS127->addConnect(*connect130);

Cconnect* connect131 = new Cconnect();
connect131->setNodeField("transparency");
connect131->setProtoField("transparency");
IS127->addConnect(*connect131);

Cconnect* connect132 = new Cconnect();
connect132->setNodeField("shininess");
connect132->setProtoField("shininess");
IS127->addConnect(*connect132);

Cconnect* connect133 = new Cconnect();
connect133->setNodeField("ambientIntensity");
connect133->setProtoField("ambientIntensity");
IS127->addConnect(*connect133);

Material126->setIS(*IS127);

ProtoBody125->addChildren(*Material126);

//Only first node (the node type) is renderable, others are along for the ride
CScript* Script134 = (CScript *)(m_pScene.createNode("Script"));
Script134->setDEF("MaterialModulatorScript");
Cfield* field135 = new Cfield();
field135->setName("enabled");
field135->setAccessType("inputOutput");
field135->setType("SFBool");
Script134->addField(*field135);

Cfield* field136 = new Cfield();
field136->setName("diffuseColor");
field136->setAccessType("inputOutput");
field136->setType("SFColor");
Script134->addField(*field136);

Cfield* field137 = new Cfield();
field137->setName("newColor");
field137->setAccessType("outputOnly");
field137->setType("SFColor");
Script134->addField(*field137);

Cfield* field138 = new Cfield();
field138->setName("clockTrigger");
field138->setAccessType("inputOnly");
field138->setType("SFTime");
Script134->addField(*field138);

CIS* IS139 = new CIS();
Cconnect* connect140 = new Cconnect();
connect140->setNodeField("enabled");
connect140->setProtoField("enabled");
IS139->addConnect(*connect140);

Cconnect* connect141 = new Cconnect();
connect141->setNodeField("diffuseColor");
connect141->setProtoField("diffuseColor");
IS139->addConnect(*connect141);

Script134->setIS(*IS139);


Script134.setSourceCode(`ecmascript:\n"+
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
ProtoBody125->addChildren(*Script134);

ProtoDeclare116->setProtoBody(*ProtoBody125);

group->addChildren(*ProtoDeclare116);

//Test success: declarative statement createDeclarativeShapeTests()
CGroup* Group142 = (CGroup *)(m_pScene.createNode("Group"));
Group142->setDEF("DeclarativeGroupExample");
CShape* Shape143 = (CShape *)(m_pScene.createNode("Shape"));
CMetadataString* MetadataString144 = (CMetadataString *)(m_pScene.createNode("MetadataString"));
MetadataString144->setName("findThisNameValue");
MetadataString144->setDEF("FindableMetadataStringTest");
MetadataString144->setValue(new CString[1]{"test case"}, 1);
Shape143->setValue(*MetadataString144);

CAppearance* Appearance145 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance145->setDEF("DeclarativeAppearanceExample");
//DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance
CProtoInstance* ProtoInstance146 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance146->setName("MaterialModulator");
ProtoInstance146->setDEF("MyMaterialModulator");
Appearance145->setMaterial(*ProtoInstance146);

Shape143->setAppearance(*Appearance145);

CCone* Cone147 = (CCone *)(m_pScene.createNode("Cone"));
Cone147->setBottom(False);
Cone147->setBottomRadius(0.05);
Cone147->setHeight(0.1);
Shape143->setGeometry(Cone147);

Group142->addChildren(*Shape143);

//Test success: declarativeGroup.addChild() singleton pipeline method
group->addChildren(*Group142);

//Test success: declarative statement addChild()
//Test success: x3dModel.findNodeByDEF(DeclarativeAppearanceExample) = <Appearance DEF='DeclarativeAppearanceExample'/> i.e. <Appearance DEF='DeclarativeAppearanceExample'> <!- - DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance - -> <ProtoInstance DEF='MyMaterialModulator' name='MaterialModulator' containerField='material'/> </Appearance>
//Test success: x3dModel.findElementByNameValue(findThisNameValue) = <MetadataString DEF='FindableMetadataStringTest' name='findThisNameValue' value='\"test case\"'/>
//Test success: x3dModel.findElementByNameValue(\"ArtDeco01Material\", \"ProtoDeclare\") found
//Test success: x3dModel.findElementByNameValue(\"MaterialModulator\", \"ProtoDeclare\") found
//Test success: x3dModel.findElementByNameValue(\"MaterialModulator\", \"ProtoInstance\") found
CGroup* Group148 = (CGroup *)(m_pScene.createNode("Group"));
Group148->setDEF("TestFieldObjectsGroup");
//testFieldObjects() results
//SFBool default=true, true=true, false=false, negate()=true
//MFBool default=, initial=true false true, negate()=false true false
//SFFloat default=0.0, initial=1.0, setValue(2)=2.0, setValue(3.0f)=3.0, setValue(4.0)=4.0
//MFFloat default=, initial=1 2 3, append(5)=1 2 3 5, inserts(3,4)(0,0)=0 1 2 3 4 5, append(6)=0 1 2 3 4 5 6, size()=7
//... get1Value[3]=3.0, remove[1]=0 2 3 4 5 6, set1Value(0,10)=10 2 3 4 5 6, multiply(2)=20 4 6 8 10 12, clear=
//SFVec3f default=0 0 0, initial=1 2 3, setValue=4 5 6, multiply(2)=8 10 12, normalize()=0.45584232 0.5698029 0.68376344, regex matches()=true
//regex test SFVec3f().matches(\"1 2 3\")=true, regex test SFVec3f().matches(\"1 2 3 4\")=false, regex test (SFRotationObject.matches(\"0 0 0 0\")=true, failure detecting illegal (zero axis) rotation value
group->addChildren(*Group148);

CSound* Sound149 = (CSound *)(m_pScene.createNode("Sound"));
Sound149->setLocation(new float[3]{0,1.6,0});
//set sound-ellipsoid location height at 1.6m to match typical avatar height
CAudioClip* AudioClip150 = (CAudioClip *)(m_pScene.createNode("AudioClip"));
AudioClip150->setDescription("chimes");
AudioClip150->setUrl(new CString[2]{"chimes.wav","https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/chimes.wav"}, 2);
//Scene example fragment from https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/default.x3d
Sound149->setSource(*AudioClip150);

group->addChildren(*Sound149);

CSound* Sound151 = (CSound *)(m_pScene.createNode("Sound"));
Sound151->setLocation(new float[3]{0,1.6,0});
//set sound-ellipsoid location height at 1.6m to match typical avatar height
CMovieTexture* MovieTexture152 = (CMovieTexture *)(m_pScene.createNode("MovieTexture"));
MovieTexture152->setDescription("mpgsys.mpg from ConformanceNist suite");
MovieTexture152->setUrl(new CString[2]{"mpgsys.mpg","https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpgsys.mpg"}, 2);
//Scene example fragment from https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpeg1-systems.x3d
//Expected containerField='source', allowed containerField values=\"texture\" \"source\" \"back\" \"bottom\" \"front\" \"left\" \"right\" \"top\" \"backTexture\" \"bottomTexture\" \"frontTexture\" \"leftTexture\" \"rightTexture\" \"topTexture\" \"watchList\"
Sound151->setSource(*MovieTexture152);

group->addChildren(*Sound151);

//Test success: AnchorObject.isNode()=true, siteAnchor.isNode()=true
//Test success: AnchorObject.isStatement()=false, siteAnchor.isStatement()=false
//Test success: ROUTEObject.isNode()=false, orbitPositionROUTE.isNode()=false
//Test success: ROUTEObject.isStatement()=true, orbitPositionROUTE.isStatement()=true
//Test success: CommentsBlock.isNode()=false, testComments.isNode()=false
//Test failure: CommentsBlock.isStatement()=true, testComments.isStatement()=true
CShape* Shape153 = (CShape *)(m_pScene.createNode("Shape"));
Shape153->setDEF("ExtrusionShape");
//ExampleExtrusion isCrossSectionClosed()=true, crossSection='[1.0, 1.0, 1.0, -1.0, -1.0, -1.0, -1.0, 1.0, 1.0, 1.0]'
//ExampleExtrusion isSpineClosed()=false, spine='[0.0, 0.0, 0.0, 0.0, 1.0, 0.0]'
CAppearance* Appearance154 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance154->setDEF("TransparentAppearance");
CMaterial* Material155 = (CMaterial *)(m_pScene.createNode("Material"));
Material155->setTransparency(1);
Appearance154->setMaterial(*Material155);

Shape153->setAppearance(*Appearance154);

CExtrusion* Extrusion156 = (CExtrusion *)(m_pScene.createNode("Extrusion"));
Extrusion156->setDEF("ExampleExtrusion");
Shape153->setGeometry(Extrusion156);

group->addChildren(*Shape153);

CGroup* Group157 = (CGroup *)(m_pScene.createNode("Group"));
//Test MFNode children array as an ordered list consisting of comments, statements, ProtoInstance and nodes
CProtoDeclare ProtoDeclare158 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="NewWorldInfo" ><ProtoInterface><field name="description" accessType="initializeOnly" type="SFString"></field>
</ProtoInterface>
<ProtoBody><WorldInfo></WorldInfo>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare158->setName("NewWorldInfo");
CProtoInterface* ProtoInterface159 = new CProtoInterface();
Cfield* field160 = new Cfield();
field160->setName("description");
field160->setAccessType("initializeOnly");
field160->setType("SFString");
ProtoInterface159->addField(*field160);

ProtoDeclare158->setProtoInterface(*ProtoInterface159);

CProtoBody* ProtoBody161 = new CProtoBody();
CWorldInfo* WorldInfo162 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
ProtoBody161->addChildren(*WorldInfo162);

ProtoDeclare158->setProtoBody(*ProtoBody161);

Group157->addChildren(*ProtoDeclare158);

CGroup* Group163 = (CGroup *)(m_pScene.createNode("Group"));
Group163->setDEF("Node2");
//intentionally empty
Group157->addChildren(*Group163);

CTransform* Transform164 = (CTransform *)(m_pScene.createNode("Transform"));
Transform164->setDEF("Node4");
//intentionally empty
Group157->addChildren(*Transform164);

//Test satisfactorily creates MFNode children array as an ordered list with mixed content
group->addChildren(*Group157);

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

X3D0->setScene(*Scene35);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
