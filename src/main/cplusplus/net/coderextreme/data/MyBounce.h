//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
//int main(int argc, char ** argv) 
//{
X3D& X3D0 =  X3D();
X3D0.setProfile(CString("Immersive"));
X3D0.setVersion(CString("3.3"));
head& head1 =  head();
component& component2 =  component();
component2.setName(CString("Scripting"));
component2.setLevel(1);
head1.addChild(&component2);

meta& meta3 =  meta();
meta3.setName(CString("title"));
meta3.setContent(CString("MyBounce.x3d"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("creator"));
meta4.setContent(CString("John Carlson"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("description"));
meta5.setContent(CString("3 prismatic spheres"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("identifier"));
meta6.setContent(CString("https://coderextreme.net/X3DJSONLD/src/main/data/SFVec3f.x3d"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
NavigationInfo& NavigationInfo8 =  NavigationInfo();
Scene7.addChild(&NavigationInfo8);

Transform& Transform9 =  Transform();
Transform9.setDEF(CString("transform"));
Shape& Shape10 =  Shape();
Appearance& Appearance11 =  Appearance();
Material& Material12 =  Material();
Material12.setDiffuseColor(new float[3]{0.7,0.7,0.7});
Material12.setSpecularColor(new float[3]{0.5,0.5,0.5});
Appearance11.addChild(&Material12);

Shape10.addChild(&Appearance11);

Sphere& Sphere13 =  Sphere();
Shape10.setGeometry(&Sphere13);

Transform9.addChild(&Shape10);

Scene7.addChild(&Transform9);

Script& Script14 =  Script();
Script14.setDEF(CString("Bounce2"));
field& field15 =  field();
field15.setName(CString("set_translation"));
field15.setAccessType(CString("inputOnly"));
field15.setType(CString("SFVec3f"));
field15.setValue(CString("0 0 0"));
Script14.addChild(&field15);

field& field16 =  field();
field16.setName(CString("translation_changed"));
field16.setAccessType(CString("outputOnly"));
field16.setType(CString("SFVec3f"));
field16.setValue(CString("0 0 0"));
Script14.addChild(&field16);

field& field17 =  field();
field17.setName(CString("translation"));
field17.setAccessType(CString("inputOutput"));
field17.setType(CString("SFVec3f"));
field17.setValue(CString("0 0 0"));
Script14.addChild(&field17);

field& field18 =  field();
field18.setName(CString("velocity"));
field18.setAccessType(CString("inputOutput"));
field18.setType(CString("SFVec3f"));
field18.setValue(CString("0 0 0"));
Script14.addChild(&field18);

field& field19 =  field();
field19.setName(CString("set_fraction"));
field19.setAccessType(CString("inputOnly"));
field19.setType(CString("SFTime"));
Script14.addChild(&field19);


//Script14.setSourceCode(CString("ecmascript:")+
//_T("			function newBubble() {")+
//_T("			    translation = new SFVec3f(0, 0, 0);")+
//_T("			    velocity = new SFVec3f(")+
//_T("			    	Math.random() - 0.5,")+
//_T("				Math.random() - 0.5,")+
//_T("				Math.random() - 0.5);")+
//_T("			}")+
//_T("			function set_fraction() {")+
//_T("			    translation = new SFVec3f(")+
//_T("			    	translation.x + velocity.x,")+
//_T("				translation.y + velocity.y,")+
//_T("				translation.z + velocity.z);")+
//_T("				if (Math.abs(translation.x) > 10) {")+
//_T("					newBubble();")+
//_T("				} else if (Math.abs(translation.y) > 10) {")+
//_T("					newBubble();")+
//_T("				} else if (Math.abs(translation.z) > 10) {")+
//_T("					newBubble();")+
//_T("				} else {")+
//_T("					velocity = new SFVec3f(")+
//_T("						velocity.x + Math.random() * 0.2 - 0.1,")+
//_T("						velocity.y + Math.random() * 0.2 - 0.1,")+
//_T("						velocity.z + Math.random() * 0.2 - 0.1")+
//_T("					);")+
//_T("				}")+
//_T("			}")+
//_T("			function initialize() {")+
//_T("			     newBubble();")+
//_T("			}"));
Scene7.addChild(&Script14);

TimeSensor& TimeSensor20 =  TimeSensor();
TimeSensor20.setDEF(CString("TourTime"));
TimeSensor20.setCycleInterval(0.15);
TimeSensor20.setLoop(true);
Scene7.addChild(&TimeSensor20);

ROUTE& ROUTE21 =  ROUTE();
ROUTE21.setFromNode(CString("TourTime"));
ROUTE21.setFromField(CString("cycleTime"));
ROUTE21.setToNode(CString("Bounce2"));
ROUTE21.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE21);

ROUTE& ROUTE22 =  ROUTE();
ROUTE22.setFromNode(CString("Bounce2"));
ROUTE22.setFromField(CString("translation_changed"));
ROUTE22.setToNode(CString("transform"));
ROUTE22.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE22);

X3D0.setScene(&Scene7);

//}
