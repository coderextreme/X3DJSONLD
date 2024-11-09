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
meta3.content = "Tue, 15 Sep 2015 04:33:10 GMT";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Holger Seelig";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "generator";
meta5.content = "Titania V1.1.0, http://titania.create3000.de";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "modified";
meta6.content = "Tue, 15 Sep 2015 06:41:44 GMT";
head1.meta[4] = meta6;

head = head1;

Transform Transform8 = createNode("Transform");
Transform8.DEF = "Box_1";
Transform8.translation = new SFVec3f(new float[4.06141,0,0]);
Group Group9 = createNode("Group");
Group9.DEF = "Anim";
MetadataSet MetadataSet10 = createNode("MetadataSet");
MetadataSet10.name = "Animation";
MetadataInteger MetadataInteger11 = createNode("MetadataInteger");
MetadataInteger11.name = "duration";
MetadataInteger11.value = new MFInt32(new int[60]);
MetadataSet10.value = new MFNode();

MetadataSet10.value[0] = MetadataInteger11;

MetadataInteger MetadataInteger12 = createNode("MetadataInteger");
MetadataInteger12.name = "framesPerSecond";
MetadataInteger12.value = new MFInt32(new int[10]);
MetadataSet10.value[1] = MetadataInteger12;

Group9.metadata = MetadataSet10;

TimeSensor TimeSensor13 = createNode("TimeSensor");
TimeSensor13.DEF = "_1";
TimeSensor13.cycleInterval = 6;
TimeSensor13.loop = True;
TimeSensor13.startTime = 1442299303.32247;
TimeSensor13.stopTime = 1442299303.3224;
Group9.children = new MFNode();

Group9.children[0] = TimeSensor13;

PositionInterpolator PositionInterpolator14 = createNode("PositionInterpolator");
PositionInterpolator14.DEF = "BoxTranslationInterpolator";
PositionInterpolator14.key = new MFFloat(new float[0,0.0166667,0.0333333,0.05,0.0666667,0.0833333,0.1,0.116667,0.133333,0.15,0.166667,0.183333,0.2,0.216667,0.233333,0.25,0.266667,0.283333,0.3,0.316667,0.333333,0.35,0.366667,0.383333,0.4,0.416667,0.433333,0.45,0.466667,0.483333,0.5,0.516667,0.533333,0.55,0.566667,0.583333,0.6,0.616667,0.633333,0.65,0.666667,0.683333,0.7,0.716667,0.733333,0.75,0.766667,0.783333,0.8,0.816667,0.833333,0.85,0.866667,0.883333,0.9,0.916667,0.933333,0.95,0.966667,0.983333,1]);
PositionInterpolator14.keyValue = new MFVec3f(new float[-4.40427,0,0,-4.39688,0,0,-4.37505,0,0,-4.33927,0,0,-4.29005,0,0,-4.22787,0,0,-4.15324,0,0,-4.06666,0,0,-3.96862,0,0,-3.85962,0,0,-3.74017,0,0,-3.61075,0,0,-3.47187,0,0,-3.32403,0,0,-3.16771,0,0,-3.00343,0,0,-2.83168,0,0,-2.65295,0,0,-2.46775,0,0,-2.27657,0,0,-2.07991,0,0,-1.87827,0,0,-1.67215,0,0,-1.46205,0,0,-1.24846,0,0,-1.03187,0,0,-0.812804,0,0,-0.591741,0,0,-0.369183,0,0,-0.14563,0,0,0.0784221,0,0,0.302474,0,0,0.526027,0,0,0.748585,0,0,0.969648,0,0,1.18872,0,0,1.4053,0,0,1.61889,0,0,1.829,0,0,2.03512,0,0,2.23676,0,0,2.43341,0,0,2.62459,0,0,2.80979,0,0,2.98852,0,0,3.16027,0,0,3.32456,0,0,3.48087,0,0,3.62872,0,0,3.7676,0,0,3.89701,0,0,4.01647,0,0,4.12546,0,0,4.2235,0,0,4.31009,0,0,4.38471,0,0,4.44689,0,0,4.49612,0,0,4.5319,0,0,4.55373,0,0,4.56112,0,0]);
MetadataSet MetadataSet15 = createNode("MetadataSet");
MetadataSet15.name = "Interpolator";
MetadataInteger MetadataInteger16 = createNode("MetadataInteger");
MetadataInteger16.name = "key";
MetadataInteger16.value = new MFInt32(new int[0,60]);
MetadataSet15.value = new MFNode();

MetadataSet15.value[0] = MetadataInteger16;

MetadataDouble MetadataDouble17 = createNode("MetadataDouble");
MetadataDouble17.name = "keyValue";
MetadataDouble17.value = new MFDouble(new double[-4.40427207946777,0,0,4.56111621856689,0,0]);
MetadataSet15.value[1] = MetadataDouble17;

MetadataString MetadataString18 = createNode("MetadataString");
MetadataString18.name = "keyType";
MetadataString18.value = new MFString(new java.lang.String[", ","SPLINESPLINE"]);
MetadataSet15.value[2] = MetadataString18;

PositionInterpolator14.metadata = MetadataSet15;

Group9.children[1] = PositionInterpolator14;

Transform8.children = new MFNode();

Transform8.children[0] = Group9;

Shape Shape19 = createNode("Shape");
Appearance Appearance20 = createNode("Appearance");
Material Material21 = createNode("Material");
Appearance20.material = Material21;

Shape19.appearance = Appearance20;

Box Box22 = createNode("Box");
Shape19.geometry = Box22;

Transform8.child[1] = Shape19;

children = new MFNode();

children[0] = Transform8;

Viewpoint Viewpoint23 = createNode("Viewpoint");
children[1] = Viewpoint23;

Script Script24 = createNode("Script");
Script24.DEF = "_2";
field field25 = createNode("field");
field25.name = "set_translation";
field25.accessType = "inputOnly";
field25.type = "SFVec3f";
Script24.field = new MFNode();

Script24.field[0] = field25;


Script24.setSourceCode(`javascript:\n"+
"\n"+
"var x = 0;\n"+
"\n"+
"function set_translation (value)\n"+
"{\n"+
"	if (value .x < x)\n"+
"		print (x, \" : \", value .x);\n"+
"	\n"+
"	x = value .x;\n"+
"}`)
children[2] = Script24;

ROUTE ROUTE26 = createNode("ROUTE");
ROUTE26.fromNode = "_1";
ROUTE26.fromField = "fraction_changed";
ROUTE26.toNode = "BoxTranslationInterpolator";
ROUTE26.toField = "set_fraction";
children[3] = ROUTE26;

ROUTE ROUTE27 = createNode("ROUTE");
ROUTE27.fromNode = "BoxTranslationInterpolator";
ROUTE27.fromField = "value_changed";
ROUTE27.toNode = "Box_1";
ROUTE27.toField = "set_translation";
children[4] = ROUTE27;

ROUTE ROUTE28 = createNode("ROUTE");
ROUTE28.fromNode = "Box_1";
ROUTE28.fromField = "translation_changed";
ROUTE28.toNode = "_2";
ROUTE28.toField = "set_translation";
children[5] = ROUTE28;

}
