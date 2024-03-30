#define False false
#define True true
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
int main(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(CString("Immersive"));
X3D0.setVersion(CString("3.3"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(CString("title"));
meta2.setContent(CString("badAccessType.x3d"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(CString("description"));
meta3.setContent(CString("Text scripting and animation example using Oblique Strategies card set by Brian Eno."));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("creator"));
meta4.setContent(CString("Don Brutzman, John Kelly, Ben Cheng, John Carlson"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("created"));
meta5.setContent(CString("29 March 2024"));
head1.addMeta(&meta5);

X3D0.setHead(&head1);

Scene& Scene6 =  Scene();
WorldInfo& WorldInfo7 =  WorldInfo();
WorldInfo7.setTitle(CString("badAccessType.x3d"));
Scene6.addChild(&WorldInfo7);

Script& Script8 =  Script();
field& field9 =  field();
field9.setName(CString("string_changed"));
field9.setAccessType(CString("outputOnly"));
field9.setAppinfo(CString("latest strategy card value"));
field9.setType(CString("MFString"));
Script8.addChild(&field9);

field& field10 =  field();
field10.setName(CString("textToSpeechUrl"));
field10.setAccessType(CString("outputOnly"));
field10.setAppinfo(CString("\"url to invoke Google Translate\""));
field10.setType(CString("MFString"));
Script8.addChild(&field10);

Scene6.addChild(&Script8);

X3D0.setScene(&Scene6);

}
