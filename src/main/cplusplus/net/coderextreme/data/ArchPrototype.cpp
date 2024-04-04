#define False false
#define True true
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
int main(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(CString("Immersive"));
X3D0.setVersion(CString("3.3"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(CString("title"));
meta2.setContent(CString("ArchPrototype.x3d"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(CString("description"));
meta3.setContent(CString("Create an arch. Can modify general parameters: clearSpanWidth, riseHeight, depth, topAbutmentHeight, pierWidth, pierHeight. See the reference file ArchModelingDiagrams.pdf to find further information. See also ArchPrototypeScript_more_readable.js."));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("description"));
meta4.setContent(CString("Possibility to create shapes related to arch: ArchHalf; IntradosOnly; ArchFilled; ArchHalfFilled; Lintel. See the reference file ArchModelingDiagrams.pdf to find further information."));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("creator"));
meta5.setContent(CString("Michele Foti, Don Brutzman"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("created"));
meta6.setContent(CString("15 December 2014"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("modified"));
meta7.setContent(CString("27 November 2015"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(CString("reference"));
meta8.setContent(CString("ArchModelingDiagrams.pdf"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(CString("reference"));
meta9.setContent(CString("https://en.wikipedia.org/wiki/Arch"));
head1.addMeta(&meta9);

meta& meta10 =  meta();
meta10.setName(CString("identifier"));
meta10.setContent(CString("http://X3dGraphics.com/examples/X3dForAdvancedModeling/Buildings/ArchPrototype.x3d"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(CString("generator"));
meta11.setContent(CString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(CString("license"));
meta12.setContent(CString("../license.html"));
head1.addMeta(&meta12);

X3D0.setHead(&head1);

Scene& Scene13 =  Scene();
ProtoDeclare& ProtoDeclare14 =  ProtoDeclare();
ProtoDeclare14.setName(CString("ArchPrototype"));
ProtoDeclare14.setAppinfo(CString("Create an arch. Can modify general parameters: clearSpanWidth, riseHeight, depth, topAbutmentHeight, pierWidth, pierHeight. - Possibility to create shapes related to an arch: ArchHalf; IntradosOnly; ArchFilled; ArchHalfFilled; Lintel. See the reference file ArchModelingDiagrams.pdf to find further information. See also ArchPrototypeScript_more_readable.js.js."));
ProtoInterface& ProtoInterface15 =  ProtoInterface();
//COLOR OF ARCH
//INPUT PARAMETERS
//General parameters: measures in meters
//Parameters to create to create shapes related to arch: put true to apply
field& field16 =  field();
field16.setName(CString("diffuseColor"));
field16.setAccessType(CString("inputOutput"));
field16.setAppinfo(CString("color of arch"));
field16.setType(CString("SFColor"));
field16.setValue(CString("0.2 0.8 0.8"));
ProtoInterface15.addChild(&field16);

field& field17 =  field();
field17.setName(CString("emissiveColor"));
field17.setAccessType(CString("inputOutput"));
field17.setAppinfo(CString("color of arch"));
field17.setType(CString("SFColor"));
field17.setValue(CString("0.2 0.8 0.8"));
ProtoInterface15.addChild(&field17);

field& field18 =  field();
field18.setName(CString("clearSpanWidth"));
field18.setAccessType(CString("initializeOnly"));
field18.setAppinfo(CString("clearSpanWidth: clearSpanWidth must be double of riseHeight to obtain an half circumference"));
field18.setType(CString("SFFloat"));
field18.setValue(CString("4"));
ProtoInterface15.addChild(&field18);

field& field19 =  field();
field19.setName(CString("riseHeight"));
field19.setAccessType(CString("initializeOnly"));
field19.setAppinfo(CString("riseHeight: riseHeight must be half of clearSpanWidth to obtain an half circumference"));
field19.setType(CString("SFFloat"));
field19.setValue(CString("2"));
ProtoInterface15.addChild(&field19);

field& field20 =  field();
field20.setName(CString("depth"));
field20.setAccessType(CString("initializeOnly"));
field20.setAppinfo(CString("depth"));
field20.setType(CString("SFFloat"));
field20.setValue(CString("3"));
ProtoInterface15.addChild(&field20);

field& field21 =  field();
field21.setName(CString("topAbutmentHeight"));
field21.setAccessType(CString("initializeOnly"));
field21.setAppinfo(CString("topAbutmentHeight:topAbutmentHeight=0 means no topAbutment"));
field21.setType(CString("SFFloat"));
field21.setValue(CString("0.5"));
ProtoInterface15.addChild(&field21);

field& field22 =  field();
field22.setName(CString("pierWidth"));
field22.setAccessType(CString("initializeOnly"));
field22.setAppinfo(CString("pierWidth:pierWidtht=0 means no pierWidth"));
field22.setType(CString("SFFloat"));
field22.setValue(CString("0.5"));
ProtoInterface15.addChild(&field22);

field& field23 =  field();
field23.setName(CString("pierHeight"));
field23.setAccessType(CString("initializeOnly"));
field23.setAppinfo(CString("pierHeight: pierHeight=0 means no pierHeight"));
field23.setType(CString("SFFloat"));
field23.setValue(CString("1"));
ProtoInterface15.addChild(&field23);

field& field24 =  field();
field24.setName(CString("archHalf"));
field24.setAccessType(CString("initializeOnly"));
field24.setAppinfo(CString("archHalf: can modify also clearSpanWidth, riseHeight, depth, pierWidth, pierHeight, topAbutmentHeight, archHalfExtensionWidth at purpose, clearSpanWidth measure refers to a full arc, consider clearSpanWidth/2 for the archHalf width"));
field24.setType(CString("SFBool"));
field24.setValue(CString("false"));
ProtoInterface15.addChild(&field24);

field& field25 =  field();
field25.setName(CString("archHalfExtensionWidth"));
field25.setAccessType(CString("initializeOnly"));
field25.setAppinfo(CString("archHalfExtensionWidth: measure in meters, use only if archHalf=true, it is the width of the etension of the abutment of the archHalf. See the reference file ArchModelingDiagrams.pdf to find further information."));
field25.setType(CString("SFFloat"));
field25.setValue(CString("0"));
ProtoInterface15.addChild(&field25);

field& field26 =  field();
field26.setName(CString("onlyIntrados"));
field26.setAccessType(CString("initializeOnly"));
field26.setAppinfo(CString("onlyIntrados: note it is a flat curved surface, can modify also clearSpanWidth, riseHeight, depth at purpose, if needed apply archHalf=true."));
field26.setType(CString("SFBool"));
field26.setValue(CString("false"));
ProtoInterface15.addChild(&field26);

field& field27 =  field();
field27.setName(CString("archFilled"));
field27.setAccessType(CString("initializeOnly"));
field27.setAppinfo(CString("archFilled: note it is an half cylinder, can modify also clearSpanWidth, riseHeight, depth at purpose."));
field27.setType(CString("SFBool"));
field27.setValue(CString("false"));
ProtoInterface15.addChild(&field27);

field& field28 =  field();
field28.setName(CString("archHalfFilled"));
field28.setAccessType(CString("initializeOnly"));
field28.setAppinfo(CString("archHalfFilled: note it is a quarter cylinder, can modify also clearSpanWidth, riseHeight, depth at purpose, clearSpanWidth measure refers to a full arc, consider clearSpanWidth/2 for the archHalfFilled width."));
field28.setType(CString("SFBool"));
field28.setValue(CString("false"));
ProtoInterface15.addChild(&field28);

field& field29 =  field();
field29.setName(CString("lintel"));
field29.setAccessType(CString("initializeOnly"));
field29.setAppinfo(CString("lintel: no arc is rendered, but a lintel: topAbutmentHeight on pierHeight, total height is pierHeight + topAbutmentHeight, if needed apply archHalf=true."));
field29.setType(CString("SFBool"));
field29.setValue(CString("false"));
ProtoInterface15.addChild(&field29);

ProtoDeclare14.addChild(&ProtoInterface15);

ProtoBody& ProtoBody30 =  ProtoBody();
//First node determines node type of this prototype
//IndexedFaceset creates arch
Transform& Transform31 =  Transform();
Transform31.setDEF(CString("ArchTransform"));
Shape& Shape32 =  Shape();
Shape32.setDEF(CString("Arch"));
//note that convex='false' (meaning concave geometry) is crucial for this IFS of a geometric chord to render properly
IndexedFaceSet& IndexedFaceSet33 =  IndexedFaceSet();
IndexedFaceSet33.setDEF(CString("ArchIndex"));
IndexedFaceSet33.setConvex(False);
IndexedFaceSet33.setSolid(False);
Coordinate& Coordinate34 =  Coordinate();
Coordinate34.setDEF(CString("ArchChord"));
IndexedFaceSet33.setCoord(&Coordinate34);

Shape32.setGeometry(&IndexedFaceSet33);

Appearance& Appearance35 =  Appearance();
Material& Material36 =  Material();
Material36.setDEF(CString("MaterialNode"));
IS& IS37 =  IS();
Connect& connect38 =  Connect();
connect38.setNodeField(CString("emissiveColor"));
connect38.setProtoField(CString("emissiveColor"));
IS37.addChild(&connect38);

Connect& connect39 =  Connect();
connect39.setNodeField(CString("diffuseColor"));
connect39.setProtoField(CString("diffuseColor"));
IS37.addChild(&connect39);

Material36.addChild(&IS37);

Appearance35.addChild(&Material36);

Shape32.addChild(&Appearance35);

Transform31.addChild(&Shape32);

ProtoBody30.addChild(&Transform31);

//Subsequent nodes do not render, but still must be a valid X3D subgraph
//This embedded Script provides the X3D author with additional visibility and control over prototype inputs and outputs
Script& Script40 =  Script();
Script40.setDEF(CString("ArchPrototypeScript"));
Script40.setUrl(new CString[2]{CString("../node/ArchPrototypeScript.js"), CString("https://coderextreme.net/X3DJSONLD/src/main/node/ArchPrototypeScript.js")}, 2);
//INPUT PARAMETERS
//General parameters
//Parameters to create to create shapes related to arch: put true to apply
//OUTPUT PARAMETERS
field& field41 =  field();
field41.setName(CString("clearSpanWidth"));
field41.setAccessType(CString("initializeOnly"));
field41.setAppinfo(CString("user or default input for clearSpanWidth parameter"));
field41.setType(CString("SFFloat"));
Script40.addChild(&field41);

field& field42 =  field();
field42.setName(CString("riseHeight"));
field42.setAccessType(CString("initializeOnly"));
field42.setAppinfo(CString("user or default input for riseHeight parameter"));
field42.setType(CString("SFFloat"));
Script40.addChild(&field42);

field& field43 =  field();
field43.setName(CString("depth"));
field43.setAccessType(CString("initializeOnly"));
field43.setAppinfo(CString("user or default input for depth parameter"));
field43.setType(CString("SFFloat"));
Script40.addChild(&field43);

field& field44 =  field();
field44.setName(CString("topAbutmentHeight"));
field44.setAccessType(CString("initializeOnly"));
field44.setAppinfo(CString("user or default input for topAbutmentHeight parameter"));
field44.setType(CString("SFFloat"));
Script40.addChild(&field44);

field& field45 =  field();
field45.setName(CString("pierWidth"));
field45.setAccessType(CString("initializeOnly"));
field45.setAppinfo(CString("user or default input for pierWidth parameter"));
field45.setType(CString("SFFloat"));
Script40.addChild(&field45);

field& field46 =  field();
field46.setName(CString("pierHeight"));
field46.setAccessType(CString("initializeOnly"));
field46.setAppinfo(CString("user or default input for pierHeight parameter"));
field46.setType(CString("SFFloat"));
Script40.addChild(&field46);

field& field47 =  field();
field47.setName(CString("archHalf"));
field47.setAccessType(CString("initializeOnly"));
field47.setAppinfo(CString("user or default input for archHalf parameter"));
field47.setType(CString("SFBool"));
Script40.addChild(&field47);

field& field48 =  field();
field48.setName(CString("archHalfExtensionWidth"));
field48.setAccessType(CString("initializeOnly"));
field48.setAppinfo(CString("user or default input for archHalfExtensionWidth parameter"));
field48.setType(CString("SFFloat"));
Script40.addChild(&field48);

field& field49 =  field();
field49.setName(CString("onlyIntrados"));
field49.setAccessType(CString("initializeOnly"));
field49.setAppinfo(CString("user or default input for onlyIntrados parameter"));
field49.setType(CString("SFBool"));
Script40.addChild(&field49);

field& field50 =  field();
field50.setName(CString("archFilled"));
field50.setAccessType(CString("initializeOnly"));
field50.setAppinfo(CString("user or default input for archFilled parameter"));
field50.setType(CString("SFBool"));
Script40.addChild(&field50);

field& field51 =  field();
field51.setName(CString("archHalfFilled"));
field51.setAccessType(CString("initializeOnly"));
field51.setAppinfo(CString("user or default input for archHalfFilled parameter"));
field51.setType(CString("SFBool"));
Script40.addChild(&field51);

field& field52 =  field();
field52.setName(CString("lintel"));
field52.setAccessType(CString("initializeOnly"));
field52.setAppinfo(CString("user or default input for lintel parameter"));
field52.setType(CString("SFBool"));
Script40.addChild(&field52);

field& field53 =  field();
field53.setName(CString("computedScale"));
field53.setAccessType(CString("outputOnly"));
field53.setAppinfo(CString("computedScale: modify scale field - NOTE it is not used to modify the whole arch, but to modify clearSpanWidth, riseHeight, depth. It does not affect topAbutmentHeight, pierWidth, pierHeight, archHalfExtensionWidth"));
field53.setType(CString("SFVec3f"));
Script40.addChild(&field53);

field& field54 =  field();
field54.setName(CString("pointOut"));
field54.setAccessType(CString("outputOnly"));
field54.setAppinfo(CString("send computed points to the Coordinate node"));
field54.setType(CString("MFVec3f"));
Script40.addChild(&field54);

field& field55 =  field();
field55.setName(CString("indexOut"));
field55.setAccessType(CString("outputOnly"));
field55.setAppinfo(CString("send computed indices to the IndexedFaceSet node"));
field55.setType(CString("MFInt32"));
Script40.addChild(&field55);

IS& IS56 =  IS();
Connect& connect57 =  Connect();
connect57.setNodeField(CString("clearSpanWidth"));
connect57.setProtoField(CString("clearSpanWidth"));
IS56.addChild(&connect57);

Connect& connect58 =  Connect();
connect58.setNodeField(CString("riseHeight"));
connect58.setProtoField(CString("riseHeight"));
IS56.addChild(&connect58);

Connect& connect59 =  Connect();
connect59.setNodeField(CString("depth"));
connect59.setProtoField(CString("depth"));
IS56.addChild(&connect59);

Connect& connect60 =  Connect();
connect60.setNodeField(CString("pierWidth"));
connect60.setProtoField(CString("pierWidth"));
IS56.addChild(&connect60);

Connect& connect61 =  Connect();
connect61.setNodeField(CString("topAbutmentHeight"));
connect61.setProtoField(CString("topAbutmentHeight"));
IS56.addChild(&connect61);

Connect& connect62 =  Connect();
connect62.setNodeField(CString("pierHeight"));
connect62.setProtoField(CString("pierHeight"));
IS56.addChild(&connect62);

Connect& connect63 =  Connect();
connect63.setNodeField(CString("archHalf"));
connect63.setProtoField(CString("archHalf"));
IS56.addChild(&connect63);

Connect& connect64 =  Connect();
connect64.setNodeField(CString("archHalfExtensionWidth"));
connect64.setProtoField(CString("archHalfExtensionWidth"));
IS56.addChild(&connect64);

Connect& connect65 =  Connect();
connect65.setNodeField(CString("onlyIntrados"));
connect65.setProtoField(CString("onlyIntrados"));
IS56.addChild(&connect65);

Connect& connect66 =  Connect();
connect66.setNodeField(CString("archFilled"));
connect66.setProtoField(CString("archFilled"));
IS56.addChild(&connect66);

Connect& connect67 =  Connect();
connect67.setNodeField(CString("archHalfFilled"));
connect67.setProtoField(CString("archHalfFilled"));
IS56.addChild(&connect67);

Connect& connect68 =  Connect();
connect68.setNodeField(CString("lintel"));
connect68.setProtoField(CString("lintel"));
IS56.addChild(&connect68);

Script40.addChild(&IS56);

ProtoBody30.addChild(&Script40);

ROUTE& ROUTE69 =  ROUTE();
ROUTE69.setFromField(CString("computedScale"));
ROUTE69.setFromNode(CString("ArchPrototypeScript"));
ROUTE69.setToField(CString("scale"));
ROUTE69.setToNode(CString("ArchTransform"));
ProtoBody30.addChild(&ROUTE69);

ROUTE& ROUTE70 =  ROUTE();
ROUTE70.setFromField(CString("pointOut"));
ROUTE70.setFromNode(CString("ArchPrototypeScript"));
ROUTE70.setToField(CString("point"));
ROUTE70.setToNode(CString("ArchChord"));
ProtoBody30.addChild(&ROUTE70);

ROUTE& ROUTE71 =  ROUTE();
ROUTE71.setFromField(CString("indexOut"));
ROUTE71.setFromNode(CString("ArchPrototypeScript"));
ROUTE71.setToField(CString("set_coordIndex"));
ROUTE71.setToNode(CString("ArchIndex"));
ProtoBody30.addChild(&ROUTE71);

ProtoDeclare14.addChild(&ProtoBody30);

Scene13.addChild(&ProtoDeclare14);

ProtoInstance& ProtoInstance72 =  ProtoInstance();
ProtoInstance72.setName(CString("ArchPrototype"));
ProtoInstance72.setDEF(CString("ArchInstance"));
fieldValue& fieldValue73 =  fieldValue();
fieldValue73.setName(CString("diffuseColor"));
fieldValue73.setValue(CString("0.5 0.3 0.6"));
ProtoInstance72.addChild(&fieldValue73);

fieldValue& fieldValue74 =  fieldValue();
fieldValue74.setName(CString("emissiveColor"));
fieldValue74.setValue(CString("0.5 0.3 0.6"));
ProtoInstance72.addChild(&fieldValue74);

fieldValue& fieldValue75 =  fieldValue();
fieldValue75.setName(CString("clearSpanWidth"));
fieldValue75.setValue(CString("5"));
ProtoInstance72.addChild(&fieldValue75);

fieldValue& fieldValue76 =  fieldValue();
fieldValue76.setName(CString("riseHeight"));
fieldValue76.setValue(CString("2.5"));
ProtoInstance72.addChild(&fieldValue76);

fieldValue& fieldValue77 =  fieldValue();
fieldValue77.setName(CString("depth"));
fieldValue77.setValue(CString("2"));
ProtoInstance72.addChild(&fieldValue77);

fieldValue& fieldValue78 =  fieldValue();
fieldValue78.setName(CString("topAbutmentHeight"));
fieldValue78.setValue(CString("0.6"));
ProtoInstance72.addChild(&fieldValue78);

fieldValue& fieldValue79 =  fieldValue();
fieldValue79.setName(CString("pierWidth"));
fieldValue79.setValue(CString("1"));
ProtoInstance72.addChild(&fieldValue79);

fieldValue& fieldValue80 =  fieldValue();
fieldValue80.setName(CString("pierHeight"));
fieldValue80.setValue(CString("2"));
ProtoInstance72.addChild(&fieldValue80);

Scene13.addChild(&ProtoInstance72);

//Add any ROUTEs here that connect ProtoInstance to/from prior nodes in Scene (and outside of ProtoDeclare)
Inline& Inline81 =  Inline();
Inline81.setDEF(CString("CoordinateAxes"));
Inline81.setUrl(new CString[1]{CString("../data/CoordinateAxes.x3d")}, 1);
Scene13.addChild(&Inline81);

X3D0.setScene(&Scene13);

}
