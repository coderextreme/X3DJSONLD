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
meta3.content = "Fri, 25 Sep 2015 17:42:41 GMT";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Holger Seelig";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "generator";
meta5.content = "Titania V1.1.1, http://titania.create3000.de";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "modified";
meta6.content = "Fri, 25 Sep 2015 17:42:41 GMT";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "title";
meta7.content = "Mushrooms Entry";
head1.meta[5] = meta7;

head = head1;

NavigationInfo NavigationInfo9 = createNode("NavigationInfo");
NavigationInfo9.type = new MFString(new java.lang.String["WALK"]);
children = new MFNode();

children[0] = NavigationInfo9;

Inline Inline10 = createNode("Inline");
Inline10.url = new MFString(new java.lang.String["stage/index.x3d"]);
children[1] = Inline10;

}
