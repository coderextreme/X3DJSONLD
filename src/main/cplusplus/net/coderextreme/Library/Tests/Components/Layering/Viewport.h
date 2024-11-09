//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
//int main(int argc, char ** argv) 
//{
X3D& X3D0 =  X3D();
X3D0.setProfile(CString("Full"));
X3D0.setVersion(CString("3.0"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(CString("comment"));
meta2.setContent(CString("World of Titania"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(CString("created"));
meta3.setContent(CString("Sat, 29 Aug 2015 04:01:22 GMT"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("creator"));
meta4.setContent(CString("Holger Seelig"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("generator"));
meta5.setContent(CString("Titania V0.7.8, http://titania.create3000.de"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("modified"));
meta6.setContent(CString("Sat, 29 Aug 2015 04:25:15 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
ExternProtoDeclare& ExternProtoDeclare8 =  ExternProtoDeclare();
ExternProtoDeclare8.setName(CString("Rotor"));
ExternProtoDeclare8.setUrl(new CString[]{CString(", "), CString("../../../Titania/share/titania/Library/Prototypes/Engines/Rotor/Rotor.x3dvfile:///usr/share/titania/Library/Prototypes/Engines/Rotor/Rotor.x3dv")}, 2);
field& field9 =  field();
field9.setName(CString("enabled"));
field9.setAccessType(CString("inputOutput"));
field9.setType(CString("SFBool"));
ExternProtoDeclare8.addChild(&field9);

field& field10 =  field();
field10.setName(CString("cycleInterval"));
field10.setAccessType(CString("inputOutput"));
field10.setType(CString("SFTime"));
ExternProtoDeclare8.addChild(&field10);

field& field11 =  field();
field11.setName(CString("axis"));
field11.setAccessType(CString("inputOutput"));
field11.setType(CString("SFVec3f"));
ExternProtoDeclare8.addChild(&field11);

field& field12 =  field();
field12.setName(CString("angle"));
field12.setAccessType(CString("inputOutput"));
field12.setType(CString("SFFloat"));
ExternProtoDeclare8.addChild(&field12);

field& field13 =  field();
field13.setName(CString("loop"));
field13.setAccessType(CString("inputOutput"));
field13.setType(CString("SFBool"));
ExternProtoDeclare8.addChild(&field13);

field& field14 =  field();
field14.setName(CString("startTime"));
field14.setAccessType(CString("inputOutput"));
field14.setType(CString("SFTime"));
ExternProtoDeclare8.addChild(&field14);

field& field15 =  field();
field15.setName(CString("pauseTime"));
field15.setAccessType(CString("inputOutput"));
field15.setType(CString("SFTime"));
ExternProtoDeclare8.addChild(&field15);

field& field16 =  field();
field16.setName(CString("resumeTime"));
field16.setAccessType(CString("inputOutput"));
field16.setType(CString("SFTime"));
ExternProtoDeclare8.addChild(&field16);

field& field17 =  field();
field17.setName(CString("stopTime"));
field17.setAccessType(CString("inputOutput"));
field17.setType(CString("SFTime"));
ExternProtoDeclare8.addChild(&field17);

field& field18 =  field();
field18.setName(CString("rotation_changed"));
field18.setAccessType(CString("outputOnly"));
field18.setType(CString("SFRotation"));
ExternProtoDeclare8.addChild(&field18);

Scene7.addChild(&ExternProtoDeclare8);

Background& Background19 =  Background();
Background19.setDEF(CString("Gray"));
Background19.setSkyColor(new float[]{0.2,0.2,0.2}, 3);
Scene7.addChild(&Background19);

Viewpoint& Viewpoint20 =  Viewpoint();
Viewpoint20.setDEF(CString("_1"));
Viewpoint20.setDescription(CString("Start"));
Scene7.addChild(&Viewpoint20);

X3D0.setScene(&Scene7);

//}
