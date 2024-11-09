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
meta& meta2 =  meta();
meta2.setName(CString("title"));
meta2.setContent(CString("ViewpointGroup"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(CString("created"));
meta3.setContent(CString("Sun, 07 May 2023 09:08:53 GMT"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("comment"));
meta4.setContent(CString("Rise and Shine"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("creator"));
meta5.setContent(CString("Holger Seelig"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("generator"));
meta6.setContent(CString("Sunrize X3D Editor V1.0.24, https://create3000.github.io/sunrize/"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("identifier"));
meta7.setContent(CString("file:///Volumes/Home/Projekte/Library/Tests/Components/Navigation/ViewpointGroup.x3d"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(CString("modified"));
meta8.setContent(CString("Sun, 07 May 2023 09:37:40 GMT"));
head1.addMeta(&meta8);

X3D0.setHead(&head1);

Scene& Scene9 =  Scene();
Viewpoint& Viewpoint10 =  Viewpoint();
Viewpoint10.setDescription(CString("Outside"));
Viewpoint10.setPosition(new float[]{0,0,25});
Scene9.addChild(&Viewpoint10);

Viewpoint& Viewpoint11 =  Viewpoint();
Viewpoint11.setDescription(CString("Inside"));
Viewpoint11.setPosition(new float[]{0,0,15});
Scene9.addChild(&Viewpoint11);

ViewpointGroup& ViewpointGroup12 =  ViewpointGroup();
ViewpointGroup12.setDescription(CString("Group"));
ViewpointGroup12.setSize(new float[]{35,35,35});
Viewpoint& Viewpoint13 =  Viewpoint();
Viewpoint13.setDescription(CString("First in Group"));
Viewpoint13.setPosition(new float[]{0,0,20});
ViewpointGroup12.addChildren(&Viewpoint13);

ViewpointGroup& ViewpointGroup14 =  ViewpointGroup();
ViewpointGroup14.setDescription(CString("SubGroup"));
Viewpoint& Viewpoint15 =  Viewpoint();
Viewpoint15.setDescription(CString("Second in SubGroup"));
Viewpoint15.setPosition(new float[]{0,0,25});
ViewpointGroup14.addChildren(&Viewpoint15);

Viewpoint& Viewpoint16 =  Viewpoint();
Viewpoint16.setDescription(CString("Third in SubGroup"));
Viewpoint16.setPosition(new float[]{0,0,30});
ViewpointGroup14.addChildren(&Viewpoint16);

ViewpointGroup12.addChildren(ViewpointGroup14);

Scene9.addChild(&ViewpointGroup12);

Transform& Transform17 =  Transform();
Transform17.setDEF(CString("ViewpointGroupBox"));
Transform17.setScale(new float[]{35,35,35});
Shape& Shape18 =  Shape();
Appearance& Appearance19 =  Appearance();
Material& Material20 =  Material();
Material20.setDiffuseColor(new float[]{0.5,0,1});
Material20.setTransparency(0.5);
Appearance19.addChild(&Material20);

Shape18.addChild(&Appearance19);

Box& Box21 =  Box();
Shape18.setGeometry(&Box21);

Transform17.addChild(&Shape18);

Scene9.addChild(&Transform17);

Transform& Transform22 =  Transform();
Transform22.setDEF(CString("Box"));
Shape& Shape23 =  Shape();
Appearance& Appearance24 =  Appearance();
Material& Material25 =  Material();
Appearance24.addChild(&Material25);

Shape23.addChild(&Appearance24);

Box& Box26 =  Box();
Shape23.setGeometry(&Box26);

Transform22.addChild(&Shape23);

Scene9.addChild(&Transform22);

X3D0.setScene(&Scene9);

}
