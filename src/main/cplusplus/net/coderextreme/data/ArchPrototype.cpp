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
meta2->setContent("ArchPrototype.x3d");
head1->addMeta(meta2);

meta* meta3 = new meta();
meta3->setName("description");
meta3->setContent("Create an arch. Can modify general parameters: clearSpanWidth, riseHeight, depth, topAbutmentHeight, pierWidth, pierHeight. See the reference file ArchModelingDiagrams.pdf to find further information. See also ArchPrototypeScript_more_readable.js.");
head1->addMeta(meta3);

meta* meta4 = new meta();
meta4->setName("description");
meta4->setContent("Possibility to create shapes related to arch: ArchHalf; IntradosOnly; ArchFilled; ArchHalfFilled; Lintel. See the reference file ArchModelingDiagrams.pdf to find further information.");
head1->addMeta(meta4);

meta* meta5 = new meta();
meta5->setName("creator");
meta5->setContent("Michele Foti, Don Brutzman");
head1->addMeta(meta5);

meta* meta6 = new meta();
meta6->setName("created");
meta6->setContent("15 December 2014");
head1->addMeta(meta6);

meta* meta7 = new meta();
meta7->setName("modified");
meta7->setContent("27 November 2015");
head1->addMeta(meta7);

meta* meta8 = new meta();
meta8->setName("reference");
meta8->setContent("ArchModelingDiagrams.pdf");
head1->addMeta(meta8);

meta* meta9 = new meta();
meta9->setName("reference");
meta9->setContent("https://en.wikipedia.org/wiki/Arch");
head1->addMeta(meta9);

meta* meta10 = new meta();
meta10->setName("identifier");
meta10->setContent("http://X3dGraphics.com/examples/X3dForAdvancedModeling/Buildings/ArchPrototype.x3d");
head1->addMeta(meta10);

meta* meta11 = new meta();
meta11->setName("generator");
meta11->setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
head1->addMeta(meta11);

meta* meta12 = new meta();
meta12->setName("license");
meta12->setContent("../license.html");
head1->addMeta(meta12);

X3D0->setHead(head1);

Scene* Scene13 = new Scene();
ProtoDeclare* ProtoDeclare14 = new ProtoDeclare();
ProtoDeclare14->setName("ArchPrototype");
ProtoDeclare14->setAppinfo("Create an arch. Can modify general parameters: clearSpanWidth, riseHeight, depth, topAbutmentHeight, pierWidth, pierHeight. - Possibility to create shapes related to an arch: ArchHalf; IntradosOnly; ArchFilled; ArchHalfFilled; Lintel. See the reference file ArchModelingDiagrams.pdf to find further information. See also ArchPrototypeScript_more_readable.js.js.");
ProtoInterface* ProtoInterface15 = new ProtoInterface();
//COLOR OF ARCH
//INPUT PARAMETERS
//General parameters: measures in meters
//Parameters to create to create shapes related to arch: put true to apply
field* field16 = new field();
field16->setName("diffuseColor");
field16->setAccessType("inputOutput");
field16->setAppinfo("color of arch");
field16->setType("SFColor");
field16->setValue("0.2 0.8 0.8");
ProtoInterface15->addField(field16);

field* field17 = new field();
field17->setName("emissiveColor");
field17->setAccessType("inputOutput");
field17->setAppinfo("color of arch");
field17->setType("SFColor");
field17->setValue("0.2 0.8 0.8");
ProtoInterface15->addField(field17);

field* field18 = new field();
field18->setName("clearSpanWidth");
field18->setAccessType("initializeOnly");
field18->setAppinfo("clearSpanWidth: clearSpanWidth must be double of riseHeight to obtain an half circumference");
field18->setType("SFFloat");
field18->setValue("4");
ProtoInterface15->addField(field18);

field* field19 = new field();
field19->setName("riseHeight");
field19->setAccessType("initializeOnly");
field19->setAppinfo("riseHeight: riseHeight must be half of clearSpanWidth to obtain an half circumference");
field19->setType("SFFloat");
field19->setValue("2");
ProtoInterface15->addField(field19);

field* field20 = new field();
field20->setName("depth");
field20->setAccessType("initializeOnly");
field20->setAppinfo("depth");
field20->setType("SFFloat");
field20->setValue("3");
ProtoInterface15->addField(field20);

field* field21 = new field();
field21->setName("topAbutmentHeight");
field21->setAccessType("initializeOnly");
field21->setAppinfo("topAbutmentHeight:topAbutmentHeight=0 means no topAbutment");
field21->setType("SFFloat");
field21->setValue("0.5");
ProtoInterface15->addField(field21);

field* field22 = new field();
field22->setName("pierWidth");
field22->setAccessType("initializeOnly");
field22->setAppinfo("pierWidth:pierWidtht=0 means no pierWidth");
field22->setType("SFFloat");
field22->setValue("0.5");
ProtoInterface15->addField(field22);

field* field23 = new field();
field23->setName("pierHeight");
field23->setAccessType("initializeOnly");
field23->setAppinfo("pierHeight: pierHeight=0 means no pierHeight");
field23->setType("SFFloat");
field23->setValue("1");
ProtoInterface15->addField(field23);

field* field24 = new field();
field24->setName("archHalf");
field24->setAccessType("initializeOnly");
field24->setAppinfo("archHalf: can modify also clearSpanWidth, riseHeight, depth, pierWidth, pierHeight, topAbutmentHeight, archHalfExtensionWidth at purpose, clearSpanWidth measure refers to a full arc, consider clearSpanWidth/2 for the archHalf width");
field24->setType("SFBool");
field24->setValue("false");
ProtoInterface15->addField(field24);

field* field25 = new field();
field25->setName("archHalfExtensionWidth");
field25->setAccessType("initializeOnly");
field25->setAppinfo("archHalfExtensionWidth: measure in meters, use only if archHalf=true, it is the width of the etension of the abutment of the archHalf. See the reference file ArchModelingDiagrams.pdf to find further information.");
field25->setType("SFFloat");
field25->setValue("0");
ProtoInterface15->addField(field25);

field* field26 = new field();
field26->setName("onlyIntrados");
field26->setAccessType("initializeOnly");
field26->setAppinfo("onlyIntrados: note it is a flat curved surface, can modify also clearSpanWidth, riseHeight, depth at purpose, if needed apply archHalf=true.");
field26->setType("SFBool");
field26->setValue("false");
ProtoInterface15->addField(field26);

field* field27 = new field();
field27->setName("archFilled");
field27->setAccessType("initializeOnly");
field27->setAppinfo("archFilled: note it is an half cylinder, can modify also clearSpanWidth, riseHeight, depth at purpose.");
field27->setType("SFBool");
field27->setValue("false");
ProtoInterface15->addField(field27);

field* field28 = new field();
field28->setName("archHalfFilled");
field28->setAccessType("initializeOnly");
field28->setAppinfo("archHalfFilled: note it is a quarter cylinder, can modify also clearSpanWidth, riseHeight, depth at purpose, clearSpanWidth measure refers to a full arc, consider clearSpanWidth/2 for the archHalfFilled width.");
field28->setType("SFBool");
field28->setValue("false");
ProtoInterface15->addField(field28);

field* field29 = new field();
field29->setName("lintel");
field29->setAccessType("initializeOnly");
field29->setAppinfo("lintel: no arc is rendered, but a lintel: topAbutmentHeight on pierHeight, total height is pierHeight + topAbutmentHeight, if needed apply archHalf=true.");
field29->setType("SFBool");
field29->setValue("false");
ProtoInterface15->addField(field29);

ProtoDeclare14->setProtoInterface(ProtoInterface15);

ProtoBody* ProtoBody30 = new ProtoBody();
//First node determines node type of this prototype
//IndexedFaceset creates arch
Transform* Transform31 = new Transform();
Transform31->setDEF("ArchTransform");
Shape* Shape32 = new Shape();
Shape32->setDEF("Arch");
//note that convex='false' (meaning concave geometry) is crucial for this IFS of a geometric chord to render properly
IndexedFaceSet* IndexedFaceSet33 = new IndexedFaceSet();
IndexedFaceSet33->setDEF("ArchIndex");
IndexedFaceSet33->setConvex(False);
IndexedFaceSet33->setSolid(False);
Coordinate* Coordinate34 = new Coordinate();
Coordinate34->setDEF("ArchChord");
IndexedFaceSet33->setCoord(Coordinate34);

Shape32->setGeometry(IndexedFaceSet33);

Appearance* Appearance35 = new Appearance();
Material* Material36 = new Material();
Material36->setDEF("MaterialNode");
IS* IS37 = new IS();
Connect* connect38 = new Connect();
connect38->setNodeField("emissiveColor");
connect38->setProtoField("emissiveColor");
IS37->addConnect(connect38);

Connect* connect39 = new Connect();
connect39->setNodeField("diffuseColor");
connect39->setProtoField("diffuseColor");
IS37->addConnect(connect39);

Material36->setIS(IS37);

Appearance35->setMaterial(Material36);

Shape32->setAppearance(Appearance35);

Transform31->addChild(Shape32);

ProtoBody30->addChild(Transform31);

//Subsequent nodes do not render, but still must be a valid X3D subgraph
//This embedded Script provides the X3D author with additional visibility and control over prototype inputs and outputs
Script* Script40 = new Script();
Script40->setDEF("ArchPrototypeScript");
Script40->setUrl(new String[2]{"../node/ArchPrototypeScript.js","https://coderextreme.net/X3DJSONLD/src/main/node/ArchPrototypeScript.js"}, 2);
//INPUT PARAMETERS
//General parameters
//Parameters to create to create shapes related to arch: put true to apply
//OUTPUT PARAMETERS
field* field41 = new field();
field41->setName("clearSpanWidth");
field41->setAccessType("initializeOnly");
field41->setAppinfo("user or default input for clearSpanWidth parameter");
field41->setType("SFFloat");
Script40->addField(field41);

field* field42 = new field();
field42->setName("riseHeight");
field42->setAccessType("initializeOnly");
field42->setAppinfo("user or default input for riseHeight parameter");
field42->setType("SFFloat");
Script40->addField(field42);

field* field43 = new field();
field43->setName("depth");
field43->setAccessType("initializeOnly");
field43->setAppinfo("user or default input for depth parameter");
field43->setType("SFFloat");
Script40->addField(field43);

field* field44 = new field();
field44->setName("topAbutmentHeight");
field44->setAccessType("initializeOnly");
field44->setAppinfo("user or default input for topAbutmentHeight parameter");
field44->setType("SFFloat");
Script40->addField(field44);

field* field45 = new field();
field45->setName("pierWidth");
field45->setAccessType("initializeOnly");
field45->setAppinfo("user or default input for pierWidth parameter");
field45->setType("SFFloat");
Script40->addField(field45);

field* field46 = new field();
field46->setName("pierHeight");
field46->setAccessType("initializeOnly");
field46->setAppinfo("user or default input for pierHeight parameter");
field46->setType("SFFloat");
Script40->addField(field46);

field* field47 = new field();
field47->setName("archHalf");
field47->setAccessType("initializeOnly");
field47->setAppinfo("user or default input for archHalf parameter");
field47->setType("SFBool");
Script40->addField(field47);

field* field48 = new field();
field48->setName("archHalfExtensionWidth");
field48->setAccessType("initializeOnly");
field48->setAppinfo("user or default input for archHalfExtensionWidth parameter");
field48->setType("SFFloat");
Script40->addField(field48);

field* field49 = new field();
field49->setName("onlyIntrados");
field49->setAccessType("initializeOnly");
field49->setAppinfo("user or default input for onlyIntrados parameter");
field49->setType("SFBool");
Script40->addField(field49);

field* field50 = new field();
field50->setName("archFilled");
field50->setAccessType("initializeOnly");
field50->setAppinfo("user or default input for archFilled parameter");
field50->setType("SFBool");
Script40->addField(field50);

field* field51 = new field();
field51->setName("archHalfFilled");
field51->setAccessType("initializeOnly");
field51->setAppinfo("user or default input for archHalfFilled parameter");
field51->setType("SFBool");
Script40->addField(field51);

field* field52 = new field();
field52->setName("lintel");
field52->setAccessType("initializeOnly");
field52->setAppinfo("user or default input for lintel parameter");
field52->setType("SFBool");
Script40->addField(field52);

field* field53 = new field();
field53->setName("computedScale");
field53->setAccessType("outputOnly");
field53->setAppinfo("computedScale: modify scale field - NOTE it is not used to modify the whole arch, but to modify clearSpanWidth, riseHeight, depth. It does not affect topAbutmentHeight, pierWidth, pierHeight, archHalfExtensionWidth");
field53->setType("SFVec3f");
Script40->addField(field53);

field* field54 = new field();
field54->setName("pointOut");
field54->setAccessType("outputOnly");
field54->setAppinfo("send computed points to the Coordinate node");
field54->setType("MFVec3f");
Script40->addField(field54);

field* field55 = new field();
field55->setName("indexOut");
field55->setAccessType("outputOnly");
field55->setAppinfo("send computed indices to the IndexedFaceSet node");
field55->setType("MFInt32");
Script40->addField(field55);

IS* IS56 = new IS();
Connect* connect57 = new Connect();
connect57->setNodeField("clearSpanWidth");
connect57->setProtoField("clearSpanWidth");
IS56->addConnect(connect57);

Connect* connect58 = new Connect();
connect58->setNodeField("riseHeight");
connect58->setProtoField("riseHeight");
IS56->addConnect(connect58);

Connect* connect59 = new Connect();
connect59->setNodeField("depth");
connect59->setProtoField("depth");
IS56->addConnect(connect59);

Connect* connect60 = new Connect();
connect60->setNodeField("pierWidth");
connect60->setProtoField("pierWidth");
IS56->addConnect(connect60);

Connect* connect61 = new Connect();
connect61->setNodeField("topAbutmentHeight");
connect61->setProtoField("topAbutmentHeight");
IS56->addConnect(connect61);

Connect* connect62 = new Connect();
connect62->setNodeField("pierHeight");
connect62->setProtoField("pierHeight");
IS56->addConnect(connect62);

Connect* connect63 = new Connect();
connect63->setNodeField("archHalf");
connect63->setProtoField("archHalf");
IS56->addConnect(connect63);

Connect* connect64 = new Connect();
connect64->setNodeField("archHalfExtensionWidth");
connect64->setProtoField("archHalfExtensionWidth");
IS56->addConnect(connect64);

Connect* connect65 = new Connect();
connect65->setNodeField("onlyIntrados");
connect65->setProtoField("onlyIntrados");
IS56->addConnect(connect65);

Connect* connect66 = new Connect();
connect66->setNodeField("archFilled");
connect66->setProtoField("archFilled");
IS56->addConnect(connect66);

Connect* connect67 = new Connect();
connect67->setNodeField("archHalfFilled");
connect67->setProtoField("archHalfFilled");
IS56->addConnect(connect67);

Connect* connect68 = new Connect();
connect68->setNodeField("lintel");
connect68->setProtoField("lintel");
IS56->addConnect(connect68);

Script40->setIS(IS56);

ProtoBody30->addChild(Script40);

ROUTE* ROUTE69 = new ROUTE();
ROUTE69->setFromField("computedScale");
ROUTE69->setFromNode("ArchPrototypeScript");
ROUTE69->setToField("scale");
ROUTE69->setToNode("ArchTransform");
ProtoBody30->addChild(ROUTE69);

ROUTE* ROUTE70 = new ROUTE();
ROUTE70->setFromField("pointOut");
ROUTE70->setFromNode("ArchPrototypeScript");
ROUTE70->setToField("point");
ROUTE70->setToNode("ArchChord");
ProtoBody30->addChild(ROUTE70);

ROUTE* ROUTE71 = new ROUTE();
ROUTE71->setFromField("indexOut");
ROUTE71->setFromNode("ArchPrototypeScript");
ROUTE71->setToField("set_coordIndex");
ROUTE71->setToNode("ArchIndex");
ProtoBody30->addChild(ROUTE71);

ProtoDeclare14->setProtoBody(ProtoBody30);

Scene13->addChild(ProtoDeclare14);

ProtoInstance* ProtoInstance72 = new ProtoInstance();
ProtoInstance72->setName("ArchPrototype");
ProtoInstance72->setDEF("ArchInstance");
fieldValue* fieldValue73 = new fieldValue();
fieldValue73->setName("diffuseColor");
fieldValue73->setValue("0.5 0.3 0.6");
ProtoInstance72->addFieldValue(fieldValue73);

fieldValue* fieldValue74 = new fieldValue();
fieldValue74->setName("emissiveColor");
fieldValue74->setValue("0.5 0.3 0.6");
ProtoInstance72->addFieldValue(fieldValue74);

fieldValue* fieldValue75 = new fieldValue();
fieldValue75->setName("clearSpanWidth");
fieldValue75->setValue("5");
ProtoInstance72->addFieldValue(fieldValue75);

fieldValue* fieldValue76 = new fieldValue();
fieldValue76->setName("riseHeight");
fieldValue76->setValue("2.5");
ProtoInstance72->addFieldValue(fieldValue76);

fieldValue* fieldValue77 = new fieldValue();
fieldValue77->setName("depth");
fieldValue77->setValue("2");
ProtoInstance72->addFieldValue(fieldValue77);

fieldValue* fieldValue78 = new fieldValue();
fieldValue78->setName("topAbutmentHeight");
fieldValue78->setValue("0.6");
ProtoInstance72->addFieldValue(fieldValue78);

fieldValue* fieldValue79 = new fieldValue();
fieldValue79->setName("pierWidth");
fieldValue79->setValue("1");
ProtoInstance72->addFieldValue(fieldValue79);

fieldValue* fieldValue80 = new fieldValue();
fieldValue80->setName("pierHeight");
fieldValue80->setValue("2");
ProtoInstance72->addFieldValue(fieldValue80);

Scene13->addChild(ProtoInstance72);

//Add any ROUTEs here that connect ProtoInstance to/from prior nodes in Scene (and outside of ProtoDeclare)
Inline* Inline81 = new Inline();
Inline81->setDEF("CoordinateAxes");
Inline81->setUrl(new String[1]{"../data/CoordinateAxes.x3d"}, 1);
Scene13->addChild(Inline81);

X3D0->setScene(Scene13);

X3D0->toXMLString();
}
