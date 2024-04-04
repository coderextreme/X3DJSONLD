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
meta2.setContent(CString("glflowers.x3d"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(CString("creator"));
meta3.setContent(CString("John Carlson"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("description"));
meta4.setContent(CString("5 or more prismatic flowers"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("generator"));
meta5.setContent(CString("X3D-Edit, https://savage.nps.edu/X3D-Edit"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("identifier"));
meta6.setContent(CString("https://coderextreme.net/X3DJSONLD/src/main/data/glflowers.x3d"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
NavigationInfo& NavigationInfo8 =  NavigationInfo();
Scene7.addChild(&NavigationInfo8);

Background& Background9 =  Background();
Background9.setBackUrl(new CString[2]{CString("../resources/images/all_probes/stpeters_cross/stpeters_back.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")}, 2);
Background9.setBottomUrl(new CString[2]{CString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")}, 2);
Background9.setFrontUrl(new CString[2]{CString("../resources/images/all_probes/stpeters_cross/stpeters_front.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")}, 2);
Background9.setLeftUrl(new CString[2]{CString("../resources/images/all_probes/stpeters_cross/stpeters_left.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")}, 2);
Background9.setRightUrl(new CString[2]{CString("../resources/images/all_probes/stpeters_cross/stpeters_right.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")}, 2);
Background9.setTopUrl(new CString[2]{CString("../resources/images/all_probes/stpeters_cross/stpeters_top.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")}, 2);
Scene7.addChild(&Background9);

Group& Group10 =  Group();
ExternProtoDeclare& ExternProtoDeclare11 =  ExternProtoDeclare();
ExternProtoDeclare11.setName(CString("FlowerProto"));
ExternProtoDeclare11.setUrl(new CString[1]{CString("../data/flowerproto.x3d#FlowerProto")}, 1);
field& field12 =  field();
field12.setName(CString("vertex"));
field12.setAccessType(CString("inputOutput"));
field12.setType(CString("MFString"));
ExternProtoDeclare11.addChild(&field12);

field& field13 =  field();
field13.setName(CString("fragment"));
field13.setAccessType(CString("inputOutput"));
field13.setType(CString("MFString"));
ExternProtoDeclare11.addChild(&field13);

Group10.addChild(&ExternProtoDeclare11);

ProtoDeclare& ProtoDeclare14 =  ProtoDeclare();
ProtoDeclare14.setName(CString("flower"));
ProtoBody& ProtoBody15 =  ProtoBody();
Group& Group16 =  Group();
ProtoInstance& ProtoInstance17 =  ProtoInstance();
ProtoInstance17.setName(CString("FlowerProto"));
fieldValue& fieldValue18 =  fieldValue();
fieldValue18.setName(CString("vertex"));
fieldValue18.setValue(CString("\"../shaders/gl_flowers_chromatic.vs\""));
ProtoInstance17.addChild(&fieldValue18);

fieldValue& fieldValue19 =  fieldValue();
fieldValue19.setName(CString("fragment"));
fieldValue19.setValue(CString("\"../shaders/common.fs\""));
ProtoInstance17.addChild(&fieldValue19);

Group16.addChild(&ProtoInstance17);

ProtoBody15.addChild(&Group16);

ProtoDeclare14.addChild(&ProtoBody15);

Group10.addChild(&ProtoDeclare14);

ProtoInstance& ProtoInstance20 =  ProtoInstance();
ProtoInstance20.setName(CString("flower"));
Group10.addChild(&ProtoInstance20);

ProtoInstance& ProtoInstance21 =  ProtoInstance();
ProtoInstance21.setName(CString("flower"));
Group10.addChild(&ProtoInstance21);

ProtoInstance& ProtoInstance22 =  ProtoInstance();
ProtoInstance22.setName(CString("flower"));
Group10.addChild(&ProtoInstance22);

ProtoInstance& ProtoInstance23 =  ProtoInstance();
ProtoInstance23.setName(CString("flower"));
Group10.addChild(&ProtoInstance23);

ProtoInstance& ProtoInstance24 =  ProtoInstance();
ProtoInstance24.setName(CString("flower"));
Group10.addChild(&ProtoInstance24);

ProtoInstance& ProtoInstance25 =  ProtoInstance();
ProtoInstance25.setName(CString("flower"));
Group10.addChild(&ProtoInstance25);

Scene7.addChild(&Group10);

X3D0.setScene(&Scene7);

}
