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
meta3.content = "Wed, 16 Sep 2015 02:05:14 GMT";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Holger Seelig";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "generator";
meta5.content = "Titania V1.4.9, http://titania.create3000.de";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "identifier";
meta6.content = "file:///home/holger/Projekte/Cobweb/excite/tests/Components/Navigation/Depth.x3d";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "modified";
meta7.content = "Sun, 11 Sep 2016 05:53:00 GMT";
head1.meta[5] = meta7;

head = head1;

WorldInfo WorldInfo9 = createNode("WorldInfo");
WorldInfo9.title = "Depth";
MetadataSet MetadataSet10 = createNode("MetadataSet");
MetadataSet10.name = "Titania";
MetadataSet10.DEF = "Titania";
MetadataSet10.reference = "http://titania.create3000.de";
MetadataSet MetadataSet11 = createNode("MetadataSet");
MetadataSet11.name = "AngleGrid";
MetadataSet11.DEF = "AngleGrid";
MetadataSet11.reference = "http://titania.create3000.de";
MetadataBoolean MetadataBoolean12 = createNode("MetadataBoolean");
MetadataBoolean12.name = "enabled";
MetadataBoolean12.DEF = "enabled";
MetadataBoolean12.reference = "http://titania.create3000.de";
MetadataBoolean12.value = new MFBool(new boolean[False]);
MetadataSet11.value = new MFNode();

MetadataSet11.value[0] = MetadataBoolean12;

MetadataSet10.value = new MFNode();

MetadataSet10.value[0] = MetadataSet11;

MetadataSet MetadataSet13 = createNode("MetadataSet");
MetadataSet13.name = "Grid";
MetadataSet13.DEF = "Grid";
MetadataSet13.reference = "http://titania.create3000.de";
MetadataBoolean MetadataBoolean14 = createNode("MetadataBoolean");
MetadataBoolean14.name = "enabled";
MetadataBoolean14.DEF = "enabled_1";
MetadataBoolean14.reference = "http://titania.create3000.de";
MetadataBoolean14.value = new MFBool(new boolean[True]);
MetadataSet13.value = new MFNode();

MetadataSet13.value[0] = MetadataBoolean14;

MetadataSet10.value[1] = MetadataSet13;

MetadataSet MetadataSet15 = createNode("MetadataSet");
MetadataSet15.name = "Selection";
MetadataSet15.DEF = "Selection";
MetadataSet15.reference = "http://titania.create3000.de";
MetadataSet MetadataSet16 = createNode("MetadataSet");
MetadataSet16.name = "children";
MetadataSet16.DEF = "children";
MetadataSet16.reference = "http://titania.create3000.de";
NavigationInfo NavigationInfo17 = createNode("NavigationInfo");
NavigationInfo17.DEF = "_1";
NavigationInfo17.type = new MFString(new java.lang.String[", ","WALKANY"]);
MetadataSet16.value = NavigationInfo17;

MetadataSet15.value = new MFNode();

MetadataSet15.value[0] = MetadataSet16;

MetadataSet MetadataSet18 = createNode("MetadataSet");
MetadataSet18.name = "previous";
MetadataSet18.DEF = "previous";
MetadataSet18.reference = "http://titania.create3000.de";
MetadataSet15.value[1] = MetadataSet18;

MetadataSet10.value[2] = MetadataSet15;

MetadataSet MetadataSet19 = createNode("MetadataSet");
MetadataSet19.name = "NavigationInfo";
MetadataSet19.DEF = "NavigationInfo";
MetadataSet19.reference = "http://titania.create3000.de";
MetadataString MetadataString20 = createNode("MetadataString");
MetadataString20.name = "type";
MetadataString20.DEF = "type";
MetadataString20.reference = "http://titania.create3000.de";
MetadataString20.value = new MFString(new java.lang.String["EXAMINE"]);
MetadataSet19.value = new MFNode();

MetadataSet19.value[0] = MetadataString20;

MetadataSet10.value[3] = MetadataSet19;

MetadataSet MetadataSet21 = createNode("MetadataSet");
MetadataSet21.name = "Viewpoint";
MetadataSet21.DEF = "Viewpoint";
MetadataSet21.reference = "http://titania.create3000.de";
MetadataDouble MetadataDouble22 = createNode("MetadataDouble");
MetadataDouble22.name = "position";
MetadataDouble22.DEF = "position";
MetadataDouble22.reference = "http://titania.create3000.de";
MetadataDouble22.value = new MFDouble(new double[3.7273065935322,3.12903272440423,8.73592237645378]);
MetadataSet21.value = new MFNode();

MetadataSet21.value[0] = MetadataDouble22;

MetadataDouble MetadataDouble23 = createNode("MetadataDouble");
MetadataDouble23.name = "orientation";
MetadataDouble23.DEF = "orientation";
MetadataDouble23.reference = "http://titania.create3000.de";
MetadataDouble23.value = new MFDouble(new double[-0.612643442740256,0.78037437123052,0.125235189918556,0.512384258680222]);
MetadataSet21.value[1] = MetadataDouble23;

MetadataDouble MetadataDouble24 = createNode("MetadataDouble");
MetadataDouble24.name = "centerOfRotation";
MetadataDouble24.DEF = "centerOfRotation";
MetadataDouble24.reference = "http://titania.create3000.de";
MetadataDouble24.value = new MFDouble(new double[0,0,0]);
MetadataSet21.value[2] = MetadataDouble24;

MetadataSet10.value[4] = MetadataSet21;

WorldInfo9.metadata = MetadataSet10;

children = new MFNode();

children[0] = WorldInfo9;

Viewpoint Viewpoint25 = createNode("Viewpoint");
children[1] = Viewpoint25;

Transform Transform26 = createNode("Transform");
Transform26.DEF = "Box";
Transform26.translation = new SFVec3f(new float[0,0,-1]);
Transform26.scale = new SFVec3f(new float[5,3,1]);
Shape Shape27 = createNode("Shape");
Appearance Appearance28 = createNode("Appearance");
Material Material29 = createNode("Material");
Appearance28.material = Material29;

Shape27.appearance = Appearance28;

Box Box30 = createNode("Box");
Shape27.geometry = Box30;

Transform26.child = new undefined();

Transform26.child[0] = Shape27;

children[2] = Transform26;

NavigationInfo NavigationInfo31 = createNode("NavigationInfo");
NavigationInfo31.USE = "_1";
children[3] = NavigationInfo31;

}
