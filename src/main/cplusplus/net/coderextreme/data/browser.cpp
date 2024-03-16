#ifdef WIN32
#define FALSE false
#define TRUE true
#define WINAPI
#define AFX_EXT_CLASS
#define EXPORT32
#endif
#define False false
#define True true
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/SphereExample/SphereExample/pch.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/SphereExample/SphereExample/framework.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/SphereExample/include/XML_PARSER.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/SphereExample/include/X3DLib.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/SphereExample/include/glMath.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/SphereExample/include/glut.h"
int main(int argc, char ** argv) {
X3D* X3D0 = new X3D();
X3D0->setProfile(CString("Immersive"));
X3D0->setVersion(CString("3.3"));
head* head1 = new head();
meta* meta2 = new meta();
meta2->setName(CString("title"));
meta2->setContent(CString("browser.x3d"));
head1->addMeta(meta2);

meta* meta3 = new meta();
meta3->setName(CString("creator"));
meta3->setContent(CString("John Carlson"));
head1->addMeta(meta3);

meta* meta4 = new meta();
meta4->setName(CString("generator"));
meta4->setContent(CString("manual"));
head1->addMeta(meta4);

meta* meta5 = new meta();
meta5->setName(CString("identifier"));
meta5->setContent(CString("https://coderextreme.net/X3DJSONLD/src/main/data/browser.x3d"));
head1->addMeta(meta5);

meta* meta6 = new meta();
meta6->setName(CString("description"));
meta6->setContent(CString("a script test with embedded \\n between single quotes, a double backslash \\\\ a backslash \\ and a closing quote \""));
head1->addMeta(meta6);

X3D0->setHead(head1);

Scene* Scene7 = new Scene();
Script* Script8 = new Script();
Script8->setDEF(CString("Browser"));

Script8->setSourceCode(CString("ecmascript:")+
_T("                function initialize() {")+
_T("		    Browser.print('DUDES\\n'+'\"DUDETTES');")+
_T("                }"));
Scene7->addChild(Script8);

Script* Script9 = new Script();
Script9->setDEF(CString("Clouds"));

Script9->setSourceCode(CString("ecmascript:")+
_T("function cumulustranslation() // These values designate the boundary location of the cloud")+
_T("{")+
_T("var xxx = ' '+' '+")+
_T("'	Transform		\\n'+")+
_T("'    ' + '               	\\n';")+
_T("}"));
Scene7->addChild(Script9);

X3D0->setScene(Scene7);

}
