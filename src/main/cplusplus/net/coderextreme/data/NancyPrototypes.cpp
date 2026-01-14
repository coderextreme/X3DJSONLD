#ifndef WIN32
#define WINAPI
#define AFX_EXT_CLASS
#define EXPORT32
#define WINGDIAPI
#define APIENTRY
#endif
#define FALSE false
#define TRUE true
#define BOOL bool
#define False false
#define True true
#include "C:/Users/jcarl/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
#include "C:/Users/jcarl/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
#include "C:/Users/jcarl/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
#include "C:/Users/jcarl/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
int main(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(CString("Immersive"));
X3D0.setVersion(CString("4.0"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(CString("title"));
meta2.setContent(CString("NancyPrototypes.x3d"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(CString("creator"));
meta3.setContent(CString("Cindy Ballreich"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("translator"));
meta4.setContent(CString("Tom Miller"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("translator"));
meta5.setContent(CString("Don Brutzman"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("created"));
meta6.setContent(CString("9 July 2000"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("modified"));
meta7.setContent(CString("Mon, 15 Sep 2025 05:20:50 GMT"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(CString("description"));
meta8.setContent(CString("Canonical HAnim 1.1 specification example, using ProtoDeclaration and ProtoInstance instead of native X3D tags. Prototype definitions are a compatible combination of version 1.0 and 2.0 prototype interfaces."));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(CString("warning"));
meta9.setContent(CString("using ProtoDeclare is only for developmental experimentation, use X3D native tags for Humanoids instead"));
head1.addMeta(&meta9);

meta& meta10 =  meta();
meta10.setName(CString("reference"));
meta10.setContent(CString("NancyNativeTags.x3d"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(CString("TODO"));
meta11.setContent(CString("Material color of neck and arms is ignored/incorrect in Xj3D, possily DEF/USE problem."));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(CString("identifier"));
meta12.setContent(CString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyPrototypes.x3d"));
head1.addMeta(&meta12);

X3D0.setHead(&head1);

Scene& Scene13 =  Scene();
ProtoDeclare& ProtoDeclare14 =  ProtoDeclare();
ProtoDeclare14.setName(CString("Displacer"));
ProtoDeclare14.setAppinfo(CString("A Displacer can be used in three different ways: (a) identify the vertices corresponding to a particular feature on a Segment (b) represent a particular muscular action which displaces the vertices in various directions (linearly or radially) and (c) represent a complete configuration of the vertices in a Segment."));
ProtoDeclare14.setDocumentation(CString("http://HAnim.org/Specifications/HAnim2001/part1/Displacer.html"));
ProtoInterface& ProtoInterface15 =  ProtoInterface();
field& field16 =  field();
field16.setAccessType(CString("inputOutput"));
field16.setType(CString("SFString"));
field16.setName(CString("name"));
ProtoInterface15.addChild(&field16);

field& field17 =  field();
field17.setAccessType(CString("inputOutput"));
field17.setType(CString("MFInt32"));
field17.setName(CString("coordIndex"));
ProtoInterface15.addChild(&field17);

field& field18 =  field();
field18.setAccessType(CString("inputOutput"));
field18.setType(CString("MFVec3f"));
field18.setName(CString("displacements"));
ProtoInterface15.addChild(&field18);

ProtoDeclare14.addChild(&ProtoInterface15);

ProtoBody& ProtoBody19 =  ProtoBody();
WorldInfo& WorldInfo20 =  WorldInfo();
WorldInfo20.setInfo(new CString[]{CString("null body node")}, 1);
ProtoBody19.addChild(&WorldInfo20);

ProtoDeclare14.addChild(&ProtoBody19);

Scene13.addChild(&ProtoDeclare14);

ProtoDeclare& ProtoDeclare21 =  ProtoDeclare();
ProtoDeclare21.setName(CString("Humanoid"));
ProtoDeclare21.setAppinfo(CString("The Humanoid node serves as overall container for the Joint Segment Site and Viewpoint nodes which define the skeleton geometry and landmarks of the humanoid figure. Additionally the node provides a means for defining information about the author copyright and usage restrictions of the model."));
ProtoDeclare21.setDocumentation(CString("http://HAnim.org/Specifications/HAnim2001/part1/Humanoid.html"));
ProtoInterface& ProtoInterface22 =  ProtoInterface();
field& field23 =  field();
field23.setAccessType(CString("inputOutput"));
field23.setType(CString("SFString"));
field23.setName(CString("name"));
ProtoInterface22.addChild(&field23);

field& field24 =  field();
field24.setAccessType(CString("inputOutput"));
field24.setType(CString("SFString"));
field24.setName(CString("version"));
field24.setValue(CString("1.1"));
field24.setAppinfo(CString("legal values: 1.1 or 2.0"));
ProtoInterface22.addChild(&field24);

field& field25 =  field();
field25.setAccessType(CString("inputOutput"));
field25.setType(CString("SFString"));
field25.setName(CString("humanoidVersion"));
field25.setAppinfo(CString("Version of the humanoid being modeled. Hint: HAnim version 2.0"));
ProtoInterface22.addChild(&field25);

field& field26 =  field();
field26.setAccessType(CString("inputOutput"));
field26.setType(CString("MFString"));
field26.setName(CString("info"));
ProtoInterface22.addChild(&field26);

field& field27 =  field();
field27.setAccessType(CString("inputOutput"));
field27.setType(CString("SFVec3f"));
field27.setName(CString("translation"));
ProtoInterface22.addChild(&field27);

field& field28 =  field();
field28.setAccessType(CString("inputOutput"));
field28.setType(CString("SFRotation"));
field28.setName(CString("rotation"));
ProtoInterface22.addChild(&field28);

field& field29 =  field();
field29.setAccessType(CString("inputOutput"));
field29.setType(CString("SFVec3f"));
field29.setName(CString("center"));
ProtoInterface22.addChild(&field29);

field& field30 =  field();
field30.setAccessType(CString("inputOutput"));
field30.setType(CString("SFVec3f"));
field30.setName(CString("scale"));
field30.setValue(CString("1 1 1"));
ProtoInterface22.addChild(&field30);

field& field31 =  field();
field31.setAccessType(CString("inputOutput"));
field31.setType(CString("SFRotation"));
field31.setName(CString("scaleOrientation"));
ProtoInterface22.addChild(&field31);

field& field32 =  field();
field32.setAccessType(CString("initializeOnly"));
field32.setType(CString("SFVec3f"));
field32.setName(CString("bboxCenter"));
ProtoInterface22.addChild(&field32);

field& field33 =  field();
field33.setAccessType(CString("initializeOnly"));
field33.setType(CString("SFVec3f"));
field33.setName(CString("bboxSize"));
field33.setValue(CString("-1 -1 -1"));
ProtoInterface22.addChild(&field33);

field& field34 =  field();
field34.setAccessType(CString("inputOutput"));
field34.setType(CString("MFNode"));
field34.setName(CString("humanoidBody"));
field34.setAppinfo(CString("HAnim 1.1 field container for body geometry Hint: replaced by 2.0 skeleton"));
field34.setDocumentation(CString("http://HAnim.org/Specifications/HAnim1.1/#humanoid"));
ProtoInterface22.addChild(&field34);

field& field35 =  field();
field35.setAccessType(CString("inputOutput"));
field35.setType(CString("MFNode"));
field35.setName(CString("skeleton"));
field35.setAppinfo(CString("HAnim 2.0 field container for body geometry Hint: replaces 1.1 humanoidBody"));
field35.setDocumentation(CString("http://HAnim.org/Specifications/HAnim2001/part1/Humanoid.html"));
ProtoInterface22.addChild(&field35);

field& field36 =  field();
field36.setAccessType(CString("inputOutput"));
field36.setType(CString("MFNode"));
field36.setName(CString("joints"));
field36.setAppinfo(CString("Container field for Joint nodes"));
ProtoInterface22.addChild(&field36);

field& field37 =  field();
field37.setAccessType(CString("inputOutput"));
field37.setType(CString("MFNode"));
field37.setName(CString("segments"));
field37.setAppinfo(CString("Container field for Segment nodes"));
ProtoInterface22.addChild(&field37);

field& field38 =  field();
field38.setAccessType(CString("inputOutput"));
field38.setType(CString("MFNode"));
field38.setName(CString("sites"));
field38.setAppinfo(CString("Container field for Site nodes"));
ProtoInterface22.addChild(&field38);

field& field39 =  field();
field39.setAccessType(CString("inputOutput"));
field39.setType(CString("MFNode"));
field39.setName(CString("viewpoints"));
field39.setAppinfo(CString("Container field for Viewpoint nodes"));
ProtoInterface22.addChild(&field39);

field& field40 =  field();
field40.setAccessType(CString("inputOutput"));
field40.setType(CString("SFNode"));
field40.setName(CString("skinCoord"));
field40.setAppinfo(CString("Hint: HAnim version 2.0"));
ProtoInterface22.addChild(&field40);

field& field41 =  field();
field41.setAccessType(CString("inputOutput"));
field41.setType(CString("SFNode"));
field41.setName(CString("skinNormal"));
field41.setAppinfo(CString("Hint: HAnim version 2.0"));
ProtoInterface22.addChild(&field41);

ProtoDeclare21.addChild(&ProtoInterface22);

ProtoBody& ProtoBody42 =  ProtoBody();
Transform& Transform43 =  Transform();
Transform43.setDEF(CString("HumanoidTransform"));
Group& Group44 =  Group();
Group44.setDEF(CString("HumanoidGroup1"));
IS& IS45 =  IS();
Connect& connect46 =  Connect();
connect46.setNodeField(CString("children"));
connect46.setProtoField(CString("humanoidBody"));
IS45.addChild(&connect46);

Group44.addChild(&IS45);

Transform43.addChild(&Group44);

Group& Group47 =  Group();
Group47.setDEF(CString("HumanoidGroup2"));
IS& IS48 =  IS();
Connect& connect49 =  Connect();
connect49.setNodeField(CString("children"));
connect49.setProtoField(CString("skeleton"));
IS48.addChild(&connect49);

Group47.addChild(&IS48);

Transform43.addChild(&Group47);

Group& Group50 =  Group();
Group50.setDEF(CString("HumanoidGroup3"));
IS& IS51 =  IS();
Connect& connect52 =  Connect();
connect52.setNodeField(CString("children"));
connect52.setProtoField(CString("viewpoints"));
IS51.addChild(&connect52);

Group50.addChild(&IS51);

Transform43.addChild(&Group50);

IS& IS53 =  IS();
Connect& connect54 =  Connect();
connect54.setNodeField(CString("translation"));
connect54.setProtoField(CString("translation"));
IS53.addChild(&connect54);

Connect& connect55 =  Connect();
connect55.setNodeField(CString("rotation"));
connect55.setProtoField(CString("rotation"));
IS53.addChild(&connect55);

Connect& connect56 =  Connect();
connect56.setNodeField(CString("scale"));
connect56.setProtoField(CString("scale"));
IS53.addChild(&connect56);

Connect& connect57 =  Connect();
connect57.setNodeField(CString("scaleOrientation"));
connect57.setProtoField(CString("scaleOrientation"));
IS53.addChild(&connect57);

Connect& connect58 =  Connect();
connect58.setNodeField(CString("center"));
connect58.setProtoField(CString("center"));
IS53.addChild(&connect58);

Connect& connect59 =  Connect();
connect59.setNodeField(CString("bboxSize"));
connect59.setProtoField(CString("bboxSize"));
IS53.addChild(&connect59);

Connect& connect60 =  Connect();
connect60.setNodeField(CString("bboxCenter"));
connect60.setProtoField(CString("bboxCenter"));
IS53.addChild(&connect60);

Transform43.addChild(&IS53);

ProtoBody42.addChild(&Transform43);

ProtoDeclare21.addChild(&ProtoBody42);

Scene13.addChild(&ProtoDeclare21);

ProtoDeclare& ProtoDeclare61 =  ProtoDeclare();
ProtoDeclare61.setName(CString("Joint"));
ProtoDeclare61.setAppinfo(CString("The Joint node is used as a building block to describe the articulations of the humanoid figure. Each articulation of the humanoid figure is represented by a Joint node each of which is organized into a hierarchy that describes the overall skeleton of the humanoid."));
ProtoDeclare61.setDocumentation(CString("http://HAnim.org/Specifications/HAnim2001/part1/Joint.html"));
ProtoInterface& ProtoInterface62 =  ProtoInterface();
field& field63 =  field();
field63.setAccessType(CString("inputOutput"));
field63.setType(CString("SFString"));
field63.setName(CString("name"));
ProtoInterface62.addChild(&field63);

field& field64 =  field();
field64.setAccessType(CString("inputOutput"));
field64.setType(CString("MFFloat"));
field64.setName(CString("ulimit"));
ProtoInterface62.addChild(&field64);

field& field65 =  field();
field65.setAccessType(CString("inputOutput"));
field65.setType(CString("MFFloat"));
field65.setName(CString("llimit"));
ProtoInterface62.addChild(&field65);

field& field66 =  field();
field66.setAccessType(CString("inputOutput"));
field66.setType(CString("SFRotation"));
field66.setName(CString("limitOrientation"));
ProtoInterface62.addChild(&field66);

field& field67 =  field();
field67.setAccessType(CString("inputOutput"));
field67.setType(CString("MFInt32"));
field67.setName(CString("skinCoordIndex"));
ProtoInterface62.addChild(&field67);

field& field68 =  field();
field68.setAccessType(CString("inputOutput"));
field68.setType(CString("MFFloat"));
field68.setName(CString("skinCoordWeight"));
ProtoInterface62.addChild(&field68);

field& field69 =  field();
field69.setAccessType(CString("inputOutput"));
field69.setType(CString("MFFloat"));
field69.setName(CString("stiffness"));
field69.setValue(CString("0 0 0"));
ProtoInterface62.addChild(&field69);

field& field70 =  field();
field70.setAccessType(CString("inputOutput"));
field70.setType(CString("SFVec3f"));
field70.setName(CString("translation"));
ProtoInterface62.addChild(&field70);

field& field71 =  field();
field71.setAccessType(CString("inputOutput"));
field71.setType(CString("SFRotation"));
field71.setName(CString("rotation"));
ProtoInterface62.addChild(&field71);

field& field72 =  field();
field72.setAccessType(CString("inputOutput"));
field72.setType(CString("SFVec3f"));
field72.setName(CString("scale"));
field72.setValue(CString("1 1 1"));
ProtoInterface62.addChild(&field72);

field& field73 =  field();
field73.setAccessType(CString("inputOutput"));
field73.setType(CString("SFRotation"));
field73.setName(CString("scaleOrientation"));
ProtoInterface62.addChild(&field73);

field& field74 =  field();
field74.setAccessType(CString("inputOutput"));
field74.setType(CString("SFVec3f"));
field74.setName(CString("center"));
ProtoInterface62.addChild(&field74);

field& field75 =  field();
field75.setAccessType(CString("initializeOnly"));
field75.setType(CString("SFVec3f"));
field75.setName(CString("bboxCenter"));
ProtoInterface62.addChild(&field75);

field& field76 =  field();
field76.setAccessType(CString("initializeOnly"));
field76.setType(CString("SFVec3f"));
field76.setName(CString("bboxSize"));
field76.setValue(CString("-1 -1 -1"));
ProtoInterface62.addChild(&field76);

field& field77 =  field();
field77.setAccessType(CString("inputOutput"));
field77.setType(CString("MFNode"));
field77.setName(CString("children"));
ProtoInterface62.addChild(&field77);

field& field78 =  field();
field78.setAccessType(CString("inputOnly"));
field78.setType(CString("MFNode"));
field78.setName(CString("addChildren"));
ProtoInterface62.addChild(&field78);

field& field79 =  field();
field79.setAccessType(CString("inputOnly"));
field79.setType(CString("MFNode"));
field79.setName(CString("removeChildren"));
ProtoInterface62.addChild(&field79);

ProtoDeclare61.addChild(&ProtoInterface62);

ProtoBody& ProtoBody80 =  ProtoBody();
Transform& Transform81 =  Transform();
Transform81.setDEF(CString("JointTransform"));
IS& IS82 =  IS();
Connect& connect83 =  Connect();
connect83.setNodeField(CString("translation"));
connect83.setProtoField(CString("translation"));
IS82.addChild(&connect83);

Connect& connect84 =  Connect();
connect84.setNodeField(CString("rotation"));
connect84.setProtoField(CString("rotation"));
IS82.addChild(&connect84);

Connect& connect85 =  Connect();
connect85.setNodeField(CString("scale"));
connect85.setProtoField(CString("scale"));
IS82.addChild(&connect85);

Connect& connect86 =  Connect();
connect86.setNodeField(CString("scaleOrientation"));
connect86.setProtoField(CString("scaleOrientation"));
IS82.addChild(&connect86);

Connect& connect87 =  Connect();
connect87.setNodeField(CString("center"));
connect87.setProtoField(CString("center"));
IS82.addChild(&connect87);

Connect& connect88 =  Connect();
connect88.setNodeField(CString("bboxSize"));
connect88.setProtoField(CString("bboxSize"));
IS82.addChild(&connect88);

Connect& connect89 =  Connect();
connect89.setNodeField(CString("bboxCenter"));
connect89.setProtoField(CString("bboxCenter"));
IS82.addChild(&connect89);

Connect& connect90 =  Connect();
connect90.setNodeField(CString("addChildren"));
connect90.setProtoField(CString("addChildren"));
IS82.addChild(&connect90);

Connect& connect91 =  Connect();
connect91.setNodeField(CString("removeChildren"));
connect91.setProtoField(CString("removeChildren"));
IS82.addChild(&connect91);

Connect& connect92 =  Connect();
connect92.setNodeField(CString("children"));
connect92.setProtoField(CString("children"));
IS82.addChild(&connect92);

Transform81.addChild(&IS82);

ProtoBody80.addChild(&Transform81);

ProtoDeclare61.addChild(&ProtoBody80);

Scene13.addChild(&ProtoDeclare61);

ProtoDeclare& ProtoDeclare93 =  ProtoDeclare();
ProtoDeclare93.setName(CString("Segment"));
ProtoDeclare93.setAppinfo(CString("The Segment node is used describe the attributes of the physical links between the joints of the humanoid figure. Each body part (pelvis thigh calf etc) of the humanoid figure is represented by a Segment node."));
ProtoDeclare93.setDocumentation(CString("http://HAnim.org/Specifications/HAnim2001/part1/Segment.html"));
ProtoInterface& ProtoInterface94 =  ProtoInterface();
field& field95 =  field();
field95.setAccessType(CString("inputOutput"));
field95.setType(CString("SFString"));
field95.setName(CString("name"));
ProtoInterface94.addChild(&field95);

field& field96 =  field();
field96.setAccessType(CString("inputOutput"));
field96.setType(CString("SFFloat"));
field96.setName(CString("mass"));
ProtoInterface94.addChild(&field96);

field& field97 =  field();
field97.setAccessType(CString("inputOutput"));
field97.setType(CString("SFVec3f"));
field97.setName(CString("centerOfMass"));
ProtoInterface94.addChild(&field97);

field& field98 =  field();
field98.setAccessType(CString("inputOutput"));
field98.setType(CString("MFFloat"));
field98.setName(CString("momentsOfInertia"));
field98.setValue(CString("0 0 0 0 0 0 0 0 0"));
ProtoInterface94.addChild(&field98);

field& field99 =  field();
field99.setAccessType(CString("initializeOnly"));
field99.setType(CString("SFVec3f"));
field99.setName(CString("bboxCenter"));
ProtoInterface94.addChild(&field99);

field& field100 =  field();
field100.setAccessType(CString("initializeOnly"));
field100.setType(CString("SFVec3f"));
field100.setName(CString("bboxSize"));
field100.setValue(CString("-1 -1 -1"));
ProtoInterface94.addChild(&field100);

field& field101 =  field();
field101.setAccessType(CString("inputOutput"));
field101.setType(CString("MFNode"));
field101.setName(CString("children"));
ProtoInterface94.addChild(&field101);

field& field102 =  field();
field102.setAccessType(CString("inputOnly"));
field102.setType(CString("MFNode"));
field102.setName(CString("addChildren"));
ProtoInterface94.addChild(&field102);

field& field103 =  field();
field103.setAccessType(CString("inputOnly"));
field103.setType(CString("MFNode"));
field103.setName(CString("removeChildren"));
ProtoInterface94.addChild(&field103);

field& field104 =  field();
field104.setAccessType(CString("inputOutput"));
field104.setType(CString("SFNode"));
field104.setName(CString("coord"));
field104.setAppinfo(CString("contains Coordinate nodes"));
ProtoInterface94.addChild(&field104);

field& field105 =  field();
field105.setAccessType(CString("inputOutput"));
field105.setType(CString("MFNode"));
field105.setName(CString("displacers"));
field105.setAppinfo(CString("contains Displacer nodes"));
ProtoInterface94.addChild(&field105);

ProtoDeclare93.addChild(&ProtoInterface94);

ProtoBody& ProtoBody106 =  ProtoBody();
Group& Group107 =  Group();
Group107.setDEF(CString("SegmentGroup"));
IS& IS108 =  IS();
Connect& connect109 =  Connect();
connect109.setNodeField(CString("bboxSize"));
connect109.setProtoField(CString("bboxSize"));
IS108.addChild(&connect109);

Connect& connect110 =  Connect();
connect110.setNodeField(CString("bboxCenter"));
connect110.setProtoField(CString("bboxCenter"));
IS108.addChild(&connect110);

Connect& connect111 =  Connect();
connect111.setNodeField(CString("addChildren"));
connect111.setProtoField(CString("addChildren"));
IS108.addChild(&connect111);

Connect& connect112 =  Connect();
connect112.setNodeField(CString("removeChildren"));
connect112.setProtoField(CString("removeChildren"));
IS108.addChild(&connect112);

Connect& connect113 =  Connect();
connect113.setNodeField(CString("children"));
connect113.setProtoField(CString("children"));
IS108.addChild(&connect113);

Group107.addChild(&IS108);

ProtoBody106.addChild(&Group107);

ProtoDeclare93.addChild(&ProtoBody106);

Scene13.addChild(&ProtoDeclare93);

ProtoDeclare& ProtoDeclare114 =  ProtoDeclare();
ProtoDeclare114.setName(CString("Site"));
ProtoDeclare114.setAppinfo(CString("The Site node can be used for three purposes: (a) to define an \"end effector\" location which can be used by an inverse kinematics system (b) to define an attachment point for accessories such as jewelry and clothing and (c) to define a location for a virtual camera in the reference frame of a Segment node (such as a view \"through the eyes\" of the humanoid for use in multi-user worlds)."));
ProtoDeclare114.setDocumentation(CString("http://HAnim.org/Specifications/HAnim2001/part1/Site.html"));
ProtoInterface& ProtoInterface115 =  ProtoInterface();
field& field116 =  field();
field116.setAccessType(CString("inputOutput"));
field116.setType(CString("SFString"));
field116.setName(CString("name"));
ProtoInterface115.addChild(&field116);

field& field117 =  field();
field117.setAccessType(CString("inputOutput"));
field117.setType(CString("SFVec3f"));
field117.setName(CString("translation"));
ProtoInterface115.addChild(&field117);

field& field118 =  field();
field118.setAccessType(CString("inputOutput"));
field118.setType(CString("SFRotation"));
field118.setName(CString("rotation"));
ProtoInterface115.addChild(&field118);

field& field119 =  field();
field119.setAccessType(CString("inputOutput"));
field119.setType(CString("SFVec3f"));
field119.setName(CString("scale"));
field119.setValue(CString("1 1 1"));
ProtoInterface115.addChild(&field119);

field& field120 =  field();
field120.setAccessType(CString("inputOutput"));
field120.setType(CString("SFRotation"));
field120.setName(CString("scaleOrientation"));
ProtoInterface115.addChild(&field120);

field& field121 =  field();
field121.setAccessType(CString("inputOutput"));
field121.setType(CString("SFVec3f"));
field121.setName(CString("center"));
ProtoInterface115.addChild(&field121);

field& field122 =  field();
field122.setAccessType(CString("initializeOnly"));
field122.setType(CString("SFVec3f"));
field122.setName(CString("bboxCenter"));
ProtoInterface115.addChild(&field122);

field& field123 =  field();
field123.setAccessType(CString("initializeOnly"));
field123.setType(CString("SFVec3f"));
field123.setName(CString("bboxSize"));
field123.setValue(CString("-1 -1 -1"));
ProtoInterface115.addChild(&field123);

field& field124 =  field();
field124.setAccessType(CString("inputOutput"));
field124.setType(CString("MFNode"));
field124.setName(CString("children"));
ProtoInterface115.addChild(&field124);

field& field125 =  field();
field125.setAccessType(CString("inputOnly"));
field125.setType(CString("MFNode"));
field125.setName(CString("addChildren"));
ProtoInterface115.addChild(&field125);

field& field126 =  field();
field126.setAccessType(CString("inputOnly"));
field126.setType(CString("MFNode"));
field126.setName(CString("removeChildren"));
ProtoInterface115.addChild(&field126);

ProtoDeclare114.addChild(&ProtoInterface115);

ProtoBody& ProtoBody127 =  ProtoBody();
Transform& Transform128 =  Transform();
Transform128.setDEF(CString("SiteTransform"));
IS& IS129 =  IS();
Connect& connect130 =  Connect();
connect130.setNodeField(CString("translation"));
connect130.setProtoField(CString("translation"));
IS129.addChild(&connect130);

Connect& connect131 =  Connect();
connect131.setNodeField(CString("rotation"));
connect131.setProtoField(CString("rotation"));
IS129.addChild(&connect131);

Connect& connect132 =  Connect();
connect132.setNodeField(CString("scale"));
connect132.setProtoField(CString("scale"));
IS129.addChild(&connect132);

Connect& connect133 =  Connect();
connect133.setNodeField(CString("scaleOrientation"));
connect133.setProtoField(CString("scaleOrientation"));
IS129.addChild(&connect133);

Connect& connect134 =  Connect();
connect134.setNodeField(CString("center"));
connect134.setProtoField(CString("center"));
IS129.addChild(&connect134);

Connect& connect135 =  Connect();
connect135.setNodeField(CString("bboxSize"));
connect135.setProtoField(CString("bboxSize"));
IS129.addChild(&connect135);

Connect& connect136 =  Connect();
connect136.setNodeField(CString("bboxCenter"));
connect136.setProtoField(CString("bboxCenter"));
IS129.addChild(&connect136);

Connect& connect137 =  Connect();
connect137.setNodeField(CString("addChildren"));
connect137.setProtoField(CString("addChildren"));
IS129.addChild(&connect137);

Connect& connect138 =  Connect();
connect138.setNodeField(CString("removeChildren"));
connect138.setProtoField(CString("removeChildren"));
IS129.addChild(&connect138);

Connect& connect139 =  Connect();
connect139.setNodeField(CString("children"));
connect139.setProtoField(CString("children"));
IS129.addChild(&connect139);

Transform128.addChild(&IS129);

ProtoBody127.addChild(&Transform128);

ProtoDeclare114.addChild(&ProtoBody127);

Scene13.addChild(&ProtoDeclare114);

ProtoInstance& ProtoInstance140 =  ProtoInstance();
ProtoInstance140.setDEF(CString("Humanoid"));
ProtoInstance140.setName(CString("Humanoid"));
fieldValue& fieldValue141 =  fieldValue();
fieldValue141.setName(CString("name"));
fieldValue141.setValue(CString("nancy"));
ProtoInstance140.addChild(&fieldValue141);

fieldValue& fieldValue142 =  fieldValue();
fieldValue142.setName(CString("info"));
fieldValue142.setValue(CString("\"humanoidVersion=Nancy V1.2b\" \"authorName=Cindy Ballreich\" \"authorEmail=cindy@ballreich.net\" \"copyright=1997 3Name3D / Yglesias Wallock Divekar Inc. all rights reserved.\" \"creationDate=Tue Dec 30 08:30:08 PST 1997\" \"usageRestrictions=Noncommercial usage is ok if 3Name3D name and logo www.ballreich.net/vrml/HAnim/small_logo.gif is present and proper credit is given.\""));
ProtoInstance140.addChild(&fieldValue142);

fieldValue& fieldValue143 =  fieldValue();
fieldValue143.setName(CString("humanoidBody"));
ProtoInstance& ProtoInstance144 =  ProtoInstance();
ProtoInstance144.setDEF(CString("hanim_humanoid_root"));
ProtoInstance144.setName(CString("Joint"));
fieldValue& fieldValue145 =  fieldValue();
fieldValue145.setName(CString("name"));
fieldValue145.setValue(CString("humanoid_root"));
ProtoInstance144.addChild(&fieldValue145);

fieldValue& fieldValue146 =  fieldValue();
fieldValue146.setName(CString("center"));
fieldValue146.setValue(CString("-0.00405 0.855 -0.000113"));
ProtoInstance144.addChild(&fieldValue146);

fieldValue& fieldValue147 =  fieldValue();
fieldValue147.setName(CString("children"));
ProtoInstance& ProtoInstance148 =  ProtoInstance();
ProtoInstance148.setDEF(CString("hanim_sacroiliac"));
ProtoInstance148.setName(CString("Joint"));
fieldValue& fieldValue149 =  fieldValue();
fieldValue149.setName(CString("name"));
fieldValue149.setValue(CString("sacroiliac"));
ProtoInstance148.addChild(&fieldValue149);

fieldValue& fieldValue150 =  fieldValue();
fieldValue150.setName(CString("center"));
fieldValue150.setValue(CString("0 1.01 -0.0204"));
ProtoInstance148.addChild(&fieldValue150);

fieldValue& fieldValue151 =  fieldValue();
fieldValue151.setName(CString("children"));
ProtoInstance& ProtoInstance152 =  ProtoInstance();
ProtoInstance152.setDEF(CString("hanim_pelvis"));
ProtoInstance152.setName(CString("Segment"));
fieldValue& fieldValue153 =  fieldValue();
fieldValue153.setName(CString("name"));
fieldValue153.setValue(CString("pelvis"));
ProtoInstance152.addChild(&fieldValue153);

fieldValue& fieldValue154 =  fieldValue();
fieldValue154.setName(CString("children"));
Shape& Shape155 =  Shape();
Shape155.setDEF(CString("_1"));
Appearance& Appearance156 =  Appearance();
Material& Material157 =  Material();
Material157.setDEF(CString("Pants_Color"));
Material157.setAmbientIntensity(0.25);
Material157.setDiffuseColor(new float[]{0.054,0.233,0.39});
Appearance156.addChild(&Material157);

Shape155.addChild(&Appearance156);

IndexedFaceSet& IndexedFaceSet158 =  IndexedFaceSet();
IndexedFaceSet158.setCreaseAngle(1.14);
IndexedFaceSet158.setCoordIndex(new int32_t[]{0,1,40,-1,1,2,40,-1,2,3,40,-1,3,4,40,-1,4,5,40,-1,5,4,9,-1,4,3,8,-1,3,2,8,-1,2,1,6,-1,0,7,1,-1,7,6,1,-1,6,8,2,-1,9,4,10,-1,4,8,10,-1,8,6,12,-1,7,0,47,-1,50,5,9,-1,7,47,55,-1,55,13,7,-1,50,9,56,-1,9,10,14,-1,10,11,15,-1,11,12,16,-1,12,13,19,-1,13,55,17,-1,60,17,55,-1,17,19,13,-1,19,16,12,-1,16,15,11,-1,15,18,10,-1,14,56,9,-1,56,14,64,-1,17,60,20,-1,20,19,17,-1,21,64,14,-1,14,22,21,-1,15,16,24,-1,16,19,24,-1,19,20,26,-1,24,23,15,-1,64,21,69,-1,21,22,29,-1,19,26,25,-1,20,63,27,-1,27,26,20,-1,25,24,19,-1,30,29,22,-1,29,28,21,-1,28,69,21,-1,27,34,26,-1,69,28,79,-1,29,30,32,-1,30,23,33,-1,23,24,37,-1,25,26,34,-1,83,27,77,-1,37,33,23,-1,33,32,30,-1,31,79,28,-1,79,31,84,-1,32,33,36,-1,24,25,37,-1,34,27,83,-1,83,38,34,-1,34,37,25,-1,37,36,33,-1,36,35,32,-1,84,31,89,-1,31,35,89,-1,35,36,39,-1,36,37,39,-1,38,83,89,-1,89,39,38,-1,39,89,35,-1,40,41,0,-1,40,42,41,-1,40,43,42,-1,40,44,43,-1,40,45,44,-1,49,44,45,-1,48,43,44,-1,48,42,43,-1,46,41,42,-1,41,47,0,-1,41,46,47,-1,42,48,46,-1,51,44,49,-1,51,48,44,-1,48,52,53,-1,49,45,50,-1,56,49,50,-1,57,51,49,-1,58,53,52,-1,59,54,53,-1,62,55,54,-1,55,62,60,-1,54,59,62,-1,53,58,59,-1,51,61,58,-1,49,56,57,-1,64,57,56,-1,67,59,58,-1,68,62,59,-1,60,63,20,-1,60,62,63,-1,59,67,68,-1,58,61,67,-1,57,64,65,-1,65,66,57,-1,71,63,62,-1,69,65,64,-1,74,66,65,-1,78,68,67,-1,70,71,62,-1,63,72,27,-1,63,71,72,-1,68,78,76,-1,67,75,78,-1,66,74,75,-1,65,73,74,-1,65,69,73,-1,77,27,72,-1,71,82,72,-1,79,73,69,-1,81,75,74,-1,82,71,70,-1,77,72,83,-1,73,79,80,-1,84,80,79,-1,86,75,81,-1,83,72,82,-1,82,88,83,-1,70,87,82,-1,81,85,86,-1,89,80,84,-1,89,85,80,-1,90,86,85,-1,90,87,86,-1,89,83,88,-1,88,90,89,-1,85,89,90,-1,50,45,5,-1,45,40,5,-1,10,8,11,-1,8,12,11,-1,18,22,10,-1,22,14,10,-1,57,66,51,-1,66,61,51,-1,51,58,48,-1,58,52,48,-1,48,53,46,-1,53,54,46,-1,76,70,68,-1,70,62,68,-1,29,32,28,-1,28,32,31,-1,32,35,31,-1,85,81,80,-1,81,73,80,-1,81,74,73,-1,39,37,38,-1,37,34,38,-1,82,87,88,-1,87,90,88,-1,87,78,86,-1,78,75,86,-1,61,66,67,-1,66,75,67,-1,22,18,15,-1,23,30,15,-1,30,22,15,-1,13,12,7,-1,12,6,7,-1,46,54,47,-1,54,55,47,-1,87,76,78,-1,87,70,76,-1}, 712);
Coordinate& Coordinate159 =  Coordinate();
Coordinate159.setPoint(new float[]{0,1.06,0.0218,0.0561,1.07,0.00726,0.0851,1.07,-0.0115,0.104,1.07,-0.0497,0.0851,1.07,-0.0851,0.032,1.06,-0.0985,0.0873,1.04,0.0078,0.033,1.04,0.0395,0.123,1.05,-0.0405,0.0609,1.02,-0.106,0.0894,0.996,-0.106,0.143,1,-0.0309,0.117,1,0.0164,0.0314,0.999,0.0502,0.0314,0.96,-0.13,0.156,0.966,-0.0405,0.156,0.968,-0.00724,0.0341,0.954,0.0513,0.115,0.96,-0.0916,0.121,0.926,0.0352,0.0357,0.92,0.0497,0.0314,0.91,-0.146,0.0991,0.91,-0.131,0.169,0.883,-0.0448,0.169,0.885,-0.00939,0.123,0.873,0.0384,0.0926,0.872,0.047,0.0325,0.873,0.0287,0.0293,0.866,-0.142,0.102,0.869,-0.131,0.129,0.868,-0.103,0.0314,0.84,-0.125,0.101,0.844,-0.122,0.133,0.846,-0.0878,0.0653,0.835,0.0132,0.0615,0.824,-0.111,0.0985,0.823,-0.101,0.132,0.826,-0.0448,0.0609,0.821,-0.0158,0.0599,0.812,-0.0545,0,1.08,-0.0266,-0.0561,1.07,0.00726,-0.0851,1.07,-0.0115,-0.104,1.07,-0.0497,-0.0851,1.07,-0.0851,-0.032,1.06,-0.0985,-0.0873,1.04,0.0078,-0.033,1.04,0.0395,-0.123,1.05,-0.0405,-0.0609,1.02,-0.106,0,1.02,-0.108,-0.0894,0.996,-0.106,-0.143,1,-0.0309,-0.144,1,-0.011,-0.117,1,0.0164,-0.0314,0.999,0.0502,0,0.961,-0.123,-0.0314,0.96,-0.13,-0.156,0.966,-0.0405,-0.156,0.968,-0.00724,-0.0341,0.954,0.0513,-0.115,0.96,-0.0916,-0.121,0.926,0.0352,-0.0357,0.92,0.0497,0,0.91,-0.127,-0.0314,0.91,-0.146,-0.0991,0.91,-0.131,-0.167,0.911,-0.0448,-0.167,0.912,-0.00671,0,0.883,-0.129,-0.123,0.873,0.0384,-0.0926,0.872,0.047,-0.0325,0.873,0.0287,-0.0293,0.866,-0.142,-0.102,0.869,-0.131,-0.129,0.868,-0.103,-0.166,0.863,-0.0148,0,0.863,-0.00456,-0.166,0.862,-0.0459,0,0.858,-0.1,-0.0314,0.84,-0.125,-0.101,0.844,-0.122,-0.0653,0.835,0.0132,0,0.839,-0.0217,0,0.835,-0.0867,-0.0615,0.824,-0.111,-0.0985,0.823,-0.101,-0.132,0.826,-0.0448,-0.0609,0.821,-0.0158,0,0.831,-0.0626,-0.0599,0.812,-0.0545}, 273);
IndexedFaceSet158.setCoord(&Coordinate159);

Shape155.setGeometry(&IndexedFaceSet158);

fieldValue154.addChild(&Shape155);

ProtoInstance152.addChild(&fieldValue154);

fieldValue151.addChild(&ProtoInstance152);

ProtoInstance& ProtoInstance160 =  ProtoInstance();
ProtoInstance160.setDEF(CString("hanim_l_hip"));
ProtoInstance160.setName(CString("Joint"));
fieldValue& fieldValue161 =  fieldValue();
fieldValue161.setName(CString("name"));
fieldValue161.setValue(CString("l_hip"));
ProtoInstance160.addChild(&fieldValue161);

fieldValue& fieldValue162 =  fieldValue();
fieldValue162.setName(CString("center"));
fieldValue162.setValue(CString("0.122 0.888271 -0.0693267"));
ProtoInstance160.addChild(&fieldValue162);

fieldValue& fieldValue163 =  fieldValue();
fieldValue163.setName(CString("children"));
ProtoInstance& ProtoInstance164 =  ProtoInstance();
ProtoInstance164.setDEF(CString("hanim_l_thigh"));
ProtoInstance164.setName(CString("Segment"));
fieldValue& fieldValue165 =  fieldValue();
fieldValue165.setName(CString("name"));
fieldValue165.setValue(CString("l_thigh"));
ProtoInstance164.addChild(&fieldValue165);

fieldValue& fieldValue166 =  fieldValue();
fieldValue166.setName(CString("children"));
Shape& Shape167 =  Shape();
Shape167.setDEF(CString("_2"));
Appearance& Appearance168 =  Appearance();
Material& Material169 =  Material();
Material169.setUSE(CString("Pants_Color"));
Appearance168.addChild(&Material169);

Shape167.addChild(&Appearance168);

IndexedFaceSet& IndexedFaceSet170 =  IndexedFaceSet();
IndexedFaceSet170.setCreaseAngle(1.32);
IndexedFaceSet170.setCoordIndex(new int32_t[]{0,4,5,-1,3,4,0,-1,0,7,1,-1,0,8,7,-1,0,6,8,-1,0,5,6,-1,0,2,3,-1,0,1,2,-1,9,2,1,-1,10,3,2,-1,11,4,3,-1,12,5,4,-1,13,6,5,-1,15,7,8,-1,9,1,7,-1,7,15,9,-1,8,14,15,-1,5,16,13,-1,5,12,16,-1,4,11,12,-1,3,10,11,-1,2,9,10,-1,20,13,16,-1,18,11,10,-1,19,12,11,-1,20,16,12,-1,23,15,14,-1,15,23,24,-1,12,19,20,-1,11,18,19,-1,10,17,18,-1,26,18,17,-1,27,19,18,-1,27,20,19,-1,28,21,20,-1,29,23,22,-1,23,29,30,-1,20,32,28,-1,20,27,32,-1,18,26,27,-1,17,25,26,-1,25,31,30,-1,30,29,26,-1,30,26,25,-1,29,28,27,-1,29,27,26,-1,28,32,27,-1,22,23,14,-1,20,21,13,-1,21,22,13,-1,22,14,13,-1,9,15,24,-1,10,9,17,-1,9,24,17,-1,6,13,8,-1,13,14,8,-1,28,29,21,-1,29,22,21,-1,24,31,17,-1,31,25,17,-1,30,31,23,-1,31,24,23,-1}, 248);
Coordinate& Coordinate171 =  Coordinate();
Coordinate171.setPoint(new float[]{0.0969,0.804,-0.0486,0.101,0.876,0.0336,0.17,0.894,-0.00778,0.17,0.891,-0.076,0.124,0.858,-0.129,0.076,0.843,-0.143,0.025,0.819,-0.0889,0.0507,0.847,0.0196,0.00349,0.826,-0.0287,0.0991,0.808,0.0406,0.161,0.814,-0.00187,0.165,0.808,-0.0755,0.122,0.788,-0.126,0.00993,0.762,-0.0937,0.00993,0.762,-0.0309,0.0491,0.777,0.0185,0.0755,0.766,-0.139,0.13,0.597,-0.00618,0.132,0.6,-0.0593,0.108,0.603,-0.105,0.0722,0.601,-0.118,0.0314,0.59,-0.0953,0.0239,0.566,-0.0427,0.047,0.566,0.0051,0.0878,0.581,0.0217,0.114,0.499,-0.0132,0.116,0.488,-0.061,0.103,0.567,-0.0991,0.0362,0.557,-0.0926,0.025,0.486,-0.047,0.0507,0.497,-0.00188,0.0862,0.513,0.018,0.0733,0.579,-0.108}, 99);
IndexedFaceSet170.setCoord(&Coordinate171);

Shape167.setGeometry(&IndexedFaceSet170);

fieldValue166.addChild(&Shape167);

ProtoInstance164.addChild(&fieldValue166);

fieldValue163.addChild(&ProtoInstance164);

ProtoInstance& ProtoInstance172 =  ProtoInstance();
ProtoInstance172.setDEF(CString("hanim_l_knee"));
ProtoInstance172.setName(CString("Joint"));
fieldValue& fieldValue173 =  fieldValue();
fieldValue173.setName(CString("name"));
fieldValue173.setValue(CString("l_knee"));
ProtoInstance172.addChild(&fieldValue173);

fieldValue& fieldValue174 =  fieldValue();
fieldValue174.setName(CString("center"));
fieldValue174.setValue(CString("0.0738 0.517 -0.0284"));
ProtoInstance172.addChild(&fieldValue174);

fieldValue& fieldValue175 =  fieldValue();
fieldValue175.setName(CString("children"));
ProtoInstance& ProtoInstance176 =  ProtoInstance();
ProtoInstance176.setDEF(CString("hanim_l_calf"));
ProtoInstance176.setName(CString("Segment"));
fieldValue& fieldValue177 =  fieldValue();
fieldValue177.setName(CString("name"));
fieldValue177.setValue(CString("l_calf"));
ProtoInstance176.addChild(&fieldValue177);

fieldValue& fieldValue178 =  fieldValue();
fieldValue178.setName(CString("children"));
Shape& Shape179 =  Shape();
Shape179.setDEF(CString("_3"));
Appearance& Appearance180 =  Appearance();
Material& Material181 =  Material();
Material181.setUSE(CString("Pants_Color"));
Appearance180.addChild(&Material181);

Shape179.addChild(&Appearance180);

IndexedFaceSet& IndexedFaceSet182 =  IndexedFaceSet();
IndexedFaceSet182.setCreaseAngle(1.57);
IndexedFaceSet182.setCoordIndex(new int32_t[]{2,1,0,-1,2,3,1,-1,2,4,3,-1,2,5,4,-1,2,6,5,-1,2,7,6,-1,2,8,7,-1,2,0,8,-1,9,8,0,-1,10,6,7,-1,11,5,6,-1,12,4,5,-1,12,3,4,-1,13,1,3,-1,1,13,14,-1,3,12,13,-1,5,11,12,-1,6,10,11,-1,8,9,15,-1,22,13,12,-1,13,22,14,-1,17,15,9,-1,20,12,11,-1,21,22,12,-1,23,9,14,-1,9,23,16,-1,14,22,23,-1,12,20,21,-1,15,17,18,-1,9,16,17,-1,24,17,16,-1,25,18,17,-1,26,19,18,-1,27,20,19,-1,28,21,20,-1,29,22,21,-1,30,23,22,-1,31,16,23,-1,23,30,31,-1,22,29,30,-1,21,28,29,-1,20,27,28,-1,19,26,27,-1,18,25,26,-1,17,24,25,-1,16,31,24,-1,33,26,25,-1,36,29,28,-1,37,31,30,-1,29,36,30,-1,25,24,33,-1,31,37,24,-1,32,33,24,-1,24,37,32,-1,38,37,30,-1,30,36,38,-1,41,33,32,-1,42,39,34,-1,44,36,35,-1,45,38,36,-1,46,37,38,-1,38,45,46,-1,36,44,45,-1,35,43,44,-1,39,42,47,-1,32,40,41,-1,40,46,45,-1,41,40,45,-1,41,45,44,-1,44,43,42,-1,44,42,41,-1,43,47,42,-1,39,35,28,-1,35,36,28,-1,34,39,27,-1,39,28,27,-1,33,34,26,-1,34,27,26,-1,33,41,34,-1,41,42,34,-1,40,32,46,-1,32,37,46,-1,10,19,11,-1,19,20,11,-1,14,9,1,-1,9,0,1,-1,8,15,7,-1,7,15,10,-1,15,19,10,-1,15,18,19,-1,43,35,47,-1,35,39,47,-1}, 368);
Coordinate& Coordinate183 =  Coordinate();
Coordinate183.setPoint(new float[]{0.0883,0.532,-0.00349,0.0609,0.533,-0.00833,0.0814,0.55,-0.0395,0.0529,0.536,-0.0368,0.0577,0.544,-0.0577,0.0722,0.546,-0.0717,0.0975,0.54,-0.0647,0.105,0.539,-0.0438,0.104,0.539,-0.0223,0.0862,0.506,0.0158,0.101,0.51,-0.0798,0.0706,0.51,-0.101,0.0406,0.513,-0.0744,0.0368,0.51,-0.0357,0.0556,0.506,-0.000272,0.117,0.508,-0.0169,0.0878,0.361,-0.0126,0.123,0.363,-0.04,0.123,0.363,-0.0663,0.107,0.367,-0.107,0.0588,0.365,-0.122,0.0228,0.358,-0.0926,0.0239,0.358,-0.0475,0.0497,0.358,-0.0234,0.118,0.311,-0.0411,0.118,0.309,-0.0685,0.105,0.31,-0.108,0.0572,0.308,-0.123,0.0201,0.309,-0.0937,0.0191,0.311,-0.0508,0.0475,0.307,-0.0282,0.0883,0.309,-0.018,0.0959,0.124,-0.04,0.0905,0.12,-0.0647,0.0738,0.117,-0.0814,0.0373,0.121,-0.0636,0.0416,0.124,-0.0416,0.0744,0.13,-0.0212,0.0561,0.13,-0.0245,0.0529,0.121,-0.0873,0.0948,0.0897,-0.0368,0.0916,0.0779,-0.0604,0.0717,0.0854,-0.0765,0.0406,0.0918,-0.0626,0.0384,0.0881,-0.0363,0.054,0.0972,-0.0175,0.0765,0.11,-0.0169,0.0486,0.0999,-0.0835}, 144);
IndexedFaceSet182.setCoord(&Coordinate183);

Shape179.setGeometry(&IndexedFaceSet182);

fieldValue178.addChild(&Shape179);

ProtoInstance176.addChild(&fieldValue178);

fieldValue175.addChild(&ProtoInstance176);

ProtoInstance& ProtoInstance184 =  ProtoInstance();
ProtoInstance184.setDEF(CString("hanim_l_ankle"));
ProtoInstance184.setName(CString("Joint"));
fieldValue& fieldValue185 =  fieldValue();
fieldValue185.setName(CString("name"));
fieldValue185.setValue(CString("l_ankle"));
ProtoInstance184.addChild(&fieldValue185);

fieldValue& fieldValue186 =  fieldValue();
fieldValue186.setName(CString("center"));
fieldValue186.setValue(CString("0.0645 0.0719 -0.048"));
ProtoInstance184.addChild(&fieldValue186);

fieldValue& fieldValue187 =  fieldValue();
fieldValue187.setName(CString("children"));
ProtoInstance& ProtoInstance188 =  ProtoInstance();
ProtoInstance188.setDEF(CString("hanim_l_hindfoot"));
ProtoInstance188.setName(CString("Segment"));
fieldValue& fieldValue189 =  fieldValue();
fieldValue189.setName(CString("name"));
fieldValue189.setValue(CString("l_hindfoot"));
ProtoInstance188.addChild(&fieldValue189);

fieldValue& fieldValue190 =  fieldValue();
fieldValue190.setName(CString("children"));
Shape& Shape191 =  Shape();
Shape191.setDEF(CString("_4"));
Appearance& Appearance192 =  Appearance();
Material& Material193 =  Material();
Material193.setDEF(CString("Shoe_Color"));
Material193.setAmbientIntensity(0.25);
Appearance192.addChild(&Material193);

Shape191.addChild(&Appearance192);

IndexedFaceSet& IndexedFaceSet194 =  IndexedFaceSet();
IndexedFaceSet194.setCreaseAngle(1.57);
IndexedFaceSet194.setCoordIndex(new int32_t[]{2,1,0,-1,4,3,1,-1,2,4,1,-1,3,6,5,-1,1,3,5,-1,6,8,7,-1,5,6,7,-1,8,10,9,-1,7,8,9,-1,10,12,11,-1,9,10,11,-1,12,14,13,-1,11,12,13,-1,14,16,15,-1,13,14,15,-1,16,18,17,-1,15,16,17,-1,18,20,19,-1,17,18,19,-1,20,22,21,-1,19,20,21,-1,22,24,23,-1,21,22,23,-1,24,25,0,-1,23,24,0,-1,25,4,2,-1,0,25,2,-1,18,26,20,-1,16,26,18,-1,27,26,16,-1,14,27,16,-1,12,27,14,-1,28,27,12,-1,29,28,12,-1,10,29,12,-1,8,29,10,-1,6,37,8,-1,24,30,25,-1,31,30,24,-1,22,31,24,-1,32,31,22,-1,20,32,22,-1,33,32,20,-1,26,33,20,-1,34,33,26,-1,27,34,26,-1,35,34,27,-1,28,35,27,-1,29,35,28,-1,36,35,29,-1,8,36,29,-1,37,36,8,-1,6,38,37,-1,3,38,6,-1,39,38,3,-1,30,39,25,-1,41,40,30,-1,31,41,30,-1,42,41,31,-1,32,42,31,-1,43,42,32,-1,33,43,32,-1,44,43,33,-1,34,44,33,-1,45,44,34,-1,35,45,34,-1,46,45,35,-1,36,46,35,-1,47,46,36,-1,37,47,36,-1,38,47,37,-1,48,47,38,-1,49,48,38,-1,39,49,38,-1,40,49,39,-1,30,40,39,-1,48,49,50,-1,47,48,50,-1,46,47,50,-1,45,46,50,-1,44,45,50,-1,43,44,50,-1,42,43,50,-1,41,42,50,-1,40,41,50,-1,49,40,50,-1,11,13,15,-1,11,15,17,-1,9,11,17,-1,9,17,19,-1,7,9,19,-1,7,19,21,-1,5,7,21,-1,5,21,23,-1,5,23,0,-1,1,5,0,-1,3,4,39,-1,4,25,39,-1}, 392);
Coordinate& Coordinate195 =  Coordinate();
Coordinate195.setPoint(new float[]{0.0529,0,-0.0923,0.0863,0,-0.0862,0.0727,0,-0.0994,0.0863,0.0219,-0.0862,0.0727,0.0219,-0.0994,0.1,0,-0.0594,0.1,0.0219,-0.0594,0.113,0,0.0645,0.113,0.0219,0.0645,0.112,0,0.117,0.112,0.0156,0.117,0.0701,0,0.146,0.0701,0.0156,0.146,0.0468,0,0.153,0.0468,0.0156,0.153,0.0215,0,0.146,0.0215,0.0156,0.146,0.0165,0,0.125,0.0165,0.0156,0.125,0.0211,0,0.0377,0.0211,0.0219,0.0377,0.0393,0,-0.0129,0.0393,0.0219,-0.0129,0.0433,0,-0.0534,0.0433,0.0219,-0.0534,0.0529,0.0219,-0.0923,0.0305,0.0253,0.0938,0.0505,0.0253,0.099,0.0854,0.0253,0.0834,0.102,0.0253,0.0707,0.0568,0.0573,-0.0918,0.0492,0.0573,-0.0497,0.0435,0.0573,-0.0225,0.0442,0.0573,0.0235,0.0623,0.0573,0.0366,0.0911,0.0573,0.0159,0.0962,0.0573,-0.0121,0.0911,0.0573,-0.0482,0.0758,0.0573,-0.0899,0.0676,0.0573,-0.0962,0.0578,0.0953,-0.0896,0.0489,0.0953,-0.0757,0.0447,0.0953,-0.0432,0.0451,0.0953,-0.0128,0.0624,0.0953,-0.00466,0.0857,0.0953,-0.0134,0.0953,0.0953,-0.038,0.0843,0.0953,-0.0803,0.0761,0.0953,-0.0889,0.0682,0.0953,-0.0929,0.0675,0.13,-0.0608}, 153);
IndexedFaceSet194.setCoord(&Coordinate195);

Shape191.setGeometry(&IndexedFaceSet194);

fieldValue190.addChild(&Shape191);

ProtoInstance188.addChild(&fieldValue190);

fieldValue187.addChild(&ProtoInstance188);

ProtoInstance184.addChild(&fieldValue187);

fieldValue175.addChild(&ProtoInstance184);

ProtoInstance172.addChild(&fieldValue175);

fieldValue163.addChild(&ProtoInstance172);

ProtoInstance160.addChild(&fieldValue163);

fieldValue151.addChild(&ProtoInstance160);

ProtoInstance& ProtoInstance196 =  ProtoInstance();
ProtoInstance196.setDEF(CString("hanim_r_hip"));
ProtoInstance196.setName(CString("Joint"));
fieldValue& fieldValue197 =  fieldValue();
fieldValue197.setName(CString("name"));
fieldValue197.setValue(CString("r_hip"));
ProtoInstance196.addChild(&fieldValue197);

fieldValue& fieldValue198 =  fieldValue();
fieldValue198.setName(CString("center"));
fieldValue198.setValue(CString("-0.11 0.892362 -0.0732533"));
ProtoInstance196.addChild(&fieldValue198);

fieldValue& fieldValue199 =  fieldValue();
fieldValue199.setName(CString("children"));
ProtoInstance& ProtoInstance200 =  ProtoInstance();
ProtoInstance200.setDEF(CString("hanim_r_thigh"));
ProtoInstance200.setName(CString("Segment"));
fieldValue& fieldValue201 =  fieldValue();
fieldValue201.setName(CString("name"));
fieldValue201.setValue(CString("r_thigh"));
ProtoInstance200.addChild(&fieldValue201);

fieldValue& fieldValue202 =  fieldValue();
fieldValue202.setName(CString("children"));
Shape& Shape203 =  Shape();
Shape203.setDEF(CString("_5"));
Appearance& Appearance204 =  Appearance();
Material& Material205 =  Material();
Material205.setUSE(CString("Pants_Color"));
Appearance204.addChild(&Material205);

Shape203.addChild(&Appearance204);

IndexedFaceSet& IndexedFaceSet206 =  IndexedFaceSet();
IndexedFaceSet206.setCreaseAngle(1.61);
IndexedFaceSet206.setCoordIndex(new int32_t[]{5,4,0,-1,0,4,3,-1,1,7,0,-1,7,8,0,-1,8,6,0,-1,6,5,0,-1,3,2,0,-1,2,1,0,-1,1,2,9,-1,2,3,10,-1,3,4,11,-1,4,5,12,-1,5,6,13,-1,8,7,15,-1,7,1,9,-1,9,15,7,-1,15,14,8,-1,13,16,5,-1,16,12,5,-1,12,11,4,-1,11,10,3,-1,10,9,2,-1,12,16,20,-1,13,14,22,-1,14,15,23,-1,24,23,15,-1,23,22,14,-1,20,19,12,-1,17,18,26,-1,18,19,27,-1,19,20,27,-1,20,21,28,-1,22,23,29,-1,30,29,23,-1,27,26,18,-1,26,25,17,-1,30,31,25,-1,25,26,29,-1,25,29,30,-1,26,27,28,-1,26,28,29,-1,27,20,28,-1,24,15,9,-1,22,21,13,-1,29,28,22,-1,28,21,22,-1,24,31,23,-1,31,30,23,-1,25,31,17,-1,31,24,17,-1,17,24,10,-1,24,9,10,-1,18,10,11,-1,18,17,10,-1,18,12,19,-1,18,11,12,-1,21,20,13,-1,20,16,13,-1,14,13,8,-1,13,6,8,-1}, 240);
Coordinate& Coordinate207 =  Coordinate();
Coordinate207.setPoint(new float[]{-0.0969,0.804,-0.0486,-0.101,0.876,0.0336,-0.17,0.894,-0.00778,-0.17,0.891,-0.076,-0.124,0.858,-0.129,-0.076,0.843,-0.143,-0.025,0.819,-0.0889,-0.0507,0.847,0.0196,-0.00349,0.826,-0.0287,-0.0991,0.808,0.0406,-0.161,0.814,-0.00187,-0.165,0.808,-0.0755,-0.122,0.788,-0.126,-0.00993,0.762,-0.0937,-0.00993,0.762,-0.0309,-0.0491,0.777,0.0185,-0.0755,0.766,-0.139,-0.13,0.597,-0.00618,-0.132,0.6,-0.0593,-0.108,0.603,-0.105,-0.0722,0.601,-0.118,-0.0314,0.59,-0.0953,-0.0239,0.566,-0.0427,-0.047,0.566,0.0051,-0.0878,0.581,0.0217,-0.114,0.499,-0.0132,-0.116,0.488,-0.061,-0.103,0.567,-0.0991,-0.0362,0.557,-0.0926,-0.025,0.486,-0.047,-0.0507,0.497,-0.00188,-0.0862,0.513,0.018}, 96);
IndexedFaceSet206.setCoord(&Coordinate207);

Shape203.setGeometry(&IndexedFaceSet206);

fieldValue202.addChild(&Shape203);

ProtoInstance200.addChild(&fieldValue202);

fieldValue199.addChild(&ProtoInstance200);

ProtoInstance& ProtoInstance208 =  ProtoInstance();
ProtoInstance208.setDEF(CString("hanim_r_knee"));
ProtoInstance208.setName(CString("Joint"));
fieldValue& fieldValue209 =  fieldValue();
fieldValue209.setName(CString("name"));
fieldValue209.setValue(CString("r_knee"));
ProtoInstance208.addChild(&fieldValue209);

fieldValue& fieldValue210 =  fieldValue();
fieldValue210.setName(CString("center"));
fieldValue210.setValue(CString("-0.0699 0.51 -0.0166"));
ProtoInstance208.addChild(&fieldValue210);

fieldValue& fieldValue211 =  fieldValue();
fieldValue211.setName(CString("children"));
ProtoInstance& ProtoInstance212 =  ProtoInstance();
ProtoInstance212.setDEF(CString("hanim_r_calf"));
ProtoInstance212.setName(CString("Segment"));
fieldValue& fieldValue213 =  fieldValue();
fieldValue213.setName(CString("name"));
fieldValue213.setValue(CString("r_calf"));
ProtoInstance212.addChild(&fieldValue213);

fieldValue& fieldValue214 =  fieldValue();
fieldValue214.setName(CString("children"));
Shape& Shape215 =  Shape();
Shape215.setDEF(CString("_6"));
Appearance& Appearance216 =  Appearance();
Material& Material217 =  Material();
Material217.setUSE(CString("Pants_Color"));
Appearance216.addChild(&Material217);

Shape215.addChild(&Appearance216);

IndexedFaceSet& IndexedFaceSet218 =  IndexedFaceSet();
IndexedFaceSet218.setCreaseAngle(1.57);
IndexedFaceSet218.setCoordIndex(new int32_t[]{14,25,18,-1,25,32,18,-1,32,27,18,-1,27,22,18,-1,22,10,18,-1,10,6,18,-1,6,8,18,-1,8,14,18,-1,14,8,17,-1,6,10,9,-1,10,22,24,-1,22,27,39,-1,27,32,39,-1,32,25,42,-1,25,14,30,-1,17,30,14,-1,30,42,25,-1,42,39,32,-1,39,24,22,-1,24,9,10,-1,4,17,8,-1,39,42,43,-1,30,43,42,-1,17,4,1,-1,24,39,26,-1,39,43,44,-1,30,17,34,-1,16,34,17,-1,34,43,30,-1,44,26,39,-1,0,1,4,-1,1,16,17,-1,16,1,3,-1,1,0,2,-1,0,5,7,-1,5,26,28,-1,26,44,45,-1,44,43,46,-1,43,34,36,-1,34,16,15,-1,15,36,34,-1,36,46,43,-1,46,45,44,-1,45,28,26,-1,28,7,5,-1,7,2,0,-1,2,3,1,-1,3,15,16,-1,45,46,37,-1,36,15,20,-1,36,37,46,-1,13,2,7,-1,3,20,15,-1,3,2,13,-1,36,20,29,-1,29,37,36,-1,13,21,23,-1,21,33,23,-1,41,37,40,-1,37,29,31,-1,29,20,19,-1,19,31,29,-1,31,40,37,-1,40,38,41,-1,35,23,33,-1,23,12,13,-1,12,11,13,-1,31,19,11,-1,40,31,11,-1,40,11,12,-1,12,23,38,-1,12,38,40,-1,23,35,38,-1,28,21,7,-1,21,13,7,-1,45,33,28,-1,33,21,28,-1,33,45,41,-1,45,37,41,-1,33,41,35,-1,41,38,35,-1,20,3,47,-1,11,19,47,-1,19,20,47,-1,13,47,3,-1,13,11,47,-1,4,8,6,-1,26,5,24,-1,5,9,24,-1,6,9,4,-1,9,0,4,-1,9,5,0,-1}, 368);
Coordinate& Coordinate219 =  Coordinate();
Coordinate219.setPoint(new float[]{-0.123,0.363,-0.0663,-0.123,0.363,-0.04,-0.118,0.309,-0.0685,-0.118,0.311,-0.0411,-0.117,0.508,-0.0169,-0.107,0.367,-0.107,-0.105,0.539,-0.0438,-0.105,0.31,-0.108,-0.104,0.539,-0.0223,-0.101,0.51,-0.0798,-0.0975,0.54,-0.0647,-0.0948,0.0897,-0.0368,-0.0916,0.0779,-0.0604,-0.0905,0.12,-0.0647,-0.0883,0.532,-0.00349,-0.0883,0.309,-0.018,-0.0878,0.361,-0.0126,-0.0862,0.506,0.0158,-0.0814,0.55,-0.0395,-0.0765,0.11,-0.0169,-0.0744,0.13,-0.0212,-0.0738,0.117,-0.0814,-0.0722,0.546,-0.0717,-0.0717,0.0854,-0.0765,-0.0706,0.51,-0.101,-0.0609,0.533,-0.00833,-0.0588,0.365,-0.122,-0.0577,0.544,-0.0577,-0.0572,0.308,-0.123,-0.0561,0.13,-0.0245,-0.0556,0.506,-0.000272,-0.054,0.0972,-0.0175,-0.0529,0.536,-0.0368,-0.0529,0.121,-0.0873,-0.0497,0.358,-0.0234,-0.0486,0.0999,-0.0835,-0.0475,0.307,-0.0282,-0.0416,0.124,-0.0416,-0.0406,0.0918,-0.0626,-0.0406,0.513,-0.0744,-0.0384,0.0881,-0.0363,-0.0373,0.121,-0.0636,-0.0368,0.51,-0.0357,-0.0239,0.358,-0.0475,-0.0228,0.358,-0.0926,-0.0201,0.309,-0.0937,-0.0191,0.311,-0.0508,-0.0985,0.125,-0.0375}, 144);
IndexedFaceSet218.setCoord(&Coordinate219);

Shape215.setGeometry(&IndexedFaceSet218);

fieldValue214.addChild(&Shape215);

ProtoInstance212.addChild(&fieldValue214);

fieldValue211.addChild(&ProtoInstance212);

ProtoInstance& ProtoInstance220 =  ProtoInstance();
ProtoInstance220.setDEF(CString("hanim_r_ankle"));
ProtoInstance220.setName(CString("Joint"));
fieldValue& fieldValue221 =  fieldValue();
fieldValue221.setName(CString("name"));
fieldValue221.setValue(CString("r_ankle"));
ProtoInstance220.addChild(&fieldValue221);

fieldValue& fieldValue222 =  fieldValue();
fieldValue222.setName(CString("center"));
fieldValue222.setValue(CString("-0.064 0.0753 -0.0412"));
ProtoInstance220.addChild(&fieldValue222);

fieldValue& fieldValue223 =  fieldValue();
fieldValue223.setName(CString("children"));
ProtoInstance& ProtoInstance224 =  ProtoInstance();
ProtoInstance224.setDEF(CString("hanim_r_hindfoot"));
ProtoInstance224.setName(CString("Segment"));
fieldValue& fieldValue225 =  fieldValue();
fieldValue225.setName(CString("name"));
fieldValue225.setValue(CString("r_hindfoot"));
ProtoInstance224.addChild(&fieldValue225);

fieldValue& fieldValue226 =  fieldValue();
fieldValue226.setName(CString("children"));
Shape& Shape227 =  Shape();
Shape227.setDEF(CString("_7"));
Appearance& Appearance228 =  Appearance();
Material& Material229 =  Material();
Material229.setUSE(CString("Shoe_Color"));
Appearance228.addChild(&Material229);

Shape227.addChild(&Appearance228);

IndexedFaceSet& IndexedFaceSet230 =  IndexedFaceSet();
IndexedFaceSet230.setCreaseAngle(1.57);
IndexedFaceSet230.setCoordIndex(new int32_t[]{6,50,0,-1,50,8,7,-1,50,7,0,-1,1,9,8,-1,1,8,50,-1,49,10,9,-1,49,9,1,-1,46,11,10,-1,46,10,49,-1,2,12,11,-1,2,11,46,-1,3,13,12,-1,3,12,2,-1,4,14,13,-1,4,13,3,-1,45,14,4,-1,47,15,45,-1,19,15,47,-1,48,18,19,-1,5,16,18,-1,5,18,48,-1,6,17,16,-1,6,16,5,-1,0,7,17,-1,0,17,6,-1,14,20,21,-1,14,21,13,-1,13,21,12,-1,12,21,22,-1,12,22,11,-1,11,22,10,-1,17,23,16,-1,16,23,24,-1,16,24,18,-1,18,24,25,-1,18,25,19,-1,19,25,26,-1,19,26,15,-1,15,26,20,-1,20,26,27,-1,20,27,21,-1,21,27,28,-1,21,28,22,-1,22,28,29,-1,10,30,9,-1,9,30,31,-1,9,31,8,-1,8,31,32,-1,17,32,23,-1,23,33,34,-1,23,34,35,-1,23,35,24,-1,24,35,36,-1,24,36,25,-1,25,36,37,-1,25,37,26,-1,26,37,38,-1,26,38,27,-1,27,38,39,-1,27,39,28,-1,28,39,40,-1,28,40,29,-1,29,40,41,-1,29,41,30,-1,30,41,42,-1,30,42,31,-1,31,42,43,-1,31,43,32,-1,32,43,33,-1,32,33,23,-1,44,43,42,-1,44,42,41,-1,44,41,40,-1,44,40,39,-1,44,39,38,-1,44,38,37,-1,44,37,36,-1,44,36,35,-1,44,35,34,-1,44,34,33,-1,44,33,43,-1,4,3,2,-1,45,4,2,-1,45,2,46,-1,47,45,46,-1,48,46,49,-1,5,48,49,-1,5,49,1,-1,6,5,1,-1,6,1,50,-1,30,10,29,-1,10,22,29,-1,17,7,32,-1,7,8,32,-1,19,47,48,-1,47,46,48,-1,20,14,15,-1,14,45,15,-1}, 392);
Coordinate& Coordinate231 =  Coordinate();
Coordinate231.setPoint(new float[]{-0.0727,0,-0.0994,-0.1,0,-0.0594,-0.0701,0,0.146,-0.0468,0,0.153,-0.0215,0,0.146,-0.0433,0,-0.0534,-0.0529,0,-0.0923,-0.0727,0.0219,-0.0994,-0.0863,0.0219,-0.0862,-0.1,0.0219,-0.0594,-0.108,0.0219,-0.00479,-0.112,0.0156,0.117,-0.0701,0.0156,0.146,-0.0468,0.0156,0.153,-0.0215,0.0156,0.146,-0.0165,0.017,0.0777,-0.0433,0.0219,-0.0534,-0.0529,0.0219,-0.0923,-0.0445,0.0273,-0.0189,-0.0265,0.0253,0.0549,-0.0305,0.0253,0.0938,-0.069,0.0253,0.0938,-0.102,0.0253,0.0707,-0.0568,0.0573,-0.0918,-0.0492,0.0573,-0.0497,-0.0424,0.0573,-0.00142,-0.0478,0.0573,0.0341,-0.0623,0.0573,0.0366,-0.0864,0.0573,0.0245,-0.0962,0.0573,-0.0121,-0.0845,0.0573,-0.0764,-0.0758,0.0573,-0.0899,-0.0676,0.0573,-0.0962,-0.0578,0.0953,-0.0896,-0.0489,0.0953,-0.0757,-0.0459,0.0953,-0.0615,-0.0435,0.0953,-0.0292,-0.0485,0.0953,-0.00582,-0.0624,0.0953,-0.00466,-0.0857,0.0953,-0.0134,-0.0953,0.0953,-0.038,-0.0843,0.0953,-0.0803,-0.0761,0.0953,-0.0889,-0.0682,0.0953,-0.0929,-0.0675,0.13,-0.0608,-0.0165,0,0.125,-0.112,0,0.117,-0.0165,0,0.0777,-0.0393,0,-0.0129,-0.108,0,-0.00479,-0.0863,0,-0.0862}, 153);
IndexedFaceSet230.setCoord(&Coordinate231);

Shape227.setGeometry(&IndexedFaceSet230);

fieldValue226.addChild(&Shape227);

ProtoInstance224.addChild(&fieldValue226);

fieldValue223.addChild(&ProtoInstance224);

ProtoInstance220.addChild(&fieldValue223);

fieldValue211.addChild(&ProtoInstance220);

ProtoInstance208.addChild(&fieldValue211);

fieldValue199.addChild(&ProtoInstance208);

ProtoInstance196.addChild(&fieldValue199);

fieldValue151.addChild(&ProtoInstance196);

ProtoInstance148.addChild(&fieldValue151);

fieldValue147.addChild(&ProtoInstance148);

ProtoInstance& ProtoInstance232 =  ProtoInstance();
ProtoInstance232.setDEF(CString("hanim_vl1"));
ProtoInstance232.setName(CString("Joint"));
fieldValue& fieldValue233 =  fieldValue();
fieldValue233.setName(CString("name"));
fieldValue233.setValue(CString("vl1"));
ProtoInstance232.addChild(&fieldValue233);

fieldValue& fieldValue234 =  fieldValue();
fieldValue234.setName(CString("center"));
fieldValue234.setValue(CString("-0.00405 1.07 -0.0275"));
ProtoInstance232.addChild(&fieldValue234);

fieldValue& fieldValue235 =  fieldValue();
fieldValue235.setName(CString("children"));
ProtoInstance& ProtoInstance236 =  ProtoInstance();
ProtoInstance236.setDEF(CString("hanim_c7"));
ProtoInstance236.setName(CString("Segment"));
fieldValue& fieldValue237 =  fieldValue();
fieldValue237.setName(CString("name"));
fieldValue237.setValue(CString("l1"));
ProtoInstance236.addChild(&fieldValue237);

fieldValue& fieldValue238 =  fieldValue();
fieldValue238.setName(CString("children"));
Shape& Shape239 =  Shape();
Shape239.setDEF(CString("_8"));
Appearance& Appearance240 =  Appearance();
Material& Material241 =  Material();
Material241.setDEF(CString("Shirt_Color"));
Material241.setAmbientIntensity(0.25);
Material241.setDiffuseColor(new float[]{0.6,0.0745,0.1137});
Appearance240.addChild(&Material241);

ImageTexture& ImageTexture242 =  ImageTexture();
ImageTexture242.setDEF(CString("small_logo_Tex"));
ImageTexture242.setUrl(new CString[]{CString("small_logo.gif"), CString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/small_logo.gif")}, 2);
Appearance240.addChild(&ImageTexture242);

Shape239.addChild(&Appearance240);

IndexedFaceSet& IndexedFaceSet243 =  IndexedFaceSet();
IndexedFaceSet243.setCreaseAngle(1.59);
IndexedFaceSet243.setCoordIndex(new int32_t[]{0,1,2,-1,3,0,2,-1,4,5,6,-1,6,7,4,-1,8,7,6,-1,6,9,8,-1,9,10,8,-1,6,5,11,-1,9,6,12,-1,11,12,6,-1,12,10,9,-1,7,8,13,-1,13,4,7,-1,14,15,16,-1,15,17,13,-1,4,13,17,-1,17,15,18,-1,13,19,15,-1,19,13,8,-1,19,16,15,-1,16,19,8,-1,17,20,4,-1,5,4,20,-1,18,21,17,-1,20,17,21,-1,16,22,14,-1,22,16,23,-1,8,23,16,-1,23,8,10,-1,24,25,26,-1,26,27,24,-1,25,28,26,-1,28,29,30,-1,30,26,28,-1,31,32,33,-1,32,25,33,-1,25,24,34,-1,33,25,34,-1,24,35,34,-1,27,35,24,-1,33,36,31,-1,27,26,37,-1,37,26,30,-1,38,37,30,-1,33,34,39,-1,39,34,35,-1,39,35,40,-1,41,38,30,-1,35,27,42,-1,37,42,27,-1,40,35,42,-1,42,37,43,-1,37,38,44,-1,44,43,37,-1,36,45,46,-1,36,33,45,-1,40,42,47,-1,43,47,42,-1,47,48,40,-1,39,40,48,-1,47,43,49,-1,43,44,49,-1,50,49,44,-1,51,46,52,-1,46,45,52,-1,52,45,53,-1,33,53,45,-1,33,39,53,-1,49,54,47,-1,48,47,54,-1,55,56,52,-1,57,52,53,-1,57,55,52,-1,58,57,53,-1,59,58,53,-1,53,39,59,-1,39,48,59,-1,59,48,54,-1,58,59,60,-1,54,49,61,-1,59,54,61,-1,60,59,61,-1,49,50,62,-1,63,62,50,-1,62,61,49,-1,64,63,50,-1,63,64,65,-1,65,62,63,-1,66,60,61,-1,62,65,67,-1,68,67,65,-1,64,69,70,-1,64,70,65,-1,70,68,65,-1,69,71,72,-1,72,70,69,-1,73,74,75,-1,66,76,60,-1,67,77,62,-1,62,77,61,-1,77,66,61,-1,66,77,78,-1,77,67,79,-1,79,67,68,-1,79,78,77,-1,68,70,80,-1,70,72,80,-1,80,79,68,-1,74,73,81,-1,73,76,82,-1,82,81,73,-1,76,66,83,-1,78,83,66,-1,83,82,76,-1,78,79,84,-1,79,80,84,-1,84,85,78,-1,86,84,80,-1,81,82,87,-1,87,88,81,-1,82,83,89,-1,83,78,89,-1,89,87,82,-1,78,85,89,-1,90,91,92,-1,92,93,90,-1,90,94,91,-1,95,96,94,-1,94,90,95,-1,29,96,97,-1,96,95,97,-1,97,30,29,-1,30,97,41,-1,41,97,95,-1,98,99,100,-1,98,91,99,-1,101,92,91,-1,98,101,91,-1,101,102,92,-1,92,102,93,-1,36,103,31,-1,51,103,36,46,-1,103,100,31,-1,100,103,98,-1,104,90,93,-1,90,104,95,-1,95,105,41,-1,104,105,95,-1,106,101,98,-1,102,101,106,-1,107,93,102,-1,93,107,104,-1,108,104,107,-1,107,109,108,-1,110,105,104,-1,104,108,110,-1,109,107,111,-1,107,102,111,-1,111,102,106,-1,111,112,109,-1,106,112,111,-1,113,110,108,-1,110,113,114,-1,51,52,115,-1,116,115,117,-1,117,106,116,-1,118,109,112,-1,119,108,109,-1,108,119,113,-1,109,118,119,-1,120,113,119,-1,119,121,120,-1,52,56,122,-1,122,115,52,-1,115,122,123,-1,117,124,125,-1,106,117,125,-1,118,112,106,125,-1,119,118,125,-1,121,119,125,-1,126,124,123,-1,127,114,113,-1,114,127,128,-1,113,120,127,-1,114,128,129,-1,130,126,123,-1,122,130,123,-1,131,120,121,-1,131,127,120,-1,132,129,128,-1,128,127,132,-1,74,81,133,-1,81,134,133,-1,121,135,131,-1,136,132,127,-1,132,136,137,-1,138,71,129,-1,138,129,132,-1,137,138,132,-1,139,72,71,-1,72,139,80,-1,71,138,139,-1,140,135,121,-1,140,121,125,-1,141,127,131,-1,127,141,136,-1,131,135,141,-1,142,141,135,-1,143,136,141,-1,136,143,137,-1,141,142,143,-1,144,138,137,-1,144,139,138,-1,143,144,137,-1,145,146,134,-1,145,140,146,-1,134,81,145,-1,147,135,140,-1,135,147,142,-1,140,145,147,-1,148,80,139,-1,80,148,86,-1,139,144,148,-1,149,143,142,-1,149,144,143,-1,142,150,149,-1,151,148,144,-1,144,149,151,-1,152,145,81,-1,81,88,152,-1,153,147,145,-1,153,142,147,-1,145,152,153,-1,153,150,142,-1,154,86,148,-1,148,151,154,-1,155,28,25,-1,155,29,28,-1,155,25,32,-1,155,32,31,-1,155,31,100,-1,155,100,99,-1,155,99,91,-1,155,91,94,-1,155,94,96,-1,155,96,29,-1,156,151,149,-1,156,154,151,-1,156,149,150,-1,156,150,153,-1,156,153,152,-1,156,152,88,-1,156,88,87,-1,156,87,89,-1,156,89,85,-1,156,85,84,-1,156,84,86,-1,156,86,154,-1,76,157,60,-1,76,73,158,157,-1,159,158,73,75,160,-1,161,56,55,-1,60,162,58,-1,162,60,157,-1,161,55,163,-1,57,164,163,55,-1,160,163,164,-1,160,164,159,-1,164,57,165,-1,164,165,159,-1,57,58,166,165,-1,166,58,162,-1,165,166,159,-1,166,162,157,158,159,-1,140,125,167,-1,124,168,125,-1,168,167,125,-1,124,169,168,-1,146,140,167,170,-1,168,170,167,-1,168,169,170,-1,146,170,171,-1,169,171,170,-1,172,134,146,171,-1,134,172,130,-1,169,124,126,173,-1,173,126,130,-1,169,173,172,171,-1,173,130,172,-1,122,74,133,174,-1,133,134,174,-1,130,122,174,-1,134,130,174,-1,122,56,175,74,-1,74,175,176,-1,175,56,161,176,-1,74,176,75,-1,176,161,163,-1,176,160,75,-1,176,163,160,-1,115,116,177,51,-1,106,98,177,116,-1,51,177,103,-1,177,98,103,-1}, 1234);
TextureCoordinate& TextureCoordinate244 =  TextureCoordinate();
TextureCoordinate244.setPoint(new float[]{0.1611,-0.02056,0.9468,-0.02056,0.9739,0.9344,-0.137,1.094,0.1973,0.6424,0.2231,0.04876,0.5054,0.2466,0.5054,0.5929,0.8135,0.6424,0.6282,0.1972,0.7876,0.04876,0.5054,-0.05018,0.6282,-0.05018,0.5054,0.8403,0.7989,1.038,0.5054,1.038,0.8248,0.7908,0.186,0.7908,0.2118,1.038,0.6427,0.7908,-0.01977,0.5929,-0.03324,0.7908,1.044,0.7908,1.031,0.5929,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, 356);
IndexedFaceSet243.setTexCoord(&TextureCoordinate244);

Coordinate& Coordinate245 =  Coordinate();
Coordinate245.setPoint(new float[]{0.043,1.25,0.0614,0.101,1.25,0.0614,0.103,1.31,0.0195,0.021,1.32,0.0276,0.0572,1.27,-0.153,0.0524,1.15,-0.134,0,1.19,-0.14,0,1.26,-0.147,-0.0572,1.27,-0.153,-0.0228,1.18,-0.14,-0.0524,1.15,-0.134,0,1.13,-0.126,-0.0228,1.13,-0.124,0,1.31,-0.146,-0.0545,1.35,-0.138,0,1.35,-0.136,-0.0593,1.3,-0.151,0.0593,1.3,-0.151,0.0545,1.35,-0.138,-0.0255,1.3,-0.146,0.0975,1.26,-0.15,0.1,1.3,-0.148,-0.1,1.3,-0.148,-0.0975,1.26,-0.15,-0.117,1.41,-0.0395,-0.0674,1.45,-0.0314,-0.0926,1.41,-0.0937,-0.124,1.4,-0.0706,-0.0583,1.44,-0.0615,-0.0228,1.46,-0.0872,-0.0534,1.42,-0.112,-0.0228,1.42,0.00351,-0.0593,1.43,-0.0185,-0.0787,1.39,-0.00293,-0.112,1.4,-0.0131,-0.164,1.39,-0.0373,-0.0153,1.39,0.0159,-0.0953,1.35,-0.136,-0.0545,1.35,-0.138,-0.139,1.34,0.00297,-0.137,1.34,-0.0368,0,1.35,-0.136,-0.156,1.35,-0.0915,-0.132,1.29,-0.127,-0.1,1.3,-0.148,-0.0418,1.35,0.0168,-0.013,1.37,0.0167,-0.151,1.28,-0.0878,-0.136,1.32,-0.0406,-0.124,1.26,-0.125,-0.0975,1.26,-0.15,0.00228,1.37,0.0167,-0.00959,1.32,0.0276,-0.0918,1.31,0.0195,-0.141,1.25,-0.0744,-0.0316,1.25,0.0614,-0.00261,1.25,0.0458,-0.0611,1.25,0.0668,-0.0896,1.25,0.0614,-0.126,1.24,0.012,-0.126,1.22,0.0141,-0.129,1.17,-0.0523,-0.115,1.16,-0.105,-0.0851,1.18,-0.134,-0.0524,1.15,-0.134,-0.083,1.13,-0.122,-0.117,1.15,-0.018,-0.11,1.1,-0.0846,-0.0808,1.1,-0.111,-0.0228,1.13,-0.124,-0.0524,1.1,-0.119,0,1.13,-0.126,-0.0228,1.1,-0.116,-0.0563,1.15,0.0377,-0.00476,1.18,0.0458,-0.0343,1.18,0.0485,-0.0966,1.15,-0.00413,-0.12,1.1,-0.0373,-0.121,1.07,-0.0356,-0.106,1.07,-0.0711,-0.0475,1.06,-0.105,0,1.08,0.0556,-0.0787,1.08,0.0347,-0.103,1.08,0.00296,-0.0975,1.01,-0.0873,-0.134,0.998,-0.0314,-0.0475,1.02,-0.109,-0.0325,1.02,0.0529,0,1.02,0.0422,-0.0975,1.02,0.0132,0.0926,1.41,-0.0937,0.0674,1.45,-0.0314,0.117,1.41,-0.0395,0.124,1.4,-0.0706,0.0583,1.44,-0.0615,0.0534,1.42,-0.112,0.0228,1.46,-0.0872,0,1.4,-0.112,0.0787,1.39,-0.00293,0.0593,1.43,-0.0185,0.0228,1.42,0.00351,0.112,1.4,-0.0131,0.164,1.39,-0.0373,0.0153,1.39,0.0159,0.0953,1.35,-0.136,0.0545,1.35,-0.138,0.139,1.34,0.00297,0.156,1.35,-0.0915,0.132,1.29,-0.127,0.151,1.28,-0.0878,0.1,1.3,-0.148,0.137,1.34,-0.0368,0.147,1.32,-0.0406,0.124,1.26,-0.125,0.0975,1.26,-0.15,0.021,1.32,0.0276,0.0532,1.35,0.0168,0.103,1.31,0.0195,0.135,1.29,-0.0406,0.141,1.25,-0.0744,0.132,1.18,-0.083,0.134,1.19,-0.0572,0.014,1.25,0.0458,0.043,1.25,0.0614,0.101,1.25,0.0614,0.138,1.24,0.012,0.065,1.23,0.0743,0.115,1.16,-0.105,0.0851,1.18,-0.134,0.0524,1.15,-0.134,0.043,1.2,0.0641,0.127,1.14,-0.0427,0.083,1.13,-0.122,0.0162,1.18,0.0458,0.0457,1.18,0.0485,0.117,1.15,-0.018,0.11,1.1,-0.0846,0.0808,1.1,-0.111,0.0524,1.1,-0.119,0.0228,1.1,-0.116,0.108,1.15,-0.00413,0.12,1.1,-0.0373,0.121,1.07,-0.0356,0.106,1.07,-0.0711,0.0475,1.06,-0.105,0.0787,1.08,0.0347,0.0844,1.15,0.0297,0.103,1.08,0.00296,0,1.07,-0.11,0.0975,1.01,-0.0873,0.134,0.998,-0.0475,0.0475,1.02,-0.109,0.0325,1.02,0.0529,0.0975,1.02,0.0132,0,1.02,-0.117,0,1.44,-0.0389,0,1.01,-0.0259,-0.104,1.19,0.0423,-0.0778,1.19,0.0642,-0.078,1.19,0.0644,-0.0493,1.2,0.0664,-0.0281,1.22,0.0587,-0.104,1.2,0.0568,-0.0484,1.21,0.0692,-0.0549,1.21,0.0708,-0.0806,1.21,0.0713,-0.0852,1.21,0.0703,0.116,1.19,0.043,0.114,1.21,0.0572,0.0967,1.21,0.0701,0.11,1.19,0.0502,0.093,1.19,0.0622,0.0832,1.19,0.0662,0.0863,1.21,0.0728,0.0154,1.21,0.0458,-0.00393,1.21,0.0458,-0.0145,1.2,0.0512,0.0534,1.35,0.0168}, 534);
IndexedFaceSet243.setCoord(&Coordinate245);

Shape239.setGeometry(&IndexedFaceSet243);

fieldValue238.addChild(&Shape239);

ProtoInstance236.addChild(&fieldValue238);

fieldValue235.addChild(&ProtoInstance236);

ProtoInstance& ProtoInstance246 =  ProtoInstance();
ProtoInstance246.setDEF(CString("hanim_l_shoulder"));
ProtoInstance246.setName(CString("Joint"));
fieldValue& fieldValue247 =  fieldValue();
fieldValue247.setName(CString("name"));
fieldValue247.setValue(CString("l_shoulder"));
ProtoInstance246.addChild(&fieldValue247);

fieldValue& fieldValue248 =  fieldValue();
fieldValue248.setName(CString("center"));
fieldValue248.setValue(CString("0.167 1.36 -0.0518"));
ProtoInstance246.addChild(&fieldValue248);

fieldValue& fieldValue249 =  fieldValue();
fieldValue249.setName(CString("children"));
ProtoInstance& ProtoInstance250 =  ProtoInstance();
ProtoInstance250.setDEF(CString("hanim_l_upperarm"));
ProtoInstance250.setName(CString("Segment"));
fieldValue& fieldValue251 =  fieldValue();
fieldValue251.setName(CString("name"));
fieldValue251.setValue(CString("l_upperarm"));
ProtoInstance250.addChild(&fieldValue251);

fieldValue& fieldValue252 =  fieldValue();
fieldValue252.setName(CString("children"));
Transform& Transform253 =  Transform();
Transform253.setDEF(CString("l_upperarm_adjust"));
Transform253.setTranslation(new float[]{0,0.0004203,-0.01665});
Transform253.setRotation(new float[]{1,0,0,0.119});
Transform253.setCenter(new float[]{0.182,1.22,-0.047});
Shape& Shape254 =  Shape();
Appearance& Appearance255 =  Appearance();
Material& Material256 =  Material();
Material256.setDEF(CString("Skin_Color"));
Material256.setAmbientIntensity(0.25);
Material256.setDiffuseColor(new float[]{0.749,0.601,0.462});
Appearance255.addChild(&Material256);

Shape254.addChild(&Appearance255);

IndexedFaceSet& IndexedFaceSet257 =  IndexedFaceSet();
IndexedFaceSet257.setCreaseAngle(1.65);
IndexedFaceSet257.setCoordIndex(new int32_t[]{2,1,0,-1,2,3,1,-1,2,4,3,-1,2,0,5,-1,6,5,0,-1,7,2,5,-1,8,4,2,-1,8,3,4,-1,9,1,3,-1,10,0,1,-1,0,10,6,-1,1,9,10,-1,3,8,9,-1,2,7,8,-1,5,6,7,-1,11,7,6,-1,14,9,8,-1,15,10,9,-1,11,6,10,-1,10,15,11,-1,9,14,15,-1,8,13,14,-1,8,16,13,-1,7,11,12,-1,21,15,14,-1,15,17,11,-1,15,21,17,-1,16,19,13,-1,13,19,20,-1,21,14,20,-1,14,13,20,-1,12,17,18,-1,12,11,17,-1,12,18,16,-1,18,19,16,-1,12,16,7,-1,16,8,7,-1,19,18,17,-1,20,19,21,-1,19,17,21,-1}, 160);
Coordinate& Coordinate258 =  Coordinate();
Coordinate258.setPoint(new float[]{0.174,1.37,-0.0625,0.185,1.38,-0.0395,0.156,1.39,-0.0464,0.174,1.37,-0.0158,0.154,1.37,-0.0185,0.157,1.38,-0.0733,0.182,1.33,-0.0728,0.151,1.33,-0.0937,0.15,1.34,-0.000787,0.185,1.33,-0.00025,0.201,1.33,-0.0411,0.189,1.26,-0.0808,0.155,1.26,-0.0867,0.151,1.26,-0.000789,0.19,1.26,-0.00401,0.209,1.26,-0.0427,0.141,1.26,-0.0421,0.203,1.08,-0.0744,0.162,1.05,-0.0561,0.169,1.08,-0.00885,0.208,1.07,-0.00133,0.221,1.08,-0.0352}, 66);
IndexedFaceSet257.setCoord(&Coordinate258);

Shape254.setGeometry(&IndexedFaceSet257);

Transform253.addChild(&Shape254);

fieldValue252.addChild(&Transform253);

ProtoInstance250.addChild(&fieldValue252);

fieldValue249.addChild(&ProtoInstance250);

ProtoInstance& ProtoInstance259 =  ProtoInstance();
ProtoInstance259.setDEF(CString("hanim_l_elbow"));
ProtoInstance259.setName(CString("Joint"));
fieldValue& fieldValue260 =  fieldValue();
fieldValue260.setName(CString("name"));
fieldValue260.setValue(CString("l_elbow"));
ProtoInstance259.addChild(&fieldValue260);

fieldValue& fieldValue261 =  fieldValue();
fieldValue261.setName(CString("center"));
fieldValue261.setValue(CString("0.196 1.07 -0.0518"));
ProtoInstance259.addChild(&fieldValue261);

fieldValue& fieldValue262 =  fieldValue();
fieldValue262.setName(CString("children"));
ProtoInstance& ProtoInstance263 =  ProtoInstance();
ProtoInstance263.setDEF(CString("hanim_l_forearm"));
ProtoInstance263.setName(CString("Segment"));
fieldValue& fieldValue264 =  fieldValue();
fieldValue264.setName(CString("name"));
fieldValue264.setValue(CString("l_forearm"));
ProtoInstance263.addChild(&fieldValue264);

fieldValue& fieldValue265 =  fieldValue();
fieldValue265.setName(CString("children"));
Transform& Transform266 =  Transform();
Transform266.setDEF(CString("l_forearm_adjust"));
Transform266.setTranslation(new float[]{0,0.003724,-0.0236});
Transform266.setRotation(new float[]{-1,0,0,0.1});
Transform266.setCenter(new float[]{0.198,0.961,-0.0405});
Shape& Shape267 =  Shape();
Appearance& Appearance268 =  Appearance();
Material& Material269 =  Material();
Material269.setUSE(CString("Skin_Color"));
Appearance268.addChild(&Material269);

Shape267.addChild(&Appearance268);

IndexedFaceSet& IndexedFaceSet270 =  IndexedFaceSet();
IndexedFaceSet270.setCreaseAngle(1.75);
IndexedFaceSet270.setCoordIndex(new int32_t[]{2,1,0,-1,2,3,1,-1,2,4,3,-1,2,5,4,-1,2,6,5,-1,2,0,6,-1,7,6,0,-1,8,5,6,-1,9,4,5,-1,9,3,4,-1,10,1,3,-1,11,0,1,-1,0,11,7,-1,1,10,11,-1,3,9,10,-1,5,12,9,-1,5,8,12,-1,6,7,8,-1,17,16,15,-1,14,17,15,-1,14,18,17,-1,13,18,14,-1,16,17,10,-1,16,10,9,-1,15,16,9,-1,15,9,12,-1,18,13,7,-1,18,7,11,-1,13,14,8,-1,13,8,7,-1,14,15,8,-1,15,12,8,-1,17,18,10,-1,18,11,10,-1}, 136);
Coordinate& Coordinate271 =  Coordinate();
Coordinate271.setPoint(new float[]{0.177,1.09,-0.0609,0.202,1.1,-0.0566,0.189,1.1,-0.0395,0.213,1.1,-0.025,0.203,1.1,-0.0158,0.182,1.09,-0.00563,0.167,1.09,-0.0325,0.176,1.08,-0.0781,0.16,1.06,-0.0373,0.214,1.07,-0.00402,0.228,1.07,-0.0319,0.208,1.08,-0.0765,0.179,1.07,-0.00294,0.21,0.818,-0.0615,0.201,0.82,-0.0405,0.205,0.819,-0.00832,0.224,0.818,-0.00778,0.237,0.82,-0.0282,0.231,0.819,-0.0609}, 57);
IndexedFaceSet270.setCoord(&Coordinate271);

Shape267.setGeometry(&IndexedFaceSet270);

Transform266.addChild(&Shape267);

fieldValue265.addChild(&Transform266);

ProtoInstance263.addChild(&fieldValue265);

fieldValue262.addChild(&ProtoInstance263);

ProtoInstance& ProtoInstance272 =  ProtoInstance();
ProtoInstance272.setDEF(CString("hanim_l_wrist"));
ProtoInstance272.setName(CString("Joint"));
fieldValue& fieldValue273 =  fieldValue();
fieldValue273.setName(CString("name"));
fieldValue273.setValue(CString("l_wrist"));
ProtoInstance272.addChild(&fieldValue273);

fieldValue& fieldValue274 =  fieldValue();
fieldValue274.setName(CString("center"));
fieldValue274.setValue(CString("0.213 0.811 -0.0338"));
ProtoInstance272.addChild(&fieldValue274);

fieldValue& fieldValue275 =  fieldValue();
fieldValue275.setName(CString("children"));
ProtoInstance& ProtoInstance276 =  ProtoInstance();
ProtoInstance276.setDEF(CString("hanim_l_hand"));
ProtoInstance276.setName(CString("Segment"));
fieldValue& fieldValue277 =  fieldValue();
fieldValue277.setName(CString("name"));
fieldValue277.setValue(CString("l_hand"));
ProtoInstance276.addChild(&fieldValue277);

fieldValue& fieldValue278 =  fieldValue();
fieldValue278.setName(CString("children"));
Transform& Transform279 =  Transform();
Transform279.setDEF(CString("l_hand_adjust"));
Transform279.setTranslation(new float[]{0,0.005142,-0.008662});
Transform279.setRotation(new float[]{-0.06361,-0.9967,0.04988,1.333});
Transform279.setCenter(new float[]{0.213,0.811,-0.0338});
Shape& Shape280 =  Shape();
Appearance& Appearance281 =  Appearance();
Material& Material282 =  Material();
Material282.setUSE(CString("Skin_Color"));
Appearance281.addChild(&Material282);

Shape280.addChild(&Appearance281);

IndexedFaceSet& IndexedFaceSet283 =  IndexedFaceSet();
IndexedFaceSet283.setCreaseAngle(1.48);
IndexedFaceSet283.setCoordIndex(new int32_t[]{2,1,0,-1,5,4,3,-1,3,7,6,-1,2,3,6,-1,7,9,8,-1,6,7,8,-1,9,11,10,-1,8,9,10,-1,11,13,12,-1,10,11,12,-1,13,15,14,-1,12,13,14,-1,15,17,16,-1,14,15,16,-1,17,19,18,-1,16,17,18,-1,19,21,20,-1,18,19,20,-1,31,4,1,-1,4,5,0,-1,1,4,0,-1,5,3,2,-1,0,5,2,-1,26,25,24,-1,26,24,23,-1,27,26,23,-1,28,27,23,-1,28,23,22,-1,29,28,22,-1,29,22,21,-1,30,29,21,-1,15,13,11,-1,17,15,11,-1,19,17,11,-1,19,11,9,-1,31,19,9,-1,31,9,7,-1,4,31,7,-1,4,7,3,-1,30,21,19,-1,31,30,19,-1,12,14,16,-1,10,12,16,-1,10,16,18,-1,8,10,18,-1,6,8,1,-1,2,6,1,-1,39,38,37,-1,37,38,40,-1,37,40,36,-1,36,40,41,-1,36,41,35,-1,35,41,42,-1,35,42,34,-1,34,42,43,-1,34,43,33,-1,33,43,44,-1,33,44,32,-1,20,32,44,-1,20,44,45,-1,20,45,46,-1,47,8,18,-1,47,18,20,-1,47,20,46,-1,8,47,1,-1,22,33,32,-1,23,35,34,-1,23,36,35,-1,37,24,25,-1,40,38,27,-1,29,43,42,-1,45,44,30,-1,47,31,1,-1,47,46,31,-1,29,30,43,-1,30,44,43,-1,45,31,46,-1,45,30,31,-1,28,29,41,-1,29,42,41,-1,28,40,27,-1,28,41,40,-1,26,27,39,-1,27,38,39,-1,25,39,37,-1,25,26,39,-1,24,36,23,-1,24,37,36,-1,23,34,22,-1,34,33,22,-1,22,32,21,-1,32,20,21,-1}, 368);
Coordinate& Coordinate284 =  Coordinate();
Coordinate284.setPoint(new float[]{0.211,0.828,-0.0434,0.194,0.81,-0.0445,0.237,0.82,-0.0425,0.236,0.82,-0.0237,0.194,0.81,-0.0254,0.21,0.828,-0.0247,0.252,0.801,-0.0424,0.252,0.801,-0.0231,0.269,0.765,-0.0426,0.268,0.765,-0.0225,0.273,0.732,-0.0395,0.272,0.732,-0.0223,0.27,0.704,-0.0342,0.27,0.704,-0.0224,0.262,0.703,-0.0345,0.261,0.703,-0.0227,0.256,0.717,-0.0389,0.256,0.717,-0.023,0.255,0.738,-0.0408,0.255,0.738,-0.023,0.251,0.734,-0.0406,0.251,0.734,-0.0232,0.251,0.692,-0.0232,0.248,0.657,-0.0233,0.24,0.645,-0.0236,0.226,0.637,-0.0241,0.213,0.639,-0.0246,0.197,0.652,-0.0253,0.188,0.669,-0.0256,0.184,0.697,-0.0258,0.183,0.73,-0.0258,0.187,0.77,-0.0257,0.244,0.696,-0.0375,0.244,0.692,-0.0372,0.242,0.661,-0.0345,0.241,0.658,-0.0343,0.241,0.656,-0.0341,0.231,0.646,-0.0336,0.206,0.65,-0.0349,0.218,0.644,-0.034,0.205,0.652,-0.0352,0.198,0.667,-0.0367,0.195,0.691,-0.039,0.194,0.696,-0.0395,0.193,0.725,-0.042,0.193,0.731,-0.0425,0.197,0.765,-0.0449,0.197,0.77,-0.0453}, 144);
IndexedFaceSet283.setCoord(&Coordinate284);

Shape280.setGeometry(&IndexedFaceSet283);

Transform279.addChild(&Shape280);

fieldValue278.addChild(&Transform279);

ProtoInstance276.addChild(&fieldValue278);

fieldValue275.addChild(&ProtoInstance276);

ProtoInstance272.addChild(&fieldValue275);

fieldValue262.addChild(&ProtoInstance272);

ProtoInstance259.addChild(&fieldValue262);

fieldValue249.addChild(&ProtoInstance259);

ProtoInstance246.addChild(&fieldValue249);

fieldValue235.addChild(&ProtoInstance246);

ProtoInstance& ProtoInstance285 =  ProtoInstance();
ProtoInstance285.setDEF(CString("hanim_r_shoulder"));
ProtoInstance285.setName(CString("Joint"));
fieldValue& fieldValue286 =  fieldValue();
fieldValue286.setName(CString("name"));
fieldValue286.setValue(CString("r_shoulder"));
ProtoInstance285.addChild(&fieldValue286);

fieldValue& fieldValue287 =  fieldValue();
fieldValue287.setName(CString("center"));
fieldValue287.setValue(CString("-0.167 1.36 -0.0458"));
ProtoInstance285.addChild(&fieldValue287);

fieldValue& fieldValue288 =  fieldValue();
fieldValue288.setName(CString("children"));
ProtoInstance& ProtoInstance289 =  ProtoInstance();
ProtoInstance289.setDEF(CString("hanim_r_upperarm"));
ProtoInstance289.setName(CString("Segment"));
fieldValue& fieldValue290 =  fieldValue();
fieldValue290.setName(CString("name"));
fieldValue290.setValue(CString("r_upperarm"));
ProtoInstance289.addChild(&fieldValue290);

fieldValue& fieldValue291 =  fieldValue();
fieldValue291.setName(CString("children"));
Transform& Transform292 =  Transform();
Transform292.setDEF(CString("r_upperarm_adjust"));
Transform292.setTranslation(new float[]{0,0.000589,-0.01169});
Transform292.setRotation(new float[]{1,0,0,0.0836});
Transform292.setCenter(new float[]{-0.182,1.22,-0.047});
Shape& Shape293 =  Shape();
Appearance& Appearance294 =  Appearance();
Material& Material295 =  Material();
Material295.setUSE(CString("Skin_Color"));
Appearance294.addChild(&Material295);

Shape293.addChild(&Appearance294);

IndexedFaceSet& IndexedFaceSet296 =  IndexedFaceSet();
IndexedFaceSet296.setCreaseAngle(1.53);
IndexedFaceSet296.setCoordIndex(new int32_t[]{14,10,20,-1,10,13,20,-1,13,22,20,-1,19,14,20,-1,14,19,12,-1,19,20,24,-1,20,22,25,-1,22,13,25,-1,13,10,11,-1,10,14,5,-1,12,5,14,-1,5,11,10,-1,11,25,13,-1,25,24,20,-1,24,12,19,-1,12,24,9,-1,25,11,8,-1,11,5,2,-1,5,12,9,-1,9,2,5,-1,2,8,11,-1,8,23,25,-1,23,27,25,-1,21,9,24,-1,9,21,7,-1,27,23,18,-1,23,8,18,-1,8,2,6,-1,2,9,7,-1,7,1,2,-1,1,6,2,-1,6,18,8,-1,18,26,27,-1,16,7,21,-1,7,16,4,-1,16,26,17,-1,26,18,15,-1,18,6,3,-1,6,1,0,-1,1,7,0,-1,4,0,7,-1,0,3,6,-1,3,15,18,-1,15,17,26,-1,17,4,16,-1,3,0,15,-1,15,0,4,-1,15,4,17,-1,25,27,24,-1,27,21,24,-1,27,26,21,-1,26,16,21,-1}, 208);
Coordinate& Coordinate297 =  Coordinate();
Coordinate297.setPoint(new float[]{-0.221,1.08,-0.0352,-0.214,1.14,-0.0405,-0.209,1.26,-0.0427,-0.208,1.07,-0.00133,-0.203,1.08,-0.0744,-0.201,1.33,-0.0411,-0.198,1.14,-0.0024,-0.198,1.13,-0.076,-0.19,1.26,-0.00401,-0.189,1.26,-0.0808,-0.185,1.38,-0.0395,-0.185,1.33,-0.00025,-0.182,1.33,-0.0728,-0.174,1.37,-0.0158,-0.174,1.37,-0.0625,-0.169,1.08,-0.00885,-0.167,1.13,-0.0744,-0.162,1.05,-0.0561,-0.16,1.13,-0.000793,-0.157,1.38,-0.0733,-0.156,1.39,-0.0464,-0.155,1.26,-0.0867,-0.154,1.37,-0.0185,-0.151,1.26,-0.000789,-0.151,1.33,-0.0937,-0.15,1.34,-0.000787,-0.15,1.13,-0.0411,-0.141,1.26,-0.0421}, 84);
IndexedFaceSet296.setCoord(&Coordinate297);

Shape293.setGeometry(&IndexedFaceSet296);

Transform292.addChild(&Shape293);

fieldValue291.addChild(&Transform292);

ProtoInstance289.addChild(&fieldValue291);

fieldValue288.addChild(&ProtoInstance289);

ProtoInstance& ProtoInstance298 =  ProtoInstance();
ProtoInstance298.setDEF(CString("hanim_r_elbow"));
ProtoInstance298.setName(CString("Joint"));
fieldValue& fieldValue299 =  fieldValue();
fieldValue299.setName(CString("name"));
fieldValue299.setValue(CString("r_elbow"));
ProtoInstance298.addChild(&fieldValue299);

fieldValue& fieldValue300 =  fieldValue();
fieldValue300.setName(CString("center"));
fieldValue300.setValue(CString("-0.192 1.07 -0.0498"));
ProtoInstance298.addChild(&fieldValue300);

fieldValue& fieldValue301 =  fieldValue();
fieldValue301.setName(CString("children"));
ProtoInstance& ProtoInstance302 =  ProtoInstance();
ProtoInstance302.setDEF(CString("hanim_r_forearm"));
ProtoInstance302.setName(CString("Segment"));
fieldValue& fieldValue303 =  fieldValue();
fieldValue303.setName(CString("name"));
fieldValue303.setValue(CString("r_forearm"));
ProtoInstance302.addChild(&fieldValue303);

fieldValue& fieldValue304 =  fieldValue();
fieldValue304.setName(CString("children"));
Transform& Transform305 =  Transform();
Transform305.setDEF(CString("r_forearm_adjust"));
Transform305.setTranslation(new float[]{0,0.003466,-0.01065});
Transform305.setRotation(new float[]{-1,0,0,0.1254});
Transform305.setCenter(new float[]{-0.198,0.961,-0.0397});
Shape& Shape306 =  Shape();
Appearance& Appearance307 =  Appearance();
Material& Material308 =  Material();
Material308.setUSE(CString("Skin_Color"));
Appearance307.addChild(&Material308);

Shape306.addChild(&Appearance307);

IndexedFaceSet& IndexedFaceSet309 =  IndexedFaceSet();
IndexedFaceSet309.setCreaseAngle(1.73);
IndexedFaceSet309.setCoordIndex(new int32_t[]{20,13,15,-1,13,8,15,-1,8,12,15,-1,12,18,15,-1,18,22,15,-1,22,20,15,-1,20,22,21,-1,22,18,24,-1,18,12,7,-1,12,8,7,-1,8,13,3,-1,13,20,10,-1,21,10,20,-1,10,3,13,-1,3,7,8,-1,7,19,18,-1,19,24,18,-1,24,21,22,-1,21,24,23,-1,24,19,16,-1,19,7,6,-1,7,3,1,-1,3,10,5,-1,10,21,17,-1,17,5,10,-1,5,1,3,-1,1,6,7,-1,6,16,19,-1,16,23,24,-1,23,17,21,-1,1,5,2,-1,5,17,9,-1,9,2,5,-1,1,4,6,-1,4,16,6,-1,23,9,17,-1,9,23,14,-1,23,16,11,-1,4,11,16,-1,11,14,23,-1,11,4,0,-1,11,0,14,-1,0,2,14,-1,14,2,9,-1,2,0,1,-1,0,4,1,-1}, 184);
Coordinate& Coordinate310 =  Coordinate();
Coordinate310.setPoint(new float[]{-0.237,0.82,-0.0282,-0.235,1.02,-0.033,-0.231,0.819,-0.0609,-0.228,1.07,-0.0319,-0.224,0.818,-0.00778,-0.221,1.01,-0.0744,-0.218,1.01,-0.00133,-0.214,1.07,-0.00402,-0.213,1.1,-0.025,-0.21,0.818,-0.0615,-0.208,1.08,-0.0765,-0.205,0.819,-0.00832,-0.203,1.1,-0.0158,-0.202,1.1,-0.0566,-0.201,0.82,-0.0405,-0.189,1.1,-0.0395,-0.183,1.01,-0.00831,-0.183,1.01,-0.0781,-0.182,1.09,-0.00563,-0.179,1.07,-0.00294,-0.177,1.09,-0.0609,-0.176,1.08,-0.0781,-0.167,1.09,-0.0325,-0.166,1,-0.0405,-0.16,1.06,-0.0373}, 75);
IndexedFaceSet309.setCoord(&Coordinate310);

Shape306.setGeometry(&IndexedFaceSet309);

Transform305.addChild(&Shape306);

fieldValue304.addChild(&Transform305);

ProtoInstance302.addChild(&fieldValue304);

fieldValue301.addChild(&ProtoInstance302);

ProtoInstance& ProtoInstance311 =  ProtoInstance();
ProtoInstance311.setDEF(CString("hanim_r_wrist"));
ProtoInstance311.setName(CString("Joint"));
fieldValue& fieldValue312 =  fieldValue();
fieldValue312.setName(CString("name"));
fieldValue312.setValue(CString("r_wrist"));
ProtoInstance311.addChild(&fieldValue312);

fieldValue& fieldValue313 =  fieldValue();
fieldValue313.setName(CString("center"));
fieldValue313.setValue(CString("-0.217 0.811 -0.0338"));
ProtoInstance311.addChild(&fieldValue313);

fieldValue& fieldValue314 =  fieldValue();
fieldValue314.setName(CString("children"));
ProtoInstance& ProtoInstance315 =  ProtoInstance();
ProtoInstance315.setDEF(CString("hanim_r_hand"));
ProtoInstance315.setName(CString("Segment"));
fieldValue& fieldValue316 =  fieldValue();
fieldValue316.setName(CString("name"));
fieldValue316.setValue(CString("r_hand"));
ProtoInstance315.addChild(&fieldValue316);

fieldValue& fieldValue317 =  fieldValue();
fieldValue317.setName(CString("children"));
Transform& Transform318 =  Transform();
Transform318.setDEF(CString("r_hand_adjust"));
Transform318.setRotation(new float[]{-0.09024,0.994,-0.0624,1.216});
Transform318.setCenter(new float[]{-0.217,0.811,-0.0338});
Shape& Shape319 =  Shape();
Appearance& Appearance320 =  Appearance();
Material& Material321 =  Material();
Material321.setUSE(CString("Skin_Color"));
Appearance320.addChild(&Material321);

Shape319.addChild(&Appearance320);

IndexedFaceSet& IndexedFaceSet322 =  IndexedFaceSet();
IndexedFaceSet322.setCreaseAngle(1.57);
IndexedFaceSet322.setCoordIndex(new int32_t[]{10,9,0,-1,11,30,31,-1,1,12,11,-1,1,11,0,-1,2,13,12,-1,2,12,1,-1,3,14,13,-1,3,13,2,-1,4,15,14,-1,4,14,3,-1,5,16,15,-1,5,15,4,-1,6,17,16,-1,6,16,5,-1,7,18,17,-1,7,17,6,-1,8,19,18,-1,8,18,7,-1,10,31,30,-1,10,30,9,-1,0,11,31,-1,0,31,10,-1,22,23,24,-1,21,22,24,-1,21,24,25,-1,21,25,26,-1,20,21,26,-1,20,26,27,-1,19,20,27,-1,19,27,28,-1,14,15,16,-1,14,16,17,-1,14,17,18,-1,13,14,18,-1,13,18,29,-1,12,13,29,-1,12,29,30,-1,11,12,30,-1,18,19,28,-1,18,28,29,-1,6,5,4,-1,6,4,3,-1,7,6,3,-1,7,3,2,-1,9,2,1,-1,9,1,0,-1,32,38,33,-1,33,38,39,-1,33,39,34,-1,34,39,40,-1,34,40,35,-1,35,40,41,-1,35,41,36,-1,36,41,42,-1,36,42,37,-1,37,42,43,-1,37,43,44,-1,44,43,8,-1,44,8,45,-1,45,8,46,-1,46,8,7,-1,46,7,2,-1,46,2,47,-1,9,47,2,-1,25,34,35,-1,25,33,34,-1,25,24,33,-1,24,32,33,-1,32,24,23,-1,40,39,21,-1,41,40,21,-1,43,19,8,-1,43,20,19,-1,43,42,20,-1,21,20,41,-1,20,42,41,-1,38,22,39,-1,22,21,39,-1,32,23,38,-1,23,22,38,-1,26,25,35,-1,27,36,37,-1,27,37,28,-1,37,44,28,-1,26,35,27,-1,35,36,27,-1,28,44,45,-1,29,46,47,-1,29,9,30,-1,29,47,9,-1,28,45,29,-1,45,46,29,-1}, 368);
Coordinate& Coordinate323 =  Coordinate();
Coordinate323.setPoint(new float[]{-0.237,0.82,-0.0425,-0.252,0.801,-0.0424,-0.269,0.765,-0.0426,-0.273,0.732,-0.0395,-0.27,0.704,-0.0342,-0.262,0.703,-0.0345,-0.256,0.717,-0.0389,-0.255,0.738,-0.0408,-0.251,0.734,-0.0406,-0.194,0.81,-0.0445,-0.211,0.828,-0.0434,-0.236,0.82,-0.0237,-0.252,0.801,-0.0231,-0.268,0.765,-0.0225,-0.272,0.732,-0.0223,-0.27,0.704,-0.0224,-0.261,0.703,-0.0227,-0.256,0.717,-0.023,-0.255,0.738,-0.023,-0.251,0.734,-0.0232,-0.251,0.692,-0.0232,-0.248,0.657,-0.0233,-0.24,0.645,-0.0236,-0.226,0.637,-0.0241,-0.213,0.639,-0.0246,-0.197,0.652,-0.0253,-0.188,0.669,-0.0256,-0.184,0.697,-0.0258,-0.183,0.73,-0.0258,-0.187,0.77,-0.0257,-0.194,0.81,-0.0254,-0.21,0.828,-0.0247,-0.221,0.641,-0.0336,-0.21,0.65,-0.0348,-0.206,0.652,-0.0352,-0.198,0.667,-0.0368,-0.193,0.692,-0.0392,-0.192,0.696,-0.0396,-0.231,0.646,-0.0336,-0.238,0.656,-0.0342,-0.24,0.658,-0.0344,-0.24,0.662,-0.0347,-0.243,0.692,-0.0372,-0.243,0.696,-0.0376,-0.192,0.725,-0.0421,-0.192,0.73,-0.0426,-0.195,0.766,-0.0451,-0.196,0.77,-0.0454}, 144);
IndexedFaceSet322.setCoord(&Coordinate323);

Shape319.setGeometry(&IndexedFaceSet322);

Transform318.addChild(&Shape319);

fieldValue317.addChild(&Transform318);

ProtoInstance315.addChild(&fieldValue317);

fieldValue314.addChild(&ProtoInstance315);

ProtoInstance311.addChild(&fieldValue314);

fieldValue301.addChild(&ProtoInstance311);

ProtoInstance298.addChild(&fieldValue301);

fieldValue288.addChild(&ProtoInstance298);

ProtoInstance285.addChild(&fieldValue288);

fieldValue235.addChild(&ProtoInstance285);

ProtoInstance& ProtoInstance324 =  ProtoInstance();
ProtoInstance324.setDEF(CString("hanim_vc4"));
ProtoInstance324.setName(CString("Joint"));
fieldValue& fieldValue325 =  fieldValue();
fieldValue325.setName(CString("name"));
fieldValue325.setValue(CString("vc4"));
ProtoInstance324.addChild(&fieldValue325);

fieldValue& fieldValue326 =  fieldValue();
fieldValue326.setName(CString("center"));
fieldValue326.setValue(CString("0 1.43 -0.0458"));
ProtoInstance324.addChild(&fieldValue326);

fieldValue& fieldValue327 =  fieldValue();
fieldValue327.setName(CString("children"));
ProtoInstance& ProtoInstance328 =  ProtoInstance();
ProtoInstance328.setDEF(CString("hanim_c4"));
ProtoInstance328.setName(CString("Segment"));
fieldValue& fieldValue329 =  fieldValue();
fieldValue329.setName(CString("name"));
fieldValue329.setValue(CString("c4"));
ProtoInstance328.addChild(&fieldValue329);

fieldValue& fieldValue330 =  fieldValue();
fieldValue330.setName(CString("children"));
Shape& Shape331 =  Shape();
Shape331.setDEF(CString("_9"));
Appearance& Appearance332 =  Appearance();
Material& Material333 =  Material();
Material333.setUSE(CString("Skin_Color"));
Appearance332.addChild(&Material333);

Shape331.addChild(&Appearance332);

IndexedFaceSet& IndexedFaceSet334 =  IndexedFaceSet();
IndexedFaceSet334.setDEF(CString("neck"));
IndexedFaceSet334.setCreaseAngle(1.91);
IndexedFaceSet334.setCoordIndex(new int32_t[]{6,5,2,-1,6,2,3,-1,5,4,1,-1,5,1,2,-1,4,7,0,-1,4,0,1,-1,11,10,9,-1,11,9,8,-1,10,13,12,-1,10,12,9,-1,13,15,14,-1,13,14,12,-1,6,3,11,-1,6,11,8,-1,7,14,15,-1,7,15,0,-1,2,10,11,-1,2,11,3,-1,2,1,13,-1,2,13,10,-1,1,0,15,-1,1,15,13,-1,9,5,6,-1,9,6,8,-1,9,12,4,-1,9,4,5,-1,12,14,7,-1,12,7,4,-1}, 112);
Coordinate& Coordinate335 =  Coordinate();
Coordinate335.setPoint(new float[]{0.0105,1.54,-0.1,0.0357,1.54,-0.0685,0.0382,1.55,-0.0474,0.0105,1.55,-0.0204,0.0373,1.4,-0.0593,0.0577,1.4,-0.0266,0.0158,1.4,0.00512,0.0132,1.41,-0.0824,-0.0158,1.4,0.00512,-0.0577,1.4,-0.0266,-0.0382,1.55,-0.0474,-0.0105,1.55,-0.0204,-0.0373,1.4,-0.0593,-0.0357,1.54,-0.0685,-0.0132,1.41,-0.0824,-0.0105,1.54,-0.1}, 48);
IndexedFaceSet334.setCoord(&Coordinate335);

Shape331.setGeometry(&IndexedFaceSet334);

fieldValue330.addChild(&Shape331);

ProtoInstance328.addChild(&fieldValue330);

fieldValue327.addChild(&ProtoInstance328);

ProtoInstance& ProtoInstance336 =  ProtoInstance();
ProtoInstance336.setDEF(CString("hanim_skullbase"));
ProtoInstance336.setName(CString("Joint"));
fieldValue& fieldValue337 =  fieldValue();
fieldValue337.setName(CString("name"));
fieldValue337.setValue(CString("skullbase"));
ProtoInstance336.addChild(&fieldValue337);

fieldValue& fieldValue338 =  fieldValue();
fieldValue338.setName(CString("center"));
fieldValue338.setValue(CString("0 1.54 -0.0409"));
ProtoInstance336.addChild(&fieldValue338);

fieldValue& fieldValue339 =  fieldValue();
fieldValue339.setName(CString("children"));
ProtoInstance& ProtoInstance340 =  ProtoInstance();
ProtoInstance340.setDEF(CString("hanim_skull"));
ProtoInstance340.setName(CString("Segment"));
fieldValue& fieldValue341 =  fieldValue();
fieldValue341.setName(CString("name"));
fieldValue341.setValue(CString("skull"));
ProtoInstance340.addChild(&fieldValue341);

fieldValue& fieldValue342 =  fieldValue();
fieldValue342.setName(CString("children"));
Shape& Shape343 =  Shape();
Shape343.setDEF(CString("_10"));
Appearance& Appearance344 =  Appearance();
Material& Material345 =  Material();
Material345.setUSE(CString("Skin_Color"));
Appearance344.addChild(&Material345);

Shape343.addChild(&Appearance344);

IndexedFaceSet& IndexedFaceSet346 =  IndexedFaceSet();
IndexedFaceSet346.setDEF(CString("headIFS"));
IndexedFaceSet346.setCreaseAngle(0.7854);
IndexedFaceSet346.setColorIndex(new int[]{1,1,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,1,1,1,-1,1,1,1,-1,0,0,0,-1,1,1,1,-1,1,1,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,1,1,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1}, 1640);
IndexedFaceSet346.setCoordIndex(new int32_t[]{48,87,58,-1,91,92,59,-1,59,92,88,-1,88,93,231,-1,232,86,233,-1,86,89,233,-1,89,57,56,-1,49,55,57,-1,102,86,96,-1,86,90,96,-1,97,95,96,-1,97,127,95,-1,41,96,154,-1,41,102,96,-1,99,102,41,-1,153,99,41,-1,102,40,86,-1,234,235,236,-1,87,237,58,-1,56,57,91,-1,87,234,237,-1,234,236,237,-1,89,49,57,-1,49,50,55,-1,40,89,86,-1,89,56,233,-1,232,90,86,-1,90,97,96,-1,92,93,88,-1,93,94,231,-1,232,231,94,-1,97,90,232,-1,96,42,154,-1,95,42,96,-1,53,46,45,-1,53,45,51,-1,53,51,92,-1,92,51,52,-1,92,52,93,-1,94,93,52,-1,94,52,4,-1,97,232,94,-1,54,47,46,-1,54,46,53,-1,55,47,54,-1,50,47,55,-1,34,33,50,-1,34,50,49,-1,35,34,49,-1,35,49,89,-1,35,89,40,-1,99,39,102,-1,39,35,40,-1,31,34,35,-1,31,35,32,-1,14,32,35,-1,14,35,39,-1,14,39,98,-1,137,38,153,-1,38,99,153,-1,38,98,99,-1,37,238,239,-1,11,238,37,-1,101,37,36,-1,241,141,242,-1,10,12,242,-1,12,13,14,-1,12,14,243,-1,13,15,32,-1,13,32,14,-1,15,16,31,-1,15,31,32,-1,2,70,10,-1,2,10,141,-1,70,69,12,-1,70,12,10,-1,69,68,13,-1,69,13,12,-1,68,67,15,-1,68,15,13,-1,67,66,16,-1,67,16,15,-1,98,39,99,-1,101,11,37,-1,100,101,36,-1,36,244,240,-1,141,10,242,-1,12,243,242,-1,36,37,239,-1,36,239,244,-1,57,55,91,-1,55,54,91,-1,39,40,102,-1,123,103,120,-1,114,122,104,-1,115,122,114,-1,208,105,115,-1,210,119,211,-1,210,106,119,-1,116,107,106,-1,107,108,117,-1,126,119,109,-1,126,110,119,-1,126,95,125,-1,95,127,125,-1,154,126,111,-1,126,109,111,-1,111,109,112,-1,111,112,153,-1,119,113,109,-1,207,213,214,-1,123,209,103,-1,213,212,214,-1,209,214,103,-1,209,207,214,-1,107,117,106,-1,108,118,117,-1,119,106,113,-1,210,116,106,-1,119,110,211,-1,126,125,110,-1,115,105,122,-1,208,124,105,-1,124,208,211,-1,211,110,125,-1,154,42,126,-1,126,42,95,-1,168,128,121,-1,170,168,121,-1,122,170,121,-1,172,170,122,-1,105,172,122,-1,172,105,124,-1,4,172,124,-1,124,211,125,-1,128,130,129,-1,121,128,129,-1,129,130,108,-1,108,130,118,-1,118,131,132,-1,117,118,132,-1,117,132,133,-1,106,117,133,-1,113,106,133,-1,109,152,112,-1,113,133,152,-1,133,132,134,-1,135,133,134,-1,133,135,136,-1,152,133,136,-1,148,152,136,-1,153,138,137,-1,153,112,138,-1,112,148,138,-1,219,217,139,-1,36,240,149,-1,139,217,140,-1,149,139,151,-1,36,149,100,-1,220,141,241,-1,220,150,142,-1,136,143,150,-1,221,136,150,-1,135,144,143,-1,136,135,143,-1,134,158,144,-1,135,134,144,-1,142,161,2,-1,141,142,2,-1,150,145,161,-1,142,150,161,-1,143,146,145,-1,150,143,145,-1,144,147,146,-1,143,144,146,-1,158,160,147,-1,144,158,147,-1,112,152,148,-1,139,140,151,-1,149,151,100,-1,240,218,149,-1,220,142,141,-1,220,221,150,-1,219,139,149,-1,218,219,149,-1,104,108,107,-1,104,129,108,-1,109,113,152,-1,153,41,111,-1,129,104,122,-1,129,122,121,-1,91,54,92,-1,54,53,92,-1,97,94,127,-1,127,94,4,-1,125,127,124,-1,127,4,124,-1,154,111,41,-1,31,30,33,-1,31,33,34,-1,16,17,30,-1,16,30,31,-1,66,65,17,-1,66,17,16,-1,2,73,156,-1,2,156,70,-1,156,72,66,-1,156,66,67,-1,156,67,68,-1,156,68,69,-1,156,69,70,-1,72,71,65,-1,72,65,66,-1,17,18,30,-1,45,44,51,-1,51,44,43,-1,51,43,52,-1,52,43,1,-1,52,1,4,-1,245,246,27,-1,245,27,3,-1,246,247,28,-1,246,28,27,-1,248,22,29,-1,248,29,28,-1,248,28,247,-1,27,26,0,-1,27,0,3,-1,27,28,25,-1,27,25,26,-1,29,24,25,-1,29,25,28,-1,22,23,24,-1,22,24,29,-1,249,250,22,-1,249,22,248,-1,250,60,23,-1,250,23,22,-1,17,254,18,-1,65,254,17,-1,71,64,65,-1,63,74,75,-1,63,75,61,-1,64,255,254,-1,75,62,61,-1,62,76,60,-1,76,77,23,-1,76,23,60,-1,77,24,23,-1,77,78,25,-1,77,25,24,-1,78,84,26,-1,78,26,25,-1,84,192,0,-1,84,0,26,-1,84,83,193,-1,84,193,192,-1,79,83,84,-1,79,84,78,-1,76,79,78,-1,76,78,77,-1,80,83,79,-1,80,204,83,-1,75,81,80,-1,81,85,204,-1,81,204,80,-1,74,81,75,-1,74,82,81,-1,82,5,85,-1,82,85,81,-1,155,8,71,-1,155,71,72,-1,8,6,64,-1,8,64,71,-1,6,7,255,-1,6,255,64,-1,7,9,256,-1,7,256,255,-1,9,257,256,-1,73,155,156,-1,155,72,156,-1,204,193,83,-1,64,254,65,-1,131,157,134,-1,132,131,134,-1,157,159,158,-1,134,157,158,-1,159,206,160,-1,158,159,160,-1,203,73,2,-1,161,203,2,-1,160,162,203,-1,147,160,203,-1,146,147,203,-1,145,146,203,-1,161,145,203,-1,206,163,162,-1,160,206,162,-1,157,164,159,-1,170,169,168,-1,171,169,170,-1,172,171,170,-1,1,171,172,-1,4,1,172,-1,173,227,245,-1,3,173,245,-1,174,226,227,-1,173,174,227,-1,176,175,215,-1,174,176,215,-1,226,174,215,-1,0,177,173,-1,3,0,173,-1,178,174,173,-1,177,178,173,-1,178,179,176,-1,174,178,176,-1,179,180,175,-1,176,179,175,-1,175,225,216,-1,215,175,216,-1,180,181,225,-1,175,180,225,-1,164,228,159,-1,159,228,206,-1,206,185,163,-1,187,186,184,-1,183,187,184,-1,228,229,185,-1,183,182,187,-1,181,188,182,-1,180,189,188,-1,181,180,188,-1,180,179,189,-1,178,190,189,-1,179,178,189,-1,177,191,190,-1,178,177,190,-1,0,192,191,-1,177,0,191,-1,193,205,191,-1,192,193,191,-1,191,205,194,-1,190,191,194,-1,190,194,188,-1,189,190,188,-1,194,205,195,-1,205,204,195,-1,195,196,187,-1,204,85,196,-1,195,204,196,-1,187,196,186,-1,196,197,186,-1,85,5,197,-1,196,85,197,-1,163,198,202,-1,162,163,202,-1,185,199,198,-1,163,185,198,-1,229,200,199,-1,185,229,199,-1,230,201,200,-1,229,230,200,-1,230,257,201,-1,203,202,73,-1,203,162,202,-1,205,193,204,-1,206,228,185,-1,198,8,155,-1,198,155,202,-1,155,73,202,-1,199,6,8,-1,199,8,198,-1,7,6,199,-1,7,199,200,-1,201,9,7,-1,201,7,200,-1,201,257,9,-1,188,194,195,-1,188,195,182,-1,195,187,182,-1,80,79,76,-1,80,62,75,-1,80,76,62,-1,47,50,33,-1,131,118,130,-1,20,21,47,-1,21,46,47,-1,20,33,19,-1,20,47,33,-1,33,30,19,-1,30,18,19,-1,62,60,251,-1,60,250,251,-1,252,61,251,-1,61,62,251,-1,252,63,61,-1,252,253,63,-1,166,130,167,-1,130,128,167,-1,166,131,130,-1,166,165,131,-1,165,157,131,-1,165,164,157,-1,224,181,182,-1,224,225,181,-1,224,183,223,-1,224,182,183,-1,183,184,223,-1,184,222,223,-1}, 1640);
CColor& Color347 =  CColor();
Color347.setColor(new float[]{0.749,0.601,0.462,0.1735,0.2602,0.749,0.6364,0.133,0.1526,0.4545,0.2759,0.1902}, 12);
IndexedFaceSet346.setColor(&Color347);

Coordinate& Coordinate348 =  Coordinate();
Coordinate348.setDEF(CString("Face"));
Coordinate348.setPoint(new float[]{0,1.708,-0.0435,0,1.655,0.04322,0,1.486,0.02335,0,1.694,0.007789,0,1.631,0.051,0,1.524,-0.102,0.04,1.51,-0.07278,0.04029,1.514,-0.08254,0.03528,1.502,-0.05013,0.03479,1.517,-0.09269,0.0116,1.494,0.03382,0.01946,1.52,0.03421,0.02204,1.494,0.0272,0.02734,1.498,0.02215,0.02788,1.528,0.03084,0.0338,1.503,0.0124,0.04008,1.509,0.002821,0.05122,1.518,-0.02784,0.05867,1.544,-0.03316,0.06433,1.563,-0.03678,0.06732,1.583,-0.03683,0.06769,1.617,-0.03436,0.06641,1.637,-0.03046,0.06818,1.637,-0.04285,0.06308,1.666,-0.04036,0.05305,1.685,-0.03987,0.03136,1.7,-0.0413,0.02919,1.688,0.0091,0.05272,1.674,-0.001657,0.06061,1.66,-0.0101,0.05254,1.541,-0.01363,0.04099,1.527,0.008832,0.03528,1.524,0.02097,0.05792,1.557,-0.004307,0.04413,1.539,0.0149,0.03746,1.539,0.02656,0.003407,1.524,0.04155,0.01481,1.526,0.03912,0.005112,1.532,0.04358,0.02438,1.542,0.03578,0.02636,1.55,0.03808,0.006135,1.55,0.0545,0,1.559,0.05502,0.02958,1.651,0.03965,0.04847,1.643,0.02895,0.05856,1.63,0.01803,0.06182,1.614,0.008199,0.06194,1.6,0.002668,0.01489,1.583,0.04109,0.05282,1.569,0.02821,0.05767,1.58,0.0184,0.04643,1.625,0.03705,0.0264,1.628,0.04807,0.0556,1.609,0.02579,0.05467,1.599,0.02153,0.05316,1.589,0.0207,0.03603,1.58,0.03536,0.04597,1.586,0.02904,0.02106,1.592,0.03748,0.03428,1.595,0.03294,0.06808,1.617,-0.06112,0.06714,1.564,-0.07003,0.06993,1.594,-0.08238,0.05324,1.536,-0.05922,0.04904,1.521,-0.05132,0.04758,1.514,-0.03107,0.03539,1.503,-0.00093,0.02999,1.498,0.006194,0.02308,1.492,0.01628,0.01772,1.488,0.02135,0.01378,1.488,0.02484,0.04349,1.512,-0.03987,0.02308,1.499,-0.02088,0,1.487,-0.018,0.04795,1.531,-0.08973,0.05739,1.555,-0.0982,0.06815,1.622,-0.107,0.06872,1.655,-0.08466,0.05233,1.678,-0.09642,0.05334,1.631,-0.1239,0.05011,1.581,-0.1193,0.04359,1.551,-0.1067,0.03839,1.528,-0.09652,0.03399,1.636,-0.1304,0.03224,1.685,-0.1024,0,1.557,-0.1126,0.01864,1.566,0.04105,0.0249,1.58,0.0387,0.02735,1.596,0.03552,0.04317,1.564,0.03643,0.01246,1.577,0.04276,0.04354,1.59,0.02822,0.04557,1.601,0.03652,0.0291,1.603,0.04274,0.01856,1.6,0.04349,0,1.579,0.04893,0.01064,1.558,0.04476,0.005501,1.578,0.04574,0.01405,1.531,0.04152,0.01037,1.544,0.04266,0,1.515,0.03836,0.00797,1.515,0.03774,0.01824,1.55,0.04063,-0.0249,1.58,0.0387,-0.04354,1.59,0.02822,-0.0291,1.603,0.04274,-0.04317,1.564,0.03643,-0.04597,1.586,0.02904,-0.05316,1.589,0.0207,-0.01824,1.55,0.04063,-0.01246,1.577,0.04276,-0.006135,1.55,0.0545,-0.01037,1.544,0.04266,-0.02636,1.55,0.03808,-0.03428,1.595,0.03294,-0.02735,1.596,0.03552,-0.03603,1.58,0.03536,-0.05282,1.569,0.02821,-0.05767,1.58,0.0184,-0.01864,1.566,0.04105,-0.01489,1.583,0.04109,-0.0556,1.609,0.02579,-0.04557,1.601,0.03652,-0.02106,1.592,0.03748,-0.01856,1.6,0.04349,-0.005501,1.578,0.04574,-0.01064,1.558,0.04476,0,1.592,0.04694,-0.06182,1.614,0.008199,-0.05467,1.599,0.02153,-0.06194,1.6,0.002668,-0.05792,1.557,-0.004307,-0.04413,1.539,0.0149,-0.03746,1.539,0.02656,-0.04099,1.527,0.008832,-0.03528,1.524,0.02097,-0.02788,1.528,0.03084,0,1.53,0.04236,-0.005112,1.532,0.04358,-0.01481,1.526,0.03912,-0.01946,1.52,0.03421,0,1.495,0.0348,-0.0116,1.494,0.03382,-0.02734,1.498,0.02215,-0.0338,1.503,0.0124,-0.01772,1.488,0.02135,-0.02308,1.492,0.01628,-0.02999,1.498,0.006194,-0.01405,1.531,0.04152,-0.003407,1.524,0.04155,-0.02204,1.494,0.0272,-0.00797,1.515,0.03774,-0.02438,1.542,0.03578,0,1.543,0.04432,0,1.555,0.05692,0.02295,1.492,-0.02694,0.007322,1.489,-0.01677,-0.05254,1.541,-0.01363,-0.04008,1.509,0.002821,-0.05122,1.518,-0.02784,-0.03539,1.503,-0.00093,-0.01378,1.488,0.02484,-0.02308,1.499,-0.02088,-0.04349,1.512,-0.03987,-0.05867,1.544,-0.03316,-0.06433,1.563,-0.03678,-0.06732,1.583,-0.03683,-0.06769,1.617,-0.03436,-0.05856,1.63,0.01803,-0.04847,1.643,0.02895,-0.04643,1.625,0.03705,-0.02958,1.651,0.03965,-0.0264,1.628,0.04807,-0.02919,1.688,0.0091,-0.05272,1.674,-0.001657,-0.06641,1.637,-0.03046,-0.06061,1.66,-0.0101,-0.03136,1.7,-0.0413,-0.05305,1.685,-0.03987,-0.06308,1.666,-0.04036,-0.06818,1.637,-0.04285,-0.06808,1.617,-0.06112,-0.06993,1.594,-0.08238,-0.06714,1.564,-0.07003,-0.05324,1.536,-0.05922,-0.04904,1.521,-0.05132,-0.04795,1.531,-0.08973,-0.05739,1.555,-0.0982,-0.06815,1.622,-0.107,-0.06872,1.655,-0.08466,-0.05233,1.678,-0.09642,-0.03224,1.685,-0.1024,0,1.69,-0.1047,0,1.64,-0.1342,-0.05334,1.631,-0.1239,-0.05011,1.581,-0.1193,-0.04359,1.551,-0.1067,-0.03839,1.528,-0.09652,-0.03528,1.502,-0.05013,-0.04,1.51,-0.07278,-0.04029,1.514,-0.08254,-0.03479,1.517,-0.09269,-0.02295,1.492,-0.02694,-0.007322,1.489,-0.01677,0,1.588,-0.1329,-0.03399,1.636,-0.1304,-0.04758,1.514,-0.03107,-0.03428,1.595,0.03294,-0.02106,1.592,0.03748,-0.02735,1.596,0.03552,-0.0249,1.58,0.0387,-0.01489,1.583,0.04109,-0.04597,1.586,0.02904,-0.04354,1.59,0.02822,-0.03603,1.58,0.03536,-0.05856,1.63,0.01803,-0.06182,1.614,0.008199,-0.02788,1.528,0.03084,-0.005112,1.532,0.04358,-0.01405,1.531,0.04152,-0.00797,1.515,0.03774,-0.01946,1.52,0.03421,-0.05867,1.544,-0.03316,-0.06433,1.563,-0.03678,-0.06732,1.583,-0.03683,-0.06769,1.617,-0.03436,-0.04847,1.643,0.02895,-0.02958,1.651,0.03965,-0.05324,1.536,-0.05922,-0.04795,1.531,-0.08973,-0.03839,1.528,-0.09652,0.02106,1.592,0.03748,0.01489,1.583,0.04109,0.0249,1.58,0.0387,0.03603,1.58,0.03536,0.04354,1.59,0.02822,0.03428,1.595,0.03294,0.02735,1.596,0.03552,0.02788,1.528,0.03084,0.01405,1.531,0.04152,0,1.53,0.04236,0,1.515,0.03836,0.00797,1.515,0.03774,0.01946,1.52,0.03421,0.005112,1.532,0.04358,0,1.655,0.04322,0.02958,1.651,0.03965,0.04847,1.643,0.02895,0.05856,1.63,0.01803,0.06182,1.614,0.008199,0.06769,1.617,-0.03436,0.06732,1.583,-0.03683,0.06433,1.563,-0.03678,0.05867,1.544,-0.03316,0.05324,1.536,-0.05922,0.04795,1.531,-0.08973,0.03839,1.528,-0.09652,0,1.524,-0.102}, 774);
IndexedFaceSet346.setCoord(&Coordinate348);

Shape343.setGeometry(&IndexedFaceSet346);

fieldValue342.addChild(&Shape343);

ProtoInstance340.addChild(&fieldValue342);

fieldValue339.addChild(&ProtoInstance340);

ProtoInstance336.addChild(&fieldValue339);

fieldValue327.addChild(&ProtoInstance336);

ProtoInstance324.addChild(&fieldValue327);

fieldValue235.addChild(&ProtoInstance324);

ProtoInstance232.addChild(&fieldValue235);

fieldValue147.addChild(&ProtoInstance232);

ProtoInstance144.addChild(&fieldValue147);

fieldValue143.addChild(&ProtoInstance144);

Group& Group349 =  Group();
Group349.setDEF(CString("_11"));
fieldValue143.addChild(&Group349);

ProtoInstance140.addChild(&fieldValue143);

fieldValue& fieldValue350 =  fieldValue();
fieldValue350.setName(CString("joints"));
ProtoInstance& ProtoInstance351 =  ProtoInstance();
ProtoInstance351.setName(CString("Joint"));
ProtoInstance351.setUSE(CString("hanim_humanoid_root"));
fieldValue350.addChild(&ProtoInstance351);

ProtoInstance& ProtoInstance352 =  ProtoInstance();
ProtoInstance352.setName(CString("Joint"));
ProtoInstance352.setUSE(CString("hanim_sacroiliac"));
fieldValue350.addChild(&ProtoInstance352);

ProtoInstance& ProtoInstance353 =  ProtoInstance();
ProtoInstance353.setName(CString("Joint"));
ProtoInstance353.setUSE(CString("hanim_l_hip"));
fieldValue350.addChild(&ProtoInstance353);

ProtoInstance& ProtoInstance354 =  ProtoInstance();
ProtoInstance354.setName(CString("Joint"));
ProtoInstance354.setUSE(CString("hanim_l_knee"));
fieldValue350.addChild(&ProtoInstance354);

ProtoInstance& ProtoInstance355 =  ProtoInstance();
ProtoInstance355.setName(CString("Joint"));
ProtoInstance355.setUSE(CString("hanim_l_ankle"));
fieldValue350.addChild(&ProtoInstance355);

ProtoInstance& ProtoInstance356 =  ProtoInstance();
ProtoInstance356.setName(CString("Joint"));
ProtoInstance356.setUSE(CString("hanim_r_hip"));
fieldValue350.addChild(&ProtoInstance356);

ProtoInstance& ProtoInstance357 =  ProtoInstance();
ProtoInstance357.setName(CString("Joint"));
ProtoInstance357.setUSE(CString("hanim_r_knee"));
fieldValue350.addChild(&ProtoInstance357);

ProtoInstance& ProtoInstance358 =  ProtoInstance();
ProtoInstance358.setName(CString("Joint"));
ProtoInstance358.setUSE(CString("hanim_r_ankle"));
fieldValue350.addChild(&ProtoInstance358);

ProtoInstance& ProtoInstance359 =  ProtoInstance();
ProtoInstance359.setName(CString("Joint"));
ProtoInstance359.setUSE(CString("hanim_vl1"));
fieldValue350.addChild(&ProtoInstance359);

ProtoInstance& ProtoInstance360 =  ProtoInstance();
ProtoInstance360.setName(CString("Joint"));
ProtoInstance360.setUSE(CString("hanim_l_shoulder"));
fieldValue350.addChild(&ProtoInstance360);

ProtoInstance& ProtoInstance361 =  ProtoInstance();
ProtoInstance361.setName(CString("Joint"));
ProtoInstance361.setUSE(CString("hanim_l_elbow"));
fieldValue350.addChild(&ProtoInstance361);

ProtoInstance& ProtoInstance362 =  ProtoInstance();
ProtoInstance362.setName(CString("Joint"));
ProtoInstance362.setUSE(CString("hanim_l_wrist"));
fieldValue350.addChild(&ProtoInstance362);

ProtoInstance& ProtoInstance363 =  ProtoInstance();
ProtoInstance363.setName(CString("Joint"));
ProtoInstance363.setUSE(CString("hanim_r_shoulder"));
fieldValue350.addChild(&ProtoInstance363);

ProtoInstance& ProtoInstance364 =  ProtoInstance();
ProtoInstance364.setName(CString("Joint"));
ProtoInstance364.setUSE(CString("hanim_r_elbow"));
fieldValue350.addChild(&ProtoInstance364);

ProtoInstance& ProtoInstance365 =  ProtoInstance();
ProtoInstance365.setName(CString("Joint"));
ProtoInstance365.setUSE(CString("hanim_r_wrist"));
fieldValue350.addChild(&ProtoInstance365);

ProtoInstance& ProtoInstance366 =  ProtoInstance();
ProtoInstance366.setName(CString("Joint"));
ProtoInstance366.setUSE(CString("hanim_vc4"));
fieldValue350.addChild(&ProtoInstance366);

ProtoInstance& ProtoInstance367 =  ProtoInstance();
ProtoInstance367.setName(CString("Joint"));
ProtoInstance367.setUSE(CString("hanim_skullbase"));
fieldValue350.addChild(&ProtoInstance367);

ProtoInstance140.addChild(&fieldValue350);

fieldValue& fieldValue368 =  fieldValue();
fieldValue368.setName(CString("segments"));
ProtoInstance& ProtoInstance369 =  ProtoInstance();
ProtoInstance369.setName(CString("Segment"));
ProtoInstance369.setUSE(CString("hanim_pelvis"));
fieldValue368.addChild(&ProtoInstance369);

ProtoInstance& ProtoInstance370 =  ProtoInstance();
ProtoInstance370.setName(CString("Segment"));
ProtoInstance370.setUSE(CString("hanim_l_thigh"));
fieldValue368.addChild(&ProtoInstance370);

ProtoInstance& ProtoInstance371 =  ProtoInstance();
ProtoInstance371.setName(CString("Segment"));
ProtoInstance371.setUSE(CString("hanim_l_calf"));
fieldValue368.addChild(&ProtoInstance371);

ProtoInstance& ProtoInstance372 =  ProtoInstance();
ProtoInstance372.setName(CString("Segment"));
ProtoInstance372.setUSE(CString("hanim_l_hindfoot"));
fieldValue368.addChild(&ProtoInstance372);

ProtoInstance& ProtoInstance373 =  ProtoInstance();
ProtoInstance373.setName(CString("Segment"));
ProtoInstance373.setUSE(CString("hanim_r_thigh"));
fieldValue368.addChild(&ProtoInstance373);

ProtoInstance& ProtoInstance374 =  ProtoInstance();
ProtoInstance374.setName(CString("Segment"));
ProtoInstance374.setUSE(CString("hanim_r_calf"));
fieldValue368.addChild(&ProtoInstance374);

ProtoInstance& ProtoInstance375 =  ProtoInstance();
ProtoInstance375.setName(CString("Segment"));
ProtoInstance375.setUSE(CString("hanim_r_hindfoot"));
fieldValue368.addChild(&ProtoInstance375);

ProtoInstance& ProtoInstance376 =  ProtoInstance();
ProtoInstance376.setName(CString("Segment"));
ProtoInstance376.setUSE(CString("hanim_c7"));
fieldValue368.addChild(&ProtoInstance376);

ProtoInstance& ProtoInstance377 =  ProtoInstance();
ProtoInstance377.setName(CString("Segment"));
ProtoInstance377.setUSE(CString("hanim_l_upperarm"));
fieldValue368.addChild(&ProtoInstance377);

ProtoInstance& ProtoInstance378 =  ProtoInstance();
ProtoInstance378.setName(CString("Segment"));
ProtoInstance378.setUSE(CString("hanim_l_forearm"));
fieldValue368.addChild(&ProtoInstance378);

ProtoInstance& ProtoInstance379 =  ProtoInstance();
ProtoInstance379.setName(CString("Segment"));
ProtoInstance379.setUSE(CString("hanim_l_hand"));
fieldValue368.addChild(&ProtoInstance379);

ProtoInstance& ProtoInstance380 =  ProtoInstance();
ProtoInstance380.setName(CString("Segment"));
ProtoInstance380.setUSE(CString("hanim_r_upperarm"));
fieldValue368.addChild(&ProtoInstance380);

ProtoInstance& ProtoInstance381 =  ProtoInstance();
ProtoInstance381.setName(CString("Segment"));
ProtoInstance381.setUSE(CString("hanim_r_forearm"));
fieldValue368.addChild(&ProtoInstance381);

ProtoInstance& ProtoInstance382 =  ProtoInstance();
ProtoInstance382.setName(CString("Segment"));
ProtoInstance382.setUSE(CString("hanim_r_hand"));
fieldValue368.addChild(&ProtoInstance382);

ProtoInstance& ProtoInstance383 =  ProtoInstance();
ProtoInstance383.setName(CString("Segment"));
ProtoInstance383.setUSE(CString("hanim_c4"));
fieldValue368.addChild(&ProtoInstance383);

ProtoInstance& ProtoInstance384 =  ProtoInstance();
ProtoInstance384.setName(CString("Segment"));
ProtoInstance384.setUSE(CString("hanim_skull"));
fieldValue368.addChild(&ProtoInstance384);

ProtoInstance140.addChild(&fieldValue368);

fieldValue& fieldValue385 =  fieldValue();
fieldValue385.setName(CString("viewpoints"));
Viewpoint& Viewpoint386 =  Viewpoint();
Viewpoint386.setDEF(CString("InclinedView"));
Viewpoint386.setDescription(CString("Inclined View"));
Viewpoint386.setPosition(new float[]{1.62,1.05,2.06});
Viewpoint386.setOrientation(new float[]{-0.113,0.993,0.0347,0.671});
fieldValue385.addChild(&Viewpoint386);

Viewpoint& Viewpoint387 =  Viewpoint();
Viewpoint387.setDEF(CString("FrontView"));
Viewpoint387.setDescription(CString("Front View"));
Viewpoint387.setPosition(new float[]{0,0.854,2.57665});
fieldValue385.addChild(&Viewpoint387);

Viewpoint& Viewpoint388 =  Viewpoint();
Viewpoint388.setDEF(CString("SideView"));
Viewpoint388.setDescription(CString("Side View"));
Viewpoint388.setPosition(new float[]{2.5929,0.854,0});
Viewpoint388.setOrientation(new float[]{0,1,0,1.57079});
fieldValue385.addChild(&Viewpoint388);

Viewpoint& Viewpoint389 =  Viewpoint();
Viewpoint389.setDEF(CString("TopView"));
Viewpoint389.setDescription(CString("Top View"));
Viewpoint389.setPosition(new float[]{0,3.4495,0});
Viewpoint389.setOrientation(new float[]{1,0,0,-1.57079});
fieldValue385.addChild(&Viewpoint389);

ProtoInstance140.addChild(&fieldValue385);

Scene13.addChild(&ProtoInstance140);

WorldInfo& WorldInfo390 =  WorldInfo();
WorldInfo390.setTitle(CString("Nancy - an HAnim compliant avatar by 3Name3D"));
WorldInfo390.setInfo(new CString[]{CString("Copyright (c) 1997. 3Name3D / Yglesias Wallock Divekar, Inc.")}, 1);
Scene13.addChild(&WorldInfo390);

NavigationInfo& NavigationInfo391 =  NavigationInfo();
NavigationInfo391.setType(new CString[]{CString("EXAMINE")}, 1);
NavigationInfo391.setAvatarSize(new float[]{0.15,1.53,0.75}, 3);
NavigationInfo391.setSpeed(0.5);
Scene13.addChild(&NavigationInfo391);

Group& Group392 =  Group();
Group392.setDEF(CString("Interface"));
Transform& Transform393 =  Transform();
ProximitySensor& ProximitySensor394 =  ProximitySensor();
ProximitySensor394.setDEF(CString("HudProx"));
ProximitySensor394.setSize(new float[]{500,100,500});
ProximitySensor394.setCenter(new float[]{0,20,0});
Transform393.addChild(&ProximitySensor394);

Group392.addChild(&Transform393);

Collision& Collision395 =  Collision();
Collision395.setDEF(CString("HUD"));
Collision395.setEnabled(False);
Transform& Transform396 =  Transform();
Transform396.setDEF(CString("HudXform"));
Transform& Transform397 =  Transform();
Transform397.setTranslation(new float[]{0.01107,-0.025,-0.08});
Transform397.setScale(new float[]{0.012,0.012,0.012});
Transform& Transform398 =  Transform();
Transform398.setDEF(CString("Stand_Text"));
TouchSensor& TouchSensor399 =  TouchSensor();
TouchSensor399.setDEF(CString("Stand_Touch"));
TouchSensor399.setDescription(CString("click for behavior"));
Transform398.addChild(&TouchSensor399);

Shape& Shape400 =  Shape();
Shape400.setDEF(CString("Stand"));
Appearance& Appearance401 =  Appearance();
Material& Material402 =  Material();
Material402.setDEF(CString("text_color"));
Material402.setAmbientIntensity(0);
Material402.setDiffuseColor(new float[]{0,0,0});
Material402.setEmissiveColor(new float[]{0.819,0.521,0.169});
Appearance401.addChild(&Material402);

Shape400.addChild(&Appearance401);

IndexedFaceSet& IndexedFaceSet403 =  IndexedFaceSet();
IndexedFaceSet403.setCoordIndex(new int32_t[]{1,30,29,-1,1,29,2,-1,31,47,46,-1,31,46,32,-1,78,77,80,-1,78,80,79,-1,96,113,112,-1,96,112,95,-1,95,112,111,-1,95,111,94,-1,94,111,110,-1,94,110,93,-1,93,110,109,-1,93,109,108,-1,93,108,100,-1,107,99,100,-1,107,100,108,-1,107,106,99,-1,106,105,98,-1,106,98,99,-1,104,97,98,-1,104,98,105,-1,103,102,104,-1,104,102,101,-1,104,101,97,-1,101,96,97,-1,101,97,101,-1,101,101,96,-1,96,101,113,-1,113,101,114,-1,115,86,85,-1,115,85,116,-1,117,87,84,-1,117,84,118,-1,119,83,120,-1,121,88,82,-1,121,82,122,-1,123,89,81,-1,123,81,124,-1,125,90,126,-1,127,92,128,-1,129,91,130,-1,54,49,50,-1,54,50,55,-1,76,75,74,-1,76,74,54,-1,54,74,73,-1,54,73,49,-1,49,73,48,-1,48,73,62,-1,48,62,61,-1,48,61,60,-1,48,60,53,-1,53,60,59,-1,53,59,53,-1,53,59,58,-1,53,58,52,-1,52,58,57,-1,52,57,51,-1,56,51,57,-1,56,55,50,-1,56,50,51,-1,62,73,72,-1,62,72,63,-1,63,72,71,-1,63,71,64,-1,64,71,70,-1,64,70,69,-1,64,69,65,-1,65,69,68,-1,65,68,67,-1,65,67,66,-1,131,40,39,-1,131,39,132,-1,133,43,42,-1,133,42,134,-1,135,37,36,-1,135,36,136,-1,137,41,38,-1,137,38,138,-1,139,44,35,-1,139,35,140,-1,141,34,142,-1,143,45,33,-1,143,33,144,-1,145,16,15,-1,145,15,146,-1,147,14,148,-1,149,17,13,-1,149,13,150,-1,151,18,12,-1,151,12,152,-1,153,19,11,-1,153,11,154,-1,155,20,10,-1,155,10,156,-1,157,9,158,-1,159,21,8,-1,159,8,160,-1,161,22,7,-1,161,7,162,-1,163,23,164,-1,165,24,6,-1,165,6,166,-1,167,25,5,-1,167,5,168,-1,169,26,170,-1,171,27,4,-1,171,4,172,-1,173,28,3,-1,173,3,174,-1,175,0,176,-1}, 448);
Coordinate& Coordinate404 =  Coordinate();
Coordinate404.setPoint(new float[]{-3.21,-0.0154,0,-3.15,-0.0154,0,-3.14,-0.0467,0,-3.1,-0.0601,0,-3.05,-0.051,0,-3.04,-0.0254,0,-3.05,-0.00248,0,-3.1,0.0122,0,-3.16,0.03,0,-3.2,0.0684,0,-3.2,0.133,0,-3.16,0.17,0,-3.1,0.182,0,-3.04,0.171,0,-3.01,0.136,0,-3,0.095,0,-3.05,0.095,0,-3.06,0.125,0,-3.1,0.136,0,-3.14,0.126,0,-3.15,0.103,0,-3.14,0.0815,0,-3.1,0.0689,0,-3.04,0.0512,0,-3,0.0249,0,-2.99,-0.0195,0,-3,-0.0708,0,-3.05,-0.104,0,-3.1,-0.108,0,-3.16,-0.0947,0,-3.2,-0.0586,0,-2.86,-0.102,0,-2.9,-0.102,0,-2.94,-0.0832,0,-2.94,-0.0457,0,-2.94,0.0645,0,-2.97,0.0645,0,-2.97,0.103,0,-2.94,0.103,0,-2.94,0.158,0,-2.89,0.158,0,-2.89,0.103,0,-2.86,0.103,0,-2.86,0.0645,0,-2.89,0.0645,0,-2.89,-0.0483,0,-2.88,-0.0608,0,-2.86,-0.0612,0,-2.71,-0.000798,0,-2.71,-0.0373,0,-2.74,-0.0637,0,-2.77,-0.0624,0,-2.78,-0.0416,0,-2.77,-0.0195,0,-2.71,-0.0754,0,-2.74,-0.103,0,-2.79,-0.106,0,-2.82,-0.0865,0,-2.84,-0.0431,0,-2.82,0.000177,0,-2.78,0.0201,0,-2.73,0.0275,0,-2.71,0.0446,0,-2.72,0.0614,0,-2.74,0.0675,0,-2.77,0.0573,0,-2.78,0.039,0,-2.83,0.039,0,-2.82,0.0765,0,-2.78,0.105,0,-2.74,0.11,0,-2.71,0.107,0,-2.67,0.0849,0,-2.66,0.0526,0,-2.66,-0.0763,0,-2.65,-0.101,0,-2.7,-0.101,0,-2.61,-0.101,0,-2.61,0.103,0,-2.56,0.103,0,-2.56,0.0787,0,-2.52,0.104,0,-2.47,0.105,0,-2.43,0.0743,0,-2.43,0.038,0,-2.43,-0.101,0,-2.48,-0.101,0,-2.48,0.0224,0,-2.49,0.0514,0,-2.52,0.0627,0,-2.54,0.0505,0,-2.55,0.02,0,-2.55,-0.101,0,-2.33,0.0279,0,-2.31,0.0587,0,-2.27,0.0589,0,-2.25,0.0281,0,-2.25,-0.0232,0,-2.27,-0.0563,0,-2.31,-0.057,0,-2.33,-0.0245,0,-2.19,0.175,0,-2.19,-0.101,0,-2.25,-0.101,0,-2.25,-0.073,0,-2.26,-0.0913,0,-2.31,-0.108,0,-2.35,-0.0915,0,-2.38,-0.0424,0,-2.39,0.0243,0,-2.37,0.0809,0,-2.32,0.108,0,-2.28,0.106,0,-2.25,0.0776,0,-2.25,0.175,0,-2.48,0.0224,0,-2.43,0.038,0,-2.49,0.0514,0,-2.43,0.0743,0,-2.49,0.0514,0,-2.47,0.105,0,-2.52,0.0627,0,-2.52,0.104,0,-2.54,0.0505,0,-2.56,0.0787,0,-2.55,0.02,0,-2.56,0.0787,0,-2.61,-0.101,0,-2.55,0.02,0,-2.61,-0.101,0,-2.56,0.0787,0,-2.89,0.103,0,-2.94,0.103,0,-2.89,0.0645,0,-2.89,0.103,0,-2.94,0.103,0,-2.94,0.0645,0,-2.89,0.0645,0,-2.94,0.0645,0,-2.89,-0.0483,0,-2.94,-0.0457,0,-2.89,-0.0483,0,-2.94,-0.0832,0,-2.88,-0.0608,0,-2.9,-0.102,0,-3.06,0.125,0,-3.01,0.136,0,-3.06,0.125,0,-3.04,0.171,0,-3.1,0.136,0,-3.1,0.182,0,-3.14,0.126,0,-3.16,0.17,0,-3.15,0.103,0,-3.2,0.133,0,-3.14,0.0815,0,-3.2,0.0684,0,-3.14,0.0815,0,-3.16,0.03,0,-3.1,0.0689,0,-3.1,0.0122,0,-3.04,0.0512,0,-3.05,-0.00248,0,-3,0.0249,0,-3.05,-0.00248,0,-2.99,-0.0195,0,-3.04,-0.0254,0,-3,-0.0708,0,-3.05,-0.051,0,-3.05,-0.104,0,-3.05,-0.051,0,-3.1,-0.108,0,-3.1,-0.0601,0,-3.16,-0.0947,0,-3.14,-0.0467,0,-3.15,-0.0154,0,-3.2,-0.0586,0}, 531);
IndexedFaceSet403.setCoord(&Coordinate404);

Shape400.setGeometry(&IndexedFaceSet403);

Transform398.addChild(&Shape400);

Transform& Transform405 =  Transform();
Transform405.setTranslation(new float[]{0.04092,1.843,3.826});
Transform405.setScale(new float[]{84.89,77.52,77.52});
Shape& Shape406 =  Shape();
Shape406.setDEF(CString("Stand_Back"));
Appearance& Appearance407 =  Appearance();
Material& Material408 =  Material();
Material408.setDEF(CString("Clear"));
Material408.setAmbientIntensity(0);
Material408.setDiffuseColor(new float[]{0,0,0});
Material408.setTransparency(1);
Appearance407.addChild(&Material408);

Shape406.addChild(&Appearance407);

IndexedFaceSet& IndexedFaceSet409 =  IndexedFaceSet();
IndexedFaceSet409.setCoordIndex(new int32_t[]{0,2,3,-1,2,0,1,-1}, 8);
Coordinate& Coordinate410 =  Coordinate();
Coordinate410.setPoint(new float[]{-0.02572,-0.02535,-0.05,-0.02578,-0.02131,-0.05,-0.03871,-0.02131,-0.05,-0.03877,-0.02541,-0.05}, 12);
IndexedFaceSet409.setCoord(&Coordinate410);

Shape406.setGeometry(&IndexedFaceSet409);

Transform405.addChild(&Shape406);

Transform398.addChild(&Transform405);

Transform397.addChild(&Transform398);

Transform& Transform411 =  Transform();
Transform411.setDEF(CString("Walk_Text"));
TouchSensor& TouchSensor412 =  TouchSensor();
TouchSensor412.setDEF(CString("Walk_Touch"));
TouchSensor412.setDescription(CString("click for behavior"));
Transform411.addChild(&TouchSensor412);

Shape& Shape413 =  Shape();
Shape413.setDEF(CString("WALK"));
Appearance& Appearance414 =  Appearance();
Material& Material415 =  Material();
Material415.setUSE(CString("text_color"));
Appearance414.addChild(&Material415);

Shape413.addChild(&Appearance414);

IndexedFaceSet& IndexedFaceSet416 =  IndexedFaceSet();
IndexedFaceSet416.setCoordIndex(new int32_t[]{0,2,1,-1,3,2,0,-1,12,3,0,-1,4,3,12,-1,11,4,12,-1,5,4,11,-1,10,5,11,-1,6,5,10,-1,9,6,10,-1,7,6,9,-1,8,7,9,-1,15,14,13,-1,16,15,13,-1,19,18,17,-1,20,19,17,-1,27,20,17,-1,28,27,17,-1,26,20,27,-1,23,20,26,-1,21,20,23,-1,25,23,26,-1,22,21,23,-1,24,23,25,-1,29,30,31,-1,29,31,32,-1,33,34,35,-1,33,35,29,-1,29,35,36,-1,29,36,30,-1,30,36,37,-1,37,36,38,-1,37,38,39,-1,37,39,40,-1,37,40,41,-1,41,40,42,-1,41,42,41,-1,41,42,43,-1,41,43,44,-1,44,43,45,-1,44,45,46,-1,47,46,45,-1,47,32,31,-1,47,31,46,-1,38,36,48,-1,38,48,49,-1,49,48,50,-1,49,50,51,-1,51,50,52,-1,51,52,53,-1,51,53,54,-1,54,53,55,-1,54,55,56,-1,54,56,57,-1}, 212);
Coordinate& Coordinate417 =  Coordinate();
Coordinate417.setPoint(new float[]{-1.88,-0.101,0,-1.96,0.175,0,-1.91,0.175,0,-1.86,-0.0195,0,-1.82,0.175,0,-1.76,0.175,0,-1.72,-0.0195,0,-1.67,0.175,0,-1.61,0.175,0,-1.69,-0.101,0,-1.75,-0.101,0,-1.79,0.111,0,-1.83,-0.101,0,-1.38,-0.101,0,-1.38,0.175,0,-1.32,0.175,0,-1.32,-0.101,0,-1.27,-0.101,0,-1.27,0.175,0,-1.22,0.175,0,-1.22,0.0304,0,-1.16,0.103,0,-1.09,0.103,0,-1.16,0.0272,0,-1.09,-0.101,0,-1.15,-0.101,0,-1.2,-0.0141,0,-1.22,-0.0363,0,-1.22,-0.101,0,-1.48,-0.0754,0,-1.48,-0.0373,0,-1.51,-0.0637,0,-1.51,-0.103,0,-1.47,-0.101,0,-1.42,-0.101,0,-1.43,-0.0763,0,-1.43,0.0526,0,-1.48,-0.000798,0,-1.48,0.0446,0,-1.5,0.0275,0,-1.55,0.0201,0,-1.54,-0.0195,0,-1.59,0.000177,0,-1.61,-0.0431,0,-1.55,-0.0416,0,-1.59,-0.0865,0,-1.54,-0.0624,0,-1.56,-0.106,0,-1.44,0.0849,0,-1.49,0.0614,0,-1.48,0.107,0,-1.51,0.0675,0,-1.52,0.11,0,-1.55,0.105,0,-1.54,0.0573,0,-1.59,0.0765,0,-1.6,0.039,0,-1.55,0.039,0}, 174);
IndexedFaceSet416.setCoord(&Coordinate417);

Shape413.setGeometry(&IndexedFaceSet416);

Transform411.addChild(&Shape413);

Transform& Transform418 =  Transform();
Transform418.setTranslation(new float[]{-0.0414,1.941,4.015});
Transform418.setScale(new float[]{81.3,81.3,81.31});
Shape& Shape419 =  Shape();
Shape419.setDEF(CString("Walk_Back"));
Appearance& Appearance420 =  Appearance();
Material& Material421 =  Material();
Material421.setUSE(CString("Clear"));
Appearance420.addChild(&Material421);

Shape419.addChild(&Appearance420);

IndexedFaceSet& IndexedFaceSet422 =  IndexedFaceSet();
IndexedFaceSet422.setCoordIndex(new int32_t[]{1,3,0,-1,3,1,2,-1}, 8);
Coordinate& Coordinate423 =  Coordinate();
Coordinate423.setPoint(new float[]{-0.02381,-0.02541,-0.05,-0.0127,-0.02541,-0.05,-0.01263,-0.02139,-0.05,-0.02381,-0.02146,-0.05}, 12);
IndexedFaceSet422.setCoord(&Coordinate423);

Shape419.setGeometry(&IndexedFaceSet422);

Transform418.addChild(&Shape419);

Transform411.addChild(&Transform418);

Transform397.addChild(&Transform411);

Transform& Transform424 =  Transform();
Transform424.setDEF(CString("Run_Text"));
TouchSensor& TouchSensor425 =  TouchSensor();
TouchSensor425.setDEF(CString("Run_Touch"));
TouchSensor425.setDescription(CString("click for behavior"));
Transform424.addChild(&TouchSensor425);

Shape& Shape426 =  Shape();
Shape426.setDEF(CString("Run"));
Appearance& Appearance427 =  Appearance();
Material& Material428 =  Material();
Material428.setUSE(CString("text_color"));
Appearance427.addChild(&Material428);

Shape426.addChild(&Appearance427);

IndexedFaceSet& IndexedFaceSet429 =  IndexedFaceSet();
IndexedFaceSet429.setCoordIndex(new int32_t[]{24,26,25,-1,53,39,54,-1,17,1,0,-1,17,0,16,-1,0,14,16,-1,0,15,14,-1,14,13,22,-1,14,22,16,-1,13,12,21,-1,13,21,22,-1,12,6,21,-1,12,11,7,-1,12,7,6,-1,11,8,7,-1,10,8,11,-1,10,9,8,-1,6,5,21,-1,5,4,20,-1,5,20,21,-1,4,3,19,-1,4,19,20,-1,3,2,18,-1,3,18,19,-1,18,2,1,-1,18,1,17,-1,55,32,31,-1,55,31,56,-1,57,33,30,-1,57,30,58,-1,59,29,60,-1,61,34,28,-1,61,28,62,-1,63,35,27,-1,63,27,64,-1,65,36,66,-1,67,38,68,-1,69,37,70,-1,71,23,72,-1,73,48,47,-1,73,47,74,-1,75,49,46,-1,75,46,76,-1,77,45,78,-1,79,50,44,-1,79,44,80,-1,81,51,43,-1,81,43,82,-1,83,41,84,-1,85,40,86,-1,87,52,88,-1,89,42,90,-1}, 204);
Coordinate& Coordinate430 =  Coordinate();
Coordinate430.setPoint(new float[]{-0.829,-0.101,0,-0.829,0.175,0,-0.662,0.172,0,-0.622,0.148,0,-0.607,0.103,0,-0.62,0.0501,0,-0.648,0.0316,0,-0.615,-0.0063,0,-0.611,-0.0764,0,-0.601,-0.101,0,-0.664,-0.101,0,-0.671,-0.0373,0,-0.68,-0.00372,0,-0.712,0.00648,0,-0.772,0.00648,0,-0.772,-0.101,0,-0.772,0.0546,0,-0.772,0.127,0,-0.703,0.127,0,-0.673,0.118,0,-0.663,0.091,0,-0.674,0.063,0,-0.705,0.0546,0,-0.379,0.103,0,-0.379,-0.101,0,-0.432,-0.101,0,-0.432,-0.0764,0,-0.466,-0.101,0,-0.518,-0.102,0,-0.555,-0.072,0,-0.56,-0.0357,0,-0.56,0.103,0,-0.506,0.103,0,-0.506,-0.0201,0,-0.5,-0.0491,0,-0.472,-0.0604,0,-0.443,-0.0482,0,-0.433,-0.0177,0,-0.433,0.103,0,-0.331,-0.101,0,-0.331,0.103,0,-0.278,0.103,0,-0.278,0.0787,0,-0.244,0.104,0,-0.192,0.105,0,-0.154,0.0743,0,-0.149,0.038,0,-0.149,-0.101,0,-0.203,-0.101,0,-0.203,0.0224,0,-0.209,0.0514,0,-0.238,0.0627,0,-0.266,0.0505,0,-0.277,0.02,0,-0.277,-0.101,0,-0.506,-0.0201,0,-0.56,-0.0357,0,-0.5,-0.0491,0,-0.555,-0.072,0,-0.5,-0.0491,0,-0.518,-0.102,0,-0.472,-0.0604,0,-0.466,-0.101,0,-0.443,-0.0482,0,-0.432,-0.0764,0,-0.433,-0.0177,0,-0.432,-0.0764,0,-0.379,0.103,0,-0.433,-0.0177,0,-0.379,0.103,0,-0.432,-0.0764,0,-0.379,-0.101,0,-0.432,-0.0764,0,-0.203,0.0224,0,-0.149,0.038,0,-0.209,0.0514,0,-0.154,0.0743,0,-0.209,0.0514,0,-0.192,0.105,0,-0.238,0.0627,0,-0.244,0.104,0,-0.266,0.0505,0,-0.278,0.0787,0,-0.278,0.0787,0,-0.331,0.103,0,-0.277,0.02,0,-0.331,-0.101,0,-0.277,0.02,0,-0.278,0.0787,0,-0.277,0.02,0,-0.331,0.103,0}, 273);
IndexedFaceSet429.setCoord(&Coordinate430);

Shape426.setGeometry(&IndexedFaceSet429);

Transform424.addChild(&Shape426);

Transform& Transform431 =  Transform();
Transform431.setTranslation(new float[]{-0.01579,1.968,4.074});
Transform431.setScale(new float[]{82.47,82.47,82.48});
Shape& Shape432 =  Shape();
Shape432.setDEF(CString("Run_Back"));
Appearance& Appearance433 =  Appearance();
Material& Material434 =  Material();
Material434.setUSE(CString("Clear"));
Appearance433.addChild(&Material434);

Shape432.addChild(&Appearance433);

IndexedFaceSet& IndexedFaceSet435 =  IndexedFaceSet();
IndexedFaceSet435.setCoordIndex(new int32_t[]{0,2,3,-1,2,0,1,-1}, 8);
Coordinate& Coordinate436 =  Coordinate();
Coordinate436.setPoint(new float[]{-0.01009,-0.02534,-0.05,-0.001382,-0.02541,-0.05,-0.001315,-0.02146,-0.05,-0.01022,-0.02146,-0.05}, 12);
IndexedFaceSet435.setCoord(&Coordinate436);

Shape432.setGeometry(&IndexedFaceSet435);

Transform431.addChild(&Shape432);

Transform424.addChild(&Transform431);

Transform397.addChild(&Transform424);

Transform& Transform437 =  Transform();
Transform437.setDEF(CString("Jump_Text"));
TouchSensor& TouchSensor438 =  TouchSensor();
TouchSensor438.setDEF(CString("Jump_Touch"));
TouchSensor438.setDescription(CString("click for behavior"));
Transform437.addChild(&TouchSensor438);

Shape& Shape439 =  Shape();
Shape439.setDEF(CString("Jump"));
Appearance& Appearance440 =  Appearance();
Material& Material441 =  Material();
Material441.setUSE(CString("text_color"));
Appearance440.addChild(&Material441);

Shape439.addChild(&Appearance440);

IndexedFaceSet& IndexedFaceSet442 =  IndexedFaceSet();
IndexedFaceSet442.setCoordIndex(new int32_t[]{1,0,14,-1,1,14,2,-1,16,15,18,-1,16,18,17,-1,64,65,66,-1,67,68,69,-1,67,69,70,-1,71,72,73,-1,71,73,74,-1,75,76,77,-1,78,79,80,-1,78,80,81,-1,82,83,84,-1,82,84,85,-1,86,87,88,-1,89,90,91,-1,92,93,94,-1,95,96,97,-1,98,7,6,-1,98,6,99,-1,100,8,5,-1,100,5,101,-1,102,9,4,-1,102,4,103,-1,104,10,105,-1,106,11,3,-1,106,3,107,-1,108,12,109,-1,110,13,111,-1,112,27,26,-1,112,26,113,-1,114,28,25,-1,114,25,115,-1,116,24,117,-1,118,29,23,-1,118,23,119,-1,120,30,22,-1,120,22,121,-1,122,31,123,-1,124,34,33,-1,124,33,125,-1,126,35,32,-1,126,32,127,-1,128,21,129,-1,130,36,20,-1,130,20,131,-1,132,37,19,-1,132,19,133,-1,134,38,135,-1,136,40,137,-1,138,39,139,-1,53,58,59,-1,53,59,54,-1,53,52,58,-1,52,51,57,-1,52,57,58,-1,51,50,56,-1,51,56,57,-1,50,49,56,-1,49,48,63,-1,49,63,56,-1,48,47,63,-1,63,47,46,-1,63,46,62,-1,62,46,45,-1,62,45,44,-1,62,44,61,-1,61,44,60,-1,54,59,60,-1,44,43,42,-1,60,44,42,-1,41,55,54,-1,41,54,60,-1,41,60,42,-1}, 296);
Coordinate& Coordinate443 =  Coordinate();
Coordinate443.setPoint(new float[]{0.108,0.00195,0,0.163,0.00195,0,0.166,-0.0473,0,0.194,-0.0608,0,0.222,-0.0492,0,0.228,-0.017,0,0.228,0.175,0,0.284,0.175,0,0.284,-0.02,0,0.271,-0.0798,0,0.23,-0.104,0,0.193,-0.108,0,0.155,-0.102,0,0.117,-0.0714,0,0.108,-0.0357,0,0.563,-0.101,0,0.563,0.103,0,0.615,0.103,0,0.615,0.0803,0,0.649,0.105,0,0.696,0.105,0,0.728,0.0788,0,0.76,0.104,0,0.811,0.104,0,0.842,0.081,0,0.853,0.0416,0,0.853,-0.101,0,0.799,-0.101,0,0.799,0.0305,0,0.79,0.0544,0,0.767,0.0616,0,0.743,0.0507,0,0.734,0.0228,0,0.734,-0.101,0,0.681,-0.101,0,0.681,0.0301,0,0.673,0.0532,0,0.65,0.0611,0,0.626,0.0506,0,0.617,0.0224,0,0.617,-0.101,0,0.9,-0.182,0,0.9,0.103,0,0.952,0.103,0,0.952,0.0751,0,0.968,0.0934,0,1.01,0.11,0,1.05,0.103,0,1.07,0.0796,0,1.1,0.0251,0,1.1,-0.0222,0,1.07,-0.0788,0,1.03,-0.106,0,0.988,-0.103,0,0.953,-0.0755,0,0.953,-0.182,0,1.04,-0.000177,0,1.03,-0.0446,0,0.999,-0.0603,0,0.966,-0.0453,0,0.953,-0.000177,0,0.963,0.045,0,0.998,0.063,0,1.03,0.0462,0,0.515,-0.101,0,0.462,-0.0764,0,0.462,-0.101,0,0.388,-0.0201,0,0.388,0.103,0,0.334,0.103,0,0.334,-0.0357,0,0.394,-0.0491,0,0.388,-0.0201,0,0.334,-0.0357,0,0.339,-0.072,0,0.394,-0.0491,0,0.339,-0.072,0,0.376,-0.102,0,0.422,-0.0604,0,0.394,-0.0491,0,0.376,-0.102,0,0.428,-0.101,0,0.451,-0.0482,0,0.422,-0.0604,0,0.428,-0.101,0,0.462,-0.0764,0,0.461,-0.0177,0,0.451,-0.0482,0,0.462,-0.0764,0,0.515,0.103,0,0.461,0.103,0,0.461,-0.0177,0,0.515,0.103,0,0.461,-0.0177,0,0.462,-0.0764,0,0.515,-0.101,0,0.515,0.103,0,0.462,-0.0764,0,0.284,-0.02,0,0.228,-0.017,0,0.271,-0.0798,0,0.222,-0.0492,0,0.23,-0.104,0,0.194,-0.0608,0,0.193,-0.108,0,0.194,-0.0608,0,0.155,-0.102,0,0.166,-0.0473,0,0.117,-0.0714,0,0.166,-0.0473,0,0.108,-0.0357,0,0.166,-0.0473,0,0.799,0.0305,0,0.853,0.0416,0,0.79,0.0544,0,0.842,0.081,0,0.79,0.0544,0,0.811,0.104,0,0.767,0.0616,0,0.76,0.104,0,0.743,0.0507,0,0.728,0.0788,0,0.734,0.0228,0,0.728,0.0788,0,0.681,0.0301,0,0.734,0.0228,0,0.673,0.0532,0,0.728,0.0788,0,0.673,0.0532,0,0.696,0.105,0,0.65,0.0611,0,0.649,0.105,0,0.626,0.0506,0,0.615,0.0803,0,0.617,0.0224,0,0.615,0.0803,0,0.563,-0.101,0,0.617,0.0224,0,0.563,-0.101,0,0.615,0.0803,0}, 420);
IndexedFaceSet442.setCoord(&Coordinate443);

Shape439.setGeometry(&IndexedFaceSet442);

Transform437.addChild(&Shape439);

Transform& Transform444 =  Transform();
Transform444.setTranslation(new float[]{-0.008979,1.99,4.14});
Transform444.setScale(new float[]{83.79,83.79,83.79});
Shape& Shape445 =  Shape();
Shape445.setDEF(CString("Jump_Back"));
Appearance& Appearance446 =  Appearance();
Material& Material447 =  Material();
Material447.setUSE(CString("Clear"));
Appearance446.addChild(&Material447);

Shape445.addChild(&Appearance446);

IndexedFaceSet& IndexedFaceSet448 =  IndexedFaceSet();
IndexedFaceSet448.setCoordIndex(new int32_t[]{0,2,3,-1,2,0,1,-1}, 8);
Coordinate& Coordinate449 =  Coordinate();
Coordinate449.setPoint(new float[]{0.001296,-0.02541,-0.05,0.01335,-0.02527,-0.05,0.01328,-0.02152,-0.05,0.001229,-0.02146,-0.05}, 12);
IndexedFaceSet448.setCoord(&Coordinate449);

Shape445.setGeometry(&IndexedFaceSet448);

Transform444.addChild(&Shape445);

Transform437.addChild(&Transform444);

Transform397.addChild(&Transform437);

Transform396.addChild(&Transform397);

Collision395.addChildren(&Transform396);

Group392.addChild(&Collision395);

Transform& Transform450 =  Transform();
Transform450.setDEF(CString("Floor"));
Transform450.setTranslation(new float[]{0,-0.0125,0});
Transform450.setScale(new float[]{1,0.0125,1});
Shape& Shape451 =  Shape();
Appearance& Appearance452 =  Appearance();
Material& Material453 =  Material();
Appearance452.addChild(&Material453);

Shape451.addChild(&Appearance452);

Box& Box454 =  Box();
Shape451.setGeometry(&Box454);

Transform450.addChild(&Shape451);

Group392.addChild(&Transform450);

Scene13.addChild(&Group392);

Group& Group455 =  Group();
Group455.setDEF(CString("Animations"));
Group& Group456 =  Group();
Group456.setDEF(CString("Stand_Animation"));
OrientationInterpolator& OrientationInterpolator457 =  OrientationInterpolator();
OrientationInterpolator457.setDEF(CString("r_ankle_RotationInterpolator_Stand"));
OrientationInterpolator457.setKey(new float[]{0,1}, 2);
OrientationInterpolator457.setKeyValue(new float[]{0,0,1,0,0,0,1,0}, 8);
Group456.addChild(&OrientationInterpolator457);

OrientationInterpolator& OrientationInterpolator458 =  OrientationInterpolator();
OrientationInterpolator458.setDEF(CString("r_knee_RotationInterpolator_Stand"));
OrientationInterpolator458.setKey(new float[]{0,1}, 2);
OrientationInterpolator458.setKeyValue(new float[]{0,0,1,0,0,0,1,0}, 8);
Group456.addChild(&OrientationInterpolator458);

OrientationInterpolator& OrientationInterpolator459 =  OrientationInterpolator();
OrientationInterpolator459.setDEF(CString("r_hip_RotationInterpolator_Stand"));
OrientationInterpolator459.setKey(new float[]{0,1}, 2);
OrientationInterpolator459.setKeyValue(new float[]{0,0,1,0,0,0,1,0}, 8);
Group456.addChild(&OrientationInterpolator459);

OrientationInterpolator& OrientationInterpolator460 =  OrientationInterpolator();
OrientationInterpolator460.setDEF(CString("l_ankle_RotationInterpolator_Stand"));
OrientationInterpolator460.setKey(new float[]{0,1}, 2);
OrientationInterpolator460.setKeyValue(new float[]{0,0,1,0,0,0,1,0}, 8);
Group456.addChild(&OrientationInterpolator460);

OrientationInterpolator& OrientationInterpolator461 =  OrientationInterpolator();
OrientationInterpolator461.setDEF(CString("l_knee_RotationInterpolator_Stand"));
OrientationInterpolator461.setKey(new float[]{0,1}, 2);
OrientationInterpolator461.setKeyValue(new float[]{0,0,1,0,0,0,1,0}, 8);
Group456.addChild(&OrientationInterpolator461);

OrientationInterpolator& OrientationInterpolator462 =  OrientationInterpolator();
OrientationInterpolator462.setDEF(CString("l_hip_RotationInterpolator_Stand"));
OrientationInterpolator462.setKey(new float[]{0,1}, 2);
OrientationInterpolator462.setKeyValue(new float[]{0,0,1,0,0,0,1,0}, 8);
Group456.addChild(&OrientationInterpolator462);

OrientationInterpolator& OrientationInterpolator463 =  OrientationInterpolator();
OrientationInterpolator463.setDEF(CString("lower_body_RotationInterpolator_Stand"));
OrientationInterpolator463.setKey(new float[]{0,1}, 2);
OrientationInterpolator463.setKeyValue(new float[]{0,0,1,0,0,0,1,0}, 8);
Group456.addChild(&OrientationInterpolator463);

OrientationInterpolator& OrientationInterpolator464 =  OrientationInterpolator();
OrientationInterpolator464.setDEF(CString("r_wrist_RotationInterpolator_Stand"));
OrientationInterpolator464.setKey(new float[]{0,1}, 2);
OrientationInterpolator464.setKeyValue(new float[]{0,0,1,0,0,0,1,0}, 8);
Group456.addChild(&OrientationInterpolator464);

OrientationInterpolator& OrientationInterpolator465 =  OrientationInterpolator();
OrientationInterpolator465.setDEF(CString("r_elbow_RotationInterpolator_Stand"));
OrientationInterpolator465.setKey(new float[]{0,1}, 2);
OrientationInterpolator465.setKeyValue(new float[]{0,0,1,0,0,0,1,0}, 8);
Group456.addChild(&OrientationInterpolator465);

OrientationInterpolator& OrientationInterpolator466 =  OrientationInterpolator();
OrientationInterpolator466.setDEF(CString("r_shoulder_RotationInterpolator_Stand"));
OrientationInterpolator466.setKey(new float[]{0,1}, 2);
OrientationInterpolator466.setKeyValue(new float[]{0,0,1,0,0,0,1,0}, 8);
Group456.addChild(&OrientationInterpolator466);

OrientationInterpolator& OrientationInterpolator467 =  OrientationInterpolator();
OrientationInterpolator467.setDEF(CString("l_wrist_RotationInterpolator_Stand"));
OrientationInterpolator467.setKey(new float[]{0,1}, 2);
OrientationInterpolator467.setKeyValue(new float[]{0,0,1,0,0,0,1,0}, 8);
Group456.addChild(&OrientationInterpolator467);

OrientationInterpolator& OrientationInterpolator468 =  OrientationInterpolator();
OrientationInterpolator468.setDEF(CString("l_elbow_RotationInterpolator_Stand"));
OrientationInterpolator468.setKey(new float[]{0,1}, 2);
OrientationInterpolator468.setKeyValue(new float[]{0,0,1,0,0,0,1,0}, 8);
Group456.addChild(&OrientationInterpolator468);

OrientationInterpolator& OrientationInterpolator469 =  OrientationInterpolator();
OrientationInterpolator469.setDEF(CString("l_shoulder_RotationInterpolator_Stand"));
OrientationInterpolator469.setKey(new float[]{0,1}, 2);
OrientationInterpolator469.setKeyValue(new float[]{0,0,1,0,0,0,1,0}, 8);
Group456.addChild(&OrientationInterpolator469);

OrientationInterpolator& OrientationInterpolator470 =  OrientationInterpolator();
OrientationInterpolator470.setDEF(CString("head_RotationInterpolator_Stand"));
OrientationInterpolator470.setKey(new float[]{0,1}, 2);
OrientationInterpolator470.setKeyValue(new float[]{0,0,1,0,0,0,1,0}, 8);
Group456.addChild(&OrientationInterpolator470);

OrientationInterpolator& OrientationInterpolator471 =  OrientationInterpolator();
OrientationInterpolator471.setDEF(CString("neck_RotationInterpolator_Stand"));
OrientationInterpolator471.setKey(new float[]{0,1}, 2);
OrientationInterpolator471.setKeyValue(new float[]{0,0,1,0,0,0,1,0}, 8);
Group456.addChild(&OrientationInterpolator471);

OrientationInterpolator& OrientationInterpolator472 =  OrientationInterpolator();
OrientationInterpolator472.setDEF(CString("upper_body_RotationInterpolator_Stand"));
OrientationInterpolator472.setKey(new float[]{0,1}, 2);
OrientationInterpolator472.setKeyValue(new float[]{0,0,1,0,0,0,1,0}, 8);
Group456.addChild(&OrientationInterpolator472);

OrientationInterpolator& OrientationInterpolator473 =  OrientationInterpolator();
OrientationInterpolator473.setDEF(CString("whole_body_RotationInterpolator_Stand"));
OrientationInterpolator473.setKey(new float[]{0,1}, 2);
OrientationInterpolator473.setKeyValue(new float[]{0,0,1,0,0,0,1,0}, 8);
Group456.addChild(&OrientationInterpolator473);

PositionInterpolator& PositionInterpolator474 =  PositionInterpolator();
PositionInterpolator474.setDEF(CString("whole_body_TranslationInterpolator_Stand"));
PositionInterpolator474.setKey(new float[]{0,1}, 2);
PositionInterpolator474.setKeyValue(new float[]{0,0,0,0,0,0}, 6);
Group456.addChild(&PositionInterpolator474);

TimeSensor& TimeSensor475 =  TimeSensor();
TimeSensor475.setDEF(CString("Stand_Time"));
TimeSensor475.setCycleInterval(0.00999999977648258);
Group456.addChild(&TimeSensor475);

Group455.addChild(&Group456);

Group& Group476 =  Group();
Group476.setDEF(CString("Walk_Animation"));
OrientationInterpolator& OrientationInterpolator477 =  OrientationInterpolator();
OrientationInterpolator477.setDEF(CString("r_ankle_RotationInterpolator_BasicWalk"));
OrientationInterpolator477.setKey(new float[]{0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1}, 11);
OrientationInterpolator477.setKeyValue(new float[]{0,0,1,0,-1,0,0,0.3533,-1,0,0,0.1072,1,0,0,0.2612,1,0,0,0.1268,-1,0,0,0.01793,-1,0,0,0.05824,-1,0,0,0.2398,-1,0,0,0.35,-1,0,0,0.3322,0,0,1,0}, 44);
Group476.addChild(&OrientationInterpolator477);

OrientationInterpolator& OrientationInterpolator478 =  OrientationInterpolator();
OrientationInterpolator478.setDEF(CString("r_knee_RotationInterpolator_BasicWalk"));
OrientationInterpolator478.setKey(new float[]{0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1}, 10);
OrientationInterpolator478.setKeyValue(new float[]{1,0,0,0.8573,1,0,0,0.8926,1,0,0,0.5351,1,0,0,0.1756,1,0,0,0.1194,1,0,0,0.3153,1,0,0,0.09354,1,0,0,0.08558,1,0,0,0.2475,1,0,0,0.8573}, 40);
Group476.addChild(&OrientationInterpolator478);

OrientationInterpolator& OrientationInterpolator479 =  OrientationInterpolator();
OrientationInterpolator479.setDEF(CString("r_hip_RotationInterpolator_BasicWalk"));
OrientationInterpolator479.setKey(new float[]{0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1}, 10);
OrientationInterpolator479.setKeyValue(new float[]{-0.5831,0.03511,0.8116,0.1481,-0.995,0.02296,0.09674,0.4683,-1,0.00192,0.007964,0.4732,-0.998,-0.0158,-0.06102,0.5079,-0.9911,-0.03541,-0.1286,0.5419,-0.9131,-0.06243,-0.403,0.3361,-0.4306,-0.07962,-0.899,0.07038,1,0,0,0.2571,0.9891,-0.02805,0.1444,0.3879,-0.5831,0.03511,0.8116,0.1481}, 40);
Group476.addChild(&OrientationInterpolator479);

OrientationInterpolator& OrientationInterpolator480 =  OrientationInterpolator();
OrientationInterpolator480.setDEF(CString("l_ankle_RotationInterpolator_BasicWalk"));
OrientationInterpolator480.setKey(new float[]{0,0.125,0.2083,0.375,0.6667,0.9167,1}, 7);
OrientationInterpolator480.setKeyValue(new float[]{-1,0,0,0.06714,-1,0,0,0.2152,-1,0,0,0.3184,-1,0,0,0.4717,-1,0,0,0.2912,1,0,0,0.1222,-1,0,0,0.06714}, 28);
Group476.addChild(&OrientationInterpolator480);

OrientationInterpolator& OrientationInterpolator481 =  OrientationInterpolator();
OrientationInterpolator481.setDEF(CString("l_knee_RotationInterpolator_BasicWalk"));
OrientationInterpolator481.setKey(new float[]{0,0.2083,0.375,0.5,0.6667,0.7917,0.9167,1}, 8);
OrientationInterpolator481.setKeyValue(new float[]{1,0,0,0.3226,1,0,0,0.1556,1,0,0,0.08678,1,0,0,0.8751,1,0,0,1.131,1,0,0,0.09961,1,0,0,0.3942,1,0,0,0.3226}, 32);
Group476.addChild(&OrientationInterpolator481);

OrientationInterpolator& OrientationInterpolator482 =  OrientationInterpolator();
OrientationInterpolator482.setDEF(CString("l_hip_RotationInterpolator_BasicWalk"));
OrientationInterpolator482.setKey(new float[]{0,0.25,0.375,0.5,0.6667,0.7917,0.9167,1}, 8);
OrientationInterpolator482.setKeyValue(new float[]{-0.873,0.06094,0.484,0.2865,0.9963,-0.01057,0.08481,0.2488,0.9965,0.01591,-0.08222,0.3836,-0.7018,-0.03223,-0.7117,0.1289,-1,0,0,0.5518,-0.9964,0.02231,0.0817,0.5351,-0.9809,0.04912,0.1881,0.5204,-0.873,0.06094,0.484,0.2865}, 32);
Group476.addChild(&OrientationInterpolator482);

OrientationInterpolator& OrientationInterpolator483 =  OrientationInterpolator();
OrientationInterpolator483.setDEF(CString("lower_body_RotationInterpolator_BasicWalk"));
OrientationInterpolator483.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator483.setKeyValue(new float[]{0,0,-1,0.1056,0,0,1,0.09018,0,0,-1,0.1056}, 12);
Group476.addChild(&OrientationInterpolator483);

OrientationInterpolator& OrientationInterpolator484 =  OrientationInterpolator();
OrientationInterpolator484.setDEF(CString("r_wrist_RotationInterpolator_BasicWalk"));
OrientationInterpolator484.setKey(new float[]{0,0.375,0.9167,1}, 4);
OrientationInterpolator484.setKeyValue(new float[]{-0.8129,0.4759,-0.3357,0.1346,0.1533,-0.9878,0.02582,0.3902,-0.5701,0.7604,-0.311,0.366,-0.8129,0.4759,-0.3357,0.1346}, 16);
Group476.addChild(&OrientationInterpolator484);

OrientationInterpolator& OrientationInterpolator485 =  OrientationInterpolator();
OrientationInterpolator485.setDEF(CString("r_elbow_RotationInterpolator_BasicWalk"));
OrientationInterpolator485.setKey(new float[]{0,0.375,0.9167,1}, 4);
OrientationInterpolator485.setKeyValue(new float[]{-1,0,0,0.411508,-1,0,0,0.0925011,-1,0,0,0.572568,-1,0,0,0.411508}, 16);
Group476.addChild(&OrientationInterpolator485);

OrientationInterpolator& OrientationInterpolator486 =  OrientationInterpolator();
OrientationInterpolator486.setDEF(CString("r_shoulder_RotationInterpolator_BasicWalk"));
OrientationInterpolator486.setKey(new float[]{0,0.375,0.9167,1}, 4);
OrientationInterpolator486.setKeyValue(new float[]{-1,0,0,0.09346,1,0,0,0.3197,-1,0,0,0.1564,-1,0,0,0.09346}, 16);
Group476.addChild(&OrientationInterpolator486);

OrientationInterpolator& OrientationInterpolator487 =  OrientationInterpolator();
OrientationInterpolator487.setDEF(CString("l_wrist_RotationInterpolator_BasicWalk"));
OrientationInterpolator487.setKey(new float[]{0,0.375,0.9167,1}, 4);
OrientationInterpolator487.setKeyValue(new float[]{0,-1,0,0.461076,-0.330195,-0.927451,0.175516,0.538852,0.0327774,-0.999314,-0.0172185,0.492033,0,-1,0,0.461076}, 16);
Group476.addChild(&OrientationInterpolator487);

OrientationInterpolator& OrientationInterpolator488 =  OrientationInterpolator();
OrientationInterpolator488.setDEF(CString("l_elbow_RotationInterpolator_BasicWalk"));
OrientationInterpolator488.setKey(new float[]{0,0.375,0.9167,1}, 4);
OrientationInterpolator488.setKeyValue(new float[]{-1,0,0,0.0659878,-1,0,0,0.488383,-1,0,0,0.0177536,-1,0,0,0.0659878}, 16);
Group476.addChild(&OrientationInterpolator488);

OrientationInterpolator& OrientationInterpolator489 =  OrientationInterpolator();
OrientationInterpolator489.setDEF(CString("l_shoulder_RotationInterpolator_BasicWalk"));
OrientationInterpolator489.setKey(new float[]{0,0.375,0.9167,1}, 4);
OrientationInterpolator489.setKeyValue(new float[]{1,0,0,0.1189,-1,0,0,0.1861,1,0,0,0.3357,1,0,0,0.1189}, 16);
Group476.addChild(&OrientationInterpolator489);

OrientationInterpolator& OrientationInterpolator490 =  OrientationInterpolator();
OrientationInterpolator490.setDEF(CString("head_RotationInterpolator_BasicWalk"));
OrientationInterpolator490.setKey(new float[]{0,0.375,0.4167,0.5,0.5833,0.6667,0.75,0.8333,0.9167,1}, 10);
OrientationInterpolator490.setKeyValue(new float[]{0,-1,0,0.08642,0,1,0,0.1825,0,1,0,0.1505,0,1,0,0.1053,0,1,0,0.04391,0,-1,0,0.03119,0,-1,0,0.07936,0,-1,0,0.1616,0,-1,0,0.155,0,-1,0,0.08642}, 40);
Group476.addChild(&OrientationInterpolator490);

OrientationInterpolator& OrientationInterpolator491 =  OrientationInterpolator();
OrientationInterpolator491.setDEF(CString("neck_RotationInterpolator_BasicWalk"));
OrientationInterpolator491.setKey(new float[]{0,1}, 2);
OrientationInterpolator491.setKeyValue(new float[]{0,0,1,0,0,0,1,0}, 8);
Group476.addChild(&OrientationInterpolator491);

OrientationInterpolator& OrientationInterpolator492 =  OrientationInterpolator();
OrientationInterpolator492.setDEF(CString("upper_body_RotationInterpolator_BasicWalk"));
OrientationInterpolator492.setKey(new float[]{0,0.2083,0.375,0.75,0.8333,1}, 6);
OrientationInterpolator492.setKeyValue(new float[]{0,1,0,0.0826,-0.01972,-0.5974,0.8017,0.08231,0.009296,-0.9648,0.2627,0.1734,-0.01238,0.9549,-0.2968,0.08732,-0.008125,0.9691,-0.2463,0.158,0,1,0,0.0826}, 24);
Group476.addChild(&OrientationInterpolator492);

OrientationInterpolator& OrientationInterpolator493 =  OrientationInterpolator();
OrientationInterpolator493.setDEF(CString("whole_body_RotationInterpolator_BasicWalk"));
OrientationInterpolator493.setKey(new float[]{0,1}, 2);
OrientationInterpolator493.setKeyValue(new float[]{0,0,1,0,0,0,1,0}, 8);
Group476.addChild(&OrientationInterpolator493);

PositionInterpolator& PositionInterpolator494 =  PositionInterpolator();
PositionInterpolator494.setDEF(CString("whole_body_TranslationInterpolator_BasicWalk"));
PositionInterpolator494.setKey(new float[]{0,0.04167,0.125,0.1667,0.2083,0.25,0.2917,0.375,0.4583,0.5,0.5417,0.5833,0.625,0.7083,0.75,0.7917,0.875,0.9167,1}, 19);
PositionInterpolator494.setKeyValue(new float[]{0,-0.00928,0,0,-0.003858,0,0,-0.008847,0,0,-0.01486,0,0,-0.02641,0,0,-0.03934,0,0,-0.0502,0,0,-0.07469,0,0,-0.02732,0,0,-0.01608,0,0,-0.01129,0,0,-0.005819,0,0,-0.002004,0,0,-0.002579,0,0,-0.0143,0,0,-0.03799,0,0,-0.05648,0,0,-0.045,0,0,-0.00928,0}, 57);
Group476.addChild(&PositionInterpolator494);

TimeSensor& TimeSensor495 =  TimeSensor();
TimeSensor495.setDEF(CString("Walk_Time"));
TimeSensor495.setCycleInterval(2);
TimeSensor495.setLoop(True);
TimeSensor495.setStartTime(-1);
Group476.addChild(&TimeSensor495);

Group455.addChild(&Group476);

Group& Group496 =  Group();
Group496.setDEF(CString("Run_Animation"));
OrientationInterpolator& OrientationInterpolator497 =  OrientationInterpolator();
OrientationInterpolator497.setDEF(CString("r_ankle_RotationInterpolator_Run"));
OrientationInterpolator497.setKey(new float[]{0,0.4909,0.7091,0.8,0.8182,1}, 6);
OrientationInterpolator497.setKeyValue(new float[]{1,0,0,0.2323,-1,0,0,0.07843,-1,0,0,0.09676,-1,0,0,0.3274,-1,0,0,0.3278,1,0,0,0.2323}, 24);
Group496.addChild(&OrientationInterpolator497);

OrientationInterpolator& OrientationInterpolator498 =  OrientationInterpolator();
OrientationInterpolator498.setDEF(CString("r_knee_RotationInterpolator_Run"));
OrientationInterpolator498.setKey(new float[]{0,0.03636,0.2182,0.4909,0.7455,1}, 6);
OrientationInterpolator498.setKeyValue(new float[]{1,0,0,0.7004,1,0,0,1.011,1,0,0,1.892,1,0,0,1.188,1,0,0,0.3964,1,0,0,0.7004}, 24);
Group496.addChild(&OrientationInterpolator498);

OrientationInterpolator& OrientationInterpolator499 =  OrientationInterpolator();
OrientationInterpolator499.setDEF(CString("r_hip_RotationInterpolator_Run"));
OrientationInterpolator499.setKey(new float[]{0,0.2182,0.4909,0.7455,1}, 5);
OrientationInterpolator499.setKeyValue(new float[]{0.9999,0.00293,-0.00989,0.402,-1,0.004977,-0.00497,0.5943,-1,0.003265,-0.001752,1.178,-0.9999,0.00815,-0.01093,0.3031,0.9999,0.00293,-0.00989,0.402}, 20);
Group496.addChild(&OrientationInterpolator499);

OrientationInterpolator& OrientationInterpolator500 =  OrientationInterpolator();
OrientationInterpolator500.setDEF(CString("l_ankle_RotationInterpolator_Run"));
OrientationInterpolator500.setKey(new float[]{0,0.2182,0.3091,0.4909,1}, 5);
OrientationInterpolator500.setKeyValue(new float[]{1,0,0,0.03543,-1,0,0,0.1037,-1,0,0,0.4328,1,0,0,0.1929,1,0,0,0.03543}, 20);
Group496.addChild(&OrientationInterpolator500);

OrientationInterpolator& OrientationInterpolator501 =  OrientationInterpolator();
OrientationInterpolator501.setDEF(CString("l_knee_RotationInterpolator_Run"));
OrientationInterpolator501.setKey(new float[]{0,0.2182,0.4909,0.7455,1}, 5);
OrientationInterpolator501.setKeyValue(new float[]{1,0,0,1.108,1,0,0,0.4265,1,0,0,0.7052,1,0,0,2.179,1,0,0,1.108}, 20);
Group496.addChild(&OrientationInterpolator501);

OrientationInterpolator& OrientationInterpolator502 =  OrientationInterpolator();
OrientationInterpolator502.setDEF(CString("l_hip_RotationInterpolator_Run"));
OrientationInterpolator502.setKey(new float[]{0,0.2182,0.4909,0.7455,1}, 5);
OrientationInterpolator502.setKeyValue(new float[]{-0.9986,0.03354,0.04001,1.212,-0.9889,0.1328,0.06696,0.4025,0.9894,0.1453,0.009351,0.4114,-0.9963,0.07032,0.05003,0.7035,-0.9986,0.03354,0.04001,1.212}, 20);
Group496.addChild(&OrientationInterpolator502);

OrientationInterpolator& OrientationInterpolator503 =  OrientationInterpolator();
OrientationInterpolator503.setDEF(CString("lower_body_RotationInterpolator_Run"));
OrientationInterpolator503.setKey(new float[]{0,1}, 2);
OrientationInterpolator503.setKeyValue(new float[]{0.9969,-0.05444,0.05596,0.07687,0.9969,-0.05444,0.05596,0.07687}, 8);
Group496.addChild(&OrientationInterpolator503);

OrientationInterpolator& OrientationInterpolator504 =  OrientationInterpolator();
OrientationInterpolator504.setDEF(CString("r_wrist_RotationInterpolator_Run"));
OrientationInterpolator504.setKey(new float[]{0,1}, 2);
OrientationInterpolator504.setKeyValue(new float[]{-0.917742,-0.237244,-0.318536,0.214273,-0.917742,-0.237244,-0.318536,0.214273}, 8);
Group496.addChild(&OrientationInterpolator504);

OrientationInterpolator& OrientationInterpolator505 =  OrientationInterpolator();
OrientationInterpolator505.setDEF(CString("r_elbow_RotationInterpolator_Run"));
OrientationInterpolator505.setKey(new float[]{0,0.2182,0.4909,0.7455,1}, 5);
OrientationInterpolator505.setKeyValue(new float[]{0.9353,-0.2978,-0.191,4.222,-0.9362,0.2924,-0.1952,1.05,0.9941,-0.09719,-0.04725,4.512,-0.9594,0.2653,0.09579,1.525,0.9353,-0.2978,-0.191,4.222}, 20);
Group496.addChild(&OrientationInterpolator505);

OrientationInterpolator& OrientationInterpolator506 =  OrientationInterpolator();
OrientationInterpolator506.setDEF(CString("r_shoulder_RotationInterpolator_Run"));
OrientationInterpolator506.setKey(new float[]{0,0.2182,0.4909,0.7455,1}, 5);
OrientationInterpolator506.setKeyValue(new float[]{-1,0,0,0.6979,0.9094,0.2062,-0.3613,0.4157,0.9637,0.1537,-0.2185,1.353,0.4864,0.08841,-0.8693,0.1716,-1,0,0,0.6979}, 20);
Group496.addChild(&OrientationInterpolator506);

OrientationInterpolator& OrientationInterpolator507 =  OrientationInterpolator();
OrientationInterpolator507.setDEF(CString("l_wrist_RotationInterpolator_Run"));
OrientationInterpolator507.setKey(new float[]{0,1}, 2);
OrientationInterpolator507.setKeyValue(new float[]{-0.0240995,-0.999682,0.00741506,0.120409,-0.0240995,-0.999682,0.00741506,0.120409}, 8);
Group496.addChild(&OrientationInterpolator507);

OrientationInterpolator& OrientationInterpolator508 =  OrientationInterpolator();
OrientationInterpolator508.setDEF(CString("l_elbow_RotationInterpolator_Run"));
OrientationInterpolator508.setKey(new float[]{0,0.2182,0.4909,0.7455,1}, 5);
OrientationInterpolator508.setKeyValue(new float[]{0.9985,0.03887,0.03802,4.689,-0.965,-0.1889,-0.1821,1.415,0.9758,0.1563,0.1529,4.666,-0.9956,-0.0936,0.009826,1.126,0.9985,0.03887,0.03802,4.689}, 20);
Group496.addChild(&OrientationInterpolator508);

OrientationInterpolator& OrientationInterpolator509 =  OrientationInterpolator();
OrientationInterpolator509.setDEF(CString("l_shoulder_RotationInterpolator_Run"));
OrientationInterpolator509.setKey(new float[]{0,0.2182,0.4909,0.7455,1}, 5);
OrientationInterpolator509.setKeyValue(new float[]{0.9907,-0.07264,0.115,1.135,0.9291,-0.1222,0.349,0.1695,-0.9892,0.1364,-0.05394,0.5112,0.9942,-0.0002052,0.1073,0.4975,0.9907,-0.07264,0.115,1.135}, 20);
Group496.addChild(&OrientationInterpolator509);

OrientationInterpolator& OrientationInterpolator510 =  OrientationInterpolator();
OrientationInterpolator510.setDEF(CString("head_RotationInterpolator_Run"));
OrientationInterpolator510.setKey(new float[]{0,0.4909,1}, 3);
OrientationInterpolator510.setKeyValue(new float[]{0.6517,-0.7559,0.06211,0.2508,0.6467,0.7527,-0.1238,0.2344,0.6517,-0.7559,0.06211,0.2508}, 12);
Group496.addChild(&OrientationInterpolator510);

OrientationInterpolator& OrientationInterpolator511 =  OrientationInterpolator();
OrientationInterpolator511.setDEF(CString("neck_RotationInterpolator_Run"));
OrientationInterpolator511.setKey(new float[]{0,1}, 2);
OrientationInterpolator511.setKeyValue(new float[]{0,0,1,0,0,0,1,0}, 8);
Group496.addChild(&OrientationInterpolator511);

OrientationInterpolator& OrientationInterpolator512 =  OrientationInterpolator();
OrientationInterpolator512.setDEF(CString("upper_body_RotationInterpolator_Run"));
OrientationInterpolator512.setKey(new float[]{0,0.2545,0.4909,0.7636,1}, 5);
OrientationInterpolator512.setKeyValue(new float[]{0.7651,0.6382,0.08586,0.2712,0.9999,0.002845,-0.01547,0.3756,0.7459,-0.6505,-0.1432,0.2416,0.9984,0.05536,-0.01154,0.3488,0.7651,0.6382,0.08586,0.2712}, 20);
Group496.addChild(&OrientationInterpolator512);

OrientationInterpolator& OrientationInterpolator513 =  OrientationInterpolator();
OrientationInterpolator513.setDEF(CString("whole_body_RotationInterpolator_Run"));
OrientationInterpolator513.setKey(new float[]{0,1}, 2);
OrientationInterpolator513.setKeyValue(new float[]{0,0,1,0,0,0,1,0}, 8);
Group496.addChild(&OrientationInterpolator513);

PositionInterpolator& PositionInterpolator514 =  PositionInterpolator();
PositionInterpolator514.setDEF(CString("whole_body_TranslationInterpolator_Run"));
PositionInterpolator514.setKey(new float[]{0,0.2182,0.2909,0.3091,0.7091,0.8,0.8182,1}, 8);
PositionInterpolator514.setKeyValue(new float[]{0,-0.0351,0,0,-0.0351,0,0,-0.04087,0,0,-0.04886,0,0,-0.04051,0,0,-0.03666,0,0,-0.03666,0,0,-0.0351,0}, 24);
Group496.addChild(&PositionInterpolator514);

TimeSensor& TimeSensor515 =  TimeSensor();
TimeSensor515.setDEF(CString("Run_Time"));
TimeSensor515.setLoop(True);
TimeSensor515.setStartTime(-1);
Group496.addChild(&TimeSensor515);

Group455.addChild(&Group496);

Group& Group516 =  Group();
Group516.setDEF(CString("Jump_Animation"));
OrientationInterpolator& OrientationInterpolator517 =  OrientationInterpolator();
OrientationInterpolator517.setDEF(CString("r_ankle_RotationInterpolator_Jump"));
OrientationInterpolator517.setKey(new float[]{0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.84,0.88,0.92,0.96,1}, 14);
OrientationInterpolator517.setKeyValue(new float[]{0,0,1,0,-1,0,0,0.6735,-1,0,0,0.6735,-1,0,0,0.3527,-1,0,0,0.3038,-1,0,0,0.07964,1,0,0,0.3001,1,0,0,0.6509,1,0,0,0.3001,-1,0,0,0.2087,-1,0,0,0.3756,-1,0,0,0.3279,-1,0,0,0.1193,0,0,1,0}, 56);
Group516.addChild(&OrientationInterpolator517);

OrientationInterpolator& OrientationInterpolator518 =  OrientationInterpolator();
OrientationInterpolator518.setDEF(CString("r_knee_RotationInterpolator_Jump"));
OrientationInterpolator518.setKey(new float[]{0,0.28,0.32,0.48,0.64,0.76,0.88,1}, 8);
OrientationInterpolator518.setKeyValue(new float[]{0,0,1,0,1,0,0,2.005,1,0,0,2.005,0,0,1,0,1,0,0,0.9507,1,0,0,0.5845,1,0,0,0.9054,0,0,1,0}, 32);
Group516.addChild(&OrientationInterpolator518);

OrientationInterpolator& OrientationInterpolator519 =  OrientationInterpolator();
OrientationInterpolator519.setDEF(CString("r_hip_RotationInterpolator_Jump"));
OrientationInterpolator519.setKey(new float[]{0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.88,1}, 11);
OrientationInterpolator519.setKeyValue(new float[]{0,0,1,0,1,0,0,4.433,1,0,0,4.433,1,0,0,4.647,-1,0,0,0.8943,-1,0,0,0.3698,0,0,1,0,-1,0,0,0.4963,-1,0,0,0.3829,-1,0,0,0.5169,0,0,1,0}, 44);
Group516.addChild(&OrientationInterpolator519);

OrientationInterpolator& OrientationInterpolator520 =  OrientationInterpolator();
OrientationInterpolator520.setDEF(CString("l_ankle_RotationInterpolator_Jump"));
OrientationInterpolator520.setKey(new float[]{0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.84,0.88,0.92,0.96,1}, 14);
OrientationInterpolator520.setKeyValue(new float[]{0,0,1,0,-1,0,0,0.625,-1,0,0,0.625,-1,0,0,0.3364,-1,0,0,0.2742,-1,0,0,0.05078,1,0,0,0.2833,1,0,0,0.6667,1,0,0,0.2833,-1,0,0,0.2108,-1,0,0,0.375,-1,0,0,0.3146,-1,0,0,0.1174,0,0,1,0}, 56);
Group516.addChild(&OrientationInterpolator520);

OrientationInterpolator& OrientationInterpolator521 =  OrientationInterpolator();
OrientationInterpolator521.setDEF(CString("l_knee_RotationInterpolator_Jump"));
OrientationInterpolator521.setKey(new float[]{0,0.28,0.32,0.48,0.64,0.76,0.88,1}, 8);
OrientationInterpolator521.setKeyValue(new float[]{0,0,1,0,1,0,0,2.047,1,0,0,2.047,0,0,1,0,1,0,0,1.566,1,0,0,0.5913,1,0,0,0.9235,0,0,1,0}, 32);
Group516.addChild(&OrientationInterpolator521);

OrientationInterpolator& OrientationInterpolator522 =  OrientationInterpolator();
OrientationInterpolator522.setDEF(CString("l_hip_RotationInterpolator_Jump"));
OrientationInterpolator522.setKey(new float[]{0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.88,1}, 11);
OrientationInterpolator522.setKeyValue(new float[]{0,0,1,0,1,0,0,4.349,1,0,0,4.349,1,0,0,4.615,-1,0,0,0.9136,-1,0,0,0.3614,0,0,1,0,-1,0,0,0.7869,-1,0,0,0.3918,-1,0,0,0.5433,0,0,1,0}, 44);
Group516.addChild(&OrientationInterpolator522);

OrientationInterpolator& OrientationInterpolator523 =  OrientationInterpolator();
OrientationInterpolator523.setDEF(CString("lower_body_RotationInterpolator_Jump"));
OrientationInterpolator523.setKey(new float[]{0,0.28,0.32,0.48,0.76,1}, 6);
OrientationInterpolator523.setKeyValue(new float[]{0,0,1,0,1,0,0,0.1892,1,0,0,0.1892,0,0,1,0,0,0,1,0,0,0,1,0}, 24);
Group516.addChild(&OrientationInterpolator523);

OrientationInterpolator& OrientationInterpolator524 =  OrientationInterpolator();
OrientationInterpolator524.setDEF(CString("r_wrist_RotationInterpolator_Jump"));
OrientationInterpolator524.setKey(new float[]{0,0.28,0.32,0.64,0.76,1}, 6);
OrientationInterpolator524.setKeyValue(new float[]{0,0,1,0,-0.0585279,0.983903,-0.168849,1.85956,-0.0585279,0.983903,-0.168849,1.85956,-0.00222418,0.99801,-0.0630095,1.46072,0,1,0,0.497349,0,0,1,0}, 24);
Group516.addChild(&OrientationInterpolator524);

OrientationInterpolator& OrientationInterpolator525 =  OrientationInterpolator();
OrientationInterpolator525.setDEF(CString("r_elbow_RotationInterpolator_Jump"));
OrientationInterpolator525.setKey(new float[]{0,0.28,0.32,0.64,0.76,1}, 6);
OrientationInterpolator525.setKeyValue(new float[]{0,0,1,0,-1,0,0,0.04151,-1,0,0,0.04151,-1,0,0,0.5855,-1,0,0,0.5852,0,0,1,0}, 24);
Group516.addChild(&OrientationInterpolator525);

OrientationInterpolator& OrientationInterpolator526 =  OrientationInterpolator();
OrientationInterpolator526.setDEF(CString("r_shoulder_RotationInterpolator_Jump"));
OrientationInterpolator526.setKey(new float[]{0,0.28,0.32,0.64,0.76,0.88,1}, 7);
OrientationInterpolator526.setKeyValue(new float[]{0,0,1,0,0.9992,0.02042,0.03558,4.688,0.9992,0.02042,0.03558,4.688,0.9989,-0.04623,0.005159,4.079,-0.8687,-0.2525,-0.4261,1.501,-0.941,-0.2893,-0.1754,0.4788,0,0,1,0}, 28);
Group516.addChild(&OrientationInterpolator526);

OrientationInterpolator& OrientationInterpolator527 =  OrientationInterpolator();
OrientationInterpolator527.setDEF(CString("l_wrist_RotationInterpolator_Jump"));
OrientationInterpolator527.setKey(new float[]{0,0.28,0.32,0.64,0.76,0.88,1}, 7);
OrientationInterpolator527.setKeyValue(new float[]{0,0,1,0,0.0672928,0.989475,-0.128107,4.15574,0.0672928,0.989475,-0.128107,4.15574,0.00364942,0.999901,0.0135896,4.5822,0,-1,0,0.655922,-0.00050618,-0.999999,0.0012782,1.28397,0,0,1,0}, 28);
Group516.addChild(&OrientationInterpolator527);

OrientationInterpolator& OrientationInterpolator528 =  OrientationInterpolator();
OrientationInterpolator528.setDEF(CString("l_elbow_RotationInterpolator_Jump"));
OrientationInterpolator528.setKey(new float[]{0,0.28,0.32,0.64,0.76,1}, 6);
OrientationInterpolator528.setKeyValue(new float[]{0,0,1,0,-1,0,0,0.1229,-1,0,0,0.1229,-1,0,0,0.5976,-1,0,0,0.3917,0,0,1,0}, 24);
Group516.addChild(&OrientationInterpolator528);

OrientationInterpolator& OrientationInterpolator529 =  OrientationInterpolator();
OrientationInterpolator529.setDEF(CString("l_shoulder_RotationInterpolator_Jump"));
OrientationInterpolator529.setKey(new float[]{0,0.28,0.32,0.64,0.76,0.88,1}, 7);
OrientationInterpolator529.setKeyValue(new float[]{0,0,1,0,-0.9987,0.02554,0.04498,1.57,-0.9987,0.02554,0.04498,1.57,1,0.0004113,0.003055,4.114,-0.8413,0.3238,0.4329,1.453,-0.877,0.4198,0.2337,0.6009,0,0,1,0}, 28);
Group516.addChild(&OrientationInterpolator529);

OrientationInterpolator& OrientationInterpolator530 =  OrientationInterpolator();
OrientationInterpolator530.setDEF(CString("head_RotationInterpolator_Jump"));
OrientationInterpolator530.setKey(new float[]{0,0.28,0.32,0.48,0.76,1}, 6);
OrientationInterpolator530.setKeyValue(new float[]{0,0,1,0,-1,0,0,0.5989,-1,0,0,0.5989,-1,0,0,0.3216,1,0,0,0.06503,0,0,1,0}, 24);
Group516.addChild(&OrientationInterpolator530);

OrientationInterpolator& OrientationInterpolator531 =  OrientationInterpolator();
OrientationInterpolator531.setDEF(CString("neck_RotationInterpolator_Jump"));
OrientationInterpolator531.setKey(new float[]{0,0.28,0.32,0.48,0.76,1}, 6);
OrientationInterpolator531.setKeyValue(new float[]{0,0,1,0,-1,0,0,0.1942,-1,0,0,0.1942,0,0,1,0,1,0,0,0.2284,0,0,1,0}, 24);
Group516.addChild(&OrientationInterpolator531);

OrientationInterpolator& OrientationInterpolator532 =  OrientationInterpolator();
OrientationInterpolator532.setDEF(CString("upper_body_RotationInterpolator_Jump"));
OrientationInterpolator532.setKey(new float[]{0,0.28,0.32,0.48,0.76,0.88,1}, 7);
OrientationInterpolator532.setKeyValue(new float[]{0,0,1,0,1,0,0,1.038,1,0,0,1.038,-1,0,0,0.1057,1,0,0,0.2171,1,0,0,0.3465,0,0,1,0}, 28);
Group516.addChild(&OrientationInterpolator532);

OrientationInterpolator& OrientationInterpolator533 =  OrientationInterpolator();
OrientationInterpolator533.setDEF(CString("whole_body_RotationInterpolator_Jump"));
OrientationInterpolator533.setKey(new float[]{0,0.28,0.32,0.48,0.64,0.76,1}, 7);
OrientationInterpolator533.setKeyValue(new float[]{0,0,1,0,1,0,0,0.3273,1,0,0,0.3273,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, 28);
Group516.addChild(&OrientationInterpolator533);

PositionInterpolator& PositionInterpolator534 =  PositionInterpolator();
PositionInterpolator534.setDEF(CString("whole_body_TranslationInterpolator_Jump"));
PositionInterpolator534.setKey(new float[]{0,0.04,0.08,0.12,0.16,0.2,0.24,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.8,0.84,0.88,0.92,0.96,1}, 21);
PositionInterpolator534.setKeyValue(new float[]{0,0,0,0,-0.01264,-0.01289,0,-0.04712,-0.03738,-0.0003345,-0.1049,-0.05353,-0.0005712,-0.1892,-0.06561,-0.0008233,-0.286,-0.06276,-0.0009591,-0.3795,-0.05148,-0.00106,-0.4484,-0.03656,-0.00106,-0.4484,-0.03656,-0.001122,-0.3269,-0.1499,-0.0008616,-0.13,-0.06358,-0.0005128,-0.03123,-0.05488,0.0004779,0.053,0.02732,0.0001728,0.4148,0.006873,0,0.03045,0.02148,0,-0.01299,-0.01057,0,-0.06932,-0.01064,0.0001365,-0.1037,-0.005059,0.0001279,-0.07198,-0.007596,0.000141,-0.01626,-0.004935,0,0,0}, 63);
Group516.addChild(&PositionInterpolator534);

TimeSensor& TimeSensor535 =  TimeSensor();
TimeSensor535.setDEF(CString("Jump_Time"));
TimeSensor535.setCycleInterval(2);
TimeSensor535.setStartTime(-1);
Group516.addChild(&TimeSensor535);

Group455.addChild(&Group516);

Scene13.addChild(&Group455);

ROUTE& ROUTE536 =  ROUTE();
ROUTE536.setFromNode(CString("HudProx"));
ROUTE536.setFromField(CString("position_changed"));
ROUTE536.setToNode(CString("HudXform"));
ROUTE536.setToField(CString("set_translation"));
Scene13.addChild(&ROUTE536);

ROUTE& ROUTE537 =  ROUTE();
ROUTE537.setFromNode(CString("HudProx"));
ROUTE537.setFromField(CString("orientation_changed"));
ROUTE537.setToNode(CString("HudXform"));
ROUTE537.setToField(CString("set_rotation"));
Scene13.addChild(&ROUTE537);

ROUTE& ROUTE538 =  ROUTE();
ROUTE538.setFromNode(CString("Stand_Touch"));
ROUTE538.setFromField(CString("touchTime"));
ROUTE538.setToNode(CString("Walk_Time"));
ROUTE538.setToField(CString("set_stopTime"));
Scene13.addChild(&ROUTE538);

ROUTE& ROUTE539 =  ROUTE();
ROUTE539.setFromNode(CString("Stand_Touch"));
ROUTE539.setFromField(CString("touchTime"));
ROUTE539.setToNode(CString("Run_Time"));
ROUTE539.setToField(CString("set_stopTime"));
Scene13.addChild(&ROUTE539);

ROUTE& ROUTE540 =  ROUTE();
ROUTE540.setFromNode(CString("Stand_Touch"));
ROUTE540.setFromField(CString("touchTime"));
ROUTE540.setToNode(CString("Jump_Time"));
ROUTE540.setToField(CString("set_stopTime"));
Scene13.addChild(&ROUTE540);

ROUTE& ROUTE541 =  ROUTE();
ROUTE541.setFromNode(CString("Stand_Touch"));
ROUTE541.setFromField(CString("touchTime"));
ROUTE541.setToNode(CString("Stand_Time"));
ROUTE541.setToField(CString("set_startTime"));
Scene13.addChild(&ROUTE541);

ROUTE& ROUTE542 =  ROUTE();
ROUTE542.setFromNode(CString("Walk_Touch"));
ROUTE542.setFromField(CString("touchTime"));
ROUTE542.setToNode(CString("Stand_Time"));
ROUTE542.setToField(CString("set_stopTime"));
Scene13.addChild(&ROUTE542);

ROUTE& ROUTE543 =  ROUTE();
ROUTE543.setFromNode(CString("Walk_Touch"));
ROUTE543.setFromField(CString("touchTime"));
ROUTE543.setToNode(CString("Run_Time"));
ROUTE543.setToField(CString("set_stopTime"));
Scene13.addChild(&ROUTE543);

ROUTE& ROUTE544 =  ROUTE();
ROUTE544.setFromNode(CString("Walk_Touch"));
ROUTE544.setFromField(CString("touchTime"));
ROUTE544.setToNode(CString("Jump_Time"));
ROUTE544.setToField(CString("set_stopTime"));
Scene13.addChild(&ROUTE544);

ROUTE& ROUTE545 =  ROUTE();
ROUTE545.setFromNode(CString("Walk_Touch"));
ROUTE545.setFromField(CString("touchTime"));
ROUTE545.setToNode(CString("Walk_Time"));
ROUTE545.setToField(CString("set_startTime"));
Scene13.addChild(&ROUTE545);

ROUTE& ROUTE546 =  ROUTE();
ROUTE546.setFromNode(CString("Run_Touch"));
ROUTE546.setFromField(CString("touchTime"));
ROUTE546.setToNode(CString("Stand_Time"));
ROUTE546.setToField(CString("set_stopTime"));
Scene13.addChild(&ROUTE546);

ROUTE& ROUTE547 =  ROUTE();
ROUTE547.setFromNode(CString("Run_Touch"));
ROUTE547.setFromField(CString("touchTime"));
ROUTE547.setToNode(CString("Walk_Time"));
ROUTE547.setToField(CString("set_stopTime"));
Scene13.addChild(&ROUTE547);

ROUTE& ROUTE548 =  ROUTE();
ROUTE548.setFromNode(CString("Run_Touch"));
ROUTE548.setFromField(CString("touchTime"));
ROUTE548.setToNode(CString("Jump_Time"));
ROUTE548.setToField(CString("set_stopTime"));
Scene13.addChild(&ROUTE548);

ROUTE& ROUTE549 =  ROUTE();
ROUTE549.setFromNode(CString("Run_Touch"));
ROUTE549.setFromField(CString("touchTime"));
ROUTE549.setToNode(CString("Run_Time"));
ROUTE549.setToField(CString("set_startTime"));
Scene13.addChild(&ROUTE549);

ROUTE& ROUTE550 =  ROUTE();
ROUTE550.setFromNode(CString("Jump_Touch"));
ROUTE550.setFromField(CString("touchTime"));
ROUTE550.setToNode(CString("Stand_Time"));
ROUTE550.setToField(CString("set_stopTime"));
Scene13.addChild(&ROUTE550);

ROUTE& ROUTE551 =  ROUTE();
ROUTE551.setFromNode(CString("Jump_Touch"));
ROUTE551.setFromField(CString("touchTime"));
ROUTE551.setToNode(CString("Walk_Time"));
ROUTE551.setToField(CString("set_stopTime"));
Scene13.addChild(&ROUTE551);

ROUTE& ROUTE552 =  ROUTE();
ROUTE552.setFromNode(CString("Jump_Touch"));
ROUTE552.setFromField(CString("touchTime"));
ROUTE552.setToNode(CString("Run_Time"));
ROUTE552.setToField(CString("set_stopTime"));
Scene13.addChild(&ROUTE552);

ROUTE& ROUTE553 =  ROUTE();
ROUTE553.setFromNode(CString("Jump_Touch"));
ROUTE553.setFromField(CString("touchTime"));
ROUTE553.setToNode(CString("Jump_Time"));
ROUTE553.setToField(CString("set_startTime"));
Scene13.addChild(&ROUTE553);

ROUTE& ROUTE554 =  ROUTE();
ROUTE554.setFromNode(CString("Stand_Time"));
ROUTE554.setFromField(CString("fraction_changed"));
ROUTE554.setToNode(CString("r_ankle_RotationInterpolator_Stand"));
ROUTE554.setToField(CString("set_fraction"));
Scene13.addChild(&ROUTE554);

ROUTE& ROUTE555 =  ROUTE();
ROUTE555.setFromNode(CString("Stand_Time"));
ROUTE555.setFromField(CString("fraction_changed"));
ROUTE555.setToNode(CString("r_knee_RotationInterpolator_Stand"));
ROUTE555.setToField(CString("set_fraction"));
Scene13.addChild(&ROUTE555);

ROUTE& ROUTE556 =  ROUTE();
ROUTE556.setFromNode(CString("Stand_Time"));
ROUTE556.setFromField(CString("fraction_changed"));
ROUTE556.setToNode(CString("r_hip_RotationInterpolator_Stand"));
ROUTE556.setToField(CString("set_fraction"));
Scene13.addChild(&ROUTE556);

ROUTE& ROUTE557 =  ROUTE();
ROUTE557.setFromNode(CString("Stand_Time"));
ROUTE557.setFromField(CString("fraction_changed"));
ROUTE557.setToNode(CString("l_ankle_RotationInterpolator_Stand"));
ROUTE557.setToField(CString("set_fraction"));
Scene13.addChild(&ROUTE557);

ROUTE& ROUTE558 =  ROUTE();
ROUTE558.setFromNode(CString("Stand_Time"));
ROUTE558.setFromField(CString("fraction_changed"));
ROUTE558.setToNode(CString("l_knee_RotationInterpolator_Stand"));
ROUTE558.setToField(CString("set_fraction"));
Scene13.addChild(&ROUTE558);

ROUTE& ROUTE559 =  ROUTE();
ROUTE559.setFromNode(CString("Stand_Time"));
ROUTE559.setFromField(CString("fraction_changed"));
ROUTE559.setToNode(CString("l_hip_RotationInterpolator_Stand"));
ROUTE559.setToField(CString("set_fraction"));
Scene13.addChild(&ROUTE559);

ROUTE& ROUTE560 =  ROUTE();
ROUTE560.setFromNode(CString("Stand_Time"));
ROUTE560.setFromField(CString("fraction_changed"));
ROUTE560.setToNode(CString("lower_body_RotationInterpolator_Stand"));
ROUTE560.setToField(CString("set_fraction"));
Scene13.addChild(&ROUTE560);

ROUTE& ROUTE561 =  ROUTE();
ROUTE561.setFromNode(CString("Stand_Time"));
ROUTE561.setFromField(CString("fraction_changed"));
ROUTE561.setToNode(CString("r_wrist_RotationInterpolator_Stand"));
ROUTE561.setToField(CString("set_fraction"));
Scene13.addChild(&ROUTE561);

ROUTE& ROUTE562 =  ROUTE();
ROUTE562.setFromNode(CString("Stand_Time"));
ROUTE562.setFromField(CString("fraction_changed"));
ROUTE562.setToNode(CString("r_elbow_RotationInterpolator_Stand"));
ROUTE562.setToField(CString("set_fraction"));
Scene13.addChild(&ROUTE562);

ROUTE& ROUTE563 =  ROUTE();
ROUTE563.setFromNode(CString("Stand_Time"));
ROUTE563.setFromField(CString("fraction_changed"));
ROUTE563.setToNode(CString("r_shoulder_RotationInterpolator_Stand"));
ROUTE563.setToField(CString("set_fraction"));
Scene13.addChild(&ROUTE563);

ROUTE& ROUTE564 =  ROUTE();
ROUTE564.setFromNode(CString("Stand_Time"));
ROUTE564.setFromField(CString("fraction_changed"));
ROUTE564.setToNode(CString("l_wrist_RotationInterpolator_Stand"));
ROUTE564.setToField(CString("set_fraction"));
Scene13.addChild(&ROUTE564);

ROUTE& ROUTE565 =  ROUTE();
ROUTE565.setFromNode(CString("Stand_Time"));
ROUTE565.setFromField(CString("fraction_changed"));
ROUTE565.setToNode(CString("l_elbow_RotationInterpolator_Stand"));
ROUTE565.setToField(CString("set_fraction"));
Scene13.addChild(&ROUTE565);

ROUTE& ROUTE566 =  ROUTE();
ROUTE566.setFromNode(CString("Stand_Time"));
ROUTE566.setFromField(CString("fraction_changed"));
ROUTE566.setToNode(CString("l_shoulder_RotationInterpolator_Stand"));
ROUTE566.setToField(CString("set_fraction"));
Scene13.addChild(&ROUTE566);

ROUTE& ROUTE567 =  ROUTE();
ROUTE567.setFromNode(CString("Stand_Time"));
ROUTE567.setFromField(CString("fraction_changed"));
ROUTE567.setToNode(CString("head_RotationInterpolator_Stand"));
ROUTE567.setToField(CString("set_fraction"));
Scene13.addChild(&ROUTE567);

ROUTE& ROUTE568 =  ROUTE();
ROUTE568.setFromNode(CString("Stand_Time"));
ROUTE568.setFromField(CString("fraction_changed"));
ROUTE568.setToNode(CString("neck_RotationInterpolator_Stand"));
ROUTE568.setToField(CString("set_fraction"));
Scene13.addChild(&ROUTE568);

ROUTE& ROUTE569 =  ROUTE();
ROUTE569.setFromNode(CString("Stand_Time"));
ROUTE569.setFromField(CString("fraction_changed"));
ROUTE569.setToNode(CString("upper_body_RotationInterpolator_Stand"));
ROUTE569.setToField(CString("set_fraction"));
Scene13.addChild(&ROUTE569);

ROUTE& ROUTE570 =  ROUTE();
ROUTE570.setFromNode(CString("Stand_Time"));
ROUTE570.setFromField(CString("fraction_changed"));
ROUTE570.setToNode(CString("whole_body_RotationInterpolator_Stand"));
ROUTE570.setToField(CString("set_fraction"));
Scene13.addChild(&ROUTE570);

ROUTE& ROUTE571 =  ROUTE();
ROUTE571.setFromNode(CString("Stand_Time"));
ROUTE571.setFromField(CString("fraction_changed"));
ROUTE571.setToNode(CString("whole_body_TranslationInterpolator_Stand"));
ROUTE571.setToField(CString("set_fraction"));
Scene13.addChild(&ROUTE571);

ROUTE& ROUTE572 =  ROUTE();
ROUTE572.setFromNode(CString("r_ankle_RotationInterpolator_Stand"));
ROUTE572.setFromField(CString("value_changed"));
ROUTE572.setToNode(CString("hanim_r_ankle"));
ROUTE572.setToField(CString("set_rotation"));
Scene13.addChild(&ROUTE572);

ROUTE& ROUTE573 =  ROUTE();
ROUTE573.setFromNode(CString("r_knee_RotationInterpolator_Stand"));
ROUTE573.setFromField(CString("value_changed"));
ROUTE573.setToNode(CString("hanim_r_knee"));
ROUTE573.setToField(CString("set_rotation"));
Scene13.addChild(&ROUTE573);

ROUTE& ROUTE574 =  ROUTE();
ROUTE574.setFromNode(CString("r_hip_RotationInterpolator_Stand"));
ROUTE574.setFromField(CString("value_changed"));
ROUTE574.setToNode(CString("hanim_r_hip"));
ROUTE574.setToField(CString("set_rotation"));
Scene13.addChild(&ROUTE574);

ROUTE& ROUTE575 =  ROUTE();
ROUTE575.setFromNode(CString("l_ankle_RotationInterpolator_Stand"));
ROUTE575.setFromField(CString("value_changed"));
ROUTE575.setToNode(CString("hanim_l_ankle"));
ROUTE575.setToField(CString("set_rotation"));
Scene13.addChild(&ROUTE575);

ROUTE& ROUTE576 =  ROUTE();
ROUTE576.setFromNode(CString("l_knee_RotationInterpolator_Stand"));
ROUTE576.setFromField(CString("value_changed"));
ROUTE576.setToNode(CString("hanim_l_knee"));
ROUTE576.setToField(CString("set_rotation"));
Scene13.addChild(&ROUTE576);

ROUTE& ROUTE577 =  ROUTE();
ROUTE577.setFromNode(CString("l_hip_RotationInterpolator_Stand"));
ROUTE577.setFromField(CString("value_changed"));
ROUTE577.setToNode(CString("hanim_l_hip"));
ROUTE577.setToField(CString("set_rotation"));
Scene13.addChild(&ROUTE577);

ROUTE& ROUTE578 =  ROUTE();
ROUTE578.setFromNode(CString("lower_body_RotationInterpolator_Stand"));
ROUTE578.setFromField(CString("value_changed"));
ROUTE578.setToNode(CString("hanim_sacroiliac"));
ROUTE578.setToField(CString("set_rotation"));
Scene13.addChild(&ROUTE578);

ROUTE& ROUTE579 =  ROUTE();
ROUTE579.setFromNode(CString("r_wrist_RotationInterpolator_Stand"));
ROUTE579.setFromField(CString("value_changed"));
ROUTE579.setToNode(CString("hanim_r_wrist"));
ROUTE579.setToField(CString("set_rotation"));
Scene13.addChild(&ROUTE579);

ROUTE& ROUTE580 =  ROUTE();
ROUTE580.setFromNode(CString("r_elbow_RotationInterpolator_Stand"));
ROUTE580.setFromField(CString("value_changed"));
ROUTE580.setToNode(CString("hanim_r_elbow"));
ROUTE580.setToField(CString("set_rotation"));
Scene13.addChild(&ROUTE580);

ROUTE& ROUTE581 =  ROUTE();
ROUTE581.setFromNode(CString("r_shoulder_RotationInterpolator_Stand"));
ROUTE581.setFromField(CString("value_changed"));
ROUTE581.setToNode(CString("hanim_r_shoulder"));
ROUTE581.setToField(CString("set_rotation"));
Scene13.addChild(&ROUTE581);

ROUTE& ROUTE582 =  ROUTE();
ROUTE582.setFromNode(CString("l_wrist_RotationInterpolator_Stand"));
ROUTE582.setFromField(CString("value_changed"));
ROUTE582.setToNode(CString("hanim_l_wrist"));
ROUTE582.setToField(CString("set_rotation"));
Scene13.addChild(&ROUTE582);

ROUTE& ROUTE583 =  ROUTE();
ROUTE583.setFromNode(CString("l_elbow_RotationInterpolator_Stand"));
ROUTE583.setFromField(CString("value_changed"));
ROUTE583.setToNode(CString("hanim_l_elbow"));
ROUTE583.setToField(CString("set_rotation"));
Scene13.addChild(&ROUTE583);

ROUTE& ROUTE584 =  ROUTE();
ROUTE584.setFromNode(CString("l_shoulder_RotationInterpolator_Stand"));
ROUTE584.setFromField(CString("value_changed"));
ROUTE584.setToNode(CString("hanim_l_shoulder"));
ROUTE584.setToField(CString("set_rotation"));
Scene13.addChild(&ROUTE584);

ROUTE& ROUTE585 =  ROUTE();
ROUTE585.setFromNode(CString("head_RotationInterpolator_Stand"));
ROUTE585.setFromField(CString("value_changed"));
ROUTE585.setToNode(CString("hanim_skullbase"));
ROUTE585.setToField(CString("set_rotation"));
Scene13.addChild(&ROUTE585);

ROUTE& ROUTE586 =  ROUTE();
ROUTE586.setFromNode(CString("neck_RotationInterpolator_Stand"));
ROUTE586.setFromField(CString("value_changed"));
ROUTE586.setToNode(CString("hanim_vc4"));
ROUTE586.setToField(CString("set_rotation"));
Scene13.addChild(&ROUTE586);

ROUTE& ROUTE587 =  ROUTE();
ROUTE587.setFromNode(CString("upper_body_RotationInterpolator_Stand"));
ROUTE587.setFromField(CString("value_changed"));
ROUTE587.setToNode(CString("hanim_vl1"));
ROUTE587.setToField(CString("set_rotation"));
Scene13.addChild(&ROUTE587);

ROUTE& ROUTE588 =  ROUTE();
ROUTE588.setFromNode(CString("whole_body_RotationInterpolator_Stand"));
ROUTE588.setFromField(CString("value_changed"));
ROUTE588.setToNode(CString("hanim_humanoid_root"));
ROUTE588.setToField(CString("set_rotation"));
Scene13.addChild(&ROUTE588);

ROUTE& ROUTE589 =  ROUTE();
ROUTE589.setFromNode(CString("whole_body_TranslationInterpolator_Stand"));
ROUTE589.setFromField(CString("value_changed"));
ROUTE589.setToNode(CString("hanim_humanoid_root"));
ROUTE589.setToField(CString("set_translation"));
Scene13.addChild(&ROUTE589);

ROUTE& ROUTE590 =  ROUTE();
ROUTE590.setFromNode(CString("Walk_Time"));
ROUTE590.setFromField(CString("fraction_changed"));
ROUTE590.setToNode(CString("r_ankle_RotationInterpolator_BasicWalk"));
ROUTE590.setToField(CString("set_fraction"));
Scene13.addChild(&ROUTE590);

ROUTE& ROUTE591 =  ROUTE();
ROUTE591.setFromNode(CString("Walk_Time"));
ROUTE591.setFromField(CString("fraction_changed"));
ROUTE591.setToNode(CString("r_knee_RotationInterpolator_BasicWalk"));
ROUTE591.setToField(CString("set_fraction"));
Scene13.addChild(&ROUTE591);

ROUTE& ROUTE592 =  ROUTE();
ROUTE592.setFromNode(CString("Walk_Time"));
ROUTE592.setFromField(CString("fraction_changed"));
ROUTE592.setToNode(CString("r_hip_RotationInterpolator_BasicWalk"));
ROUTE592.setToField(CString("set_fraction"));
Scene13.addChild(&ROUTE592);

ROUTE& ROUTE593 =  ROUTE();
ROUTE593.setFromNode(CString("Walk_Time"));
ROUTE593.setFromField(CString("fraction_changed"));
ROUTE593.setToNode(CString("l_ankle_RotationInterpolator_BasicWalk"));
ROUTE593.setToField(CString("set_fraction"));
Scene13.addChild(&ROUTE593);

ROUTE& ROUTE594 =  ROUTE();
ROUTE594.setFromNode(CString("Walk_Time"));
ROUTE594.setFromField(CString("fraction_changed"));
ROUTE594.setToNode(CString("l_knee_RotationInterpolator_BasicWalk"));
ROUTE594.setToField(CString("set_fraction"));
Scene13.addChild(&ROUTE594);

ROUTE& ROUTE595 =  ROUTE();
ROUTE595.setFromNode(CString("Walk_Time"));
ROUTE595.setFromField(CString("fraction_changed"));
ROUTE595.setToNode(CString("l_hip_RotationInterpolator_BasicWalk"));
ROUTE595.setToField(CString("set_fraction"));
Scene13.addChild(&ROUTE595);

ROUTE& ROUTE596 =  ROUTE();
ROUTE596.setFromNode(CString("Walk_Time"));
ROUTE596.setFromField(CString("fraction_changed"));
ROUTE596.setToNode(CString("lower_body_RotationInterpolator_BasicWalk"));
ROUTE596.setToField(CString("set_fraction"));
Scene13.addChild(&ROUTE596);

ROUTE& ROUTE597 =  ROUTE();
ROUTE597.setFromNode(CString("Walk_Time"));
ROUTE597.setFromField(CString("fraction_changed"));
ROUTE597.setToNode(CString("r_wrist_RotationInterpolator_BasicWalk"));
ROUTE597.setToField(CString("set_fraction"));
Scene13.addChild(&ROUTE597);

ROUTE& ROUTE598 =  ROUTE();
ROUTE598.setFromNode(CString("Walk_Time"));
ROUTE598.setFromField(CString("fraction_changed"));
ROUTE598.setToNode(CString("r_elbow_RotationInterpolator_BasicWalk"));
ROUTE598.setToField(CString("set_fraction"));
Scene13.addChild(&ROUTE598);

ROUTE& ROUTE599 =  ROUTE();
ROUTE599.setFromNode(CString("Walk_Time"));
ROUTE599.setFromField(CString("fraction_changed"));
ROUTE599.setToNode(CString("r_shoulder_RotationInterpolator_BasicWalk"));
ROUTE599.setToField(CString("set_fraction"));
Scene13.addChild(&ROUTE599);

ROUTE& ROUTE600 =  ROUTE();
ROUTE600.setFromNode(CString("Walk_Time"));
ROUTE600.setFromField(CString("fraction_changed"));
ROUTE600.setToNode(CString("l_wrist_RotationInterpolator_BasicWalk"));
ROUTE600.setToField(CString("set_fraction"));
Scene13.addChild(&ROUTE600);

ROUTE& ROUTE601 =  ROUTE();
ROUTE601.setFromNode(CString("Walk_Time"));
ROUTE601.setFromField(CString("fraction_changed"));
ROUTE601.setToNode(CString("l_elbow_RotationInterpolator_BasicWalk"));
ROUTE601.setToField(CString("set_fraction"));
Scene13.addChild(&ROUTE601);

ROUTE& ROUTE602 =  ROUTE();
ROUTE602.setFromNode(CString("Walk_Time"));
ROUTE602.setFromField(CString("fraction_changed"));
ROUTE602.setToNode(CString("l_shoulder_RotationInterpolator_BasicWalk"));
ROUTE602.setToField(CString("set_fraction"));
Scene13.addChild(&ROUTE602);

ROUTE& ROUTE603 =  ROUTE();
ROUTE603.setFromNode(CString("Walk_Time"));
ROUTE603.setFromField(CString("fraction_changed"));
ROUTE603.setToNode(CString("head_RotationInterpolator_BasicWalk"));
ROUTE603.setToField(CString("set_fraction"));
Scene13.addChild(&ROUTE603);

ROUTE& ROUTE604 =  ROUTE();
ROUTE604.setFromNode(CString("Walk_Time"));
ROUTE604.setFromField(CString("fraction_changed"));
ROUTE604.setToNode(CString("neck_RotationInterpolator_BasicWalk"));
ROUTE604.setToField(CString("set_fraction"));
Scene13.addChild(&ROUTE604);

ROUTE& ROUTE605 =  ROUTE();
ROUTE605.setFromNode(CString("Walk_Time"));
ROUTE605.setFromField(CString("fraction_changed"));
ROUTE605.setToNode(CString("upper_body_RotationInterpolator_BasicWalk"));
ROUTE605.setToField(CString("set_fraction"));
Scene13.addChild(&ROUTE605);

ROUTE& ROUTE606 =  ROUTE();
ROUTE606.setFromNode(CString("Walk_Time"));
ROUTE606.setFromField(CString("fraction_changed"));
ROUTE606.setToNode(CString("whole_body_RotationInterpolator_BasicWalk"));
ROUTE606.setToField(CString("set_fraction"));
Scene13.addChild(&ROUTE606);

ROUTE& ROUTE607 =  ROUTE();
ROUTE607.setFromNode(CString("Walk_Time"));
ROUTE607.setFromField(CString("fraction_changed"));
ROUTE607.setToNode(CString("whole_body_TranslationInterpolator_BasicWalk"));
ROUTE607.setToField(CString("set_fraction"));
Scene13.addChild(&ROUTE607);

ROUTE& ROUTE608 =  ROUTE();
ROUTE608.setFromNode(CString("r_ankle_RotationInterpolator_BasicWalk"));
ROUTE608.setFromField(CString("value_changed"));
ROUTE608.setToNode(CString("hanim_r_ankle"));
ROUTE608.setToField(CString("set_rotation"));
Scene13.addChild(&ROUTE608);

ROUTE& ROUTE609 =  ROUTE();
ROUTE609.setFromNode(CString("r_knee_RotationInterpolator_BasicWalk"));
ROUTE609.setFromField(CString("value_changed"));
ROUTE609.setToNode(CString("hanim_r_knee"));
ROUTE609.setToField(CString("set_rotation"));
Scene13.addChild(&ROUTE609);

ROUTE& ROUTE610 =  ROUTE();
ROUTE610.setFromNode(CString("r_hip_RotationInterpolator_BasicWalk"));
ROUTE610.setFromField(CString("value_changed"));
ROUTE610.setToNode(CString("hanim_r_hip"));
ROUTE610.setToField(CString("set_rotation"));
Scene13.addChild(&ROUTE610);

ROUTE& ROUTE611 =  ROUTE();
ROUTE611.setFromNode(CString("l_ankle_RotationInterpolator_BasicWalk"));
ROUTE611.setFromField(CString("value_changed"));
ROUTE611.setToNode(CString("hanim_l_ankle"));
ROUTE611.setToField(CString("set_rotation"));
Scene13.addChild(&ROUTE611);

ROUTE& ROUTE612 =  ROUTE();
ROUTE612.setFromNode(CString("l_knee_RotationInterpolator_BasicWalk"));
ROUTE612.setFromField(CString("value_changed"));
ROUTE612.setToNode(CString("hanim_l_knee"));
ROUTE612.setToField(CString("set_rotation"));
Scene13.addChild(&ROUTE612);

ROUTE& ROUTE613 =  ROUTE();
ROUTE613.setFromNode(CString("l_hip_RotationInterpolator_BasicWalk"));
ROUTE613.setFromField(CString("value_changed"));
ROUTE613.setToNode(CString("hanim_l_hip"));
ROUTE613.setToField(CString("set_rotation"));
Scene13.addChild(&ROUTE613);

ROUTE& ROUTE614 =  ROUTE();
ROUTE614.setFromNode(CString("lower_body_RotationInterpolator_BasicWalk"));
ROUTE614.setFromField(CString("value_changed"));
ROUTE614.setToNode(CString("hanim_sacroiliac"));
ROUTE614.setToField(CString("set_rotation"));
Scene13.addChild(&ROUTE614);

ROUTE& ROUTE615 =  ROUTE();
ROUTE615.setFromNode(CString("r_wrist_RotationInterpolator_BasicWalk"));
ROUTE615.setFromField(CString("value_changed"));
ROUTE615.setToNode(CString("hanim_r_wrist"));
ROUTE615.setToField(CString("set_rotation"));
Scene13.addChild(&ROUTE615);

ROUTE& ROUTE616 =  ROUTE();
ROUTE616.setFromNode(CString("r_elbow_RotationInterpolator_BasicWalk"));
ROUTE616.setFromField(CString("value_changed"));
ROUTE616.setToNode(CString("hanim_r_elbow"));
ROUTE616.setToField(CString("set_rotation"));
Scene13.addChild(&ROUTE616);

ROUTE& ROUTE617 =  ROUTE();
ROUTE617.setFromNode(CString("r_shoulder_RotationInterpolator_BasicWalk"));
ROUTE617.setFromField(CString("value_changed"));
ROUTE617.setToNode(CString("hanim_r_shoulder"));
ROUTE617.setToField(CString("set_rotation"));
Scene13.addChild(&ROUTE617);

ROUTE& ROUTE618 =  ROUTE();
ROUTE618.setFromNode(CString("l_wrist_RotationInterpolator_BasicWalk"));
ROUTE618.setFromField(CString("value_changed"));
ROUTE618.setToNode(CString("hanim_l_wrist"));
ROUTE618.setToField(CString("set_rotation"));
Scene13.addChild(&ROUTE618);

ROUTE& ROUTE619 =  ROUTE();
ROUTE619.setFromNode(CString("l_elbow_RotationInterpolator_BasicWalk"));
ROUTE619.setFromField(CString("value_changed"));
ROUTE619.setToNode(CString("hanim_l_elbow"));
ROUTE619.setToField(CString("set_rotation"));
Scene13.addChild(&ROUTE619);

ROUTE& ROUTE620 =  ROUTE();
ROUTE620.setFromNode(CString("l_shoulder_RotationInterpolator_BasicWalk"));
ROUTE620.setFromField(CString("value_changed"));
ROUTE620.setToNode(CString("hanim_l_shoulder"));
ROUTE620.setToField(CString("set_rotation"));
Scene13.addChild(&ROUTE620);

ROUTE& ROUTE621 =  ROUTE();
ROUTE621.setFromNode(CString("head_RotationInterpolator_BasicWalk"));
ROUTE621.setFromField(CString("value_changed"));
ROUTE621.setToNode(CString("hanim_skullbase"));
ROUTE621.setToField(CString("set_rotation"));
Scene13.addChild(&ROUTE621);

ROUTE& ROUTE622 =  ROUTE();
ROUTE622.setFromNode(CString("neck_RotationInterpolator_BasicWalk"));
ROUTE622.setFromField(CString("value_changed"));
ROUTE622.setToNode(CString("hanim_vc4"));
ROUTE622.setToField(CString("set_rotation"));
Scene13.addChild(&ROUTE622);

ROUTE& ROUTE623 =  ROUTE();
ROUTE623.setFromNode(CString("upper_body_RotationInterpolator_BasicWalk"));
ROUTE623.setFromField(CString("value_changed"));
ROUTE623.setToNode(CString("hanim_vl1"));
ROUTE623.setToField(CString("set_rotation"));
Scene13.addChild(&ROUTE623);

ROUTE& ROUTE624 =  ROUTE();
ROUTE624.setFromNode(CString("whole_body_RotationInterpolator_BasicWalk"));
ROUTE624.setFromField(CString("value_changed"));
ROUTE624.setToNode(CString("hanim_humanoid_root"));
ROUTE624.setToField(CString("set_rotation"));
Scene13.addChild(&ROUTE624);

ROUTE& ROUTE625 =  ROUTE();
ROUTE625.setFromNode(CString("whole_body_TranslationInterpolator_BasicWalk"));
ROUTE625.setFromField(CString("value_changed"));
ROUTE625.setToNode(CString("hanim_humanoid_root"));
ROUTE625.setToField(CString("set_translation"));
Scene13.addChild(&ROUTE625);

ROUTE& ROUTE626 =  ROUTE();
ROUTE626.setFromNode(CString("Run_Time"));
ROUTE626.setFromField(CString("fraction_changed"));
ROUTE626.setToNode(CString("r_ankle_RotationInterpolator_Run"));
ROUTE626.setToField(CString("set_fraction"));
Scene13.addChild(&ROUTE626);

ROUTE& ROUTE627 =  ROUTE();
ROUTE627.setFromNode(CString("Run_Time"));
ROUTE627.setFromField(CString("fraction_changed"));
ROUTE627.setToNode(CString("r_knee_RotationInterpolator_Run"));
ROUTE627.setToField(CString("set_fraction"));
Scene13.addChild(&ROUTE627);

ROUTE& ROUTE628 =  ROUTE();
ROUTE628.setFromNode(CString("Run_Time"));
ROUTE628.setFromField(CString("fraction_changed"));
ROUTE628.setToNode(CString("r_hip_RotationInterpolator_Run"));
ROUTE628.setToField(CString("set_fraction"));
Scene13.addChild(&ROUTE628);

ROUTE& ROUTE629 =  ROUTE();
ROUTE629.setFromNode(CString("Run_Time"));
ROUTE629.setFromField(CString("fraction_changed"));
ROUTE629.setToNode(CString("l_ankle_RotationInterpolator_Run"));
ROUTE629.setToField(CString("set_fraction"));
Scene13.addChild(&ROUTE629);

ROUTE& ROUTE630 =  ROUTE();
ROUTE630.setFromNode(CString("Run_Time"));
ROUTE630.setFromField(CString("fraction_changed"));
ROUTE630.setToNode(CString("l_knee_RotationInterpolator_Run"));
ROUTE630.setToField(CString("set_fraction"));
Scene13.addChild(&ROUTE630);

ROUTE& ROUTE631 =  ROUTE();
ROUTE631.setFromNode(CString("Run_Time"));
ROUTE631.setFromField(CString("fraction_changed"));
ROUTE631.setToNode(CString("l_hip_RotationInterpolator_Run"));
ROUTE631.setToField(CString("set_fraction"));
Scene13.addChild(&ROUTE631);

ROUTE& ROUTE632 =  ROUTE();
ROUTE632.setFromNode(CString("Run_Time"));
ROUTE632.setFromField(CString("fraction_changed"));
ROUTE632.setToNode(CString("lower_body_RotationInterpolator_Run"));
ROUTE632.setToField(CString("set_fraction"));
Scene13.addChild(&ROUTE632);

ROUTE& ROUTE633 =  ROUTE();
ROUTE633.setFromNode(CString("Run_Time"));
ROUTE633.setFromField(CString("fraction_changed"));
ROUTE633.setToNode(CString("r_wrist_RotationInterpolator_Run"));
ROUTE633.setToField(CString("set_fraction"));
Scene13.addChild(&ROUTE633);

ROUTE& ROUTE634 =  ROUTE();
ROUTE634.setFromNode(CString("Run_Time"));
ROUTE634.setFromField(CString("fraction_changed"));
ROUTE634.setToNode(CString("r_elbow_RotationInterpolator_Run"));
ROUTE634.setToField(CString("set_fraction"));
Scene13.addChild(&ROUTE634);

ROUTE& ROUTE635 =  ROUTE();
ROUTE635.setFromNode(CString("Run_Time"));
ROUTE635.setFromField(CString("fraction_changed"));
ROUTE635.setToNode(CString("r_shoulder_RotationInterpolator_Run"));
ROUTE635.setToField(CString("set_fraction"));
Scene13.addChild(&ROUTE635);

ROUTE& ROUTE636 =  ROUTE();
ROUTE636.setFromNode(CString("Run_Time"));
ROUTE636.setFromField(CString("fraction_changed"));
ROUTE636.setToNode(CString("l_wrist_RotationInterpolator_Run"));
ROUTE636.setToField(CString("set_fraction"));
Scene13.addChild(&ROUTE636);

ROUTE& ROUTE637 =  ROUTE();
ROUTE637.setFromNode(CString("Run_Time"));
ROUTE637.setFromField(CString("fraction_changed"));
ROUTE637.setToNode(CString("l_elbow_RotationInterpolator_Run"));
ROUTE637.setToField(CString("set_fraction"));
Scene13.addChild(&ROUTE637);

ROUTE& ROUTE638 =  ROUTE();
ROUTE638.setFromNode(CString("Run_Time"));
ROUTE638.setFromField(CString("fraction_changed"));
ROUTE638.setToNode(CString("l_shoulder_RotationInterpolator_Run"));
ROUTE638.setToField(CString("set_fraction"));
Scene13.addChild(&ROUTE638);

ROUTE& ROUTE639 =  ROUTE();
ROUTE639.setFromNode(CString("Run_Time"));
ROUTE639.setFromField(CString("fraction_changed"));
ROUTE639.setToNode(CString("head_RotationInterpolator_Run"));
ROUTE639.setToField(CString("set_fraction"));
Scene13.addChild(&ROUTE639);

ROUTE& ROUTE640 =  ROUTE();
ROUTE640.setFromNode(CString("Run_Time"));
ROUTE640.setFromField(CString("fraction_changed"));
ROUTE640.setToNode(CString("neck_RotationInterpolator_Run"));
ROUTE640.setToField(CString("set_fraction"));
Scene13.addChild(&ROUTE640);

ROUTE& ROUTE641 =  ROUTE();
ROUTE641.setFromNode(CString("Run_Time"));
ROUTE641.setFromField(CString("fraction_changed"));
ROUTE641.setToNode(CString("upper_body_RotationInterpolator_Run"));
ROUTE641.setToField(CString("set_fraction"));
Scene13.addChild(&ROUTE641);

ROUTE& ROUTE642 =  ROUTE();
ROUTE642.setFromNode(CString("Run_Time"));
ROUTE642.setFromField(CString("fraction_changed"));
ROUTE642.setToNode(CString("whole_body_RotationInterpolator_Run"));
ROUTE642.setToField(CString("set_fraction"));
Scene13.addChild(&ROUTE642);

ROUTE& ROUTE643 =  ROUTE();
ROUTE643.setFromNode(CString("Run_Time"));
ROUTE643.setFromField(CString("fraction_changed"));
ROUTE643.setToNode(CString("whole_body_TranslationInterpolator_Run"));
ROUTE643.setToField(CString("set_fraction"));
Scene13.addChild(&ROUTE643);

ROUTE& ROUTE644 =  ROUTE();
ROUTE644.setFromNode(CString("r_ankle_RotationInterpolator_Run"));
ROUTE644.setFromField(CString("value_changed"));
ROUTE644.setToNode(CString("hanim_r_ankle"));
ROUTE644.setToField(CString("set_rotation"));
Scene13.addChild(&ROUTE644);

ROUTE& ROUTE645 =  ROUTE();
ROUTE645.setFromNode(CString("r_knee_RotationInterpolator_Run"));
ROUTE645.setFromField(CString("value_changed"));
ROUTE645.setToNode(CString("hanim_r_knee"));
ROUTE645.setToField(CString("set_rotation"));
Scene13.addChild(&ROUTE645);

ROUTE& ROUTE646 =  ROUTE();
ROUTE646.setFromNode(CString("r_hip_RotationInterpolator_Run"));
ROUTE646.setFromField(CString("value_changed"));
ROUTE646.setToNode(CString("hanim_r_hip"));
ROUTE646.setToField(CString("set_rotation"));
Scene13.addChild(&ROUTE646);

ROUTE& ROUTE647 =  ROUTE();
ROUTE647.setFromNode(CString("l_ankle_RotationInterpolator_Run"));
ROUTE647.setFromField(CString("value_changed"));
ROUTE647.setToNode(CString("hanim_l_ankle"));
ROUTE647.setToField(CString("set_rotation"));
Scene13.addChild(&ROUTE647);

ROUTE& ROUTE648 =  ROUTE();
ROUTE648.setFromNode(CString("l_knee_RotationInterpolator_Run"));
ROUTE648.setFromField(CString("value_changed"));
ROUTE648.setToNode(CString("hanim_l_knee"));
ROUTE648.setToField(CString("set_rotation"));
Scene13.addChild(&ROUTE648);

ROUTE& ROUTE649 =  ROUTE();
ROUTE649.setFromNode(CString("l_hip_RotationInterpolator_Run"));
ROUTE649.setFromField(CString("value_changed"));
ROUTE649.setToNode(CString("hanim_l_hip"));
ROUTE649.setToField(CString("set_rotation"));
Scene13.addChild(&ROUTE649);

ROUTE& ROUTE650 =  ROUTE();
ROUTE650.setFromNode(CString("lower_body_RotationInterpolator_Run"));
ROUTE650.setFromField(CString("value_changed"));
ROUTE650.setToNode(CString("hanim_sacroiliac"));
ROUTE650.setToField(CString("set_rotation"));
Scene13.addChild(&ROUTE650);

ROUTE& ROUTE651 =  ROUTE();
ROUTE651.setFromNode(CString("r_wrist_RotationInterpolator_Run"));
ROUTE651.setFromField(CString("value_changed"));
ROUTE651.setToNode(CString("hanim_r_wrist"));
ROUTE651.setToField(CString("set_rotation"));
Scene13.addChild(&ROUTE651);

ROUTE& ROUTE652 =  ROUTE();
ROUTE652.setFromNode(CString("r_elbow_RotationInterpolator_Run"));
ROUTE652.setFromField(CString("value_changed"));
ROUTE652.setToNode(CString("hanim_r_elbow"));
ROUTE652.setToField(CString("set_rotation"));
Scene13.addChild(&ROUTE652);

ROUTE& ROUTE653 =  ROUTE();
ROUTE653.setFromNode(CString("r_shoulder_RotationInterpolator_Run"));
ROUTE653.setFromField(CString("value_changed"));
ROUTE653.setToNode(CString("hanim_r_shoulder"));
ROUTE653.setToField(CString("set_rotation"));
Scene13.addChild(&ROUTE653);

ROUTE& ROUTE654 =  ROUTE();
ROUTE654.setFromNode(CString("l_wrist_RotationInterpolator_Run"));
ROUTE654.setFromField(CString("value_changed"));
ROUTE654.setToNode(CString("hanim_l_wrist"));
ROUTE654.setToField(CString("set_rotation"));
Scene13.addChild(&ROUTE654);

ROUTE& ROUTE655 =  ROUTE();
ROUTE655.setFromNode(CString("l_elbow_RotationInterpolator_Run"));
ROUTE655.setFromField(CString("value_changed"));
ROUTE655.setToNode(CString("hanim_l_elbow"));
ROUTE655.setToField(CString("set_rotation"));
Scene13.addChild(&ROUTE655);

ROUTE& ROUTE656 =  ROUTE();
ROUTE656.setFromNode(CString("l_shoulder_RotationInterpolator_Run"));
ROUTE656.setFromField(CString("value_changed"));
ROUTE656.setToNode(CString("hanim_l_shoulder"));
ROUTE656.setToField(CString("set_rotation"));
Scene13.addChild(&ROUTE656);

ROUTE& ROUTE657 =  ROUTE();
ROUTE657.setFromNode(CString("head_RotationInterpolator_Run"));
ROUTE657.setFromField(CString("value_changed"));
ROUTE657.setToNode(CString("hanim_skullbase"));
ROUTE657.setToField(CString("set_rotation"));
Scene13.addChild(&ROUTE657);

ROUTE& ROUTE658 =  ROUTE();
ROUTE658.setFromNode(CString("neck_RotationInterpolator_Run"));
ROUTE658.setFromField(CString("value_changed"));
ROUTE658.setToNode(CString("hanim_vc4"));
ROUTE658.setToField(CString("set_rotation"));
Scene13.addChild(&ROUTE658);

ROUTE& ROUTE659 =  ROUTE();
ROUTE659.setFromNode(CString("upper_body_RotationInterpolator_Run"));
ROUTE659.setFromField(CString("value_changed"));
ROUTE659.setToNode(CString("hanim_vl1"));
ROUTE659.setToField(CString("set_rotation"));
Scene13.addChild(&ROUTE659);

ROUTE& ROUTE660 =  ROUTE();
ROUTE660.setFromNode(CString("whole_body_RotationInterpolator_Run"));
ROUTE660.setFromField(CString("value_changed"));
ROUTE660.setToNode(CString("hanim_humanoid_root"));
ROUTE660.setToField(CString("set_rotation"));
Scene13.addChild(&ROUTE660);

ROUTE& ROUTE661 =  ROUTE();
ROUTE661.setFromNode(CString("whole_body_TranslationInterpolator_Run"));
ROUTE661.setFromField(CString("value_changed"));
ROUTE661.setToNode(CString("hanim_humanoid_root"));
ROUTE661.setToField(CString("set_translation"));
Scene13.addChild(&ROUTE661);

ROUTE& ROUTE662 =  ROUTE();
ROUTE662.setFromNode(CString("Jump_Time"));
ROUTE662.setFromField(CString("fraction_changed"));
ROUTE662.setToNode(CString("r_ankle_RotationInterpolator_Jump"));
ROUTE662.setToField(CString("set_fraction"));
Scene13.addChild(&ROUTE662);

ROUTE& ROUTE663 =  ROUTE();
ROUTE663.setFromNode(CString("Jump_Time"));
ROUTE663.setFromField(CString("fraction_changed"));
ROUTE663.setToNode(CString("r_knee_RotationInterpolator_Jump"));
ROUTE663.setToField(CString("set_fraction"));
Scene13.addChild(&ROUTE663);

ROUTE& ROUTE664 =  ROUTE();
ROUTE664.setFromNode(CString("Jump_Time"));
ROUTE664.setFromField(CString("fraction_changed"));
ROUTE664.setToNode(CString("r_hip_RotationInterpolator_Jump"));
ROUTE664.setToField(CString("set_fraction"));
Scene13.addChild(&ROUTE664);

ROUTE& ROUTE665 =  ROUTE();
ROUTE665.setFromNode(CString("Jump_Time"));
ROUTE665.setFromField(CString("fraction_changed"));
ROUTE665.setToNode(CString("l_ankle_RotationInterpolator_Jump"));
ROUTE665.setToField(CString("set_fraction"));
Scene13.addChild(&ROUTE665);

ROUTE& ROUTE666 =  ROUTE();
ROUTE666.setFromNode(CString("Jump_Time"));
ROUTE666.setFromField(CString("fraction_changed"));
ROUTE666.setToNode(CString("l_knee_RotationInterpolator_Jump"));
ROUTE666.setToField(CString("set_fraction"));
Scene13.addChild(&ROUTE666);

ROUTE& ROUTE667 =  ROUTE();
ROUTE667.setFromNode(CString("Jump_Time"));
ROUTE667.setFromField(CString("fraction_changed"));
ROUTE667.setToNode(CString("l_hip_RotationInterpolator_Jump"));
ROUTE667.setToField(CString("set_fraction"));
Scene13.addChild(&ROUTE667);

ROUTE& ROUTE668 =  ROUTE();
ROUTE668.setFromNode(CString("Jump_Time"));
ROUTE668.setFromField(CString("fraction_changed"));
ROUTE668.setToNode(CString("lower_body_RotationInterpolator_Jump"));
ROUTE668.setToField(CString("set_fraction"));
Scene13.addChild(&ROUTE668);

ROUTE& ROUTE669 =  ROUTE();
ROUTE669.setFromNode(CString("Jump_Time"));
ROUTE669.setFromField(CString("fraction_changed"));
ROUTE669.setToNode(CString("r_wrist_RotationInterpolator_Jump"));
ROUTE669.setToField(CString("set_fraction"));
Scene13.addChild(&ROUTE669);

ROUTE& ROUTE670 =  ROUTE();
ROUTE670.setFromNode(CString("Jump_Time"));
ROUTE670.setFromField(CString("fraction_changed"));
ROUTE670.setToNode(CString("r_elbow_RotationInterpolator_Jump"));
ROUTE670.setToField(CString("set_fraction"));
Scene13.addChild(&ROUTE670);

ROUTE& ROUTE671 =  ROUTE();
ROUTE671.setFromNode(CString("Jump_Time"));
ROUTE671.setFromField(CString("fraction_changed"));
ROUTE671.setToNode(CString("r_shoulder_RotationInterpolator_Jump"));
ROUTE671.setToField(CString("set_fraction"));
Scene13.addChild(&ROUTE671);

ROUTE& ROUTE672 =  ROUTE();
ROUTE672.setFromNode(CString("Jump_Time"));
ROUTE672.setFromField(CString("fraction_changed"));
ROUTE672.setToNode(CString("l_wrist_RotationInterpolator_Jump"));
ROUTE672.setToField(CString("set_fraction"));
Scene13.addChild(&ROUTE672);

ROUTE& ROUTE673 =  ROUTE();
ROUTE673.setFromNode(CString("Jump_Time"));
ROUTE673.setFromField(CString("fraction_changed"));
ROUTE673.setToNode(CString("l_elbow_RotationInterpolator_Jump"));
ROUTE673.setToField(CString("set_fraction"));
Scene13.addChild(&ROUTE673);

ROUTE& ROUTE674 =  ROUTE();
ROUTE674.setFromNode(CString("Jump_Time"));
ROUTE674.setFromField(CString("fraction_changed"));
ROUTE674.setToNode(CString("l_shoulder_RotationInterpolator_Jump"));
ROUTE674.setToField(CString("set_fraction"));
Scene13.addChild(&ROUTE674);

ROUTE& ROUTE675 =  ROUTE();
ROUTE675.setFromNode(CString("Jump_Time"));
ROUTE675.setFromField(CString("fraction_changed"));
ROUTE675.setToNode(CString("head_RotationInterpolator_Jump"));
ROUTE675.setToField(CString("set_fraction"));
Scene13.addChild(&ROUTE675);

ROUTE& ROUTE676 =  ROUTE();
ROUTE676.setFromNode(CString("Jump_Time"));
ROUTE676.setFromField(CString("fraction_changed"));
ROUTE676.setToNode(CString("neck_RotationInterpolator_Jump"));
ROUTE676.setToField(CString("set_fraction"));
Scene13.addChild(&ROUTE676);

ROUTE& ROUTE677 =  ROUTE();
ROUTE677.setFromNode(CString("Jump_Time"));
ROUTE677.setFromField(CString("fraction_changed"));
ROUTE677.setToNode(CString("upper_body_RotationInterpolator_Jump"));
ROUTE677.setToField(CString("set_fraction"));
Scene13.addChild(&ROUTE677);

ROUTE& ROUTE678 =  ROUTE();
ROUTE678.setFromNode(CString("Jump_Time"));
ROUTE678.setFromField(CString("fraction_changed"));
ROUTE678.setToNode(CString("whole_body_RotationInterpolator_Jump"));
ROUTE678.setToField(CString("set_fraction"));
Scene13.addChild(&ROUTE678);

ROUTE& ROUTE679 =  ROUTE();
ROUTE679.setFromNode(CString("Jump_Time"));
ROUTE679.setFromField(CString("fraction_changed"));
ROUTE679.setToNode(CString("whole_body_TranslationInterpolator_Jump"));
ROUTE679.setToField(CString("set_fraction"));
Scene13.addChild(&ROUTE679);

ROUTE& ROUTE680 =  ROUTE();
ROUTE680.setFromNode(CString("r_ankle_RotationInterpolator_Jump"));
ROUTE680.setFromField(CString("value_changed"));
ROUTE680.setToNode(CString("hanim_r_ankle"));
ROUTE680.setToField(CString("set_rotation"));
Scene13.addChild(&ROUTE680);

ROUTE& ROUTE681 =  ROUTE();
ROUTE681.setFromNode(CString("r_knee_RotationInterpolator_Jump"));
ROUTE681.setFromField(CString("value_changed"));
ROUTE681.setToNode(CString("hanim_r_knee"));
ROUTE681.setToField(CString("set_rotation"));
Scene13.addChild(&ROUTE681);

ROUTE& ROUTE682 =  ROUTE();
ROUTE682.setFromNode(CString("r_hip_RotationInterpolator_Jump"));
ROUTE682.setFromField(CString("value_changed"));
ROUTE682.setToNode(CString("hanim_r_hip"));
ROUTE682.setToField(CString("set_rotation"));
Scene13.addChild(&ROUTE682);

ROUTE& ROUTE683 =  ROUTE();
ROUTE683.setFromNode(CString("l_ankle_RotationInterpolator_Jump"));
ROUTE683.setFromField(CString("value_changed"));
ROUTE683.setToNode(CString("hanim_l_ankle"));
ROUTE683.setToField(CString("set_rotation"));
Scene13.addChild(&ROUTE683);

ROUTE& ROUTE684 =  ROUTE();
ROUTE684.setFromNode(CString("l_knee_RotationInterpolator_Jump"));
ROUTE684.setFromField(CString("value_changed"));
ROUTE684.setToNode(CString("hanim_l_knee"));
ROUTE684.setToField(CString("set_rotation"));
Scene13.addChild(&ROUTE684);

ROUTE& ROUTE685 =  ROUTE();
ROUTE685.setFromNode(CString("l_hip_RotationInterpolator_Jump"));
ROUTE685.setFromField(CString("value_changed"));
ROUTE685.setToNode(CString("hanim_l_hip"));
ROUTE685.setToField(CString("set_rotation"));
Scene13.addChild(&ROUTE685);

ROUTE& ROUTE686 =  ROUTE();
ROUTE686.setFromNode(CString("lower_body_RotationInterpolator_Jump"));
ROUTE686.setFromField(CString("value_changed"));
ROUTE686.setToNode(CString("hanim_sacroiliac"));
ROUTE686.setToField(CString("set_rotation"));
Scene13.addChild(&ROUTE686);

ROUTE& ROUTE687 =  ROUTE();
ROUTE687.setFromNode(CString("r_wrist_RotationInterpolator_Jump"));
ROUTE687.setFromField(CString("value_changed"));
ROUTE687.setToNode(CString("hanim_r_wrist"));
ROUTE687.setToField(CString("set_rotation"));
Scene13.addChild(&ROUTE687);

ROUTE& ROUTE688 =  ROUTE();
ROUTE688.setFromNode(CString("r_elbow_RotationInterpolator_Jump"));
ROUTE688.setFromField(CString("value_changed"));
ROUTE688.setToNode(CString("hanim_r_elbow"));
ROUTE688.setToField(CString("set_rotation"));
Scene13.addChild(&ROUTE688);

ROUTE& ROUTE689 =  ROUTE();
ROUTE689.setFromNode(CString("r_shoulder_RotationInterpolator_Jump"));
ROUTE689.setFromField(CString("value_changed"));
ROUTE689.setToNode(CString("hanim_r_shoulder"));
ROUTE689.setToField(CString("set_rotation"));
Scene13.addChild(&ROUTE689);

ROUTE& ROUTE690 =  ROUTE();
ROUTE690.setFromNode(CString("l_wrist_RotationInterpolator_Jump"));
ROUTE690.setFromField(CString("value_changed"));
ROUTE690.setToNode(CString("hanim_l_wrist"));
ROUTE690.setToField(CString("set_rotation"));
Scene13.addChild(&ROUTE690);

ROUTE& ROUTE691 =  ROUTE();
ROUTE691.setFromNode(CString("l_elbow_RotationInterpolator_Jump"));
ROUTE691.setFromField(CString("value_changed"));
ROUTE691.setToNode(CString("hanim_l_elbow"));
ROUTE691.setToField(CString("set_rotation"));
Scene13.addChild(&ROUTE691);

ROUTE& ROUTE692 =  ROUTE();
ROUTE692.setFromNode(CString("l_shoulder_RotationInterpolator_Jump"));
ROUTE692.setFromField(CString("value_changed"));
ROUTE692.setToNode(CString("hanim_l_shoulder"));
ROUTE692.setToField(CString("set_rotation"));
Scene13.addChild(&ROUTE692);

ROUTE& ROUTE693 =  ROUTE();
ROUTE693.setFromNode(CString("head_RotationInterpolator_Jump"));
ROUTE693.setFromField(CString("value_changed"));
ROUTE693.setToNode(CString("hanim_skullbase"));
ROUTE693.setToField(CString("set_rotation"));
Scene13.addChild(&ROUTE693);

ROUTE& ROUTE694 =  ROUTE();
ROUTE694.setFromNode(CString("neck_RotationInterpolator_Jump"));
ROUTE694.setFromField(CString("value_changed"));
ROUTE694.setToNode(CString("hanim_vc4"));
ROUTE694.setToField(CString("set_rotation"));
Scene13.addChild(&ROUTE694);

ROUTE& ROUTE695 =  ROUTE();
ROUTE695.setFromNode(CString("upper_body_RotationInterpolator_Jump"));
ROUTE695.setFromField(CString("value_changed"));
ROUTE695.setToNode(CString("hanim_vl1"));
ROUTE695.setToField(CString("set_rotation"));
Scene13.addChild(&ROUTE695);

ROUTE& ROUTE696 =  ROUTE();
ROUTE696.setFromNode(CString("whole_body_RotationInterpolator_Jump"));
ROUTE696.setFromField(CString("value_changed"));
ROUTE696.setToNode(CString("hanim_humanoid_root"));
ROUTE696.setToField(CString("set_rotation"));
Scene13.addChild(&ROUTE696);

ROUTE& ROUTE697 =  ROUTE();
ROUTE697.setFromNode(CString("whole_body_TranslationInterpolator_Jump"));
ROUTE697.setFromField(CString("value_changed"));
ROUTE697.setToNode(CString("hanim_humanoid_root"));
ROUTE697.setToField(CString("set_translation"));
Scene13.addChild(&ROUTE697);

X3D0.setScene(&Scene13);

}
