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
meta2.setContent(CString("HAnimPrototypes.x3d"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(CString("description"));
meta3.setContent(CString("Example implementation of X3D Humanoid Animation (HAnim) nodes using X3D prototypes."));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("warning"));
meta4.setContent(CString("These are developmental examples that can assist X3D player implementations and support interoperability. They are not intended for author use in regular X3D scenes."));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("warning"));
meta5.setContent(CString("Developer note: names for these HAnim Prototypes need to be corrected if used internally in an X3D player implementation (e.g. Joint to HAnimJoint)."));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("warning"));
meta6.setContent(CString("Need support for skin"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("creator"));
meta7.setContent(CString("Ozan APAYDIN, Don Brutzman"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(CString("translator"));
meta8.setContent(CString("Ozan APAYDIN, Don Brutzman"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(CString("created"));
meta9.setContent(CString("15 November 2001"));
head1.addMeta(&meta9);

meta& meta10 =  meta();
meta10.setName(CString("modified"));
meta10.setContent(CString("Mon, 15 Sep 2025 05:20:09 GMT"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(CString("TODO"));
meta11.setContent(CString("upgrade to match support requirements for HAnim 2.2"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(CString("reference"));
meta12.setContent(CString("https://www.web3d.org/files/specifications/19774/V1.0/HAnim/HAnim.html"));
head1.addMeta(&meta12);

meta& meta13 =  meta();
meta13.setName(CString("reference"));
meta13.setContent(CString("https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/hanim.html"));
head1.addMeta(&meta13);

meta& meta14 =  meta();
meta14.setName(CString("reference"));
meta14.setContent(CString("http://HAnim.org/Models/HAnim2001/boxman/boxman.wrl"));
head1.addMeta(&meta14);

meta& meta15 =  meta();
meta15.setName(CString("reference"));
meta15.setContent(CString("http://HAnim.org/Specifications/HAnim2001"));
head1.addMeta(&meta15);

meta& meta16 =  meta();
meta16.setName(CString("reference"));
meta16.setContent(CString("http://www.HAnim.org"));
head1.addMeta(&meta16);

meta& meta17 =  meta();
meta17.setName(CString("reference"));
meta17.setContent(CString("http://HAnim.org/Models"));
head1.addMeta(&meta17);

meta& meta18 =  meta();
meta18.setName(CString("reference"));
meta18.setContent(CString("http://HAnim.org/Specifications"));
head1.addMeta(&meta18);

meta& meta19 =  meta();
meta19.setName(CString("reference"));
meta19.setContent(CString("InterchangableActorsViaDynamicRoutingPrototypes.x3d"));
head1.addMeta(&meta19);

meta& meta20 =  meta();
meta20.setName(CString("identifier"));
meta20.setContent(CString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/HAnimPrototypes.x3d"));
head1.addMeta(&meta20);

X3D0.setHead(&head1);

Scene& Scene21 =  Scene();
ProtoDeclare& ProtoDeclare22 =  ProtoDeclare();
ProtoDeclare22.setName(CString("Humanoid1_1"));
ProtoDeclare22.setAppinfo(CString("The Humanoid node serves as overall container for the Joint Segment Site and Viewpoint nodes which define the skeleton geometry and landmarks of the humanoid figure. Additionally the node provides a means for defining information about the author copyright and usage restrictions of the model."));
ProtoDeclare22.setDocumentation(CString("http://HAnim.org/Specifications/HAnim2001/part1/Humanoid.html"));
ProtoInterface& ProtoInterface23 =  ProtoInterface();
field& field24 =  field();
field24.setAccessType(CString("inputOutput"));
field24.setType(CString("SFString"));
field24.setName(CString("name"));
ProtoInterface23.addChild(&field24);

field& field25 =  field();
field25.setAccessType(CString("inputOutput"));
field25.setType(CString("SFString"));
field25.setName(CString("version"));
field25.setValue(CString("1.1"));
field25.setAppinfo(CString("legal values: 1.1 or 2.0"));
ProtoInterface23.addChild(&field25);

field& field26 =  field();
field26.setAccessType(CString("inputOutput"));
field26.setType(CString("SFString"));
field26.setName(CString("humanoidVersion"));
field26.setAppinfo(CString("Version of the humanoid being modeled. Hint: HAnim version 2.0"));
ProtoInterface23.addChild(&field26);

field& field27 =  field();
field27.setAccessType(CString("inputOutput"));
field27.setType(CString("MFString"));
field27.setName(CString("info"));
ProtoInterface23.addChild(&field27);

field& field28 =  field();
field28.setAccessType(CString("inputOutput"));
field28.setType(CString("SFVec3f"));
field28.setName(CString("translation"));
ProtoInterface23.addChild(&field28);

field& field29 =  field();
field29.setAccessType(CString("inputOutput"));
field29.setType(CString("SFRotation"));
field29.setName(CString("rotation"));
ProtoInterface23.addChild(&field29);

field& field30 =  field();
field30.setAccessType(CString("inputOutput"));
field30.setType(CString("SFVec3f"));
field30.setName(CString("center"));
ProtoInterface23.addChild(&field30);

field& field31 =  field();
field31.setAccessType(CString("inputOutput"));
field31.setType(CString("SFVec3f"));
field31.setName(CString("scale"));
field31.setValue(CString("1 1 1"));
ProtoInterface23.addChild(&field31);

field& field32 =  field();
field32.setAccessType(CString("inputOutput"));
field32.setType(CString("SFRotation"));
field32.setName(CString("scaleOrientation"));
ProtoInterface23.addChild(&field32);

field& field33 =  field();
field33.setAccessType(CString("initializeOnly"));
field33.setType(CString("SFVec3f"));
field33.setName(CString("bboxCenter"));
ProtoInterface23.addChild(&field33);

field& field34 =  field();
field34.setAccessType(CString("initializeOnly"));
field34.setType(CString("SFVec3f"));
field34.setName(CString("bboxSize"));
field34.setValue(CString("-1 -1 -1"));
ProtoInterface23.addChild(&field34);

field& field35 =  field();
field35.setAccessType(CString("inputOutput"));
field35.setType(CString("MFNode"));
field35.setName(CString("humanoidBody"));
field35.setAppinfo(CString("HAnim 1.1 field container for body head. Hint: replaced by 2.0 skeleton."));
field35.setDocumentation(CString("http://HAnim.org/Specifications/HAnim1.1/#humanoid"));
ProtoInterface23.addChild(&field35);

field& field36 =  field();
field36.setAccessType(CString("inputOutput"));
field36.setType(CString("MFNode"));
field36.setName(CString("skeleton"));
field36.setAppinfo(CString("HAnim 2.0 field container for body geometry Hint: replaces 1.1 humanoidBody"));
field36.setDocumentation(CString("http://HAnim.org/Specifications/HAnim2001/part1/Humanoid.html"));
ProtoInterface23.addChild(&field36);

field& field37 =  field();
field37.setAccessType(CString("inputOutput"));
field37.setType(CString("MFNode"));
field37.setName(CString("joints"));
field37.setAppinfo(CString("Container field for Joint nodes"));
ProtoInterface23.addChild(&field37);

field& field38 =  field();
field38.setAccessType(CString("inputOutput"));
field38.setType(CString("MFNode"));
field38.setName(CString("segments"));
field38.setAppinfo(CString("Container field for Segment nodes"));
ProtoInterface23.addChild(&field38);

field& field39 =  field();
field39.setAccessType(CString("inputOutput"));
field39.setType(CString("MFNode"));
field39.setName(CString("sites"));
field39.setAppinfo(CString("Container field for Site nodes"));
ProtoInterface23.addChild(&field39);

field& field40 =  field();
field40.setAccessType(CString("inputOutput"));
field40.setType(CString("MFNode"));
field40.setName(CString("viewpoints"));
field40.setAppinfo(CString("Container field for Viewpoint nodes"));
ProtoInterface23.addChild(&field40);

field& field41 =  field();
field41.setAccessType(CString("inputOutput"));
field41.setType(CString("SFNode"));
field41.setName(CString("skinCoord"));
field41.setAppinfo(CString("Hint: HAnim version 2.0"));
ProtoInterface23.addChild(&field41);

field& field42 =  field();
field42.setAccessType(CString("inputOutput"));
field42.setType(CString("SFNode"));
field42.setName(CString("skinNormal"));
field42.setAppinfo(CString("Hint: HAnim version 2.0"));
ProtoInterface23.addChild(&field42);

ProtoDeclare22.addChild(&ProtoInterface23);

ProtoBody& ProtoBody43 =  ProtoBody();
Transform& Transform44 =  Transform();
Transform44.setDEF(CString("HumanoidTransform"));
Group& Group45 =  Group();
Group45.setDEF(CString("HumanoidGroup1"));
IS& IS46 =  IS();
Connect& connect47 =  Connect();
connect47.setNodeField(CString("children"));
connect47.setProtoField(CString("humanoidBody"));
IS46.addChild(&connect47);

Group45.addChild(&IS46);

Transform44.addChild(&Group45);

Group& Group48 =  Group();
Group48.setDEF(CString("HumanoidGroup2"));
IS& IS49 =  IS();
Connect& connect50 =  Connect();
connect50.setNodeField(CString("children"));
connect50.setProtoField(CString("skeleton"));
IS49.addChild(&connect50);

Group48.addChild(&IS49);

Transform44.addChild(&Group48);

Group& Group51 =  Group();
Group51.setDEF(CString("HumanoidGroup3"));
IS& IS52 =  IS();
Connect& connect53 =  Connect();
connect53.setNodeField(CString("children"));
connect53.setProtoField(CString("viewpoints"));
IS52.addChild(&connect53);

Group51.addChild(&IS52);

Transform44.addChild(&Group51);

IS& IS54 =  IS();
Connect& connect55 =  Connect();
connect55.setNodeField(CString("translation"));
connect55.setProtoField(CString("translation"));
IS54.addChild(&connect55);

Connect& connect56 =  Connect();
connect56.setNodeField(CString("rotation"));
connect56.setProtoField(CString("rotation"));
IS54.addChild(&connect56);

Connect& connect57 =  Connect();
connect57.setNodeField(CString("scale"));
connect57.setProtoField(CString("scale"));
IS54.addChild(&connect57);

Connect& connect58 =  Connect();
connect58.setNodeField(CString("scaleOrientation"));
connect58.setProtoField(CString("scaleOrientation"));
IS54.addChild(&connect58);

Connect& connect59 =  Connect();
connect59.setNodeField(CString("center"));
connect59.setProtoField(CString("center"));
IS54.addChild(&connect59);

Connect& connect60 =  Connect();
connect60.setNodeField(CString("bboxSize"));
connect60.setProtoField(CString("bboxSize"));
IS54.addChild(&connect60);

Connect& connect61 =  Connect();
connect61.setNodeField(CString("bboxCenter"));
connect61.setProtoField(CString("bboxCenter"));
IS54.addChild(&connect61);

Transform44.addChild(&IS54);

ProtoBody43.addChild(&Transform44);

ProtoDeclare22.addChild(&ProtoBody43);

Scene21.addChild(&ProtoDeclare22);

ProtoDeclare& ProtoDeclare62 =  ProtoDeclare();
ProtoDeclare62.setName(CString("Joint"));
ProtoDeclare62.setAppinfo(CString("The Joint node is used as a building block to describe the articulations of the humanoid figure. Each articulation of the humanoid figure is represented by a Joint node each of which is organized into a hierarchy that describes the overall skeleton of the humanoid."));
ProtoDeclare62.setDocumentation(CString("http://HAnim.org/Specifications/HAnim2001/part1/Joint.html"));
ProtoInterface& ProtoInterface63 =  ProtoInterface();
field& field64 =  field();
field64.setAccessType(CString("inputOutput"));
field64.setType(CString("SFString"));
field64.setName(CString("name"));
ProtoInterface63.addChild(&field64);

field& field65 =  field();
field65.setAccessType(CString("inputOutput"));
field65.setType(CString("MFFloat"));
field65.setName(CString("ulimit"));
ProtoInterface63.addChild(&field65);

field& field66 =  field();
field66.setAccessType(CString("inputOutput"));
field66.setType(CString("MFFloat"));
field66.setName(CString("llimit"));
ProtoInterface63.addChild(&field66);

field& field67 =  field();
field67.setAccessType(CString("inputOutput"));
field67.setType(CString("SFRotation"));
field67.setName(CString("limitOrientation"));
ProtoInterface63.addChild(&field67);

field& field68 =  field();
field68.setAccessType(CString("inputOutput"));
field68.setType(CString("MFInt32"));
field68.setName(CString("skinCoordIndex"));
ProtoInterface63.addChild(&field68);

field& field69 =  field();
field69.setAccessType(CString("inputOutput"));
field69.setType(CString("MFFloat"));
field69.setName(CString("skinCoordWeight"));
ProtoInterface63.addChild(&field69);

field& field70 =  field();
field70.setAccessType(CString("inputOutput"));
field70.setType(CString("MFFloat"));
field70.setName(CString("stiffness"));
field70.setValue(CString("0 0 0"));
ProtoInterface63.addChild(&field70);

field& field71 =  field();
field71.setAccessType(CString("inputOutput"));
field71.setType(CString("SFVec3f"));
field71.setName(CString("translation"));
ProtoInterface63.addChild(&field71);

field& field72 =  field();
field72.setAccessType(CString("inputOutput"));
field72.setType(CString("SFRotation"));
field72.setName(CString("rotation"));
ProtoInterface63.addChild(&field72);

field& field73 =  field();
field73.setAccessType(CString("inputOutput"));
field73.setType(CString("SFVec3f"));
field73.setName(CString("scale"));
field73.setValue(CString("1 1 1"));
ProtoInterface63.addChild(&field73);

field& field74 =  field();
field74.setAccessType(CString("inputOutput"));
field74.setType(CString("SFRotation"));
field74.setName(CString("scaleOrientation"));
ProtoInterface63.addChild(&field74);

field& field75 =  field();
field75.setAccessType(CString("inputOutput"));
field75.setType(CString("SFVec3f"));
field75.setName(CString("center"));
ProtoInterface63.addChild(&field75);

field& field76 =  field();
field76.setAccessType(CString("initializeOnly"));
field76.setType(CString("SFVec3f"));
field76.setName(CString("bboxCenter"));
ProtoInterface63.addChild(&field76);

field& field77 =  field();
field77.setAccessType(CString("initializeOnly"));
field77.setType(CString("SFVec3f"));
field77.setName(CString("bboxSize"));
field77.setValue(CString("-1 -1 -1"));
ProtoInterface63.addChild(&field77);

field& field78 =  field();
field78.setAccessType(CString("inputOutput"));
field78.setType(CString("MFNode"));
field78.setName(CString("children"));
ProtoInterface63.addChild(&field78);

field& field79 =  field();
field79.setAccessType(CString("inputOnly"));
field79.setType(CString("MFNode"));
field79.setName(CString("addChildren"));
ProtoInterface63.addChild(&field79);

field& field80 =  field();
field80.setAccessType(CString("inputOnly"));
field80.setType(CString("MFNode"));
field80.setName(CString("removeChildren"));
ProtoInterface63.addChild(&field80);

ProtoDeclare62.addChild(&ProtoInterface63);

ProtoBody& ProtoBody81 =  ProtoBody();
Transform& Transform82 =  Transform();
Transform82.setDEF(CString("JointTransform"));
IS& IS83 =  IS();
Connect& connect84 =  Connect();
connect84.setNodeField(CString("translation"));
connect84.setProtoField(CString("translation"));
IS83.addChild(&connect84);

Connect& connect85 =  Connect();
connect85.setNodeField(CString("rotation"));
connect85.setProtoField(CString("rotation"));
IS83.addChild(&connect85);

Connect& connect86 =  Connect();
connect86.setNodeField(CString("scale"));
connect86.setProtoField(CString("scale"));
IS83.addChild(&connect86);

Connect& connect87 =  Connect();
connect87.setNodeField(CString("scaleOrientation"));
connect87.setProtoField(CString("scaleOrientation"));
IS83.addChild(&connect87);

Connect& connect88 =  Connect();
connect88.setNodeField(CString("center"));
connect88.setProtoField(CString("center"));
IS83.addChild(&connect88);

Connect& connect89 =  Connect();
connect89.setNodeField(CString("bboxSize"));
connect89.setProtoField(CString("bboxSize"));
IS83.addChild(&connect89);

Connect& connect90 =  Connect();
connect90.setNodeField(CString("bboxCenter"));
connect90.setProtoField(CString("bboxCenter"));
IS83.addChild(&connect90);

Connect& connect91 =  Connect();
connect91.setNodeField(CString("addChildren"));
connect91.setProtoField(CString("addChildren"));
IS83.addChild(&connect91);

Connect& connect92 =  Connect();
connect92.setNodeField(CString("removeChildren"));
connect92.setProtoField(CString("removeChildren"));
IS83.addChild(&connect92);

Connect& connect93 =  Connect();
connect93.setNodeField(CString("children"));
connect93.setProtoField(CString("children"));
IS83.addChild(&connect93);

Transform82.addChild(&IS83);

ProtoBody81.addChild(&Transform82);

ProtoDeclare62.addChild(&ProtoBody81);

Scene21.addChild(&ProtoDeclare62);

ProtoDeclare& ProtoDeclare94 =  ProtoDeclare();
ProtoDeclare94.setName(CString("Segment"));
ProtoDeclare94.setAppinfo(CString("The Segment node is used describe the attributes of the physical links between the joints of the humanoid figure. Each body part (pelvis thigh calf etc.) of the humanoid figure is represented by a Segment node."));
ProtoDeclare94.setDocumentation(CString("http://HAnim.org/Specifications/HAnim2001/part1/Segment.html"));
ProtoInterface& ProtoInterface95 =  ProtoInterface();
field& field96 =  field();
field96.setAccessType(CString("inputOutput"));
field96.setType(CString("SFString"));
field96.setName(CString("name"));
ProtoInterface95.addChild(&field96);

field& field97 =  field();
field97.setAccessType(CString("inputOutput"));
field97.setType(CString("SFFloat"));
field97.setName(CString("mass"));
ProtoInterface95.addChild(&field97);

field& field98 =  field();
field98.setAccessType(CString("inputOutput"));
field98.setType(CString("SFVec3f"));
field98.setName(CString("centerOfMass"));
ProtoInterface95.addChild(&field98);

field& field99 =  field();
field99.setAccessType(CString("inputOutput"));
field99.setType(CString("MFFloat"));
field99.setName(CString("momentsOfInertia"));
field99.setValue(CString("0 0 0 0 0 0 0 0 0"));
ProtoInterface95.addChild(&field99);

field& field100 =  field();
field100.setAccessType(CString("initializeOnly"));
field100.setType(CString("SFVec3f"));
field100.setName(CString("bboxCenter"));
ProtoInterface95.addChild(&field100);

field& field101 =  field();
field101.setAccessType(CString("initializeOnly"));
field101.setType(CString("SFVec3f"));
field101.setName(CString("bboxSize"));
field101.setValue(CString("-1 -1 -1"));
ProtoInterface95.addChild(&field101);

field& field102 =  field();
field102.setAccessType(CString("inputOutput"));
field102.setType(CString("MFNode"));
field102.setName(CString("children"));
ProtoInterface95.addChild(&field102);

field& field103 =  field();
field103.setAccessType(CString("inputOnly"));
field103.setType(CString("MFNode"));
field103.setName(CString("addChildren"));
ProtoInterface95.addChild(&field103);

field& field104 =  field();
field104.setAccessType(CString("inputOnly"));
field104.setType(CString("MFNode"));
field104.setName(CString("removeChildren"));
ProtoInterface95.addChild(&field104);

field& field105 =  field();
field105.setAccessType(CString("inputOutput"));
field105.setType(CString("SFNode"));
field105.setName(CString("coord"));
field105.setAppinfo(CString("contains Coordinate nodes"));
ProtoInterface95.addChild(&field105);

field& field106 =  field();
field106.setAccessType(CString("inputOutput"));
field106.setType(CString("MFNode"));
field106.setName(CString("displacers"));
field106.setAppinfo(CString("contains Displacer nodes"));
ProtoInterface95.addChild(&field106);

ProtoDeclare94.addChild(&ProtoInterface95);

ProtoBody& ProtoBody107 =  ProtoBody();
Group& Group108 =  Group();
Group108.setDEF(CString("SegmentGroup"));
IS& IS109 =  IS();
Connect& connect110 =  Connect();
connect110.setNodeField(CString("bboxSize"));
connect110.setProtoField(CString("bboxSize"));
IS109.addChild(&connect110);

Connect& connect111 =  Connect();
connect111.setNodeField(CString("bboxCenter"));
connect111.setProtoField(CString("bboxCenter"));
IS109.addChild(&connect111);

Connect& connect112 =  Connect();
connect112.setNodeField(CString("addChildren"));
connect112.setProtoField(CString("addChildren"));
IS109.addChild(&connect112);

Connect& connect113 =  Connect();
connect113.setNodeField(CString("removeChildren"));
connect113.setProtoField(CString("removeChildren"));
IS109.addChild(&connect113);

Connect& connect114 =  Connect();
connect114.setNodeField(CString("children"));
connect114.setProtoField(CString("children"));
IS109.addChild(&connect114);

Group108.addChild(&IS109);

ProtoBody107.addChild(&Group108);

ProtoDeclare94.addChild(&ProtoBody107);

Scene21.addChild(&ProtoDeclare94);

ProtoDeclare& ProtoDeclare115 =  ProtoDeclare();
ProtoDeclare115.setName(CString("Site"));
ProtoDeclare115.setAppinfo(CString("The Site node can be used for three purposes: (a) to define an \"end effector\" location which can be used by an inverse kinematics system (b) to define an attachment point for accessories such as jewelry and clothing and (c) to define a location for a virtual camera in the reference frame of a Segment node (such as a view \"through the eyes\" of the humanoid for use in multi-user worlds)."));
ProtoDeclare115.setDocumentation(CString("http://HAnim.org/Specifications/HAnim2001/part1/Site.html"));
ProtoInterface& ProtoInterface116 =  ProtoInterface();
field& field117 =  field();
field117.setAccessType(CString("inputOutput"));
field117.setType(CString("SFString"));
field117.setName(CString("name"));
ProtoInterface116.addChild(&field117);

field& field118 =  field();
field118.setAccessType(CString("inputOutput"));
field118.setType(CString("SFVec3f"));
field118.setName(CString("translation"));
ProtoInterface116.addChild(&field118);

field& field119 =  field();
field119.setAccessType(CString("inputOutput"));
field119.setType(CString("SFRotation"));
field119.setName(CString("rotation"));
ProtoInterface116.addChild(&field119);

field& field120 =  field();
field120.setAccessType(CString("inputOutput"));
field120.setType(CString("SFVec3f"));
field120.setName(CString("scale"));
field120.setValue(CString("1 1 1"));
ProtoInterface116.addChild(&field120);

field& field121 =  field();
field121.setAccessType(CString("inputOutput"));
field121.setType(CString("SFRotation"));
field121.setName(CString("scaleOrientation"));
ProtoInterface116.addChild(&field121);

field& field122 =  field();
field122.setAccessType(CString("inputOutput"));
field122.setType(CString("SFVec3f"));
field122.setName(CString("center"));
ProtoInterface116.addChild(&field122);

field& field123 =  field();
field123.setAccessType(CString("initializeOnly"));
field123.setType(CString("SFVec3f"));
field123.setName(CString("bboxCenter"));
ProtoInterface116.addChild(&field123);

field& field124 =  field();
field124.setAccessType(CString("initializeOnly"));
field124.setType(CString("SFVec3f"));
field124.setName(CString("bboxSize"));
field124.setValue(CString("-1 -1 -1"));
ProtoInterface116.addChild(&field124);

field& field125 =  field();
field125.setAccessType(CString("inputOutput"));
field125.setType(CString("MFNode"));
field125.setName(CString("children"));
ProtoInterface116.addChild(&field125);

field& field126 =  field();
field126.setAccessType(CString("inputOnly"));
field126.setType(CString("MFNode"));
field126.setName(CString("addChildren"));
ProtoInterface116.addChild(&field126);

field& field127 =  field();
field127.setAccessType(CString("inputOnly"));
field127.setType(CString("MFNode"));
field127.setName(CString("removeChildren"));
ProtoInterface116.addChild(&field127);

ProtoDeclare115.addChild(&ProtoInterface116);

ProtoBody& ProtoBody128 =  ProtoBody();
Transform& Transform129 =  Transform();
Transform129.setDEF(CString("SiteTransform"));
IS& IS130 =  IS();
Connect& connect131 =  Connect();
connect131.setNodeField(CString("translation"));
connect131.setProtoField(CString("translation"));
IS130.addChild(&connect131);

Connect& connect132 =  Connect();
connect132.setNodeField(CString("rotation"));
connect132.setProtoField(CString("rotation"));
IS130.addChild(&connect132);

Connect& connect133 =  Connect();
connect133.setNodeField(CString("scale"));
connect133.setProtoField(CString("scale"));
IS130.addChild(&connect133);

Connect& connect134 =  Connect();
connect134.setNodeField(CString("scaleOrientation"));
connect134.setProtoField(CString("scaleOrientation"));
IS130.addChild(&connect134);

Connect& connect135 =  Connect();
connect135.setNodeField(CString("center"));
connect135.setProtoField(CString("center"));
IS130.addChild(&connect135);

Connect& connect136 =  Connect();
connect136.setNodeField(CString("bboxSize"));
connect136.setProtoField(CString("bboxSize"));
IS130.addChild(&connect136);

Connect& connect137 =  Connect();
connect137.setNodeField(CString("bboxCenter"));
connect137.setProtoField(CString("bboxCenter"));
IS130.addChild(&connect137);

Connect& connect138 =  Connect();
connect138.setNodeField(CString("addChildren"));
connect138.setProtoField(CString("addChildren"));
IS130.addChild(&connect138);

Connect& connect139 =  Connect();
connect139.setNodeField(CString("removeChildren"));
connect139.setProtoField(CString("removeChildren"));
IS130.addChild(&connect139);

Connect& connect140 =  Connect();
connect140.setNodeField(CString("children"));
connect140.setProtoField(CString("children"));
IS130.addChild(&connect140);

Transform129.addChild(&IS130);

ProtoBody128.addChild(&Transform129);

ProtoDeclare115.addChild(&ProtoBody128);

Scene21.addChild(&ProtoDeclare115);

ProtoDeclare& ProtoDeclare141 =  ProtoDeclare();
ProtoDeclare141.setName(CString("Displacer"));
ProtoDeclare141.setAppinfo(CString("A Displacer can be used in three different ways: (a) identify the vertices corresponding to a particular feature on a Segment (b) represent a particular muscular action which displaces the vertices in various directions (linearly or radially) and (c) represent a complete configuration of the vertices in a Segment."));
ProtoDeclare141.setDocumentation(CString("http://HAnim.org/Specifications/HAnim2001/part1/Displacer.html"));
ProtoInterface& ProtoInterface142 =  ProtoInterface();
field& field143 =  field();
field143.setAccessType(CString("inputOutput"));
field143.setType(CString("SFString"));
field143.setName(CString("name"));
ProtoInterface142.addChild(&field143);

field& field144 =  field();
field144.setAccessType(CString("inputOutput"));
field144.setType(CString("MFInt32"));
field144.setName(CString("coordIndex"));
ProtoInterface142.addChild(&field144);

field& field145 =  field();
field145.setAccessType(CString("inputOutput"));
field145.setType(CString("MFVec3f"));
field145.setName(CString("displacements"));
ProtoInterface142.addChild(&field145);

ProtoDeclare141.addChild(&ProtoInterface142);

ProtoBody& ProtoBody146 =  ProtoBody();
WorldInfo& WorldInfo147 =  WorldInfo();
WorldInfo147.setInfo(new CString[]{CString("null body node")}, 1);
ProtoBody146.addChild(&WorldInfo147);

ProtoDeclare141.addChild(&ProtoBody146);

Scene21.addChild(&ProtoDeclare141);

Shape& Shape148 =  Shape();
Appearance& Appearance149 =  Appearance();
Material& Material150 =  Material();
Material150.setAmbientIntensity(0.25);
Material150.setDiffuseColor(new float[]{0.795918,0.505869,0.093315});
Material150.setSpecularColor(new float[]{0.923469,0.428866,0.006369});
Material150.setShininess(0.39);
Appearance149.addChild(&Material150);

Shape148.addChild(&Appearance149);

Text& Text151 =  Text();
Text151.setString(new CString[]{CString("Humanoid Animation"), CString("(HAnim) prototype"), CString("implementations")}, 3);
CFontStyle& FontStyle152 =  CFontStyle();
FontStyle152.setJustify(new CString[]{CString("MIDDLE"), CString("MIDDLE")}, 2);
Text151.setFontStyle(&FontStyle152);

Shape148.setGeometry(&Text151);

Scene21.addChild(&Shape148);

X3D0.setScene(&Scene21);

}
