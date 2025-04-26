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
meta2.setName(CString("creator"));
meta2.setContent(CString("John W Carlson"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(CString("created"));
meta3.setContent(CString("December 13 2015"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("modified"));
meta4.setContent(CString("November 9 2024"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("title"));
meta5.setContent(CString("myextrusion.x3d"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("identifier"));
meta6.setContent(CString("https://coderextreme.net/X3DJSONLD/src/main/data/myextrusion.x3d"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("description"));
meta7.setContent(CString("beginnings of a force directed graph in 3D"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(CString("generator"));
meta8.setContent(CString("Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit"));
head1.addMeta(&meta8);

X3D0.setHead(&head1);

Scene& Scene9 =  Scene();
Group& Group10 =  Group();
Shape& Shape11 =  Shape();
Extrusion& Extrusion12 =  Extrusion();
Extrusion12.setDEF(CString("myextrusion"));
Extrusion12.setSpine(new float[]{-50.0,-50.0,0.0,50.0,50.0,0.0}, 6);
Extrusion12.setCreaseAngle(0.785);
Extrusion12.setCrossSection(new float[]{1.0,0.0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0.0,-1.0,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1.0,0.0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0.0,1.0,0.38,0.92,0.71,0.71,0.92,0.38,1.0,0.0}, 34);
Shape11.setGeometry(&Extrusion12);

Appearance& Appearance13 =  Appearance();
Material& Material14 =  Material();
Material14.setDiffuseColor(new float[]{0.0,1.0,0.0});
Appearance13.addChild(&Material14);

Shape11.addChild(&Appearance13);

Group10.addChild(&Shape11);

TimeSensor& TimeSensor15 =  TimeSensor();
TimeSensor15.setDEF(CString("TourTime"));
TimeSensor15.setLoop(true);
Group10.addChild(&TimeSensor15);

Script& Script16 =  Script();
Script16.setDEF(CString("MoveCylinder"));
field& field17 =  field();
field17.setName(CString("set_cycle"));
field17.setAccessType(CString("inputOnly"));
field17.setType(CString("SFTime"));
Script16.addChild(&field17);

field& field18 =  field();
field18.setName(CString("spine"));
field18.setAccessType(CString("inputOutput"));
field18.setType(CString("MFVec3f"));
field18.setValue(CString("-50 -50 0 50 50 0"));
Script16.addChild(&field18);


//Script16.setSourceCode(CString("ecmascript:")+
//_T("                function set_cycle(value) {")+
//_T("                        Browser.print(value);")+
//_T("                        var endA = new SFVec3f(spine[0].x*Math.random()*2, spine[0].y*Math.random()*2, spine[0].z*Math.random()*2);")+
//_T("                        var endB = new SFVec3f(spine[1].x*Math.random()*2, spine[1].y*Math.random()*2, spine[1].z*Math.random()*2);")+
//_T("                        var tmpspine = new MFVec3f();")+
//_T("			tmpspine[0] = endA;")+
//_T("			tmpspine[1] = endB;")+
//_T("                        spine = tmpspine;")+
//_T("                }"));
Group10.addChild(&Script16);

ROUTE& ROUTE19 =  ROUTE();
ROUTE19.setFromNode(CString("TourTime"));
ROUTE19.setFromField(CString("cycleTime"));
ROUTE19.setToNode(CString("MoveCylinder"));
ROUTE19.setToField(CString("set_cycle"));
Group10.addChild(&ROUTE19);

ROUTE& ROUTE20 =  ROUTE();
ROUTE20.setFromNode(CString("MoveCylinder"));
ROUTE20.setFromField(CString("spine_changed"));
ROUTE20.setToNode(CString("myextrusion"));
ROUTE20.setToField(CString("set_spine"));
Group10.addChild(&ROUTE20);

Scene9.addChild(&Group10);

X3D0.setScene(&Scene9);

//}
