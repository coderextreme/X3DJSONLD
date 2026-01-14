//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
//int main(int argc, char ** argv) 
//{
X3D& X3D0 =  X3D();
X3D0.setProfile(CString("Immersive"));
X3D0.setVersion(CString("4.0"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(CString("title"));
meta2.setContent(CString("NancyDivingProtoInstances.x3d"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(CString("description"));
meta3.setContent(CString("Nancy having fun scuba diving - developmental model using ProtoInstance instead of HAnim native tags, do not use this pattern."));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("warning"));
meta4.setContent(CString("This is a developmental example, use HAnim native tags as shown in other examples instead of the prototypes and ProtoInstances shown here."));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("creator"));
meta5.setContent(CString("Etsuko Lippi"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("creator"));
meta6.setContent(CString("Cindy Ballreich cindy@ballreich.net 3Name3D"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("translator"));
meta7.setContent(CString("Tom Miller"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(CString("translator"));
meta8.setContent(CString("Don Brutzman"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(CString("created"));
meta9.setContent(CString("19 November 2001"));
head1.addMeta(&meta9);

meta& meta10 =  meta();
meta10.setName(CString("modified"));
meta10.setContent(CString("Mon, 15 Sep 2025 05:20:50 GMT"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(CString("TODO"));
meta11.setContent(CString("left arm motion still has a problem"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(CString("rights"));
meta12.setContent(CString("1997 3Name3D / Yglesias, Wallock, Divekar, Inc., all rights reserved."));
head1.addMeta(&meta12);

meta& meta13 =  meta();
meta13.setName(CString("identifier"));
meta13.setContent(CString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyDivingProtoInstances.x3d"));
head1.addMeta(&meta13);

X3D0.setHead(&head1);

Scene& Scene14 =  Scene();
ExternProtoDeclare& ExternProtoDeclare15 =  ExternProtoDeclare();
ExternProtoDeclare15.setName(CString("Joint"));
ExternProtoDeclare15.setAppinfo(CString("The Joint node is used as a building block to describe the articulations of the humanoid figure. Each articulation of the humanoid figure is represented by a Joint node each of which is organized into a hierarchy that describes the overall skeleton of the humanoid."));
ExternProtoDeclare15.setDocumentation(CString("http://HAnim.org/Specifications/HAnim2001/part1/Joint.html"));
ExternProtoDeclare15.setUrl(new CString[]{CString("NancyPrototypes.x3d#Joint"), CString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyPrototypes.x3d#Joint"), CString("NancyPrototypes.wrl#Joint"), CString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyPrototypes.wrl#Joint")}, 4);
field& field16 =  field();
field16.setAccessType(CString("inputOutput"));
field16.setType(CString("SFVec3f"));
field16.setName(CString("center"));
ExternProtoDeclare15.addChild(&field16);

field& field17 =  field();
field17.setAccessType(CString("inputOutput"));
field17.setType(CString("MFNode"));
field17.setName(CString("children"));
ExternProtoDeclare15.addChild(&field17);

field& field18 =  field();
field18.setAccessType(CString("inputOutput"));
field18.setType(CString("MFFloat"));
field18.setName(CString("llimit"));
ExternProtoDeclare15.addChild(&field18);

field& field19 =  field();
field19.setAccessType(CString("inputOutput"));
field19.setType(CString("SFRotation"));
field19.setName(CString("limitOrientation"));
ExternProtoDeclare15.addChild(&field19);

field& field20 =  field();
field20.setAccessType(CString("inputOutput"));
field20.setType(CString("SFString"));
field20.setName(CString("name"));
ExternProtoDeclare15.addChild(&field20);

field& field21 =  field();
field21.setAccessType(CString("inputOutput"));
field21.setType(CString("SFRotation"));
field21.setName(CString("rotation"));
ExternProtoDeclare15.addChild(&field21);

field& field22 =  field();
field22.setAccessType(CString("inputOutput"));
field22.setType(CString("SFVec3f"));
field22.setName(CString("scale"));
ExternProtoDeclare15.addChild(&field22);

field& field23 =  field();
field23.setAccessType(CString("inputOutput"));
field23.setType(CString("SFRotation"));
field23.setName(CString("scaleOrientation"));
ExternProtoDeclare15.addChild(&field23);

field& field24 =  field();
field24.setAccessType(CString("inputOutput"));
field24.setType(CString("MFFloat"));
field24.setName(CString("stiffness"));
ExternProtoDeclare15.addChild(&field24);

field& field25 =  field();
field25.setAccessType(CString("inputOutput"));
field25.setType(CString("SFVec3f"));
field25.setName(CString("translation"));
ExternProtoDeclare15.addChild(&field25);

field& field26 =  field();
field26.setAccessType(CString("inputOutput"));
field26.setType(CString("MFFloat"));
field26.setName(CString("ulimit"));
ExternProtoDeclare15.addChild(&field26);

field& field27 =  field();
field27.setAccessType(CString("inputOnly"));
field27.setType(CString("MFNode"));
field27.setName(CString("removeChildren"));
ExternProtoDeclare15.addChild(&field27);

field& field28 =  field();
field28.setAccessType(CString("initializeOnly"));
field28.setType(CString("SFVec3f"));
field28.setName(CString("bboxSize"));
ExternProtoDeclare15.addChild(&field28);

field& field29 =  field();
field29.setAccessType(CString("inputOutput"));
field29.setType(CString("MFInt32"));
field29.setName(CString("skinCoordIndex"));
ExternProtoDeclare15.addChild(&field29);

field& field30 =  field();
field30.setAccessType(CString("initializeOnly"));
field30.setType(CString("SFVec3f"));
field30.setName(CString("bboxCenter"));
ExternProtoDeclare15.addChild(&field30);

field& field31 =  field();
field31.setAccessType(CString("inputOutput"));
field31.setType(CString("MFFloat"));
field31.setName(CString("skinCoordWeight"));
ExternProtoDeclare15.addChild(&field31);

field& field32 =  field();
field32.setAccessType(CString("inputOnly"));
field32.setType(CString("MFNode"));
field32.setName(CString("addChildren"));
ExternProtoDeclare15.addChild(&field32);

Scene14.addChild(&ExternProtoDeclare15);

ExternProtoDeclare& ExternProtoDeclare33 =  ExternProtoDeclare();
ExternProtoDeclare33.setName(CString("Segment"));
ExternProtoDeclare33.setAppinfo(CString("The Segment node is used describe the attributes of the physical links between the joints of the humanoid figure. Each body part (pelvis thigh calf etc) of the humanoid figure is represented by a Segment node."));
ExternProtoDeclare33.setDocumentation(CString("http://HAnim.org/Specifications/HAnim2001/part1/Segment.html"));
ExternProtoDeclare33.setUrl(new CString[]{CString("NancyPrototypes.x3d#Segment"), CString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyPrototypes.x3d#Segment"), CString("NancyPrototypes.wrl#Segment"), CString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyPrototypes.wrl#Segment")}, 4);
field& field34 =  field();
field34.setAccessType(CString("initializeOnly"));
field34.setType(CString("SFVec3f"));
field34.setName(CString("bboxCenter"));
ExternProtoDeclare33.addChild(&field34);

field& field35 =  field();
field35.setAccessType(CString("initializeOnly"));
field35.setType(CString("SFVec3f"));
field35.setName(CString("bboxSize"));
ExternProtoDeclare33.addChild(&field35);

field& field36 =  field();
field36.setAccessType(CString("inputOutput"));
field36.setType(CString("SFVec3f"));
field36.setName(CString("centerOfMass"));
ExternProtoDeclare33.addChild(&field36);

field& field37 =  field();
field37.setAccessType(CString("inputOutput"));
field37.setType(CString("MFNode"));
field37.setName(CString("children"));
ExternProtoDeclare33.addChild(&field37);

field& field38 =  field();
field38.setAccessType(CString("inputOutput"));
field38.setType(CString("SFNode"));
field38.setName(CString("coord"));
field38.setAppinfo(CString("contains Coordinate nodes"));
ExternProtoDeclare33.addChild(&field38);

field& field39 =  field();
field39.setAccessType(CString("inputOutput"));
field39.setType(CString("MFNode"));
field39.setName(CString("displacers"));
field39.setAppinfo(CString("contains Displacer nodes"));
ExternProtoDeclare33.addChild(&field39);

field& field40 =  field();
field40.setAccessType(CString("inputOutput"));
field40.setType(CString("SFFloat"));
field40.setName(CString("mass"));
ExternProtoDeclare33.addChild(&field40);

field& field41 =  field();
field41.setAccessType(CString("inputOutput"));
field41.setType(CString("MFFloat"));
field41.setName(CString("momentsOfInertia"));
ExternProtoDeclare33.addChild(&field41);

field& field42 =  field();
field42.setAccessType(CString("inputOutput"));
field42.setType(CString("SFString"));
field42.setName(CString("name"));
ExternProtoDeclare33.addChild(&field42);

field& field43 =  field();
field43.setAccessType(CString("inputOnly"));
field43.setType(CString("MFNode"));
field43.setName(CString("addChildren"));
ExternProtoDeclare33.addChild(&field43);

field& field44 =  field();
field44.setAccessType(CString("inputOnly"));
field44.setType(CString("MFNode"));
field44.setName(CString("removeChildren"));
ExternProtoDeclare33.addChild(&field44);

Scene14.addChild(&ExternProtoDeclare33);

ExternProtoDeclare& ExternProtoDeclare45 =  ExternProtoDeclare();
ExternProtoDeclare45.setName(CString("Humanoid"));
ExternProtoDeclare45.setAppinfo(CString("The Humanoid node serves as overall container for the Joint Segment Site and Viewpoint nodes which define the skeleton geometry and landmarks of the humanoid figure. Additionally the node provides a means for defining information about the author copyright and usage restrictions of the model."));
ExternProtoDeclare45.setDocumentation(CString("http://HAnim.org/Specifications/HAnim2001/part1/Humanoid.html"));
ExternProtoDeclare45.setUrl(new CString[]{CString("NancyPrototypes.x3d#Humanoid"), CString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyPrototypes.x3d#Humanoid"), CString("NancyPrototypes.wrl#Humanoid"), CString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyPrototypes.wrl#Humanoid")}, 4);
field& field46 =  field();
field46.setAccessType(CString("initializeOnly"));
field46.setType(CString("SFVec3f"));
field46.setName(CString("bboxCenter"));
ExternProtoDeclare45.addChild(&field46);

field& field47 =  field();
field47.setAccessType(CString("initializeOnly"));
field47.setType(CString("SFVec3f"));
field47.setName(CString("bboxSize"));
ExternProtoDeclare45.addChild(&field47);

field& field48 =  field();
field48.setAccessType(CString("inputOutput"));
field48.setType(CString("SFVec3f"));
field48.setName(CString("center"));
ExternProtoDeclare45.addChild(&field48);

field& field49 =  field();
field49.setAccessType(CString("inputOutput"));
field49.setType(CString("MFNode"));
field49.setName(CString("humanoidBody"));
field49.setAppinfo(CString("HAnim 1.1 field container for body geometry Hint: replaced by 2.0 skeleton"));
field49.setDocumentation(CString("http://HAnim.org/Specifications/HAnim1.1/#humanoid"));
ExternProtoDeclare45.addChild(&field49);

field& field50 =  field();
field50.setAccessType(CString("inputOutput"));
field50.setType(CString("MFString"));
field50.setName(CString("info"));
ExternProtoDeclare45.addChild(&field50);

field& field51 =  field();
field51.setAccessType(CString("inputOutput"));
field51.setType(CString("MFNode"));
field51.setName(CString("joints"));
field51.setAppinfo(CString("Container field for Joint nodes"));
ExternProtoDeclare45.addChild(&field51);

field& field52 =  field();
field52.setAccessType(CString("inputOutput"));
field52.setType(CString("SFString"));
field52.setName(CString("name"));
ExternProtoDeclare45.addChild(&field52);

field& field53 =  field();
field53.setAccessType(CString("inputOutput"));
field53.setType(CString("SFRotation"));
field53.setName(CString("rotation"));
ExternProtoDeclare45.addChild(&field53);

field& field54 =  field();
field54.setAccessType(CString("inputOutput"));
field54.setType(CString("SFVec3f"));
field54.setName(CString("scale"));
ExternProtoDeclare45.addChild(&field54);

field& field55 =  field();
field55.setAccessType(CString("inputOutput"));
field55.setType(CString("SFRotation"));
field55.setName(CString("scaleOrientation"));
ExternProtoDeclare45.addChild(&field55);

field& field56 =  field();
field56.setAccessType(CString("inputOutput"));
field56.setType(CString("MFNode"));
field56.setName(CString("segments"));
field56.setAppinfo(CString("Container field for Segment nodes"));
ExternProtoDeclare45.addChild(&field56);

field& field57 =  field();
field57.setAccessType(CString("inputOutput"));
field57.setType(CString("MFNode"));
field57.setName(CString("sites"));
field57.setAppinfo(CString("Container field for Site nodes"));
ExternProtoDeclare45.addChild(&field57);

field& field58 =  field();
field58.setAccessType(CString("inputOutput"));
field58.setType(CString("SFVec3f"));
field58.setName(CString("translation"));
ExternProtoDeclare45.addChild(&field58);

field& field59 =  field();
field59.setAccessType(CString("inputOutput"));
field59.setType(CString("SFString"));
field59.setName(CString("version"));
field59.setAppinfo(CString("legal values: 1.1 or 2.0"));
ExternProtoDeclare45.addChild(&field59);

field& field60 =  field();
field60.setAccessType(CString("inputOutput"));
field60.setType(CString("MFNode"));
field60.setName(CString("viewpoints"));
field60.setAppinfo(CString("Container field for Viewpoint nodes"));
ExternProtoDeclare45.addChild(&field60);

field& field61 =  field();
field61.setAccessType(CString("inputOutput"));
field61.setType(CString("SFNode"));
field61.setName(CString("skinNormal"));
field61.setAppinfo(CString("Hint: HAnim version 2.0"));
ExternProtoDeclare45.addChild(&field61);

field& field62 =  field();
field62.setAccessType(CString("inputOutput"));
field62.setType(CString("SFString"));
field62.setName(CString("humanoidVersion"));
field62.setAppinfo(CString("Version of the humanoid being modeled. Hint: HAnim version 2.0"));
ExternProtoDeclare45.addChild(&field62);

field& field63 =  field();
field63.setAccessType(CString("inputOutput"));
field63.setType(CString("MFNode"));
field63.setName(CString("skeleton"));
field63.setAppinfo(CString("HAnim 2.0 field container for body geometry Hint: replaces 1.1 humanoidBody"));
field63.setDocumentation(CString("http://HAnim.org/Specifications/HAnim2001/part1/Humanoid.html"));
ExternProtoDeclare45.addChild(&field63);

field& field64 =  field();
field64.setAccessType(CString("inputOutput"));
field64.setType(CString("SFNode"));
field64.setName(CString("skinCoord"));
field64.setAppinfo(CString("Hint: HAnim version 2.0"));
ExternProtoDeclare45.addChild(&field64);

Scene14.addChild(&ExternProtoDeclare45);

ExternProtoDeclare& ExternProtoDeclare65 =  ExternProtoDeclare();
ExternProtoDeclare65.setName(CString("ViewPositionOrientation"));
ExternProtoDeclare65.setAppinfo(CString("ViewPositionOrientation provides provides console output of local position and orientation as user navigates"));
ExternProtoDeclare65.setUrl(new CString[]{CString("../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation"), CString("../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation"), CString("https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation"), CString("../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation"), CString("../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation"), CString("https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation")}, 6);
field& field66 =  field();
field66.setAccessType(CString("inputOutput"));
field66.setType(CString("SFBool"));
field66.setName(CString("enabled"));
field66.setAppinfo(CString("Whether or not ViewPositionOrientation sends output to console"));
ExternProtoDeclare65.addChild(&field66);

field& field67 =  field();
field67.setAccessType(CString("initializeOnly"));
field67.setType(CString("SFBool"));
field67.setName(CString("traceEnabled"));
field67.setAppinfo(CString("Output internal trace messages for debugging this node, intended for developer use only"));
ExternProtoDeclare65.addChild(&field67);

field& field68 =  field();
field68.setAccessType(CString("inputOnly"));
field68.setType(CString("SFBool"));
field68.setName(CString("set_traceEnabled"));
field68.setAppinfo(CString("Ability to turn output tracing on/off at runtime"));
ExternProtoDeclare65.addChild(&field68);

field& field69 =  field();
field69.setAccessType(CString("outputOnly"));
field69.setType(CString("SFVec3f"));
field69.setName(CString("position_changed"));
field69.setAppinfo(CString("Output local position"));
ExternProtoDeclare65.addChild(&field69);

field& field70 =  field();
field70.setAccessType(CString("outputOnly"));
field70.setType(CString("SFRotation"));
field70.setName(CString("orientation_changed"));
field70.setAppinfo(CString("Output local orientation"));
ExternProtoDeclare65.addChild(&field70);

field& field71 =  field();
field71.setAccessType(CString("outputOnly"));
field71.setType(CString("MFString"));
field71.setName(CString("outputViewpointString"));
field71.setAppinfo(CString("MFString value of new Viewpoint, suitable for use in string field of a Text node"));
ExternProtoDeclare65.addChild(&field71);

Scene14.addChild(&ExternProtoDeclare65);

ProtoInstance& ProtoInstance72 =  ProtoInstance();
ProtoInstance72.setDEF(CString("ExampleViewPositionOrientation"));
ProtoInstance72.setName(CString("ViewPositionOrientation"));
fieldValue& fieldValue73 =  fieldValue();
fieldValue73.setName(CString("enabled"));
fieldValue73.setValue(CString("true"));
ProtoInstance72.addChild(&fieldValue73);

Scene14.addChild(&ProtoInstance72);

ProtoInstance& ProtoInstance74 =  ProtoInstance();
ProtoInstance74.setDEF(CString("ConsoleOutputViewPositionOrientation"));
ProtoInstance74.setName(CString("ViewPositionOrientation"));
fieldValue& fieldValue75 =  fieldValue();
fieldValue75.setName(CString("enabled"));
fieldValue75.setValue(CString("true"));
ProtoInstance74.addChild(&fieldValue75);

Scene14.addChild(&ProtoInstance74);

Background& Background76 =  Background();
Background76.setSkyColor(new float[]{0.0,0.4,1.0}, 3);
Scene14.addChild(&Background76);

NavigationInfo& NavigationInfo77 =  NavigationInfo();
NavigationInfo77.setType(new CString[]{CString("EXAMINE")}, 1);
NavigationInfo77.setAvatarSize(new float[]{0.15,1.53,0.75}, 3);
NavigationInfo77.setSpeed(0.5);
Scene14.addChild(&NavigationInfo77);

Viewpoint& Viewpoint78 =  Viewpoint();
Viewpoint78.setDescription(CString("Nancy diving default viewpoint"));
Viewpoint78.setPosition(new float[]{-0.8,0.0,3.1});
Scene14.addChild(&Viewpoint78);

LOD& LOD79 =  LOD();
Group& Group80 =  Group();
Group80.setDEF(CString("Viewpoint"));
Viewpoint& Viewpoint81 =  Viewpoint();
Viewpoint81.setDescription(CString("Nancy front viewpoint"));
Viewpoint81.setPosition(new float[]{-2.2,-0.7,0.0});
Viewpoint81.setOrientation(new float[]{-0.354,0.878,-0.321,4.5485});
Group80.addChild(&Viewpoint81);

Viewpoint& Viewpoint82 =  Viewpoint();
Viewpoint82.setDescription(CString("Nancy above viewpoint"));
Viewpoint82.setPosition(new float[]{-3.0,0.5,0.0});
Viewpoint82.setOrientation(new float[]{-0.126,-0.978,-0.168,1.5385});
Group80.addChild(&Viewpoint82);

Viewpoint& Viewpoint83 =  Viewpoint();
Viewpoint83.setDescription(CString("Nancy back viewpoint"));
Viewpoint83.setPosition(new float[]{0.7,0.1,0.0});
Viewpoint83.setOrientation(new float[]{0.037,0.999,-0.011,1.572});
Group80.addChild(&Viewpoint83);

Viewpoint& Viewpoint84 =  Viewpoint();
Viewpoint84.setDescription(CString("Nancy side viewpoint"));
Viewpoint84.setPosition(new float[]{-1.2,-0.2,-1.5});
Viewpoint84.setOrientation(new float[]{0.121,0.987,-0.105,3.2682});
Group80.addChild(&Viewpoint84);

Viewpoint& Viewpoint85 =  Viewpoint();
Viewpoint85.setDescription(CString("Nancy viewpoint through her goggles"));
Viewpoint85.setPosition(new float[]{-1.5,0.1,0.0});
Viewpoint85.setOrientation(new float[]{-0.357,0.872,0.335,1.5225});
Group80.addChild(&Viewpoint85);

Group& Group86 =  Group();
Group86.setDEF(CString("HighResolution"));
Transform& Transform87 =  Transform();
Transform87.setRotation(new float[]{1.0,0.0,0.0,1.57});
Transform& Transform88 =  Transform();
Transform88.setRotation(new float[]{0.0,0.0,1.0,1.57});
WorldInfo& WorldInfo89 =  WorldInfo();
WorldInfo89.setTitle(CString("Nancy - an HAnim compliant avatar by 3Name3D"));
WorldInfo89.setInfo(new CString[]{CString("Copyright (c) 1997. 3Name3D / Yglesias Wallock Divekar, Inc.")}, 1);
Transform88.addChild(&WorldInfo89);

ProtoInstance& ProtoInstance90 =  ProtoInstance();
ProtoInstance90.setDEF(CString("Humanoid"));
ProtoInstance90.setName(CString("Humanoid"));
fieldValue& fieldValue91 =  fieldValue();
fieldValue91.setName(CString("humanoidBody"));
ProtoInstance& ProtoInstance92 =  ProtoInstance();
ProtoInstance92.setDEF(CString("hanim_humanoid_root"));
ProtoInstance92.setName(CString("Joint"));
fieldValue& fieldValue93 =  fieldValue();
fieldValue93.setName(CString("center"));
fieldValue93.setValue(CString("-0.00405 0.855 -0.000113"));
ProtoInstance92.addChild(&fieldValue93);

fieldValue& fieldValue94 =  fieldValue();
fieldValue94.setName(CString("children"));
ProtoInstance& ProtoInstance95 =  ProtoInstance();
ProtoInstance95.setDEF(CString("hanim_sacroiliac"));
ProtoInstance95.setName(CString("Joint"));
fieldValue& fieldValue96 =  fieldValue();
fieldValue96.setName(CString("center"));
fieldValue96.setValue(CString("0 1.01 -0.0204"));
ProtoInstance95.addChild(&fieldValue96);

fieldValue& fieldValue97 =  fieldValue();
fieldValue97.setName(CString("children"));
ProtoInstance& ProtoInstance98 =  ProtoInstance();
ProtoInstance98.setDEF(CString("hanim_pelvis"));
ProtoInstance98.setName(CString("Segment"));
fieldValue& fieldValue99 =  fieldValue();
fieldValue99.setName(CString("children"));
Shape& Shape100 =  Shape();
Appearance& Appearance101 =  Appearance();
Material& Material102 =  Material();
Material102.setDEF(CString("Pants_Color"));
Material102.setDiffuseColor(new float[]{0.0,0.0,0.502});
Appearance101.addChild(&Material102);

Shape100.addChild(&Appearance101);

IndexedFaceSet& IndexedFaceSet103 =  IndexedFaceSet();
IndexedFaceSet103.setCreaseAngle(1.14);
IndexedFaceSet103.setCoordIndex(new int32_t[]{0,1,40,-1,1,2,40,-1,2,3,40,-1,3,4,40,-1,4,5,40,-1,5,4,9,-1,4,3,8,-1,3,2,8,-1,2,1,6,-1,0,7,1,-1,7,6,1,-1,6,8,2,-1,9,4,10,-1,4,8,10,-1,8,6,12,-1,7,0,47,-1,50,5,9,-1,7,47,55,-1,55,13,7,-1,50,9,56,-1,9,10,14,-1,10,11,15,-1,11,12,16,-1,12,13,19,-1,13,55,17,-1,60,17,55,-1,17,19,13,-1,19,16,12,-1,16,15,11,-1,15,18,10,-1,14,56,9,-1,56,14,64,-1,17,60,20,-1,20,19,17,-1,21,64,14,-1,14,22,21,-1,15,16,24,-1,16,19,24,-1,19,20,26,-1,24,23,15,-1,64,21,69,-1,21,22,29,-1,19,26,25,-1,20,63,27,-1,27,26,20,-1,25,24,19,-1,30,29,22,-1,29,28,21,-1,28,69,21,-1,27,34,26,-1,69,28,79,-1,29,30,32,-1,30,23,33,-1,23,24,37,-1,25,26,34,-1,83,27,77,-1,37,33,23,-1,33,32,30,-1,31,79,28,-1,79,31,84,-1,32,33,36,-1,24,25,37,-1,34,27,83,-1,83,38,34,-1,34,37,25,-1,37,36,33,-1,36,35,32,-1,84,31,89,-1,31,35,89,-1,35,36,39,-1,36,37,39,-1,38,83,89,-1,89,39,38,-1,39,89,35,-1,40,41,0,-1,40,42,41,-1,40,43,42,-1,40,44,43,-1,40,45,44,-1,49,44,45,-1,48,43,44,-1,48,42,43,-1,46,41,42,-1,41,47,0,-1,41,46,47,-1,42,48,46,-1,51,44,49,-1,51,48,44,-1,48,52,53,-1,49,45,50,-1,56,49,50,-1,57,51,49,-1,58,53,52,-1,59,54,53,-1,62,55,54,-1,55,62,60,-1,54,59,62,-1,53,58,59,-1,51,61,58,-1,49,56,57,-1,64,57,56,-1,67,59,58,-1,68,62,59,-1,60,63,20,-1,60,62,63,-1,59,67,68,-1,58,61,67,-1,57,64,65,-1,65,66,57,-1,71,63,62,-1,69,65,64,-1,74,66,65,-1,78,68,67,-1,70,71,62,-1,63,72,27,-1,63,71,72,-1,68,78,76,-1,67,75,78,-1,66,74,75,-1,65,73,74,-1,65,69,73,-1,77,27,72,-1,71,82,72,-1,79,73,69,-1,81,75,74,-1,82,71,70,-1,77,72,83,-1,73,79,80,-1,84,80,79,-1,86,75,81,-1,83,72,82,-1,82,88,83,-1,70,87,82,-1,81,85,86,-1,89,80,84,-1,89,85,80,-1,90,86,85,-1,90,87,86,-1,89,83,88,-1,88,90,89,-1,85,89,90,-1,50,45,5,-1,45,40,5,-1,10,8,11,-1,8,12,11,-1,18,22,10,-1,22,14,10,-1,57,66,51,-1,66,61,51,-1,51,58,48,-1,58,52,48,-1,48,53,46,-1,53,54,46,-1,76,70,68,-1,70,62,68,-1,29,32,28,-1,28,32,31,-1,32,35,31,-1,85,81,80,-1,81,73,80,-1,81,74,73,-1,39,37,38,-1,37,34,38,-1,82,87,88,-1,87,90,88,-1,87,78,86,-1,78,75,86,-1,61,66,67,-1,66,75,67,-1,22,18,15,-1,23,30,15,-1,30,22,15,-1,13,12,7,-1,12,6,7,-1,46,54,47,-1,54,55,47,-1,87,76,78,-1,87,70,76,-1}, 712);
Coordinate& Coordinate104 =  Coordinate();
Coordinate104.setPoint(new float[]{0.0,1.06,0.0218,0.0561,1.07,0.00726,0.0851,1.07,-0.0115,0.104,1.07,-0.0497,0.0851,1.07,-0.0851,0.032,1.06,-0.0985,0.0873,1.04,0.0078,0.033,1.04,0.0395,0.123,1.05,-0.0405,0.0609,1.02,-0.106,0.0894,0.996,-0.106,0.143,1.0,-0.0309,0.117,1.0,0.0164,0.0314,0.999,0.0502,0.0314,0.96,-0.13,0.156,0.966,-0.0405,0.156,0.968,-0.00724,0.0341,0.954,0.0513,0.115,0.96,-0.0916,0.121,0.926,0.0352,0.0357,0.92,0.0497,0.0314,0.91,-0.146,0.0991,0.91,-0.131,0.169,0.883,-0.0448,0.169,0.885,-0.00939,0.123,0.873,0.0384,0.0926,0.872,0.047,0.0325,0.873,0.0287,0.0293,0.866,-0.142,0.102,0.869,-0.131,0.129,0.868,-0.103,0.0314,0.84,-0.125,0.101,0.844,-0.122,0.133,0.846,-0.0878,0.0653,0.835,0.0132,0.0615,0.824,-0.111,0.0985,0.823,-0.101,0.132,0.826,-0.0448,0.0609,0.821,-0.0158,0.0599,0.812,-0.0545,0.0,1.08,-0.0266,-0.0561,1.07,0.00726,-0.0851,1.07,-0.0115,-0.104,1.07,-0.0497,-0.0851,1.07,-0.0851,-0.032,1.06,-0.0985,-0.0873,1.04,0.0078,-0.033,1.04,0.0395,-0.123,1.05,-0.0405,-0.0609,1.02,-0.106,0.0,1.02,-0.108,-0.0894,0.996,-0.106,-0.143,1.0,-0.0309,-0.144,1.0,-0.011,-0.117,1.0,0.0164,-0.0314,0.999,0.0502,0.0,0.961,-0.123,-0.0314,0.96,-0.13,-0.156,0.966,-0.0405,-0.156,0.968,-0.00724,-0.0341,0.954,0.0513,-0.115,0.96,-0.0916,-0.121,0.926,0.0352,-0.0357,0.92,0.0497,0.0,0.91,-0.127,-0.0314,0.91,-0.146,-0.0991,0.91,-0.131,-0.167,0.911,-0.0448,-0.167,0.912,-0.00671,0.0,0.883,-0.129,-0.123,0.873,0.0384,-0.0926,0.872,0.047,-0.0325,0.873,0.0287,-0.0293,0.866,-0.142,-0.102,0.869,-0.131,-0.129,0.868,-0.103,-0.166,0.863,-0.0148,0.0,0.863,-0.00456,-0.166,0.862,-0.0459,0.0,0.858,-0.1,-0.0314,0.84,-0.125,-0.101,0.844,-0.122,-0.0653,0.835,0.0132,0.0,0.839,-0.0217,0.0,0.835,-0.0867,-0.0615,0.824,-0.111,-0.0985,0.823,-0.101,-0.132,0.826,-0.0448,-0.0609,0.821,-0.0158,0.0,0.831,-0.0626,-0.0599,0.812,-0.0545}, 273);
IndexedFaceSet103.setCoord(&Coordinate104);

Shape100.setGeometry(&IndexedFaceSet103);

fieldValue99.addChild(&Shape100);

ProtoInstance98.addChild(&fieldValue99);

fieldValue& fieldValue105 =  fieldValue();
fieldValue105.setName(CString("name"));
fieldValue105.setValue(CString("pelvis"));
ProtoInstance98.addChild(&fieldValue105);

fieldValue97.addChild(&ProtoInstance98);

ProtoInstance& ProtoInstance106 =  ProtoInstance();
ProtoInstance106.setDEF(CString("hanim_l_hip"));
ProtoInstance106.setName(CString("Joint"));
fieldValue& fieldValue107 =  fieldValue();
fieldValue107.setName(CString("center"));
fieldValue107.setValue(CString("0.122 0.888271 -0.0693267"));
ProtoInstance106.addChild(&fieldValue107);

fieldValue& fieldValue108 =  fieldValue();
fieldValue108.setName(CString("children"));
ProtoInstance& ProtoInstance109 =  ProtoInstance();
ProtoInstance109.setDEF(CString("hanim_l_thigh"));
ProtoInstance109.setName(CString("Segment"));
fieldValue& fieldValue110 =  fieldValue();
fieldValue110.setName(CString("children"));
Shape& Shape111 =  Shape();
Appearance& Appearance112 =  Appearance();
Material& Material113 =  Material();
Material113.setUSE(CString("Pants_Color"));
Appearance112.addChild(&Material113);

Shape111.addChild(&Appearance112);

IndexedFaceSet& IndexedFaceSet114 =  IndexedFaceSet();
IndexedFaceSet114.setCreaseAngle(1.32);
IndexedFaceSet114.setCoordIndex(new int32_t[]{0,4,5,-1,3,4,0,-1,0,7,1,-1,0,8,7,-1,0,6,8,-1,0,5,6,-1,0,2,3,-1,0,1,2,-1,9,2,1,-1,10,3,2,-1,11,4,3,-1,12,5,4,-1,13,6,5,-1,15,7,8,-1,9,1,7,-1,7,15,9,-1,8,14,15,-1,5,16,13,-1,5,12,16,-1,4,11,12,-1,3,10,11,-1,2,9,10,-1,20,13,16,-1,18,11,10,-1,19,12,11,-1,20,16,12,-1,23,15,14,-1,15,23,24,-1,12,19,20,-1,11,18,19,-1,10,17,18,-1,26,18,17,-1,27,19,18,-1,27,20,19,-1,28,21,20,-1,29,23,22,-1,23,29,30,-1,20,32,28,-1,20,27,32,-1,18,26,27,-1,17,25,26,-1,25,31,30,-1,30,29,26,-1,30,26,25,-1,29,28,27,-1,29,27,26,-1,28,32,27,-1,22,23,14,-1,20,21,13,-1,21,22,13,-1,22,14,13,-1,9,15,24,-1,10,9,17,-1,9,24,17,-1,6,13,8,-1,13,14,8,-1,28,29,21,-1,29,22,21,-1,24,31,17,-1,31,25,17,-1,30,31,23,-1,31,24,23,-1}, 248);
Coordinate& Coordinate115 =  Coordinate();
Coordinate115.setPoint(new float[]{0.0969,0.804,-0.0486,0.101,0.876,0.0336,0.17,0.894,-0.00778,0.17,0.891,-0.076,0.124,0.858,-0.129,0.076,0.843,-0.143,0.025,0.819,-0.0889,0.0507,0.847,0.0196,0.00349,0.826,-0.0287,0.0991,0.808,0.0406,0.161,0.814,-0.00187,0.165,0.808,-0.0755,0.122,0.788,-0.126,0.00993,0.762,-0.0937,0.00993,0.762,-0.0309,0.0491,0.777,0.0185,0.0755,0.766,-0.139,0.13,0.597,-0.00618,0.132,0.6,-0.0593,0.108,0.603,-0.105,0.0722,0.601,-0.118,0.0314,0.59,-0.0953,0.0239,0.566,-0.0427,0.047,0.566,0.0051,0.0878,0.581,0.0217,0.114,0.499,-0.0132,0.116,0.488,-0.061,0.103,0.567,-0.0991,0.0362,0.557,-0.0926,0.025,0.486,-0.047,0.0507,0.497,-0.00188,0.0862,0.513,0.018,0.0733,0.579,-0.108}, 99);
IndexedFaceSet114.setCoord(&Coordinate115);

Shape111.setGeometry(&IndexedFaceSet114);

fieldValue110.addChild(&Shape111);

ProtoInstance109.addChild(&fieldValue110);

fieldValue& fieldValue116 =  fieldValue();
fieldValue116.setName(CString("name"));
fieldValue116.setValue(CString("l_thigh"));
ProtoInstance109.addChild(&fieldValue116);

fieldValue108.addChild(&ProtoInstance109);

ProtoInstance& ProtoInstance117 =  ProtoInstance();
ProtoInstance117.setDEF(CString("hanim_l_knee"));
ProtoInstance117.setName(CString("Joint"));
fieldValue& fieldValue118 =  fieldValue();
fieldValue118.setName(CString("center"));
fieldValue118.setValue(CString("0.0738 0.517 -0.0284"));
ProtoInstance117.addChild(&fieldValue118);

fieldValue& fieldValue119 =  fieldValue();
fieldValue119.setName(CString("children"));
ProtoInstance& ProtoInstance120 =  ProtoInstance();
ProtoInstance120.setDEF(CString("hanim_l_calf"));
ProtoInstance120.setName(CString("Segment"));
fieldValue& fieldValue121 =  fieldValue();
fieldValue121.setName(CString("children"));
Shape& Shape122 =  Shape();
Appearance& Appearance123 =  Appearance();
Material& Material124 =  Material();
Material124.setUSE(CString("Pants_Color"));
Appearance123.addChild(&Material124);

Shape122.addChild(&Appearance123);

IndexedFaceSet& IndexedFaceSet125 =  IndexedFaceSet();
IndexedFaceSet125.setCreaseAngle(1.57);
IndexedFaceSet125.setCoordIndex(new int32_t[]{2,1,0,-1,2,3,1,-1,2,4,3,-1,2,5,4,-1,2,6,5,-1,2,7,6,-1,2,8,7,-1,2,0,8,-1,9,8,0,-1,10,6,7,-1,11,5,6,-1,12,4,5,-1,12,3,4,-1,13,1,3,-1,1,13,14,-1,3,12,13,-1,5,11,12,-1,6,10,11,-1,8,9,15,-1,22,13,12,-1,13,22,14,-1,17,15,9,-1,20,12,11,-1,21,22,12,-1,23,9,14,-1,9,23,16,-1,14,22,23,-1,12,20,21,-1,15,17,18,-1,9,16,17,-1,24,17,16,-1,25,18,17,-1,26,19,18,-1,27,20,19,-1,28,21,20,-1,29,22,21,-1,30,23,22,-1,31,16,23,-1,23,30,31,-1,22,29,30,-1,21,28,29,-1,20,27,28,-1,19,26,27,-1,18,25,26,-1,17,24,25,-1,16,31,24,-1,33,26,25,-1,36,29,28,-1,37,31,30,-1,29,36,30,-1,25,24,33,-1,31,37,24,-1,32,33,24,-1,24,37,32,-1,38,37,30,-1,30,36,38,-1,41,33,32,-1,42,39,34,-1,44,36,35,-1,45,38,36,-1,46,37,38,-1,38,45,46,-1,36,44,45,-1,35,43,44,-1,39,42,47,-1,32,40,41,-1,40,46,45,-1,41,40,45,-1,41,45,44,-1,44,43,42,-1,44,42,41,-1,43,47,42,-1,39,35,28,-1,35,36,28,-1,34,39,27,-1,39,28,27,-1,33,34,26,-1,34,27,26,-1,33,41,34,-1,41,42,34,-1,40,32,46,-1,32,37,46,-1,10,19,11,-1,19,20,11,-1,14,9,1,-1,9,0,1,-1,8,15,7,-1,7,15,10,-1,15,19,10,-1,15,18,19,-1,43,35,47,-1,35,39,47,-1}, 368);
Coordinate& Coordinate126 =  Coordinate();
Coordinate126.setPoint(new float[]{0.0883,0.532,-0.00349,0.0609,0.533,-0.00833,0.0814,0.55,-0.0395,0.0529,0.536,-0.0368,0.0577,0.544,-0.0577,0.0722,0.546,-0.0717,0.0975,0.54,-0.0647,0.105,0.539,-0.0438,0.104,0.539,-0.0223,0.0862,0.506,0.0158,0.101,0.51,-0.0798,0.0706,0.51,-0.101,0.0406,0.513,-0.0744,0.0368,0.51,-0.0357,0.0556,0.506,-0.000272,0.117,0.508,-0.0169,0.0878,0.361,-0.0126,0.123,0.363,-0.04,0.123,0.363,-0.0663,0.107,0.367,-0.107,0.0588,0.365,-0.122,0.0228,0.358,-0.0926,0.0239,0.358,-0.0475,0.0497,0.358,-0.0234,0.118,0.311,-0.0411,0.118,0.309,-0.0685,0.105,0.31,-0.108,0.0572,0.308,-0.123,0.0201,0.309,-0.0937,0.0191,0.311,-0.0508,0.0475,0.307,-0.0282,0.0883,0.309,-0.018,0.0959,0.124,-0.04,0.0905,0.12,-0.0647,0.0738,0.117,-0.0814,0.0373,0.121,-0.0636,0.0416,0.124,-0.0416,0.0744,0.13,-0.0212,0.0561,0.13,-0.0245,0.0529,0.121,-0.0873,0.0948,0.0897,-0.0368,0.0916,0.0779,-0.0604,0.0717,0.0854,-0.0765,0.0406,0.0918,-0.0626,0.0384,0.0881,-0.0363,0.054,0.0972,-0.0175,0.0765,0.11,-0.0169,0.0486,0.0999,-0.0835}, 144);
IndexedFaceSet125.setCoord(&Coordinate126);

Shape122.setGeometry(&IndexedFaceSet125);

fieldValue121.addChild(&Shape122);

ProtoInstance120.addChild(&fieldValue121);

fieldValue& fieldValue127 =  fieldValue();
fieldValue127.setName(CString("name"));
fieldValue127.setValue(CString("l_calf"));
ProtoInstance120.addChild(&fieldValue127);

fieldValue119.addChild(&ProtoInstance120);

ProtoInstance& ProtoInstance128 =  ProtoInstance();
ProtoInstance128.setDEF(CString("hanim_l_ankle"));
ProtoInstance128.setName(CString("Joint"));
fieldValue& fieldValue129 =  fieldValue();
fieldValue129.setName(CString("center"));
fieldValue129.setValue(CString("0.0645 0.0719 -0.048"));
ProtoInstance128.addChild(&fieldValue129);

fieldValue& fieldValue130 =  fieldValue();
fieldValue130.setName(CString("children"));
ProtoInstance& ProtoInstance131 =  ProtoInstance();
ProtoInstance131.setDEF(CString("hanim_l_hindfoot"));
ProtoInstance131.setName(CString("Segment"));
fieldValue& fieldValue132 =  fieldValue();
fieldValue132.setName(CString("children"));
Shape& Shape133 =  Shape();
Appearance& Appearance134 =  Appearance();
Material& Material135 =  Material();
Material135.setDEF(CString("Shoe_Color"));
Material135.setAmbientIntensity(0.25);
Material135.setDiffuseColor(new float[]{0.753,1.0,0.243});
Appearance134.addChild(&Material135);

Shape133.addChild(&Appearance134);

IndexedFaceSet& IndexedFaceSet136 =  IndexedFaceSet();
IndexedFaceSet136.setCreaseAngle(1.57);
IndexedFaceSet136.setCoordIndex(new int32_t[]{2,1,0,-1,4,3,1,-1,2,4,1,-1,3,6,5,-1,1,3,5,-1,6,8,7,-1,5,6,7,-1,8,10,9,-1,7,8,9,-1,10,12,11,-1,9,10,11,-1,12,14,13,-1,11,12,13,-1,14,16,15,-1,13,14,15,-1,16,18,17,-1,15,16,17,-1,18,20,19,-1,17,18,19,-1,20,22,21,-1,19,20,21,-1,22,24,23,-1,21,22,23,-1,24,25,0,-1,23,24,0,-1,25,4,2,-1,0,25,2,-1,18,26,20,-1,16,26,18,-1,27,26,16,-1,14,27,16,-1,12,27,14,-1,28,27,12,-1,29,28,12,-1,10,29,12,-1,8,29,10,-1,6,37,8,-1,24,30,25,-1,31,30,24,-1,22,31,24,-1,32,31,22,-1,20,32,22,-1,33,32,20,-1,26,33,20,-1,34,33,26,-1,27,34,26,-1,35,34,27,-1,28,35,27,-1,29,35,28,-1,36,35,29,-1,8,36,29,-1,37,36,8,-1,6,38,37,-1,3,38,6,-1,39,38,3,-1,30,39,25,-1,41,40,30,-1,31,41,30,-1,42,41,31,-1,32,42,31,-1,43,42,32,-1,33,43,32,-1,44,43,33,-1,34,44,33,-1,45,44,34,-1,35,45,34,-1,46,45,35,-1,36,46,35,-1,47,46,36,-1,37,47,36,-1,38,47,37,-1,48,47,38,-1,49,48,38,-1,39,49,38,-1,40,49,39,-1,30,40,39,-1,48,49,50,-1,47,48,50,-1,46,47,50,-1,45,46,50,-1,44,45,50,-1,43,44,50,-1,42,43,50,-1,41,42,50,-1,40,41,50,-1,49,40,50,-1,11,13,15,-1,11,15,17,-1,9,11,17,-1,9,17,19,-1,7,9,19,-1,7,19,21,-1,5,7,21,-1,5,21,23,-1,5,23,0,-1,1,5,0,-1,3,4,39,-1,4,25,39,-1}, 392);
Coordinate& Coordinate137 =  Coordinate();
Coordinate137.setPoint(new float[]{0.0529,0.0,-0.0923,0.0863,0.0,-0.0862,0.0727,0.0,-0.0994,0.0863,0.0219,-0.0862,0.0727,0.0219,-0.0994,0.1,0.0,-0.0594,0.1,0.0219,-0.0594,0.113,0.0,0.0645,0.113,0.0219,0.0645,0.112,0.0,0.117,0.112,0.0156,0.117,0.0701,0.0,0.146,0.0701,0.0156,0.146,0.0468,0.0,0.153,0.0468,0.0156,0.153,0.0215,0.0,0.146,0.0215,0.0156,0.146,0.0165,0.0,0.125,0.0165,0.0156,0.125,0.0211,0.0,0.0377,0.0211,0.0219,0.0377,0.0393,0.0,-0.0129,0.0393,0.0219,-0.0129,0.0433,0.0,-0.0534,0.0433,0.0219,-0.0534,0.0529,0.0219,-0.0923,0.0305,0.0253,0.0938,0.0505,0.0253,0.099,0.0854,0.0253,0.0834,0.102,0.0253,0.0707,0.0568,0.0573,-0.0918,0.0492,0.0573,-0.0497,0.0435,0.0573,-0.0225,0.0442,0.0573,0.0235,0.0623,0.0573,0.0366,0.0911,0.0573,0.0159,0.0962,0.0573,-0.0121,0.0911,0.0573,-0.0482,0.0758,0.0573,-0.0899,0.0676,0.0573,-0.0962,0.0578,0.0953,-0.0896,0.0489,0.0953,-0.0757,0.0447,0.0953,-0.0432,0.0451,0.0953,-0.0128,0.0624,0.0953,-0.00466,0.0857,0.0953,-0.0134,0.0953,0.0953,-0.038,0.0843,0.0953,-0.0803,0.0761,0.0953,-0.0889,0.0682,0.0953,-0.0929,0.0675,0.13,-0.0608}, 153);
IndexedFaceSet136.setCoord(&Coordinate137);

Shape133.setGeometry(&IndexedFaceSet136);

fieldValue132.addChild(&Shape133);

Transform& Transform138 =  Transform();
Transform138.setScale(new float[]{0.015,0.015,0.015});
Transform& Transform139 =  Transform();
Transform139.setTranslation(new float[]{6.0,-0.5,-7.5});
Transform139.setRotation(new float[]{0.0,0.0,1.0,1.57});
Shape& Shape140 =  Shape();
Appearance& Appearance141 =  Appearance();
Material& Material142 =  Material();
Material142.setDiffuseColor(new float[]{0.753,1.0,0.243});
Appearance141.addChild(&Material142);

Shape140.addChild(&Appearance141);

Extrusion& Extrusion143 =  Extrusion();
Extrusion143.setDEF(CString("Finl"));
Extrusion143.setCcw(false);
Extrusion143.setCreaseAngle(3.14);
Extrusion143.setCrossSection(new float[]{-1.0,0.0,-0.8,2.0,-0.7,3.0,0.0,5.2,0.7,3.0,0.8,2.0,1.0,0.0,0.8,-2.0,0.7,-3.0,0.0,-5.2,-0.7,-3.0,-0.8,-2.0,-1.0,0.0}, 26);
Extrusion143.setScale(new float[]{0.25,0.25,0.5,0.75,0.5,1.2,0.5,1.35,0.5,1.35,0.5,1.35,0.5,1.35,0.5,1.35,0.5,1.35}, 18);
Extrusion143.setSpine(new float[]{0.0,0.0,1.0,0.0,0.0,5.0,0.0,0.0,8.0,0.0,0.0,12.0,0.0,0.0,15.0,0.5,0.0,18.0,1.5,0.0,25.0,2.5,0.0,30.0,4.0,0.0,34.0}, 27);
Shape140.setGeometry(&Extrusion143);

Transform139.addChild(&Shape140);

Transform138.addChild(&Transform139);

fieldValue132.addChild(&Transform138);

ProtoInstance131.addChild(&fieldValue132);

fieldValue& fieldValue144 =  fieldValue();
fieldValue144.setName(CString("name"));
fieldValue144.setValue(CString("l_hindfoot"));
ProtoInstance131.addChild(&fieldValue144);

fieldValue130.addChild(&ProtoInstance131);

ProtoInstance128.addChild(&fieldValue130);

fieldValue& fieldValue145 =  fieldValue();
fieldValue145.setName(CString("name"));
fieldValue145.setValue(CString("l_ankle"));
ProtoInstance128.addChild(&fieldValue145);

fieldValue119.addChild(&ProtoInstance128);

ProtoInstance117.addChild(&fieldValue119);

fieldValue& fieldValue146 =  fieldValue();
fieldValue146.setName(CString("name"));
fieldValue146.setValue(CString("l_knee"));
ProtoInstance117.addChild(&fieldValue146);

fieldValue108.addChild(&ProtoInstance117);

ProtoInstance106.addChild(&fieldValue108);

fieldValue& fieldValue147 =  fieldValue();
fieldValue147.setName(CString("name"));
fieldValue147.setValue(CString("l_hip"));
ProtoInstance106.addChild(&fieldValue147);

fieldValue97.addChild(&ProtoInstance106);

ProtoInstance& ProtoInstance148 =  ProtoInstance();
ProtoInstance148.setDEF(CString("hanim_r_hip"));
ProtoInstance148.setName(CString("Joint"));
fieldValue& fieldValue149 =  fieldValue();
fieldValue149.setName(CString("center"));
fieldValue149.setValue(CString("-0.11 0.892362 -0.0732533"));
ProtoInstance148.addChild(&fieldValue149);

fieldValue& fieldValue150 =  fieldValue();
fieldValue150.setName(CString("children"));
ProtoInstance& ProtoInstance151 =  ProtoInstance();
ProtoInstance151.setDEF(CString("hanim_r_thigh"));
ProtoInstance151.setName(CString("Segment"));
fieldValue& fieldValue152 =  fieldValue();
fieldValue152.setName(CString("children"));
Shape& Shape153 =  Shape();
Appearance& Appearance154 =  Appearance();
Material& Material155 =  Material();
Material155.setUSE(CString("Pants_Color"));
Appearance154.addChild(&Material155);

Shape153.addChild(&Appearance154);

IndexedFaceSet& IndexedFaceSet156 =  IndexedFaceSet();
IndexedFaceSet156.setCreaseAngle(1.61);
IndexedFaceSet156.setCoordIndex(new int32_t[]{5,4,0,-1,0,4,3,-1,1,7,0,-1,7,8,0,-1,8,6,0,-1,6,5,0,-1,3,2,0,-1,2,1,0,-1,1,2,9,-1,2,3,10,-1,3,4,11,-1,4,5,12,-1,5,6,13,-1,8,7,15,-1,7,1,9,-1,9,15,7,-1,15,14,8,-1,13,16,5,-1,16,12,5,-1,12,11,4,-1,11,10,3,-1,10,9,2,-1,12,16,20,-1,13,14,22,-1,14,15,23,-1,24,23,15,-1,23,22,14,-1,20,19,12,-1,17,18,26,-1,18,19,27,-1,19,20,27,-1,20,21,28,-1,22,23,29,-1,30,29,23,-1,27,26,18,-1,26,25,17,-1,30,31,25,-1,25,26,29,-1,25,29,30,-1,26,27,28,-1,26,28,29,-1,27,20,28,-1,24,15,9,-1,22,21,13,-1,29,28,22,-1,28,21,22,-1,24,31,23,-1,31,30,23,-1,25,31,17,-1,31,24,17,-1,17,24,10,-1,24,9,10,-1,18,10,11,-1,18,17,10,-1,18,12,19,-1,18,11,12,-1,21,20,13,-1,20,16,13,-1,14,13,8,-1,13,6,8,-1}, 240);
Coordinate& Coordinate157 =  Coordinate();
Coordinate157.setPoint(new float[]{-0.0969,0.804,-0.0486,-0.101,0.876,0.0336,-0.17,0.894,-0.00778,-0.17,0.891,-0.076,-0.124,0.858,-0.129,-0.076,0.843,-0.143,-0.025,0.819,-0.0889,-0.0507,0.847,0.0196,-0.00349,0.826,-0.0287,-0.0991,0.808,0.0406,-0.161,0.814,-0.00187,-0.165,0.808,-0.0755,-0.122,0.788,-0.126,-0.00993,0.762,-0.0937,-0.00993,0.762,-0.0309,-0.0491,0.777,0.0185,-0.0755,0.766,-0.139,-0.13,0.597,-0.00618,-0.132,0.6,-0.0593,-0.108,0.603,-0.105,-0.0722,0.601,-0.118,-0.0314,0.59,-0.0953,-0.0239,0.566,-0.0427,-0.047,0.566,0.0051,-0.0878,0.581,0.0217,-0.114,0.499,-0.0132,-0.116,0.488,-0.061,-0.103,0.567,-0.0991,-0.0362,0.557,-0.0926,-0.025,0.486,-0.047,-0.0507,0.497,-0.00188,-0.0862,0.513,0.018}, 96);
IndexedFaceSet156.setCoord(&Coordinate157);

Shape153.setGeometry(&IndexedFaceSet156);

fieldValue152.addChild(&Shape153);

ProtoInstance151.addChild(&fieldValue152);

fieldValue& fieldValue158 =  fieldValue();
fieldValue158.setName(CString("name"));
fieldValue158.setValue(CString("r_thigh"));
ProtoInstance151.addChild(&fieldValue158);

fieldValue150.addChild(&ProtoInstance151);

ProtoInstance& ProtoInstance159 =  ProtoInstance();
ProtoInstance159.setDEF(CString("hanim_r_knee"));
ProtoInstance159.setName(CString("Joint"));
fieldValue& fieldValue160 =  fieldValue();
fieldValue160.setName(CString("center"));
fieldValue160.setValue(CString("-0.0699 0.51 -0.0166"));
ProtoInstance159.addChild(&fieldValue160);

fieldValue& fieldValue161 =  fieldValue();
fieldValue161.setName(CString("children"));
ProtoInstance& ProtoInstance162 =  ProtoInstance();
ProtoInstance162.setDEF(CString("hanim_r_calf"));
ProtoInstance162.setName(CString("Segment"));
fieldValue& fieldValue163 =  fieldValue();
fieldValue163.setName(CString("children"));
Shape& Shape164 =  Shape();
Appearance& Appearance165 =  Appearance();
Material& Material166 =  Material();
Material166.setUSE(CString("Pants_Color"));
Appearance165.addChild(&Material166);

Shape164.addChild(&Appearance165);

IndexedFaceSet& IndexedFaceSet167 =  IndexedFaceSet();
IndexedFaceSet167.setCreaseAngle(1.57);
IndexedFaceSet167.setCoordIndex(new int32_t[]{14,25,18,-1,25,32,18,-1,32,27,18,-1,27,22,18,-1,22,10,18,-1,10,6,18,-1,6,8,18,-1,8,14,18,-1,14,8,17,-1,6,10,9,-1,10,22,24,-1,22,27,39,-1,27,32,39,-1,32,25,42,-1,25,14,30,-1,17,30,14,-1,30,42,25,-1,42,39,32,-1,39,24,22,-1,24,9,10,-1,4,17,8,-1,39,42,43,-1,30,43,42,-1,17,4,1,-1,24,39,26,-1,39,43,44,-1,30,17,34,-1,16,34,17,-1,34,43,30,-1,44,26,39,-1,0,1,4,-1,1,16,17,-1,16,1,3,-1,1,0,2,-1,0,5,7,-1,5,26,28,-1,26,44,45,-1,44,43,46,-1,43,34,36,-1,34,16,15,-1,15,36,34,-1,36,46,43,-1,46,45,44,-1,45,28,26,-1,28,7,5,-1,7,2,0,-1,2,3,1,-1,3,15,16,-1,45,46,37,-1,36,15,20,-1,36,37,46,-1,13,2,7,-1,3,20,15,-1,3,2,13,-1,36,20,29,-1,29,37,36,-1,13,21,23,-1,21,33,23,-1,41,37,40,-1,37,29,31,-1,29,20,19,-1,19,31,29,-1,31,40,37,-1,40,38,41,-1,35,23,33,-1,23,12,13,-1,12,11,13,-1,31,19,11,-1,40,31,11,-1,40,11,12,-1,12,23,38,-1,12,38,40,-1,23,35,38,-1,28,21,7,-1,21,13,7,-1,45,33,28,-1,33,21,28,-1,33,45,41,-1,45,37,41,-1,33,41,35,-1,41,38,35,-1,20,3,47,-1,11,19,47,-1,19,20,47,-1,13,47,3,-1,13,11,47,-1,4,8,6,-1,26,5,24,-1,5,9,24,-1,6,9,4,-1,9,0,4,-1,9,5,0,-1}, 368);
Coordinate& Coordinate168 =  Coordinate();
Coordinate168.setPoint(new float[]{-0.123,0.363,-0.0663,-0.123,0.363,-0.04,-0.118,0.309,-0.0685,-0.118,0.311,-0.0411,-0.117,0.508,-0.0169,-0.107,0.367,-0.107,-0.105,0.539,-0.0438,-0.105,0.31,-0.108,-0.104,0.539,-0.0223,-0.101,0.51,-0.0798,-0.0975,0.54,-0.0647,-0.0948,0.0897,-0.0368,-0.0916,0.0779,-0.0604,-0.0905,0.12,-0.0647,-0.0883,0.532,-0.00349,-0.0883,0.309,-0.018,-0.0878,0.361,-0.0126,-0.0862,0.506,0.0158,-0.0814,0.55,-0.0395,-0.0765,0.11,-0.0169,-0.0744,0.13,-0.0212,-0.0738,0.117,-0.0814,-0.0722,0.546,-0.0717,-0.0717,0.0854,-0.0765,-0.0706,0.51,-0.101,-0.0609,0.533,-0.00833,-0.0588,0.365,-0.122,-0.0577,0.544,-0.0577,-0.0572,0.308,-0.123,-0.0561,0.13,-0.0245,-0.0556,0.506,-0.000272,-0.054,0.0972,-0.0175,-0.0529,0.536,-0.0368,-0.0529,0.121,-0.0873,-0.0497,0.358,-0.0234,-0.0486,0.0999,-0.0835,-0.0475,0.307,-0.0282,-0.0416,0.124,-0.0416,-0.0406,0.0918,-0.0626,-0.0406,0.513,-0.0744,-0.0384,0.0881,-0.0363,-0.0373,0.121,-0.0636,-0.0368,0.51,-0.0357,-0.0239,0.358,-0.0475,-0.0228,0.358,-0.0926,-0.0201,0.309,-0.0937,-0.0191,0.311,-0.0508,-0.0985,0.125,-0.0375}, 144);
IndexedFaceSet167.setCoord(&Coordinate168);

Shape164.setGeometry(&IndexedFaceSet167);

fieldValue163.addChild(&Shape164);

ProtoInstance162.addChild(&fieldValue163);

fieldValue& fieldValue169 =  fieldValue();
fieldValue169.setName(CString("name"));
fieldValue169.setValue(CString("r_calf"));
ProtoInstance162.addChild(&fieldValue169);

fieldValue161.addChild(&ProtoInstance162);

ProtoInstance& ProtoInstance170 =  ProtoInstance();
ProtoInstance170.setDEF(CString("hanim_r_ankle"));
ProtoInstance170.setName(CString("Joint"));
fieldValue& fieldValue171 =  fieldValue();
fieldValue171.setName(CString("center"));
fieldValue171.setValue(CString("-0.064 0.0753 -0.0412"));
ProtoInstance170.addChild(&fieldValue171);

fieldValue& fieldValue172 =  fieldValue();
fieldValue172.setName(CString("children"));
ProtoInstance& ProtoInstance173 =  ProtoInstance();
ProtoInstance173.setDEF(CString("hanim_r_hindfoot"));
ProtoInstance173.setName(CString("Segment"));
fieldValue& fieldValue174 =  fieldValue();
fieldValue174.setName(CString("children"));
Shape& Shape175 =  Shape();
Appearance& Appearance176 =  Appearance();
Material& Material177 =  Material();
Material177.setUSE(CString("Shoe_Color"));
Appearance176.addChild(&Material177);

Shape175.addChild(&Appearance176);

IndexedFaceSet& IndexedFaceSet178 =  IndexedFaceSet();
IndexedFaceSet178.setCreaseAngle(1.57);
IndexedFaceSet178.setCoordIndex(new int32_t[]{6,50,0,-1,50,8,7,-1,50,7,0,-1,1,9,8,-1,1,8,50,-1,49,10,9,-1,49,9,1,-1,46,11,10,-1,46,10,49,-1,2,12,11,-1,2,11,46,-1,3,13,12,-1,3,12,2,-1,4,14,13,-1,4,13,3,-1,45,14,4,-1,47,15,45,-1,19,15,47,-1,48,18,19,-1,5,16,18,-1,5,18,48,-1,6,17,16,-1,6,16,5,-1,0,7,17,-1,0,17,6,-1,14,20,21,-1,14,21,13,-1,13,21,12,-1,12,21,22,-1,12,22,11,-1,11,22,10,-1,17,23,16,-1,16,23,24,-1,16,24,18,-1,18,24,25,-1,18,25,19,-1,19,25,26,-1,19,26,15,-1,15,26,20,-1,20,26,27,-1,20,27,21,-1,21,27,28,-1,21,28,22,-1,22,28,29,-1,10,30,9,-1,9,30,31,-1,9,31,8,-1,8,31,32,-1,17,32,23,-1,23,33,34,-1,23,34,35,-1,23,35,24,-1,24,35,36,-1,24,36,25,-1,25,36,37,-1,25,37,26,-1,26,37,38,-1,26,38,27,-1,27,38,39,-1,27,39,28,-1,28,39,40,-1,28,40,29,-1,29,40,41,-1,29,41,30,-1,30,41,42,-1,30,42,31,-1,31,42,43,-1,31,43,32,-1,32,43,33,-1,32,33,23,-1,44,43,42,-1,44,42,41,-1,44,41,40,-1,44,40,39,-1,44,39,38,-1,44,38,37,-1,44,37,36,-1,44,36,35,-1,44,35,34,-1,44,34,33,-1,44,33,43,-1,4,3,2,-1,45,4,2,-1,45,2,46,-1,47,45,46,-1,48,46,49,-1,5,48,49,-1,5,49,1,-1,6,5,1,-1,6,1,50,-1,30,10,29,-1,10,22,29,-1,17,7,32,-1,7,8,32,-1,19,47,48,-1,47,46,48,-1,20,14,15,-1,14,45,15,-1}, 392);
Coordinate& Coordinate179 =  Coordinate();
Coordinate179.setPoint(new float[]{-0.0727,0.0,-0.0994,-0.1,0.0,-0.0594,-0.0701,0.0,0.146,-0.0468,0.0,0.153,-0.0215,0.0,0.146,-0.0433,0.0,-0.0534,-0.0529,0.0,-0.0923,-0.0727,0.0219,-0.0994,-0.0863,0.0219,-0.0862,-0.1,0.0219,-0.0594,-0.108,0.0219,-0.00479,-0.112,0.0156,0.117,-0.0701,0.0156,0.146,-0.0468,0.0156,0.153,-0.0215,0.0156,0.146,-0.0165,0.017,0.0777,-0.0433,0.0219,-0.0534,-0.0529,0.0219,-0.0923,-0.0445,0.0273,-0.0189,-0.0265,0.0253,0.0549,-0.0305,0.0253,0.0938,-0.069,0.0253,0.0938,-0.102,0.0253,0.0707,-0.0568,0.0573,-0.0918,-0.0492,0.0573,-0.0497,-0.0424,0.0573,-0.00142,-0.0478,0.0573,0.0341,-0.0623,0.0573,0.0366,-0.0864,0.0573,0.0245,-0.0962,0.0573,-0.0121,-0.0845,0.0573,-0.0764,-0.0758,0.0573,-0.0899,-0.0676,0.0573,-0.0962,-0.0578,0.0953,-0.0896,-0.0489,0.0953,-0.0757,-0.0459,0.0953,-0.0615,-0.0435,0.0953,-0.0292,-0.0485,0.0953,-0.00582,-0.0624,0.0953,-0.00466,-0.0857,0.0953,-0.0134,-0.0953,0.0953,-0.038,-0.0843,0.0953,-0.0803,-0.0761,0.0953,-0.0889,-0.0682,0.0953,-0.0929,-0.0675,0.13,-0.0608,-0.0165,0.0,0.125,-0.112,0.0,0.117,-0.0165,0.0,0.0777,-0.0393,0.0,-0.0129,-0.108,0.0,-0.00479,-0.0863,0.0,-0.0862}, 153);
IndexedFaceSet178.setCoord(&Coordinate179);

Shape175.setGeometry(&IndexedFaceSet178);

fieldValue174.addChild(&Shape175);

Transform& Transform180 =  Transform();
Transform180.setScale(new float[]{0.015,0.015,0.015});
Transform& Transform181 =  Transform();
Transform181.setTranslation(new float[]{-5.0,-0.5,-7.5});
Transform181.setRotation(new float[]{0.0,0.0,1.0,1.57});
Shape& Shape182 =  Shape();
Appearance& Appearance183 =  Appearance();
Material& Material184 =  Material();
Material184.setDiffuseColor(new float[]{0.753,1.0,0.243});
Appearance183.addChild(&Material184);

Shape182.addChild(&Appearance183);

Extrusion& Extrusion185 =  Extrusion();
Extrusion185.setDEF(CString("Finr"));
Extrusion185.setCcw(false);
Extrusion185.setCreaseAngle(3.14);
Extrusion185.setCrossSection(new float[]{-1.0,0.0,-0.8,2.0,-0.7,3.0,0.0,5.2,0.7,3.0,0.8,2.0,1.0,0.0,0.8,-2.0,0.7,-3.0,0.0,-5.2,-0.7,-3.0,-0.8,-2.0,-1.0,0.0}, 26);
Extrusion185.setScale(new float[]{0.25,0.25,0.5,0.75,0.5,1.2,0.5,1.35,0.5,1.35,0.5,1.35,0.5,1.35,0.5,1.35,0.5,1.35}, 18);
Extrusion185.setSpine(new float[]{0.0,0.0,1.0,0.0,0.0,5.0,0.0,0.0,8.0,0.0,0.0,12.0,0.0,0.0,15.0,0.5,0.0,18.0,1.5,0.0,25.0,2.5,0.0,30.0,4.0,0.0,34.0}, 27);
Shape182.setGeometry(&Extrusion185);

Transform181.addChild(&Shape182);

Transform180.addChild(&Transform181);

fieldValue174.addChild(&Transform180);

ProtoInstance173.addChild(&fieldValue174);

fieldValue& fieldValue186 =  fieldValue();
fieldValue186.setName(CString("name"));
fieldValue186.setValue(CString("r_hindfoot"));
ProtoInstance173.addChild(&fieldValue186);

fieldValue172.addChild(&ProtoInstance173);

ProtoInstance170.addChild(&fieldValue172);

fieldValue& fieldValue187 =  fieldValue();
fieldValue187.setName(CString("name"));
fieldValue187.setValue(CString("r_ankle"));
ProtoInstance170.addChild(&fieldValue187);

fieldValue161.addChild(&ProtoInstance170);

ProtoInstance159.addChild(&fieldValue161);

fieldValue& fieldValue188 =  fieldValue();
fieldValue188.setName(CString("name"));
fieldValue188.setValue(CString("r_knee"));
ProtoInstance159.addChild(&fieldValue188);

fieldValue150.addChild(&ProtoInstance159);

ProtoInstance148.addChild(&fieldValue150);

fieldValue& fieldValue189 =  fieldValue();
fieldValue189.setName(CString("name"));
fieldValue189.setValue(CString("r_hip"));
ProtoInstance148.addChild(&fieldValue189);

fieldValue97.addChild(&ProtoInstance148);

ProtoInstance95.addChild(&fieldValue97);

fieldValue& fieldValue190 =  fieldValue();
fieldValue190.setName(CString("name"));
fieldValue190.setValue(CString("sacroiliac"));
ProtoInstance95.addChild(&fieldValue190);

fieldValue94.addChild(&ProtoInstance95);

ProximitySensor& ProximitySensor191 =  ProximitySensor();
ProximitySensor191.setDEF(CString("FinTriggerProximitySensor"));
ProximitySensor191.setSize(new float[]{5.0,5.0,5.0});
fieldValue94.addChild(&ProximitySensor191);

TimeSensor& TimeSensor192 =  TimeSensor();
TimeSensor192.setDEF(CString("FinClock"));
TimeSensor192.setCycleInterval(7);
TimeSensor192.setLoop(true);
fieldValue94.addChild(&TimeSensor192);

Group& Group193 =  Group();
Script& Script194 =  Script();
Script194.setDEF(CString("FinScript"));
field& field195 =  field();
field195.setAccessType(CString("outputOnly"));
field195.setType(CString("MFVec3f"));
field195.setName(CString("keyValueR"));
Script194.addChild(&field195);

field& field196 =  field();
field196.setAccessType(CString("outputOnly"));
field196.setType(CString("MFVec3f"));
field196.setName(CString("keyValueL"));
Script194.addChild(&field196);

field& field197 =  field();
field197.setAccessType(CString("inputOnly"));
field197.setType(CString("SFFloat"));
field197.setName(CString("set_fraction"));
Script194.addChild(&field197);

field& field198 =  field();
field198.setAccessType(CString("inputOnly"));
field198.setType(CString("SFBool"));
field198.setName(CString("finL"));
Script194.addChild(&field198);

field& field199 =  field();
field199.setAccessType(CString("inputOnly"));
field199.setType(CString("SFBool"));
field199.setName(CString("finR"));
Script194.addChild(&field199);

field& field200 =  field();
field200.setAccessType(CString("initializeOnly"));
field200.setType(CString("SFBool"));
field200.setName(CString("traceEnabled"));
field200.setValue(CString("true"));
Script194.addChild(&field200);


//Script194.setSourceCode(CString("ecmascript:")+
//_T("var finWarpL;")+
//_T("var finWarpR;")+
//_T("function initialize ()")+
//_T("{")+
//_T("	finWarpL = 0;")+
//_T("	finWarpR = 0;")+
//_T("}")+
//_T("function finL(value, timeStamp)")+
//_T("{")+
//_T("	if (value == 0)")+
//_T("	{")+
//_T("		finWarpL = 0;")+
//_T("	}")+
//_T("	else")+
//_T("	{")+
//_T("		finWarpL = 1;")+
//_T("	}")+
//_T("	//print ('finWarpL' + finWarpL);")+
//_T("}			 ")+
//_T("function finR(value, timeStamp)")+
//_T("{")+
//_T("	if (value == 0)")+
//_T("	{")+
//_T("		finWarpR = 0;")+
//_T("	}")+
//_T("	else")+
//_T("	{")+
//_T("		finWarpR = 1;")+
//_T("	}")+
//_T("	//print ('finWarpR' + finWarpR);")+
//_T("}")+
//_T("function finMove(fraction, timeStamp)")+
//_T(" {  	")+
//_T("	if (finWarpL == 1)")+
//_T("	{")+
//_T("		// level 3 (warp outside) Left					")+
//_T("		kVL7 = new SFVec3f(1.25, 0, 25);  ")+
//_T("     		kVL8 = new SFVec3f(2.5, 0, 30);")+
//_T("      		kVL9 = new SFVec3f(3.25, 0, 34);			")+
//_T("	}	")+
//_T("	else ")+
//_T("	{		")+
//_T("		// level -2 (warp inside) Left					")+
//_T("		kVL7 = new SFVec3f(-1.25, 0, 25);  ")+
//_T("     		kVL8 = new SFVec3f(-2.5, 0, 30);")+
//_T("      		kVL9 = new SFVec3f(-3.25, 0, 34);	")+
//_T("	}")+
//_T("	if (finWarpR == 0)")+
//_T("	{		")+
//_T("		// level  1 (warp outside ) Right    			")+
//_T("		kVR7 = new SFVec3f(1.25, 0, 25);  ")+
//_T("     		kVR8 = new SFVec3f(2.5, 0, 30);")+
//_T("      		kVR9 = new SFVec3f(3.25, 0, 34);	  	")+
//_T("	")+
//_T("	}	")+
//_T("	else ")+
//_T("	{		")+
//_T("		// level  -2 ( warp inside) Right      				")+
//_T("		kVR7 = new SFVec3f(-1.25, 0, 25);  ")+
//_T("     		kVR8 = new SFVec3f(-2.5, 0, 30);")+
//_T("      		kVR9 = new SFVec3f(-3.25, 0, 34);")+
//_T("	}")+
//_T("	// Left Fin (fixed spine)")+
//_T("	kVL1 = new SFVec3f(0, 0, 1);  ")+
//_T("     	kVL2 = new SFVec3f(0, 0, 5);")+
//_T("      	kVL3 = new SFVec3f(0, 0, 8);")+
//_T("	kVL4 = new SFVec3f(0, 0, 12); ")+
//_T("	kVL5 = new SFVec3f(0, 0, 15); 	")+
//_T("	kVL6 = new SFVec3f(0, 0, 18);			")+
//_T("      	keyValueL = new MFVec3f(kVL1, kVL2, kVL3, kVL4, kVL5, kVL6, kVL7, kVL8, kVL9);  ")+
//_T("	")+
//_T("	// Right Fin (fixed spine)")+
//_T("	kVR1 = new SFVec3f(0, 0, 1);  ")+
//_T("     	kVR2 = new SFVec3f(0, 0, 5);")+
//_T("      	kVR3 = new SFVec3f(0, 0, 8);")+
//_T("	kVR4 = new SFVec3f(0, 0, 12);  	")+
//_T("	kVR5 = new SFVec3f(0, 0, 15);")+
//_T("	kVR6 = new SFVec3f(0, 0, 18);			")+
//_T("      	keyValueR = new MFVec3f(kVR1, kVR2, kVR3, kVR4, kVR5, kVR6, kVR7, kVR8, kVR9);  ")+
//_T("      	")+
//_T("	//tracePrint ('[keyValueL = ]' + keyValueL);     ")+
//_T("	//tracePrint ('[keyValueR = ]' + keyValueR);     ")+
//_T("			")+
//_T("}")+
//_T("function set_fraction (value, timeStamp)")+
//_T("{")+
//_T("	finMove(value);")+
//_T("	//tracePrint('time fraction =' + value);")+
//_T("	")+
//_T("}")+
//_T("function tracePrint (outputString)")+
//_T("{")+
//_T("	if (traceEnabled) Browser.println ('[Fin Move]' + outputString);")+
//_T("}"));
Group193.addChild(&Script194);

fieldValue94.addChild(&Group193);

ProtoInstance& ProtoInstance201 =  ProtoInstance();
ProtoInstance201.setDEF(CString("hanim_vl1"));
ProtoInstance201.setName(CString("Joint"));
fieldValue& fieldValue202 =  fieldValue();
fieldValue202.setName(CString("center"));
fieldValue202.setValue(CString("-0.00405 1.07 -0.0275"));
ProtoInstance201.addChild(&fieldValue202);

fieldValue& fieldValue203 =  fieldValue();
fieldValue203.setName(CString("children"));
ProtoInstance& ProtoInstance204 =  ProtoInstance();
ProtoInstance204.setDEF(CString("hanim_c7"));
ProtoInstance204.setName(CString("Segment"));
fieldValue& fieldValue205 =  fieldValue();
fieldValue205.setName(CString("children"));
Transform& Transform206 =  Transform();
Transform206.setTranslation(new float[]{0.0,-0.09,0.0});
Transform206.setScale(new float[]{1.05,1.05,1.05});
Shape& Shape207 =  Shape();
Appearance& Appearance208 =  Appearance();
Material& Material209 =  Material();
Material209.setDEF(CString("WetShirtColor"));
Material209.setAmbientIntensity(0.25);
Material209.setDiffuseColor(new float[]{0.0,0.0,0.502});
Appearance208.addChild(&Material209);

ImageTexture& ImageTexture210 =  ImageTexture();
ImageTexture210.setDEF(CString("small_logo_Tex"));
ImageTexture210.setUrl(new CString[]{CString("small_logo.gif"), CString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/small_logo.gif")}, 2);
Appearance208.addChild(&ImageTexture210);

Shape207.addChild(&Appearance208);

IndexedFaceSet& IndexedFaceSet211 =  IndexedFaceSet();
IndexedFaceSet211.setCreaseAngle(1.59);
IndexedFaceSet211.setCoordIndex(new int32_t[]{0,1,2,-1,3,0,2,-1,4,5,6,-1,6,7,4,-1,8,7,6,-1,6,9,8,-1,9,10,8,-1,6,5,11,-1,9,6,12,-1,11,12,6,-1,12,10,9,-1,7,8,13,-1,13,4,7,-1,14,15,16,-1,15,17,13,-1,4,13,17,-1,17,15,18,-1,13,19,15,-1,19,13,8,-1,19,16,15,-1,16,19,8,-1,17,20,4,-1,5,4,20,-1,18,21,17,-1,20,17,21,-1,16,22,14,-1,22,16,23,-1,8,23,16,-1,23,8,10,-1,24,25,26,-1,26,27,24,-1,25,28,26,-1,28,29,30,-1,30,26,28,-1,31,32,33,-1,32,25,33,-1,25,24,34,-1,33,25,34,-1,24,35,34,-1,27,35,24,-1,33,36,31,-1,27,26,37,-1,37,26,30,-1,38,37,30,-1,33,34,39,-1,39,34,35,-1,39,35,40,-1,41,38,30,-1,35,27,42,-1,37,42,27,-1,40,35,42,-1,42,37,43,-1,37,38,44,-1,44,43,37,-1,36,45,46,-1,36,33,45,-1,40,42,47,-1,43,47,42,-1,47,48,40,-1,39,40,48,-1,47,43,49,-1,43,44,49,-1,50,49,44,-1,51,46,52,-1,46,45,52,-1,52,45,53,-1,33,53,45,-1,33,39,53,-1,49,54,47,-1,48,47,54,-1,55,56,52,-1,57,52,53,-1,57,55,52,-1,58,57,53,-1,59,58,53,-1,53,39,59,-1,39,48,59,-1,59,48,54,-1,58,59,60,-1,54,49,61,-1,59,54,61,-1,60,59,61,-1,49,50,62,-1,63,62,50,-1,62,61,49,-1,64,63,50,-1,63,64,65,-1,65,62,63,-1,66,60,61,-1,62,65,67,-1,68,67,65,-1,64,69,70,-1,64,70,65,-1,70,68,65,-1,69,71,72,-1,72,70,69,-1,73,74,75,-1,66,76,60,-1,67,77,62,-1,62,77,61,-1,77,66,61,-1,66,77,78,-1,77,67,79,-1,79,67,68,-1,79,78,77,-1,68,70,80,-1,70,72,80,-1,80,79,68,-1,74,73,81,-1,73,76,82,-1,82,81,73,-1,76,66,83,-1,78,83,66,-1,83,82,76,-1,78,79,84,-1,79,80,84,-1,84,85,78,-1,86,84,80,-1,81,82,87,-1,87,88,81,-1,82,83,89,-1,83,78,89,-1,89,87,82,-1,78,85,89,-1,90,91,92,-1,92,93,90,-1,90,94,91,-1,95,96,94,-1,94,90,95,-1,29,96,97,-1,96,95,97,-1,97,30,29,-1,30,97,41,-1,41,97,95,-1,98,99,100,-1,98,91,99,-1,101,92,91,-1,98,101,91,-1,101,102,92,-1,92,102,93,-1,36,103,31,-1,51,103,36,46,-1,103,100,31,-1,100,103,98,-1,104,90,93,-1,90,104,95,-1,95,105,41,-1,104,105,95,-1,106,101,98,-1,102,101,106,-1,107,93,102,-1,93,107,104,-1,108,104,107,-1,107,109,108,-1,110,105,104,-1,104,108,110,-1,109,107,111,-1,107,102,111,-1,111,102,106,-1,111,112,109,-1,106,112,111,-1,113,110,108,-1,110,113,114,-1,51,52,115,-1,116,115,117,-1,117,106,116,-1,118,109,112,-1,119,108,109,-1,108,119,113,-1,109,118,119,-1,120,113,119,-1,119,121,120,-1,52,56,122,-1,122,115,52,-1,115,122,123,-1,117,124,125,-1,106,117,125,-1,118,112,106,125,-1,119,118,125,-1,121,119,125,-1,126,124,123,-1,127,114,113,-1,114,127,128,-1,113,120,127,-1,114,128,129,-1,130,126,123,-1,122,130,123,-1,131,120,121,-1,131,127,120,-1,132,129,128,-1,128,127,132,-1,74,81,133,-1,81,134,133,-1,121,135,131,-1,136,132,127,-1,132,136,137,-1,138,71,129,-1,138,129,132,-1,137,138,132,-1,139,72,71,-1,72,139,80,-1,71,138,139,-1,140,135,121,-1,140,121,125,-1,141,127,131,-1,127,141,136,-1,131,135,141,-1,142,141,135,-1,143,136,141,-1,136,143,137,-1,141,142,143,-1,144,138,137,-1,144,139,138,-1,143,144,137,-1,145,146,134,-1,145,140,146,-1,134,81,145,-1,147,135,140,-1,135,147,142,-1,140,145,147,-1,148,80,139,-1,80,148,86,-1,139,144,148,-1,149,143,142,-1,149,144,143,-1,142,150,149,-1,151,148,144,-1,144,149,151,-1,152,145,81,-1,81,88,152,-1,153,147,145,-1,153,142,147,-1,145,152,153,-1,153,150,142,-1,154,86,148,-1,148,151,154,-1,155,28,25,-1,155,29,28,-1,155,25,32,-1,155,32,31,-1,155,31,100,-1,155,100,99,-1,155,99,91,-1,155,91,94,-1,155,94,96,-1,155,96,29,-1,156,151,149,-1,156,154,151,-1,156,149,150,-1,156,150,153,-1,156,153,152,-1,156,152,88,-1,156,88,87,-1,156,87,89,-1,156,89,85,-1,156,85,84,-1,156,84,86,-1,156,86,154,-1,76,157,60,-1,76,73,158,157,-1,159,158,73,75,160,-1,161,56,55,-1,60,162,58,-1,162,60,157,-1,161,55,163,-1,57,164,163,55,-1,160,163,164,-1,160,164,159,-1,164,57,165,-1,164,165,159,-1,57,58,166,165,-1,166,58,162,-1,165,166,159,-1,166,162,157,158,159,-1,140,125,167,-1,124,168,125,-1,168,167,125,-1,124,169,168,-1,146,140,167,170,-1,168,170,167,-1,168,169,170,-1,146,170,171,-1,169,171,170,-1,172,134,146,171,-1,134,172,130,-1,169,124,126,173,-1,173,126,130,-1,169,173,172,171,-1,173,130,172,-1,122,74,133,174,-1,133,134,174,-1,130,122,174,-1,134,130,174,-1,122,56,175,74,-1,74,175,176,-1,175,56,161,176,-1,74,176,75,-1,176,161,163,-1,176,160,75,-1,176,163,160,-1,115,116,177,51,-1,106,98,177,116,-1,51,177,103,-1,177,98,103,-1}, 1234);
TextureCoordinate& TextureCoordinate212 =  TextureCoordinate();
TextureCoordinate212.setPoint(new float[]{0.1611,-0.02056,0.9468,-0.02056,0.9739,0.9344,-0.137,1.094,0.1973,0.6424,0.2231,0.04876,0.5054,0.2466,0.5054,0.5929,0.8135,0.6424,0.6282,0.1972,0.7876,0.04876,0.5054,-0.05018,0.6282,-0.05018,0.5054,0.8403,0.7989,1.038,0.5054,1.038,0.8248,0.7908,0.186,0.7908,0.2118,1.038,0.6427,0.7908,-0.01977,0.5929,-0.03324,0.7908,1.044,0.7908,1.031,0.5929,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 356);
IndexedFaceSet211.setTexCoord(&TextureCoordinate212);

Coordinate& Coordinate213 =  Coordinate();
Coordinate213.setPoint(new float[]{0.043,1.25,0.0614,0.101,1.25,0.0614,0.103,1.31,0.0195,0.021,1.32,0.0276,0.0572,1.27,-0.153,0.0524,1.15,-0.134,0.0,1.19,-0.14,0.0,1.26,-0.147,-0.0572,1.27,-0.153,-0.0228,1.18,-0.14,-0.0524,1.15,-0.134,0.0,1.13,-0.126,-0.0228,1.13,-0.124,0.0,1.31,-0.146,-0.0545,1.35,-0.138,0.0,1.35,-0.136,-0.0593,1.3,-0.151,0.0593,1.3,-0.151,0.0545,1.35,-0.138,-0.0255,1.3,-0.146,0.0975,1.26,-0.15,0.1,1.3,-0.148,-0.1,1.3,-0.148,-0.0975,1.26,-0.15,-0.117,1.41,-0.0395,-0.0674,1.45,-0.0314,-0.0926,1.41,-0.0937,-0.124,1.4,-0.0706,-0.0583,1.44,-0.0615,-0.0228,1.46,-0.0872,-0.0534,1.42,-0.112,-0.0228,1.42,0.00351,-0.0593,1.43,-0.0185,-0.0787,1.39,-0.00293,-0.112,1.4,-0.0131,-0.164,1.39,-0.0373,-0.0153,1.39,0.0159,-0.0953,1.35,-0.136,-0.0545,1.35,-0.138,-0.139,1.34,0.00297,-0.137,1.34,-0.0368,0.0,1.35,-0.136,-0.156,1.35,-0.0915,-0.132,1.29,-0.127,-0.1,1.3,-0.148,-0.0418,1.35,0.0168,-0.013,1.37,0.0167,-0.151,1.28,-0.0878,-0.136,1.32,-0.0406,-0.124,1.26,-0.125,-0.0975,1.26,-0.15,0.00228,1.37,0.0167,-0.00959,1.32,0.0276,-0.0918,1.31,0.0195,-0.141,1.25,-0.0744,-0.0316,1.25,0.0614,-0.00261,1.25,0.0458,-0.0611,1.25,0.0668,-0.0896,1.25,0.0614,-0.126,1.24,0.012,-0.126,1.22,0.0141,-0.129,1.17,-0.0523,-0.115,1.16,-0.105,-0.0851,1.18,-0.134,-0.0524,1.15,-0.134,-0.083,1.13,-0.122,-0.117,1.15,-0.018,-0.11,1.1,-0.0846,-0.0808,1.1,-0.111,-0.0228,1.13,-0.124,-0.0524,1.1,-0.119,0.0,1.13,-0.126,-0.0228,1.1,-0.116,-0.0563,1.15,0.0377,-0.00476,1.18,0.0458,-0.0343,1.18,0.0485,-0.0966,1.15,-0.00413,-0.12,1.1,-0.0373,-0.121,1.07,-0.0356,-0.106,1.07,-0.0711,-0.0475,1.06,-0.105,0.0,1.08,0.0556,-0.0787,1.08,0.0347,-0.103,1.08,0.00296,-0.0975,1.01,-0.0873,-0.134,0.998,-0.0314,-0.0475,1.02,-0.109,-0.0325,1.02,0.0529,0.0,1.02,0.0422,-0.0975,1.02,0.0132,0.0926,1.41,-0.0937,0.0674,1.45,-0.0314,0.117,1.41,-0.0395,0.124,1.4,-0.0706,0.0583,1.44,-0.0615,0.0534,1.42,-0.112,0.0228,1.46,-0.0872,0.0,1.4,-0.112,0.0787,1.39,-0.00293,0.0593,1.43,-0.0185,0.0228,1.42,0.00351,0.112,1.4,-0.0131,0.164,1.39,-0.0373,0.0153,1.39,0.0159,0.0953,1.35,-0.136,0.0545,1.35,-0.138,0.139,1.34,0.00297,0.156,1.35,-0.0915,0.132,1.29,-0.127,0.151,1.28,-0.0878,0.1,1.3,-0.148,0.137,1.34,-0.0368,0.147,1.32,-0.0406,0.124,1.26,-0.125,0.0975,1.26,-0.15,0.021,1.32,0.0276,0.0532,1.35,0.0168,0.103,1.31,0.0195,0.135,1.29,-0.0406,0.141,1.25,-0.0744,0.132,1.18,-0.083,0.134,1.19,-0.0572,0.014,1.25,0.0458,0.043,1.25,0.0614,0.101,1.25,0.0614,0.138,1.24,0.012,0.065,1.23,0.0743,0.115,1.16,-0.105,0.0851,1.18,-0.134,0.0524,1.15,-0.134,0.043,1.2,0.0641,0.127,1.14,-0.0427,0.083,1.13,-0.122,0.0162,1.18,0.0458,0.0457,1.18,0.0485,0.117,1.15,-0.018,0.11,1.1,-0.0846,0.0808,1.1,-0.111,0.0524,1.1,-0.119,0.0228,1.1,-0.116,0.108,1.15,-0.00413,0.12,1.1,-0.0373,0.121,1.07,-0.0356,0.106,1.07,-0.0711,0.0475,1.06,-0.105,0.0787,1.08,0.0347,0.0844,1.15,0.0297,0.103,1.08,0.00296,0.0,1.07,-0.11,0.0975,1.01,-0.0873,0.134,0.998,-0.0475,0.0475,1.02,-0.109,0.0325,1.02,0.0529,0.0975,1.02,0.0132,0.0,1.02,-0.117,0.0,1.44,-0.0389,0.0,1.01,-0.0259,-0.104,1.19,0.0423,-0.0778,1.19,0.0642,-0.078,1.19,0.0644,-0.0493,1.2,0.0664,-0.0281,1.22,0.0587,-0.104,1.2,0.0568,-0.0484,1.21,0.0692,-0.0549,1.21,0.0708,-0.0806,1.21,0.0713,-0.0852,1.21,0.0703,0.116,1.19,0.043,0.114,1.21,0.0572,0.0967,1.21,0.0701,0.11,1.19,0.0502,0.093,1.19,0.0622,0.0832,1.19,0.0662,0.0863,1.21,0.0728,0.0154,1.21,0.0458,-0.00393,1.21,0.0458,-0.0145,1.2,0.0512,0.0534,1.35,0.0168}, 534);
IndexedFaceSet211.setCoord(&Coordinate213);

Shape207.setGeometry(&IndexedFaceSet211);

Transform206.addChild(&Shape207);

fieldValue205.addChild(&Transform206);

Transform& Transform214 =  Transform();
Transform214.setTranslation(new float[]{0.0,1.18,0.015});
Transform214.setScale(new float[]{1.25,1.1,1.3});
Group& Group215 =  Group();
Transform& Transform216 =  Transform();
Transform216.setTranslation(new float[]{0.0,-1.2,0.0});
Shape& Shape217 =  Shape();
Appearance& Appearance218 =  Appearance();
Material& Material219 =  Material();
Material219.setDEF(CString("BCLColor"));
Material219.setAmbientIntensity(0.25);
Material219.setDiffuseColor(new float[]{0.0588,0.0588,0.0588});
Material219.setShininess(0.5);
Appearance218.addChild(&Material219);

Shape217.addChild(&Appearance218);

IndexedFaceSet& IndexedFaceSet220 =  IndexedFaceSet();
IndexedFaceSet220.setSolid(false);
IndexedFaceSet220.setCreaseAngle(1.59);
IndexedFaceSet220.setCoordIndex(new int32_t[]{4,5,6,-1,6,7,4,-1,8,7,6,-1,6,9,8,-1,9,10,8,-1,6,5,11,-1,9,6,12,-1,11,12,6,-1,12,10,9,-1,7,8,13,-1,13,4,7,-1,14,15,16,-1,15,17,13,-1,4,13,17,-1,17,15,18,-1,13,19,15,-1,19,13,8,-1,19,16,15,-1,16,19,8,-1,17,20,4,-1,5,4,20,-1,18,21,17,-1,20,17,21,-1,16,22,14,-1,22,16,23,-1,8,23,16,-1,23,8,10,-1,24,25,26,-1,26,27,24,-1,25,28,26,-1,28,29,30,-1,30,26,28,-1,25,24,34,-1,33,25,34,-1,24,35,34,-1,27,35,24,-1,27,26,37,-1,37,26,30,-1,38,37,30,-1,33,34,39,-1,39,34,35,-1,41,38,30,-1,35,27,42,-1,37,42,27,-1,42,37,43,-1,37,38,44,-1,44,43,37,-1,43,47,42,-1,47,43,49,-1,43,44,49,-1,50,49,44,-1,33,39,53,-1,49,54,47,-1,59,58,53,-1,53,39,59,-1,58,59,60,-1,54,49,61,-1,49,50,62,-1,63,62,50,-1,62,61,49,-1,64,63,50,-1,63,64,65,-1,65,62,63,-1,66,60,61,-1,62,65,67,-1,68,67,65,-1,64,69,70,-1,64,70,65,-1,70,68,65,-1,69,71,72,-1,72,70,69,-1,66,76,60,-1,67,77,62,-1,62,77,61,-1,77,66,61,-1,66,77,78,-1,77,67,79,-1,79,67,68,-1,79,78,77,-1,68,70,80,-1,70,72,80,-1,80,79,68,-1,73,76,82,-1,76,66,83,-1,78,83,66,-1,83,82,76,-1,78,79,84,-1,79,80,84,-1,84,85,78,-1,86,84,80,-1,82,83,89,-1,83,78,89,-1,89,87,82,-1,78,85,89,-1,90,91,92,-1,92,93,90,-1,90,94,91,-1,95,96,94,-1,94,90,95,-1,29,96,97,-1,96,95,97,-1,97,30,29,-1,30,97,41,-1,41,97,95,-1,101,92,91,-1,98,101,91,-1,101,102,92,-1,92,102,93,-1,104,90,93,-1,90,104,95,-1,95,105,41,-1,104,105,95,-1,106,101,98,-1,102,101,106,-1,107,93,102,-1,93,107,104,-1,108,104,107,-1,107,109,108,-1,110,105,104,-1,104,108,110,-1,113,110,108,-1,110,113,114,-1,119,108,109,-1,108,119,113,-1,120,113,119,-1,119,121,120,-1,117,124,125,-1,106,117,125,-1,127,114,113,-1,114,127,128,-1,113,120,127,-1,114,128,129,-1,131,120,121,-1,131,127,120,-1,132,129,128,-1,128,127,132,-1,121,135,131,-1,136,132,127,-1,132,136,137,-1,138,71,129,-1,138,129,132,-1,137,138,132,-1,139,72,71,-1,72,139,80,-1,71,138,139,-1,140,135,121,-1,140,121,125,-1,141,127,131,-1,127,141,136,-1,131,135,141,-1,142,141,135,-1,143,136,141,-1,136,143,137,-1,141,142,143,-1,144,138,137,-1,144,139,138,-1,143,144,137,-1,145,140,146,-1,147,135,140,-1,135,147,142,-1,140,145,147,-1,148,80,139,-1,80,148,86,-1,139,144,148,-1,149,143,142,-1,149,144,143,-1,142,150,149,-1,151,148,144,-1,144,149,151,-1,153,147,145,-1,153,142,147,-1,145,152,153,-1,153,150,142,-1,154,86,148,-1,148,151,154,-1,76,157,60,-1,76,73,158,157,-1,60,162,58,-1,162,60,157,-1,166,58,162,-1,165,166,159,-1,166,162,157,158,159,-1,140,125,167,-1,124,168,125,-1,168,167,125,-1,124,169,168,-1,146,140,167,170,-1,168,170,167,-1,168,169,170,-1,146,170,171,-1,169,171,170,-1,98,117,106,-1}, 772);
TextureCoordinate& TextureCoordinate221 =  TextureCoordinate();
TextureCoordinate221.setPoint(new float[]{0.1611,-0.02056,0.9468,-0.02056,0.9739,0.9344,-0.137,1.094,0.1973,0.6424,0.2231,0.04876,0.5054,0.2466,0.5054,0.5929,0.8135,0.6424,0.6282,0.1972,0.7876,0.04876,0.5054,-0.05018,0.6282,-0.05018,0.5054,0.8403,0.7989,1.038,0.5054,1.038,0.8248,0.7908,0.186,0.7908,0.2118,1.038,0.6427,0.7908,-0.01977,0.5929,-0.03324,0.7908,1.044,0.7908,1.031,0.5929,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 356);
IndexedFaceSet220.setTexCoord(&TextureCoordinate221);

Coordinate& Coordinate222 =  Coordinate();
Coordinate222.setPoint(new float[]{0.043,1.25,0.0614,0.101,1.25,0.0614,0.103,1.31,0.0195,0.021,1.32,0.0276,0.0572,1.27,-0.153,0.0524,1.15,-0.134,0.0,1.19,-0.14,0.0,1.26,-0.147,-0.0572,1.27,-0.153,-0.0228,1.18,-0.14,-0.0524,1.15,-0.134,0.0,1.13,-0.126,-0.0228,1.13,-0.124,0.0,1.31,-0.146,-0.0545,1.35,-0.138,0.0,1.35,-0.136,-0.0593,1.3,-0.151,0.0593,1.3,-0.151,0.0545,1.35,-0.138,-0.0255,1.3,-0.146,0.0975,1.26,-0.15,0.1,1.3,-0.148,-0.1,1.3,-0.148,-0.0975,1.26,-0.15,-0.117,1.41,-0.0395,-0.0674,1.45,-0.0314,-0.0926,1.41,-0.0937,-0.124,1.4,-0.0706,-0.0583,1.44,-0.0615,-0.0228,1.46,-0.0872,-0.0534,1.42,-0.112,-0.0228,1.42,0.00351,-0.0593,1.43,-0.0185,-0.0787,1.39,-0.00293,-0.112,1.4,-0.0131,-0.164,1.39,-0.0373,-0.0153,1.39,0.0159,-0.0953,1.35,-0.136,-0.0545,1.35,-0.138,-0.139,1.34,0.00297,-0.137,1.34,-0.0368,0.0,1.35,-0.136,-0.156,1.35,-0.0915,-0.132,1.29,-0.127,-0.1,1.3,-0.148,-0.0418,1.35,0.0168,-0.013,1.37,0.0167,-0.151,1.28,-0.0878,-0.136,1.32,-0.0406,-0.124,1.26,-0.125,-0.0975,1.26,-0.15,0.00228,1.37,0.0167,-0.00959,1.32,0.0276,-0.0918,1.31,0.0195,-0.141,1.25,-0.0744,-0.0316,1.25,0.0614,-0.00261,1.25,0.0458,-0.0611,1.25,0.0668,-0.0896,1.25,0.0614,-0.126,1.24,0.012,-0.126,1.22,0.0141,-0.129,1.17,-0.0523,-0.115,1.16,-0.105,-0.0851,1.18,-0.134,-0.0524,1.15,-0.134,-0.083,1.13,-0.122,-0.117,1.15,-0.018,-0.11,1.1,-0.0846,-0.0808,1.1,-0.111,-0.0228,1.13,-0.124,-0.0524,1.1,-0.119,0.0,1.13,-0.126,-0.0228,1.1,-0.116,-0.0563,1.15,0.0377,-0.00476,1.18,0.0458,-0.0343,1.18,0.0485,-0.0966,1.15,-0.00413,-0.12,1.1,-0.0373,-0.121,1.07,-0.0356,-0.106,1.07,-0.0711,-0.0475,1.06,-0.105,0.0,1.08,0.0556,-0.0787,1.08,0.0347,-0.103,1.08,0.00296,-0.0975,1.01,-0.0873,-0.134,0.998,-0.0314,-0.0475,1.02,-0.109,-0.0325,1.02,0.0529,0.0,1.02,0.0422,-0.0975,1.02,0.0132,0.0926,1.41,-0.0937,0.0674,1.45,-0.0314,0.117,1.41,-0.0395,0.124,1.4,-0.0706,0.0583,1.44,-0.0615,0.0534,1.42,-0.112,0.0228,1.46,-0.0872,0.0,1.4,-0.112,0.0787,1.39,-0.00293,0.0593,1.43,-0.0185,0.0228,1.42,0.00351,0.112,1.4,-0.0131,0.164,1.39,-0.0373,0.0153,1.39,0.0159,0.0953,1.35,-0.136,0.0545,1.35,-0.138,0.139,1.34,0.00297,0.156,1.35,-0.0915,0.132,1.29,-0.127,0.151,1.28,-0.0878,0.1,1.3,-0.148,0.137,1.34,-0.0368,0.147,1.32,-0.0406,0.124,1.26,-0.125,0.0975,1.26,-0.15,0.021,1.32,0.0276,0.0532,1.35,0.0168,0.103,1.31,0.0195,0.135,1.29,-0.0406,0.141,1.25,-0.0744,0.132,1.18,-0.083,0.134,1.19,-0.0572,0.014,1.25,0.0458,0.043,1.25,0.0614,0.101,1.25,0.0614,0.138,1.24,0.012,0.065,1.23,0.0743,0.115,1.16,-0.105,0.0851,1.18,-0.134,0.0524,1.15,-0.134,0.043,1.2,0.0641,0.127,1.14,-0.0427,0.083,1.13,-0.122,0.0162,1.18,0.0458,0.0457,1.18,0.0485,0.117,1.15,-0.018,0.11,1.1,-0.0846,0.0808,1.1,-0.111,0.0524,1.1,-0.119,0.0228,1.1,-0.116,0.108,1.15,-0.00413,0.12,1.1,-0.0373,0.121,1.07,-0.0356,0.106,1.07,-0.0711,0.0475,1.06,-0.105,0.0787,1.08,0.0347,0.0844,1.15,0.0297,0.103,1.08,0.00296,0.0,1.07,-0.11,0.0975,1.01,-0.0873,0.134,0.998,-0.0475,0.0475,1.02,-0.109,0.0325,1.02,0.0529,0.0975,1.02,0.0132,0.0,1.02,-0.117,0.0,1.44,-0.0389,0.0,1.01,-0.0259,-0.104,1.19,0.0423,-0.0778,1.19,0.0642,-0.078,1.19,0.0644,-0.0493,1.2,0.0664,-0.0281,1.22,0.0587,-0.104,1.2,0.0568,-0.0484,1.21,0.0692,-0.0549,1.21,0.0708,-0.0806,1.21,0.0713,-0.0852,1.21,0.0703,0.116,1.19,0.043,0.114,1.21,0.0572,0.0967,1.21,0.0701,0.11,1.19,0.0502,0.093,1.19,0.0622,0.0832,1.19,0.0662,0.0863,1.21,0.0728,0.0154,1.21,0.0458,-0.00393,1.21,0.0458,-0.0145,1.2,0.0512,0.0534,1.35,0.0168}, 534);
IndexedFaceSet220.setCoord(&Coordinate222);

Shape217.setGeometry(&IndexedFaceSet220);

Transform216.addChild(&Shape217);

Group215.addChild(&Transform216);

Transform& Transform223 =  Transform();
Transform223.setTranslation(new float[]{0.13,0.22,-0.1});
Transform223.setRotation(new float[]{0.0,0.0,1.0,1.57});
Transform223.setScale(new float[]{2.0,1.5,1.5});
Transform& Transform224 =  Transform();
Transform224.setRotation(new float[]{1.0,0.0,0.0,1.4});
Shape& Shape225 =  Shape();
Shape225.setDEF(CString("BCLSnorkelPad"));
Appearance& Appearance226 =  Appearance();
Material& Material227 =  Material();
Material227.setUSE(CString("BCLColor"));
Appearance226.addChild(&Material227);

Shape225.addChild(&Appearance226);

Extrusion& Extrusion228 =  Extrusion();
Extrusion228.setCrossSection(new float[]{0.0,0.013,0.00494,0.01196,0.00923,0.00923,0.01196,0.00494,0.013,0.0,0.01196,-0.00494,0.00923,-0.00923,0.00494,-0.01196,0.0,0.013}, 18);
Extrusion228.setSpine(new float[]{-0.03,0.01,0.0,-0.005,0.04,0.0,0.0,0.06,0.0,-0.01,0.075,0.0}, 12);
Shape225.setGeometry(&Extrusion228);

Transform224.addChild(&Shape225);

Transform223.addChild(&Transform224);

Group215.addChild(&Transform223);

Transform& Transform229 =  Transform();
Transform229.setTranslation(new float[]{0.07,0.08,0.125});
Transform229.setRotation(new float[]{-1.0,0.0,0.0,0.8});
Shape& Shape230 =  Shape();
Appearance& Appearance231 =  Appearance();
Material& Material232 =  Material();
Material232.setDEF(CString("BCLSnorkel"));
Material232.setDiffuseColor(new float[]{0.25,0.25,0.25});
Material232.setShininess(0.5);
Material232.setTransparency(0.1);
Appearance231.addChild(&Material232);

Shape230.addChild(&Appearance231);

Extrusion& Extrusion233 =  Extrusion();
Extrusion233.setCrossSection(new float[]{0.0,0.013,0.00494,0.01196,0.00923,0.00923,0.01196,0.00494,0.013,0.0,0.01196,-0.00494,0.00923,-0.00923,0.00494,-0.01196,0.0,0.013,-0.00494,-0.01196,-0.00923,-0.00923,-0.01196,-0.00494,-0.013,0.0,-0.01196,0.00494,-0.00923,0.00923,-0.00494,0.01196,0.0,0.013}, 34);
Extrusion233.setScale(new float[]{0.8,0.8,1.0,1.0}, 4);
Extrusion233.setSpine(new float[]{0.03,0.03,-0.05,0.05,0.2,0.0}, 6);
Shape230.setGeometry(&Extrusion233);

Transform229.addChild(&Shape230);

Group215.addChild(&Transform229);

Group& Group234 =  Group();
Group234.setDEF(CString("buckle"));
Transform& Transform235 =  Transform();
Transform235.setTranslation(new float[]{-0.08,0.1,0.029});
Transform235.setRotation(new float[]{-1.0,0.0,0.0,0.68});
Shape& Shape236 =  Shape();
Appearance& Appearance237 =  Appearance();
Appearance237.setDEF(CString("buckleHolder"));
Material& Material238 =  Material();
Material238.setDiffuseColor(new float[]{0.25,0.25,0.25});
Appearance237.addChild(&Material238);

Shape236.addChild(&Appearance237);

Box& Box239 =  Box();
Box239.setSize(new float[]{0.03,0.03,0.005});
Shape236.setGeometry(&Box239);

Transform235.addChild(&Shape236);

Group234.addChild(&Transform235);

Transform& Transform240 =  Transform();
Transform240.setTranslation(new float[]{0.03,0.1,0.027});
Transform240.setRotation(new float[]{-1.0,0.0,0.0,0.68});
Shape& Shape241 =  Shape();
Appearance& Appearance242 =  Appearance();
Appearance242.setUSE(CString("buckleHolder"));
Shape241.addChild(&Appearance242);

Box& Box243 =  Box();
Box243.setSize(new float[]{0.15,0.03,0.001});
Shape241.setGeometry(&Box243);

Transform240.addChild(&Shape241);

Group234.addChild(&Transform240);

Transform& Transform244 =  Transform();
Transform244.setTranslation(new float[]{-0.045,0.1,0.028});
Transform244.setRotation(new float[]{-1.0,0.0,0.0,0.68});
Shape& Shape245 =  Shape();
Appearance& Appearance246 =  Appearance();
Appearance246.setDEF(CString("pin"));
Material& Material247 =  Material();
Appearance246.addChild(&Material247);

Shape245.addChild(&Appearance246);

Box& Box248 =  Box();
Box248.setSize(new float[]{0.02,0.028,0.005});
Shape245.setGeometry(&Box248);

Transform244.addChild(&Shape245);

Group234.addChild(&Transform244);

Transform& Transform249 =  Transform();
Transform249.setTranslation(new float[]{-0.06,0.1,0.029});
Transform249.setRotation(new float[]{0.0,0.0,1.0,1.57});
Shape& Shape250 =  Shape();
Appearance& Appearance251 =  Appearance();
Appearance251.setUSE(CString("pin"));
Shape250.addChild(&Appearance251);

Cylinder& Cylinder252 =  Cylinder();
Cylinder252.setHeight(0.02);
Cylinder252.setRadius(0.0024);
Shape250.setGeometry(&Cylinder252);

Transform249.addChild(&Shape250);

Group234.addChild(&Transform249);

Transform& Transform253 =  Transform();
Transform253.setTranslation(new float[]{-0.06,0.109,0.0217});
Transform253.setRotation(new float[]{0.0,0.0,1.0,1.57});
Shape& Shape254 =  Shape();
Appearance& Appearance255 =  Appearance();
Appearance255.setUSE(CString("pin"));
Shape254.addChild(&Appearance255);

Cylinder& Cylinder256 =  Cylinder();
Cylinder256.setHeight(0.02);
Cylinder256.setRadius(0.0024);
Shape254.setGeometry(&Cylinder256);

Transform253.addChild(&Shape254);

Group234.addChild(&Transform253);

Transform& Transform257 =  Transform();
Transform257.setTranslation(new float[]{-0.06,0.091,0.036});
Transform257.setRotation(new float[]{0.0,0.0,1.0,1.57});
Shape& Shape258 =  Shape();
Appearance& Appearance259 =  Appearance();
Appearance259.setUSE(CString("pin"));
Shape258.addChild(&Appearance259);

Cylinder& Cylinder260 =  Cylinder();
Cylinder260.setHeight(0.02);
Cylinder260.setRadius(0.0024);
Shape258.setGeometry(&Cylinder260);

Transform257.addChild(&Shape258);

Group234.addChild(&Transform257);

Group215.addChild(&Group234);

Group& Group261 =  Group();
Group261.setDEF(CString("buckleBelt"));
Transform& Transform262 =  Transform();
Transform262.setTranslation(new float[]{-0.07,-0.12,0.038});
Transform262.setRotation(new float[]{0.0,1.0,0.0,-0.68});
Shape& Shape263 =  Shape();
Appearance& Appearance264 =  Appearance();
Appearance264.setUSE(CString("buckleHolder"));
Shape263.addChild(&Appearance264);

Box& Box265 =  Box();
Box265.setSize(new float[]{0.04,0.1,0.005});
Shape263.setGeometry(&Box265);

Transform262.addChild(&Shape263);

Group261.addChild(&Transform262);

Transform& Transform266 =  Transform();
Transform266.setTranslation(new float[]{0.005,-0.12,0.053});
Shape& Shape267 =  Shape();
Appearance& Appearance268 =  Appearance();
Appearance268.setUSE(CString("buckleHolder"));
Shape267.addChild(&Appearance268);

Box& Box269 =  Box();
Box269.setSize(new float[]{0.12,0.11,0.001});
Shape267.setGeometry(&Box269);

Transform266.addChild(&Shape267);

Group261.addChild(&Transform266);

Transform& Transform270 =  Transform();
Transform270.setTranslation(new float[]{0.075,-0.12,0.038});
Transform270.setRotation(new float[]{0.0,1.0,0.0,0.68});
Shape& Shape271 =  Shape();
Appearance& Appearance272 =  Appearance();
Appearance272.setUSE(CString("buckleHolder"));
Shape271.addChild(&Appearance272);

Box& Box273 =  Box();
Box273.setSize(new float[]{0.04,0.1,0.005});
Shape271.setGeometry(&Box273);

Transform270.addChild(&Shape271);

Group261.addChild(&Transform270);

Group215.addChild(&Group261);

Transform214.addChild(&Group215);

fieldValue205.addChild(&Transform214);

Transform& Transform274 =  Transform();
Transform274.setDEF(CString("ScubaTank"));
Transform274.setTranslation(new float[]{0.0,1.1,-0.23});
Transform274.setRotation(new float[]{0.0,1.0,0.0,3.14});
Transform274.setScale(new float[]{0.8,0.8,0.8});
Transform& Transform275 =  Transform();
Shape& Shape276 =  Shape();
Appearance& Appearance277 =  Appearance();
Material& Material278 =  Material();
Material278.setDEF(CString("tank"));
Material278.setAmbientIntensity(0.3);
Material278.setDiffuseColor(new float[]{0.3,0.3,0.5});
Material278.setSpecularColor(new float[]{0.7,0.7,0.8});
Material278.setShininess(0.1);
Appearance277.addChild(&Material278);

Shape276.addChild(&Appearance277);

Cylinder& Cylinder279 =  Cylinder();
Cylinder279.setHeight(0.7);
Cylinder279.setRadius(0.1);
Shape276.setGeometry(&Cylinder279);

Transform275.addChild(&Shape276);

Transform274.addChild(&Transform275);

Transform& Transform280 =  Transform();
Transform280.setTranslation(new float[]{0.0,0.35,0.0});
Shape& Shape281 =  Shape();
Appearance& Appearance282 =  Appearance();
Material& Material283 =  Material();
Material283.setUSE(CString("tank"));
Appearance282.addChild(&Material283);

Shape281.addChild(&Appearance282);

Sphere& Sphere284 =  Sphere();
Sphere284.setRadius(0.098);
Shape281.setGeometry(&Sphere284);

Transform280.addChild(&Shape281);

Transform274.addChild(&Transform280);

Transform& Transform285 =  Transform();
Transform285.setTranslation(new float[]{0.0,-0.35,0.0});
Shape& Shape286 =  Shape();
Shape286.setDEF(CString("tankBottom"));
Appearance& Appearance287 =  Appearance();
Material& Material288 =  Material();
Material288.setAmbientIntensity(0.3);
Material288.setDiffuseColor(new float[]{0.0,0.0,0.0});
Appearance287.addChild(&Material288);

Shape286.addChild(&Appearance287);

Cylinder& Cylinder289 =  Cylinder();
Cylinder289.setHeight(0.06);
Cylinder289.setRadius(0.101);
Shape286.setGeometry(&Cylinder289);

Transform285.addChild(&Shape286);

Transform274.addChild(&Transform285);

Group& Group290 =  Group();
Group290.setDEF(CString("tankNozzle"));
Transform& Transform291 =  Transform();
Transform& Transform292 =  Transform();
Transform292.setTranslation(new float[]{0.0,0.45,0.0});
Shape& Shape293 =  Shape();
Shape293.setDEF(CString("pressure"));
Appearance& Appearance294 =  Appearance();
Material& Material295 =  Material();
Material295.setDEF(CString("pressureColor"));
Material295.setAmbientIntensity(0.4);
Material295.setDiffuseColor(new float[]{0.91,0.91,0.91});
Material295.setSpecularColor(new float[]{0.91,0.9,0.91});
Material295.setShininess(0.16);
Appearance294.addChild(&Material295);

Shape293.addChild(&Appearance294);

Cylinder& Cylinder296 =  Cylinder();
Cylinder296.setHeight(0.1);
Cylinder296.setRadius(0.015);
Shape293.setGeometry(&Cylinder296);

Transform292.addChild(&Shape293);

Transform291.addChild(&Transform292);

Transform& Transform297 =  Transform();
Transform297.setTranslation(new float[]{0.0,0.5,0.0});
Shape& Shape298 =  Shape();
Shape298.setDEF(CString("pressureTop"));
Appearance& Appearance299 =  Appearance();
Material& Material300 =  Material();
Material300.setDEF(CString("top"));
Material300.setDiffuseColor(new float[]{0.0,0.0,0.0});
Appearance299.addChild(&Material300);

Shape298.addChild(&Appearance299);

Cylinder& Cylinder301 =  Cylinder();
Cylinder301.setHeight(0.02);
Cylinder301.setRadius(0.025);
Shape298.setGeometry(&Cylinder301);

Transform297.addChild(&Shape298);

Transform291.addChild(&Transform297);

Transform& Transform302 =  Transform();
Transform302.setTranslation(new float[]{-0.028,0.462,0.0});
Transform302.setRotation(new float[]{0.0,0.0,1.0,1.57});
Transform& Transform303 =  Transform();
Shape& Shape304 =  Shape();
Shape304.setDEF(CString("connectorToRegulator"));
Appearance& Appearance305 =  Appearance();
Material& Material306 =  Material();
Material306.setUSE(CString("pressureColor"));
Appearance305.addChild(&Material306);

Shape304.addChild(&Appearance305);

Cylinder& Cylinder307 =  Cylinder();
Cylinder307.setHeight(0.03);
Cylinder307.setRadius(0.01);
Shape304.setGeometry(&Cylinder307);

Transform303.addChild(&Shape304);

Transform302.addChild(&Transform303);

Transform& Transform308 =  Transform();
Transform308.setTranslation(new float[]{0.0,0.02,0.0});
Shape& Shape309 =  Shape();
Shape309.setDEF(CString("connectorToRegulatorTop"));
Appearance& Appearance310 =  Appearance();
Material& Material311 =  Material();
Material311.setUSE(CString("top"));
Appearance310.addChild(&Material311);

Shape309.addChild(&Appearance310);

Cylinder& Cylinder312 =  Cylinder();
Cylinder312.setHeight(0.02);
Cylinder312.setRadius(0.02);
Shape309.setGeometry(&Cylinder312);

Transform308.addChild(&Shape309);

Transform302.addChild(&Transform308);

Transform291.addChild(&Transform302);

Group290.addChild(&Transform291);

Transform274.addChild(&Group290);

Transform& Transform313 =  Transform();
Transform313.setTranslation(new float[]{0.0,0.2,0.0});
Shape& Shape314 =  Shape();
Shape314.setDEF(CString("tankHoldBelt"));
Appearance& Appearance315 =  Appearance();
Material& Material316 =  Material();
Material316.setAmbientIntensity(0.3);
Material316.setDiffuseColor(new float[]{0.0,0.0,0.0});
Appearance315.addChild(&Material316);

Shape314.addChild(&Appearance315);

Cylinder& Cylinder317 =  Cylinder();
Cylinder317.setHeight(0.1);
Cylinder317.setRadius(0.115);
Shape314.setGeometry(&Cylinder317);

Transform313.addChild(&Shape314);

Transform274.addChild(&Transform313);

fieldValue205.addChild(&Transform274);

ProtoInstance204.addChild(&fieldValue205);

fieldValue& fieldValue318 =  fieldValue();
fieldValue318.setName(CString("name"));
fieldValue318.setValue(CString("l1"));
ProtoInstance204.addChild(&fieldValue318);

fieldValue203.addChild(&ProtoInstance204);

ProtoInstance& ProtoInstance319 =  ProtoInstance();
ProtoInstance319.setDEF(CString("hanim_l_shoulder"));
ProtoInstance319.setName(CString("Joint"));
fieldValue& fieldValue320 =  fieldValue();
fieldValue320.setName(CString("center"));
fieldValue320.setValue(CString("0.167 1.36 -0.0518"));
ProtoInstance319.addChild(&fieldValue320);

fieldValue& fieldValue321 =  fieldValue();
fieldValue321.setName(CString("children"));
ProtoInstance& ProtoInstance322 =  ProtoInstance();
ProtoInstance322.setDEF(CString("hanim_l_upperarm"));
ProtoInstance322.setName(CString("Segment"));
fieldValue& fieldValue323 =  fieldValue();
fieldValue323.setName(CString("children"));
Transform& Transform324 =  Transform();
Transform324.setDEF(CString("l_upperarm_adjust"));
Transform324.setTranslation(new float[]{0.0,0.0004203,-0.01665});
Transform324.setRotation(new float[]{1.0,0.0,0.0,0.119});
Transform324.setCenter(new float[]{0.182,1.22,-0.047});
Shape& Shape325 =  Shape();
Appearance& Appearance326 =  Appearance();
Material& Material327 =  Material();
Material327.setUSE(CString("WetShirtColor"));
Appearance326.addChild(&Material327);

Shape325.addChild(&Appearance326);

IndexedFaceSet& IndexedFaceSet328 =  IndexedFaceSet();
IndexedFaceSet328.setCreaseAngle(1.65);
IndexedFaceSet328.setCoordIndex(new int32_t[]{2,1,0,-1,2,3,1,-1,2,4,3,-1,2,0,5,-1,6,5,0,-1,7,2,5,-1,8,4,2,-1,8,3,4,-1,9,1,3,-1,10,0,1,-1,0,10,6,-1,1,9,10,-1,3,8,9,-1,2,7,8,-1,5,6,7,-1,11,7,6,-1,14,9,8,-1,15,10,9,-1,11,6,10,-1,10,15,11,-1,9,14,15,-1,8,13,14,-1,8,16,13,-1,7,11,12,-1,21,15,14,-1,15,17,11,-1,15,21,17,-1,16,19,13,-1,13,19,20,-1,21,14,20,-1,14,13,20,-1,12,17,18,-1,12,11,17,-1,12,18,16,-1,18,19,16,-1,12,16,7,-1,16,8,7,-1,19,18,17,-1,20,19,21,-1,19,17,21,-1}, 160);
Coordinate& Coordinate329 =  Coordinate();
Coordinate329.setPoint(new float[]{0.174,1.37,-0.0625,0.185,1.38,-0.0395,0.156,1.39,-0.0464,0.174,1.37,-0.0158,0.154,1.37,-0.0185,0.157,1.38,-0.0733,0.182,1.33,-0.0728,0.151,1.33,-0.0937,0.15,1.34,-0.000787,0.185,1.33,-0.00025,0.201,1.33,-0.0411,0.189,1.26,-0.0808,0.155,1.26,-0.0867,0.151,1.26,-0.000789,0.19,1.26,-0.00401,0.209,1.26,-0.0427,0.141,1.26,-0.0421,0.203,1.08,-0.0744,0.162,1.05,-0.0561,0.169,1.08,-0.00885,0.208,1.07,-0.00133,0.221,1.08,-0.0352}, 66);
IndexedFaceSet328.setCoord(&Coordinate329);

Shape325.setGeometry(&IndexedFaceSet328);

Transform324.addChild(&Shape325);

fieldValue323.addChild(&Transform324);

ProtoInstance322.addChild(&fieldValue323);

fieldValue& fieldValue330 =  fieldValue();
fieldValue330.setName(CString("name"));
fieldValue330.setValue(CString("l_upperarm"));
ProtoInstance322.addChild(&fieldValue330);

fieldValue321.addChild(&ProtoInstance322);

ProtoInstance& ProtoInstance331 =  ProtoInstance();
ProtoInstance331.setDEF(CString("hanim_l_elbow"));
ProtoInstance331.setName(CString("Joint"));
fieldValue& fieldValue332 =  fieldValue();
fieldValue332.setName(CString("center"));
fieldValue332.setValue(CString("0.196 1.07 -0.0518"));
ProtoInstance331.addChild(&fieldValue332);

fieldValue& fieldValue333 =  fieldValue();
fieldValue333.setName(CString("children"));
ProtoInstance& ProtoInstance334 =  ProtoInstance();
ProtoInstance334.setDEF(CString("hanim_l_forearm"));
ProtoInstance334.setName(CString("Segment"));
fieldValue& fieldValue335 =  fieldValue();
fieldValue335.setName(CString("children"));
Transform& Transform336 =  Transform();
Transform336.setDEF(CString("l_forearm_adjust"));
Transform336.setTranslation(new float[]{0.0,0.003724,-0.0236});
Transform336.setRotation(new float[]{-1.0,0.0,0.0,0.1});
Transform336.setCenter(new float[]{0.198,0.961,-0.0405});
Shape& Shape337 =  Shape();
Appearance& Appearance338 =  Appearance();
Material& Material339 =  Material();
Material339.setUSE(CString("WetShirtColor"));
Appearance338.addChild(&Material339);

Shape337.addChild(&Appearance338);

IndexedFaceSet& IndexedFaceSet340 =  IndexedFaceSet();
IndexedFaceSet340.setCreaseAngle(1.75);
IndexedFaceSet340.setCoordIndex(new int32_t[]{2,1,0,-1,2,3,1,-1,2,4,3,-1,2,5,4,-1,2,6,5,-1,2,0,6,-1,7,6,0,-1,8,5,6,-1,9,4,5,-1,9,3,4,-1,10,1,3,-1,11,0,1,-1,0,11,7,-1,1,10,11,-1,3,9,10,-1,5,12,9,-1,5,8,12,-1,6,7,8,-1,17,16,15,-1,14,17,15,-1,14,18,17,-1,13,18,14,-1,16,17,10,-1,16,10,9,-1,15,16,9,-1,15,9,12,-1,18,13,7,-1,18,7,11,-1,13,14,8,-1,13,8,7,-1,14,15,8,-1,15,12,8,-1,17,18,10,-1,18,11,10,-1}, 136);
Coordinate& Coordinate341 =  Coordinate();
Coordinate341.setPoint(new float[]{0.177,1.09,-0.0609,0.202,1.1,-0.0566,0.189,1.1,-0.0395,0.213,1.1,-0.025,0.203,1.1,-0.0158,0.182,1.09,-0.00563,0.167,1.09,-0.0325,0.176,1.08,-0.0781,0.16,1.06,-0.0373,0.214,1.07,-0.00402,0.228,1.07,-0.0319,0.208,1.08,-0.0765,0.179,1.07,-0.00294,0.21,0.818,-0.0615,0.201,0.82,-0.0405,0.205,0.819,-0.00832,0.224,0.818,-0.00778,0.237,0.82,-0.0282,0.231,0.819,-0.0609}, 57);
IndexedFaceSet340.setCoord(&Coordinate341);

Shape337.setGeometry(&IndexedFaceSet340);

Transform336.addChild(&Shape337);

fieldValue335.addChild(&Transform336);

ProtoInstance334.addChild(&fieldValue335);

fieldValue& fieldValue342 =  fieldValue();
fieldValue342.setName(CString("name"));
fieldValue342.setValue(CString("l_forearm"));
ProtoInstance334.addChild(&fieldValue342);

fieldValue333.addChild(&ProtoInstance334);

ProtoInstance& ProtoInstance343 =  ProtoInstance();
ProtoInstance343.setDEF(CString("hanim_l_wrist"));
ProtoInstance343.setName(CString("Joint"));
fieldValue& fieldValue344 =  fieldValue();
fieldValue344.setName(CString("center"));
fieldValue344.setValue(CString("0.213 0.811 -0.0338"));
ProtoInstance343.addChild(&fieldValue344);

fieldValue& fieldValue345 =  fieldValue();
fieldValue345.setName(CString("children"));
ProtoInstance& ProtoInstance346 =  ProtoInstance();
ProtoInstance346.setDEF(CString("hanim_l_hand"));
ProtoInstance346.setName(CString("Segment"));
fieldValue& fieldValue347 =  fieldValue();
fieldValue347.setName(CString("children"));
Transform& Transform348 =  Transform();
Transform348.setDEF(CString("l_hand_adjust"));
Transform348.setTranslation(new float[]{0.0,0.005142,-0.008662});
Transform348.setRotation(new float[]{-0.06361,-0.9967,0.04988,1.333});
Transform348.setCenter(new float[]{0.213,0.811,-0.0338});
Shape& Shape349 =  Shape();
Appearance& Appearance350 =  Appearance();
Material& Material351 =  Material();
Material351.setDEF(CString("Skin_Color"));
Material351.setAmbientIntensity(0.25);
Material351.setDiffuseColor(new float[]{0.749,0.601,0.462});
Appearance350.addChild(&Material351);

Shape349.addChild(&Appearance350);

IndexedFaceSet& IndexedFaceSet352 =  IndexedFaceSet();
IndexedFaceSet352.setCreaseAngle(1.48);
IndexedFaceSet352.setCoordIndex(new int32_t[]{2,1,0,-1,5,4,3,-1,3,7,6,-1,2,3,6,-1,7,9,8,-1,6,7,8,-1,9,11,10,-1,8,9,10,-1,11,13,12,-1,10,11,12,-1,13,15,14,-1,12,13,14,-1,15,17,16,-1,14,15,16,-1,17,19,18,-1,16,17,18,-1,19,21,20,-1,18,19,20,-1,31,4,1,-1,4,5,0,-1,1,4,0,-1,5,3,2,-1,0,5,2,-1,26,25,24,-1,26,24,23,-1,27,26,23,-1,28,27,23,-1,28,23,22,-1,29,28,22,-1,29,22,21,-1,30,29,21,-1,15,13,11,-1,17,15,11,-1,19,17,11,-1,19,11,9,-1,31,19,9,-1,31,9,7,-1,4,31,7,-1,4,7,3,-1,30,21,19,-1,31,30,19,-1,12,14,16,-1,10,12,16,-1,10,16,18,-1,8,10,18,-1,6,8,1,-1,2,6,1,-1,39,38,37,-1,37,38,40,-1,37,40,36,-1,36,40,41,-1,36,41,35,-1,35,41,42,-1,35,42,34,-1,34,42,43,-1,34,43,33,-1,33,43,44,-1,33,44,32,-1,20,32,44,-1,20,44,45,-1,20,45,46,-1,47,8,18,-1,47,18,20,-1,47,20,46,-1,8,47,1,-1,22,33,32,-1,23,35,34,-1,23,36,35,-1,37,24,25,-1,40,38,27,-1,29,43,42,-1,45,44,30,-1,47,31,1,-1,47,46,31,-1,29,30,43,-1,30,44,43,-1,45,31,46,-1,45,30,31,-1,28,29,41,-1,29,42,41,-1,28,40,27,-1,28,41,40,-1,26,27,39,-1,27,38,39,-1,25,39,37,-1,25,26,39,-1,24,36,23,-1,24,37,36,-1,23,34,22,-1,34,33,22,-1,22,32,21,-1,32,20,21,-1}, 368);
Coordinate& Coordinate353 =  Coordinate();
Coordinate353.setPoint(new float[]{0.211,0.828,-0.0434,0.194,0.81,-0.0445,0.237,0.82,-0.0425,0.236,0.82,-0.0237,0.194,0.81,-0.0254,0.21,0.828,-0.0247,0.252,0.801,-0.0424,0.252,0.801,-0.0231,0.269,0.765,-0.0426,0.268,0.765,-0.0225,0.273,0.732,-0.0395,0.272,0.732,-0.0223,0.27,0.704,-0.0342,0.27,0.704,-0.0224,0.262,0.703,-0.0345,0.261,0.703,-0.0227,0.256,0.717,-0.0389,0.256,0.717,-0.023,0.255,0.738,-0.0408,0.255,0.738,-0.023,0.251,0.734,-0.0406,0.251,0.734,-0.0232,0.251,0.692,-0.0232,0.248,0.657,-0.0233,0.24,0.645,-0.0236,0.226,0.637,-0.0241,0.213,0.639,-0.0246,0.197,0.652,-0.0253,0.188,0.669,-0.0256,0.184,0.697,-0.0258,0.183,0.73,-0.0258,0.187,0.77,-0.0257,0.244,0.696,-0.0375,0.244,0.692,-0.0372,0.242,0.661,-0.0345,0.241,0.658,-0.0343,0.241,0.656,-0.0341,0.231,0.646,-0.0336,0.206,0.65,-0.0349,0.218,0.644,-0.034,0.205,0.652,-0.0352,0.198,0.667,-0.0367,0.195,0.691,-0.039,0.194,0.696,-0.0395,0.193,0.725,-0.042,0.193,0.731,-0.0425,0.197,0.765,-0.0449,0.197,0.77,-0.0453}, 144);
IndexedFaceSet352.setCoord(&Coordinate353);

Shape349.setGeometry(&IndexedFaceSet352);

Transform348.addChild(&Shape349);

fieldValue347.addChild(&Transform348);

ProtoInstance346.addChild(&fieldValue347);

fieldValue& fieldValue354 =  fieldValue();
fieldValue354.setName(CString("name"));
fieldValue354.setValue(CString("l_hand"));
ProtoInstance346.addChild(&fieldValue354);

fieldValue345.addChild(&ProtoInstance346);

ProtoInstance343.addChild(&fieldValue345);

fieldValue& fieldValue355 =  fieldValue();
fieldValue355.setName(CString("name"));
fieldValue355.setValue(CString("l_wrist"));
ProtoInstance343.addChild(&fieldValue355);

fieldValue333.addChild(&ProtoInstance343);

ProtoInstance331.addChild(&fieldValue333);

fieldValue& fieldValue356 =  fieldValue();
fieldValue356.setName(CString("name"));
fieldValue356.setValue(CString("l_elbow"));
ProtoInstance331.addChild(&fieldValue356);

fieldValue321.addChild(&ProtoInstance331);

ProtoInstance319.addChild(&fieldValue321);

fieldValue& fieldValue357 =  fieldValue();
fieldValue357.setName(CString("name"));
fieldValue357.setValue(CString("l_shoulder"));
ProtoInstance319.addChild(&fieldValue357);

fieldValue203.addChild(&ProtoInstance319);

ProtoInstance& ProtoInstance358 =  ProtoInstance();
ProtoInstance358.setDEF(CString("hanim_r_shoulder"));
ProtoInstance358.setName(CString("Joint"));
fieldValue& fieldValue359 =  fieldValue();
fieldValue359.setName(CString("center"));
fieldValue359.setValue(CString("-0.167 1.36 -0.0458"));
ProtoInstance358.addChild(&fieldValue359);

fieldValue& fieldValue360 =  fieldValue();
fieldValue360.setName(CString("children"));
ProtoInstance& ProtoInstance361 =  ProtoInstance();
ProtoInstance361.setDEF(CString("hanim_r_upperarm"));
ProtoInstance361.setName(CString("Segment"));
fieldValue& fieldValue362 =  fieldValue();
fieldValue362.setName(CString("children"));
Transform& Transform363 =  Transform();
Transform363.setDEF(CString("r_upperarm_adjust"));
Transform363.setTranslation(new float[]{0.0,0.000589,-0.01169});
Transform363.setRotation(new float[]{1.0,0.0,0.0,0.0836});
Transform363.setCenter(new float[]{-0.182,1.22,-0.047});
Shape& Shape364 =  Shape();
Appearance& Appearance365 =  Appearance();
Material& Material366 =  Material();
Material366.setUSE(CString("WetShirtColor"));
Appearance365.addChild(&Material366);

Shape364.addChild(&Appearance365);

IndexedFaceSet& IndexedFaceSet367 =  IndexedFaceSet();
IndexedFaceSet367.setCreaseAngle(1.53);
IndexedFaceSet367.setCoordIndex(new int32_t[]{14,10,20,-1,10,13,20,-1,13,22,20,-1,19,14,20,-1,14,19,12,-1,19,20,24,-1,20,22,25,-1,22,13,25,-1,13,10,11,-1,10,14,5,-1,12,5,14,-1,5,11,10,-1,11,25,13,-1,25,24,20,-1,24,12,19,-1,12,24,9,-1,25,11,8,-1,11,5,2,-1,5,12,9,-1,9,2,5,-1,2,8,11,-1,8,23,25,-1,23,27,25,-1,21,9,24,-1,9,21,7,-1,27,23,18,-1,23,8,18,-1,8,2,6,-1,2,9,7,-1,7,1,2,-1,1,6,2,-1,6,18,8,-1,18,26,27,-1,16,7,21,-1,7,16,4,-1,16,26,17,-1,26,18,15,-1,18,6,3,-1,6,1,0,-1,1,7,0,-1,4,0,7,-1,0,3,6,-1,3,15,18,-1,15,17,26,-1,17,4,16,-1,3,0,15,-1,15,0,4,-1,15,4,17,-1,25,27,24,-1,27,21,24,-1,27,26,21,-1,26,16,21,-1}, 208);
Coordinate& Coordinate368 =  Coordinate();
Coordinate368.setPoint(new float[]{-0.221,1.08,-0.0352,-0.214,1.14,-0.0405,-0.209,1.26,-0.0427,-0.208,1.07,-0.00133,-0.203,1.08,-0.0744,-0.201,1.33,-0.0411,-0.198,1.14,-0.0024,-0.198,1.13,-0.076,-0.19,1.26,-0.00401,-0.189,1.26,-0.0808,-0.185,1.38,-0.0395,-0.185,1.33,-0.00025,-0.182,1.33,-0.0728,-0.174,1.37,-0.0158,-0.174,1.37,-0.0625,-0.169,1.08,-0.00885,-0.167,1.13,-0.0744,-0.162,1.05,-0.0561,-0.16,1.13,-0.000793,-0.157,1.38,-0.0733,-0.156,1.39,-0.0464,-0.155,1.26,-0.0867,-0.154,1.37,-0.0185,-0.151,1.26,-0.000789,-0.151,1.33,-0.0937,-0.15,1.34,-0.000787,-0.15,1.13,-0.0411,-0.141,1.26,-0.0421}, 84);
IndexedFaceSet367.setCoord(&Coordinate368);

Shape364.setGeometry(&IndexedFaceSet367);

Transform363.addChild(&Shape364);

fieldValue362.addChild(&Transform363);

ProtoInstance361.addChild(&fieldValue362);

fieldValue& fieldValue369 =  fieldValue();
fieldValue369.setName(CString("name"));
fieldValue369.setValue(CString("r_upperarm"));
ProtoInstance361.addChild(&fieldValue369);

fieldValue360.addChild(&ProtoInstance361);

ProtoInstance& ProtoInstance370 =  ProtoInstance();
ProtoInstance370.setDEF(CString("hanim_r_elbow"));
ProtoInstance370.setName(CString("Joint"));
fieldValue& fieldValue371 =  fieldValue();
fieldValue371.setName(CString("center"));
fieldValue371.setValue(CString("-0.192 1.07 -0.0498"));
ProtoInstance370.addChild(&fieldValue371);

fieldValue& fieldValue372 =  fieldValue();
fieldValue372.setName(CString("children"));
ProtoInstance& ProtoInstance373 =  ProtoInstance();
ProtoInstance373.setDEF(CString("hanim_r_forearm"));
ProtoInstance373.setName(CString("Segment"));
fieldValue& fieldValue374 =  fieldValue();
fieldValue374.setName(CString("children"));
Transform& Transform375 =  Transform();
Transform375.setDEF(CString("r_forearm_adjust"));
Transform375.setTranslation(new float[]{0.0,0.003466,-0.01065});
Transform375.setRotation(new float[]{-1.0,0.0,0.0,0.1254});
Transform375.setCenter(new float[]{-0.198,0.961,-0.0397});
Shape& Shape376 =  Shape();
Appearance& Appearance377 =  Appearance();
Material& Material378 =  Material();
Material378.setUSE(CString("WetShirtColor"));
Appearance377.addChild(&Material378);

Shape376.addChild(&Appearance377);

IndexedFaceSet& IndexedFaceSet379 =  IndexedFaceSet();
IndexedFaceSet379.setCreaseAngle(1.73);
IndexedFaceSet379.setCoordIndex(new int32_t[]{20,13,15,-1,13,8,15,-1,8,12,15,-1,12,18,15,-1,18,22,15,-1,22,20,15,-1,20,22,21,-1,22,18,24,-1,18,12,7,-1,12,8,7,-1,8,13,3,-1,13,20,10,-1,21,10,20,-1,10,3,13,-1,3,7,8,-1,7,19,18,-1,19,24,18,-1,24,21,22,-1,21,24,23,-1,24,19,16,-1,19,7,6,-1,7,3,1,-1,3,10,5,-1,10,21,17,-1,17,5,10,-1,5,1,3,-1,1,6,7,-1,6,16,19,-1,16,23,24,-1,23,17,21,-1,1,5,2,-1,5,17,9,-1,9,2,5,-1,1,4,6,-1,4,16,6,-1,23,9,17,-1,9,23,14,-1,23,16,11,-1,4,11,16,-1,11,14,23,-1,11,4,0,-1,11,0,14,-1,0,2,14,-1,14,2,9,-1,2,0,1,-1,0,4,1,-1}, 184);
Coordinate& Coordinate380 =  Coordinate();
Coordinate380.setPoint(new float[]{-0.237,0.82,-0.0282,-0.235,1.02,-0.033,-0.231,0.819,-0.0609,-0.228,1.07,-0.0319,-0.224,0.818,-0.00778,-0.221,1.01,-0.0744,-0.218,1.01,-0.00133,-0.214,1.07,-0.00402,-0.213,1.1,-0.025,-0.21,0.818,-0.0615,-0.208,1.08,-0.0765,-0.205,0.819,-0.00832,-0.203,1.1,-0.0158,-0.202,1.1,-0.0566,-0.201,0.82,-0.0405,-0.189,1.1,-0.0395,-0.183,1.01,-0.00831,-0.183,1.01,-0.0781,-0.182,1.09,-0.00563,-0.179,1.07,-0.00294,-0.177,1.09,-0.0609,-0.176,1.08,-0.0781,-0.167,1.09,-0.0325,-0.166,1.0,-0.0405,-0.16,1.06,-0.0373}, 75);
IndexedFaceSet379.setCoord(&Coordinate380);

Shape376.setGeometry(&IndexedFaceSet379);

Transform375.addChild(&Shape376);

fieldValue374.addChild(&Transform375);

ProtoInstance373.addChild(&fieldValue374);

fieldValue& fieldValue381 =  fieldValue();
fieldValue381.setName(CString("name"));
fieldValue381.setValue(CString("r_forearm"));
ProtoInstance373.addChild(&fieldValue381);

fieldValue372.addChild(&ProtoInstance373);

ProtoInstance& ProtoInstance382 =  ProtoInstance();
ProtoInstance382.setDEF(CString("hanim_r_wrist"));
ProtoInstance382.setName(CString("Joint"));
fieldValue& fieldValue383 =  fieldValue();
fieldValue383.setName(CString("center"));
fieldValue383.setValue(CString("-0.217 0.811 -0.0338"));
ProtoInstance382.addChild(&fieldValue383);

fieldValue& fieldValue384 =  fieldValue();
fieldValue384.setName(CString("children"));
ProtoInstance& ProtoInstance385 =  ProtoInstance();
ProtoInstance385.setDEF(CString("hanim_r_hand"));
ProtoInstance385.setName(CString("Segment"));
fieldValue& fieldValue386 =  fieldValue();
fieldValue386.setName(CString("children"));
Transform& Transform387 =  Transform();
Transform387.setDEF(CString("r_hand_adjust"));
Transform387.setRotation(new float[]{-0.09024,0.994,-0.0624,1.216});
Transform387.setCenter(new float[]{-0.217,0.811,-0.0338});
Shape& Shape388 =  Shape();
Appearance& Appearance389 =  Appearance();
Material& Material390 =  Material();
Material390.setUSE(CString("Skin_Color"));
Appearance389.addChild(&Material390);

Shape388.addChild(&Appearance389);

IndexedFaceSet& IndexedFaceSet391 =  IndexedFaceSet();
IndexedFaceSet391.setCreaseAngle(1.57);
IndexedFaceSet391.setCoordIndex(new int32_t[]{10,9,0,-1,11,30,31,-1,1,12,11,-1,1,11,0,-1,2,13,12,-1,2,12,1,-1,3,14,13,-1,3,13,2,-1,4,15,14,-1,4,14,3,-1,5,16,15,-1,5,15,4,-1,6,17,16,-1,6,16,5,-1,7,18,17,-1,7,17,6,-1,8,19,18,-1,8,18,7,-1,10,31,30,-1,10,30,9,-1,0,11,31,-1,0,31,10,-1,22,23,24,-1,21,22,24,-1,21,24,25,-1,21,25,26,-1,20,21,26,-1,20,26,27,-1,19,20,27,-1,19,27,28,-1,14,15,16,-1,14,16,17,-1,14,17,18,-1,13,14,18,-1,13,18,29,-1,12,13,29,-1,12,29,30,-1,11,12,30,-1,18,19,28,-1,18,28,29,-1,6,5,4,-1,6,4,3,-1,7,6,3,-1,7,3,2,-1,9,2,1,-1,9,1,0,-1,32,38,33,-1,33,38,39,-1,33,39,34,-1,34,39,40,-1,34,40,35,-1,35,40,41,-1,35,41,36,-1,36,41,42,-1,36,42,37,-1,37,42,43,-1,37,43,44,-1,44,43,8,-1,44,8,45,-1,45,8,46,-1,46,8,7,-1,46,7,2,-1,46,2,47,-1,9,47,2,-1,25,34,35,-1,25,33,34,-1,25,24,33,-1,24,32,33,-1,32,24,23,-1,40,39,21,-1,41,40,21,-1,43,19,8,-1,43,20,19,-1,43,42,20,-1,21,20,41,-1,20,42,41,-1,38,22,39,-1,22,21,39,-1,32,23,38,-1,23,22,38,-1,26,25,35,-1,27,36,37,-1,27,37,28,-1,37,44,28,-1,26,35,27,-1,35,36,27,-1,28,44,45,-1,29,46,47,-1,29,9,30,-1,29,47,9,-1,28,45,29,-1,45,46,29,-1}, 368);
Coordinate& Coordinate392 =  Coordinate();
Coordinate392.setPoint(new float[]{-0.237,0.82,-0.0425,-0.252,0.801,-0.0424,-0.269,0.765,-0.0426,-0.273,0.732,-0.0395,-0.27,0.704,-0.0342,-0.262,0.703,-0.0345,-0.256,0.717,-0.0389,-0.255,0.738,-0.0408,-0.251,0.734,-0.0406,-0.194,0.81,-0.0445,-0.211,0.828,-0.0434,-0.236,0.82,-0.0237,-0.252,0.801,-0.0231,-0.268,0.765,-0.0225,-0.272,0.732,-0.0223,-0.27,0.704,-0.0224,-0.261,0.703,-0.0227,-0.256,0.717,-0.023,-0.255,0.738,-0.023,-0.251,0.734,-0.0232,-0.251,0.692,-0.0232,-0.248,0.657,-0.0233,-0.24,0.645,-0.0236,-0.226,0.637,-0.0241,-0.213,0.639,-0.0246,-0.197,0.652,-0.0253,-0.188,0.669,-0.0256,-0.184,0.697,-0.0258,-0.183,0.73,-0.0258,-0.187,0.77,-0.0257,-0.194,0.81,-0.0254,-0.21,0.828,-0.0247,-0.221,0.641,-0.0336,-0.21,0.65,-0.0348,-0.206,0.652,-0.0352,-0.198,0.667,-0.0368,-0.193,0.692,-0.0392,-0.192,0.696,-0.0396,-0.231,0.646,-0.0336,-0.238,0.656,-0.0342,-0.24,0.658,-0.0344,-0.24,0.662,-0.0347,-0.243,0.692,-0.0372,-0.243,0.696,-0.0376,-0.192,0.725,-0.0421,-0.192,0.73,-0.0426,-0.195,0.766,-0.0451,-0.196,0.77,-0.0454}, 144);
IndexedFaceSet391.setCoord(&Coordinate392);

Shape388.setGeometry(&IndexedFaceSet391);

Transform387.addChild(&Shape388);

fieldValue386.addChild(&Transform387);

ProtoInstance385.addChild(&fieldValue386);

fieldValue& fieldValue393 =  fieldValue();
fieldValue393.setName(CString("name"));
fieldValue393.setValue(CString("r_hand"));
ProtoInstance385.addChild(&fieldValue393);

fieldValue384.addChild(&ProtoInstance385);

ProtoInstance382.addChild(&fieldValue384);

fieldValue& fieldValue394 =  fieldValue();
fieldValue394.setName(CString("name"));
fieldValue394.setValue(CString("r_wrist"));
ProtoInstance382.addChild(&fieldValue394);

fieldValue372.addChild(&ProtoInstance382);

ProtoInstance370.addChild(&fieldValue372);

fieldValue& fieldValue395 =  fieldValue();
fieldValue395.setName(CString("name"));
fieldValue395.setValue(CString("r_elbow"));
ProtoInstance370.addChild(&fieldValue395);

fieldValue360.addChild(&ProtoInstance370);

ProtoInstance358.addChild(&fieldValue360);

fieldValue& fieldValue396 =  fieldValue();
fieldValue396.setName(CString("name"));
fieldValue396.setValue(CString("r_shoulder"));
ProtoInstance358.addChild(&fieldValue396);

fieldValue203.addChild(&ProtoInstance358);

ProtoInstance& ProtoInstance397 =  ProtoInstance();
ProtoInstance397.setDEF(CString("hanim_vc4"));
ProtoInstance397.setName(CString("Joint"));
fieldValue& fieldValue398 =  fieldValue();
fieldValue398.setName(CString("center"));
fieldValue398.setValue(CString("0 1.43 -0.0458"));
ProtoInstance397.addChild(&fieldValue398);

fieldValue& fieldValue399 =  fieldValue();
fieldValue399.setName(CString("children"));
ProtoInstance& ProtoInstance400 =  ProtoInstance();
ProtoInstance400.setDEF(CString("hanim_c4"));
ProtoInstance400.setName(CString("Segment"));
fieldValue& fieldValue401 =  fieldValue();
fieldValue401.setName(CString("children"));
Shape& Shape402 =  Shape();
Appearance& Appearance403 =  Appearance();
Material& Material404 =  Material();
Material404.setUSE(CString("WetShirtColor"));
Appearance403.addChild(&Material404);

Shape402.addChild(&Appearance403);

IndexedFaceSet& IndexedFaceSet405 =  IndexedFaceSet();
IndexedFaceSet405.setDEF(CString("neck"));
IndexedFaceSet405.setCreaseAngle(1.91);
IndexedFaceSet405.setCoordIndex(new int32_t[]{6,5,2,-1,6,2,3,-1,5,4,1,-1,5,1,2,-1,4,7,0,-1,4,0,1,-1,11,10,9,-1,11,9,8,-1,10,13,12,-1,10,12,9,-1,13,15,14,-1,13,14,12,-1,6,3,11,-1,6,11,8,-1,7,14,15,-1,7,15,0,-1,2,10,11,-1,2,11,3,-1,2,1,13,-1,2,13,10,-1,1,0,15,-1,1,15,13,-1,9,5,6,-1,9,6,8,-1,9,12,4,-1,9,4,5,-1,12,14,7,-1,12,7,4,-1}, 112);
Coordinate& Coordinate406 =  Coordinate();
Coordinate406.setPoint(new float[]{0.0105,1.54,-0.1,0.0357,1.54,-0.0685,0.0382,1.55,-0.0474,0.0105,1.55,-0.0204,0.0373,1.4,-0.0593,0.0577,1.4,-0.0266,0.0158,1.4,0.00512,0.0132,1.41,-0.0824,-0.0158,1.4,0.00512,-0.0577,1.4,-0.0266,-0.0382,1.55,-0.0474,-0.0105,1.55,-0.0204,-0.0373,1.4,-0.0593,-0.0357,1.54,-0.0685,-0.0132,1.41,-0.0824,-0.0105,1.54,-0.1}, 48);
IndexedFaceSet405.setCoord(&Coordinate406);

Shape402.setGeometry(&IndexedFaceSet405);

fieldValue401.addChild(&Shape402);

ProtoInstance400.addChild(&fieldValue401);

fieldValue& fieldValue407 =  fieldValue();
fieldValue407.setName(CString("name"));
fieldValue407.setValue(CString("c4"));
ProtoInstance400.addChild(&fieldValue407);

fieldValue399.addChild(&ProtoInstance400);

ProtoInstance& ProtoInstance408 =  ProtoInstance();
ProtoInstance408.setDEF(CString("hanim_skullbase"));
ProtoInstance408.setName(CString("Joint"));
fieldValue& fieldValue409 =  fieldValue();
fieldValue409.setName(CString("center"));
fieldValue409.setValue(CString("0 1.54 -0.0409"));
ProtoInstance408.addChild(&fieldValue409);

fieldValue& fieldValue410 =  fieldValue();
fieldValue410.setName(CString("children"));
ProtoInstance& ProtoInstance411 =  ProtoInstance();
ProtoInstance411.setDEF(CString("hanim_skull"));
ProtoInstance411.setName(CString("Segment"));
fieldValue& fieldValue412 =  fieldValue();
fieldValue412.setName(CString("children"));
Shape& Shape413 =  Shape();
Appearance& Appearance414 =  Appearance();
Material& Material415 =  Material();
Material415.setUSE(CString("Skin_Color"));
Appearance414.addChild(&Material415);

Shape413.addChild(&Appearance414);

IndexedFaceSet& IndexedFaceSet416 =  IndexedFaceSet();
IndexedFaceSet416.setDEF(CString("headIFS"));
IndexedFaceSet416.setCreaseAngle(0.7854);
IndexedFaceSet416.setColorIndex(new int[]{1,1,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,1,1,1,-1,1,1,1,-1,0,0,0,-1,1,1,1,-1,1,1,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,1,1,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,4,4,4,-1,0,0,0,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,0,0,0,-1,0,0,0,-1,4,4,4,-1,0,0,0,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,0,0,0,-1,0,0,0,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1}, 1640);
IndexedFaceSet416.setCoordIndex(new int32_t[]{48,87,58,-1,91,92,59,-1,59,92,88,-1,88,93,231,-1,232,86,233,-1,86,89,233,-1,89,57,56,-1,49,55,57,-1,102,86,96,-1,86,90,96,-1,97,95,96,-1,97,127,95,-1,41,96,154,-1,41,102,96,-1,99,102,41,-1,153,99,41,-1,102,40,86,-1,234,235,236,-1,87,237,58,-1,56,57,91,-1,87,234,237,-1,234,236,237,-1,89,49,57,-1,49,50,55,-1,40,89,86,-1,89,56,233,-1,232,90,86,-1,90,97,96,-1,92,93,88,-1,93,94,231,-1,232,231,94,-1,97,90,232,-1,96,42,154,-1,95,42,96,-1,53,46,45,-1,53,45,51,-1,53,51,92,-1,92,51,52,-1,92,52,93,-1,94,93,52,-1,94,52,4,-1,97,232,94,-1,54,47,46,-1,54,46,53,-1,55,47,54,-1,50,47,55,-1,34,33,50,-1,34,50,49,-1,35,34,49,-1,35,49,89,-1,35,89,40,-1,99,39,102,-1,39,35,40,-1,31,34,35,-1,31,35,32,-1,14,32,35,-1,14,35,39,-1,14,39,98,-1,137,38,153,-1,38,99,153,-1,38,98,99,-1,37,238,239,-1,11,238,37,-1,101,37,36,-1,241,141,242,-1,10,12,242,-1,12,13,14,-1,12,14,243,-1,13,15,32,-1,13,32,14,-1,15,16,31,-1,15,31,32,-1,2,70,10,-1,2,10,141,-1,70,69,12,-1,70,12,10,-1,69,68,13,-1,69,13,12,-1,68,67,15,-1,68,15,13,-1,67,66,16,-1,67,16,15,-1,98,39,99,-1,101,11,37,-1,100,101,36,-1,36,244,240,-1,141,10,242,-1,12,243,242,-1,36,37,239,-1,36,239,244,-1,57,55,91,-1,55,54,91,-1,39,40,102,-1,123,103,120,-1,114,122,104,-1,115,122,114,-1,208,105,115,-1,210,119,211,-1,210,106,119,-1,116,107,106,-1,107,108,117,-1,126,119,109,-1,126,110,119,-1,126,95,125,-1,95,127,125,-1,154,126,111,-1,126,109,111,-1,111,109,112,-1,111,112,153,-1,119,113,109,-1,207,213,214,-1,123,209,103,-1,213,212,214,-1,209,214,103,-1,209,207,214,-1,107,117,106,-1,108,118,117,-1,119,106,113,-1,210,116,106,-1,119,110,211,-1,126,125,110,-1,115,105,122,-1,208,124,105,-1,124,208,211,-1,211,110,125,-1,154,42,126,-1,126,42,95,-1,168,128,121,-1,170,168,121,-1,122,170,121,-1,172,170,122,-1,105,172,122,-1,172,105,124,-1,4,172,124,-1,124,211,125,-1,128,130,129,-1,121,128,129,-1,129,130,108,-1,108,130,118,-1,118,131,132,-1,117,118,132,-1,117,132,133,-1,106,117,133,-1,113,106,133,-1,109,152,112,-1,113,133,152,-1,133,132,134,-1,135,133,134,-1,133,135,136,-1,152,133,136,-1,148,152,136,-1,153,138,137,-1,153,112,138,-1,112,148,138,-1,219,217,139,-1,36,240,149,-1,139,217,140,-1,149,139,151,-1,36,149,100,-1,220,141,241,-1,220,150,142,-1,136,143,150,-1,221,136,150,-1,135,144,143,-1,136,135,143,-1,134,158,144,-1,135,134,144,-1,142,161,2,-1,141,142,2,-1,150,145,161,-1,142,150,161,-1,143,146,145,-1,150,143,145,-1,144,147,146,-1,143,144,146,-1,158,160,147,-1,144,158,147,-1,112,152,148,-1,139,140,151,-1,149,151,100,-1,240,218,149,-1,220,142,141,-1,220,221,150,-1,219,139,149,-1,218,219,149,-1,104,108,107,-1,104,129,108,-1,109,113,152,-1,153,41,111,-1,129,104,122,-1,129,122,121,-1,91,54,92,-1,54,53,92,-1,97,94,127,-1,127,94,4,-1,125,127,124,-1,127,4,124,-1,154,111,41,-1,31,30,33,-1,31,33,34,-1,16,17,30,-1,16,30,31,-1,66,65,17,-1,66,17,16,-1,2,73,156,-1,2,156,70,-1,156,72,66,-1,156,66,67,-1,156,67,68,-1,156,68,69,-1,156,69,70,-1,72,71,65,-1,72,65,66,-1,17,18,30,-1,45,44,51,-1,51,44,43,-1,51,43,52,-1,52,43,1,-1,52,1,4,-1,245,246,27,-1,245,27,3,-1,246,247,28,-1,246,28,27,-1,248,22,29,-1,248,29,28,-1,248,28,247,-1,27,26,0,-1,27,0,3,-1,27,28,25,-1,27,25,26,-1,29,24,25,-1,29,25,28,-1,22,23,24,-1,22,24,29,-1,249,250,22,-1,249,22,248,-1,250,60,23,-1,250,23,22,-1,17,254,18,-1,65,254,17,-1,71,64,65,-1,63,74,75,-1,63,75,61,-1,64,255,254,-1,75,62,61,-1,62,76,60,-1,76,77,23,-1,76,23,60,-1,77,24,23,-1,77,78,25,-1,77,25,24,-1,78,84,26,-1,78,26,25,-1,84,192,0,-1,84,0,26,-1,84,83,193,-1,84,193,192,-1,79,83,84,-1,79,84,78,-1,76,79,78,-1,76,78,77,-1,80,83,79,-1,80,204,83,-1,75,81,80,-1,81,85,204,-1,81,204,80,-1,74,81,75,-1,74,82,81,-1,82,5,85,-1,82,85,81,-1,155,8,71,-1,155,71,72,-1,8,6,64,-1,8,64,71,-1,6,7,255,-1,6,255,64,-1,7,9,256,-1,7,256,255,-1,9,257,256,-1,73,155,156,-1,155,72,156,-1,204,193,83,-1,64,254,65,-1,131,157,134,-1,132,131,134,-1,157,159,158,-1,134,157,158,-1,159,206,160,-1,158,159,160,-1,203,73,2,-1,161,203,2,-1,160,162,203,-1,147,160,203,-1,146,147,203,-1,145,146,203,-1,161,145,203,-1,206,163,162,-1,160,206,162,-1,157,164,159,-1,170,169,168,-1,171,169,170,-1,172,171,170,-1,1,171,172,-1,4,1,172,-1,173,227,245,-1,3,173,245,-1,174,226,227,-1,173,174,227,-1,176,175,215,-1,174,176,215,-1,226,174,215,-1,0,177,173,-1,3,0,173,-1,178,174,173,-1,177,178,173,-1,178,179,176,-1,174,178,176,-1,179,180,175,-1,176,179,175,-1,175,225,216,-1,215,175,216,-1,180,181,225,-1,175,180,225,-1,164,228,159,-1,159,228,206,-1,206,185,163,-1,187,186,184,-1,183,187,184,-1,228,229,185,-1,183,182,187,-1,181,188,182,-1,180,189,188,-1,181,180,188,-1,180,179,189,-1,178,190,189,-1,179,178,189,-1,177,191,190,-1,178,177,190,-1,0,192,191,-1,177,0,191,-1,193,205,191,-1,192,193,191,-1,191,205,194,-1,190,191,194,-1,190,194,188,-1,189,190,188,-1,194,205,195,-1,205,204,195,-1,195,196,187,-1,204,85,196,-1,195,204,196,-1,187,196,186,-1,196,197,186,-1,85,5,197,-1,196,85,197,-1,163,198,202,-1,162,163,202,-1,185,199,198,-1,163,185,198,-1,229,200,199,-1,185,229,199,-1,230,201,200,-1,229,230,200,-1,230,257,201,-1,203,202,73,-1,203,162,202,-1,205,193,204,-1,206,228,185,-1,198,8,155,-1,198,155,202,-1,155,73,202,-1,199,6,8,-1,199,8,198,-1,7,6,199,-1,7,199,200,-1,201,9,7,-1,201,7,200,-1,201,257,9,-1,188,194,195,-1,188,195,182,-1,195,187,182,-1,80,79,76,-1,80,62,75,-1,80,76,62,-1,47,50,33,-1,131,118,130,-1,20,21,47,-1,21,46,47,-1,20,33,19,-1,20,47,33,-1,33,30,19,-1,30,18,19,-1,62,60,251,-1,60,250,251,-1,252,61,251,-1,61,62,251,-1,252,63,61,-1,252,253,63,-1,166,130,167,-1,130,128,167,-1,166,131,130,-1,166,165,131,-1,165,157,131,-1,165,164,157,-1,224,181,182,-1,224,225,181,-1,224,183,223,-1,224,182,183,-1,183,184,223,-1,184,222,223,-1}, 1640);
CColor& Color417 =  CColor();
Color417.setColor(new float[]{0.749,0.601,0.462,0.1735,0.2602,0.749,0.6364,0.133,0.1526,0.4545,0.2759,0.1902,0.0,0.0,0.502}, 15);
IndexedFaceSet416.setColor(&Color417);

Coordinate& Coordinate418 =  Coordinate();
Coordinate418.setDEF(CString("Face"));
Coordinate418.setPoint(new float[]{0.0,1.708,-0.0435,0.0,1.655,0.04322,0.0,1.486,0.02335,0.0,1.694,0.007789,0.0,1.631,0.051,0.0,1.524,-0.102,0.04,1.51,-0.07278,0.04029,1.514,-0.08254,0.03528,1.502,-0.05013,0.03479,1.517,-0.09269,0.0116,1.494,0.03382,0.01946,1.52,0.03421,0.02204,1.494,0.0272,0.02734,1.498,0.02215,0.02788,1.528,0.03084,0.0338,1.503,0.0124,0.04008,1.509,0.002821,0.05122,1.518,-0.02784,0.05867,1.544,-0.03316,0.06433,1.563,-0.03678,0.06732,1.583,-0.03683,0.06769,1.617,-0.03436,0.06641,1.637,-0.03046,0.06818,1.637,-0.04285,0.06308,1.666,-0.04036,0.05305,1.685,-0.03987,0.03136,1.7,-0.0413,0.02919,1.688,0.0091,0.05272,1.674,-0.001657,0.06061,1.66,-0.0101,0.05254,1.541,-0.01363,0.04099,1.527,0.008832,0.03528,1.524,0.02097,0.05792,1.557,-0.004307,0.04413,1.539,0.0149,0.03746,1.539,0.02656,0.003407,1.524,0.04155,0.01481,1.526,0.03912,0.005112,1.532,0.04358,0.02438,1.542,0.03578,0.02636,1.55,0.03808,0.006135,1.55,0.0545,0.0,1.559,0.05502,0.02958,1.651,0.03965,0.04847,1.643,0.02895,0.05856,1.63,0.01803,0.06182,1.614,0.008199,0.06194,1.6,0.002668,0.01489,1.583,0.04109,0.05282,1.569,0.02821,0.05767,1.58,0.0184,0.04643,1.625,0.03705,0.0264,1.628,0.04807,0.0556,1.609,0.02579,0.05467,1.599,0.02153,0.05316,1.589,0.0207,0.03603,1.58,0.03536,0.04597,1.586,0.02904,0.02106,1.592,0.03748,0.03428,1.595,0.03294,0.06808,1.617,-0.06112,0.06714,1.564,-0.07003,0.06993,1.594,-0.08238,0.05324,1.536,-0.05922,0.04904,1.521,-0.05132,0.04758,1.514,-0.03107,0.03539,1.503,-0.00093,0.02999,1.498,0.006194,0.02308,1.492,0.01628,0.01772,1.488,0.02135,0.01378,1.488,0.02484,0.04349,1.512,-0.03987,0.02308,1.499,-0.02088,0.0,1.487,-0.018,0.04795,1.531,-0.08973,0.05739,1.555,-0.0982,0.06815,1.622,-0.107,0.06872,1.655,-0.08466,0.05233,1.678,-0.09642,0.05334,1.631,-0.1239,0.05011,1.581,-0.1193,0.04359,1.551,-0.1067,0.03839,1.528,-0.09652,0.03399,1.636,-0.1304,0.03224,1.685,-0.1024,0.0,1.557,-0.1126,0.01864,1.566,0.04105,0.0249,1.58,0.0387,0.02735,1.596,0.03552,0.04317,1.564,0.03643,0.01246,1.577,0.04276,0.04354,1.59,0.02822,0.04557,1.601,0.03652,0.0291,1.603,0.04274,0.01856,1.6,0.04349,0.0,1.579,0.04893,0.01064,1.558,0.04476,0.005501,1.578,0.04574,0.01405,1.531,0.04152,0.01037,1.544,0.04266,0.0,1.515,0.03836,0.00797,1.515,0.03774,0.01824,1.55,0.04063,-0.0249,1.58,0.0387,-0.04354,1.59,0.02822,-0.0291,1.603,0.04274,-0.04317,1.564,0.03643,-0.04597,1.586,0.02904,-0.05316,1.589,0.0207,-0.01824,1.55,0.04063,-0.01246,1.577,0.04276,-0.006135,1.55,0.0545,-0.01037,1.544,0.04266,-0.02636,1.55,0.03808,-0.03428,1.595,0.03294,-0.02735,1.596,0.03552,-0.03603,1.58,0.03536,-0.05282,1.569,0.02821,-0.05767,1.58,0.0184,-0.01864,1.566,0.04105,-0.01489,1.583,0.04109,-0.0556,1.609,0.02579,-0.04557,1.601,0.03652,-0.02106,1.592,0.03748,-0.01856,1.6,0.04349,-0.005501,1.578,0.04574,-0.01064,1.558,0.04476,0.0,1.592,0.04694,-0.06182,1.614,0.008199,-0.05467,1.599,0.02153,-0.06194,1.6,0.002668,-0.05792,1.557,-0.004307,-0.04413,1.539,0.0149,-0.03746,1.539,0.02656,-0.04099,1.527,0.008832,-0.03528,1.524,0.02097,-0.02788,1.528,0.03084,0.0,1.53,0.04236,-0.005112,1.532,0.04358,-0.01481,1.526,0.03912,-0.01946,1.52,0.03421,0.0,1.495,0.0348,-0.0116,1.494,0.03382,-0.02734,1.498,0.02215,-0.0338,1.503,0.0124,-0.01772,1.488,0.02135,-0.02308,1.492,0.01628,-0.02999,1.498,0.006194,-0.01405,1.531,0.04152,-0.003407,1.524,0.04155,-0.02204,1.494,0.0272,-0.00797,1.515,0.03774,-0.02438,1.542,0.03578,0.0,1.543,0.04432,0.0,1.555,0.05692,0.02295,1.492,-0.02694,0.007322,1.489,-0.01677,-0.05254,1.541,-0.01363,-0.04008,1.509,0.002821,-0.05122,1.518,-0.02784,-0.03539,1.503,-0.00093,-0.01378,1.488,0.02484,-0.02308,1.499,-0.02088,-0.04349,1.512,-0.03987,-0.05867,1.544,-0.03316,-0.06433,1.563,-0.03678,-0.06732,1.583,-0.03683,-0.06769,1.617,-0.03436,-0.05856,1.63,0.01803,-0.04847,1.643,0.02895,-0.04643,1.625,0.03705,-0.02958,1.651,0.03965,-0.0264,1.628,0.04807,-0.02919,1.688,0.0091,-0.05272,1.674,-0.001657,-0.06641,1.637,-0.03046,-0.06061,1.66,-0.0101,-0.03136,1.7,-0.0413,-0.05305,1.685,-0.03987,-0.06308,1.666,-0.04036,-0.06818,1.637,-0.04285,-0.06808,1.617,-0.06112,-0.06993,1.594,-0.08238,-0.06714,1.564,-0.07003,-0.05324,1.536,-0.05922,-0.04904,1.521,-0.05132,-0.04795,1.531,-0.08973,-0.05739,1.555,-0.0982,-0.06815,1.622,-0.107,-0.06872,1.655,-0.08466,-0.05233,1.678,-0.09642,-0.03224,1.685,-0.1024,0.0,1.69,-0.1047,0.0,1.64,-0.1342,-0.05334,1.631,-0.1239,-0.05011,1.581,-0.1193,-0.04359,1.551,-0.1067,-0.03839,1.528,-0.09652,-0.03528,1.502,-0.05013,-0.04,1.51,-0.07278,-0.04029,1.514,-0.08254,-0.03479,1.517,-0.09269,-0.02295,1.492,-0.02694,-0.007322,1.489,-0.01677,0.0,1.588,-0.1329,-0.03399,1.636,-0.1304,-0.04758,1.514,-0.03107,-0.03428,1.595,0.03294,-0.02106,1.592,0.03748,-0.02735,1.596,0.03552,-0.0249,1.58,0.0387,-0.01489,1.583,0.04109,-0.04597,1.586,0.02904,-0.04354,1.59,0.02822,-0.03603,1.58,0.03536,-0.05856,1.63,0.01803,-0.06182,1.614,0.008199,-0.02788,1.528,0.03084,-0.005112,1.532,0.04358,-0.01405,1.531,0.04152,-0.00797,1.515,0.03774,-0.01946,1.52,0.03421,-0.05867,1.544,-0.03316,-0.06433,1.563,-0.03678,-0.06732,1.583,-0.03683,-0.06769,1.617,-0.03436,-0.04847,1.643,0.02895,-0.02958,1.651,0.03965,-0.05324,1.536,-0.05922,-0.04795,1.531,-0.08973,-0.03839,1.528,-0.09652,0.02106,1.592,0.03748,0.01489,1.583,0.04109,0.0249,1.58,0.0387,0.03603,1.58,0.03536,0.04354,1.59,0.02822,0.03428,1.595,0.03294,0.02735,1.596,0.03552,0.02788,1.528,0.03084,0.01405,1.531,0.04152,0.0,1.53,0.04236,0.0,1.515,0.03836,0.00797,1.515,0.03774,0.01946,1.52,0.03421,0.005112,1.532,0.04358,0.0,1.655,0.04322,0.02958,1.651,0.03965,0.04847,1.643,0.02895,0.05856,1.63,0.01803,0.06182,1.614,0.008199,0.06769,1.617,-0.03436,0.06732,1.583,-0.03683,0.06433,1.563,-0.03678,0.05867,1.544,-0.03316,0.05324,1.536,-0.05922,0.04795,1.531,-0.08973,0.03839,1.528,-0.09652,0.0,1.524,-0.102}, 774);
IndexedFaceSet416.setCoord(&Coordinate418);

Shape413.setGeometry(&IndexedFaceSet416);

fieldValue412.addChild(&Shape413);

Transform& Transform419 =  Transform();
Transform419.setDEF(CString("maskAndSnorkel"));
Transform419.setTranslation(new float[]{0.0,1.505,0.05});
Transform& Transform420 =  Transform();
Shape& Shape421 =  Shape();
Shape421.setDEF(CString("maskFrame"));
Appearance& Appearance422 =  Appearance();
Material& Material423 =  Material();
Material423.setDEF(CString("frameColor"));
Material423.setDiffuseColor(new float[]{0.0,0.0,0.0});
Appearance422.addChild(&Material423);

Shape421.addChild(&Appearance422);

IndexedFaceSet& IndexedFaceSet424 =  IndexedFaceSet();
IndexedFaceSet424.setSolid(false);
IndexedFaceSet424.setCreaseAngle(1.45);
IndexedFaceSet424.setCoordIndex(new int32_t[]{0,1,13,12,0,-1,1,2,14,13,1,-1,2,3,15,14,2,-1,3,4,16,15,3,-1,4,5,17,16,4,-1,5,6,18,17,5,-1,18,6,25,19,0,12,18,-1,0,19,20,11,0,-1,10,11,20,21,10,-1,9,10,21,22,9,-1,8,9,22,23,8,-1,23,24,7,8,23,-1,6,7,24,25,6,-1}, 80);
Coordinate& Coordinate425 =  Coordinate();
Coordinate425.setPoint(new float[]{0.0,0.08,0.0,0.02,0.05,0.0,0.05,0.05,0.0,0.06,0.06,0.0,0.06,0.09,0.0,0.05,0.1,0.0,0.0,0.1,0.0,-0.05,0.1,0.0,-0.06,0.09,0.0,-0.06,0.06,0.0,-0.05,0.05,0.0,-0.02,0.05,0.0,0.005,0.08,0.0,0.02,0.055,0.0,0.05,0.055,0.0,0.055,0.06,0.0,0.055,0.09,0.0,0.045,0.095,0.0,0.005,0.095,0.0,-0.005,0.08,0.0,-0.02,0.055,0.0,-0.05,0.055,0.0,-0.055,0.06,0.0,-0.055,0.09,0.0,-0.045,0.095,0.0,-0.005,0.095,0.0}, 78);
IndexedFaceSet424.setCoord(&Coordinate425);

Shape421.setGeometry(&IndexedFaceSet424);

Transform420.addChild(&Shape421);

Transform419.addChild(&Transform420);

Transform& Transform426 =  Transform();
Transform426.setDEF(CString("snorkelHoldRing"));
Transform426.setTranslation(new float[]{0.075,0.075,-0.02});
Shape& Shape427 =  Shape();
Appearance& Appearance428 =  Appearance();
Material& Material429 =  Material();
Material429.setUSE(CString("frameColor"));
Appearance428.addChild(&Material429);

Shape427.addChild(&Appearance428);

Cylinder& Cylinder430 =  Cylinder();
Cylinder430.setHeight(0.003);
Cylinder430.setRadius(0.015);
Shape427.setGeometry(&Cylinder430);

Transform426.addChild(&Shape427);

Transform419.addChild(&Transform426);

Group& Group431 =  Group();
Group431.setDEF(CString("snorkel"));
Transform& Transform432 =  Transform();
Transform432.setTranslation(new float[]{0.0,-0.02,0.0});
Transform& Transform433 =  Transform();
Transform433.setTranslation(new float[]{0.035,-0.07,-0.02});
Transform433.setScale(new float[]{0.9,0.9,0.9});
Shape& Shape434 =  Shape();
Appearance& Appearance435 =  Appearance();
Material& Material436 =  Material();
Material436.setDEF(CString("snorkelTube"));
Material436.setDiffuseColor(new float[]{0.678,1.0,0.184});
Material436.setTransparency(0.4);
Appearance435.addChild(&Material436);

Shape434.addChild(&Appearance435);

Extrusion& Extrusion437 =  Extrusion();
Extrusion437.setCrossSection(new float[]{0.0,0.013,0.00494,0.01196,0.00923,0.00923,0.01196,0.00494,0.013,0.0,0.01196,-0.00494,0.00923,-0.00923,0.00494,-0.01196,0.0,0.013,-0.00494,-0.01196,-0.00923,-0.00923,-0.01196,-0.00494,-0.013,0.0,-0.01196,0.00494,-0.00923,0.00923,-0.00494,0.01196,0.0,0.013}, 34);
Extrusion437.setSpine(new float[]{-0.01,-0.04,0.0,0.0,0.0,0.0,0.03,0.05,0.0,0.05,0.2,0.0,0.03,0.4,0.03}, 15);
Shape434.setGeometry(&Extrusion437);

Transform433.addChild(&Shape434);

Transform432.addChild(&Transform433);

Transform& Transform438 =  Transform();
Transform438.setTranslation(new float[]{0.01,-0.04,-0.02});
Transform438.setRotation(new float[]{0.0,0.0,1.0,1.57});
Transform438.setScale(new float[]{0.9,0.9,0.9});
Shape& Shape439 =  Shape();
Appearance& Appearance440 =  Appearance();
Material& Material441 =  Material();
Material441.setDEF(CString("Mouthpiece"));
Material441.setDiffuseColor(new float[]{0.678,1.0,0.8});
Material441.setTransparency(0.4);
Appearance440.addChild(&Material441);

Shape439.addChild(&Appearance440);

Extrusion& Extrusion442 =  Extrusion();
Extrusion442.setCrossSection(new float[]{0.0,0.013,0.00494,0.01196,0.00923,0.00923,0.01196,0.00494,0.013,0.0,0.01196,-0.00494,0.00923,-0.00923,0.00494,-0.01196,0.0,0.013,-0.00494,-0.01196,-0.00923,-0.00923,-0.01196,-0.00494,-0.013,0.0,-0.01196,0.00494,-0.00923,0.00923,-0.00494,0.01196,0.0,0.013}, 34);
Extrusion442.setSpine(new float[]{-0.01,-0.03,0.0,0.0,0.0,0.0,0.02,0.01,0.0}, 9);
Shape439.setGeometry(&Extrusion442);

Transform438.addChild(&Shape439);

Transform432.addChild(&Transform438);

Transform& Transform443 =  Transform();
Transform443.setTranslation(new float[]{0.005,-0.01,-0.02});
Transform443.setRotation(new float[]{0.0,0.0,1.0,-0.85});
Transform443.setScale(new float[]{0.9,0.9,0.9});
Shape& Shape444 =  Shape();
Appearance& Appearance445 =  Appearance();
Material& Material446 =  Material();
Material446.setUSE(CString("Mouthpiece"));
Appearance445.addChild(&Material446);

Shape444.addChild(&Appearance445);

Extrusion& Extrusion447 =  Extrusion();
Extrusion447.setCrossSection(new float[]{0.0,0.013,0.00494,0.01196,0.00923,0.00923,0.01196,0.00494,0.013,0.0,0.01196,-0.00494,0.00923,-0.00923,0.00494,-0.01196,0.0,0.013}, 18);
Extrusion447.setSpine(new float[]{-0.02,-0.03,0.0,-0.01,-0.03,0.0,0.0,-0.0175,0.0,0.0,-0.0135,0.0,-0.01,0.0,0.0,-0.02,0.0,0.0}, 18);
Shape444.setGeometry(&Extrusion447);

Transform443.addChild(&Shape444);

Transform432.addChild(&Transform443);

Group431.addChild(&Transform432);

Transform419.addChild(&Group431);

Transform& Transform448 =  Transform();
Shape& Shape449 =  Shape();
Shape449.setDEF(CString("maskLensR"));
Appearance& Appearance450 =  Appearance();
Material& Material451 =  Material();
Material451.setDEF(CString("plastic"));
Material451.setDiffuseColor(new float[]{0.941,0.973,1.0});
Material451.setTransparency(0.8);
Appearance450.addChild(&Material451);

Shape449.addChild(&Appearance450);

IndexedFaceSet& IndexedFaceSet452 =  IndexedFaceSet();
IndexedFaceSet452.setSolid(false);
IndexedFaceSet452.setCreaseAngle(1.45);
IndexedFaceSet452.setCoordIndex(new int32_t[]{12,1314,15,16,17,18,12,-1}, 8);
Coordinate& Coordinate453 =  Coordinate();
Coordinate453.setPoint(new float[]{0.0,0.08,0.0,0.02,0.05,0.0,0.05,0.05,0.0,0.06,0.06,0.0,0.06,0.09,0.0,0.05,0.1,0.0,0.0,0.1,0.0,-0.05,0.1,0.0,-0.06,0.09,0.0,-0.06,0.06,0.0,-0.05,0.05,0.0,-0.02,0.05,0.0,0.005,0.08,0.0,0.02,0.055,0.0,0.05,0.055,0.0,0.055,0.06,0.0,0.055,0.09,0.0,0.045,0.095,0.0,0.005,0.095,0.0,-0.005,0.08,0.0,-0.02,0.055,0.0,-0.05,0.055,0.0,-0.055,0.06,0.0,-0.055,0.09,0.0,-0.045,0.095,0.0,-0.005,0.095,0.0}, 78);
IndexedFaceSet452.setCoord(&Coordinate453);

Shape449.setGeometry(&IndexedFaceSet452);

Transform448.addChild(&Shape449);

Transform419.addChild(&Transform448);

Transform& Transform454 =  Transform();
Shape& Shape455 =  Shape();
Shape455.setDEF(CString("maskLensL"));
Appearance& Appearance456 =  Appearance();
Material& Material457 =  Material();
Material457.setUSE(CString("plastic"));
Appearance456.addChild(&Material457);

Shape455.addChild(&Appearance456);

IndexedFaceSet& IndexedFaceSet458 =  IndexedFaceSet();
IndexedFaceSet458.setSolid(false);
IndexedFaceSet458.setCreaseAngle(1.45);
IndexedFaceSet458.setCoordIndex(new int32_t[]{19,20,21,22,23,24,25,19,-1}, 9);
Coordinate& Coordinate459 =  Coordinate();
Coordinate459.setPoint(new float[]{0.0,0.08,0.0,0.02,0.05,0.0,0.05,0.05,0.0,0.06,0.06,0.0,0.06,0.09,0.0,0.05,0.1,0.0,0.0,0.1,0.0,-0.05,0.1,0.0,-0.06,0.09,0.0,-0.06,0.06,0.0,-0.05,0.05,0.0,-0.02,0.05,0.0,0.005,0.08,0.0,0.02,0.055,0.0,0.05,0.055,0.0,0.055,0.06,0.0,0.055,0.09,0.0,0.045,0.095,0.0,0.005,0.095,0.0,-0.005,0.08,0.0,-0.02,0.055,0.0,-0.05,0.055,0.0,-0.055,0.06,0.0,-0.055,0.09,0.0,-0.045,0.095,0.0,-0.005,0.095,0.0}, 78);
IndexedFaceSet458.setCoord(&Coordinate459);

Shape455.setGeometry(&IndexedFaceSet458);

Transform454.addChild(&Shape455);

Transform419.addChild(&Transform454);

Transform& Transform460 =  Transform();
Shape& Shape461 =  Shape();
Shape461.setDEF(CString("nose"));
Appearance& Appearance462 =  Appearance();
Material& Material463 =  Material();
Material463.setDEF(CString("plasticFit"));
Material463.setDiffuseColor(new float[]{0.678,1.0,0.184});
Material463.setTransparency(0.7);
Appearance462.addChild(&Material463);

Shape461.addChild(&Appearance462);

IndexedFaceSet& IndexedFaceSet464 =  IndexedFaceSet();
IndexedFaceSet464.setSolid(false);
IndexedFaceSet464.setCreaseAngle(1.45);
IndexedFaceSet464.setCoordIndex(new int32_t[]{0,37,26,0,-1,0,36,26,0,-1,36,37,26,36,-1,0,1,37,0,-1,0,11,36,0,-1}, 25);
Coordinate& Coordinate465 =  Coordinate();
Coordinate465.setPoint(new float[]{0.0,0.08,0.0,0.02,0.05,0.0,0.05,0.05,0.0,0.06,0.06,0.0,0.06,0.09,0.0,0.05,0.1,0.0,0.0,0.1,0.0,-0.05,0.1,0.0,-0.06,0.09,0.0,-0.06,0.06,0.0,-0.05,0.05,0.0,-0.02,0.05,0.0,0.005,0.08,0.0,0.02,0.055,0.0,0.05,0.055,0.0,0.055,0.06,0.0,0.055,0.09,0.0,0.045,0.095,0.0,0.005,0.095,0.0,-0.005,0.08,0.0,-0.02,0.055,0.0,-0.05,0.055,0.0,-0.055,0.06,0.0,-0.055,0.09,0.0,-0.045,0.095,0.0,-0.005,0.095,0.0,0.0,0.04,0.015,0.05,0.04,-0.03,0.06,0.05,-0.03,0.07,0.095,-0.03,0.055,0.11,-0.03,0.0,0.11,-0.02,-0.055,0.11,-0.03,-0.07,0.095,-0.03,-0.06,0.05,-0.03,-0.05,0.04,-0.03,-0.02,0.04,-0.02,0.02,0.04,-0.02}, 114);
IndexedFaceSet464.setCoord(&Coordinate465);

Shape461.setGeometry(&IndexedFaceSet464);

Transform460.addChild(&Shape461);

Transform419.addChild(&Transform460);

Transform& Transform466 =  Transform();
Shape& Shape467 =  Shape();
Shape467.setDEF(CString("faceFit"));
Appearance& Appearance468 =  Appearance();
Material& Material469 =  Material();
Material469.setUSE(CString("plasticFit"));
Appearance468.addChild(&Material469);

Shape467.addChild(&Appearance468);

IndexedFaceSet& IndexedFaceSet470 =  IndexedFaceSet();
IndexedFaceSet470.setSolid(false);
IndexedFaceSet470.setCreaseAngle(1.45);
IndexedFaceSet470.setCoordIndex(new int32_t[]{1,2,27,37,1,-1,2,3,28,27,2,-1,3,4,29,28,3,-1,4,5,30,29,4,-1,5,6,31,30,5,-1,6,7,32,31,6,-1,7,8,33,32,7,-1,8,9,34,33,8,-1,9,10,35,34,9,-1,10,11,36,35,10,-1}, 60);
Coordinate& Coordinate471 =  Coordinate();
Coordinate471.setPoint(new float[]{0.0,0.08,0.0,0.02,0.05,0.0,0.05,0.05,0.0,0.06,0.06,0.0,0.06,0.09,0.0,0.05,0.1,0.0,0.0,0.1,0.0,-0.05,0.1,0.0,-0.06,0.09,0.0,-0.06,0.06,0.0,-0.05,0.05,0.0,-0.02,0.05,0.0,0.005,0.08,0.0,0.02,0.055,0.0,0.05,0.055,0.0,0.055,0.06,0.0,0.055,0.09,0.0,0.045,0.095,0.0,0.005,0.095,0.0,-0.005,0.08,0.0,-0.02,0.055,0.0,-0.05,0.055,0.0,-0.055,0.06,0.0,-0.055,0.09,0.0,-0.045,0.095,0.0,-0.005,0.095,0.0,0.0,0.05,0.015,0.05,0.04,-0.03,0.06,0.05,-0.03,0.07,0.095,-0.03,0.055,0.11,-0.03,0.0,0.11,-0.02,-0.055,0.11,-0.03,-0.07,0.095,-0.03,-0.06,0.05,-0.03,-0.05,0.04,-0.03,-0.02,0.04,-0.02,0.02,0.04,-0.02}, 114);
IndexedFaceSet470.setCoord(&Coordinate471);

Shape467.setGeometry(&IndexedFaceSet470);

Transform466.addChild(&Shape467);

Transform419.addChild(&Transform466);

Transform& Transform472 =  Transform();
Shape& Shape473 =  Shape();
Shape473.setDEF(CString("belt"));
Appearance& Appearance474 =  Appearance();
Material& Material475 =  Material();
Material475.setUSE(CString("plastic"));
Appearance474.addChild(&Material475);

Shape473.addChild(&Appearance474);

IndexedFaceSet& IndexedFaceSet476 =  IndexedFaceSet();
IndexedFaceSet476.setSolid(false);
IndexedFaceSet476.setCreaseAngle(1.45);
IndexedFaceSet476.setCoordIndex(new int32_t[]{3,4,39,38,3,-1,8,9,40,41,8,-1,38,39,42,43,38,-1,40,41,44,45,40,-1,42,43,47,46,42,-1,44,45,47,46,44,-1}, 36);
Coordinate& Coordinate477 =  Coordinate();
Coordinate477.setPoint(new float[]{0.0,0.08,0.0,0.02,0.05,0.0,0.05,0.05,0.0,0.06,0.06,0.0,0.06,0.09,0.0,0.05,0.1,0.0,0.0,0.1,0.0,-0.05,0.1,0.0,-0.06,0.09,0.0,-0.06,0.06,0.0,-0.05,0.05,0.0,-0.02,0.05,0.0,0.005,0.08,0.0,0.02,0.055,0.0,0.05,0.055,0.0,0.055,0.06,0.0,0.055,0.09,0.0,0.045,0.095,0.0,0.005,0.095,0.0,-0.005,0.08,0.0,-0.02,0.055,0.0,-0.05,0.055,0.0,-0.055,0.06,0.0,-0.055,0.09,0.0,-0.045,0.095,0.0,-0.005,0.095,0.0,0.0,0.05,0.015,0.05,0.04,-0.03,0.06,0.05,-0.03,0.07,0.095,-0.03,0.055,0.11,-0.03,0.0,0.11,-0.02,-0.055,0.11,-0.03,-0.07,0.095,-0.03,-0.06,0.05,-0.03,-0.05,0.04,-0.03,-0.02,0.04,-0.02,0.02,0.04,-0.02,0.075,0.06,-0.135,0.075,0.09,-0.135,-0.075,0.06,-0.135,-0.075,0.09,-0.135,0.06,0.09,-0.165,0.06,0.06,-0.165,-0.06,0.09,-0.165,-0.06,0.06,-0.165,0.0,0.09,-0.2,0.0,0.06,-0.175}, 144);
IndexedFaceSet476.setCoord(&Coordinate477);

Shape473.setGeometry(&IndexedFaceSet476);

Transform472.addChild(&Shape473);

Transform419.addChild(&Transform472);

fieldValue412.addChild(&Transform419);

Transform& Transform478 =  Transform();
Transform478.setDEF(CString("mouthpiece"));
Transform478.setTranslation(new float[]{0.0,1.508,0.05});
Transform478.setRotation(new float[]{0.86,-0.58,-0.58,2.09});
Transform& Transform479 =  Transform();
Transform479.setTranslation(new float[]{0.0,0.0018,0.0});
Shape& Shape480 =  Shape();
Appearance& Appearance481 =  Appearance();
Material& Material482 =  Material();
Material482.setDEF(CString("gray"));
Material482.setAmbientIntensity(0.3);
Material482.setDiffuseColor(new float[]{0.9,0.9,0.89});
Material482.setSpecularColor(new float[]{0.5,0.5,0.5});
Material482.setShininess(0.1);
Appearance481.addChild(&Material482);

Shape480.addChild(&Appearance481);

Cylinder& Cylinder483 =  Cylinder();
Cylinder483.setHeight(0.006);
Cylinder483.setRadius(0.015);
Shape480.setGeometry(&Cylinder483);

Transform479.addChild(&Shape480);

Transform478.addChild(&Transform479);

Transform& Transform484 =  Transform();
Shape& Shape485 =  Shape();
Appearance& Appearance486 =  Appearance();
Material& Material487 =  Material();
Material487.setDEF(CString("black"));
Material487.setDiffuseColor(new float[]{0.0,0.0,0.0});
Appearance486.addChild(&Material487);

Shape485.addChild(&Appearance486);

Cone& Cone488 =  Cone();
Cone488.setHeight(0.01);
Cone488.setBottomRadius(0.03);
Shape485.setGeometry(&Cone488);

Transform484.addChild(&Shape485);

Transform478.addChild(&Transform484);

Transform& Transform489 =  Transform();
Transform489.setTranslation(new float[]{0.0,-0.015,0.0});
Shape& Shape490 =  Shape();
Appearance& Appearance491 =  Appearance();
Material& Material492 =  Material();
Material492.setUSE(CString("black"));
Appearance491.addChild(&Material492);

Shape490.addChild(&Appearance491);

Cylinder& Cylinder493 =  Cylinder();
Cylinder493.setHeight(0.02);
Cylinder493.setRadius(0.03);
Shape490.setGeometry(&Cylinder493);

Transform489.addChild(&Shape490);

Transform478.addChild(&Transform489);

Transform& Transform494 =  Transform();
Transform494.setTranslation(new float[]{0.0,-0.025,0.0});
Shape& Shape495 =  Shape();
Appearance& Appearance496 =  Appearance();
Material& Material497 =  Material();
Material497.setUSE(CString("black"));
Appearance496.addChild(&Material497);

Shape495.addChild(&Appearance496);

Cylinder& Cylinder498 =  Cylinder();
Cylinder498.setHeight(0.02);
Cylinder498.setRadius(0.015);
Shape495.setGeometry(&Cylinder498);

Transform494.addChild(&Shape495);

Transform478.addChild(&Transform494);

Transform& Transform499 =  Transform();
Transform499.setTranslation(new float[]{0.0,-0.04,0.0});
Transform499.setRotation(new float[]{0.0,0.0,1.0,0.9});
Shape& Shape500 =  Shape();
Shape500.setDEF(CString("mouthpiecePlastic"));
Appearance& Appearance501 =  Appearance();
Material& Material502 =  Material();
Material502.setDiffuseColor(new float[]{1.0,1.0,1.0});
Material502.setEmissiveColor(new float[]{1.0,1.0,1.0});
Appearance501.addChild(&Material502);

Shape500.addChild(&Appearance501);

Box& Box503 =  Box();
Box503.setSize(new float[]{0.002,0.03,0.018});
Shape500.setGeometry(&Box503);

Transform499.addChild(&Shape500);

Transform478.addChild(&Transform499);

Transform& Transform504 =  Transform();
Transform504.setTranslation(new float[]{0.0,-0.04,0.0});
Transform504.setRotation(new float[]{0.0,0.0,1.0,-0.9});
Shape& Shape505 =  Shape();
Shape505.setUSE(CString("mouthpiecePlastic"));
Transform504.addChild(&Shape505);

Transform478.addChild(&Transform504);

Transform& Transform506 =  Transform();
Transform506.setTranslation(new float[]{0.0,-0.015,0.03});
Transform506.setRotation(new float[]{1.0,0.0,0.0,1.57});
Shape& Shape507 =  Shape();
Appearance& Appearance508 =  Appearance();
Material& Material509 =  Material();
Material509.setUSE(CString("gray"));
Appearance508.addChild(&Material509);

Shape507.addChild(&Appearance508);

Cylinder& Cylinder510 =  Cylinder();
Cylinder510.setHeight(0.02);
Cylinder510.setRadius(0.0075);
Shape507.setGeometry(&Cylinder510);

Transform506.addChild(&Shape507);

Transform478.addChild(&Transform506);

Transform& Transform511 =  Transform();
Transform511.setDEF(CString("airTube"));
Transform511.setTranslation(new float[]{0.0,-0.02,0.055});
Transform511.setRotation(new float[]{0.0,1.0,0.0,1.57});
Transform511.setScale(new float[]{0.7,0.7,0.7});
Transform& Transform512 =  Transform();
Transform512.setRotation(new float[]{-0.21,0.21,-0.95,4.67});
Shape& Shape513 =  Shape();
Appearance& Appearance514 =  Appearance();
Material& Material515 =  Material();
Material515.setDiffuseColor(new float[]{0.0,0.0,0.0});
Appearance514.addChild(&Material515);

Shape513.addChild(&Appearance514);

Extrusion& Extrusion516 =  Extrusion();
Extrusion516.setCrossSection(new float[]{0.0,0.013,0.00494,0.01196,0.00923,0.00923,0.01196,0.00494,0.013,0.0,0.01196,-0.00494,0.00923,-0.00923,0.00494,-0.01196,0.0,0.013,-0.00494,-0.01196,-0.00923,-0.00923,-0.01196,-0.00494,-0.013,0.0,-0.01196,0.00494,-0.00923,0.00923,-0.00494,0.01196,0.0,0.013}, 34);
Extrusion516.setSpine(new float[]{0.005,-0.03,0.0,-0.01,0.02,0.0,-0.03,0.08,0.0,-0.05,0.14,0.0,-0.08,0.19,0.0,-0.1,0.22,0.0,-0.12,0.25,0.0,-0.15,0.27,0.0,-0.18,0.28,0.0,-0.21,0.29,0.0,-0.26,0.28,0.0,-0.28,0.26,0.0,-0.305,0.23,0.0,-0.32,0.2,0.0,-0.34,0.16,0.0,-0.35,0.12,0.0,-0.37,0.04,0.0,-0.385,0.0,0.0,-0.39,-0.07,0.0}, 57);
Shape513.setGeometry(&Extrusion516);

Transform512.addChild(&Shape513);

Transform511.addChild(&Transform512);

Transform478.addChild(&Transform511);

fieldValue412.addChild(&Transform478);

Transform& Transform517 =  Transform();
Transform517.setDEF(CString("Bubbles"));
Transform517.setTranslation(new float[]{0.0,1.508,0.05});
Transform517.setScale(new float[]{0.35,0.35,0.35});
Group& Group518 =  Group();
Group518.setDEF(CString("Bubble"));
TimeSensor& TimeSensor519 =  TimeSensor();
TimeSensor519.setDEF(CString("BubbleClock"));
TimeSensor519.setCycleInterval(6);
TimeSensor519.setLoop(true);
Group518.addChild(&TimeSensor519);

PositionInterpolator& PositionInterpolator520 =  PositionInterpolator();
PositionInterpolator520.setDEF(CString("BubblePath1"));
PositionInterpolator520.setKey(new float[]{0.0,0.5,0.8,0.9,1.0}, 5);
PositionInterpolator520.setKeyValue(new float[]{0.0,0.0,0.0,0.75,0.75,0.75,0.86,0.86,0.86,0.99,0.998,0.9876,1.272,1.9044,0.9509}, 15);
Group518.addChild(&PositionInterpolator520);

PositionInterpolator& PositionInterpolator521 =  PositionInterpolator();
PositionInterpolator521.setDEF(CString("BubblePath2"));
PositionInterpolator521.setKey(new float[]{0.0,0.3,0.64,0.85,1.0}, 5);
PositionInterpolator521.setKeyValue(new float[]{0.1,0.1,0.1,0.2,0.4,0.25,0.3,0.5,0.46,0.75,0.5,0.575,0.03848348,1.989,1.098373}, 15);
Group518.addChild(&PositionInterpolator521);

PositionInterpolator& PositionInterpolator522 =  PositionInterpolator();
PositionInterpolator522.setDEF(CString("BubblePath3"));
PositionInterpolator522.setKey(new float[]{0.0,0.1,0.45,0.7,1.0}, 5);
PositionInterpolator522.setKeyValue(new float[]{0.01,0.01,0.01,0.25,0.35,0.0045,0.55,0.6,0.0055,0.66,0.665,0.00655,1.555,1.09043,0.005734}, 15);
Group518.addChild(&PositionInterpolator522);

PositionInterpolator& PositionInterpolator523 =  PositionInterpolator();
PositionInterpolator523.setDEF(CString("BubblePath4"));
PositionInterpolator523.setKey(new float[]{0.0,0.5,0.6,0.8,1.0}, 5);
PositionInterpolator523.setKeyValue(new float[]{0.0,0.0,0.0,0.5,0.5,0.005,0.6,0.6,0.006,0.75,0.75,0.0075,1.948594,1.3983,0.009009349}, 15);
Group518.addChild(&PositionInterpolator523);

PositionInterpolator& PositionInterpolator524 =  PositionInterpolator();
PositionInterpolator524.setDEF(CString("BubblePath5"));
PositionInterpolator524.setKey(new float[]{0.0,0.25,0.35,0.65,1.0}, 5);
PositionInterpolator524.setKeyValue(new float[]{0.0,0.0,0.0,0.5,0.5,0.005,0.6,0.6,0.006,0.75,0.75,0.0075,1.84444,1.22222,0.1}, 15);
Group518.addChild(&PositionInterpolator524);

PositionInterpolator& PositionInterpolator525 =  PositionInterpolator();
PositionInterpolator525.setDEF(CString("BubblePath6"));
PositionInterpolator525.setKey(new float[]{0.0,0.15,0.22235,0.55565,1.0}, 5);
PositionInterpolator525.setKeyValue(new float[]{0.0,0.0,0.0,0.235,0.3455,0.0055,0.356,0.676,0.00456,0.5675,0.75,0.0074565,1.098,1.0343,0.14}, 15);
Group518.addChild(&PositionInterpolator525);

PositionInterpolator& PositionInterpolator526 =  PositionInterpolator();
PositionInterpolator526.setDEF(CString("BubblePath7"));
PositionInterpolator526.setKey(new float[]{0.0,0.2425,0.4535,0.6775,1.0}, 5);
PositionInterpolator526.setKeyValue(new float[]{0.0,0.0,0.0,0.12345,0.2225,0.00335,0.786,0.456,0.00666,0.74555,0.7335,0.00234575,0.08787,1.022,0.12}, 15);
Group518.addChild(&PositionInterpolator526);

PositionInterpolator& PositionInterpolator527 =  PositionInterpolator();
PositionInterpolator527.setDEF(CString("BubblePath8"));
PositionInterpolator527.setKey(new float[]{0.0,0.1125,0.5535,0.97865,1.0}, 5);
PositionInterpolator527.setKeyValue(new float[]{0.0,0.0,0.0,0.1235,0.05,0.00125,0.5666,0.4346,0.005556,0.8975,0.34575,0.0098775,1.8787,1.686,0.86}, 15);
Group518.addChild(&PositionInterpolator527);

PositionInterpolator& PositionInterpolator528 =  PositionInterpolator();
PositionInterpolator528.setDEF(CString("BubblePath9"));
PositionInterpolator528.setKey(new float[]{0.0,0.0025,0.035,0.65,1.0}, 5);
PositionInterpolator528.setKeyValue(new float[]{0.0,0.0,0.0,0.522,0.5445,0.0057,0.6543,0.226,0.0055,0.45575,0.4375,0.0067,1.8787,2.0,0.1545}, 15);
Group518.addChild(&PositionInterpolator528);

PositionInterpolator& PositionInterpolator529 =  PositionInterpolator();
PositionInterpolator529.setDEF(CString("BubblePath10"));
PositionInterpolator529.setKey(new float[]{0.0,0.00025,0.035,0.6895,1.0}, 5);
PositionInterpolator529.setKeyValue(new float[]{0.0,0.0,0.0,0.8765,0.445,0.00335,0.3336,0.4446,0.005556,0.765,0.75,0.0075,1.0,1.0,0.1}, 15);
Group518.addChild(&PositionInterpolator529);

Transform& Transform530 =  Transform();
Transform& Transform531 =  Transform();
Transform531.setDEF(CString("bubble1"));
Transform531.setTranslation(new float[]{0.5045,0.5045,0.5045});
Shape& Shape532 =  Shape();
Appearance& Appearance533 =  Appearance();
Appearance533.setDEF(CString("BubbleAppearance"));
Material& Material534 =  Material();
Material534.setDiffuseColor(new float[]{1.0,1.0,1.0});
Material534.setTransparency(0.8);
Appearance533.addChild(&Material534);

Shape532.addChild(&Appearance533);

Sphere& Sphere535 =  Sphere();
Sphere535.setRadius(0.025);
Shape532.setGeometry(&Sphere535);

Transform531.addChild(&Shape532);

Transform530.addChild(&Transform531);

Transform& Transform536 =  Transform();
Transform536.setDEF(CString("bubble2"));
Transform536.setTranslation(new float[]{0.2106863,0.4106863,0.2724412});
Shape& Shape537 =  Shape();
Appearance& Appearance538 =  Appearance();
Appearance538.setUSE(CString("BubbleAppearance"));
Shape537.addChild(&Appearance538);

Sphere& Sphere539 =  Sphere();
Sphere539.setRadius(0.055);
Shape537.setGeometry(&Sphere539);

Transform536.addChild(&Shape537);

Transform530.addChild(&Transform536);

Transform& Transform540 =  Transform();
Transform540.setDEF(CString("bubble3"));
Transform540.setTranslation(new float[]{0.4525714,0.5188095,0.005175238});
Shape& Shape541 =  Shape();
Appearance& Appearance542 =  Appearance();
Appearance542.setUSE(CString("BubbleAppearance"));
Shape541.addChild(&Appearance542);

Sphere& Sphere543 =  Sphere();
Sphere543.setRadius(0.065);
Shape541.setGeometry(&Sphere543);

Transform540.addChild(&Shape541);

Transform530.addChild(&Transform540);

Transform& Transform544 =  Transform();
Transform544.setDEF(CString("bubble4"));
Transform544.setTranslation(new float[]{0.3363333,0.3363333,0.003363333});
Shape& Shape545 =  Shape();
Appearance& Appearance546 =  Appearance();
Appearance546.setUSE(CString("BubbleAppearance"));
Shape545.addChild(&Appearance546);

Sphere& Sphere547 =  Sphere();
Sphere547.setRadius(0.015);
Shape545.setGeometry(&Sphere547);

Transform544.addChild(&Shape545);

Transform530.addChild(&Transform544);

Transform& Transform548 =  Transform();
Transform548.setDEF(CString("bubble5"));
Transform548.setTranslation(new float[]{0.5863334,0.5863334,0.005863333});
Shape& Shape549 =  Shape();
Appearance& Appearance550 =  Appearance();
Appearance550.setUSE(CString("BubbleAppearance"));
Shape549.addChild(&Appearance550);

Sphere& Sphere551 =  Sphere();
Sphere551.setRadius(0.075);
Shape549.setGeometry(&Sphere551);

Transform548.addChild(&Shape549);

Transform530.addChild(&Transform548);

Transform& Transform552 =  Transform();
Transform552.setDEF(CString("bubble6"));
Transform552.setTranslation(new float[]{0.4283297,0.7013068,0.005550557});
Shape& Shape553 =  Shape();
Appearance& Appearance554 =  Appearance();
Appearance554.setUSE(CString("BubbleAppearance"));
Shape553.addChild(&Appearance554);

Sphere& Sphere555 =  Sphere();
Sphere555.setRadius(0.005);
Shape553.setGeometry(&Sphere555);

Transform552.addChild(&Shape553);

Transform530.addChild(&Transform552);

Transform& Transform556 =  Transform();
Transform556.setDEF(CString("bubble7"));
Transform556.setTranslation(new float[]{0.4180911,0.3263393,0.004821982});
Shape& Shape557 =  Shape();
Appearance& Appearance558 =  Appearance();
Appearance558.setUSE(CString("BubbleAppearance"));
Shape557.addChild(&Appearance558);

Sphere& Sphere559 =  Sphere();
Sphere559.setRadius(0.035);
Shape557.setGeometry(&Sphere559);

Transform556.addChild(&Shape557);

Transform530.addChild(&Transform556);

Transform& Transform560 =  Transform();
Transform560.setDEF(CString("bubble8"));
Transform560.setTranslation(new float[]{0.3483992,0.245207,0.003435547});
Shape& Shape561 =  Shape();
Appearance& Appearance562 =  Appearance();
Appearance562.setUSE(CString("BubbleAppearance"));
Shape561.addChild(&Appearance562);

Sphere& Sphere563 =  Sphere();
Sphere563.setRadius(0.05);
Shape561.setGeometry(&Sphere563);

Transform560.addChild(&Shape561);

Transform530.addChild(&Transform560);

Transform& Transform564 =  Transform();
Transform564.setDEF(CString("bubble9"));
Transform564.setTranslation(new float[]{0.5570159,0.3296293,0.006087967});
Shape& Shape565 =  Shape();
Appearance& Appearance566 =  Appearance();
Appearance566.setUSE(CString("BubbleAppearance"));
Shape565.addChild(&Appearance566);

Sphere& Sphere567 =  Sphere();
Sphere567.setRadius(0.045);
Shape565.setGeometry(&Sphere567);

Transform564.addChild(&Shape565);

Transform530.addChild(&Transform564);

Transform& Transform568 =  Transform();
Transform568.setDEF(CString("bubble10"));
Transform568.setTranslation(new float[]{0.5322176,0.5852069,0.006451022});
Shape& Shape569 =  Shape();
Appearance& Appearance570 =  Appearance();
Appearance570.setUSE(CString("BubbleAppearance"));
Shape569.addChild(&Appearance570);

Sphere& Sphere571 =  Sphere();
Sphere571.setRadius(0.035);
Shape569.setGeometry(&Sphere571);

Transform568.addChild(&Shape569);

Transform530.addChild(&Transform568);

Group518.addChild(&Transform530);

Transform517.addChild(&Group518);

fieldValue412.addChild(&Transform517);

ProtoInstance411.addChild(&fieldValue412);

fieldValue& fieldValue572 =  fieldValue();
fieldValue572.setName(CString("name"));
fieldValue572.setValue(CString("skull"));
ProtoInstance411.addChild(&fieldValue572);

fieldValue410.addChild(&ProtoInstance411);

ProtoInstance408.addChild(&fieldValue410);

fieldValue& fieldValue573 =  fieldValue();
fieldValue573.setName(CString("name"));
fieldValue573.setValue(CString("skullbase"));
ProtoInstance408.addChild(&fieldValue573);

fieldValue399.addChild(&ProtoInstance408);

ProtoInstance397.addChild(&fieldValue399);

fieldValue& fieldValue574 =  fieldValue();
fieldValue574.setName(CString("name"));
fieldValue574.setValue(CString("vc4"));
ProtoInstance397.addChild(&fieldValue574);

fieldValue203.addChild(&ProtoInstance397);

ProtoInstance201.addChild(&fieldValue203);

fieldValue& fieldValue575 =  fieldValue();
fieldValue575.setName(CString("name"));
fieldValue575.setValue(CString("vl1"));
ProtoInstance201.addChild(&fieldValue575);

fieldValue94.addChild(&ProtoInstance201);

ProtoInstance92.addChild(&fieldValue94);

fieldValue& fieldValue576 =  fieldValue();
fieldValue576.setName(CString("name"));
fieldValue576.setValue(CString("humanoid_root"));
ProtoInstance92.addChild(&fieldValue576);

fieldValue91.addChild(&ProtoInstance92);

ProtoInstance90.addChild(&fieldValue91);

Transform88.addChild(&ProtoInstance90);

Transform87.addChild(&Transform88);

Group86.addChild(&Transform87);

Group80.addChild(&Group86);

LOD79.addChildren(&Group80);

Scene14.addChild(&LOD79);

Script& Script577 =  Script();
Script577.setDEF(CString("finWarpScript"));
field& field578 =  field();
field578.setAccessType(CString("inputOnly"));
field578.setType(CString("SFRotation"));
field578.setName(CString("set_rotationL"));
Script577.addChild(&field578);

field& field579 =  field();
field579.setAccessType(CString("inputOnly"));
field579.setType(CString("SFRotation"));
field579.setName(CString("set_rotationR"));
Script577.addChild(&field579);

field& field580 =  field();
field580.setAccessType(CString("outputOnly"));
field580.setType(CString("SFBool"));
field580.setName(CString("fin_warpL"));
Script577.addChild(&field580);

field& field581 =  field();
field581.setAccessType(CString("outputOnly"));
field581.setType(CString("SFBool"));
field581.setName(CString("fin_warpR"));
Script577.addChild(&field581);


//Script577.setSourceCode(CString("ecmascript:")+
//_T("var positionX;")+
//_T("var positionY;")+
//_T("var positionZ;")+
//_T("var rotation;")+
//_T("function initialize()")+
//_T("{")+
//_T("    	positionX = 0.0;")+
//_T("	positionY = 0.0;")+
//_T("	positionZ = 0.0;")+
//_T("	rotation = 0.0;")+
//_T("}")+
//_T("function set_rotationL( value, timeStamp)")+
//_T("{")+
//_T("	rotationFinL = new SFRotation(positionX, positionY, positionZ, rotation);")+
//_T("	rotationFinL = value;")+
//_T("	//print ('rotationFinL[0] ' + rotationFinL[0]);")+
//_T("	if (rotationFinL[0] <= 0)")+
//_T("	{")+
//_T("		fin_warpL = 0;")+
//_T("	}")+
//_T("	else")+
//_T("	{")+
//_T("		fin_warpL = 1;")+
//_T("	}")+
//_T("	")+
//_T("}")+
//_T("function set_rotationR( value, timeStamp)")+
//_T("{")+
//_T("	rotationFinR = new SFRotation(positionX, positionY, positionZ, rotation);")+
//_T("	rotationFinR = value;")+
//_T("	//print ('rotationFin[0] ' + rotationFinR[0]);")+
//_T("	if (rotationFinR[0] <= 0)")+
//_T("	{")+
//_T("		fin_warpR = 0;")+
//_T("	}")+
//_T("	else")+
//_T("	{")+
//_T("		fin_warpR = 1;")+
//_T("	}")+
//_T("	")+
//_T("}"));
Scene14.addChild(&Script577);

Group& Group582 =  Group();
Group582.setDEF(CString("Animations"));
Group& Group583 =  Group();
Group583.setDEF(CString("Dive_Animation"));
OrientationInterpolator& OrientationInterpolator584 =  OrientationInterpolator();
OrientationInterpolator584.setDEF(CString("r_ankle_RotationInterpolator_BasicDive"));
OrientationInterpolator584.setKey(new float[]{0.0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1.0}, 11);
OrientationInterpolator584.setKeyValue(new float[]{1.0,0.0,0.0,0.8001,1.0,0.0,0.0,0.8509,1.0,0.0,0.0,0.8001,1.0,0.0,0.0,0.8001,1.0,0.0,0.0,0.8509,1.0,0.0,0.0,0.8001,1.0,0.0,0.0,0.8001,1.0,0.0,0.0,0.8001,1.0,0.0,0.0,0.8001,1.0,0.0,0.0,0.8509,1.0,0.0,0.0,0.86001}, 44);
Group583.addChild(&OrientationInterpolator584);

OrientationInterpolator& OrientationInterpolator585 =  OrientationInterpolator();
OrientationInterpolator585.setDEF(CString("r_knee_RotationInterpolator_BasicDive"));
OrientationInterpolator585.setKey(new float[]{0.0,0.125,0.2083,0.375,0.5,0.6667,0.9167,1.0}, 8);
OrientationInterpolator585.setKeyValue(new float[]{1.0,0.0,0.0,0.8573,1.0,0.0,0.0,0.5351,1.0,0.0,0.0,0.1756,1.0,0.0,0.0,0.1194,1.0,0.0,0.0,0.3153,1.0,0.0,0.0,0.09354,1.0,0.0,0.0,0.08558,1.0,0.0,0.0,0.8573}, 32);
Group583.addChild(&OrientationInterpolator585);

OrientationInterpolator& OrientationInterpolator586 =  OrientationInterpolator();
OrientationInterpolator586.setDEF(CString("r_hip_RotationInterpolator_BasicDive"));
OrientationInterpolator586.setKey(new float[]{0.0,0.125,0.2083,0.2917,0.5,0.7917,0.9167,1.0}, 8);
OrientationInterpolator586.setKeyValue(new float[]{-0.5831,0.03511,0.8116,0.1481,-0.995,0.02296,0.09674,0.4683,-1.0,0.00192,0.007964,0.4732,-0.998,-0.0158,-0.06102,0.5079,-0.9131,-0.06243,-0.403,0.3361,1.0,0.0,0.0,0.2571,0.9891,-0.02805,0.1444,0.3879,-0.5831,0.03511,0.8116,0.1481}, 32);
Group583.addChild(&OrientationInterpolator586);

OrientationInterpolator& OrientationInterpolator587 =  OrientationInterpolator();
OrientationInterpolator587.setDEF(CString("l_ankle_RotationInterpolator_BasicDive"));
OrientationInterpolator587.setKey(new float[]{0.0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1.0}, 11);
OrientationInterpolator587.setKeyValue(new float[]{1.0,0.0,0.0,0.6001,1.0,0.0,0.0,0.6509,1.0,0.0,0.0,0.6001,1.0,0.0,0.0,0.6001,1.0,0.0,0.0,0.6509,1.0,0.0,0.0,0.6001,1.0,0.0,0.0,0.6001,1.0,0.0,0.0,0.6509,1.0,0.0,0.0,0.6001,1.0,0.0,0.0,0.6509,1.0,0.0,0.0,0.6001}, 44);
Group583.addChild(&OrientationInterpolator587);

OrientationInterpolator& OrientationInterpolator588 =  OrientationInterpolator();
OrientationInterpolator588.setDEF(CString("l_knee_RotationInterpolator_BasicDive"));
OrientationInterpolator588.setKey(new float[]{0.0,0.2083,0.375,0.5,0.6667,0.7917,0.9167,1.0}, 8);
OrientationInterpolator588.setKeyValue(new float[]{1.0,0.0,0.0,0.3226,1.0,0.0,0.0,0.1556,1.0,0.0,0.0,0.08678,1.0,0.0,0.0,0.8751,1.0,0.0,0.0,1.131,1.0,0.0,0.0,0.09961,1.0,0.0,0.0,0.3942,1.0,0.0,0.0,0.3226}, 32);
Group583.addChild(&OrientationInterpolator588);

OrientationInterpolator& OrientationInterpolator589 =  OrientationInterpolator();
OrientationInterpolator589.setDEF(CString("l_hip_RotationInterpolator_BasicDive"));
OrientationInterpolator589.setKey(new float[]{0.0,0.25,0.375,0.6667,0.7917,0.9167,1.0}, 7);
OrientationInterpolator589.setKeyValue(new float[]{-0.873,0.06094,0.484,0.2865,0.9963,-0.01057,0.08481,0.2488,0.9965,0.01591,-0.08222,0.3836,-1.0,0.0,0.0,0.5518,-0.9964,0.02231,0.0817,0.5351,-0.9809,0.04912,0.1881,0.5204,-0.873,0.06094,0.484,0.2865}, 28);
Group583.addChild(&OrientationInterpolator589);

OrientationInterpolator& OrientationInterpolator590 =  OrientationInterpolator();
OrientationInterpolator590.setDEF(CString("lower_body_RotationInterpolator_BasicDive"));
OrientationInterpolator590.setKey(new float[]{0.0,0.5,1.0}, 3);
OrientationInterpolator590.setKeyValue(new float[]{0.0,0.0,-1.0,0.1056,0.0,0.0,1.0,0.09018,0.0,0.0,-1.0,0.1056}, 12);
Group583.addChild(&OrientationInterpolator590);

OrientationInterpolator& OrientationInterpolator591 =  OrientationInterpolator();
OrientationInterpolator591.setDEF(CString("r_wrist_RotationInterpolator_BasicDive"));
OrientationInterpolator591.setKey(new float[]{0.0,0.28,0.32,0.64,0.76,1.0}, 6);
OrientationInterpolator591.setKeyValue(new float[]{0.0,0.0,1.0,0.0,-0.0585279,0.983903,-0.168849,1.85956,-0.0585279,0.983903,-0.168849,1.85956,-0.00222418,0.99801,-0.0630095,1.46072,0.0,1.0,0.0,0.497349,0.0,0.0,1.0,0.0}, 24);
Group583.addChild(&OrientationInterpolator591);

OrientationInterpolator& OrientationInterpolator592 =  OrientationInterpolator();
OrientationInterpolator592.setDEF(CString("r_elbow_RotationInterpolator_BasicDive"));
OrientationInterpolator592.setKey(new float[]{0.0,0.28,0.32,0.64,0.76,1.0}, 6);
OrientationInterpolator592.setKeyValue(new float[]{0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.04151,-1.0,0.0,0.0,0.04151,-1.0,0.0,0.0,0.5855,-1.0,0.0,0.0,0.5852,0.0,0.0,1.0,0.0}, 24);
Group583.addChild(&OrientationInterpolator592);

OrientationInterpolator& OrientationInterpolator593 =  OrientationInterpolator();
OrientationInterpolator593.setDEF(CString("r_shoulder_RotationInterpolator_BasicDive"));
OrientationInterpolator593.setKey(new float[]{0.0,0.45,0.64,0.76,0.88,1.0}, 6);
OrientationInterpolator593.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.9992,0.02042,0.03558,7.2,0.9989,-0.04623,0.005159,4.079,-0.8687,-0.2525,-0.4261,1.501,-0.941,-0.2893,-0.1754,0.4788,0.0,0.0,1.0,0.0}, 24);
Group583.addChild(&OrientationInterpolator593);

OrientationInterpolator& OrientationInterpolator594 =  OrientationInterpolator();
OrientationInterpolator594.setDEF(CString("l_wrist_RotationInterpolator_BasicDive"));
OrientationInterpolator594.setKey(new float[]{0.0,0.32,0.64,0.88,1.0}, 5);
OrientationInterpolator594.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.067,0.98,-0.128,4.15,0.067,0.98,-0.128,4.15,0.067,0.98,-0.128,4.15,0.0,0.0,1.0,0.0}, 20);
Group583.addChild(&OrientationInterpolator594);

OrientationInterpolator& OrientationInterpolator595 =  OrientationInterpolator();
OrientationInterpolator595.setDEF(CString("l_elbow_RotationInterpolator_BasicDive"));
OrientationInterpolator595.setKey(new float[]{0.0,0.28,0.32,0.64,0.76,1.0}, 6);
OrientationInterpolator595.setKeyValue(new float[]{0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.1229,-1.0,0.0,0.0,0.1229,-1.0,0.0,0.0,0.5976,-1.0,0.0,0.0,0.3917,0.0,0.0,1.0,0.0}, 24);
Group583.addChild(&OrientationInterpolator595);

OrientationInterpolator& OrientationInterpolator596 =  OrientationInterpolator();
OrientationInterpolator596.setDEF(CString("l_shoulder_RotationInterpolator_BasicDive"));
OrientationInterpolator596.setKey(new float[]{0.0,0.25,0.375,0.6667,0.7917,0.9167,1.0}, 7);
OrientationInterpolator596.setKeyValue(new float[]{0.0,0.0,1.0,0.1,0.0,0.0,1.0,0.2,0.0,0.0,1.0,0.2,0.86,0.25,0.42,0.5,0.86,0.25,0.42,0.8,0.86,0.25,0.42,0.4,0.86,0.25,0.42,0.2}, 28);
Group583.addChild(&OrientationInterpolator596);

OrientationInterpolator& OrientationInterpolator597 =  OrientationInterpolator();
OrientationInterpolator597.setDEF(CString("head_RotationInterpolator_BasicDive"));
OrientationInterpolator597.setKey(new float[]{0.0,0.28,0.3,0.32,0.4,0.45,0.6,0.65,0.7,0.75,0.85,0.9,0.95,1.0}, 14);
OrientationInterpolator597.setKeyValue(new float[]{-1.0,0.0,0.0,1.0,-1.0,0.0,0.0,1.0,-1.0,0.0,0.0,0.999,-1.0,0.0,0.0,0.99,-1.0,0.0,0.0,0.99,-1.0,0.0,0.0,0.9,-1.0,0.0,0.0,0.9,-1.0,0.0,0.0,0.9,-1.0,0.0,0.0,0.9,-1.0,0.0,0.0,0.9,-1.0,0.0,0.0,0.9,-1.0,0.0,0.0,0.9,-1.0,0.0,0.0,0.9,-1.0,0.0,0.0,1.0}, 56);
Group583.addChild(&OrientationInterpolator597);

OrientationInterpolator& OrientationInterpolator598 =  OrientationInterpolator();
OrientationInterpolator598.setDEF(CString("neck_RotationInterpolator_BasicDive"));
OrientationInterpolator598.setKey(new float[]{0.0,1.0}, 2);
OrientationInterpolator598.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 8);
Group583.addChild(&OrientationInterpolator598);

OrientationInterpolator& OrientationInterpolator599 =  OrientationInterpolator();
OrientationInterpolator599.setDEF(CString("upper_body_RotationInterpolator_BasicDive"));
OrientationInterpolator599.setKey(new float[]{0.0,0.2083,0.375,0.75,0.8333,1.0}, 6);
OrientationInterpolator599.setKeyValue(new float[]{0.0,1.0,0.0,0.0826,-0.01972,-0.5974,0.8017,0.08231,0.009296,-0.9648,0.2627,0.1734,-0.01238,0.9549,-0.2968,0.08732,-0.008125,0.9691,-0.2463,0.158,0.0,1.0,0.0,0.0826}, 24);
Group583.addChild(&OrientationInterpolator599);

OrientationInterpolator& OrientationInterpolator600 =  OrientationInterpolator();
OrientationInterpolator600.setDEF(CString("whole_body_RotationInterpolator_BasicDive"));
OrientationInterpolator600.setKey(new float[]{0.0,1.0}, 2);
OrientationInterpolator600.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 8);
Group583.addChild(&OrientationInterpolator600);

PositionInterpolator& PositionInterpolator601 =  PositionInterpolator();
PositionInterpolator601.setDEF(CString("whole_body_TranslationInterpolator_BasicDive"));
PositionInterpolator601.setKey(new float[]{0.0,0.04167,0.125,0.1667,0.2083,0.25,0.2917,0.375,0.4583,0.5,0.5417,0.5833,0.625,0.7083,0.75,0.7917,0.875,0.9167,1.0}, 19);
PositionInterpolator601.setKeyValue(new float[]{0.0,-0.00928,0.0,0.0,-0.003858,0.0,0.0,-0.008847,0.0,0.0,-0.01486,0.0,0.0,-0.02641,0.0,0.0,-0.03934,0.0,0.0,-0.0502,0.0,0.0,-0.07469,0.0,0.0,-0.02732,0.0,0.0,-0.01608,0.0,0.0,-0.01129,0.0,0.0,-0.005819,0.0,0.0,-0.002004,0.0,0.0,-0.002579,0.0,0.0,-0.0143,0.0,0.0,-0.03799,0.0,0.0,-0.05648,0.0,0.0,-0.045,0.0,0.0,-0.00928,0.0}, 57);
Group583.addChild(&PositionInterpolator601);

TimeSensor& TimeSensor602 =  TimeSensor();
TimeSensor602.setDEF(CString("Dive_Time"));
TimeSensor602.setCycleInterval(7);
TimeSensor602.setLoop(true);
TimeSensor602.setStartTime(-1);
Group583.addChild(&TimeSensor602);

ProximitySensor& ProximitySensor603 =  ProximitySensor();
ProximitySensor603.setDEF(CString("TriggerProximitySensor"));
ProximitySensor603.setSize(new float[]{50.0,50.0,50.0});
Group583.addChild(&ProximitySensor603);

Group582.addChild(&Group583);

Scene14.addChild(&Group582);

ROUTE& ROUTE604 =  ROUTE();
ROUTE604.setFromNode(CString("FinTriggerProximitySensor"));
ROUTE604.setFromField(CString("isActive"));
ROUTE604.setToNode(CString("FinClock"));
ROUTE604.setToField(CString("set_enabled"));
Scene14.addChild(&ROUTE604);

ROUTE& ROUTE605 =  ROUTE();
ROUTE605.setFromNode(CString("FinClock"));
ROUTE605.setFromField(CString("fraction_changed"));
ROUTE605.setToNode(CString("FinScript"));
ROUTE605.setToField(CString("set_fraction"));
Scene14.addChild(&ROUTE605);

ROUTE& ROUTE606 =  ROUTE();
ROUTE606.setFromNode(CString("FinScript"));
ROUTE606.setFromField(CString("keyValueR"));
ROUTE606.setToNode(CString("Finr"));
ROUTE606.setToField(CString("set_spine"));
Scene14.addChild(&ROUTE606);

ROUTE& ROUTE607 =  ROUTE();
ROUTE607.setFromNode(CString("FinScript"));
ROUTE607.setFromField(CString("keyValueL"));
ROUTE607.setToNode(CString("Finl"));
ROUTE607.setToField(CString("set_spine"));
Scene14.addChild(&ROUTE607);

ROUTE& ROUTE608 =  ROUTE();
ROUTE608.setFromNode(CString("BubbleClock"));
ROUTE608.setFromField(CString("fraction_changed"));
ROUTE608.setToNode(CString("BubblePath1"));
ROUTE608.setToField(CString("set_fraction"));
Scene14.addChild(&ROUTE608);

ROUTE& ROUTE609 =  ROUTE();
ROUTE609.setFromNode(CString("BubbleClock"));
ROUTE609.setFromField(CString("fraction_changed"));
ROUTE609.setToNode(CString("BubblePath2"));
ROUTE609.setToField(CString("set_fraction"));
Scene14.addChild(&ROUTE609);

ROUTE& ROUTE610 =  ROUTE();
ROUTE610.setFromNode(CString("BubbleClock"));
ROUTE610.setFromField(CString("fraction_changed"));
ROUTE610.setToNode(CString("BubblePath3"));
ROUTE610.setToField(CString("set_fraction"));
Scene14.addChild(&ROUTE610);

ROUTE& ROUTE611 =  ROUTE();
ROUTE611.setFromNode(CString("BubbleClock"));
ROUTE611.setFromField(CString("fraction_changed"));
ROUTE611.setToNode(CString("BubblePath4"));
ROUTE611.setToField(CString("set_fraction"));
Scene14.addChild(&ROUTE611);

ROUTE& ROUTE612 =  ROUTE();
ROUTE612.setFromNode(CString("BubbleClock"));
ROUTE612.setFromField(CString("fraction_changed"));
ROUTE612.setToNode(CString("BubblePath5"));
ROUTE612.setToField(CString("set_fraction"));
Scene14.addChild(&ROUTE612);

ROUTE& ROUTE613 =  ROUTE();
ROUTE613.setFromNode(CString("BubbleClock"));
ROUTE613.setFromField(CString("fraction_changed"));
ROUTE613.setToNode(CString("BubblePath6"));
ROUTE613.setToField(CString("set_fraction"));
Scene14.addChild(&ROUTE613);

ROUTE& ROUTE614 =  ROUTE();
ROUTE614.setFromNode(CString("BubbleClock"));
ROUTE614.setFromField(CString("fraction_changed"));
ROUTE614.setToNode(CString("BubblePath7"));
ROUTE614.setToField(CString("set_fraction"));
Scene14.addChild(&ROUTE614);

ROUTE& ROUTE615 =  ROUTE();
ROUTE615.setFromNode(CString("BubbleClock"));
ROUTE615.setFromField(CString("fraction_changed"));
ROUTE615.setToNode(CString("BubblePath8"));
ROUTE615.setToField(CString("set_fraction"));
Scene14.addChild(&ROUTE615);

ROUTE& ROUTE616 =  ROUTE();
ROUTE616.setFromNode(CString("BubbleClock"));
ROUTE616.setFromField(CString("fraction_changed"));
ROUTE616.setToNode(CString("BubblePath9"));
ROUTE616.setToField(CString("set_fraction"));
Scene14.addChild(&ROUTE616);

ROUTE& ROUTE617 =  ROUTE();
ROUTE617.setFromNode(CString("BubbleClock"));
ROUTE617.setFromField(CString("fraction_changed"));
ROUTE617.setToNode(CString("BubblePath10"));
ROUTE617.setToField(CString("set_fraction"));
Scene14.addChild(&ROUTE617);

ROUTE& ROUTE618 =  ROUTE();
ROUTE618.setFromNode(CString("BubblePath1"));
ROUTE618.setFromField(CString("value_changed"));
ROUTE618.setToNode(CString("bubble1"));
ROUTE618.setToField(CString("set_translation"));
Scene14.addChild(&ROUTE618);

ROUTE& ROUTE619 =  ROUTE();
ROUTE619.setFromNode(CString("BubblePath2"));
ROUTE619.setFromField(CString("value_changed"));
ROUTE619.setToNode(CString("bubble2"));
ROUTE619.setToField(CString("set_translation"));
Scene14.addChild(&ROUTE619);

ROUTE& ROUTE620 =  ROUTE();
ROUTE620.setFromNode(CString("BubblePath3"));
ROUTE620.setFromField(CString("value_changed"));
ROUTE620.setToNode(CString("bubble3"));
ROUTE620.setToField(CString("set_translation"));
Scene14.addChild(&ROUTE620);

ROUTE& ROUTE621 =  ROUTE();
ROUTE621.setFromNode(CString("BubblePath4"));
ROUTE621.setFromField(CString("value_changed"));
ROUTE621.setToNode(CString("bubble4"));
ROUTE621.setToField(CString("set_translation"));
Scene14.addChild(&ROUTE621);

ROUTE& ROUTE622 =  ROUTE();
ROUTE622.setFromNode(CString("BubblePath5"));
ROUTE622.setFromField(CString("value_changed"));
ROUTE622.setToNode(CString("bubble5"));
ROUTE622.setToField(CString("set_translation"));
Scene14.addChild(&ROUTE622);

ROUTE& ROUTE623 =  ROUTE();
ROUTE623.setFromNode(CString("BubblePath6"));
ROUTE623.setFromField(CString("value_changed"));
ROUTE623.setToNode(CString("bubble6"));
ROUTE623.setToField(CString("set_translation"));
Scene14.addChild(&ROUTE623);

ROUTE& ROUTE624 =  ROUTE();
ROUTE624.setFromNode(CString("BubblePath7"));
ROUTE624.setFromField(CString("value_changed"));
ROUTE624.setToNode(CString("bubble7"));
ROUTE624.setToField(CString("set_translation"));
Scene14.addChild(&ROUTE624);

ROUTE& ROUTE625 =  ROUTE();
ROUTE625.setFromNode(CString("BubblePath8"));
ROUTE625.setFromField(CString("value_changed"));
ROUTE625.setToNode(CString("bubble8"));
ROUTE625.setToField(CString("set_translation"));
Scene14.addChild(&ROUTE625);

ROUTE& ROUTE626 =  ROUTE();
ROUTE626.setFromNode(CString("BubblePath9"));
ROUTE626.setFromField(CString("value_changed"));
ROUTE626.setToNode(CString("bubble9"));
ROUTE626.setToField(CString("set_translation"));
Scene14.addChild(&ROUTE626);

ROUTE& ROUTE627 =  ROUTE();
ROUTE627.setFromNode(CString("BubblePath10"));
ROUTE627.setFromField(CString("value_changed"));
ROUTE627.setToNode(CString("bubble10"));
ROUTE627.setToField(CString("set_translation"));
Scene14.addChild(&ROUTE627);

ROUTE& ROUTE628 =  ROUTE();
ROUTE628.setFromNode(CString("TriggerProximitySensor"));
ROUTE628.setFromField(CString("enterTime"));
ROUTE628.setToNode(CString("Dive_Time"));
ROUTE628.setToField(CString("set_startTime"));
Scene14.addChild(&ROUTE628);

ROUTE& ROUTE629 =  ROUTE();
ROUTE629.setFromNode(CString("Dive_Time"));
ROUTE629.setFromField(CString("fraction_changed"));
ROUTE629.setToNode(CString("r_ankle_RotationInterpolator_BasicDive"));
ROUTE629.setToField(CString("set_fraction"));
Scene14.addChild(&ROUTE629);

ROUTE& ROUTE630 =  ROUTE();
ROUTE630.setFromNode(CString("Dive_Time"));
ROUTE630.setFromField(CString("fraction_changed"));
ROUTE630.setToNode(CString("r_knee_RotationInterpolator_BasicDive"));
ROUTE630.setToField(CString("set_fraction"));
Scene14.addChild(&ROUTE630);

ROUTE& ROUTE631 =  ROUTE();
ROUTE631.setFromNode(CString("Dive_Time"));
ROUTE631.setFromField(CString("fraction_changed"));
ROUTE631.setToNode(CString("r_hip_RotationInterpolator_BasicDive"));
ROUTE631.setToField(CString("set_fraction"));
Scene14.addChild(&ROUTE631);

ROUTE& ROUTE632 =  ROUTE();
ROUTE632.setFromNode(CString("Dive_Time"));
ROUTE632.setFromField(CString("fraction_changed"));
ROUTE632.setToNode(CString("l_ankle_RotationInterpolator_BasicDive"));
ROUTE632.setToField(CString("set_fraction"));
Scene14.addChild(&ROUTE632);

ROUTE& ROUTE633 =  ROUTE();
ROUTE633.setFromNode(CString("Dive_Time"));
ROUTE633.setFromField(CString("fraction_changed"));
ROUTE633.setToNode(CString("l_knee_RotationInterpolator_BasicDive"));
ROUTE633.setToField(CString("set_fraction"));
Scene14.addChild(&ROUTE633);

ROUTE& ROUTE634 =  ROUTE();
ROUTE634.setFromNode(CString("Dive_Time"));
ROUTE634.setFromField(CString("fraction_changed"));
ROUTE634.setToNode(CString("l_hip_RotationInterpolator_BasicDive"));
ROUTE634.setToField(CString("set_fraction"));
Scene14.addChild(&ROUTE634);

ROUTE& ROUTE635 =  ROUTE();
ROUTE635.setFromNode(CString("Dive_Time"));
ROUTE635.setFromField(CString("fraction_changed"));
ROUTE635.setToNode(CString("lower_body_RotationInterpolator_BasicDive"));
ROUTE635.setToField(CString("set_fraction"));
Scene14.addChild(&ROUTE635);

ROUTE& ROUTE636 =  ROUTE();
ROUTE636.setFromNode(CString("Dive_Time"));
ROUTE636.setFromField(CString("fraction_changed"));
ROUTE636.setToNode(CString("head_RotationInterpolator_BasicDive"));
ROUTE636.setToField(CString("set_fraction"));
Scene14.addChild(&ROUTE636);

ROUTE& ROUTE637 =  ROUTE();
ROUTE637.setFromNode(CString("Dive_Time"));
ROUTE637.setFromField(CString("fraction_changed"));
ROUTE637.setToNode(CString("neck_RotationInterpolator_BasicDive"));
ROUTE637.setToField(CString("set_fraction"));
Scene14.addChild(&ROUTE637);

ROUTE& ROUTE638 =  ROUTE();
ROUTE638.setFromNode(CString("Dive_Time"));
ROUTE638.setFromField(CString("fraction_changed"));
ROUTE638.setToNode(CString("upper_body_RotationInterpolator_BasicDive"));
ROUTE638.setToField(CString("set_fraction"));
Scene14.addChild(&ROUTE638);

ROUTE& ROUTE639 =  ROUTE();
ROUTE639.setFromNode(CString("Dive_Time"));
ROUTE639.setFromField(CString("fraction_changed"));
ROUTE639.setToNode(CString("whole_body_RotationInterpolator_BasicDive"));
ROUTE639.setToField(CString("set_fraction"));
Scene14.addChild(&ROUTE639);

ROUTE& ROUTE640 =  ROUTE();
ROUTE640.setFromNode(CString("Dive_Time"));
ROUTE640.setFromField(CString("fraction_changed"));
ROUTE640.setToNode(CString("whole_body_TranslationInterpolator_BasicDive"));
ROUTE640.setToField(CString("set_fraction"));
Scene14.addChild(&ROUTE640);

ROUTE& ROUTE641 =  ROUTE();
ROUTE641.setFromNode(CString("r_ankle_RotationInterpolator_BasicDive"));
ROUTE641.setFromField(CString("value_changed"));
ROUTE641.setToNode(CString("hanim_r_ankle"));
ROUTE641.setToField(CString("set_rotation"));
Scene14.addChild(&ROUTE641);

ROUTE& ROUTE642 =  ROUTE();
ROUTE642.setFromNode(CString("r_knee_RotationInterpolator_BasicDive"));
ROUTE642.setFromField(CString("value_changed"));
ROUTE642.setToNode(CString("hanim_r_knee"));
ROUTE642.setToField(CString("set_rotation"));
Scene14.addChild(&ROUTE642);

ROUTE& ROUTE643 =  ROUTE();
ROUTE643.setFromNode(CString("r_hip_RotationInterpolator_BasicDive"));
ROUTE643.setFromField(CString("value_changed"));
ROUTE643.setToNode(CString("hanim_r_hip"));
ROUTE643.setToField(CString("set_rotation"));
Scene14.addChild(&ROUTE643);

ROUTE& ROUTE644 =  ROUTE();
ROUTE644.setFromNode(CString("l_ankle_RotationInterpolator_BasicDive"));
ROUTE644.setFromField(CString("value_changed"));
ROUTE644.setToNode(CString("hanim_l_ankle"));
ROUTE644.setToField(CString("set_rotation"));
Scene14.addChild(&ROUTE644);

ROUTE& ROUTE645 =  ROUTE();
ROUTE645.setFromNode(CString("l_knee_RotationInterpolator_BasicDive"));
ROUTE645.setFromField(CString("value_changed"));
ROUTE645.setToNode(CString("hanim_l_knee"));
ROUTE645.setToField(CString("set_rotation"));
Scene14.addChild(&ROUTE645);

ROUTE& ROUTE646 =  ROUTE();
ROUTE646.setFromNode(CString("l_hip_RotationInterpolator_BasicDive"));
ROUTE646.setFromField(CString("value_changed"));
ROUTE646.setToNode(CString("finWarpScript"));
ROUTE646.setToField(CString("set_rotationL"));
Scene14.addChild(&ROUTE646);

ROUTE& ROUTE647 =  ROUTE();
ROUTE647.setFromNode(CString("l_hip_RotationInterpolator_BasicDive"));
ROUTE647.setFromField(CString("value_changed"));
ROUTE647.setToNode(CString("finWarpScript"));
ROUTE647.setToField(CString("set_rotationR"));
Scene14.addChild(&ROUTE647);

ROUTE& ROUTE648 =  ROUTE();
ROUTE648.setFromNode(CString("finWarpScript"));
ROUTE648.setFromField(CString("fin_warpL"));
ROUTE648.setToNode(CString("FinScript"));
ROUTE648.setToField(CString("finL"));
Scene14.addChild(&ROUTE648);

ROUTE& ROUTE649 =  ROUTE();
ROUTE649.setFromNode(CString("finWarpScript"));
ROUTE649.setFromField(CString("fin_warpR"));
ROUTE649.setToNode(CString("FinScript"));
ROUTE649.setToField(CString("finR"));
Scene14.addChild(&ROUTE649);

ROUTE& ROUTE650 =  ROUTE();
ROUTE650.setFromNode(CString("l_hip_RotationInterpolator_BasicDive"));
ROUTE650.setFromField(CString("value_changed"));
ROUTE650.setToNode(CString("hanim_l_hip"));
ROUTE650.setToField(CString("set_rotation"));
Scene14.addChild(&ROUTE650);

ROUTE& ROUTE651 =  ROUTE();
ROUTE651.setFromNode(CString("lower_body_RotationInterpolator_BasicDive"));
ROUTE651.setFromField(CString("value_changed"));
ROUTE651.setToNode(CString("hanim_sacroiliac"));
ROUTE651.setToField(CString("set_rotation"));
Scene14.addChild(&ROUTE651);

ROUTE& ROUTE652 =  ROUTE();
ROUTE652.setFromNode(CString("head_RotationInterpolator_BasicDive"));
ROUTE652.setFromField(CString("value_changed"));
ROUTE652.setToNode(CString("hanim_skullbase"));
ROUTE652.setToField(CString("set_rotation"));
Scene14.addChild(&ROUTE652);

ROUTE& ROUTE653 =  ROUTE();
ROUTE653.setFromNode(CString("neck_RotationInterpolator_BasicDive"));
ROUTE653.setFromField(CString("value_changed"));
ROUTE653.setToNode(CString("hanim_vc4"));
ROUTE653.setToField(CString("set_rotation"));
Scene14.addChild(&ROUTE653);

ROUTE& ROUTE654 =  ROUTE();
ROUTE654.setFromNode(CString("upper_body_RotationInterpolator_BasicDive"));
ROUTE654.setFromField(CString("value_changed"));
ROUTE654.setToNode(CString("hanim_vl1"));
ROUTE654.setToField(CString("set_rotation"));
Scene14.addChild(&ROUTE654);

ROUTE& ROUTE655 =  ROUTE();
ROUTE655.setFromNode(CString("whole_body_RotationInterpolator_BasicDive"));
ROUTE655.setFromField(CString("value_changed"));
ROUTE655.setToNode(CString("hanim_humanoid_root"));
ROUTE655.setToField(CString("set_rotation"));
Scene14.addChild(&ROUTE655);

ROUTE& ROUTE656 =  ROUTE();
ROUTE656.setFromNode(CString("whole_body_TranslationInterpolator_BasicDive"));
ROUTE656.setFromField(CString("value_changed"));
ROUTE656.setToNode(CString("hanim_humanoid_root"));
ROUTE656.setToField(CString("set_translation"));
Scene14.addChild(&ROUTE656);

ROUTE& ROUTE657 =  ROUTE();
ROUTE657.setFromNode(CString("Dive_Time"));
ROUTE657.setFromField(CString("fraction_changed"));
ROUTE657.setToNode(CString("r_wrist_RotationInterpolator_BasicDive"));
ROUTE657.setToField(CString("set_fraction"));
Scene14.addChild(&ROUTE657);

ROUTE& ROUTE658 =  ROUTE();
ROUTE658.setFromNode(CString("Dive_Time"));
ROUTE658.setFromField(CString("fraction_changed"));
ROUTE658.setToNode(CString("r_elbow_RotationInterpolator_BasicDive"));
ROUTE658.setToField(CString("set_fraction"));
Scene14.addChild(&ROUTE658);

ROUTE& ROUTE659 =  ROUTE();
ROUTE659.setFromNode(CString("Dive_Time"));
ROUTE659.setFromField(CString("fraction_changed"));
ROUTE659.setToNode(CString("r_shoulder_RotationInterpolator_BasicDive"));
ROUTE659.setToField(CString("set_fraction"));
Scene14.addChild(&ROUTE659);

ROUTE& ROUTE660 =  ROUTE();
ROUTE660.setFromNode(CString("Dive_Time"));
ROUTE660.setFromField(CString("fraction_changed"));
ROUTE660.setToNode(CString("l_wrist_RotationInterpolator_BasicDive"));
ROUTE660.setToField(CString("set_fraction"));
Scene14.addChild(&ROUTE660);

ROUTE& ROUTE661 =  ROUTE();
ROUTE661.setFromNode(CString("Dive_Time"));
ROUTE661.setFromField(CString("fraction_changed"));
ROUTE661.setToNode(CString("l_elbow_RotationInterpolator_BasicDive"));
ROUTE661.setToField(CString("set_fraction"));
Scene14.addChild(&ROUTE661);

ROUTE& ROUTE662 =  ROUTE();
ROUTE662.setFromNode(CString("Dive_Time"));
ROUTE662.setFromField(CString("fraction_changed"));
ROUTE662.setToNode(CString("l_shoulder_RotationInterpolator_BasicDive"));
ROUTE662.setToField(CString("set_fraction"));
Scene14.addChild(&ROUTE662);

ROUTE& ROUTE663 =  ROUTE();
ROUTE663.setFromNode(CString("r_wrist_RotationInterpolator_BasicDive"));
ROUTE663.setFromField(CString("value_changed"));
ROUTE663.setToNode(CString("hanim_r_wrist"));
ROUTE663.setToField(CString("set_rotation"));
Scene14.addChild(&ROUTE663);

ROUTE& ROUTE664 =  ROUTE();
ROUTE664.setFromNode(CString("r_elbow_RotationInterpolator_BasicDive"));
ROUTE664.setFromField(CString("value_changed"));
ROUTE664.setToNode(CString("hanim_r_elbow"));
ROUTE664.setToField(CString("set_rotation"));
Scene14.addChild(&ROUTE664);

ROUTE& ROUTE665 =  ROUTE();
ROUTE665.setFromNode(CString("r_shoulder_RotationInterpolator_BasicDive"));
ROUTE665.setFromField(CString("value_changed"));
ROUTE665.setToNode(CString("hanim_r_shoulder"));
ROUTE665.setToField(CString("set_rotation"));
Scene14.addChild(&ROUTE665);

ROUTE& ROUTE666 =  ROUTE();
ROUTE666.setFromNode(CString("l_wrist_RotationInterpolator_BasicDive"));
ROUTE666.setFromField(CString("value_changed"));
ROUTE666.setToNode(CString("hanim_l_wrist"));
ROUTE666.setToField(CString("set_rotation"));
Scene14.addChild(&ROUTE666);

ROUTE& ROUTE667 =  ROUTE();
ROUTE667.setFromNode(CString("l_elbow_RotationInterpolator_BasicDive"));
ROUTE667.setFromField(CString("value_changed"));
ROUTE667.setToNode(CString("hanim_l_elbow"));
ROUTE667.setToField(CString("set_rotation"));
Scene14.addChild(&ROUTE667);

ROUTE& ROUTE668 =  ROUTE();
ROUTE668.setFromNode(CString("l_shoulder_RotationInterpolator_BasicDive"));
ROUTE668.setFromField(CString("value_changed"));
ROUTE668.setToNode(CString("hanim_l_shoulder"));
ROUTE668.setToField(CString("set_rotation"));
Scene14.addChild(&ROUTE668);

X3D0.setScene(&Scene14);

//}
