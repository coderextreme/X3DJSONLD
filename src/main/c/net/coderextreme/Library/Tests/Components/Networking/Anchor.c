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
meta3.content = "Wed, 06 Jan 2016 14:05:33 GMT";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Holger Seelig";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "generator";
meta5.content = "Titania V1.2.2, http://titania.create3000.de";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "modified";
meta6.content = "Wed, 06 Jan 2016 14:07:34 GMT";
head1.meta[4] = meta6;

head = head1;

WorldInfo WorldInfo8 = createNode("WorldInfo");
MetadataSet MetadataSet9 = createNode("MetadataSet");
MetadataSet9.name = "Titania";
MetadataSet9.DEF = "Titania";
MetadataSet9.reference = "http://titania.create3000.de";
MetadataSet MetadataSet10 = createNode("MetadataSet");
MetadataSet10.name = "NavigationInfo";
MetadataSet10.DEF = "NavigationInfo";
MetadataSet10.reference = "http://titania.create3000.de";
MetadataString MetadataString11 = createNode("MetadataString");
MetadataString11.name = "type";
MetadataString11.DEF = "type";
MetadataString11.reference = "http://titania.create3000.de";
MetadataString11.value = new MFString(new java.lang.String["EXAMINE"]);
MetadataSet10.value = new MFNode();

MetadataSet10.value[0] = MetadataString11;

MetadataSet9.value = new MFNode();

MetadataSet9.value[0] = MetadataSet10;

MetadataSet MetadataSet12 = createNode("MetadataSet");
MetadataSet12.name = "Viewpoint";
MetadataSet12.DEF = "Viewpoint";
MetadataSet12.reference = "http://titania.create3000.de";
MetadataDouble MetadataDouble13 = createNode("MetadataDouble");
MetadataDouble13.name = "position";
MetadataDouble13.DEF = "position";
MetadataDouble13.reference = "http://titania.create3000.de";
MetadataDouble13.value = new MFDouble(new double[0,0,10]);
MetadataSet12.value = new MFNode();

MetadataSet12.value[0] = MetadataDouble13;

MetadataDouble MetadataDouble14 = createNode("MetadataDouble");
MetadataDouble14.name = "orientation";
MetadataDouble14.DEF = "orientation";
MetadataDouble14.reference = "http://titania.create3000.de";
MetadataDouble14.value = new MFDouble(new double[0,0,1,0]);
MetadataSet12.value[1] = MetadataDouble14;

MetadataDouble MetadataDouble15 = createNode("MetadataDouble");
MetadataDouble15.name = "centerOfRotation";
MetadataDouble15.DEF = "centerOfRotation";
MetadataDouble15.reference = "http://titania.create3000.de";
MetadataDouble15.value = new MFDouble(new double[0,0,0]);
MetadataSet12.value[2] = MetadataDouble15;

MetadataSet9.value[1] = MetadataSet12;

WorldInfo8.metadata = MetadataSet9;

children = new MFNode();

children[0] = WorldInfo8;

Anchor Anchor16 = createNode("Anchor");
Anchor16.url = new MFString(new java.lang.String["#VP2"]);
Transform Transform17 = createNode("Transform");
Transform17.DEF = "Box";
Transform17.translation = new SFVec3f(new float[-3.6511,0,0]);
Shape Shape18 = createNode("Shape");
Appearance Appearance19 = createNode("Appearance");
Material Material20 = createNode("Material");
Material20.DEF = "Rococo8";
Material20.ambientIntensity = 0.226102;
Material20.diffuseColor = new SFColor(new float[0.904409,0.457768,0.341109]);
Material20.specularColor = new SFColor(new float[0.0955906,0.0955906,0.0955906]);
Material20.shininess = 0.078125;
Appearance19.material = Material20;

Shape18.appearance = Appearance19;

Box Box21 = createNode("Box");
Shape18.geometry = Box21;

Transform17.child = new undefined();

Transform17.child[0] = Shape18;

Anchor16.children = new MFNode();

Anchor16.children[0] = Transform17;

children[1] = Anchor16;

Anchor Anchor22 = createNode("Anchor");
Anchor22.url = new MFString(new java.lang.String["http://web3d.org"]);
Transform Transform23 = createNode("Transform");
Transform23.DEF = "Cone";
Shape Shape24 = createNode("Shape");
Appearance Appearance25 = createNode("Appearance");
Material Material26 = createNode("Material");
Material26.DEF = "Rococo14";
Material26.ambientIntensity = 0.226102;
Material26.diffuseColor = new SFColor(new float[0.904409,0.315531,0.544386]);
Material26.specularColor = new SFColor(new float[0.0955906,0.0955906,0.0955906]);
Material26.shininess = 0.078125;
Appearance25.material = Material26;

Shape24.appearance = Appearance25;

Cone Cone27 = createNode("Cone");
Shape24.geometry = Cone27;

Transform23.child = new undefined();

Transform23.child[0] = Shape24;

Anchor22.children = new MFNode();

Anchor22.children[0] = Transform23;

children[2] = Anchor22;

Anchor Anchor28 = createNode("Anchor");
Anchor28.url = new MFString(new java.lang.String["http://web3d.org"]);
Anchor28.parameter = new MFString(new java.lang.String["target=_blank"]);
Transform Transform29 = createNode("Transform");
Transform29.DEF = "Cylinder";
Transform29.translation = new SFVec3f(new float[3.65254,0,0]);
Shape Shape30 = createNode("Shape");
Appearance Appearance31 = createNode("Appearance");
Material Material32 = createNode("Material");
Material32.DEF = "Rococo20";
Material32.ambientIntensity = 0.226102;
Material32.diffuseColor = new SFColor(new float[0.52545,0.455896,0.904409]);
Material32.specularColor = new SFColor(new float[0.0955906,0.0955906,0.0955906]);
Material32.shininess = 0.078125;
Appearance31.material = Material32;

Shape30.appearance = Appearance31;

Cylinder Cylinder33 = createNode("Cylinder");
Shape30.geometry = Cylinder33;

Transform29.child = new undefined();

Transform29.child[0] = Shape30;

Anchor28.children = new MFNode();

Anchor28.children[0] = Transform29;

children[3] = Anchor28;

Viewpoint Viewpoint34 = createNode("Viewpoint");
Viewpoint34.DEF = "VP1";
Viewpoint34.description = "Viewpoint1";
children[4] = Viewpoint34;

Viewpoint Viewpoint35 = createNode("Viewpoint");
Viewpoint35.DEF = "VP2";
Viewpoint35.description = "Viewpoint2";
Viewpoint35.position = new SFVec3f(new float[0,0,15.4598]);
children[5] = Viewpoint35;

}
