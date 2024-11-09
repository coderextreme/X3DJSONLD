//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
//int main(int argc, char ** argv) 
//{
X3D& X3D0 =  X3D();
X3D0.setProfile(CString("Interchange"));
X3D0.setVersion(CString("4.0"));
head& head1 =  head();
component& component2 =  component();
component2.setName(CString("CubeMapTexturing"));
component2.setLevel(3);
head1.addChild(&component2);

unit& unit3 =  unit();
unit3.setName(CString("degree"));
unit3.setCategory(CString("angle"));
unit3.setConversionFactor(0.017453292519943295);
head1.addUnit(unit3);

meta& meta4 =  meta();
meta4.setName(CString("created"));
meta4.setContent(CString("Mon, 09 Oct 2023 20:31:23 GMT"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("comment"));
meta5.setContent(CString("Rise and Shine"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("creator"));
meta6.setContent(CString("Holger Seelig"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("generator"));
meta7.setContent(CString("Sunrize X3D Editor V1.1.7, https://create3000.github.io/sunrize/"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(CString("modified"));
meta8.setContent(CString("Fri, 27 Oct 2023 10:07:11 GMT"));
head1.addMeta(&meta8);

X3D0.setHead(&head1);

Scene& Scene9 =  Scene();
Viewpoint& Viewpoint10 =  Viewpoint();
Viewpoint10.setPosition(new float[]{-0.00248158,0.00001054537,2.385858});
Viewpoint10.setCenterOfRotation(new float[]{-0.00248158,0.00001054537,-0.187155});
NavigationInfo& NavigationInfo11 =  NavigationInfo();
Viewpoint10.setNavigationInfo(&NavigationInfo11);

Scene9.addChild(&Viewpoint10);

Inline& Inline12 =  Inline();
Inline12.setDEF(CString("DamagedHelmet"));
Inline12.setUrl(new CString[]{CString("https://raw.githubusercontent.com/KhronosGroup/glTF-Sample-Models/master/2.0/DamagedHelmet/glTF/DamagedHelmet.gltf")}, 1);
Scene9.addChild(&Inline12);

X3D0.setScene(&Scene9);

//}
