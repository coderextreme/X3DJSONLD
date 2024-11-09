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
meta3.content = "Sat, 06 Aug 2016 06:44:36 GMT";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "holger";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "generator";
meta5.content = "Titania V1.4.8, http://titania.create3000.de";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "identifier";
meta6.content = "file:///home/holger/Projekte/Titania/Library/Tests/Extrusion/Rotations.x3d";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "modified";
meta7.content = "Sat, 06 Aug 2016 19:29:42 GMT";
head1.meta[5] = meta7;

head = head1;

WorldInfo WorldInfo9 = createNode("WorldInfo");
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
MetadataSet15.name = "NavigationInfo";
MetadataSet15.DEF = "NavigationInfo";
MetadataSet15.reference = "http://titania.create3000.de";
MetadataString MetadataString16 = createNode("MetadataString");
MetadataString16.name = "type";
MetadataString16.DEF = "type";
MetadataString16.reference = "http://titania.create3000.de";
MetadataString16.value = new MFString(new java.lang.String["EXAMINE"]);
MetadataSet15.value = new MFNode();

MetadataSet15.value[0] = MetadataString16;

MetadataSet10.value[2] = MetadataSet15;

MetadataSet MetadataSet17 = createNode("MetadataSet");
MetadataSet17.name = "Viewpoint";
MetadataSet17.DEF = "Viewpoint";
MetadataSet17.reference = "http://titania.create3000.de";
MetadataDouble MetadataDouble18 = createNode("MetadataDouble");
MetadataDouble18.name = "position";
MetadataDouble18.DEF = "position";
MetadataDouble18.reference = "http://titania.create3000.de";
MetadataDouble18.value = new MFDouble(new double[2.79252147674561,5.76409196853638,4.20475006103516]);
MetadataSet17.value = new MFNode();

MetadataSet17.value[0] = MetadataDouble18;

MetadataDouble MetadataDouble19 = createNode("MetadataDouble");
MetadataDouble19.name = "orientation";
MetadataDouble19.DEF = "orientation";
MetadataDouble19.reference = "http://titania.create3000.de";
MetadataDouble19.value = new MFDouble(new double[-0.882984838661416,0.437083442792234,0.17116027205798,0.886694786879645]);
MetadataSet17.value[1] = MetadataDouble19;

MetadataDouble MetadataDouble20 = createNode("MetadataDouble");
MetadataDouble20.name = "centerOfRotation";
MetadataDouble20.DEF = "centerOfRotation";
MetadataDouble20.reference = "http://titania.create3000.de";
MetadataDouble20.value = new MFDouble(new double[0.5,0,-1]);
MetadataSet17.value[2] = MetadataDouble20;

MetadataSet10.value[3] = MetadataSet17;

MetadataSet MetadataSet21 = createNode("MetadataSet");
MetadataSet21.name = "Selection";
MetadataSet21.DEF = "Selection";
MetadataSet21.reference = "http://titania.create3000.de";
MetadataSet MetadataSet22 = createNode("MetadataSet");
MetadataSet22.name = "previous";
MetadataSet22.DEF = "previous";
MetadataSet22.reference = "http://titania.create3000.de";
MetadataSet21.value = new MFNode();

MetadataSet21.value[0] = MetadataSet22;

MetadataSet MetadataSet23 = createNode("MetadataSet");
MetadataSet23.name = "children";
MetadataSet23.DEF = "children";
MetadataSet23.reference = "http://titania.create3000.de";
Viewpoint Viewpoint24 = createNode("Viewpoint");
Viewpoint24.DEF = "_1";
Viewpoint24.position = new SFVec3f(new float[2.79252,5.76409,4.20475]);
Viewpoint24.orientation = new SFRotation(new float[-0.882984838661416,0.437083442792234,0.17116027205798,0.886694786879645]);
Viewpoint24.centerOfRotation = new SFVec3f(new float[0.5,0,-1]);
MetadataSet23.value = Viewpoint24;

MetadataSet21.value[1] = MetadataSet23;

MetadataSet10.value[4] = MetadataSet21;

WorldInfo9.metadata = MetadataSet10;

children = new MFNode();

children[0] = WorldInfo9;

Transform Transform25 = createNode("Transform");
Transform25.DEF = "Extrusion";
Transform25.translation = new SFVec3f(new float[-2,0,0]);
Shape Shape26 = createNode("Shape");
Appearance Appearance27 = createNode("Appearance");
Material Material28 = createNode("Material");
Appearance27.material = Material28;

ImageTexture ImageTexture29 = createNode("ImageTexture");
ImageTexture29.url = new MFString(new java.lang.String[", ","http://cdn.rawgit.com/create3000/Library/master/Textures/Game/rockgold.png, ","https://cdn.rawgit.com/create3000/Library/master/Textures/Game/rockgold.png, ","http://rawgit.com/create3000/Library/master/Textures/Game/rockgold.pnghttps://rawgit.com/create3000/Library/master/Textures/Game/rockgold.png"]);
ImageTexture29.repeatS = False;
ImageTexture29.repeatT = False;
Appearance27.texture = ImageTexture29;

Shape26.appearance = Appearance27;

Extrusion Extrusion30 = createNode("Extrusion");
Extrusion30.DEF = "Extrusion1";
Extrusion30.crossSection = new MFVec2f(new float[0,1,1,0,0,-1]);
Extrusion30.orientation = new MFRotation(new float[0,0,1,0,0,0,1,0.199999999999999,0,0,1,0.4,0,0,1,0.6,0,0,1,0.8]);
Extrusion30.spine = new MFVec3f(new float[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]);
Shape26.geometry = Extrusion30;

Transform25.child = new undefined();

Transform25.child[0] = Shape26;

children[1] = Transform25;

Transform Transform31 = createNode("Transform");
Transform31.DEF = "Extrusion_1";
Transform31.translation = new SFVec3f(new float[2,0,0]);
Shape Shape32 = createNode("Shape");
Appearance Appearance33 = createNode("Appearance");
Material Material34 = createNode("Material");
Appearance33.material = Material34;

ImageTexture ImageTexture35 = createNode("ImageTexture");
ImageTexture35.url = new MFString(new java.lang.String[", ","http://cdn.rawgit.com/create3000/Library/master/Textures/Game/rockgold.png, ","https://cdn.rawgit.com/create3000/Library/master/Textures/Game/rockgold.png, ","http://rawgit.com/create3000/Library/master/Textures/Game/rockgold.pnghttps://rawgit.com/create3000/Library/master/Textures/Game/rockgold.png"]);
ImageTexture35.repeatS = False;
ImageTexture35.repeatT = False;
Appearance33.texture = ImageTexture35;

Shape32.appearance = Appearance33;

Extrusion Extrusion36 = createNode("Extrusion");
Extrusion36.DEF = "Extrusion2";
Extrusion36.creaseAngle = 0.580624;
Extrusion36.crossSection = new MFVec2f(new float[0,1,1,0,0,-1]);
Extrusion36.orientation = new MFRotation(new float[0,0,1,0,0,0,1,0.196349540624999,0,0,1,0.39269908125,0,0,1,0.589048621875,0,0,1,0.7853981625,0,0,1,0.981747703125,0,0,1,1.17809724375,0,0,1,1.374446784375,0,0,1,1.570796325,0,0,1,1.767145865625,0,0,1,1.96349540625,0,0,1,2.159844946875,0,0,1,2.3561944875,0,0,1,2.552544028125,0,0,1,2.74889356875,0,0,1,2.945243109375,0,0,1,3.14159265,0,0,1,3.337942190625,0,0,1,3.53429173125,0,0,1,3.730641271875,0,0,1,3.9269908125,0,0,1,4.123340353125,0,0,1,4.31968989375,0,0,1,4.516039434375,0,0,1,4.712388975,0,0,1,4.908738515625,0,0,1,5.10508805625,0,0,1,5.301437596875,0,0,1,5.4977871375,0,0,1,5.694136678125,0,0,1,5.89048621875,0,0,1,6.086835759375,0,0,1,0]);
Extrusion36.spine = new MFVec3f(new float[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]);
Shape32.geometry = Extrusion36;

Transform31.child = new undefined();

Transform31.child[0] = Shape32;

children[2] = Transform31;

Transform Transform37 = createNode("Transform");
Transform37.DEF = "Extrusion_2";
Transform37.translation = new SFVec3f(new float[0,0,-2]);
Shape Shape38 = createNode("Shape");
Appearance Appearance39 = createNode("Appearance");
Material Material40 = createNode("Material");
Appearance39.material = Material40;

ImageTexture ImageTexture41 = createNode("ImageTexture");
ImageTexture41.url = new MFString(new java.lang.String[", ","http://cdn.rawgit.com/create3000/Library/master/Textures/Game/rockgold.png, ","https://cdn.rawgit.com/create3000/Library/master/Textures/Game/rockgold.png, ","http://rawgit.com/create3000/Library/master/Textures/Game/rockgold.pnghttps://rawgit.com/create3000/Library/master/Textures/Game/rockgold.png"]);
ImageTexture41.repeatS = False;
ImageTexture41.repeatT = False;
Appearance39.texture = ImageTexture41;

Shape38.appearance = Appearance39;

Extrusion Extrusion42 = createNode("Extrusion");
Extrusion42.DEF = "Extrusion3";
Extrusion42.creaseAngle = 0.580624;
Extrusion42.crossSection = new MFVec2f(new float[0,1,0.19509,0.980785,0.382683,0.92388,0.55557,0.83147,0.707107,0.707107,0.83147,0.55557,0.92388,0.382683,0.980785,0.19509,1,-2.32051e-8,0.980785,-0.19509,0.92388,-0.382683,0.83147,-0.55557,0.707107,-0.707107,0.55557,-0.83147,0.382683,-0.92388,0.19509,-0.980785,-4.64102e-8,-1]);
Extrusion42.orientation = new MFRotation(new float[0,0,1,0,0,0,1,0.196349540624999,0,0,1,0.39269908125,0,0,1,0.589048621875,0,0,1,0.7853981625,0,0,1,0.981747703125,0,0,1,1.17809724375,0,0,1,1.374446784375,0,0,1,1.570796325,0,0,1,1.767145865625,0,0,1,1.96349540625,0,0,1,2.159844946875,0,0,1,2.3561944875,0,0,1,2.552544028125,0,0,1,2.74889356875,0,0,1,2.945243109375,0,0,1,3.14159265,0,0,1,3.337942190625,0,0,1,3.53429173125,0,0,1,3.730641271875,0,0,1,3.9269908125,0,0,1,4.123340353125,0,0,1,4.31968989375,0,0,1,4.516039434375,0,0,1,4.712388975,0,0,1,4.908738515625,0,0,1,5.10508805625,0,0,1,5.301437596875,0,0,1,5.4977871375,0,0,1,5.694136678125,0,0,1,5.89048621875,0,0,1,6.086835759375,0,0,1,0]);
Extrusion42.spine = new MFVec3f(new float[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]);
Shape38.geometry = Extrusion42;

Transform37.child = new undefined();

Transform37.child[0] = Shape38;

children[3] = Transform37;

Viewpoint Viewpoint43 = createNode("Viewpoint");
Viewpoint43.USE = "_1";
children[4] = Viewpoint43;

}
