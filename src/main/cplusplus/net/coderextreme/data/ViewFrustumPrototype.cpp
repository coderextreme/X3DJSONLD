#ifdef WIN32
#define FALSE false
#define TRUE true
#define WINAPI
#define AFX_EXT_CLASS
#define EXPORT32
#endif
#define False false
#define True true
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/SphereExample/SphereExample/pch.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/SphereExample/SphereExample/framework.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/SphereExample/include/XML_PARSER.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/SphereExample/include/X3DLib.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/SphereExample/include/glMath.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/SphereExample/include/glut.h"
int main(int argc, char ** argv) {
X3D* X3D0 = new X3D();
X3D0->setProfile(CString("Immersive"));
X3D0->setVersion(CString("3.3"));
head* head1 = new head();
meta* meta2 = new meta();
meta2->setName(CString("title"));
meta2->setContent(CString("ViewFrustumPrototype.x3d"));
head1->addMeta(meta2);

meta* meta3 = new meta();
meta3->setName(CString("description"));
meta3->setContent(CString("Define a view frustum associated with a given pair of Viewpoint and NavigationInfo nodes, provided as a reusable prototype."));
head1->addMeta(meta3);

meta* meta4 = new meta();
meta4->setName(CString("creator"));
meta4->setContent(CString("Don Brutzman"));
head1->addMeta(meta4);

meta* meta5 = new meta();
meta5->setName(CString("translated"));
meta5->setContent(CString("16 August 2008"));
head1->addMeta(meta5);

meta* meta6 = new meta();
meta6->setName(CString("modified"));
meta6->setContent(CString("20 October 2019"));
head1->addMeta(meta6);

meta* meta7 = new meta();
meta7->setName(CString("reference"));
meta7->setContent(CString("ViewFrustumExample.x3d"));
head1->addMeta(meta7);

meta* meta8 = new meta();
meta8->setName(CString("drawing"));
meta8->setContent(CString("ViewFrustumComputation.png"));
head1->addMeta(meta8);

meta* meta9 = new meta();
meta9->setName(CString("Image"));
meta9->setContent(CString("ViewFrustumOverheadView.png"));
head1->addMeta(meta9);

meta* meta10 = new meta();
meta10->setName(CString("Image"));
meta10->setContent(CString("ViewFrustumObliqueView.png"));
head1->addMeta(meta10);

meta* meta11 = new meta();
meta11->setName(CString("subject"));
meta11->setContent(CString("view culling frustum"));
head1->addMeta(meta11);

meta* meta12 = new meta();
meta12->setName(CString("identifier"));
meta12->setContent(CString("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ViewFrustumPrototype.x3d"));
head1->addMeta(meta12);

meta* meta13 = new meta();
meta13->setName(CString("generator"));
meta13->setContent(CString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"));
head1->addMeta(meta13);

meta* meta14 = new meta();
meta14->setName(CString("license"));
meta14->setContent(CString("../license.html"));
head1->addMeta(meta14);

X3D0->setHead(head1);

Scene* Scene15 = new Scene();
WorldInfo* WorldInfo16 = new WorldInfo();
WorldInfo16->setTitle(CString("ViewFrustumPrototype.x3d"));
Scene15->addChild(WorldInfo16);

ProtoDeclare* ProtoDeclare17 = new ProtoDeclare();
ProtoDeclare17->setName(CString("ViewFrustum"));
ProtoDeclare17->setAppinfo(CString("Display view frustum associated with a given pair of Viewpoint NavigationInfo nodes"));
ProtoInterface* ProtoInterface18 = new ProtoInterface();
field* field19 = new field();
field19->setName(CString("ViewpointNode"));
field19->setAccessType(CString("initializeOnly"));
field19->setAppinfo(CString("required: insert Viewpoint DEF or USE node for view of interest"));
field19->setType(CString("SFNode"));
//NULL node, ProtoInstance must provide
ProtoInterface18->addChild(field19);

field* field20 = new field();
field20->setName(CString("NavigationInfoNode"));
field20->setAccessType(CString("initializeOnly"));
field20->setAppinfo(CString("required: insert NavigationInfo DEF or USE node of interest"));
field20->setType(CString("SFNode"));
//NULL node, ProtoInstance must provide
ProtoInterface18->addChild(field20);

field* field21 = new field();
field21->setName(CString("visible"));
field21->setAccessType(CString("inputOutput"));
field21->setAppinfo(CString("whether or not frustum geometry is rendered"));
field21->setType(CString("SFBool"));
field21->setValue(CString("true"));
ProtoInterface18->addChild(field21);

field* field22 = new field();
field22->setName(CString("lineColor"));
field22->setAccessType(CString("inputOutput"));
field22->setAppinfo(CString("RGB color of ViewFrustum outline, default value 0.9 0.9 0.9"));
field22->setType(CString("SFColor"));
field22->setValue(CString("0.9 0.9 0.9"));
ProtoInterface18->addChild(field22);

field* field23 = new field();
field23->setName(CString("frustumColor"));
field23->setAccessType(CString("inputOutput"));
field23->setAppinfo(CString("RGB color of ViewFrustum hull geometry, default value 0.8 0.8 0.8"));
field23->setType(CString("SFColor"));
field23->setValue(CString("0.8 0.8 0.8"));
ProtoInterface18->addChild(field23);

field* field24 = new field();
field24->setName(CString("transparency"));
field24->setAccessType(CString("inputOutput"));
field24->setAppinfo(CString("transparency of ViewFrustum hull geometry, default value 0.5"));
field24->setType(CString("SFFloat"));
field24->setValue(CString("0.5"));
ProtoInterface18->addChild(field24);

field* field25 = new field();
field25->setName(CString("aspectRatio"));
field25->setAccessType(CString("inputOutput"));
field25->setAppinfo(CString("assumed ratio height/width, default value 0.75"));
field25->setType(CString("SFFloat"));
field25->setValue(CString("0.75"));
ProtoInterface18->addChild(field25);

field* field26 = new field();
field26->setName(CString("trace"));
field26->setAccessType(CString("initializeOnly"));
field26->setAppinfo(CString("debug support, default false"));
field26->setType(CString("SFBool"));
field26->setValue(CString("false"));
ProtoInterface18->addChild(field26);

ProtoDeclare17->addChild(ProtoInterface18);

ProtoBody* ProtoBody27 = new ProtoBody();
Switch* Switch28 = new Switch();
Switch28->setDEF(CString("VisibilitySwitch"));
Switch28->setWhichChoice(-1);
Transform* Transform29 = new Transform();
Transform29->setDEF(CString("PositionTransform"));
Transform29->setRotation(new float[4]{0,1,0,3.14159});
Transform* Transform30 = new Transform();
Transform30->setDEF(CString("OrientationTransform"));
Shape* Shape31 = new Shape();
IndexedLineSet* IndexedLineSet32 = new IndexedLineSet();
IndexedLineSet32->setDEF(CString("FrustumLines"));
IndexedLineSet32->setCoordIndex(new int32_t[24]{0,1,2,3,0,-1,4,5,6,7,4,-1,0,4,-1,1,5,-1,2,6,-1,3,7,-1}, 24);
Coordinate* Coordinate33 = new Coordinate();
Coordinate33->setDEF(CString("FrustumCoordinate"));
Coordinate33->setPoint(new float[24]{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, 24);
IndexedLineSet32->addChild(Coordinate33);

Shape31->setGeometry(IndexedLineSet32);

Appearance* Appearance34 = new Appearance();
Material* Material35 = new Material();
IS* IS36 = new IS();
Connect* connect37 = new Connect();
connect37->setNodeField(CString("emissiveColor"));
connect37->setProtoField(CString("lineColor"));
IS36->addChild(connect37);

Material35->addChild(IS36);

Appearance34->addChild(Material35);

Shape31->addChild(Appearance34);

Transform30->addChild(Shape31);

Shape* Shape38 = new Shape();
Extrusion* Extrusion39 = new Extrusion();
Extrusion39->setDEF(CString("FrustumExtrusion"));
Shape38->setGeometry(Extrusion39);

Appearance* Appearance40 = new Appearance();
Appearance40->setDEF(CString("FrustumAppearance"));
Material* Material41 = new Material();
IS* IS42 = new IS();
Connect* connect43 = new Connect();
connect43->setNodeField(CString("diffuseColor"));
connect43->setProtoField(CString("frustumColor"));
IS42->addChild(connect43);

Connect* connect44 = new Connect();
connect44->setNodeField(CString("transparency"));
connect44->setProtoField(CString("transparency"));
IS42->addChild(connect44);

Material41->addChild(IS42);

Appearance40->addChild(Material41);

Shape38->addChild(Appearance40);

Transform30->addChild(Shape38);

Shape* Shape45 = new Shape();
Sphere* Sphere46 = new Sphere();
Sphere46->setRadius(0.08);
Shape45->setGeometry(Sphere46);

Appearance* Appearance47 = new Appearance();
Appearance47->setUSE(CString("FrustumAppearance"));
Shape45->addChild(Appearance47);

Transform30->addChild(Shape45);

Transform29->addChild(Transform30);

Switch28->addChild(Transform29);

ProtoBody27->addChild(Switch28);

Script* Script48 = new Script();
Script48->setDEF(CString("GeometryComputationScript"));
Script48->setDirectOutput(True);
Script48->setUrl(new CString[1]{CString("ViewFrustumPrototypeScript.js")}, 1);
field* field49 = new field();
field49->setName(CString("visible"));
field49->setAccessType(CString("inputOutput"));
field49->setAppinfo(CString("Whether or not frustum geometry is rendered"));
field49->setType(CString("SFBool"));
Script48->addChild(field49);

field* field50 = new field();
field50->setName(CString("visibilitySwitchSelection"));
field50->setAccessType(CString("outputOnly"));
field50->setAppinfo(CString("Adjust Switch selection to make geometry visible or not"));
field50->setType(CString("SFInt32"));
Script48->addChild(field50);

field* field51 = new field();
field51->setName(CString("ViewpointNode"));
field51->setAccessType(CString("initializeOnly"));
field51->setType(CString("SFNode"));
//initialization node (if any) goes here
Script48->addChild(field51);

field* field52 = new field();
field52->setName(CString("NavigationInfoNode"));
field52->setAccessType(CString("initializeOnly"));
field52->setType(CString("SFNode"));
//initialization node (if any) goes here
Script48->addChild(field52);

field* field53 = new field();
field53->setName(CString("FrustumCoordinate"));
field53->setAccessType(CString("initializeOnly"));
field53->setType(CString("SFNode"));
Coordinate* Coordinate54 = new Coordinate();
Coordinate54->setUSE(CString("FrustumCoordinate"));
field53->addChild(Coordinate54);

Script48->addChild(field53);

field* field55 = new field();
field55->setName(CString("FrustumExtrusion"));
field55->setAccessType(CString("initializeOnly"));
field55->setType(CString("SFNode"));
Extrusion* Extrusion56 = new Extrusion();
Extrusion56->setUSE(CString("FrustumExtrusion"));
field55->addChild(Extrusion56);

Script48->addChild(field55);

field* field57 = new field();
field57->setName(CString("recompute"));
field57->setAccessType(CString("inputOnly"));
field57->setType(CString("SFBool"));
Script48->addChild(field57);

field* field58 = new field();
field58->setName(CString("aspectRatio"));
field58->setAccessType(CString("inputOutput"));
field58->setAppinfo(CString("assumed ratio height/width"));
field58->setType(CString("SFFloat"));
Script48->addChild(field58);

field* field59 = new field();
field59->setName(CString("position_changed"));
field59->setAccessType(CString("outputOnly"));
field59->setType(CString("SFVec3f"));
Script48->addChild(field59);

field* field60 = new field();
field60->setName(CString("orientation_changed"));
field60->setAccessType(CString("outputOnly"));
field60->setType(CString("SFRotation"));
Script48->addChild(field60);

field* field61 = new field();
field61->setName(CString("spine_changed"));
field61->setAccessType(CString("outputOnly"));
field61->setType(CString("MFVec3f"));
Script48->addChild(field61);

field* field62 = new field();
field62->setName(CString("scale_changed"));
field62->setAccessType(CString("outputOnly"));
field62->setType(CString("MFVec2f"));
Script48->addChild(field62);

field* field63 = new field();
field63->setName(CString("point_changed"));
field63->setAccessType(CString("outputOnly"));
field63->setType(CString("MFVec3f"));
Script48->addChild(field63);

field* field64 = new field();
field64->setName(CString("trace"));
field64->setAccessType(CString("initializeOnly"));
field64->setType(CString("SFBool"));
Script48->addChild(field64);

IS* IS65 = new IS();
Connect* connect66 = new Connect();
connect66->setNodeField(CString("visible"));
connect66->setProtoField(CString("visible"));
IS65->addChild(connect66);

Connect* connect67 = new Connect();
connect67->setNodeField(CString("ViewpointNode"));
connect67->setProtoField(CString("ViewpointNode"));
IS65->addChild(connect67);

Connect* connect68 = new Connect();
connect68->setNodeField(CString("NavigationInfoNode"));
connect68->setProtoField(CString("NavigationInfoNode"));
IS65->addChild(connect68);

Connect* connect69 = new Connect();
connect69->setNodeField(CString("aspectRatio"));
connect69->setProtoField(CString("aspectRatio"));
IS65->addChild(connect69);

Connect* connect70 = new Connect();
connect70->setNodeField(CString("trace"));
connect70->setProtoField(CString("trace"));
IS65->addChild(connect70);

Script48->addChild(IS65);

ProtoBody27->addChild(Script48);

ROUTE* ROUTE71 = new ROUTE();
ROUTE71->setFromField(CString("visibilitySwitchSelection"));
ROUTE71->setFromNode(CString("GeometryComputationScript"));
ROUTE71->setToField(CString("whichChoice"));
ROUTE71->setToNode(CString("VisibilitySwitch"));
ProtoBody27->addChild(ROUTE71);

ROUTE* ROUTE72 = new ROUTE();
ROUTE72->setFromField(CString("position_changed"));
ROUTE72->setFromNode(CString("GeometryComputationScript"));
ROUTE72->setToField(CString("translation"));
ROUTE72->setToNode(CString("PositionTransform"));
ProtoBody27->addChild(ROUTE72);

ROUTE* ROUTE73 = new ROUTE();
ROUTE73->setFromField(CString("orientation_changed"));
ROUTE73->setFromNode(CString("GeometryComputationScript"));
ROUTE73->setToField(CString("rotation"));
ROUTE73->setToNode(CString("OrientationTransform"));
ProtoBody27->addChild(ROUTE73);

ROUTE* ROUTE74 = new ROUTE();
ROUTE74->setFromField(CString("spine_changed"));
ROUTE74->setFromNode(CString("GeometryComputationScript"));
ROUTE74->setToField(CString("set_spine"));
ROUTE74->setToNode(CString("FrustumExtrusion"));
ProtoBody27->addChild(ROUTE74);

ROUTE* ROUTE75 = new ROUTE();
ROUTE75->setFromField(CString("scale_changed"));
ROUTE75->setFromNode(CString("GeometryComputationScript"));
ROUTE75->setToField(CString("set_scale"));
ROUTE75->setToNode(CString("FrustumExtrusion"));
ProtoBody27->addChild(ROUTE75);

ROUTE* ROUTE76 = new ROUTE();
ROUTE76->setFromField(CString("point_changed"));
ROUTE76->setFromNode(CString("GeometryComputationScript"));
ROUTE76->setToField(CString("point"));
ROUTE76->setToNode(CString("FrustumCoordinate"));
ProtoBody27->addChild(ROUTE76);

ProtoDeclare17->addChild(ProtoBody27);

Scene15->addChild(ProtoDeclare17);

//Example use is in separate scene
Anchor* Anchor77 = new Anchor();
Anchor77->setDescription(CString("ViewFrustum Example"));
Anchor77->setUrl(new CString[1]{CString("ViewFrustumExample.x3d")}, 1);
Shape* Shape78 = new Shape();
Appearance* Appearance79 = new Appearance();
Material* Material80 = new Material();
Material80->setDiffuseColor(new float[3]{0.8,0.4,0});
Appearance79->addChild(Material80);

Shape78->addChild(Appearance79);

Text* Text81 = new Text();
Text81->setString(new CString[5]{CString("ViewFrustumPrototype.x3d"), CString("is a Prototype declaration file."), CString("For an example scene using the prototype,"), CString("click this text and view"), CString("ViewFrustumExample.x3d")}, 5);
CFontStyle* FontStyle82 = new CFontStyle();
FontStyle82->setJustify(new CString[2]{CString("MIDDLE"), CString("MIDDLE")}, 2);
FontStyle82->setSize(0.8);
Text81->setFontStyle(FontStyle82);

Shape78->setGeometry(Text81);

Anchor77->addChild(Shape78);

Scene15->addChild(Anchor77);

X3D0->setScene(Scene15);

}
