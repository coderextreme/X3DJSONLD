/* delete next 5 lines for Visual Studio */
#define FALSE false
#define TRUE true
#define WINAPI
#define AFX_EXT_CLASS
#define EXPORT32
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/CylinderExample/pch.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/CylinderExample/framework.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/XML_PARSER.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/X3DLib.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/Abstracts.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/Concretes.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/glMath.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/glut.h"
int main(int argc, char ** argv) {
X3D* X3D0 = new X3D();
X3D0->setProfile("Immersive");
X3D0->setVersion("3.3");
head* head1 = new head();
meta* meta2 = new meta();
meta2->setName("title");
meta2->setContent("ViewFrustumPrototype.x3d");
head1->addMeta(meta2);

meta* meta3 = new meta();
meta3->setName("description");
meta3->setContent("Define a view frustum associated with a given pair of Viewpoint and NavigationInfo nodes, provided as a reusable prototype.");
head1->addMeta(meta3);

meta* meta4 = new meta();
meta4->setName("creator");
meta4->setContent("Don Brutzman");
head1->addMeta(meta4);

meta* meta5 = new meta();
meta5->setName("translated");
meta5->setContent("16 August 2008");
head1->addMeta(meta5);

meta* meta6 = new meta();
meta6->setName("modified");
meta6->setContent("20 October 2019");
head1->addMeta(meta6);

meta* meta7 = new meta();
meta7->setName("reference");
meta7->setContent("ViewFrustumExample.x3d");
head1->addMeta(meta7);

meta* meta8 = new meta();
meta8->setName("drawing");
meta8->setContent("ViewFrustumComputation.png");
head1->addMeta(meta8);

meta* meta9 = new meta();
meta9->setName("Image");
meta9->setContent("ViewFrustumOverheadView.png");
head1->addMeta(meta9);

meta* meta10 = new meta();
meta10->setName("Image");
meta10->setContent("ViewFrustumObliqueView.png");
head1->addMeta(meta10);

meta* meta11 = new meta();
meta11->setName("subject");
meta11->setContent("view culling frustum");
head1->addMeta(meta11);

meta* meta12 = new meta();
meta12->setName("identifier");
meta12->setContent("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ViewFrustumPrototype.x3d");
head1->addMeta(meta12);

meta* meta13 = new meta();
meta13->setName("generator");
meta13->setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
head1->addMeta(meta13);

meta* meta14 = new meta();
meta14->setName("license");
meta14->setContent("../license.html");
head1->addMeta(meta14);

X3D0->setHead(head1);

Scene* Scene15 = new Scene();
WorldInfo* WorldInfo16 = new WorldInfo();
WorldInfo16->setTitle("ViewFrustumPrototype.x3d");
Scene15->addChild(WorldInfo16);

ProtoDeclare* ProtoDeclare17 = new ProtoDeclare();
ProtoDeclare17->setName("ViewFrustum");
ProtoDeclare17->setAppinfo("Display view frustum associated with a given pair of Viewpoint NavigationInfo nodes");
ProtoInterface* ProtoInterface18 = new ProtoInterface();
field* field19 = new field();
field19->setName("ViewpointNode");
field19->setAccessType("initializeOnly");
field19->setAppinfo("required: insert Viewpoint DEF or USE node for view of interest");
field19->setType("SFNode");
//NULL node, ProtoInstance must provide
ProtoInterface18->addField(field19);

field* field20 = new field();
field20->setName("NavigationInfoNode");
field20->setAccessType("initializeOnly");
field20->setAppinfo("required: insert NavigationInfo DEF or USE node of interest");
field20->setType("SFNode");
//NULL node, ProtoInstance must provide
ProtoInterface18->addField(field20);

field* field21 = new field();
field21->setName("visible");
field21->setAccessType("inputOutput");
field21->setAppinfo("whether or not frustum geometry is rendered");
field21->setType("SFBool");
field21->setValue("true");
ProtoInterface18->addField(field21);

field* field22 = new field();
field22->setName("lineColor");
field22->setAccessType("inputOutput");
field22->setAppinfo("RGB color of ViewFrustum outline, default value 0.9 0.9 0.9");
field22->setType("SFColor");
field22->setValue("0.9 0.9 0.9");
ProtoInterface18->addField(field22);

field* field23 = new field();
field23->setName("frustumColor");
field23->setAccessType("inputOutput");
field23->setAppinfo("RGB color of ViewFrustum hull geometry, default value 0.8 0.8 0.8");
field23->setType("SFColor");
field23->setValue("0.8 0.8 0.8");
ProtoInterface18->addField(field23);

field* field24 = new field();
field24->setName("transparency");
field24->setAccessType("inputOutput");
field24->setAppinfo("transparency of ViewFrustum hull geometry, default value 0.5");
field24->setType("SFFloat");
field24->setValue("0.5");
ProtoInterface18->addField(field24);

field* field25 = new field();
field25->setName("aspectRatio");
field25->setAccessType("inputOutput");
field25->setAppinfo("assumed ratio height/width, default value 0.75");
field25->setType("SFFloat");
field25->setValue("0.75");
ProtoInterface18->addField(field25);

field* field26 = new field();
field26->setName("trace");
field26->setAccessType("initializeOnly");
field26->setAppinfo("debug support, default false");
field26->setType("SFBool");
field26->setValue("false");
ProtoInterface18->addField(field26);

ProtoDeclare17->setProtoInterface(ProtoInterface18);

ProtoBody* ProtoBody27 = new ProtoBody();
Switch* Switch28 = new Switch();
Switch28->setDEF("VisibilitySwitch");
Switch28->setWhichChoice(-1);
Transform* Transform29 = new Transform();
Transform29->setDEF("PositionTransform");
Transform29->setRotation(new float[4]{0,1,0,3.14159});
Transform* Transform30 = new Transform();
Transform30->setDEF("OrientationTransform");
Shape* Shape31 = new Shape();
IndexedLineSet* IndexedLineSet32 = new IndexedLineSet();
IndexedLineSet32->setDEF("FrustumLines");
IndexedLineSet32->setCoordIndex(new int[24]{0,1,2,3,0,-1,4,5,6,7,4,-1,0,4,-1,1,5,-1,2,6,-1,3,7,-1});
Coordinate* Coordinate33 = new Coordinate();
Coordinate33->setDEF("FrustumCoordinate");
Coordinate33->setPoint(new float[24]{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0});
IndexedLineSet32->setCoord(Coordinate33);

Shape31->setGeometry(IndexedLineSet32);

Appearance* Appearance34 = new Appearance();
Material* Material35 = new Material();
IS* IS36 = new IS();
Connect* connect37 = new Connect();
connect37->setNodeField("emissiveColor");
connect37->setProtoField("lineColor");
IS36->addConnect(connect37);

Material35->setIS(IS36);

Appearance34->setMaterial(Material35);

Shape31->setAppearance(Appearance34);

Transform30->addChild(Shape31);

Shape* Shape38 = new Shape();
Extrusion* Extrusion39 = new Extrusion();
Extrusion39->setDEF("FrustumExtrusion");
Shape38->setGeometry(Extrusion39);

Appearance* Appearance40 = new Appearance();
Appearance40->setDEF("FrustumAppearance");
Material* Material41 = new Material();
IS* IS42 = new IS();
Connect* connect43 = new Connect();
connect43->setNodeField("diffuseColor");
connect43->setProtoField("frustumColor");
IS42->addConnect(connect43);

Connect* connect44 = new Connect();
connect44->setNodeField("transparency");
connect44->setProtoField("transparency");
IS42->addConnect(connect44);

Material41->setIS(IS42);

Appearance40->setMaterial(Material41);

Shape38->setAppearance(Appearance40);

Transform30->addChild(Shape38);

Shape* Shape45 = new Shape();
Sphere* Sphere46 = new Sphere();
Sphere46->setRadius(0.08);
Shape45->setGeometry(Sphere46);

Appearance* Appearance47 = new Appearance();
Appearance47->setUSE("FrustumAppearance");
Shape45->setAppearance(Appearance47);

Transform30->addChild(Shape45);

Transform29->addChild(Transform30);

Switch28->addChild(Transform29);

ProtoBody27->addChild(Switch28);

Script* Script48 = new Script();
Script48->setDEF("GeometryComputationScript");
Script48->setDirectOutput(True);
Script48->setUrl(new String[1]{"ViewFrustumPrototypeScript.js"}, 1);
field* field49 = new field();
field49->setName("visible");
field49->setAccessType("inputOutput");
field49->setAppinfo("Whether or not frustum geometry is rendered");
field49->setType("SFBool");
Script48->addField(field49);

field* field50 = new field();
field50->setName("visibilitySwitchSelection");
field50->setAccessType("outputOnly");
field50->setAppinfo("Adjust Switch selection to make geometry visible or not");
field50->setType("SFInt32");
Script48->addField(field50);

field* field51 = new field();
field51->setName("ViewpointNode");
field51->setAccessType("initializeOnly");
field51->setType("SFNode");
//initialization node (if any) goes here
Script48->addField(field51);

field* field52 = new field();
field52->setName("NavigationInfoNode");
field52->setAccessType("initializeOnly");
field52->setType("SFNode");
//initialization node (if any) goes here
Script48->addField(field52);

field* field53 = new field();
field53->setName("FrustumCoordinate");
field53->setAccessType("initializeOnly");
field53->setType("SFNode");
Coordinate* Coordinate54 = new Coordinate();
Coordinate54->setUSE("FrustumCoordinate");
field53->addChild(Coordinate54);

Script48->addField(field53);

field* field55 = new field();
field55->setName("FrustumExtrusion");
field55->setAccessType("initializeOnly");
field55->setType("SFNode");
Extrusion* Extrusion56 = new Extrusion();
Extrusion56->setUSE("FrustumExtrusion");
field55->addChild(Extrusion56);

Script48->addField(field55);

field* field57 = new field();
field57->setName("recompute");
field57->setAccessType("inputOnly");
field57->setType("SFBool");
Script48->addField(field57);

field* field58 = new field();
field58->setName("aspectRatio");
field58->setAccessType("inputOutput");
field58->setAppinfo("assumed ratio height/width");
field58->setType("SFFloat");
Script48->addField(field58);

field* field59 = new field();
field59->setName("position_changed");
field59->setAccessType("outputOnly");
field59->setType("SFVec3f");
Script48->addField(field59);

field* field60 = new field();
field60->setName("orientation_changed");
field60->setAccessType("outputOnly");
field60->setType("SFRotation");
Script48->addField(field60);

field* field61 = new field();
field61->setName("spine_changed");
field61->setAccessType("outputOnly");
field61->setType("MFVec3f");
Script48->addField(field61);

field* field62 = new field();
field62->setName("scale_changed");
field62->setAccessType("outputOnly");
field62->setType("MFVec2f");
Script48->addField(field62);

field* field63 = new field();
field63->setName("point_changed");
field63->setAccessType("outputOnly");
field63->setType("MFVec3f");
Script48->addField(field63);

field* field64 = new field();
field64->setName("trace");
field64->setAccessType("initializeOnly");
field64->setType("SFBool");
Script48->addField(field64);

IS* IS65 = new IS();
Connect* connect66 = new Connect();
connect66->setNodeField("visible");
connect66->setProtoField("visible");
IS65->addConnect(connect66);

Connect* connect67 = new Connect();
connect67->setNodeField("ViewpointNode");
connect67->setProtoField("ViewpointNode");
IS65->addConnect(connect67);

Connect* connect68 = new Connect();
connect68->setNodeField("NavigationInfoNode");
connect68->setProtoField("NavigationInfoNode");
IS65->addConnect(connect68);

Connect* connect69 = new Connect();
connect69->setNodeField("aspectRatio");
connect69->setProtoField("aspectRatio");
IS65->addConnect(connect69);

Connect* connect70 = new Connect();
connect70->setNodeField("trace");
connect70->setProtoField("trace");
IS65->addConnect(connect70);

Script48->setIS(IS65);

ProtoBody27->addChild(Script48);

ROUTE* ROUTE71 = new ROUTE();
ROUTE71->setFromField("visibilitySwitchSelection");
ROUTE71->setFromNode("GeometryComputationScript");
ROUTE71->setToField("whichChoice");
ROUTE71->setToNode("VisibilitySwitch");
ProtoBody27->addChild(ROUTE71);

ROUTE* ROUTE72 = new ROUTE();
ROUTE72->setFromField("position_changed");
ROUTE72->setFromNode("GeometryComputationScript");
ROUTE72->setToField("translation");
ROUTE72->setToNode("PositionTransform");
ProtoBody27->addChild(ROUTE72);

ROUTE* ROUTE73 = new ROUTE();
ROUTE73->setFromField("orientation_changed");
ROUTE73->setFromNode("GeometryComputationScript");
ROUTE73->setToField("rotation");
ROUTE73->setToNode("OrientationTransform");
ProtoBody27->addChild(ROUTE73);

ROUTE* ROUTE74 = new ROUTE();
ROUTE74->setFromField("spine_changed");
ROUTE74->setFromNode("GeometryComputationScript");
ROUTE74->setToField("set_spine");
ROUTE74->setToNode("FrustumExtrusion");
ProtoBody27->addChild(ROUTE74);

ROUTE* ROUTE75 = new ROUTE();
ROUTE75->setFromField("scale_changed");
ROUTE75->setFromNode("GeometryComputationScript");
ROUTE75->setToField("set_scale");
ROUTE75->setToNode("FrustumExtrusion");
ProtoBody27->addChild(ROUTE75);

ROUTE* ROUTE76 = new ROUTE();
ROUTE76->setFromField("point_changed");
ROUTE76->setFromNode("GeometryComputationScript");
ROUTE76->setToField("point");
ROUTE76->setToNode("FrustumCoordinate");
ProtoBody27->addChild(ROUTE76);

ProtoDeclare17->setProtoBody(ProtoBody27);

Scene15->addChild(ProtoDeclare17);

//Example use is in separate scene
Anchor* Anchor77 = new Anchor();
Anchor77->setDescription("ViewFrustum Example");
Anchor77->setUrl(new String[1]{"ViewFrustumExample.x3d"}, 1);
Shape* Shape78 = new Shape();
Appearance* Appearance79 = new Appearance();
Material* Material80 = new Material();
Material80->setDiffuseColor(new float[3]{0.8,0.4,0});
Appearance79->setMaterial(Material80);

Shape78->setAppearance(Appearance79);

Text* Text81 = new Text();
Text81->setString(new String[5]{"ViewFrustumPrototype.x3d","is a Prototype declaration file.","For an example scene using the prototype,","click this text and view","ViewFrustumExample.x3d"}, 5);
FontStyle* FontStyle82 = new FontStyle();
FontStyle82->setJustify(new String[2]{"MIDDLE","MIDDLE"}, 2);
FontStyle82->setSize(0.8);
Text81->setFontStyle(FontStyle82);

Shape78->setGeometry(Text81);

Anchor77->addChild(Shape78);

Scene15->addChild(Anchor77);

X3D0->setScene(Scene15);

X3D0->toXMLString();
}
