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
meta2->setContent("ViewFrustumExample.x3d");
head1->addMeta(meta2);

meta* meta3 = new meta();
meta3->setName("description");
meta3->setContent("Display view frustum associated with a given pair of Viewpoint and NavigationInfo nodes, illustrating ProtoInstance reuse of a separately declared prototype.");
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
meta7->setContent("ViewFrustumPrototype.x3d");
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
meta11->setName("Image");
meta11->setContent("ViewpointCalculator.png");
head1->addMeta(meta11);

meta* meta12 = new meta();
meta12->setName("Image");
meta12->setContent("ViewpointCalculatorComposed.png");
head1->addMeta(meta12);

meta* meta13 = new meta();
meta13->setName("subject");
meta13->setContent("view culling frustum");
head1->addMeta(meta13);

meta* meta14 = new meta();
meta14->setName("identifier");
meta14->setContent("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ViewFrustumExample.x3d");
head1->addMeta(meta14);

meta* meta15 = new meta();
meta15->setName("generator");
meta15->setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
head1->addMeta(meta15);

meta* meta16 = new meta();
meta16->setName("license");
meta16->setContent("../license.html");
head1->addMeta(meta16);

X3D0->setHead(head1);

Scene* Scene17 = new Scene();
WorldInfo* WorldInfo18 = new WorldInfo();
WorldInfo18->setTitle("ViewFrustumExample.x3d");
Scene17->addChild(WorldInfo18);

Viewpoint* Viewpoint19 = new Viewpoint();
Viewpoint19->setDescription("ViewFrustum from above, looking down");
Viewpoint19->setOrientation(new float[4]{1,0,0,-1.57});
Viewpoint19->setPosition(new float[3]{0,40,0});
Scene17->addChild(Viewpoint19);

Viewpoint* Viewpoint20 = new Viewpoint();
Viewpoint20->setDescription("ViewFrustum from point of view");
Scene17->addChild(Viewpoint20);

Viewpoint* Viewpoint21 = new Viewpoint();
Viewpoint21->setDescription("ViewFrustum behind point of view");
Viewpoint21->setPosition(new float[3]{0,0,15});
Scene17->addChild(Viewpoint21);

Viewpoint* Viewpoint22 = new Viewpoint();
Viewpoint22->setDescription("ViewFrustum oblique side view");
Viewpoint22->setOrientation(new float[4]{0.8005,0.5926,0.0898,-0.3743});
Viewpoint22->setPosition(new float[3]{-5,5,20});
Scene17->addChild(Viewpoint22);

NavigationInfo* NavigationInfo23 = new NavigationInfo();
NavigationInfo23->setType(new String[3]{"EXAMINE","FLY","ANY"}, 3);
Scene17->addChild(NavigationInfo23);

ExternProtoDeclare* ExternProtoDeclare24 = new ExternProtoDeclare();
ExternProtoDeclare24->setName("ViewFrustum");
ExternProtoDeclare24->setAppinfo("Display view frustum associated with a given pair of Viewpoint NavigationInfo nodes");
ExternProtoDeclare24->setUrl(new String[1]{"ViewFrustumPrototype.x3d#ViewFrustum"}, 1);
field* field25 = new field();
field25->setName("ViewpointNode");
field25->setAccessType("initializeOnly");
field25->setAppinfo("required: insert Viewpoint DEF or USE node for view of interest");
field25->setType("SFNode");
ExternProtoDeclare24->addField(field25);

field* field26 = new field();
field26->setName("NavigationInfoNode");
field26->setAccessType("initializeOnly");
field26->setAppinfo("required: insert NavigationInfo DEF or USE node of interest");
field26->setType("SFNode");
ExternProtoDeclare24->addField(field26);

field* field27 = new field();
field27->setName("visible");
field27->setAccessType("inputOutput");
field27->setAppinfo("whether or not frustum geometry is rendered");
field27->setType("SFBool");
ExternProtoDeclare24->addField(field27);

field* field28 = new field();
field28->setName("lineColor");
field28->setAccessType("inputOutput");
field28->setAppinfo("RGB color of ViewFrustum outline, default value 0.9 0.9 0.9");
field28->setType("SFColor");
ExternProtoDeclare24->addField(field28);

field* field29 = new field();
field29->setName("frustumColor");
field29->setAccessType("inputOutput");
field29->setAppinfo("RGB color of ViewFrustum hull geometry, default value 0.8 0.8 0.8");
field29->setType("SFColor");
ExternProtoDeclare24->addField(field29);

field* field30 = new field();
field30->setName("transparency");
field30->setAccessType("inputOutput");
field30->setAppinfo("transparency of ViewFrustum hull geometry, default value 0.5");
field30->setType("SFFloat");
ExternProtoDeclare24->addField(field30);

field* field31 = new field();
field31->setName("aspectRatio");
field31->setAccessType("inputOutput");
field31->setAppinfo("assumed ratio height/width, default value 0.75");
field31->setType("SFFloat");
ExternProtoDeclare24->addField(field31);

field* field32 = new field();
field32->setName("trace");
field32->setAccessType("initializeOnly");
field32->setAppinfo("debug support, default false");
field32->setType("SFBool");
ExternProtoDeclare24->addField(field32);

Scene17->addChild(ExternProtoDeclare24);

//Example use
ProtoInstance* ProtoInstance33 = new ProtoInstance();
ProtoInstance33->setName("ViewFrustum");
fieldValue* fieldValue34 = new fieldValue();
fieldValue34->setName("ViewpointNode");
//prefer empty description to prevent entry in player's ViewpointList
Viewpoint* Viewpoint35 = new Viewpoint();
Viewpoint35->setDescription("ViewFrustum ViewpointNode");
fieldValue34->addChild(Viewpoint35);

ProtoInstance33->addFieldValue(fieldValue34);

fieldValue* fieldValue36 = new fieldValue();
fieldValue36->setName("NavigationInfoNode");
NavigationInfo* NavigationInfo37 = new NavigationInfo();
NavigationInfo37->setVisibilityLimit(15);
fieldValue36->addChild(NavigationInfo37);

ProtoInstance33->addFieldValue(fieldValue36);

fieldValue* fieldValue38 = new fieldValue();
fieldValue38->setName("visible");
fieldValue38->setValue("true");
ProtoInstance33->addFieldValue(fieldValue38);

fieldValue* fieldValue39 = new fieldValue();
fieldValue39->setName("lineColor");
fieldValue39->setValue("0.9 0.9 0.9");
ProtoInstance33->addFieldValue(fieldValue39);

fieldValue* fieldValue40 = new fieldValue();
fieldValue40->setName("frustumColor");
fieldValue40->setValue("0.8 0.8 0.8");
ProtoInstance33->addFieldValue(fieldValue40);

fieldValue* fieldValue41 = new fieldValue();
fieldValue41->setName("transparency");
fieldValue41->setValue("0.75");
ProtoInstance33->addFieldValue(fieldValue41);

fieldValue* fieldValue42 = new fieldValue();
fieldValue42->setName("trace");
fieldValue42->setValue("true");
ProtoInstance33->addFieldValue(fieldValue42);

Scene17->addChild(ProtoInstance33);

//Visualization assists
Inline* Inline43 = new Inline();
Inline43->setDEF("GridXZ");
Inline43->setUrl(new String[1]{"GridXZ_20x20Fixed.x3d"}, 1);
Scene17->addChild(Inline43);

Transform* Transform44 = new Transform();
Transform44->setScale(new float[3]{5,5,5});
Inline* Inline45 = new Inline();
Inline45->setDEF("CoordinateAxes");
Inline45->setUrl(new String[1]{"CoordinateAxes.x3d"}, 1);
Transform44->addChild(Inline45);

Scene17->addChild(Transform44);

X3D0->setScene(Scene17);

X3D0->toXMLString();
}
