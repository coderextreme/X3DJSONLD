#define False false
#define True true
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
int main(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(CString("Interchange"));
X3D0.setVersion(CString("4.0"));
head& head1 =  head();
component& component2 =  component();
component2.setName(CString("CubeMapTexturing"));
component2.setLevel(3);
head1.addChild(&component2);

meta& meta3 =  meta();
meta3.setName(CString("created"));
meta3.setContent(CString("Fri, 23 Aug 2024 19:51:47 GMT"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("creator"));
meta4.setContent(CString("Holger Seelig"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("generator"));
meta5.setContent(CString("Sunrize X3D Editor V1.7.12, https://create3000.github.io/sunrize/"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("modified"));
meta6.setContent(CString("Sat, 24 Aug 2024 11:20:35 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
WorldInfo& WorldInfo8 =  WorldInfo();
WorldInfo8.setTitle(CString("StaticGroup test with Inline node"));
MetadataSet& MetadataSet9 =  MetadataSet();
MetadataSet9.X3DNode::setName(CString("Sunrize"));
MetadataSet9.X3DNode::setReference(CString("https://create3000.github.io/sunrize/"));
MetadataSet& MetadataSet10 =  MetadataSet();
MetadataSet10.X3DNode::setName(CString("GridTool"));
MetadataBoolean& MetadataBoolean11 =  MetadataBoolean();
MetadataBoolean11.X3DNode::setName(CString("visible"));
MetadataBoolean11.setValue(new boolean[]{True});
MetadataSet10.setValue((X3DNode *)&MetadataBoolean11);

MetadataSet9.setValue((X3DNode *)&MetadataSet10);

WorldInfo8.setMetadata(&MetadataSet9);

Scene7.addChild(&WorldInfo8);

Background& Background12 =  Background();
Background12.setDEF(CString("Summer"));
Background12.setSkyAngle(new float[]{0.8,1.3,1.4,1.5708}, 4);
Background12.setSkyColor(new float[]{0.21,0.31,0.59,0.33,0.45,0.7,0.57,0.66,0.85,0.6,0.73,0.89,0.7,0.83,0.98}, 15);
Background12.setGroundAngle(new float[]{0.659972,1.2,1.39912,1.5708}, 4);
Background12.setGroundColor(new float[]{0.105712,0.156051,0.297,0.187629,0.255857,0.398,0.33604,0.405546,0.542,0.3612,0.469145,0.602,0.39471,0.522059,0.669}, 15);
Scene7.addChild(&Background12);

Viewpoint& Viewpoint13 =  Viewpoint();
Viewpoint13.setDescription(CString("Initial View"));
Viewpoint13.setPosition(new float[]{0.2750405,0.4539119,0.8405286});
Viewpoint13.setOrientation(new float[]{-0.776588739330481,0.61771873128448,0.123828506271318,0.5052317});
Viewpoint13.setCenterOfRotation(new float[]{0,0.0844979,0});
Viewpoint13.setNearDistance(0.001);
Viewpoint13.setFarDistance(1000);
Scene7.addChild(&Viewpoint13);

StaticGroup& StaticGroup14 =  StaticGroup();
StaticGroup14.setDEF(CString("glTF"));
Transform& Transform15 =  Transform();
Transform15.setDEF(CString("chess4xv4xh2xd"));
Transform& Transform16 =  Transform();
Transform16.setDEF(CString("chess4xv2xh2xd"));
Transform& Transform17 =  Transform();
Transform17.setDEF(CString("chess2xv2xh2xd"));
Transform& Transform18 =  Transform();
Transform18.setDEF(CString("chess2xv2xh"));
Transform& Transform19 =  Transform();
Transform19.setDEF(CString("chess2xv"));
Transform& Transform20 =  Transform();
Transform20.setDEF(CString("chess"));
Inline& Inline21 =  Inline();
Inline21.setUrl(new CString[]{CString("https://raw.githubusercontent.com/KhronosGroup/glTF-Sample-Assets/master/Models/ABeautifulGame/glTF/ABeautifulGame.gltf")}, 1);
Transform20.addChild(&Inline21);

Transform19.addChild(&Transform20);

Transform& Transform22 =  Transform();
Transform22.setTranslation(new float[]{0,0.2,0});
Transform& Transform23 =  Transform();
Transform23.setUSE(CString("chess"));
Transform22.addChild(&Transform23);

Transform19.addChild(&Transform22);

Transform18.addChild(&Transform19);

Transform& Transform24 =  Transform();
Transform24.setTranslation(new float[]{1,0,0});
Transform& Transform25 =  Transform();
Transform25.setUSE(CString("chess2xv"));
Transform24.addChild(&Transform25);

Transform18.addChild(&Transform24);

Transform17.addChild(&Transform18);

Transform& Transform26 =  Transform();
Transform26.setTranslation(new float[]{0,0,1});
Transform& Transform27 =  Transform();
Transform27.setUSE(CString("chess2xv2xh"));
Transform26.addChild(&Transform27);

Transform17.addChild(&Transform26);

Transform16.addChild(&Transform17);

Transform& Transform28 =  Transform();
Transform28.setTranslation(new float[]{0,0.4,0});
Transform& Transform29 =  Transform();
Transform29.setUSE(CString("chess2xv2xh2xd"));
Transform28.addChild(&Transform29);

Transform16.addChild(&Transform28);

Transform15.addChild(&Transform16);

Transform& Transform30 =  Transform();
Transform30.setTranslation(new float[]{2,0,0});
Transform& Transform31 =  Transform();
Transform31.setUSE(CString("chess4xv2xh2xd"));
Transform30.addChild(&Transform31);

Transform15.addChild(&Transform30);

StaticGroup14.addChildren(&Transform15);

Transform& Transform32 =  Transform();
Transform32.setTranslation(new float[]{0,0,2});
Transform& Transform33 =  Transform();
Transform33.setUSE(CString("chess4xv4xh2xd"));
Transform32.addChild(&Transform33);

StaticGroup14.addChildren(&Transform32);

Scene7.addChild(&StaticGroup14);

X3D0.setScene(&Scene7);

}
