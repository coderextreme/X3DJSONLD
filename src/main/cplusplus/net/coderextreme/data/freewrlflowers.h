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
meta2.setContent(CString("freewrlflowers.x3d"));
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
meta6.setContent(CString("https://coderextreme.net/X3DJSONLD/src/main/data/freewrlflowers.x3d"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
NavigationInfo& NavigationInfo8 =  NavigationInfo();
Scene7.addChild(&NavigationInfo8);

Viewpoint& Viewpoint9 =  Viewpoint();
Viewpoint9.setDescription(CString("Tour Views"));
Viewpoint9.setPosition(new float[]{0.0,0.0,50.0});
Scene7.addChild(&Viewpoint9);

Background& Background10 =  Background();
Background10.setBackUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_back.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")}, 2);
Background10.setBottomUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")}, 2);
Background10.setFrontUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_front.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")}, 2);
Background10.setLeftUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_left.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")}, 2);
Background10.setRightUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_right.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")}, 2);
Background10.setTopUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_top.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")}, 2);
Scene7.addChild(&Background10);

Group& Group11 =  Group();
ExternProtoDeclare& ExternProtoDeclare12 =  ExternProtoDeclare();
ExternProtoDeclare12.setName(CString("FlowerProto"));
ExternProtoDeclare12.setUrl(new CString[]{CString("../data/flowerprotofreewrl.x3d#FlowerProto"), CString("https://coderextreme.net/X3DJSONLD/src/main/data/flowerprotofreewrl.x3d#FlowerProto")}, 2);
field& field13 =  field();
field13.setName(CString("vertex"));
field13.setAccessType(CString("inputOutput"));
field13.setType(CString("MFString"));
ExternProtoDeclare12.addChild(&field13);

field& field14 =  field();
field14.setName(CString("fragment"));
field14.setAccessType(CString("inputOutput"));
field14.setType(CString("MFString"));
ExternProtoDeclare12.addChild(&field14);

Group11.addChild(&ExternProtoDeclare12);

ProtoDeclare& ProtoDeclare15 =  ProtoDeclare();
ProtoDeclare15.setName(CString("flower"));
ProtoBody& ProtoBody16 =  ProtoBody();
Group& Group17 =  Group();
ProtoInstance& ProtoInstance18 =  ProtoInstance();
ProtoInstance18.setName(CString("FlowerProto"));
fieldValue& fieldValue19 =  fieldValue();
fieldValue19.setName(CString("vertex"));
fieldValue19.setValue(CString("\"../shaders/freewrl_flowers_chromatic.vs\""));
ProtoInstance18.addChild(&fieldValue19);

fieldValue& fieldValue20 =  fieldValue();
fieldValue20.setName(CString("fragment"));
fieldValue20.setValue(CString("\"../shaders/freewrl.fs\""));
ProtoInstance18.addChild(&fieldValue20);

Group17.addChild(&ProtoInstance18);

ProtoBody16.addChild(&Group17);

ProtoDeclare15.addChild(&ProtoBody16);

Group11.addChild(&ProtoDeclare15);

ProtoInstance& ProtoInstance21 =  ProtoInstance();
ProtoInstance21.setName(CString("flower"));
Group11.addChild(&ProtoInstance21);

ProtoInstance& ProtoInstance22 =  ProtoInstance();
ProtoInstance22.setName(CString("flower"));
Group11.addChild(&ProtoInstance22);

ProtoInstance& ProtoInstance23 =  ProtoInstance();
ProtoInstance23.setName(CString("flower"));
Group11.addChild(&ProtoInstance23);

ProtoInstance& ProtoInstance24 =  ProtoInstance();
ProtoInstance24.setName(CString("flower"));
Group11.addChild(&ProtoInstance24);

ProtoInstance& ProtoInstance25 =  ProtoInstance();
ProtoInstance25.setName(CString("flower"));
Group11.addChild(&ProtoInstance25);

ProtoInstance& ProtoInstance26 =  ProtoInstance();
ProtoInstance26.setName(CString("flower"));
Group11.addChild(&ProtoInstance26);

Scene7.addChild(&Group11);

X3D0.setScene(&Scene7);

//}
