//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
//int main(int argc, char ** argv) 
//{
X3D& X3D0 =  X3D();
X3D0.setProfile(CString("Full"));
X3D0.setVersion(CString("3.3"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(CString("comment"));
meta2.setContent(CString("World of Titania"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(CString("created"));
meta3.setContent(CString("Thu, 05 Nov 2015 03:28:32 GMT"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("creator"));
meta4.setContent(CString("Holger Seelig"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("generator"));
meta5.setContent(CString("Titania V1.2.0, http://titania.create3000.de"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("modified"));
meta6.setContent(CString("Thu, 05 Nov 2015 03:28:32 GMT"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("title"));
meta7.setContent(CString("Treasure Island Entry"));
head1.addMeta(&meta7);

X3D0.setHead(&head1);

Scene& Scene8 =  Scene();
Script& Script9 =  Script();
Script9.setDEF(CString("Setup"));

//Script9.setSourceCode(CString("vrmlscript:")+
//_T("function initialize ()")+
//_T("{")+
//_T("	try")+
//_T("	{")+
//_T("		Browser .setBrowserOption ('AnimateStairWalks', true);")+
//_T("		print ('AnimateStairWalks: ', Browser .getBrowserOption ('AnimateStairWalks'));")+
//_T("	}")+
//_T("	catch (error)")+
//_T("	{ }")+
//_T("}"));
Scene8.addChild(&Script9);

NavigationInfo& NavigationInfo10 =  NavigationInfo();
NavigationInfo10.setType(new CString[]{CString("NONE")}, 1);
NavigationInfo10.setAvatarSize(new float[]{0.1,1.6,0.75}, 3);
NavigationInfo10.setVisibilityLimit(300);
NavigationInfo10.setTransitionType(new CString[]{CString("TELEPORT")}, 1);
Scene8.addChild(&NavigationInfo10);

Inline& Inline11 =  Inline();
Inline11.setUrl(new CString[]{CString("stage/index.x3d")}, 1);
Scene8.addChild(&Inline11);

X3D0.setScene(&Scene8);

//}
