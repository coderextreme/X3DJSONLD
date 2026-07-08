
#include <Inventor/nodes/SoCone.h>
#include <Inventor/nodes/SoBaseColor.h>
#include <Inventor/nodes/SoSeparator.h>
#include <Inventor/nodes/SoShape.h>
#include <Inventor/nodes/SoTransform.h>
#include <Inventor/nodes/SoSphere.h>
#include <Inventor/nodes/SoMaterial.h>
#include <Inventor/misc/SoProtoInstance.h>
#include <Inventor/VRMLnodes/SoVRMLAppearance.h>
#include <Quarter/Quarter.h>
#include <Quarter/QuarterWidget.h>
#include <QApplication>
#include <QMainWindow>

using namespace SIM::Coin3D::Quarter;
int main(int argc, char ** argv) 
{

  QApplication app(argc, argv);
  Quarter::init();

  SoSeparator * root = new SoSeparator;
  root->ref();

  SoBaseColor * col = new SoBaseColor;
  col->rgb = SbColor(1, 1, 0);
  root->addChild(col);

  root->addChild(new SoCone);

  QMainWindow * mainwin = new QMainWindow();

  QuarterWidget * viewer = new QuarterWidget(mainwin);
  viewer->setNavigationModeFile();
  mainwin->setCentralWidget(viewer);
  viewer->setSceneGraph(root);

  mainwin->show();
  app.exec();
  root->unref();
  delete viewer;

  Quarter::clean();
SoSceneManager* SoSceneManager0 = new SoSceneManager();
SoSceneManager0->setCssClass(QString("x3dModel.class"));
SoSceneManager0->setProfile(QString("Full"));
SoSceneManager0->setStyle(QString("x3dModel.style"));
SoSceneManager0->setVersion(QString("4.0"));
//X3D model top-level comment
Sohead* Sohead1 = new Sohead();
//comment #1
//comment #2
//comment #3
//comment #4
Socomponent* Socomponent2 = new Socomponent();
Socomponent2->setName(QString("Navigation"));
Socomponent2->setLevel(3);
Sohead1->addChild(*Socomponent2);

Socomponent* Socomponent3 = new Socomponent();
Socomponent3->setName(QString("Shaders"));
Socomponent3->setLevel(1);
Sohead1->addChild(*Socomponent3);

Socomponent* Socomponent4 = new Socomponent();
Socomponent4->setName(QString("CADGeometry"));
Socomponent4->setLevel(2);
Sohead1->addChild(*Socomponent4);

Socomponent* Socomponent5 = new Socomponent();
Socomponent5->setName(QString("DIS"));
Socomponent5->setLevel(2);
Sohead1->addChild(*Socomponent5);

Socomponent* Socomponent6 = new Socomponent();
Socomponent6->setName(QString("HAnim"));
Socomponent6->setLevel(1);
Sohead1->addChild(*Socomponent6);

Socomponent* Socomponent7 = new Socomponent();
Socomponent7->setName(QString("Grouping"));
Socomponent7->setLevel(1);
Sohead1->addChild(*Socomponent7);

Socomponent* Socomponent8 = new Socomponent();
Socomponent8->setName(QString("Layering"));
Socomponent8->setLevel(1);
Sohead1->addChild(*Socomponent8);

Sounit* Sounit9 = new Sounit();
Sounit9->setName(QString("AngleUnitConversion"));
Sounit9->setCategory(QString("angle"));
Sounit9->setConversionFactor(1);
Sohead1->addUnit(Sounit9);

Sounit* Sounit10 = new Sounit();
Sounit10->setName(QString("LengthUnitConversion"));
Sounit10->setCategory(QString("length"));
Sounit10->setConversionFactor(1);
Sohead1->addUnit(Sounit10);

Sounit* Sounit11 = new Sounit();
Sounit11->setName(QString("ForceFromPoundsToNewtons"));
Sounit11->setCategory(QString("force"));
Sounit11->setConversionFactor(4.4482);
Sohead1->addUnit(Sounit11);

Someta* Someta12 = new Someta();
Someta12->setName(QString("title"));
Someta12->setContent(QString("SmokeTestProgramOutput.x3d"));
Sohead1->addMeta(*Someta12);

Someta* Someta13 = new Someta();
Someta13->setName(QString("info"));
Someta13->setContent(QString("continued development and testing in progress"));
Sohead1->addMeta(*Someta13);

Someta* Someta14 = new Someta();
Someta14->setName(QString("description"));
Someta14->setContent(QString("Example SmokeTestProgram creates an X3D model using the X3D Java Scene Access Interface Library (X3DJSAIL)"));
Sohead1->addMeta(*Someta14);

Someta* Someta15 = new Someta();
Someta15->setName(QString("reference"));
Someta15->setContent(QString("https://www.web3d.org/specifications/java/X3DJSAIL.html"));
Sohead1->addMeta(*Someta15);

Someta* Someta16 = new Someta();
Someta16->setName(QString("generator"));
Someta16->setContent(QString("SmokeTestProgramOutput.java"));
Sohead1->addMeta(*Someta16);

Someta* Someta17 = new Someta();
Someta17->setName(QString("created"));
Someta17->setContent(QString("6 September 2016"));
Sohead1->addMeta(*Someta17);

Someta* Someta18 = new Someta();
Someta18->setName(QString("modified"));
Someta18->setContent(QString("20 June 2026"));
Sohead1->addMeta(*Someta18);

Someta* Someta19 = new Someta();
Someta19->setName(QString("generator"));
Someta19->setContent(QString("X3D Java Scene Access Interface Library (X3DJSAIL)"));
Sohead1->addMeta(*Someta19);

Someta* Someta20 = new Someta();
Someta20->setName(QString("generator"));
Someta20->setContent(QString("https://www.web3d.org/specifications/java/examples/SmokeTestProgram.java"));
Sohead1->addMeta(*Someta20);

Someta* Someta21 = new Someta();
Someta21->setName(QString("generator"));
Someta21->setContent(QString("Netbeans https://www.netbeans.org"));
Sohead1->addMeta(*Someta21);

Someta* Someta22 = new Someta();
Someta22->setName(QString("creator"));
Someta22->setContent(QString("Don Brutzman"));
Sohead1->addMeta(*Someta22);

Someta* Someta23 = new Someta();
Someta23->setName(QString("reference"));
Someta23->setContent(QString("https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/stylesheets/java/examples/SmokeTestProgramOutput.x3d"));
Sohead1->addMeta(*Someta23);

Someta* Someta24 = new Someta();
Someta24->setName(QString("reference"));
Someta24->setContent(QString("Console output, ClassicVRML encoding, VRML97 encoding and pretty-print documentation:"));
Sohead1->addMeta(*Someta24);

Someta* Someta25 = new Someta();
Someta25->setName(QString("reference"));
Someta25->setContent(QString("SmokeTestProgramOutput.txt"));
Sohead1->addMeta(*Someta25);

Someta* Someta26 = new Someta();
Someta26->setName(QString("reference"));
Someta26->setContent(QString("SmokeTestProgramOutput.x3dv"));
Sohead1->addMeta(*Someta26);

Someta* Someta27 = new Someta();
Someta27->setName(QString("reference"));
Someta27->setContent(QString("SmokeTestProgramOutput.wrl"));
Sohead1->addMeta(*Someta27);

Someta* Someta28 = new Someta();
Someta28->setName(QString("reference"));
Someta28->setContent(QString("SmokeTestProgramOutput.html"));
Sohead1->addMeta(*Someta28);

Someta* Someta29 = new Someta();
Someta29->setName(QString("reference"));
Someta29->setContent(QString("https://savage.nps.edu/X3dValidator?url=https://www.web3d.org/specifications/java/examples/SmokeTestProgramOutput.x3d"));
Sohead1->addMeta(*Someta29);

Someta* Someta30 = new Someta();
Someta30->setName(QString("identifier"));
Someta30->setContent(QString("https://www.web3d.org/specifications/java/examples/SmokeTestProgramOutput.x3d"));
Sohead1->addMeta(*Someta30);

Someta* Someta31 = new Someta();
Someta31->setName(QString("license"));
Someta31->setContent(QString("../license.html"));
Sohead1->addMeta(*Someta31);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode32 = new SoNode();
SoViewpointGroup* SoViewpointGroup33 = new SoViewpointGroup();
SoViewpointGroup33->setDescription(QString("Available viewpoints"));
SoViewpoint* SoViewpoint34 = new SoViewpoint();
SoViewpoint34->setDEF(QString("DefaultView"));
SoViewpoint34->setDescription(QString("Hello X3DJSAIL"));
SoNavigationInfo* SoNavigationInfo35 = new SoNavigationInfo();
SoNavigationInfo35->setDEF(QString("ViewpointChildNavigationInfo"));
SoViewpoint34->setNavigationInfo(*SoNavigationInfo35);

SoViewpointGroup33->addChildren(*SoViewpoint34);

SoViewpoint* SoViewpoint36 = new SoViewpoint();
SoViewpoint36->setDEF(QString("TopDownView"));
SoViewpoint36->setDescription(QString("top-down view from above"));
SoViewpoint36->setOrientation(new float[]{1.0,0.0,0.0,-1.5708});
SoViewpoint36->setPosition(new float[]{0.0,100.0,0.0});
SoViewpointGroup33->addChildren(*SoViewpoint36);

SoNode32->addChild(*SoViewpointGroup33);

SoNavigationInfo* SoNavigationInfo37 = new SoNavigationInfo();
SoNavigationInfo37->setType(new QString[]{QString("EXAMINE"), QString("FLY"), QString("ANY")}, 3);
SoNode32->addChild(*SoNavigationInfo37);

SoWorldInfo* SoWorldInfo38 = new SoWorldInfo();
SoWorldInfo38->setDEF(QString("WorldInfoDEF"));
SoWorldInfo38->setCssClass(QString("worldInfoNode.class"));
SoWorldInfo38->setStyle(QString("worldInfoNode.style"));
SoWorldInfo38->setTitle(QString("SmokeTestProgram produced by X3D Java SAI Library (X3DJSAIL)"));
SoNode32->addChild(*SoWorldInfo38);

SoWorldInfo* SoWorldInfo39 = new SoWorldInfo();
SoWorldInfo39->setUSE(QString("WorldInfoDEF"));
SoNode32->addChild(*SoWorldInfo39);

SoWorldInfo* SoWorldInfo40 = new SoWorldInfo();
SoWorldInfo40->setUSE(QString("WorldInfoDEF"));
SoNode32->addChild(*SoWorldInfo40);

SoMetadataString* SoMetadataString41 = new SoMetadataString();
SoMetadataString41->X3DNode::setName(QString("test"));
SoMetadataString41->setDEF(QString("scene.addChildMetadata"));
SoMetadataString41->setValue(new QString[]{QString("Top-level root Metadata node beneath Scene needs to be one of '-children' in JSON encoding")}, 1);
SoNode32->addMetadata(SoMetadataString41);

SoLayerSet* SoLayerSet42 = new SoLayerSet();
SoLayerSet42->setDEF(QString("scene.addChildLayerSetTest"));
SoNode32->addChild(*SoLayerSet42);

SoTransform* SoTransform43 = new SoTransform();
SoTransform43->setDEF(QString("LogoGeometryTransform"));
SoTransform43->setTranslation(new float[]{0.0,1.5,0.0});
SoAnchor* SoAnchor44 = new SoAnchor();
SoAnchor44->setDEF(QString("siteAnchor"));
SoAnchor44->setDescription(QString("select for X3D Java SAI Library (X3DJSAIL) description"));
SoAnchor44->setUrl(new QString[]{QString("../X3DJSAIL.html"), QString("https://www.web3d.org/specifications/java/X3DJSAIL.html")}, 2);
SoShape* SoShape45 = new SoShape();
SoShape45->setDEF(QString("BoxShape"));
SoVRMLAppearance* SoVRMLAppearance46 = new SoVRMLAppearance();
SoMaterial* SoMaterial47 = new SoMaterial();
SoMaterial47->setDEF(QString("GreenMaterial"));
SoMaterial47->setDiffuseColor(new float[]{0.0,1.0,1.0});
SoMaterial47->setEmissiveColor(new float[]{0.8,0.0,0.0});
SoMaterial47->setTransparency(0.1);
SoVRMLAppearance46->addChild(*SoMaterial47);

SoImageTexture* SoImageTexture48 = new SoImageTexture();
SoImageTexture48->setUrl(new QString[]{QString("images/X3dJavaSceneAccessInterfaceSaiLibrary.png"), QString("https://www.web3d.org/specifications/java/examples/images/X3dJavaSceneAccessInterfaceSaiLibrary.png")}, 2);
SoVRMLAppearance46->addChild(*SoImageTexture48);

SoShape45->addChild(*SoVRMLAppearance46);

SoBox* SoBox49 = new SoBox();
SoBox49->setDEF(QString("test-NMTOKEN_regex.0123456789"));
SoBox49->setCssClass(QString("untextured"));
SoShape45->setGeometry(*SoBox49);

SoAnchor44->addChild(*SoShape45);

SoTransform43->addChild(*SoAnchor44);

SoNode32->addChild(*SoTransform43);

SoShape* SoShape50 = new SoShape();
SoShape50->setDEF(QString("LineShape"));
SoVRMLAppearance* SoVRMLAppearance51 = new SoVRMLAppearance();
SoMaterial* SoMaterial52 = new SoMaterial();
SoMaterial52->setEmissiveColor(new float[]{0.6,0.1961,0.8});
SoVRMLAppearance51->addChild(*SoMaterial52);

SoShape50->addChild(*SoVRMLAppearance51);

SoIndexedLineSet* SoIndexedLineSet53 = new SoIndexedLineSet();
SoIndexedLineSet53->setCoordIndex(new int32_t[]{0,1,2,3,4,0}, 6);
//Coordinate 3-tuple point count: 6
SoCoordinate* SoCoordinate54 = new SoCoordinate();
SoCoordinate54->setPoint(new float[]{0.0,1.5,0.0,2.0,1.5,0.0,2.0,1.5,-2.0,-2.0,1.5,-2.0,-2.0,1.5,0.0,0.0,1.5,0.0}, 18);
SoIndexedLineSet53->setCoord(*SoCoordinate54);

SoShape50->setGeometry(*SoIndexedLineSet53);

SoNode32->addChild(*SoShape50);

SoPositionInterpolator* SoPositionInterpolator55 = new SoPositionInterpolator();
SoPositionInterpolator55->setDEF(QString("BoxPathAnimator"));
SoPositionInterpolator55->setKey(new float[]{0.0,0.125,0.375,0.625,0.875,1.0}, 6);
SoPositionInterpolator55->setKeyValue(new float[]{0.0,1.5,0.0,2.0,1.5,0.0,2.0,1.5,-2.0,-2.0,1.5,-2.0,-2.0,1.5,0.0,0.0,1.5,0.0}, 18);
SoNode32->addChild(*SoPositionInterpolator55);

SoTimeSensor* SoTimeSensor56 = new SoTimeSensor();
SoTimeSensor56->setDEF(QString("OrbitClock"));
SoTimeSensor56->setCycleInterval(8);
SoTimeSensor56->setLoop(true);
SoNode32->addChild(*SoTimeSensor56);

SoROUTE* SoROUTE57 = new SoROUTE();
SoROUTE57->setFromField(QString("fraction_changed"));
SoROUTE57->setFromNode(QString("OrbitClock"));
SoROUTE57->setToField(QString("set_fraction"));
SoROUTE57->setToNode(QString("BoxPathAnimator"));
SoNode32->addChild(*SoROUTE57);

SoROUTE* SoROUTE58 = new SoROUTE();
SoROUTE58->setFromField(QString("value_changed"));
SoROUTE58->setFromNode(QString("BoxPathAnimator"));
SoROUTE58->setToField(QString("set_translation"));
SoROUTE58->setToNode(QString("LogoGeometryTransform"));
SoNode32->addChild(*SoROUTE58);

SoTransform* SoTransform59 = new SoTransform();
SoTransform59->setDEF(QString("TextTransform"));
SoTransform59->setTranslation(new float[]{0.0,-1.5,0.0});
SoShape* SoShape60 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance61 = new SoVRMLAppearance();
SoMaterial* SoMaterial62 = new SoMaterial();
SoMaterial62->setUSE(QString("GreenMaterial"));
SoVRMLAppearance61->addChild(*SoMaterial62);

SoShape60->addChild(*SoVRMLAppearance61);

SoText* SoText63 = new SoText();
SoText63->setString(new QString[]{QString("X3D Java"), QString("SAI Library"), QString("X3DJSAIL")}, 3);
//Comment example A, plain quotation marks: He said, \"Immel did it!\"
//Comment example B, XML character entities: He said, &quot;Immel did it!&quot;
SoMetadataSet* SoMetadataSet64 = new SoMetadataSet();
SoMetadataSet64->X3DNode::setName(QString("EscapedQuotationMarksMetadataSet"));
SoMetadataString* SoMetadataString65 = new SoMetadataString();
SoMetadataString65->X3DNode::setName(QString("quotesTestC"));
SoMetadataString65->setValue(new QString[]{QString("MFString example C, backslash-escaped quotes: He said, \"Immel did it!\"")}, 1);
SoMetadataSet64->setValue((X3DNode *)&SoMetadataString65);

SoMetadataString* SoMetadataString66 = new SoMetadataString();
SoMetadataString66->X3DNode::setName(QString("extraChildTest"));
SoMetadataString66->setValue(new QString[]{QString("checks MetadataSet addValue() method")}, 1);
SoMetadataSet64->setValue((X3DNode *)&SoMetadataString66);

SoText63->setMetadata(*SoMetadataSet64);

SoFontStyle* SoFontStyle67 = new SoFontStyle();
SoFontStyle67->setJustify(new QString[]{QString("MIDDLE"), QString("MIDDLE")}, 2);
SoText63->setFontStyle(*SoFontStyle67);

SoShape60->setGeometry(*SoText63);

SoTransform59->addChild(*SoShape60);

SoCollision* SoCollision68 = new SoCollision();
//test containerField='proxy'
SoShape* SoShape69 = new SoShape();
SoShape69->setDEF(QString("ProxyShape"));
//alternative XML encoding: Text string='\"One, Two, Comment\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\"'
//alternative XML encoding: Text string='\"One, Two, Comment\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\" \"\"'
//alternative Java source: .setString(new String [] {\"One, Two, Comment\", \"\", \"He said, \\\"\"Immel did it!\\\"\"\"})
//reference: https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/StringArrayEncodingExamplesIndex.html
SoText* SoText70 = new SoText();
SoText70->setString(new QString[]{QString("One, Two, Text"), QString("He said, \"Immel did it!\" \"\"")}, 2);
SoShape69->setGeometry(*SoText70);

SoCollision68->addChildren(SoShape69);

SoTransform59->addChild(*SoCollision68);

//It's a beautiful world
//... for you!
//https://en.wikipedia.org/wiki/Beautiful_World_(Devo_song)
SoNode32->addChild(*SoTransform59);

//repeatedly spin 180 degrees as a readable special effect
SoOrientationInterpolator* SoOrientationInterpolator71 = new SoOrientationInterpolator();
SoOrientationInterpolator71->setDEF(QString("SpinInterpolator"));
SoOrientationInterpolator71->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator71->setKeyValue(new float[]{0.0,1.0,0.0,4.7124,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.5708}, 12);
SoNode32->addChild(*SoOrientationInterpolator71);

SoTimeSensor* SoTimeSensor72 = new SoTimeSensor();
SoTimeSensor72->setDEF(QString("SpinClock"));
SoTimeSensor72->setCycleInterval(5);
SoTimeSensor72->setLoop(true);
SoNode32->addChild(*SoTimeSensor72);

SoROUTE* SoROUTE73 = new SoROUTE();
SoROUTE73->setFromField(QString("fraction_changed"));
SoROUTE73->setFromNode(QString("SpinClock"));
SoROUTE73->setToField(QString("set_fraction"));
SoROUTE73->setToNode(QString("SpinInterpolator"));
SoNode32->addChild(*SoROUTE73);

SoROUTE* SoROUTE74 = new SoROUTE();
SoROUTE74->setFromField(QString("value_changed"));
SoROUTE74->setFromNode(QString("SpinInterpolator"));
SoROUTE74->setToField(QString("rotation"));
SoROUTE74->setToNode(QString("TextTransform"));
SoNode32->addChild(*SoROUTE74);

SoGroup* SoGroup75 = new SoGroup();
SoGroup75->setDEF(QString("BackgroundGroup"));
SoBackground* SoBackground76 = new SoBackground();
SoBackground76->setDEF(QString("GradualBackground"));
SoGroup75->addChild(*SoBackground76);

SoScript* SoScript77 = new SoScript();
SoScript77->setDEF(QString("colorTypeConversionScript"));
Sofield* Sofield78 = new Sofield();
Sofield78->setName(QString("colorInput"));
Sofield78->setAccessType(QString("inputOnly"));
Sofield78->setType(QString("SFColor"));
SoScript77->addChild(*Sofield78);

Sofield* Sofield79 = new Sofield();
Sofield79->setName(QString("colorsOutput"));
Sofield79->setAccessType(QString("outputOnly"));
Sofield79->setType(QString("MFColor"));
SoScript77->addChild(*Sofield79);


//SoScript77->setSourceCode(QString("ecmascript:")+
//_T("function colorInput (eventValue) // Example source code")+
//_T("{")+
//_T("   colorsOutput = new MFColor(eventValue); // assigning value sends output event")+
//_T("// Browser.print('colorInput=' + eventValue + ',")+
//_T("//                colorsOutput=' + colorsOutput + '")+
//_T("');")+
//_T("// TODO check line wrapping when exporting/converting")+
//_T("}"));
SoGroup75->addChild(*SoScript77);

SoColorInterpolator* SoColorInterpolator80 = new SoColorInterpolator();
SoColorInterpolator80->setDEF(QString("ColorAnimator"));
SoColorInterpolator80->setKey(new float[]{0.0,0.5,1.0}, 3);
SoColorInterpolator80->setKeyValue(new float[]{0.9412,1.0,1.0,0.2941,0.0,0.5098,0.9412,1.0,1.0}, 9);
//AZURE to INDIGO and back again
SoGroup75->addChild(*SoColorInterpolator80);

SoTimeSensor* SoTimeSensor81 = new SoTimeSensor();
SoTimeSensor81->setDEF(QString("ColorClock"));
SoTimeSensor81->setCycleInterval(60);
SoTimeSensor81->setLoop(true);
SoGroup75->addChild(*SoTimeSensor81);

SoROUTE* SoROUTE82 = new SoROUTE();
SoROUTE82->setFromField(QString("colorsOutput"));
SoROUTE82->setFromNode(QString("colorTypeConversionScript"));
SoROUTE82->setToField(QString("skyColor"));
SoROUTE82->setToNode(QString("GradualBackground"));
SoGroup75->addChild(*SoROUTE82);

SoROUTE* SoROUTE83 = new SoROUTE();
SoROUTE83->setFromField(QString("value_changed"));
SoROUTE83->setFromNode(QString("ColorAnimator"));
SoROUTE83->setToField(QString("colorInput"));
SoROUTE83->setToNode(QString("colorTypeConversionScript"));
SoGroup75->addChild(*SoROUTE83);

SoROUTE* SoROUTE84 = new SoROUTE();
SoROUTE84->setFromField(QString("fraction_changed"));
SoROUTE84->setFromNode(QString("ColorClock"));
SoROUTE84->setToField(QString("set_fraction"));
SoROUTE84->setToNode(QString("ColorAnimator"));
SoGroup75->addChild(*SoROUTE84);

SoNode32->addChild(*SoGroup75);

SoProtoDeclare* SoProtoDeclare85 = new SoProtoDeclare();
SoProtoDeclare85->setName(QString("ArtDeco01"));
SoProtoDeclare85->setAppinfo(QString("tooltip: ArtDeco01Material prototype is a Material node"));
SoProtoInterface* SoProtoInterface86 = new SoProtoInterface();
Sofield* Sofield87 = new Sofield();
Sofield87->setName(QString("description"));
Sofield87->setAccessType(QString("inputOutput"));
Sofield87->setAppinfo(QString("tooltip for descriptionField"));
Sofield87->setType(QString("SFString"));
Sofield87->setValue(QString("ArtDeco01Material prototype is a Material node"));
SoProtoInterface86->addChild(*Sofield87);

Sofield* Sofield88 = new Sofield();
Sofield88->setName(QString("enabled"));
Sofield88->setAccessType(QString("inputOutput"));
Sofield88->setType(QString("SFBool"));
Sofield88->setValue(QString("true"));
SoProtoInterface86->addChild(*Sofield88);

SoProtoDeclare85->addChild(*SoProtoInterface86);

SoProtoBody* SoProtoBody89 = new SoProtoBody();
//Initial node of ProtoBody determines prototype node type
SoMaterial* SoMaterial90 = new SoMaterial();
SoMaterial90->setAmbientIntensity(0.25);
SoMaterial90->setDiffuseColor(new float[]{0.2824,0.0852,0.1345});
SoMaterial90->setShininess(0.1273);
SoMaterial90->setSpecularColor(new float[]{0.2763,0.1143,0.1399});
SoProtoBody89->addChild(*SoMaterial90);

//[SmokeTestProgram diagnostic] should be connected to scene graph: artDeco01ProtoDeclare.getNodeType()=\"Material\"
//presence of follow-on TouchSensor shows that additional nodes are allowed in ProtoBody after initial node, regardless of node types
SoTouchSensor* SoTouchSensor91 = new SoTouchSensor();
SoTouchSensor91->setDescription(QString("within ProtoBody"));
SoIS* SoIS92 = new SoIS();
Soconnect* Soconnect93 = new Soconnect();
Soconnect93->setNodeField(QString("description"));
Soconnect93->setProtoField(QString("description"));
SoIS92->addChild(*Soconnect93);

Soconnect* Soconnect94 = new Soconnect();
Soconnect94->setNodeField(QString("enabled"));
Soconnect94->setProtoField(QString("enabled"));
SoIS92->addChild(*Soconnect94);

SoTouchSensor91->addChild(*SoIS92);

SoProtoBody89->addChild(*SoTouchSensor91);

SoProtoDeclare85->addChild(*SoProtoBody89);

SoNode32->addChild(*SoProtoDeclare85);

SoExternProtoDeclare* SoExternProtoDeclare95 = new SoExternProtoDeclare();
SoExternProtoDeclare95->setName(QString("ArtDeco02"));
SoExternProtoDeclare95->setAppinfo(QString("this is a different Material node"));
SoExternProtoDeclare95->setUrl(new QString[]{QString("https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3d#ArtDeco02"), QString("https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3dv#ArtDeco02")}, 2);
//[SmokeTestProgram diagnostic] artDeco02ExternProtoDeclare.getNodeType()=\"ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02' type cannot be remotely accessed at run time. TODO X3DJSAIL needs to add further capability that retrieves the ExternProtoDeclare file.\"
Sofield* Sofield96 = new Sofield();
Sofield96->setName(QString("description"));
Sofield96->setAccessType(QString("inputOutput"));
Sofield96->setAppinfo(QString("tooltip for descriptionField"));
Sofield96->setType(QString("SFString"));
SoExternProtoDeclare95->addChild(*Sofield96);

SoNode32->addChild(*SoExternProtoDeclare95);

//Tested ArtDeco01ProtoInstance, ArtDeco02ProtoInstance for improper node type when ProtoInstance is added in wrong place
SoShape* SoShape97 = new SoShape();
SoShape97->setDEF(QString("TestShape1"));
SoVRMLAppearance* SoVRMLAppearance98 = new SoVRMLAppearance();
SoVRMLAppearance98->setDEF(QString("TestAppearance1"));
//ArtDeco01Material prototype goes here...
SoProtoInstance* SoProtoInstance99 = new SoProtoInstance();
SoProtoInstance99->setName(QString("ArtDeco01"));
//[SmokeTestProgram diagnostic] ArtDeco01ProtoInstance.getNodeType()=\"Material\"
SoField* SoField100 = new SoField();
SoField100->setName(QString("description"));
SoField100->setValue(QString("ArtDeco01Material can substitute for a Material node"));
SoProtoInstance99->addChild(*SoField100);

SoVRMLAppearance98->addChild(*SoProtoInstance99);

SoShape97->addChild(*SoVRMLAppearance98);

SoSphere* SoSphere101 = new SoSphere();
SoSphere101->setRadius(0.001);
SoShape97->setGeometry(*SoSphere101);

SoNode32->addChild(*SoShape97);

SoShape* SoShape102 = new SoShape();
SoShape102->setDEF(QString("TestShape2"));
SoVRMLAppearance* SoVRMLAppearance103 = new SoVRMLAppearance();
SoVRMLAppearance103->setDEF(QString("TestAppearance2"));
//ArtDeco02Material ProtoInstance goes here...
SoProtoInstance* SoProtoInstance104 = new SoProtoInstance();
SoProtoInstance104->setName(QString("ArtDeco02"));
SoProtoInstance104->setDEF(QString("ArtDeco02MaterialDEF"));
//[SmokeTestProgram diagnostic] ArtDeco02ProtoInstance.getNodeType()=\"ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02' type cannot be remotely accessed at run time. TODO X3DJSAIL needs to add further capability that retrieves the ExternProtoDeclare file.\"
SoVRMLAppearance103->addChild(*SoProtoInstance104);

SoShape102->addChild(*SoVRMLAppearance103);

SoCone* SoCone105 = new SoCone();
SoCone105->setBottomRadius(0.001);
SoCone105->setHeight(0.001);
SoShape102->setGeometry(*SoCone105);

SoNode32->addChild(*SoShape102);

SoShape* SoShape106 = new SoShape();
SoShape106->setDEF(QString("TestShape3"));
SoVRMLAppearance* SoVRMLAppearance107 = new SoVRMLAppearance();
SoVRMLAppearance107->setDEF(QString("TestAppearance3"));
//ArtDeco02Material ProtoInstance USE goes here. Note that name field is REQUIRED as part of ProtoInstance USE.
SoProtoInstance* SoProtoInstance108 = new SoProtoInstance();
SoProtoInstance108->setName(QString("ArtDeco02"));
SoProtoInstance108->setUSE(QString("ArtDeco02MaterialDEF"));
SoVRMLAppearance107->addChild(*SoProtoInstance108);

SoShape106->addChild(*SoVRMLAppearance107);

SoCylinder* SoCylinder109 = new SoCylinder();
SoCylinder109->setHeight(0.001);
SoCylinder109->setRadius(0.001);
SoShape106->setGeometry(*SoCylinder109);

SoNode32->addChild(*SoShape106);

SoInline* SoInline110 = new SoInline();
SoInline110->setDEF(QString("inlineScene"));
SoInline110->setUrl(new QString[]{QString("newScene.x3d"), QString("https://www.web3d.org/specifications/java/examples/newScene.x3d")}, 2);
SoNode32->addChild(*SoInline110);

SoIMPORT* SoIMPORT111 = new SoIMPORT();
SoIMPORT111->setAS(QString("WorldInfoDEF2"));
SoIMPORT111->setImportedDEF(QString("WorldInfoDEF"));
SoIMPORT111->setInlineDEF(QString("inlineScene"));
SoNode32->addChild(*SoIMPORT111);

SoEXPORT* SoEXPORT112 = new SoEXPORT();
SoEXPORT112->setAS(QString("WorldInfoDEF3"));
SoEXPORT112->setLocalDEF(QString("WorldInfoDEF"));
SoNode32->addChild(*SoEXPORT112);

SoProtoDeclare* SoProtoDeclare113 = new SoProtoDeclare();
SoProtoDeclare113->setName(QString("MaterialModulator"));
SoProtoDeclare113->setAppinfo(QString("mimic a Material node and modulate fields as an animation effect"));
SoProtoDeclare113->setDocumentation(QString("https://x3dgraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/MaterialModulatorIndex.html"));
SoProtoInterface* SoProtoInterface114 = new SoProtoInterface();
Sofield* Sofield115 = new Sofield();
Sofield115->setName(QString("enabled"));
Sofield115->setAccessType(QString("inputOutput"));
Sofield115->setType(QString("SFBool"));
Sofield115->setValue(QString("true"));
SoProtoInterface114->addChild(*Sofield115);

Sofield* Sofield116 = new Sofield();
Sofield116->setName(QString("diffuseColor"));
Sofield116->setAccessType(QString("inputOutput"));
Sofield116->setType(QString("SFColor"));
Sofield116->setValue(QString("0 0 0"));
SoProtoInterface114->addChild(*Sofield116);

Sofield* Sofield117 = new Sofield();
Sofield117->setName(QString("emissiveColor"));
Sofield117->setAccessType(QString("inputOutput"));
Sofield117->setType(QString("SFColor"));
Sofield117->setValue(QString("0.05 0.05 0.5"));
SoProtoInterface114->addChild(*Sofield117);

Sofield* Sofield118 = new Sofield();
Sofield118->setName(QString("specularColor"));
Sofield118->setAccessType(QString("inputOutput"));
Sofield118->setType(QString("SFColor"));
Sofield118->setValue(QString("0 0 0"));
SoProtoInterface114->addChild(*Sofield118);

Sofield* Sofield119 = new Sofield();
Sofield119->setName(QString("transparency"));
Sofield119->setAccessType(QString("inputOutput"));
Sofield119->setType(QString("SFFloat"));
Sofield119->setValue(QString("0"));
SoProtoInterface114->addChild(*Sofield119);

Sofield* Sofield120 = new Sofield();
Sofield120->setName(QString("shininess"));
Sofield120->setAccessType(QString("inputOutput"));
Sofield120->setType(QString("SFFloat"));
Sofield120->setValue(QString("0"));
SoProtoInterface114->addChild(*Sofield120);

Sofield* Sofield121 = new Sofield();
Sofield121->setName(QString("ambientIntensity"));
Sofield121->setAccessType(QString("inputOutput"));
Sofield121->setType(QString("SFFloat"));
Sofield121->setValue(QString("0"));
SoProtoInterface114->addChild(*Sofield121);

SoProtoDeclare113->addChild(*SoProtoInterface114);

SoProtoBody* SoProtoBody122 = new SoProtoBody();
SoMaterial* SoMaterial123 = new SoMaterial();
SoMaterial123->setDEF(QString("MaterialNode"));
SoIS* SoIS124 = new SoIS();
Soconnect* Soconnect125 = new Soconnect();
Soconnect125->setNodeField(QString("diffuseColor"));
Soconnect125->setProtoField(QString("diffuseColor"));
SoIS124->addChild(*Soconnect125);

Soconnect* Soconnect126 = new Soconnect();
Soconnect126->setNodeField(QString("emissiveColor"));
Soconnect126->setProtoField(QString("emissiveColor"));
SoIS124->addChild(*Soconnect126);

Soconnect* Soconnect127 = new Soconnect();
Soconnect127->setNodeField(QString("specularColor"));
Soconnect127->setProtoField(QString("specularColor"));
SoIS124->addChild(*Soconnect127);

Soconnect* Soconnect128 = new Soconnect();
Soconnect128->setNodeField(QString("transparency"));
Soconnect128->setProtoField(QString("transparency"));
SoIS124->addChild(*Soconnect128);

Soconnect* Soconnect129 = new Soconnect();
Soconnect129->setNodeField(QString("shininess"));
Soconnect129->setProtoField(QString("shininess"));
SoIS124->addChild(*Soconnect129);

Soconnect* Soconnect130 = new Soconnect();
Soconnect130->setNodeField(QString("ambientIntensity"));
Soconnect130->setProtoField(QString("ambientIntensity"));
SoIS124->addChild(*Soconnect130);

SoMaterial123->addChild(*SoIS124);

SoProtoBody122->addChild(*SoMaterial123);

//Only first node (the node type for the prototype) is renderable, others are along for the ride
SoScript* SoScript131 = new SoScript();
SoScript131->setDEF(QString("MaterialModulatorScript"));
Sofield* Sofield132 = new Sofield();
Sofield132->setName(QString("enabled"));
Sofield132->setAccessType(QString("inputOutput"));
Sofield132->setType(QString("SFBool"));
SoScript131->addChild(*Sofield132);

Sofield* Sofield133 = new Sofield();
Sofield133->setName(QString("diffuseColor"));
Sofield133->setAccessType(QString("inputOutput"));
Sofield133->setType(QString("SFColor"));
SoScript131->addChild(*Sofield133);

Sofield* Sofield134 = new Sofield();
Sofield134->setName(QString("newColor"));
Sofield134->setAccessType(QString("outputOnly"));
Sofield134->setType(QString("SFColor"));
SoScript131->addChild(*Sofield134);

Sofield* Sofield135 = new Sofield();
Sofield135->setName(QString("clockTrigger"));
Sofield135->setAccessType(QString("inputOnly"));
Sofield135->setType(QString("SFTime"));
SoScript131->addChild(*Sofield135);

SoIS* SoIS136 = new SoIS();
Soconnect* Soconnect137 = new Soconnect();
Soconnect137->setNodeField(QString("enabled"));
Soconnect137->setProtoField(QString("enabled"));
SoIS136->addChild(*Soconnect137);

Soconnect* Soconnect138 = new Soconnect();
Soconnect138->setNodeField(QString("diffuseColor"));
Soconnect138->setProtoField(QString("diffuseColor"));
SoIS136->addChild(*Soconnect138);

SoScript131->addChild(*SoIS136);


//SoScript131->setSourceCode(QString("ecmascript:")+
//_T("function initialize ()")+
//_T("{")+
//_T("    newColor = diffuseColor; // start with correct color")+
//_T("}")+
//_T("function set_enabled (newValue)")+
//_T("{")+
//_T("	enabled = newValue;")+
//_T("}")+
//_T("function clockTrigger (timeValue)")+
//_T("{")+
//_T("    if (!enabled) return;")+
//_T("    red   = newColor.r;")+
//_T("    green = newColor.g;")+
//_T("    blue  = newColor.b;")+
//_T("    // note different modulation rates for each color component, % is modulus operator")+
//_T("    newColor = new SFColor ((red + 0.02) % 1, (green + 0.03) % 1, (blue + 0.04) % 1);")+
//_T("	if (enabled)")+
//_T("	{")+
//_T("		Browser.print ('diffuseColor=(' + red + ',' + green + ',' + blue + ') newColor=' + newColor.toString() + '\\n');")+
//_T("	}")+
//_T("}"));
SoProtoBody122->addChild(*SoScript131);

SoProtoDeclare113->addChild(*SoProtoBody122);

SoNode32->addChild(*SoProtoDeclare113);

//Test success: declarative statement createDeclarativeShapeTests()
SoGroup* SoGroup139 = new SoGroup();
SoGroup139->setDEF(QString("DeclarativeGroupExample"));
SoShape* SoShape140 = new SoShape();
SoMetadataString* SoMetadataString141 = new SoMetadataString();
SoMetadataString141->X3DNode::setName(QString("findThisNameValue"));
SoMetadataString141->setDEF(QString("FindableMetadataStringTest"));
SoMetadataString141->setValue(new QString[]{QString("test case")}, 1);
SoShape140->setValue(SoMetadataString141);

SoVRMLAppearance* SoVRMLAppearance142 = new SoVRMLAppearance();
SoVRMLAppearance142->setDEF(QString("DeclarativeAppearanceExample"));
//DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance
SoProtoInstance* SoProtoInstance143 = new SoProtoInstance();
SoProtoInstance143->setName(QString("MaterialModulator"));
SoProtoInstance143->setDEF(QString("MyMaterialModulator"));
SoVRMLAppearance142->addChild(*SoProtoInstance143);

SoShape140->addChild(*SoVRMLAppearance142);

SoCone* SoCone144 = new SoCone();
SoCone144->setBottom(false);
SoCone144->setBottomRadius(0.05);
SoCone144->setHeight(0.1);
SoShape140->setGeometry(*SoCone144);

SoGroup139->addChild(*SoShape140);

//Test success: declarativeGroup.addChild() singleton pipeline method
SoNode32->addChild(*SoGroup139);

//Test success: declarative statement addChild()
//Test success: x3dModel.findNodeByDEF(DeclarativeAppearanceExample) = <Appearance DEF='DeclarativeAppearanceExample'/> i.e. <Appearance DEF='DeclarativeAppearanceExample'> <!- - DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance - -> <ProtoInstance DEF='MyMaterialModulator' containerField='material' name='MaterialModulator'/> </Appearance>
//Test success: x3dModel.findElementByNameValue(findThisNameValue) = <MetadataString DEF='FindableMetadataStringTest' name='findThisNameValue' value='\"test case\"'/>
//Test success: x3dModel.findElementByNameValue(\"ArtDeco01\", \"ProtoDeclare\") found
//Test success: x3dModel.findElementByNameValue(\"MaterialModulator\", \"ProtoDeclare\") found
//Test success: x3dModel.findElementByNameValue(\"MaterialModulator\", \"ProtoInstance\") found
SoGroup* SoGroup145 = new SoGroup();
SoGroup145->setDEF(QString("TestFieldObjectsGroup"));
//testFieldObjects() results
//SFBool default=false, true=true, false=false, negate()=true
//MFBool default=, initial=true false true, negate()=false true false
//SFFloat default=0.0, initial=1, setValue(2)=2, setValue(3.0f)=3, setValue(4.0)=4
//MFFloat default=, initial=1 2 3, append(5)=1 2 3 5, inserts(3,4)(0,0)=0 1 2 3 4 5, append(6)=0 1 2 3 4 5 6, size()=7
//... get1Value[3]=3.0, remove[1]=0 2 3 4 5 6, set1Value(0,10)=10 2 3 4 5 6, multiply(2)=20 4 6 8 10 12, clear=
//SFVec3f default=0 0 0, initial=1 2 3, setValue=4 5 6, multiply(2)=8 10 12, normalize()=0.4558 0.5698 0.6838, regex matches()=true
//regex test SFVec3f().matches(\"1 2 3\")=true, regex test SFVec3f().matches(\"1 2 3 4\")=false, regex test (SFRotation.matches(\"0 0 0 0\")=true, failure detecting illegal (zero axis) rotation value
SoNode32->addChild(*SoGroup145);

SoSound* SoSound146 = new SoSound();
SoSound146->setLocation(new float[]{0.0,1.6,0.0});
//set sound-ellipsoid location height at 1.6m to match typical avatar height
SoAudioClip* SoAudioClip147 = new SoAudioClip();
SoAudioClip147->setDescription(QString("chimes"));
SoAudioClip147->setUrl(new QString[]{QString("chimes.wav"), QString("https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/chimes.wav")}, 2);
//Scene example fragment from https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/default.x3d
SoSound146->setSource(*SoAudioClip147);

SoNode32->addChild(*SoSound146);

SoSound* SoSound148 = new SoSound();
SoSound148->setLocation(new float[]{0.0,1.6,0.0});
//set sound-ellipsoid location height at 1.6m to match typical avatar height
SoMovieTexture* SoMovieTexture149 = new SoMovieTexture();
SoMovieTexture149->setDescription(QString("mpgsys.mpg from ConformanceNist suite"));
SoMovieTexture149->setUrl(new QString[]{QString("mpgsys.mpg"), QString("https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpgsys.mpg")}, 2);
//Scene example fragment from https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpeg1-systems.x3d
//Expected containerField='source', allowed containerField values=\"texture\" \"source\" \"back\" \"bottom\" \"front\" \"left\" \"right\" \"top\" \"backTexture\" \"bottomTexture\" \"frontTexture\" \"leftTexture\" \"rightTexture\" \"topTexture\" \"children\"
SoSound148->setSource(SoMovieTexture149);

SoNode32->addChild(*SoSound148);

//Test success: Anchor.isNode()=true, siteAnchor.isNode()=true
//Test success: Anchor.isStatement()=false, siteAnchor.isStatement()=false
//Test success: ROUTE.isNode()=false, orbitPositionROUTE.isNode()=false
//Test success: ROUTE.isStatement()=true, orbitPositionROUTE.isStatement()=true
//Test success: CommentsBlock.isNode()=false, testComments.isNode()=false
//Test failure: CommentsBlock.isStatement()=true, testComments.isStatement()=true
SoShape* SoShape150 = new SoShape();
SoShape150->setDEF(QString("ExtrusionShape"));
//ExampleExtrusion isCrossSectionClosed()=true, crossSection='[1.0, 1.0, 1.0, -1.0, -1.0, -1.0, -1.0, 1.0, 1.0, 1.0]'
//ExampleExtrusion isSpineClosed()=false, spine='[0.0, 0.0, 0.0, 0.0, 1.0, 0.0]'
SoVRMLAppearance* SoVRMLAppearance151 = new SoVRMLAppearance();
SoVRMLAppearance151->setDEF(QString("TransparentAppearance"));
SoMaterial* SoMaterial152 = new SoMaterial();
SoMaterial152->setTransparency(1);
SoVRMLAppearance151->addChild(*SoMaterial152);

SoShape150->addChild(*SoVRMLAppearance151);

SoExtrusion* SoExtrusion153 = new SoExtrusion();
SoExtrusion153->setDEF(QString("ExampleExtrusion"));
SoShape150->setGeometry(*SoExtrusion153);

SoNode32->addChild(*SoShape150);

SoGroup* SoGroup154 = new SoGroup();
//Test MFNode children array as an ordered list consisting of comments, statements, ProtoInstance and nodes
SoProtoDeclare* SoProtoDeclare155 = new SoProtoDeclare();
SoProtoDeclare155->setName(QString("NewWorldInfo"));
SoProtoInterface* SoProtoInterface156 = new SoProtoInterface();
Sofield* Sofield157 = new Sofield();
Sofield157->setName(QString("description"));
Sofield157->setAccessType(QString("initializeOnly"));
Sofield157->setType(QString("SFString"));
SoProtoInterface156->addChild(*Sofield157);

SoProtoDeclare155->addChild(*SoProtoInterface156);

SoProtoBody* SoProtoBody158 = new SoProtoBody();
SoWorldInfo* SoWorldInfo159 = new SoWorldInfo();
SoProtoBody158->addChild(*SoWorldInfo159);

SoProtoDeclare155->addChild(*SoProtoBody158);

SoGroup154->addChild(*SoProtoDeclare155);

SoProtoInstance* SoProtoInstance160 = new SoProtoInstance();
SoProtoInstance160->setName(QString("NewWorldInfo"));
SoProtoInstance160->setDEF(QString("Proto1"));
SoField* SoField161 = new SoField();
SoField161->setName(QString("description"));
SoField161->setValue(QString("testing 1 2 3"));
SoProtoInstance160->addChild(*SoField161);

SoGroup154->addChild(*SoProtoInstance160);

SoGroup* SoGroup162 = new SoGroup();
SoGroup162->setDEF(QString("Node2"));
//intentionally empty
SoGroup154->addChild(*SoGroup162);

SoProtoInstance* SoProtoInstance163 = new SoProtoInstance();
SoProtoInstance163->setName(QString("NewWorldInfo"));
SoProtoInstance163->setDEF(QString("Proto3"));
SoGroup154->addChild(*SoProtoInstance163);

SoTransform* SoTransform164 = new SoTransform();
SoTransform164->setDEF(QString("Node4"));
//intentionally empty
SoGroup154->addChild(*SoTransform164);

//Test satisfactorily creates MFNode children array as an ordered list with mixed content
SoNode32->addChild(*SoGroup154);

SoProtoDeclare* SoProtoDeclare165 = new SoProtoDeclare();
SoProtoDeclare165->setName(QString("ShaderProto"));
SoProtoBody* SoProtoBody166 = new SoProtoBody();
SoProgramShader* SoProgramShader167 = new SoProgramShader();
SoProtoBody166->addChild(*SoProgramShader167);

SoProtoDeclare165->addChild(*SoProtoBody166);

SoNode32->addChild(*SoProtoDeclare165);

SoShape* SoShape168 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance169 = new SoVRMLAppearance();
//Test MFNode shaders array as an ordered list consisting of comments, ProtoInstance and nodes
//Test satisfactorily creates MFNode shaders array as an ordered list with mixed content
SoProgramShader* SoProgramShader170 = new SoProgramShader();
SoProgramShader170->setDEF(QString("TestShader1"));
SoShaderProgram* SoShaderProgram171 = new SoShaderProgram();
SoShaderProgram171->setDEF(QString("TestShader2"));
SoShaderProgram171->setType(QString("VERTEX"));
SoProgramShader170->addPrograms(SoShaderProgram171);

SoVRMLAppearance169->addChild(*SoProgramShader170);

SoProtoInstance* SoProtoInstance172 = new SoProtoInstance();
SoProtoInstance172->setName(QString("ShaderProto"));
SoProtoInstance172->setDEF(QString("TestShader3"));
SoVRMLAppearance169->addChild(*SoProtoInstance172);

SoComposedShader* SoComposedShader173 = new SoComposedShader();
SoComposedShader173->setDEF(QString("TestShader4"));
SoShaderPart* SoShaderPart174 = new SoShaderPart();
SoShaderPart174->setDEF(QString("TestShader5"));
SoShaderPart174->setType(QString("VERTEX"));
SoComposedShader173->setParts(*SoShaderPart174);

SoVRMLAppearance169->addChild(*SoComposedShader173);

SoShape168->addChild(*SoVRMLAppearance169);

SoNode32->addChild(*SoShape168);

SoTransform* SoTransform175 = new SoTransform();
SoTransform175->setDEF(QString("SpecialtyNodes"));
SoCADLayer* SoCADLayer176 = new SoCADLayer();
SoCADAssembly* SoCADAssembly177 = new SoCADAssembly();
SoCADPart* SoCADPart178 = new SoCADPart();
SoCADFace* SoCADFace179 = new SoCADFace();
SoCADPart178->addChildren(SoCADFace179);

SoCADAssembly177->X3DGroupingNode::addChild(static_cast<X3DGroupingNode*>(*SoCADPart178));

SoCADLayer176->addChildren(SoCADAssembly177);

SoTransform175->addChild(*SoCADLayer176);

SoEspduTransform* SoEspduTransform180 = new SoEspduTransform();
SoTransform175->addChild(*SoEspduTransform180);

SoReceiverPdu* SoReceiverPdu181 = new SoReceiverPdu();
SoTransform175->addChild(*SoReceiverPdu181);

SoSignalPdu* SoSignalPdu182 = new SoSignalPdu();
SoTransform175->addChild(*SoSignalPdu182);

SoTransmitterPdu* SoTransmitterPdu183 = new SoTransmitterPdu();
SoTransform175->addChild(*SoTransmitterPdu183);

SoDISEntityManager* SoDISEntityManager184 = new SoDISEntityManager();
SoDISEntityTypeMapping* SoDISEntityTypeMapping185 = new SoDISEntityTypeMapping();
SoDISEntityManager184->setMapping(*SoDISEntityTypeMapping185);

SoTransform175->addChild(*SoDISEntityManager184);

SoNode32->addChild(*SoTransform175);

SoEspduTransform* SoEspduTransform186 = new SoEspduTransform();
SoWorldInfo* SoWorldInfo187 = new SoWorldInfo();
SoEspduTransform186->addChildren(*SoWorldInfo187);

SoNode32->addChild(*SoEspduTransform186);

SoReceiverPdu* SoReceiverPdu188 = new SoReceiverPdu();
SoNode32->addChild(*SoReceiverPdu188);

SoSignalPdu* SoSignalPdu189 = new SoSignalPdu();
SoNode32->addChild(*SoSignalPdu189);

SoTransmitterPdu* SoTransmitterPdu190 = new SoTransmitterPdu();
SoNode32->addChild(*SoTransmitterPdu190);

SoDISEntityManager* SoDISEntityManager191 = new SoDISEntityManager();
SoDISEntityTypeMapping* SoDISEntityTypeMapping192 = new SoDISEntityTypeMapping();
SoDISEntityManager191->setMapping(*SoDISEntityTypeMapping192);

SoNode32->addChild(*SoDISEntityManager191);

SoLoadSensor* SoLoadSensor193 = new SoLoadSensor();
//Contained nodes typically must be USE references for nodes previously DEFined in the scene
//The following nodes are test cases for all X3DUrlObject nodes
SoAnchor* SoAnchor194 = new SoAnchor();
SoAnchor194->setUSE(QString("siteAnchor"));
SoLoadSensor193->addChildren(SoAnchor194);

SoInline* SoInline195 = new SoInline();
SoInline195->setUSE(QString("inlineScene"));
SoLoadSensor193->addChildren(SoInline195);

SoDISEntityTypeMapping* SoDISEntityTypeMapping196 = new SoDISEntityTypeMapping();
SoLoadSensor193->addChildren(SoDISEntityTypeMapping196);

SoGeoMetadata* SoGeoMetadata197 = new SoGeoMetadata();
SoLoadSensor193->addChildren(SoGeoMetadata197);

SoAudioClip* SoAudioClip198 = new SoAudioClip();
SoLoadSensor193->addChildren(SoAudioClip198);

SoImageCubeMapTexture* SoImageCubeMapTexture199 = new SoImageCubeMapTexture();
SoLoadSensor193->addChildren(SoImageCubeMapTexture199);

SoImageTexture3D* SoImageTexture3D200 = new SoImageTexture3D();
SoLoadSensor193->addChildren(SoImageTexture3D200);

SoImageTexture* SoImageTexture201 = new SoImageTexture();
SoLoadSensor193->addChildren(SoImageTexture201);

SoMovieTexture* SoMovieTexture202 = new SoMovieTexture();
SoLoadSensor193->addChildren(SoMovieTexture202);

SoScript* SoScript203 = new SoScript();
SoScript203->setDEF(QString("DummyScript"));

//SoScript203->setSourceCode(QString("ecmascript:")+
//_T("/* dummy test source code */"));
SoLoadSensor193->addChildren(*SoScript203);

SoPackagedShader* SoPackagedShader204 = new SoPackagedShader();
SoLoadSensor193->addChildren(SoPackagedShader204);

SoShaderPart* SoShaderPart205 = new SoShaderPart();
SoShaderPart205->setType(QString("VERTEX"));
SoLoadSensor193->addChildren(*SoShaderPart205);

SoShaderProgram* SoShaderProgram206 = new SoShaderProgram();
SoShaderProgram206->setType(QString("VERTEX"));
SoLoadSensor193->addChildren(SoShaderProgram206);

SoNode32->addChild(*SoLoadSensor193);

SoOrthoViewpoint* SoOrthoViewpoint207 = new SoOrthoViewpoint();
SoOrthoViewpoint207->setDEF(QString("SpecialTestOrthoViewpoint"));
SoOrthoViewpoint207->setFieldOfView(new float[]{1.0,3.0,2.0,4.0}, 4);
SoNode32->addChild(*SoOrthoViewpoint207);

SoSceneManager0->setSceneGraph(*SoNode32);

return 0;
}
