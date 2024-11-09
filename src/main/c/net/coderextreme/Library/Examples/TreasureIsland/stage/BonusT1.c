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
meta3.content = "Thu, 05 Nov 2015 03:28:56 GMT";
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
meta6.content = "Thu, 05 Nov 2015 03:28:56 GMT";
head1.meta[4] = meta6;

head = head1;

Transform Transform8 = createNode("Transform");
Transform8.translation = new SFVec3f(new float[-6,0,0]);
Inline Inline9 = createNode("Inline");
Inline9.DEF = "Bonus";
Inline9.url = new MFString(new java.lang.String["bonus-yellow-level2.x3d"]);
Transform8.children = new MFNode();

Transform8.children[0] = Inline9;

children = new MFNode();

children[0] = Transform8;

Transform Transform10 = createNode("Transform");
Transform10.translation = new SFVec3f(new float[6,0,0]);
Inline Inline11 = createNode("Inline");
Inline11.USE = "Bonus";
Transform10.children = new MFNode();

Transform10.children[0] = Inline11;

children[1] = Transform10;

}
