//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
//int main(int argc, char ** argv) 
//{
X3D& X3D0 =  X3D();
X3D0.setProfile(CString("Interactive"));
X3D0.setVersion(CString("4.0"));
head& head1 =  head();
component& component2 =  component();
component2.setName(CString("HAnim"));
component2.setLevel(1);
head1.addChild(&component2);

meta& meta3 =  meta();
meta3.setName(CString("title"));
meta3.setContent(CString("OrientationInterpolator.x3d"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("creator"));
meta4.setContent(CString("John Carlson"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("created"));
meta5.setContent(CString("29 December 2025"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("license"));
meta6.setContent(CString("license.html"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
WorldInfo& WorldInfo8 =  WorldInfo();
WorldInfo8.setTitle(CString("OrientationInterpolator.x3d"));
Scene7.addChild(&WorldInfo8);

//<OrientationInterpolator DEF='Stop_l_midtarsal_RotationInterpolator' key='0 0.5 1' keyValue='0 0 1 0 0 0 1 0 0 0 1 0'/>
X3D0.setScene(&Scene7);

//}
