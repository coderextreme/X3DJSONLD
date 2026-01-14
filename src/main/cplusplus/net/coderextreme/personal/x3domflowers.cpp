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
X3D0.setVersion(CString("3.3"));
head& head1 =  head();
component& component2 =  component();
component2.setName(CString("Scripting"));
component2.setLevel(1);
head1.addChild(&component2);

component& component3 =  component();
component3.setName(CString("EnvironmentalEffects"));
component3.setLevel(3);
head1.addChild(&component3);

component& component4 =  component();
component4.setName(CString("Shaders"));
component4.setLevel(1);
head1.addChild(&component4);

component& component5 =  component();
component5.setName(CString("CubeMapTexturing"));
component5.setLevel(1);
head1.addChild(&component5);

component& component6 =  component();
component6.setName(CString("Texturing"));
component6.setLevel(1);
head1.addChild(&component6);

component& component7 =  component();
component7.setName(CString("Rendering"));
component7.setLevel(1);
head1.addChild(&component7);

component& component8 =  component();
component8.setName(CString("Grouping"));
component8.setLevel(3);
head1.addChild(&component8);

component& component9 =  component();
component9.setName(CString("Core"));
component9.setLevel(1);
head1.addChild(&component9);

meta& meta10 =  meta();
meta10.setName(CString("title"));
meta10.setContent(CString("x3domflowers.x3d"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(CString("creator"));
meta11.setContent(CString("John Carlson"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(CString("description"));
meta12.setContent(CString("5 or more prismatic flowers"));
head1.addMeta(&meta12);

meta& meta13 =  meta();
meta13.setName(CString("generator"));
meta13.setContent(CString("X3D-Edit, https://savage.nps.edu/X3D-Edit"));
head1.addMeta(&meta13);

meta& meta14 =  meta();
meta14.setName(CString("identifier"));
meta14.setContent(CString("https://coderextreme.net/X3DJSONLD/src/main/personal/x3domflowers.x3d"));
head1.addMeta(&meta14);

X3D0.setHead(&head1);

Scene& Scene15 =  Scene();
NavigationInfo& NavigationInfo16 =  NavigationInfo();
Scene15.addChild(&NavigationInfo16);

//Images courtesy of Paul Debevec's Light Probe Image Gallery
Background& Background17 =  Background();
Background17.setBackUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_back.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")}, 2);
Background17.setBottomUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")}, 2);
Background17.setFrontUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_front.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")}, 2);
Background17.setLeftUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_left.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")}, 2);
Background17.setRightUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_right.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")}, 2);
Background17.setTopUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_top.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")}, 2);
Scene15.addChild(&Background17);

Group& Group18 =  Group();
ExternProtoDeclare& ExternProtoDeclare19 =  ExternProtoDeclare();
ExternProtoDeclare19.setName(CString("FlowerProto"));
ExternProtoDeclare19.setUrl(new CString[]{CString("../personal/flowerproto.json#FlowerProto")}, 1);
field& field20 =  field();
field20.setName(CString("vertex"));
field20.setAccessType(CString("inputOutput"));
field20.setType(CString("MFString"));
ExternProtoDeclare19.addChild(&field20);

field& field21 =  field();
field21.setName(CString("fragment"));
field21.setAccessType(CString("inputOutput"));
field21.setType(CString("MFString"));
ExternProtoDeclare19.addChild(&field21);

Group18.addChild(&ExternProtoDeclare19);

ProtoDeclare& ProtoDeclare22 =  ProtoDeclare();
ProtoDeclare22.setName(CString("flower"));
ProtoBody& ProtoBody23 =  ProtoBody();
Group& Group24 =  Group();
ProtoInstance& ProtoInstance25 =  ProtoInstance();
ProtoInstance25.setName(CString("FlowerProto"));
fieldValue& fieldValue26 =  fieldValue();
fieldValue26.setName(CString("vertex"));
fieldValue26.setValue(CString("\"../shaders/x3dom_flowers_chromatic.vs\""));
ProtoInstance25.addChild(&fieldValue26);

fieldValue& fieldValue27 =  fieldValue();
fieldValue27.setName(CString("fragment"));
fieldValue27.setValue(CString("\"../shaders/common.fs\""));
ProtoInstance25.addChild(&fieldValue27);

Group24.addChild(&ProtoInstance25);

ProtoBody23.addChild(&Group24);

ProtoDeclare22.addChild(&ProtoBody23);

Group18.addChild(&ProtoDeclare22);

ProtoInstance& ProtoInstance28 =  ProtoInstance();
ProtoInstance28.setName(CString("flower"));
Group18.addChild(&ProtoInstance28);

ProtoInstance& ProtoInstance29 =  ProtoInstance();
ProtoInstance29.setName(CString("flower"));
Group18.addChild(&ProtoInstance29);

ProtoInstance& ProtoInstance30 =  ProtoInstance();
ProtoInstance30.setName(CString("flower"));
Group18.addChild(&ProtoInstance30);

ProtoInstance& ProtoInstance31 =  ProtoInstance();
ProtoInstance31.setName(CString("flower"));
Group18.addChild(&ProtoInstance31);

ProtoInstance& ProtoInstance32 =  ProtoInstance();
ProtoInstance32.setName(CString("flower"));
Group18.addChild(&ProtoInstance32);

ProtoInstance& ProtoInstance33 =  ProtoInstance();
ProtoInstance33.setName(CString("flower"));
Group18.addChild(&ProtoInstance33);

Scene15.addChild(&Group18);

X3D0.setScene(&Scene15);

}
