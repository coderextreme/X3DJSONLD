#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Full";
X3D0.version = "3.3";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "comment";
meta2.content = "World of Titania";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "created";
meta3.content = "Thu, 05 Nov 2015 03:28:32 GMT";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Holger Seelig";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "generator";
meta5.content = "Titania V1.2.0, http://titania.create3000.de";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "modified";
meta6.content = "Thu, 05 Nov 2015 03:28:32 GMT";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "title";
meta7.content = "Treasure Island Entry";
head1.meta[5] = meta7;

head = head1;

Script Script9 = createNode("Script");
Script9.DEF = "Setup";

Script9.setSourceCode(`vrmlscript:\n"+
"function initialize ()\n"+
"{\n"+
"	try\n"+
"	{\n"+
"		Browser .setBrowserOption ('AnimateStairWalks', true);\n"+
"\n"+
"		print ('AnimateStairWalks: ', Browser .getBrowserOption ('AnimateStairWalks'));\n"+
"	}\n"+
"	catch (error)\n"+
"	{ }\n"+
"}`)
children = new MFNode();

children[0] = Script9;

NavigationInfo NavigationInfo10 = createNode("NavigationInfo");
NavigationInfo10.type = new MFString(new java.lang.String["NONE"]);
NavigationInfo10.avatarSize = new MFFloat(new float[0.1,1.6,0.75]);
NavigationInfo10.visibilityLimit = 300;
NavigationInfo10.transitionType = new MFString(new java.lang.String["TELEPORT"]);
children[1] = NavigationInfo10;

Inline Inline11 = createNode("Inline");
Inline11.url = new MFString(new java.lang.String["stage/index.x3d"]);
children[2] = Inline11;

}
