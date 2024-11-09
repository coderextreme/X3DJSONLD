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
meta3.content = "Wed, 18 Mar 2015 02:57:23 GMT";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Holger Seelig";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "generator";
meta5.content = "Titania V0.7.6, http://titania.create3000.de";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "modified";
meta6.content = "Wed, 18 Mar 2015 02:57:23 GMT";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "title";
meta7.content = "BIC Buero";
head1.meta[5] = meta7;

head = head1;

Viewpoint Viewpoint9 = createNode("Viewpoint");
Viewpoint9.DEF = "VP1";
Viewpoint9.description = "viewpoint2";
Viewpoint9.position = new SFVec3f(new float[-33.5441,5.45531,-19.045]);
Viewpoint9.orientation = new SFRotation(new float[-0.127353,0.991449,0.0284452,0.873982]);
children = new MFNode();

children[0] = Viewpoint9;

Transform Transform10 = createNode("Transform");
Transform10.translation = new SFVec3f(new float[-81.6385,-23.4139,-23.6912]);
Transform10.rotation = new SFRotation(new float[6.5522e-7,1,-0.00000215342,3.14159]);
Transform10.scale = new SFVec3f(new float[83.9983,83.9984,83.9984]);
Transform10.scaleOrientation = new SFRotation(new float[0.0431866,-0.967337,-0.249786,0.611351]);
Shape Shape11 = createNode("Shape");
Appearance Appearance12 = createNode("Appearance");
Material Material13 = createNode("Material");
Material13.ambientIntensity = 0.16;
Material13.diffuseColor = new SFColor(new float[1,1,1]);
Material13.emissiveColor = new SFColor(new float[0.489362,0.489362,0.489362]);
Material13.shininess = 0.361702;
Appearance12.material = Material13;

ImageTexture ImageTexture14 = createNode("ImageTexture");
ImageTexture14.url = new MFString(new java.lang.String["himmel.png"]);
Appearance12.texture = ImageTexture14;

Shape11.appearance = Appearance12;

IndexedFaceSet IndexedFaceSet15 = createNode("IndexedFaceSet");
IndexedFaceSet15.ccw = False;
IndexedFaceSet15.creaseAngle = 0.5;
IndexedFaceSet15.texCoordIndex = new MFInt32(new int[0,1,2,-1,2,1,3,-1,2,3,4,-1,4,3,5,-1,4,5,6,-1,6,5,7,-1,6,7,8,-1,8,7,9,-1,8,9,10,-1,1,11,3,-1,3,11,12,-1,3,12,5,-1,5,12,13,-1,5,13,7,-1,7,13,14,-1,7,14,9,-1,11,15,12,-1,12,15,16,-1,12,16,13,-1,13,16,17,-1,13,17,14,-1,15,18,16,-1,16,18,19,-1,16,19,17,-1,19,18,60,-1,10,9,20,-1,20,9,21,-1,20,21,22,-1,22,21,23,-1,22,23,24,-1,24,23,25,-1,24,25,26,-1,26,25,27,-1,26,27,28,-1,9,14,21,-1,21,14,29,-1,21,29,23,-1,23,29,30,-1,23,30,25,-1,25,30,31,-1,25,31,27,-1,14,17,29,-1,29,17,32,-1,29,32,30,-1,30,32,33,-1,30,33,31,-1,17,19,32,-1,32,19,34,-1,32,34,33,-1,34,19,60,-1,53,52,35,-1,35,52,36,-1,35,36,37,-1,37,36,38,-1,37,38,39,-1,39,38,40,-1,39,40,41,-1,41,40,1,-1,41,1,0,-1,52,56,36,-1,36,56,42,-1,36,42,38,-1,38,42,43,-1,38,43,40,-1,40,43,11,-1,40,11,1,-1,56,58,42,-1,42,58,44,-1,42,44,43,-1,43,44,15,-1,43,15,11,-1,58,59,44,-1,44,59,18,-1,44,18,15,-1,18,59,60,-1,28,27,45,-1,45,27,46,-1,45,46,47,-1,47,46,48,-1,47,48,49,-1,49,48,50,-1,49,50,51,-1,51,50,52,-1,51,52,53,-1,27,31,46,-1,46,31,54,-1,46,54,48,-1,48,54,55,-1,48,55,50,-1,50,55,56,-1,50,56,52,-1,31,33,54,-1,54,33,57,-1,54,57,55,-1,55,57,58,-1,55,58,56,-1,33,34,57,-1,57,34,59,-1,57,59,58,-1,59,34,60,-1]);
IndexedFaceSet15.coordIndex = new MFInt32(new int[0,1,2,-1,2,1,3,-1,2,3,4,-1,4,3,5,-1,4,5,6,-1,6,5,7,-1,6,7,8,-1,8,7,9,-1,8,9,10,-1,1,11,3,-1,3,11,12,-1,3,12,5,-1,5,12,13,-1,5,13,7,-1,7,13,14,-1,7,14,9,-1,11,15,12,-1,12,15,16,-1,12,16,13,-1,13,16,17,-1,13,17,14,-1,15,18,16,-1,16,18,19,-1,16,19,17,-1,19,18,20,-1,10,9,21,-1,21,9,22,-1,21,22,23,-1,23,22,24,-1,23,24,25,-1,25,24,26,-1,25,26,27,-1,27,26,28,-1,27,28,29,-1,9,14,22,-1,22,14,30,-1,22,30,24,-1,24,30,31,-1,24,31,26,-1,26,31,32,-1,26,32,28,-1,14,17,30,-1,30,17,33,-1,30,33,31,-1,31,33,34,-1,31,34,32,-1,17,19,33,-1,33,19,35,-1,33,35,34,-1,35,19,20,-1,36,37,38,-1,38,37,39,-1,38,39,40,-1,40,39,41,-1,40,41,42,-1,42,41,43,-1,42,43,44,-1,44,43,1,-1,44,1,0,-1,37,45,39,-1,39,45,46,-1,39,46,41,-1,41,46,47,-1,41,47,43,-1,43,47,11,-1,43,11,1,-1,45,48,46,-1,46,48,49,-1,46,49,47,-1,47,49,15,-1,47,15,11,-1,48,50,49,-1,49,50,18,-1,49,18,15,-1,18,50,20,-1,29,28,51,-1,51,28,52,-1,51,52,53,-1,53,52,54,-1,53,54,55,-1,55,54,56,-1,55,56,57,-1,57,56,37,-1,57,37,36,-1,28,32,52,-1,52,32,58,-1,52,58,54,-1,54,58,59,-1,54,59,56,-1,56,59,45,-1,56,45,37,-1,32,34,58,-1,58,34,60,-1,58,60,59,-1,59,60,48,-1,59,48,45,-1,34,35,60,-1,60,35,50,-1,60,50,48,-1,50,35,20,-1]);
TextureCoordinate TextureCoordinate16 = createNode("TextureCoordinate");
TextureCoordinate16.point = new MFVec2f(new float[1,0.513746,0.985071,0.513746,0.985071,0.389144,0.952267,0.358846,0.916025,0.228771,0.833333,0.171248,0.77735,0.0862836,0.650756,0.0490453,0.621268,0.0153394,0.5,0.0153394,0.5,0,0.916025,0.513746,0.833333,0.342497,0.666667,0.171248,0.5,0.0862836,0.77735,0.513746,0.650756,0.358846,0.5,0.228771,0.621268,0.513746,0.5,0.389144,0.378732,0.0153394,0.349245,0.0490453,0.22265,0.0862836,0.166667,0.171248,0.083975,0.228771,0.047733,0.358846,0.014929,0.389144,0.014929,0.513746,0,0.513746,0.333333,0.171248,0.166667,0.342497,0.083975,0.513746,0.349245,0.358846,0.22265,0.513746,0.378732,0.513746,0.621268,1.01215,0.650756,0.978446,0.77735,0.941208,0.833333,0.856243,0.916025,0.79872,0.952267,0.668646,0.985071,0.638348,0.666667,0.856243,0.833333,0.684994,0.650756,0.668646,0.014929,0.638348,0.047733,0.668646,0.083975,0.79872,0.166667,0.856243,0.22265,0.941208,0.349245,0.978446,0.378732,1.01215,0.5,1.01215,0.5,1.02749,0.166667,0.684994,0.333333,0.856243,0.5,0.941208,0.349245,0.668646,0.5,0.79872,0.5,0.638348,0.5,0.513746]);
IndexedFaceSet15.texCoord = TextureCoordinate16;

Coordinate Coordinate17 = createNode("Coordinate");
Coordinate17.point = new MFVec3f(new float[1,0,0,0.970142,0.242536,0,0.970142,0,0.242536,0.904534,0.301511,0.301511,0.83205,0,0.5547,0.666667,0.333333,0.666667,0.5547,0,0.83205,0.301511,0.301511,0.904534,0.242536,0,0.970142,0,0.242536,0.970142,0,0,1,0.83205,0.5547,0,0.666667,0.666667,0.333333,0.333333,0.666667,0.666667,0,0.5547,0.83205,0.5547,0.83205,0,0.301511,0.904534,0.301511,0,0.83205,0.5547,0.242536,0.970142,0,0,0.970142,0.242536,0,1,0,-0.242536,0,0.970142,-0.301511,0.301511,0.904534,-0.5547,0,0.83205,-0.666667,0.333333,0.666667,-0.83205,0,0.5547,-0.904534,0.301511,0.301511,-0.970142,0,0.242536,-0.970142,0.242536,0,-1,0,0,-0.333333,0.666667,0.666667,-0.666667,0.666667,0.333333,-0.83205,0.5547,0,-0.301511,0.904534,0.301511,-0.5547,0.83205,0,-0.242536,0.970142,0,0,0,-1,0,0.242536,-0.970142,0.242536,0,-0.970142,0.301511,0.301511,-0.904534,0.5547,0,-0.83205,0.666667,0.333333,-0.666667,0.83205,0,-0.5547,0.904534,0.301511,-0.301511,0.970142,0,-0.242536,0,0.5547,-0.83205,0.333333,0.666667,-0.666667,0.666667,0.666667,-0.333333,0,0.83205,-0.5547,0.301511,0.904534,-0.301511,0,0.970142,-0.242536,-0.970142,0,-0.242536,-0.904534,0.301511,-0.301511,-0.83205,0,-0.5547,-0.666667,0.333333,-0.666667,-0.5547,0,-0.83205,-0.301511,0.301511,-0.904534,-0.242536,0,-0.970142,-0.666667,0.666667,-0.333333,-0.333333,0.666667,-0.666667,-0.301511,0.904534,-0.301511]);
IndexedFaceSet15.coord = Coordinate17;

Shape11.geometry = IndexedFaceSet15;

Transform10.child = new undefined();

Transform10.child[0] = Shape11;

children[1] = Transform10;

PointLight PointLight18 = createNode("PointLight");
PointLight18.DEF = "Light1";
PointLight18.ambientIntensity = 0.41;
PointLight18.location = new SFVec3f(new float[-38.3413,6.99565,-21.3606]);
children[2] = PointLight18;

PointLight PointLight19 = createNode("PointLight");
PointLight19.DEF = "Light2";
PointLight19.intensity = 0.407767;
PointLight19.location = new SFVec3f(new float[-36,5.9944,-21.2446]);
children[3] = PointLight19;

Transform Transform20 = createNode("Transform");
Transform20.translation = new SFVec3f(new float[-38.0198,-46.8986,-28.2243]);
Transform20.rotation = new SFRotation(new float[1,0,0,4.71239]);
Transform20.scale = new SFVec3f(new float[0.999996,1.00004,0.644774]);
Transform20.center = new SFVec3f(new float[3.2464,52.8039,6.57235]);
Shape Shape21 = createNode("Shape");
Appearance Appearance22 = createNode("Appearance");
Material Material23 = createNode("Material");
Material23.ambientIntensity = 0;
Material23.diffuseColor = new SFColor(new float[0,0,0]);
Material23.specularColor = new SFColor(new float[1,1,1]);
Material23.emissiveColor = new SFColor(new float[0.212766,0.212766,0.212766]);
Appearance22.material = Material23;

Shape21.appearance = Appearance22;

IndexedFaceSet IndexedFaceSet24 = createNode("IndexedFaceSet");
IndexedFaceSet24.solid = False;
IndexedFaceSet24.creaseAngle = 6.28319;
IndexedFaceSet24.colorPerVertex = False;
IndexedFaceSet24.coordIndex = new MFInt32(new int[0,1,2,3,-1,4,5,6,7,-1]);
Coordinate Coordinate25 = createNode("Coordinate");
Coordinate25.point = new MFVec3f(new float[0.2647,51.1121,5.6512,0.264698,51.3974,5.6512,0.264698,51.3974,7.66718,0.2647,51.1121,7.66718,0.26469,52.6977,5.6512,0.264688,53.0168,5.6512,0.264688,53.0168,7.66718,0.26469,52.6977,7.66718]);
IndexedFaceSet24.coord = Coordinate25;

Shape21.geometry = IndexedFaceSet24;

Transform20.child = new undefined();

Transform20.child[0] = Shape21;

children[4] = Transform20;

Transform Transform26 = createNode("Transform");
Transform26.translation = new SFVec3f(new float[17.3908,-2.38265,6.33846]);
Transform26.scale = new SFVec3f(new float[1.46504,1.4649,1.46488]);
Transform Transform27 = createNode("Transform");
Transform27.translation = new SFVec3f(new float[-37.4314,5.11772,-20.724]);
Transform27.rotation = new SFRotation(new float[0.577347,0.577352,-0.577352,2.0944]);
Transform27.scale = new SFVec3f(new float[0.0366491,0.036936,0.0370194]);
Transform27.scaleOrientation = new SFRotation(new float[0.00457305,0.435849,-0.900008,0.00371864]);
Shape Shape28 = createNode("Shape");
Appearance Appearance29 = createNode("Appearance");
Material Material30 = createNode("Material");
Material30.DEF = "_1";
Material30.ambientIntensity = 0.340426;
Material30.diffuseColor = new SFColor(new float[1,1,1]);
Material30.emissiveColor = new SFColor(new float[0.43617,0.43617,0.43617]);
Appearance29.material = Material30;

ImageTexture ImageTexture31 = createNode("ImageTexture");
ImageTexture31.DEF = "_2";
ImageTexture31.url = new MFString(new java.lang.String["steckdose2.png"]);
Appearance29.texture = ImageTexture31;

TextureTransform TextureTransform32 = createNode("TextureTransform");
Appearance29.textureTransform = TextureTransform32;

Shape28.appearance = Appearance29;

IndexedFaceSet IndexedFaceSet33 = createNode("IndexedFaceSet");
IndexedFaceSet33.creaseAngle = 0.5;
IndexedFaceSet33.texCoordIndex = new MFInt32(new int[0,1,3,2,-1]);
IndexedFaceSet33.coordIndex = new MFInt32(new int[3,0,1,2,-1]);
TextureCoordinate TextureCoordinate34 = createNode("TextureCoordinate");
TextureCoordinate34.point = new MFVec2f(new float[0,1,0,0,1,1,1,0]);
IndexedFaceSet33.texCoord = TextureCoordinate34;

Coordinate Coordinate35 = createNode("Coordinate");
Coordinate35.point = new MFVec3f(new float[-1,1,1,1,1,1,1,1,-1,-1,1,-1]);
IndexedFaceSet33.coord = Coordinate35;

Shape28.geometry = IndexedFaceSet33;

Transform27.child = new undefined();

Transform27.child[0] = Shape28;

Transform26.children = new MFNode();

Transform26.children[0] = Transform27;

Transform Transform36 = createNode("Transform");
Transform36.translation = new SFVec3f(new float[-37.4319,5.118,-20.9288]);
Transform36.rotation = new SFRotation(new float[0.577347,0.577352,-0.577352,2.0944]);
Transform36.scale = new SFVec3f(new float[0.111058,0.0369361,0.0370194]);
Transform36.scaleOrientation = new SFRotation(new float[-0.0167824,0.438953,-0.898353,0.00371864]);
Shape Shape37 = createNode("Shape");
Appearance Appearance38 = createNode("Appearance");
Material Material39 = createNode("Material");
Material39.USE = "_1";
Appearance38.material = Material39;

ImageTexture ImageTexture40 = createNode("ImageTexture");
ImageTexture40.DEF = "_3";
ImageTexture40.url = new MFString(new java.lang.String["steckdose1.png"]);
Appearance38.texture = ImageTexture40;

TextureTransform TextureTransform41 = createNode("TextureTransform");
TextureTransform41.scale = new SFVec2f(new float[3,1]);
Appearance38.textureTransform = TextureTransform41;

Shape37.appearance = Appearance38;

IndexedFaceSet IndexedFaceSet42 = createNode("IndexedFaceSet");
IndexedFaceSet42.creaseAngle = 0.5;
IndexedFaceSet42.texCoordIndex = new MFInt32(new int[0,1,3,2,-1]);
IndexedFaceSet42.coordIndex = new MFInt32(new int[3,0,1,2,-1]);
TextureCoordinate TextureCoordinate43 = createNode("TextureCoordinate");
TextureCoordinate43.point = new MFVec2f(new float[0,1,0,0,1,1,1,0]);
IndexedFaceSet42.texCoord = TextureCoordinate43;

Coordinate Coordinate44 = createNode("Coordinate");
Coordinate44.point = new MFVec3f(new float[-1,1,1,1,1,1,1,1,-1,-1,1,-1]);
IndexedFaceSet42.coord = Coordinate44;

Shape37.geometry = IndexedFaceSet42;

Transform36.child = new undefined();

Transform36.child[0] = Shape37;

Transform26.children[1] = Transform36;

children[5] = Transform26;

Transform Transform45 = createNode("Transform");
Transform45.translation = new SFVec3f(new float[17.3908,-2.38265,11.3153]);
Transform45.scale = new SFVec3f(new float[1.46504,1.4649,1.46488]);
Transform Transform46 = createNode("Transform");
Transform46.translation = new SFVec3f(new float[-37.4306,5.11737,-20.3516]);
Transform46.rotation = new SFRotation(new float[0.577347,0.577352,-0.577352,2.0944]);
Transform46.scale = new SFVec3f(new float[0.111058,0.0369361,0.0370194]);
Transform46.scaleOrientation = new SFRotation(new float[-0.0167824,0.438953,-0.898353,0.00371864]);
Shape Shape47 = createNode("Shape");
Appearance Appearance48 = createNode("Appearance");
Material Material49 = createNode("Material");
Material49.ambientIntensity = 0.340426;
Material49.diffuseColor = new SFColor(new float[1,1,1]);
Material49.emissiveColor = new SFColor(new float[0.43617,0.43617,0.43617]);
Appearance48.material = Material49;

ImageTexture ImageTexture50 = createNode("ImageTexture");
ImageTexture50.USE = "_3";
Appearance48.texture = ImageTexture50;

TextureTransform TextureTransform51 = createNode("TextureTransform");
TextureTransform51.scale = new SFVec2f(new float[3,1]);
Appearance48.textureTransform = TextureTransform51;

Shape47.appearance = Appearance48;

IndexedFaceSet IndexedFaceSet52 = createNode("IndexedFaceSet");
IndexedFaceSet52.creaseAngle = 0.5;
IndexedFaceSet52.texCoordIndex = new MFInt32(new int[0,1,3,2,-1]);
IndexedFaceSet52.coordIndex = new MFInt32(new int[3,0,1,2,-1]);
TextureCoordinate TextureCoordinate53 = createNode("TextureCoordinate");
TextureCoordinate53.point = new MFVec2f(new float[0,1,0,0,1,1,1,0]);
IndexedFaceSet52.texCoord = TextureCoordinate53;

Coordinate Coordinate54 = createNode("Coordinate");
Coordinate54.point = new MFVec3f(new float[-1,1,1,1,1,1,1,1,-1,-1,1,-1]);
IndexedFaceSet52.coord = Coordinate54;

Shape47.geometry = IndexedFaceSet52;

Transform46.child = new undefined();

Transform46.child[0] = Shape47;

Transform45.children = new MFNode();

Transform45.children[0] = Transform46;

children[6] = Transform45;

Transform Transform55 = createNode("Transform");
Transform55.translation = new SFVec3f(new float[-103.534,-78.1417,-23.2457]);
Transform55.rotation = new SFRotation(new float[-0.707107,0,0.707107,3.14159]);
Transform55.scale = new SFVec3f(new float[83.2926,79.0865,79.087]);
Shape Shape56 = createNode("Shape");
Appearance Appearance57 = createNode("Appearance");
Material Material58 = createNode("Material");
Material58.emissiveColor = new SFColor(new float[0.446809,0.446809,0.446809]);
Appearance57.material = Material58;

ImageTexture ImageTexture59 = createNode("ImageTexture");
ImageTexture59.url = new MFString(new java.lang.String["gras_g.png"]);
Appearance57.texture = ImageTexture59;

TextureTransform TextureTransform60 = createNode("TextureTransform");
TextureTransform60.scale = new SFVec2f(new float[10,10]);
Appearance57.textureTransform = TextureTransform60;

Shape56.appearance = Appearance57;

IndexedFaceSet IndexedFaceSet61 = createNode("IndexedFaceSet");
IndexedFaceSet61.creaseAngle = 0.5;
IndexedFaceSet61.texCoordIndex = new MFInt32(new int[0,1,2,3,-1]);
IndexedFaceSet61.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
TextureCoordinate TextureCoordinate62 = createNode("TextureCoordinate");
TextureCoordinate62.point = new MFVec2f(new float[0,1,0,0,1,0,1,1]);
IndexedFaceSet61.texCoord = TextureCoordinate62;

Coordinate Coordinate63 = createNode("Coordinate");
Coordinate63.point = new MFVec3f(new float[-1,-1,1,-1,-1,-1,1,-1,-1,1,-1,1]);
IndexedFaceSet61.coord = Coordinate63;

Shape56.geometry = IndexedFaceSet61;

Transform55.child = new undefined();

Transform55.child[0] = Shape56;

children[7] = Transform55;

Transform Transform64 = createNode("Transform");
Transform64.translation = new SFVec3f(new float[-31.6499,5.99605,-20.7605]);
Transform64.rotation = new SFRotation(new float[-0.57735,-0.577349,0.577352,4.18879]);
Transform64.scale = new SFVec3f(new float[8.04266,1.03052,1.90638]);
Shape Shape65 = createNode("Shape");
Appearance Appearance66 = createNode("Appearance");
Material Material67 = createNode("Material");
Appearance66.material = Material67;

Shape65.appearance = Appearance66;

IndexedFaceSet IndexedFaceSet68 = createNode("IndexedFaceSet");
IndexedFaceSet68.creaseAngle = 0.5;
IndexedFaceSet68.coordIndex = new MFInt32(new int[2,3,1,0,-1,6,7,5,4,-1,0,1,7,6,-1,4,5,3,2,-1,4,2,0,6,-1,3,5,7,1,-1]);
Coordinate Coordinate69 = createNode("Coordinate");
Coordinate69.point = new MFVec3f(new float[-0.876843,0.876814,0.876836,-0.876843,-0.876814,0.876836,0.876843,0.876814,0.876836,0.876843,-0.876814,0.876836,0.876843,0.876814,-0.876836,0.876843,-0.876814,-0.876836,-0.876843,0.876814,-0.876836,-0.876843,-0.876814,-0.876836]);
IndexedFaceSet68.coord = Coordinate69;

Shape65.geometry = IndexedFaceSet68;

Transform64.child = new undefined();

Transform64.child[0] = Shape65;

children[8] = Transform64;

Transform Transform70 = createNode("Transform");
Transform70.DEF = "tree";
Transform70.translation = new SFVec3f(new float[7.22813,0.944695,-4.87276]);
Transform Transform71 = createNode("Transform");
Transform71.translation = new SFVec3f(new float[-30.645,-0.000947475,33.3974]);
Transform71.rotation = new SFRotation(new float[0,-1,0,1.00453]);
Transform71.scale = new SFVec3f(new float[1,1.18986,1]);
Shape Shape72 = createNode("Shape");
Appearance Appearance73 = createNode("Appearance");
Material Material74 = createNode("Material");
Material74.ambientIntensity = 0;
Material74.diffuseColor = new SFColor(new float[1,1,1]);
Material74.emissiveColor = new SFColor(new float[0.595745,0.595745,0.595745]);
Appearance73.material = Material74;

ImageTexture ImageTexture75 = createNode("ImageTexture");
ImageTexture75.DEF = "_4";
ImageTexture75.url = new MFString(new java.lang.String["ntree.png"]);
Appearance73.texture = ImageTexture75;

Shape72.appearance = Appearance73;

IndexedFaceSet IndexedFaceSet76 = createNode("IndexedFaceSet");
IndexedFaceSet76.solid = False;
IndexedFaceSet76.creaseAngle = 0.5;
IndexedFaceSet76.texCoordIndex = new MFInt32(new int[0,1,2,3,-1,4,5,6,7,-1,8,9,10,11,-1]);
IndexedFaceSet76.coordIndex = new MFInt32(new int[0,1,2,3,-1,4,5,6,7,-1,8,9,10,11,-1]);
TextureCoordinate TextureCoordinate77 = createNode("TextureCoordinate");
TextureCoordinate77.point = new MFVec2f(new float[0,0,1,0,1,1,0,1,0,0,1,0,1,1,0,1,0,0,1,0,1,1,0,1]);
IndexedFaceSet76.texCoord = TextureCoordinate77;

Coordinate Coordinate78 = createNode("Coordinate");
Coordinate78.point = new MFVec3f(new float[-52.6347,0.00499916,-10.6106,-45.6466,0.00499916,-10.6106,-45.6466,7.15655,-10.6106,-52.6347,5.739,-10.6106,-47.6449,0.00499058,-7.86263,-51.3424,0.00498962,-13.7923,-51.3424,6.60752,-13.7923,-47.7846,5.62517,-8.08669,-50.9676,0.00498962,-7.82067,-47.5528,0.00498962,-13.9176,-47.5528,6.60752,-13.9176,-50.9676,5.46237,-7.82067]);
IndexedFaceSet76.coord = Coordinate78;

Shape72.geometry = IndexedFaceSet76;

Transform71.child = new undefined();

Transform71.child[0] = Shape72;

Transform70.children = new MFNode();

Transform70.children[0] = Transform71;

children[9] = Transform70;

Transform Transform79 = createNode("Transform");
Transform79.translation = new SFVec3f(new float[-61.2457,10.8677,-22.9249]);
Transform79.scale = new SFVec3f(new float[0.56156,0.992292,1.23169]);
Shape Shape80 = createNode("Shape");
Appearance Appearance81 = createNode("Appearance");
Material Material82 = createNode("Material");
Material82.DEF = "_5";
Appearance81.material = Material82;

ImageTexture ImageTexture83 = createNode("ImageTexture");
ImageTexture83.url = new MFString(new java.lang.String["haus_03-n.png"]);
Appearance81.texture = ImageTexture83;

TextureTransform TextureTransform84 = createNode("TextureTransform");
TextureTransform84.scale = new SFVec2f(new float[2.55676,1]);
Appearance81.textureTransform = TextureTransform84;

Shape80.appearance = Appearance81;

IndexedFaceSet IndexedFaceSet85 = createNode("IndexedFaceSet");
IndexedFaceSet85.creaseAngle = 0.5;
IndexedFaceSet85.texCoordIndex = new MFInt32(new int[0,1,3,2,-1,0,1,3,2,-1]);
IndexedFaceSet85.coordIndex = new MFInt32(new int[0,1,3,2,-1,2,3,5,4,-1]);
TextureCoordinate TextureCoordinate86 = createNode("TextureCoordinate");
TextureCoordinate86.point = new MFVec2f(new float[0,1,0,0,1,1,1,0]);
IndexedFaceSet85.texCoord = TextureCoordinate86;

Coordinate Coordinate87 = createNode("Coordinate");
Coordinate87.point = new MFVec3f(new float[-10,10,10,-10,-10,10,10,10,10,10,-10,10,10,10,-10,10,-10,-10]);
IndexedFaceSet85.coord = Coordinate87;

Shape80.geometry = IndexedFaceSet85;

Transform79.child = new undefined();

Transform79.child[0] = Shape80;

children[10] = Transform79;

Transform Transform88 = createNode("Transform");
Transform88.translation = new SFVec3f(new float[-56.812,10.8676,3.47684]);
Transform88.rotation = new SFRotation(new float[0.00000686721,1,-0.00000507457,0.298005]);
Transform88.scale = new SFVec3f(new float[0.56156,0.992292,1.23169]);
Shape Shape89 = createNode("Shape");
Appearance Appearance90 = createNode("Appearance");
Material Material91 = createNode("Material");
Appearance90.material = Material91;

ImageTexture ImageTexture92 = createNode("ImageTexture");
ImageTexture92.url = new MFString(new java.lang.String["haus_01-n.png"]);
Appearance90.texture = ImageTexture92;

TextureTransform TextureTransform93 = createNode("TextureTransform");
TextureTransform93.scale = new SFVec2f(new float[2.55676,1]);
Appearance90.textureTransform = TextureTransform93;

Shape89.appearance = Appearance90;

IndexedFaceSet IndexedFaceSet94 = createNode("IndexedFaceSet");
IndexedFaceSet94.creaseAngle = 0.5;
IndexedFaceSet94.texCoordIndex = new MFInt32(new int[0,1,3,2,-1,0,1,3,2,-1]);
IndexedFaceSet94.coordIndex = new MFInt32(new int[2,3,5,4,-1,0,1,3,2,-1]);
TextureCoordinate TextureCoordinate95 = createNode("TextureCoordinate");
TextureCoordinate95.point = new MFVec2f(new float[0,1,0,0,1,1,1,0]);
IndexedFaceSet94.texCoord = TextureCoordinate95;

Coordinate Coordinate96 = createNode("Coordinate");
Coordinate96.point = new MFVec3f(new float[10,10,10,10,-10,10,10,10,-10,10,-10,-10,-10,10,-10,-10,-10,-10]);
IndexedFaceSet94.coord = Coordinate96;

Shape89.geometry = IndexedFaceSet94;

Transform88.child = new undefined();

Transform88.child[0] = Shape89;

children[11] = Transform88;

Transform Transform97 = createNode("Transform");
Transform97.translation = new SFVec3f(new float[-63.3934,10.8677,-55.0009]);
Transform97.scale = new SFVec3f(new float[0.56156,0.992292,1.23169]);
Shape Shape98 = createNode("Shape");
Appearance Appearance99 = createNode("Appearance");
Material Material100 = createNode("Material");
Appearance99.material = Material100;

ImageTexture ImageTexture101 = createNode("ImageTexture");
ImageTexture101.url = new MFString(new java.lang.String["haus_02-n.png"]);
Appearance99.texture = ImageTexture101;

TextureTransform TextureTransform102 = createNode("TextureTransform");
TextureTransform102.scale = new SFVec2f(new float[5.42554,1]);
Appearance99.textureTransform = TextureTransform102;

Shape98.appearance = Appearance99;

IndexedFaceSet IndexedFaceSet103 = createNode("IndexedFaceSet");
IndexedFaceSet103.creaseAngle = 0.5;
IndexedFaceSet103.texCoordIndex = new MFInt32(new int[0,1,3,2,-1,0,1,3,2,-1]);
IndexedFaceSet103.coordIndex = new MFInt32(new int[0,1,3,2,-1,2,3,5,4,-1]);
TextureCoordinate TextureCoordinate104 = createNode("TextureCoordinate");
TextureCoordinate104.point = new MFVec2f(new float[0,1,0,0,1,1,1,0]);
IndexedFaceSet103.texCoord = TextureCoordinate104;

Coordinate Coordinate105 = createNode("Coordinate");
Coordinate105.point = new MFVec3f(new float[-10,10,10,-10,-10,10,10,10,10,10,-10,10,10,10,-10,10,-10,-10]);
IndexedFaceSet103.coord = Coordinate105;

Shape98.geometry = IndexedFaceSet103;

Transform97.child = new undefined();

Transform97.child[0] = Shape98;

children[12] = Transform97;

Transform Transform106 = createNode("Transform");
Transform Transform107 = createNode("Transform");
Transform106.children = new MFNode();

Transform106.children[0] = Transform107;

Transform Transform108 = createNode("Transform");
Transform108.translation = new SFVec3f(new float[-63.0607,0.00668185,-37.6936]);
Transform108.rotation = new SFRotation(new float[9.31219e-7,1,5.06175e-7,3.14159]);
Transform108.scale = new SFVec3f(new float[0.999997,1,0.999997]);
Transform108.scaleOrientation = new SFRotation(new float[1.97165e-7,1,-2.32074e-7,2.35619]);
WorldInfo WorldInfo109 = createNode("WorldInfo");
WorldInfo109.info = new MFString(new java.lang.String[", ","Created in Titania, ","Packaged by CosmoPackage, ","Packaged by CosmoPackage, ","Created in TitaniaPackaged by CosmoPackage"]);
Transform108.children = new MFNode();

Transform108.children[0] = WorldInfo109;

Group Group110 = createNode("Group");
Transform Transform111 = createNode("Transform");
Transform111.DEF = "Schwelle";
Transform111.translation = new SFVec3f(new float[-30.5547,4.33352,-18.8377]);
Transform111.rotation = new SFRotation(new float[0,1,0,4.71239]);
Transform111.scale = new SFVec3f(new float[0.471668,0.00738103,0.0652795]);
Shape Shape112 = createNode("Shape");
Appearance Appearance113 = createNode("Appearance");
Material Material114 = createNode("Material");
Appearance113.material = Material114;

Shape112.appearance = Appearance113;

IndexedFaceSet IndexedFaceSet115 = createNode("IndexedFaceSet");
IndexedFaceSet115.creaseAngle = 0.5;
IndexedFaceSet115.coordIndex = new MFInt32(new int[0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1]);
Coordinate Coordinate116 = createNode("Coordinate");
Coordinate116.point = new MFVec3f(new float[-1.00618,1,1,-1.00618,-1,1,0.996804,1,1,0.996804,-1,1,0.996804,1,-1,0.996804,-1,-1,-1.00618,1,-1,-1.00618,-1,-1]);
IndexedFaceSet115.coord = Coordinate116;

Shape112.geometry = IndexedFaceSet115;

Transform111.child = new undefined();

Transform111.child[0] = Shape112;

Group110.children = new MFNode();

Group110.children[0] = Transform111;

Transform Transform117 = createNode("Transform");
Transform117.DEF = "Rahmen";
Transform117.translation = new SFVec3f(new float[-30.5562,5.44625,-19.2761]);
Transform117.rotation = new SFRotation(new float[0,-1,0,1.5708]);
Transform117.scale = new SFVec3f(new float[0.0342311,1.11498,0.0407675]);
Shape Shape118 = createNode("Shape");
Appearance Appearance119 = createNode("Appearance");
Material Material120 = createNode("Material");
Material120.ambientIntensity = 0;
Material120.diffuseColor = new SFColor(new float[0.117021,0.022394,0]);
Material120.specularColor = new SFColor(new float[0.117021,0.117021,0.117021]);
Material120.emissiveColor = new SFColor(new float[0.0744681,0.0744681,0.0744681]);
Material120.shininess = 0.574468;
Appearance119.material = Material120;

Shape118.appearance = Appearance119;

IndexedFaceSet IndexedFaceSet121 = createNode("IndexedFaceSet");
IndexedFaceSet121.creaseAngle = 0.5;
IndexedFaceSet121.coordIndex = new MFInt32(new int[4,21,5,7,6,-1,6,7,1,20,0,-1,6,0,2,4,-1,8,18,9,10,11,-1,11,10,12,17,13,-1,14,8,11,13,-1,13,17,16,14,-1,17,12,15,16,-1,16,15,9,18,-1,0,20,19,2,-1,20,1,3,19,-1,19,3,5,21,-1,8,14,4,2,-1,18,8,2,19,-1,4,14,16,21,-1,16,18,19,21,-1]);
Coordinate Coordinate122 = createNode("Coordinate");
Coordinate122.point = new MFVec3f(new float[-1,1,1,-1,-1,1,1,1,1,1,-1,1,1,1,-1,1,-1,-1,-1,1,-1,-1,-1,-1,24.5052,1,1,24.5052,-1,1,26.5052,-1,1,26.5052,1,1,26.5052,-1,-1,26.5052,1,-1,24.5052,1,-1,24.5052,-1,-1,24.5237,0.941309,-1,26.5052,0.941308,-1,24.5237,0.941308,1,1,0.941023,1,-1,0.941023,1,1,0.941023,-1]);
IndexedFaceSet121.coord = Coordinate122;

Shape118.geometry = IndexedFaceSet121;

Transform117.child = new undefined();

Transform117.child[0] = Shape118;

Group110.children[1] = Transform117;

Transform Transform123 = createNode("Transform");
Transform123.DEF = "Tuer_AnimSound";
Transform123.scale = new SFVec3f(new float[0.999993,0.999999,0.999993]);
Transform123.center = new SFVec3f(new float[-30.5078,5.43194,-18.8276]);
Group Group124 = createNode("Group");
Group Group125 = createNode("Group");
Group125.DEF = "open_door";
TimeSensor TimeSensor126 = createNode("TimeSensor");
TimeSensor126.DEF = "Time_1";
TimeSensor126.cycleInterval = 10;
TimeSensor126.stopTime = 1;
Group125.children = new MFNode();

Group125.children[0] = TimeSensor126;

Group124.children = new MFNode();

Group124.children[0] = Group125;

PositionInterpolator PositionInterpolator127 = createNode("PositionInterpolator");
PositionInterpolator127.DEF = "UnnamedTransformTranslationInterp_1";
PositionInterpolator127.key = new MFFloat(new float[0,0.04,0.96,1]);
PositionInterpolator127.keyValue = new MFVec3f(new float[0,0,0,0,0,0,0,0,0,0,0,0]);
Group124.children[1] = PositionInterpolator127;

OrientationInterpolator OrientationInterpolator128 = createNode("OrientationInterpolator");
OrientationInterpolator128.DEF = "UnnamedTransformRotationInterp_1";
OrientationInterpolator128.key = new MFFloat(new float[0,0.04,0.16,0.86,0.96,1]);
OrientationInterpolator128.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,1,0,1.64979,0,1,0,1.64979,0,0,1,0,0,0,1,0]);
Group124.children[2] = OrientationInterpolator128;

OrientationInterpolator OrientationInterpolator129 = createNode("OrientationInterpolator");
OrientationInterpolator129.DEF = "UnnamedShapeRotationInterp";
OrientationInterpolator129.key = new MFFloat(new float[0,0.04,0.1,0.92,0.96,1]);
OrientationInterpolator129.keyValue = new MFRotation(new float[0.57735,-0.57735,0.57735,2.0944,0.522759,-0.522759,0.673385,1.95631,0.57735,-0.57735,0.57735,2.0944,0.57735,-0.57735,0.57735,2.0944,0.524697,-0.524697,0.670363,1.96048,0.57735,-0.57735,0.57735,2.0944]);
Group124.children[3] = OrientationInterpolator129;

PositionInterpolator PositionInterpolator130 = createNode("PositionInterpolator");
PositionInterpolator130.DEF = "UnnamedTransformCenterInterp";
PositionInterpolator130.key = new MFFloat(new float[0,0.04]);
PositionInterpolator130.keyValue = new MFVec3f(new float[-30.5078,5.43194,-18.8276,-30.5078,5.43504,-19.2393]);
Group124.children[4] = PositionInterpolator130;

OrientationInterpolator OrientationInterpolator131 = createNode("OrientationInterpolator");
OrientationInterpolator131.DEF = "UnnamedShapeScaleOrientationInterp";
OrientationInterpolator131.key = new MFFloat(new float[0,0.04]);
OrientationInterpolator131.keyValue = new MFRotation(new float[-1,0.0000055376,0.00000557843,0.00737289,-1,-0.00000641583,0.00000564175,0.00724239]);
Group124.children[5] = OrientationInterpolator131;

Transform123.children = new MFNode();

Transform123.children[0] = Group124;

TouchSensor TouchSensor132 = createNode("TouchSensor");
TouchSensor132.DEF = "Touch_1";
Transform123.children[1] = TouchSensor132;

Transform Transform133 = createNode("Transform");
Transform133.DEF = "Tuerklinke";
Transform133.translation = new SFVec3f(new float[0.0519834,0,0]);
Transform Transform134 = createNode("Transform");
Transform134.DEF = "Klinke";
Transform134.translation = new SFVec3f(new float[-30.639,5.87077,-18.505]);
Transform134.rotation = new SFRotation(new float[0.57735,-0.57735,0.57735,2.0944]);
Transform134.scale = new SFVec3f(new float[0.897348,0.195632,0.122587]);
Transform134.center = new SFVec3f(new float[0.0744146,-0.506144,-0.0227777]);
Shape Shape135 = createNode("Shape");
Appearance Appearance136 = createNode("Appearance");
Material Material137 = createNode("Material");
Material137.ambientIntensity = 0;
Material137.diffuseColor = new SFColor(new float[0.691489,0.691489,0.691489]);
Material137.specularColor = new SFColor(new float[1,1,1]);
Material137.shininess = 0.159574;
Appearance136.material = Material137;

Shape135.appearance = Appearance136;

IndexedFaceSet IndexedFaceSet138 = createNode("IndexedFaceSet");
IndexedFaceSet138.solid = False;
IndexedFaceSet138.creaseAngle = 3.14159;
IndexedFaceSet138.coordIndex = new MFInt32(new int[5,3,2,4,-1,12,11,10,13,-1,2,3,10,11,-1,9,8,1,0,-1,3,1,8,10,-1,0,2,11,9,-1,15,12,13,14,-1,6,5,4,7,-1,7,4,2,0,-1,3,5,6,1,-1,6,7,0,1,-1,14,13,10,8,-1,11,12,15,9,-1,15,14,8,9,-1]);
Coordinate Coordinate139 = createNode("Coordinate");
Coordinate139.point = new MFVec3f(new float[0.101571,-0.012592,0.096272,0.101571,-0.012592,-0.103728,0.0784915,-0.111403,0.100376,0.0784916,-0.111403,-0.0996237,-0.0887925,-0.111405,0.100376,-0.0887926,-0.111405,-0.0996237,-0.093096,-0.0125155,-0.103728,-0.093096,-0.0125155,0.096272,0.100341,-0.904158,-0.100809,0.100341,-0.904158,0.0991913,0.0789908,-0.806507,-0.100809,0.0789907,-0.806507,0.0991913,-0.0882932,-0.806509,0.0991913,-0.0882933,-0.806509,-0.100809,-0.094326,-0.908792,-0.100809,-0.094326,-0.908792,0.0991913]);
IndexedFaceSet138.coord = Coordinate139;

Shape135.geometry = IndexedFaceSet138;

Transform134.child = new undefined();

Transform134.child[0] = Shape135;

Transform133.children = new MFNode();

Transform133.children[0] = Transform134;

Transform Transform140 = createNode("Transform");
Transform140.translation = new SFVec3f(new float[-30.574,5.29324,-18.5155]);
Transform140.rotation = new SFRotation(new float[1,1.78814e-7,-1.78814e-7,1.5708]);
Transform140.scale = new SFVec3f(new float[0.205889,0.471041,1.20274]);
Shape Shape141 = createNode("Shape");
Appearance Appearance142 = createNode("Appearance");
Material Material143 = createNode("Material");
Material143.DEF = "_6";
Material143.ambientIntensity = 0.28169;
Material143.diffuseColor = new SFColor(new float[0.755319,0.755319,0.755319]);
Material143.specularColor = new SFColor(new float[1,1,1]);
Material143.emissiveColor = new SFColor(new float[0.414894,0.414894,0.414894]);
Material143.shininess = 0.159574;
Appearance142.material = Material143;

ImageTexture ImageTexture144 = createNode("ImageTexture");
ImageTexture144.DEF = "_7";
ImageTexture144.url = new MFString(new java.lang.String["door2.png"]);
Appearance142.texture = ImageTexture144;

TextureTransform TextureTransform145 = createNode("TextureTransform");
TextureTransform145.rotation = 4.71239;
Appearance142.textureTransform = TextureTransform145;

Shape141.appearance = Appearance142;

IndexedFaceSet IndexedFaceSet146 = createNode("IndexedFaceSet");
IndexedFaceSet146.creaseAngle = 3.14159;
IndexedFaceSet146.texCoordIndex = new MFInt32(new int[0,1,2,3,-1]);
IndexedFaceSet146.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
TextureCoordinate TextureCoordinate147 = createNode("TextureCoordinate");
TextureCoordinate147.point = new MFVec2f(new float[0,1,0,0,1,0,1,1]);
IndexedFaceSet146.texCoord = TextureCoordinate147;

Coordinate Coordinate148 = createNode("Coordinate");
Coordinate148.point = new MFVec3f(new float[-0.1,0.1,-0.1,-0.1,-0.1,-0.1,-0.1,-0.1,0.1,-0.1,0.1,0.1]);
IndexedFaceSet146.coord = Coordinate148;

Shape141.geometry = IndexedFaceSet146;

Transform140.child = new undefined();

Transform140.child[0] = Shape141;

Transform133.children[1] = Transform140;

Transform Transform149 = createNode("Transform");
Transform149.translation = new SFVec3f(new float[-30.574,5.29278,-18.5155]);
Transform149.rotation = new SFRotation(new float[1,1.78814e-7,-1.78814e-7,1.5708]);
Transform149.scale = new SFVec3f(new float[0.205889,0.471041,1.20731]);
Shape Shape150 = createNode("Shape");
Appearance Appearance151 = createNode("Appearance");
Material Material152 = createNode("Material");
Material152.USE = "_6";
Appearance151.material = Material152;

ImageTexture ImageTexture153 = createNode("ImageTexture");
ImageTexture153.USE = "_7";
Appearance151.texture = ImageTexture153;

TextureTransform TextureTransform154 = createNode("TextureTransform");
TextureTransform154.rotation = 1.5708;
Appearance151.textureTransform = TextureTransform154;

Shape150.appearance = Appearance151;

IndexedFaceSet IndexedFaceSet155 = createNode("IndexedFaceSet");
IndexedFaceSet155.creaseAngle = 3.14159;
IndexedFaceSet155.texCoordIndex = new MFInt32(new int[0,1,2,3,-1]);
IndexedFaceSet155.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
TextureCoordinate TextureCoordinate156 = createNode("TextureCoordinate");
TextureCoordinate156.point = new MFVec2f(new float[0,1,0,0,1,0,1,1]);
IndexedFaceSet155.texCoord = TextureCoordinate156;

Coordinate Coordinate157 = createNode("Coordinate");
Coordinate157.point = new MFVec3f(new float[0.1,0.1,0.1,0.1,-0.1,0.1,0.1,-0.1,-0.1,0.1,0.1,-0.1]);
IndexedFaceSet155.coord = Coordinate157;

Shape150.geometry = IndexedFaceSet155;

Transform149.child = new undefined();

Transform149.child[0] = Shape150;

Transform133.children[2] = Transform149;

Transform123.children[2] = Transform133;

Transform Transform158 = createNode("Transform");
Transform158.DEF = "Tuer_brett";
Transform158.translation = new SFVec3f(new float[-29.5192,5.4317,-19.2538]);
Transform158.rotation = new SFRotation(new float[0,-1,0,1.5708]);
Transform158.scale = new SFVec3f(new float[0.424754,1.08903,0.0165043]);
Transform158.center = new SFVec3f(new float[-1.0035,-0.00275892,-0.00000153935]);
Shape Shape159 = createNode("Shape");
Appearance Appearance160 = createNode("Appearance");
Material Material161 = createNode("Material");
Material161.ambientIntensity = 1.2234;
Material161.emissiveColor = new SFColor(new float[0.404255,0.404255,0.404255]);
Material161.shininess = 0;
Appearance160.material = Material161;

ImageTexture ImageTexture162 = createNode("ImageTexture");
ImageTexture162.url = new MFString(new java.lang.String["door1.png"]);
Appearance160.texture = ImageTexture162;

TextureTransform TextureTransform163 = createNode("TextureTransform");
TextureTransform163.scale = new SFVec2f(new float[1.4,1]);
Appearance160.textureTransform = TextureTransform163;

Shape159.appearance = Appearance160;

Box Box164 = createNode("Box");
Shape159.geometry = Box164;

Transform158.child = new undefined();

Transform158.child[0] = Shape159;

Transform123.children[3] = Transform158;

Sound Sound165 = createNode("Sound");
Sound165.DEF = "Sound1";
Sound165.location = new SFVec3f(new float[-30.5078,5.43195,-18.8276]);
AudioClip AudioClip166 = createNode("AudioClip");
AudioClip166.DEF = "door_snd";
AudioClip166.description = "Start mit Trklick";
AudioClip166.url = new MFString(new java.lang.String["door_snd.aiff"]);
Sound165.source = AudioClip166;

Transform123.children[4] = Sound165;

Group110.children[2] = Transform123;

Transform108.children[1] = Group110;

Transform106.children[1] = Transform108;

Transform Transform167 = createNode("Transform");
Transform167.translation = new SFVec3f(new float[-33.5061,5.21267,-19.4389]);
Transform167.rotation = new SFRotation(new float[7.40586e-7,1,-1.96688e-8,1.5708]);
Transform167.scale = new SFVec3f(new float[0.99999,0.73628,0.999991]);
Shape Shape168 = createNode("Shape");
Appearance Appearance169 = createNode("Appearance");
Material Material170 = createNode("Material");
Material170.ambientIntensity = 0;
Material170.diffuseColor = new SFColor(new float[1,0,0.0662079]);
Material170.shininess = 0;
Material170.transparency = 1;
Appearance169.material = Material170;

Shape168.appearance = Appearance169;

IndexedFaceSet IndexedFaceSet171 = createNode("IndexedFaceSet");
IndexedFaceSet171.solid = False;
IndexedFaceSet171.creaseAngle = 0.5;
IndexedFaceSet171.coordIndex = new MFInt32(new int[2,3,5,4,-1,6,1,0,7,-1,4,5,9,8,-1,10,11,13,12,-1,6,7,15,14,-1,15,12,13,14,-1,16,11,10,17,-1,8,9,18,19,-1,18,16,17,19,-1,2,3,21,20,-1,20,21,23,22,-1,22,23,25,24,-1,0,1,27,26,-1]);
Coordinate Coordinate172 = createNode("Coordinate");
Coordinate172.point = new MFVec3f(new float[-0.927662,0.302864,1.0087,-0.927662,-1.00034,1.00871,-0.194948,0.30256,0.944056,-0.194948,-1.00065,0.944059,1.28228,0.303206,0.28828,1.28228,-1,0.288283,-0.923214,-1.01562,-0.186603,-0.923214,0.287587,-0.186598,4.12216,0.303206,0.288283,4.12216,-0.999999,0.288286,4.03333,0.303204,-3.32709,4.03333,-1,-3.32708,-0.0262551,0.303204,-3.32709,-0.0262551,-1,-3.32709,-0.518105,-1.00232,-2.86161,-0.520148,0.300822,-2.84812,4.53818,-1,-2.96061,4.53818,0.303205,-2.96061,4.53818,-0.999999,0.00556704,4.53818,0.303206,0.00556183,-0.194948,0.30256,1.03695,-0.194948,-1.00065,1.03696,-0.00349981,0.30256,1.14149,-0.00349984,-1.00065,1.1415,0.493674,0.30256,0.999392,0.493674,-1.00065,0.999394,-1.15724,0.302864,1.18947,-1.15724,-1.00034,1.18947]);
IndexedFaceSet171.coord = Coordinate172;

Shape168.geometry = IndexedFaceSet171;

Transform167.child = new undefined();

Transform167.child[0] = Shape168;

Transform106.children[2] = Transform167;

Transform Transform173 = createNode("Transform");
Transform173.translation = new SFVec3f(new float[-38.322,-46.8986,-28.2243]);
Transform173.rotation = new SFRotation(new float[-1,0,0,1.5708]);
Transform173.scale = new SFVec3f(new float[0.999996,1.00004,0.644774]);
Transform173.center = new SFVec3f(new float[3.2464,52.8039,6.57235]);
Shape Shape174 = createNode("Shape");
Appearance Appearance175 = createNode("Appearance");
Material Material176 = createNode("Material");
Material176.ambientIntensity = 0.87234;
Material176.diffuseColor = new SFColor(new float[1,1,1]);
Material176.shininess = 0;
Appearance175.material = Material176;

Shape174.appearance = Appearance175;

IndexedFaceSet IndexedFaceSet177 = createNode("IndexedFaceSet");
IndexedFaceSet177.solid = False;
IndexedFaceSet177.creaseAngle = 6.28319;
IndexedFaceSet177.colorIndex = new MFInt32(new int[0,0,0,0,0,-1,0,0,0,0,-1,0,2,0,0,0,-1,1,1,1,1,-1,1,3,4,1,-1,3,0,0,4,-1,3,1,1,3,-1,4,3,3,4,-1,1,4,4,1,-1,1,0,0,1,-1,0,7,7,0,-1,6,1,1,5,-1,1,6,7,6,-1,1,1,1,1,-1,5,1,1,7,-1,6,5,7,7,-1]);
IndexedFaceSet177.coordIndex = new MFInt32(new int[11,8,12,3,0,-1,8,9,13,12,-1,13,9,10,4,7,-1,14,15,16,17,-1,20,21,22,23,-1,18,7,4,19,-1,21,20,6,18,-1,22,21,18,19,-1,23,22,19,5,-1,20,23,5,6,-1,0,25,24,3,-1,27,26,28,29,-1,26,27,25,1,-1,28,26,1,2,-1,29,28,2,24,-1,27,29,24,25,-1]);
Color Color178 = createNode("Color");
Color178.color = new MFColor(new float[1,1,1,0,0,0,0.882353,0.882353,0.882353,0.12625,0.12625,0.12625,0.126249,0.126249,0.126249,0.0985277,0.0985277,0.0985277,0.0985258,0.0985258,0.0985258,0.518717,0.518717,0.518717]);
IndexedFaceSet177.color = Color178;

Coordinate Coordinate179 = createNode("Coordinate");
Coordinate179.point = new MFVec3f(new float[5.82208,49.3305,4.13362,0.621844,49.3305,4.13363,0.621844,49.3305,9.28265,5.82208,49.3305,9.28263,5.82208,55.8416,4.13362,0.621803,55.8416,4.13363,0.621803,55.8416,9.28265,5.82208,55.8416,9.28263,5.82207,49.5612,7.55508,5.82207,50.4612,7.55508,5.82207,50.4612,4.13347,5.82207,49.5612,4.13347,5.82208,49.5612,9.28245,5.82208,50.4612,9.28245,0.923931,55.8416,7.76282,0.923931,55.8416,9.28265,0.923972,49.3305,9.28265,0.923972,49.3305,7.76283,1.13345,55.8416,9.28265,1.13345,55.8416,4.13363,0.621804,55.7132,9.28265,1.13345,55.7132,9.28265,1.13345,55.7132,4.13363,0.621804,55.7132,4.13363,1.13421,49.3305,9.28265,1.1342,49.3305,4.13363,0.621843,49.4307,4.13363,1.1342,49.4307,4.13363,0.621843,49.4307,9.28265,1.13421,49.4307,9.28265]);
IndexedFaceSet177.coord = Coordinate179;

Shape174.geometry = IndexedFaceSet177;

Transform173.child = new undefined();

Transform173.child[0] = Shape174;

Transform106.children[3] = Transform173;

Transform Transform180 = createNode("Transform");
Transform180.translation = new SFVec3f(new float[-38.0198,-46.8986,-28.2243]);
Transform180.rotation = new SFRotation(new float[-1,0,0,1.5708]);
Transform180.scale = new SFVec3f(new float[0.999996,1.00004,0.644774]);
Transform180.center = new SFVec3f(new float[3.2464,52.8039,6.57235]);
Shape Shape181 = createNode("Shape");
Appearance Appearance182 = createNode("Appearance");
Material Material183 = createNode("Material");
Material183.ambientIntensity = 0;
Material183.diffuseColor = new SFColor(new float[0,0,0]);
Material183.specularColor = new SFColor(new float[1,1,1]);
Material183.emissiveColor = new SFColor(new float[0.0744681,0.0744681,0.0744681]);
Appearance182.material = Material183;

Shape181.appearance = Appearance182;

IndexedFaceSet IndexedFaceSet184 = createNode("IndexedFaceSet");
IndexedFaceSet184.solid = False;
IndexedFaceSet184.creaseAngle = 6.28319;
IndexedFaceSet184.colorPerVertex = False;
IndexedFaceSet184.coordIndex = new MFInt32(new int[1,14,16,18,15,0,-1,14,12,17,16,-1,19,13,15,18,-1,13,19,17,12,20,22,24,21,-1,20,4,23,22,-1,25,5,21,24,-1,6,8,27,26,-1,10,3,29,34,28,-1,31,9,7,30,-1,35,33,2,11,32,-1,29,33,35,34,-1,28,32,37,36,-1,26,30,41,40,-1,28,32,45,44,-1,32,35,46,45,-1,28,34,47,44,-1,34,35,46,47,-1,27,31,49,48,-1,26,27,48,50,-1,26,30,51,50,-1,30,31,49,51,-1,23,25,53,52,-1,22,23,52,54,-1,22,24,55,54,-1,24,25,53,55,-1,17,19,57,56,-1,16,17,56,58,-1,16,18,59,58,-1,18,19,57,59,-1,61,60,37,39,-1,62,61,39,38,-1,63,62,38,36,-1,60,63,36,37,-1,65,64,41,43,-1,66,65,43,42,-1,67,66,42,40,-1,64,67,40,41,-1,68,10,28,36,38,-1,39,37,32,11,69,-1,27,8,70,71,9,31,-1,70,68,38,39,69,71,-1,70,71,73,72,-1,74,6,26,40,42,-1,43,41,30,7,75,-1,23,4,77,76,5,25,-1,77,74,42,43,75,76,-1,76,77,79,78,-1]);
Coordinate Coordinate185 = createNode("Coordinate");
Coordinate185.point = new MFVec3f(new float[0.328066,54.9703,5.56618,0.328066,54.9703,7.76283,0.328096,50.2337,5.56617,0.328096,50.2337,7.76283,0.328077,53.1654,7.76283,0.328077,53.1654,5.56618,0.328081,52.5646,7.76283,0.328081,52.5646,5.56617,0.328088,51.5549,7.76283,0.328088,51.5549,5.56617,0.328091,50.9717,7.76283,0.328091,50.9717,5.56617,0.32807,54.3434,7.76283,0.32807,54.3435,5.56618,0.328066,54.9155,7.76283,0.328066,54.9155,5.56618,0.328066,54.9155,7.65458,0.32807,54.3434,7.65458,0.328066,54.9155,5.68417,0.32807,54.3435,5.68417,0.328071,54.2163,7.76283,0.328071,54.2163,5.56618,0.328071,54.2163,7.66719,0.328077,53.1654,7.66719,0.328071,54.2163,5.6512,0.328077,53.1654,5.6512,0.328081,52.5646,7.66718,0.328088,51.5549,7.66718,0.328091,50.9717,7.66718,0.328096,50.2337,7.66718,0.328081,52.5646,5.6512,0.328088,51.5549,5.6512,0.328091,50.9717,5.6512,0.328096,50.2337,5.6512,0.328096,50.2785,7.66718,0.328096,50.2785,5.6512,0.32809,51.1121,7.66718,0.32809,51.1121,5.6512,0.328089,51.3974,7.66718,0.328089,51.3974,5.6512,0.32808,52.6977,7.66718,0.32808,52.6977,5.6512,0.328078,53.0168,7.66718,0.328078,53.0168,5.6512,0.264742,50.9717,7.66718,0.264742,50.9717,5.6512,0.264747,50.2785,5.6512,0.264747,50.2785,7.66718,0.264739,51.5549,7.66718,0.264739,51.5549,5.6512,0.264732,52.5646,7.66718,0.264732,52.5646,5.6512,0.264728,53.1654,7.66719,0.264728,53.1654,5.6512,0.264722,54.2163,7.66719,0.264722,54.2163,5.6512,0.264721,54.3434,7.65458,0.264721,54.3435,5.68417,0.264717,54.9155,7.65458,0.264717,54.9155,5.68417,0.2647,51.1121,5.6512,0.264698,51.3974,5.6512,0.264698,51.3974,7.66718,0.2647,51.1121,7.66718,0.26469,52.6977,5.6512,0.264688,53.0168,5.6512,0.264688,53.0168,7.66718,0.26469,52.6977,7.66718,0.328089,51.3974,7.76283,0.328089,51.3974,5.56617,0.328088,51.4762,7.76283,0.328088,51.4762,5.56617,0.670995,51.4762,7.76283,0.670995,51.4762,5.56617,0.328078,53.0168,7.76283,0.328078,53.0168,5.56618,0.328077,53.0911,5.56618,0.328077,53.0911,7.76283,0.671078,53.0911,5.56618,0.671077,53.0911,7.76283]);
IndexedFaceSet184.coord = Coordinate185;

Shape181.geometry = IndexedFaceSet184;

Transform180.child = new undefined();

Transform180.child[0] = Shape181;

Transform106.children[4] = Transform180;

Transform Transform186 = createNode("Transform");
Transform186.translation = new SFVec3f(new float[-38.0198,-46.8986,-28.2243]);
Transform186.rotation = new SFRotation(new float[-1,0,0,1.5708]);
Transform186.scale = new SFVec3f(new float[0.999996,1.00004,0.644774]);
Transform186.center = new SFVec3f(new float[3.2464,52.8039,6.57235]);
Shape Shape187 = createNode("Shape");
Appearance Appearance188 = createNode("Appearance");
Material Material189 = createNode("Material");
Material189.ambientIntensity = 0;
Material189.diffuseColor = new SFColor(new float[1,0.765351,0.53099]);
Material189.emissiveColor = new SFColor(new float[0.351064,0.268687,0.186411]);
Appearance188.material = Material189;

ImageTexture ImageTexture190 = createNode("ImageTexture");
ImageTexture190.DEF = "_8";
ImageTexture190.url = new MFString(new java.lang.String["fensterbank1.png"]);
Appearance188.texture = ImageTexture190;

Shape187.appearance = Appearance188;

IndexedFaceSet IndexedFaceSet191 = createNode("IndexedFaceSet");
IndexedFaceSet191.solid = False;
IndexedFaceSet191.creaseAngle = 6.28319;
IndexedFaceSet191.colorPerVertex = False;
IndexedFaceSet191.texCoordIndex = new MFInt32(new int[8,9,10,11,-1,3,1,0,2,-1,4,5,6,7,-1]);
IndexedFaceSet191.coordIndex = new MFInt32(new int[0,1,2,3,-1,5,1,0,4,-1,4,5,6,7,-1]);
TextureCoordinate TextureCoordinate192 = createNode("TextureCoordinate");
TextureCoordinate192.point = new MFVec2f(new float[0.999566,0.188156,-0.998885,0.179163,0.999793,0.0340796,-0.996944,0.0000335384,0.999996,0.999977,1,0,-0.999979,0.000114637,-0.999996,0.999962,0.994656,0.423605,1,0,-0.986276,0,-0.991619,0.423605]);
IndexedFaceSet191.texCoord = TextureCoordinate192;

Coordinate Coordinate193 = createNode("Coordinate");
Coordinate193.point = new MFVec3f(new float[0.703425,55.8416,5.47942,0.703466,49.3305,5.47943,0.621844,49.3305,5.47943,0.621803,55.8416,5.47942,0.703425,55.8416,5.56618,0.703466,49.3305,5.56617,0.328102,49.3305,5.56617,0.328061,55.8416,5.56618]);
IndexedFaceSet191.coord = Coordinate193;

Shape187.geometry = IndexedFaceSet191;

Transform186.child = new undefined();

Transform186.child[0] = Shape187;

Transform106.children[5] = Transform186;

Transform Transform194 = createNode("Transform");
Transform194.translation = new SFVec3f(new float[-38.0198,-46.0424,-27.1903]);
Transform194.rotation = new SFRotation(new float[1,0,0,1.5708]);
Transform194.scale = new SFVec3f(new float[0.999996,1.00004,0.644772]);
Transform194.center = new SFVec3f(new float[0.810186,52.5713,5.77103]);
Shape Shape195 = createNode("Shape");
Appearance Appearance196 = createNode("Appearance");
Material Material197 = createNode("Material");
Material197.ambientIntensity = 0;
Material197.diffuseColor = new SFColor(new float[1,0.765351,0.53099]);
Material197.emissiveColor = new SFColor(new float[0.351064,0.268687,0.186411]);
Appearance196.material = Material197;

ImageTexture ImageTexture198 = createNode("ImageTexture");
ImageTexture198.USE = "_8";
Appearance196.texture = ImageTexture198;

Shape195.appearance = Appearance196;

IndexedFaceSet IndexedFaceSet199 = createNode("IndexedFaceSet");
IndexedFaceSet199.solid = False;
IndexedFaceSet199.creaseAngle = 6.28319;
IndexedFaceSet199.colorPerVertex = False;
IndexedFaceSet199.texCoordIndex = new MFInt32(new int[8,9,10,11,-1,3,1,0,2,-1,4,5,6,7,-1]);
IndexedFaceSet199.coordIndex = new MFInt32(new int[0,1,2,3,-1,5,1,0,4,-1,4,5,6,7,-1]);
TextureCoordinate TextureCoordinate200 = createNode("TextureCoordinate");
TextureCoordinate200.point = new MFVec2f(new float[0.999566,0.188156,-0.998885,0.179163,0.999793,0.0340796,-0.996944,0.0000335384,0.999996,0.999977,1,0,-0.999979,0.000114637,-0.999996,0.999962,0.994656,0.423605,1,0,-0.986276,0,-0.991619,0.423605]);
IndexedFaceSet199.texCoord = TextureCoordinate200;

Coordinate Coordinate201 = createNode("Coordinate");
Coordinate201.point = new MFVec3f(new float[0.703425,55.8416,5.47942,0.703466,49.3305,5.47943,0.621844,49.3305,5.47943,0.621803,55.8416,5.47942,0.703425,55.8416,5.56618,0.703466,49.3305,5.56617,0.328102,49.3305,5.56617,0.328061,55.8416,5.56618]);
IndexedFaceSet199.coord = Coordinate201;

Shape195.geometry = IndexedFaceSet199;

Transform194.child = new undefined();

Transform194.child[0] = Shape195;

Transform106.children[6] = Transform194;

Transform Transform202 = createNode("Transform");
Transform202.translation = new SFVec3f(new float[0,0.531492,0.414537]);
Transform202.scale = new SFVec3f(new float[1,0.879727,1]);
Transform Transform203 = createNode("Transform");
Transform203.translation = new SFVec3f(new float[-37.3016,4.7683,-21.6967]);
Transform203.rotation = new SFRotation(new float[0.00000121981,1,-5.13265e-8,1.5708]);
Transform203.scale = new SFVec3f(new float[0.702315,0.349258,0.0535702]);
Shape Shape204 = createNode("Shape");
Appearance Appearance205 = createNode("Appearance");
Material Material206 = createNode("Material");
Material206.DEF = "_9";
Material206.ambientIntensity = 0.340426;
Material206.diffuseColor = new SFColor(new float[1,1,1]);
Material206.emissiveColor = new SFColor(new float[0.468085,0.468085,0.468085]);
Appearance205.material = Material206;

ImageTexture ImageTexture207 = createNode("ImageTexture");
ImageTexture207.url = new MFString(new java.lang.String["heiz1.png"]);
Appearance205.texture = ImageTexture207;

TextureTransform TextureTransform208 = createNode("TextureTransform");
TextureTransform208.scale = new SFVec2f(new float[14.9661,1]);
Appearance205.textureTransform = TextureTransform208;

Shape204.appearance = Appearance205;

IndexedFaceSet IndexedFaceSet209 = createNode("IndexedFaceSet");
IndexedFaceSet209.creaseAngle = 0.5;
IndexedFaceSet209.texCoordIndex = new MFInt32(new int[0,1,2,3,-1]);
IndexedFaceSet209.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
TextureCoordinate TextureCoordinate210 = createNode("TextureCoordinate");
TextureCoordinate210.point = new MFVec2f(new float[0,1,0,0,1,0,1,1]);
IndexedFaceSet209.texCoord = TextureCoordinate210;

Coordinate Coordinate211 = createNode("Coordinate");
Coordinate211.point = new MFVec3f(new float[-1,1,-1,-1,1,1,1,1,1,1,1,-1]);
IndexedFaceSet209.coord = Coordinate211;

Shape204.geometry = IndexedFaceSet209;

Transform203.child = new undefined();

Transform203.child[0] = Shape204;

Transform202.children = new MFNode();

Transform202.children[0] = Transform203;

Transform Transform212 = createNode("Transform");
Transform212.translation = new SFVec3f(new float[-37.3016,4.7683,-21.6967]);
Transform212.rotation = new SFRotation(new float[0.00000121981,1,-5.13264e-8,1.5708]);
Transform212.scale = new SFVec3f(new float[0.702315,0.349258,0.0535702]);
Shape Shape213 = createNode("Shape");
Appearance Appearance214 = createNode("Appearance");
Material Material215 = createNode("Material");
Material215.USE = "_9";
Appearance214.material = Material215;

ImageTexture ImageTexture216 = createNode("ImageTexture");
ImageTexture216.url = new MFString(new java.lang.String["heiz2.png"]);
Appearance214.texture = ImageTexture216;

Shape213.appearance = Appearance214;

IndexedFaceSet IndexedFaceSet217 = createNode("IndexedFaceSet");
IndexedFaceSet217.creaseAngle = 0.5;
IndexedFaceSet217.texCoordIndex = new MFInt32(new int[0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1]);
IndexedFaceSet217.coordIndex = new MFInt32(new int[0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1]);
TextureCoordinate TextureCoordinate218 = createNode("TextureCoordinate");
TextureCoordinate218.point = new MFVec2f(new float[0,1,0.007286,0.00917773,1,1,0.995735,0.00114659]);
IndexedFaceSet217.texCoord = TextureCoordinate218;

Coordinate Coordinate219 = createNode("Coordinate");
Coordinate219.point = new MFVec3f(new float[-1,1,1,-1,-1,1,1,1,1,1,-1,1,1,1,-1,1,-1,-1,-1,1,-1,-1,-1,-1]);
IndexedFaceSet217.coord = Coordinate219;

Shape213.geometry = IndexedFaceSet217;

Transform212.child = new undefined();

Transform212.child[0] = Shape213;

Transform202.children[1] = Transform212;

Transform106.children[7] = Transform202;

Transform Transform220 = createNode("Transform");
Transform220.translation = new SFVec3f(new float[-38.0198,-46.8986,-28.2243]);
Transform220.rotation = new SFRotation(new float[-1,0,0,1.5708]);
Transform220.scale = new SFVec3f(new float[0.999996,1.00004,0.644774]);
Transform220.center = new SFVec3f(new float[3.2464,52.8039,6.57235]);
Shape Shape221 = createNode("Shape");
Appearance Appearance222 = createNode("Appearance");
Material Material223 = createNode("Material");
Material223.ambientIntensity = 0.744681;
Material223.diffuseColor = new SFColor(new float[1,1,1]);
Material223.emissiveColor = new SFColor(new float[0.0957447,0.0957447,0.0957447]);
Material223.shininess = 0;
Appearance222.material = Material223;

ImageTexture ImageTexture224 = createNode("ImageTexture");
ImageTexture224.DEF = "_10";
ImageTexture224.url = new MFString(new java.lang.String["wand1.png"]);
Appearance222.texture = ImageTexture224;

Shape221.appearance = Appearance222;

IndexedFaceSet IndexedFaceSet225 = createNode("IndexedFaceSet");
IndexedFaceSet225.solid = False;
IndexedFaceSet225.creaseAngle = 6.28319;
IndexedFaceSet225.texCoordIndex = new MFInt32(new int[3,2,5,-1,2,1,5,-1,0,4,1,-1,0,3,4,-1]);
IndexedFaceSet225.coordIndex = new MFInt32(new int[3,2,4,-1,2,1,4,-1,0,4,1,-1,0,3,4,-1]);
TextureCoordinate TextureCoordinate226 = createNode("TextureCoordinate");
TextureCoordinate226.point = new MFVec2f(new float[-0.259639,1.98959,-0.982079,1.99205,-0.982079,1.00057,-0.259639,1.00057,-0.620859,1.49631,-0.620859,1.49631]);
IndexedFaceSet225.texCoord = TextureCoordinate226;

Coordinate Coordinate227 = createNode("Coordinate");
Coordinate227.point = new MFVec3f(new float[0.621844,49.3305,5.47943,0.621803,55.8416,5.47942,0.621803,55.8416,5.20329,0.621844,49.3305,5.2033,0.621823,52.586,5.34136]);
IndexedFaceSet225.coord = Coordinate227;

Shape221.geometry = IndexedFaceSet225;

Transform220.child = new undefined();

Transform220.child[0] = Shape221;

Transform106.children[8] = Transform220;

Transform Transform228 = createNode("Transform");
Transform228.translation = new SFVec3f(new float[-38.0198,-46.8986,-28.2243]);
Transform228.rotation = new SFRotation(new float[-1,0,0,1.5708]);
Transform228.scale = new SFVec3f(new float[0.999996,1.00004,0.644774]);
Transform228.center = new SFVec3f(new float[3.2464,52.8039,6.57235]);
Shape Shape229 = createNode("Shape");
Appearance Appearance230 = createNode("Appearance");
Material Material231 = createNode("Material");
Material231.ambientIntensity = 1;
Material231.diffuseColor = new SFColor(new float[1,1,1]);
Material231.emissiveColor = new SFColor(new float[0.0851064,0.0851064,0.0851064]);
Material231.shininess = 0;
Appearance230.material = Material231;

ImageTexture ImageTexture232 = createNode("ImageTexture");
ImageTexture232.USE = "_10";
Appearance230.texture = ImageTexture232;

Shape229.appearance = Appearance230;

IndexedFaceSet IndexedFaceSet233 = createNode("IndexedFaceSet");
IndexedFaceSet233.solid = False;
IndexedFaceSet233.creaseAngle = 6.28319;
IndexedFaceSet233.colorPerVertex = False;
IndexedFaceSet233.texCoordIndex = new MFInt32(new int[0,1,2,3,-1]);
IndexedFaceSet233.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
TextureCoordinate TextureCoordinate234 = createNode("TextureCoordinate");
TextureCoordinate234.point = new MFVec2f(new float[-0.828988,1.73507,-0.841187,1.33438,-0.046233,1.33246,-0.0484878,1.73507]);
IndexedFaceSet233.texCoord = TextureCoordinate234;

Coordinate Coordinate235 = createNode("Coordinate");
Coordinate235.point = new MFVec3f(new float[0.621844,49.3305,5.2033,0.621844,49.3305,4.13363,0.621803,55.8416,4.13363,0.621803,55.8416,5.20329]);
IndexedFaceSet233.coord = Coordinate235;

Shape229.geometry = IndexedFaceSet233;

Transform228.child = new undefined();

Transform228.child[0] = Shape229;

Transform106.children[9] = Transform228;

Transform Transform236 = createNode("Transform");
Transform236.translation = new SFVec3f(new float[17.3908,-2.38265,10.1835]);
Transform236.scale = new SFVec3f(new float[1.46504,1.4649,1.46488]);
Transform Transform237 = createNode("Transform");
Transform237.translation = new SFVec3f(new float[-37.4314,5.11772,-20.724]);
Transform237.rotation = new SFRotation(new float[0.577347,0.577352,-0.577352,2.0944]);
Transform237.scale = new SFVec3f(new float[0.0366491,0.036936,0.0370194]);
Transform237.scaleOrientation = new SFRotation(new float[0.00457305,0.435849,-0.900008,0.00371864]);
Shape Shape238 = createNode("Shape");
Appearance Appearance239 = createNode("Appearance");
Material Material240 = createNode("Material");
Material240.DEF = "_11";
Material240.ambientIntensity = 0.340426;
Material240.diffuseColor = new SFColor(new float[1,1,1]);
Material240.emissiveColor = new SFColor(new float[0.43617,0.43617,0.43617]);
Appearance239.material = Material240;

ImageTexture ImageTexture241 = createNode("ImageTexture");
ImageTexture241.USE = "_2";
Appearance239.texture = ImageTexture241;

TextureTransform TextureTransform242 = createNode("TextureTransform");
Appearance239.textureTransform = TextureTransform242;

Shape238.appearance = Appearance239;

IndexedFaceSet IndexedFaceSet243 = createNode("IndexedFaceSet");
IndexedFaceSet243.creaseAngle = 0.5;
IndexedFaceSet243.texCoordIndex = new MFInt32(new int[0,1,3,2,-1]);
IndexedFaceSet243.coordIndex = new MFInt32(new int[3,0,1,2,-1]);
TextureCoordinate TextureCoordinate244 = createNode("TextureCoordinate");
TextureCoordinate244.point = new MFVec2f(new float[0,1,0,0,1,1,1,0]);
IndexedFaceSet243.texCoord = TextureCoordinate244;

Coordinate Coordinate245 = createNode("Coordinate");
Coordinate245.point = new MFVec3f(new float[-1,1,1,1,1,1,1,1,-1,-1,1,-1]);
IndexedFaceSet243.coord = Coordinate245;

Shape238.geometry = IndexedFaceSet243;

Transform237.child = new undefined();

Transform237.child[0] = Shape238;

Transform236.children = new MFNode();

Transform236.children[0] = Transform237;

Transform Transform246 = createNode("Transform");
Transform246.translation = new SFVec3f(new float[-37.4319,5.118,-20.9288]);
Transform246.rotation = new SFRotation(new float[-0.577347,-0.577352,0.577352,4.18879]);
Transform246.scale = new SFVec3f(new float[0.111058,0.0369361,0.0370194]);
Transform246.scaleOrientation = new SFRotation(new float[-0.0167827,0.438953,-0.898353,0.00371864]);
Shape Shape247 = createNode("Shape");
Appearance Appearance248 = createNode("Appearance");
Material Material249 = createNode("Material");
Material249.USE = "_11";
Appearance248.material = Material249;

ImageTexture ImageTexture250 = createNode("ImageTexture");
ImageTexture250.USE = "_3";
Appearance248.texture = ImageTexture250;

TextureTransform TextureTransform251 = createNode("TextureTransform");
TextureTransform251.scale = new SFVec2f(new float[3,1]);
Appearance248.textureTransform = TextureTransform251;

Shape247.appearance = Appearance248;

IndexedFaceSet IndexedFaceSet252 = createNode("IndexedFaceSet");
IndexedFaceSet252.creaseAngle = 0.5;
IndexedFaceSet252.texCoordIndex = new MFInt32(new int[0,1,3,2,-1]);
IndexedFaceSet252.coordIndex = new MFInt32(new int[3,0,1,2,-1]);
TextureCoordinate TextureCoordinate253 = createNode("TextureCoordinate");
TextureCoordinate253.point = new MFVec2f(new float[0,1,0,0,1,1,1,0]);
IndexedFaceSet252.texCoord = TextureCoordinate253;

Coordinate Coordinate254 = createNode("Coordinate");
Coordinate254.point = new MFVec3f(new float[-1,1,1,1,1,1,1,1,-1,-1,1,-1]);
IndexedFaceSet252.coord = Coordinate254;

Shape247.geometry = IndexedFaceSet252;

Transform246.child = new undefined();

Transform246.child[0] = Shape247;

Transform236.children[1] = Transform246;

Transform106.children[10] = Transform236;

Transform Transform255 = createNode("Transform");
Transform255.translation = new SFVec3f(new float[-38.322,-46.907,-28.2243]);
Transform255.rotation = new SFRotation(new float[1,0,0,4.71239]);
Transform255.scale = new SFVec3f(new float[0.999996,1.00004,0.644775]);
Transform255.center = new SFVec3f(new float[3.2464,52.8039,6.57235]);
Shape Shape256 = createNode("Shape");
Appearance Appearance257 = createNode("Appearance");
Material Material258 = createNode("Material");
Material258.ambientIntensity = 0;
Material258.diffuseColor = new SFColor(new float[1,0.707408,0.632231]);
Material258.shininess = 0;
Appearance257.material = Material258;

ImageTexture ImageTexture259 = createNode("ImageTexture");
ImageTexture259.url = new MFString(new java.lang.String["granite.4.png"]);
Appearance257.texture = ImageTexture259;

TextureTransform TextureTransform260 = createNode("TextureTransform");
TextureTransform260.scale = new SFVec2f(new float[5,5]);
Appearance257.textureTransform = TextureTransform260;

Shape256.appearance = Appearance257;

IndexedFaceSet IndexedFaceSet261 = createNode("IndexedFaceSet");
IndexedFaceSet261.solid = False;
IndexedFaceSet261.creaseAngle = 6.28319;
IndexedFaceSet261.colorPerVertex = False;
IndexedFaceSet261.texCoordIndex = new MFInt32(new int[0,1,2,3,-1]);
IndexedFaceSet261.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
TextureCoordinate TextureCoordinate262 = createNode("TextureCoordinate");
TextureCoordinate262.point = new MFVec2f(new float[0.011835,0,0,0.929035,0.97633,0.946787,1,0]);
IndexedFaceSet261.texCoord = TextureCoordinate262;

Coordinate Coordinate263 = createNode("Coordinate");
Coordinate263.point = new MFVec3f(new float[0.621844,49.3305,4.13363,5.82208,49.3305,4.13362,5.82208,55.8416,4.13362,0.621803,55.8416,4.13363]);
IndexedFaceSet261.coord = Coordinate263;

Shape256.geometry = IndexedFaceSet261;

Transform255.child = new undefined();

Transform255.child[0] = Shape256;

Transform106.children[11] = Transform255;

Transform Transform264 = createNode("Transform");
Transform264.translation = new SFVec3f(new float[-38.322,-46.8986,-28.2243]);
Transform264.rotation = new SFRotation(new float[-1,0,0,1.5708]);
Transform264.scale = new SFVec3f(new float[0.999996,1.00004,0.644775]);
Transform264.center = new SFVec3f(new float[3.2464,52.8039,6.57235]);
Shape Shape265 = createNode("Shape");
Appearance Appearance266 = createNode("Appearance");
Material Material267 = createNode("Material");
Material267.ambientIntensity = 0.478723;
Material267.diffuseColor = new SFColor(new float[1,1,1]);
Material267.emissiveColor = new SFColor(new float[0.0425532,0.0425532,0.0425532]);
Appearance266.material = Material267;

Shape265.appearance = Appearance266;

IndexedFaceSet IndexedFaceSet268 = createNode("IndexedFaceSet");
IndexedFaceSet268.solid = False;
IndexedFaceSet268.creaseAngle = 6.28319;
IndexedFaceSet268.coordIndex = new MFInt32(new int[0,1,2,3,-1,4,5,6,7,-1]);
Coordinate Coordinate269 = createNode("Coordinate");
Coordinate269.point = new MFVec3f(new float[0.630224,50.2337,7.76282,0.63023,49.3305,7.76282,0.63023,49.3305,5.56617,0.630224,50.2337,5.56617,0.630189,55.8416,7.76282,0.630194,54.9703,7.76282,0.630194,54.9703,5.56618,0.630189,55.8416,5.56618]);
IndexedFaceSet268.coord = Coordinate269;

Shape265.geometry = IndexedFaceSet268;

Transform264.child = new undefined();

Transform264.child[0] = Shape265;

Transform106.children[12] = Transform264;

children[13] = Transform106;

Transform Transform270 = createNode("Transform");
Transform Transform271 = createNode("Transform");
Transform271.DEF = "Door_left";
Transform271.translation = new SFVec3f(new float[-0.0000267029,-0.00000333786,-0.0000152588]);
Transform271.scale = new SFVec3f(new float[1,0.999999,1]);
Transform271.center = new SFVec3f(new float[-32.4999,5.38476,-17.9887]);
Group Group272 = createNode("Group");
Group272.DEF = "door_pivot_left";
Group Group273 = createNode("Group");
Group273.DEF = "open_door_left";
TimeSensor TimeSensor274 = createNode("TimeSensor");
TimeSensor274.DEF = "Time_2";
TimeSensor274.cycleInterval = 10;
TimeSensor274.stopTime = 1;
Group273.children = new MFNode();

Group273.children[0] = TimeSensor274;

Group272.children = new MFNode();

Group272.children[0] = Group273;

OrientationInterpolator OrientationInterpolator275 = createNode("OrientationInterpolator");
OrientationInterpolator275.DEF = "UnnamedTransformRotationInterp_2";
OrientationInterpolator275.key = new MFFloat(new float[0,0.1,0.9,1]);
OrientationInterpolator275.keyValue = new MFRotation(new float[0,0,1,0,0,1,0,4.56713,0,1,0,4.56713,0,0,1,0]);
Group272.children[1] = OrientationInterpolator275;

Transform271.children = new MFNode();

Transform271.children[0] = Group272;

TouchSensor TouchSensor276 = createNode("TouchSensor");
TouchSensor276.DEF = "Touch_2";
Transform271.children[1] = TouchSensor276;

Transform270.children = new MFNode();

Transform270.children[0] = Transform271;

Transform Transform277 = createNode("Transform");
Transform277.DEF = "Door_right";
Transform277.scale = new SFVec3f(new float[1,0.999999,1]);
Transform277.center = new SFVec3f(new float[-32.4999,5.44308,-18.4041]);
Group Group278 = createNode("Group");
Group278.DEF = "door_pivot_right";
Group Group279 = createNode("Group");
Group279.DEF = "open_door_right";
TimeSensor TimeSensor280 = createNode("TimeSensor");
TimeSensor280.DEF = "Time_3";
TimeSensor280.cycleInterval = 10;
TimeSensor280.stopTime = 1;
Group279.children = new MFNode();

Group279.children[0] = TimeSensor280;

Group278.children = new MFNode();

Group278.children[0] = Group279;

OrientationInterpolator OrientationInterpolator281 = createNode("OrientationInterpolator");
OrientationInterpolator281.DEF = "UnnamedTransformRotationInterp_3";
OrientationInterpolator281.key = new MFFloat(new float[0,0.1,0.9,1]);
OrientationInterpolator281.keyValue = new MFRotation(new float[0,0,1,0,0,1,0,1.73405,0,1,0,1.73405,0,0,1,0]);
Group278.children[1] = OrientationInterpolator281;

PositionInterpolator PositionInterpolator282 = createNode("PositionInterpolator");
PositionInterpolator282.DEF = "UnnamedTransformTranslationInterp_2";
PositionInterpolator282.key = new MFFloat(new float[0,0.1,0.9,1]);
PositionInterpolator282.keyValue = new MFVec3f(new float[0,0,0,-0.0000038147,-0.00000429153,-0.0000305176,-0.0000038147,-0.00000429153,-0.0000305176,0,0,0]);
Group278.children[2] = PositionInterpolator282;

Transform277.children = new MFNode();

Transform277.children[0] = Group278;

TouchSensor TouchSensor283 = createNode("TouchSensor");
TouchSensor283.DEF = "Touch_3";
Transform277.children[1] = TouchSensor283;

Transform270.children[1] = Transform277;

Transform Transform284 = createNode("Transform");
Transform284.translation = new SFVec3f(new float[-38.0598,-46.6611,-27.9868]);
Transform284.rotation = new SFRotation(new float[1,0,0,4.71239]);
Transform284.scale = new SFVec3f(new float[0.999996,1.00004,0.644773]);
Transform284.center = new SFVec3f(new float[0.324794,52.5664,6.57235]);
Shape Shape285 = createNode("Shape");
Appearance Appearance286 = createNode("Appearance");
Material Material287 = createNode("Material");
Material287.ambientIntensity = 0;
Material287.diffuseColor = new SFColor(new float[1,1,1]);
Material287.emissiveColor = new SFColor(new float[0.457447,0.457447,0.457447]);
Material287.shininess = 0.170213;
Material287.transparency = 0.734043;
Appearance286.material = Material287;

ImageTexture ImageTexture288 = createNode("ImageTexture");
ImageTexture288.url = new MFString(new java.lang.String["aussenwand1.png"]);
Appearance286.texture = ImageTexture288;

Shape285.appearance = Appearance286;

IndexedFaceSet IndexedFaceSet289 = createNode("IndexedFaceSet");
IndexedFaceSet289.solid = False;
IndexedFaceSet289.creaseAngle = 6.28319;
IndexedFaceSet289.colorPerVertex = False;
IndexedFaceSet289.texCoordIndex = new MFInt32(new int[0,1,2,3,-1,4,5,6,7,-1,8,9,10,11,-1,12,13,14,15,-1]);
IndexedFaceSet289.coordIndex = new MFInt32(new int[0,1,2,3,-1,4,5,6,7,-1,8,9,10,11,-1,12,13,14,15,-1]);
TextureCoordinate TextureCoordinate290 = createNode("TextureCoordinate");
TextureCoordinate290.point = new MFVec2f(new float[0.145627,1.29477,0.252078,1.29478,0.252083,1.68625,0.145633,1.68626,0.769876,1.68378,0.769875,1.30121,0.857726,1.30122,0.857728,1.68377,0.588961,1.68623,0.588958,1.2948,0.750353,1.29481,0.750355,1.68623,0.341649,1.68625,0.341644,1.29478,0.496697,1.29479,0.496701,1.68624]);
IndexedFaceSet289.texCoord = TextureCoordinate290;

Coordinate Coordinate291 = createNode("Coordinate");
Coordinate291.point = new MFVec3f(new float[0.328096,50.2785,5.6512,0.328091,50.9717,5.6512,0.328091,50.9717,7.66718,0.328096,50.2785,7.66718,0.32807,54.3435,7.65458,0.32807,54.3435,5.68417,0.328066,54.9155,5.68417,0.328066,54.9155,7.65458,0.328077,53.1654,7.66719,0.328077,53.1654,5.6512,0.328071,54.2163,5.65121,0.328071,54.2163,7.66719,0.328088,51.5549,7.66718,0.328088,51.5549,5.6512,0.328081,52.5646,5.6512,0.328081,52.5646,7.66718]);
IndexedFaceSet289.coord = Coordinate291;

Shape285.geometry = IndexedFaceSet289;

Transform284.child = new undefined();

Transform284.child[0] = Shape285;

Transform270.children[2] = Transform284;

Transform Transform292 = createNode("Transform");
Transform292.DEF = "_12";
Transform292.translation = new SFVec3f(new float[-38.0328,-46.6611,-27.9868]);
Transform292.rotation = new SFRotation(new float[-1,0,0,1.5708]);
Transform292.scale = new SFVec3f(new float[0.999996,1.00004,0.644773]);
Transform292.center = new SFVec3f(new float[0.324794,52.5664,6.57235]);
TouchSensor TouchSensor293 = createNode("TouchSensor");
TouchSensor293.DEF = "touchSensorTrigger";
Transform292.children = new MFNode();

Transform292.children[0] = TouchSensor293;

Group Group294 = createNode("Group");
Group Group295 = createNode("Group");
Group295.DEF = "Jalousie";
TimeSensor TimeSensor296 = createNode("TimeSensor");
TimeSensor296.DEF = "Time_4";
TimeSensor296.cycleInterval = 10;
TimeSensor296.stopTime = 1;
Group295.children = new MFNode();

Group295.children[0] = TimeSensor296;

Group294.children = new MFNode();

Group294.children[0] = Group295;

PositionInterpolator PositionInterpolator297 = createNode("PositionInterpolator");
PositionInterpolator297.DEF = "UnnamedShapeScaleFactorInterp_1";
PositionInterpolator297.key = new MFFloat(new float[0,0.3,0.7,1]);
PositionInterpolator297.keyValue = new MFVec3f(new float[0.999996,1.00004,0.644773,0.999996,1.00004,0.337192,0.999996,1.00004,0.337192,0.999996,1.00004,0.644773]);
Group294.children[1] = PositionInterpolator297;

PositionInterpolator PositionInterpolator298 = createNode("PositionInterpolator");
PositionInterpolator298.DEF = "UnnamedShapeTranslationInterp_1";
PositionInterpolator298.key = new MFFloat(new float[0,0.3,0.7,1]);
PositionInterpolator298.keyValue = new MFVec3f(new float[-38.0328,-46.6611,-27.9868,-38.0328,-45.6916,-27.9868,-38.0328,-45.6916,-27.9868,-38.0328,-46.6611,-27.9868]);
Group294.children[2] = PositionInterpolator298;

Group Group299 = createNode("Group");
ScalarInterpolator ScalarInterpolator300 = createNode("ScalarInterpolator");
ScalarInterpolator300.DEF = "_13";
ScalarInterpolator300.key = new MFFloat(new float[0,1]);
ScalarInterpolator300.keyValue = new MFFloat(new float[1,1]);
Group299.children = new MFNode();

Group299.children[0] = ScalarInterpolator300;

ScalarInterpolator ScalarInterpolator301 = createNode("ScalarInterpolator");
ScalarInterpolator301.DEF = "_14";
ScalarInterpolator301.key = new MFFloat(new float[0,1]);
ScalarInterpolator301.keyValue = new MFFloat(new float[30,30]);
Group299.children[1] = ScalarInterpolator301;

Script Script302 = createNode("Script");
Script302.DEF = "_15";
field field303 = createNode("field");
field303.name = "vec";
field303.accessType = "outputOnly";
field303.type = "SFVec2f";
Script302.field = new MFNode();

Script302.field[0] = field303;

field field304 = createNode("field");
field304.name = "xIn";
field304.accessType = "inputOnly";
field304.type = "SFFloat";
Script302.field[1] = field304;

field field305 = createNode("field");
field305.name = "yIn";
field305.accessType = "inputOnly";
field305.type = "SFFloat";
Script302.field[2] = field305;

field field306 = createNode("field");
field306.name = "xBuf";
field306.accessType = "initializeOnly";
field306.type = "SFFloat";
Script302.field[3] = field306;

field field307 = createNode("field");
field307.name = "yBuf";
field307.accessType = "initializeOnly";
field307.type = "SFFloat";
Script302.field[4] = field307;


Script302.setSourceCode(`vrmlscript: function xIn(value) { xBuf = value; vec[0] = xBuf; vec[1] = yBuf; } function yIn(value) { yBuf = value; vec[0] = xBuf; vec[1] = yBuf; }`)
Group299.children[2] = Script302;

Group294.children[3] = Group299;

CoordinateInterpolator CoordinateInterpolator308 = createNode("CoordinateInterpolator");
CoordinateInterpolator308.DEF = "UnnamedShapePointInterp";
CoordinateInterpolator308.key = new MFFloat(new float[0,1]);
CoordinateInterpolator308.keyValue = new MFVec3f(new float[0.328099,50.2103,7.65458,0.328099,50.2103,5.68417,0.328066,54.9155,5.68417,0.328066,54.9155,7.65458,0.328079,53.0876,5.68417,0.328079,53.1117,7.65458,0.328082,52.6157,5.68417,0.328082,52.6157,7.65458,0.328093,51.0198,5.68417,0.328093,51.0198,7.65458,0.32809,51.4724,5.68417,0.32809,51.4724,7.65458,3.36312e-43,1.4013e-45,3.56727e-29,5.60519e-45,3.75015e-29,2.19196e-28,0,0,0,2.85986e-31,-1,-1,0.328099,50.2103,7.65458,0.328099,50.2103,5.68417,0.328066,54.9155,5.68417,0.328066,54.9155,7.65458,0.328079,53.0876,5.68417,0.328079,53.1117,7.65458,0.328082,52.6157,5.68417,0.328082,52.6157,7.65458,0.328093,51.0198,5.68417,0.328093,51.0198,7.65458,0.32809,51.4724,5.68417,0.32809,51.4724,7.65458,3.36312e-43,1.4013e-45,3.56727e-29,5.60519e-45,3.75015e-29,2.19196e-28,0,0,0,2.85986e-31,-1,-1]);
Group294.children[4] = CoordinateInterpolator308;

Transform292.children[1] = Group294;

Shape Shape309 = createNode("Shape");
Appearance Appearance310 = createNode("Appearance");
Material Material311 = createNode("Material");
Material311.ambientIntensity = 0;
Material311.diffuseColor = new SFColor(new float[1,1,1]);
Material311.emissiveColor = new SFColor(new float[0.457447,0.457447,0.457447]);
Material311.shininess = 0.170213;
Appearance310.material = Material311;

ImageTexture ImageTexture312 = createNode("ImageTexture");
ImageTexture312.url = new MFString(new java.lang.String["jalousie1.png"]);
Appearance310.texture = ImageTexture312;

TextureTransform TextureTransform313 = createNode("TextureTransform");
TextureTransform313.DEF = "_16";
TextureTransform313.scale = new SFVec2f(new float[1,30]);
Appearance310.textureTransform = TextureTransform313;

Shape309.appearance = Appearance310;

IndexedFaceSet IndexedFaceSet314 = createNode("IndexedFaceSet");
IndexedFaceSet314.solid = False;
IndexedFaceSet314.creaseAngle = 6.28319;
IndexedFaceSet314.colorPerVertex = False;
IndexedFaceSet314.texCoordIndex = new MFInt32(new int[4,2,3,5,-1,0,1,8,9,-1,10,6,7,11,-1]);
IndexedFaceSet314.coordIndex = new MFInt32(new int[4,2,3,5,-1,0,1,8,9,-1,10,6,7,11,-1]);
TextureCoordinate TextureCoordinate315 = createNode("TextureCoordinate");
TextureCoordinate315.point = new MFVec2f(new float[0.769876,1.68378,0.769875,1.30121,0.857726,1.30122,0.857728,1.68377,0.822624,1.30122,0.823087,1.68377,0.813561,1.30121,0.813563,1.68377,0.782915,1.30121,0.782916,1.68378,0.791605,1.30121,0.791607,1.68378]);
IndexedFaceSet314.texCoord = TextureCoordinate315;

Coordinate Coordinate316 = createNode("Coordinate");
Coordinate316.DEF = "_17";
Coordinate316.point = new MFVec3f(new float[0.328099,50.2103,7.65458,0.328099,50.2103,5.68417,0.328066,54.9155,5.68417,0.328066,54.9155,7.65458,0.328079,53.0876,5.68417,0.328079,53.1117,7.65458,0.328082,52.6157,5.68417,0.328082,52.6157,7.65458,0.328093,51.0198,5.68417,0.328093,51.0198,7.65458,0.32809,51.4724,5.68417,0.32809,51.4724,7.65458,3.36312e-43,1.4013e-45,3.56727e-29,5.60519e-45,3.75015e-29,2.19196e-28,0,0,0,2.85986e-31,-1,-1]);
IndexedFaceSet314.coord = Coordinate316;

Shape309.geometry = IndexedFaceSet314;

Transform292.child[2] = Shape309;

Transform270.children[3] = Transform292;

Transform Transform317 = createNode("Transform");
Transform Transform318 = createNode("Transform");
Transform318.translation = new SFVec3f(new float[-38.322,-46.8986,-28.2243]);
Transform318.rotation = new SFRotation(new float[-1,0,0,1.5708]);
Transform318.scale = new SFVec3f(new float[0.999996,1.00004,0.644774]);
Transform318.center = new SFVec3f(new float[3.2464,52.8039,6.57235]);
Shape Shape319 = createNode("Shape");
Appearance Appearance320 = createNode("Appearance");
Material Material321 = createNode("Material");
Material321.DEF = "_18";
Material321.ambientIntensity = 0.797872;
Material321.diffuseColor = new SFColor(new float[1,1,1]);
Material321.shininess = 0;
Appearance320.material = Material321;

Shape319.appearance = Appearance320;

IndexedFaceSet IndexedFaceSet322 = createNode("IndexedFaceSet");
IndexedFaceSet322.solid = False;
IndexedFaceSet322.creaseAngle = 6.28319;
IndexedFaceSet322.colorPerVertex = False;
IndexedFaceSet322.coordIndex = new MFInt32(new int[0,2,3,1,-1]);
Coordinate Coordinate323 = createNode("Coordinate");
Coordinate323.point = new MFVec3f(new float[1.92222,49.3305,9.28264,1.92224,55.8416,9.28264,4.39455,49.3305,9.28264,4.39456,55.8416,9.28263]);
IndexedFaceSet322.coord = Coordinate323;

Shape319.geometry = IndexedFaceSet322;

Transform318.child = new undefined();

Transform318.child[0] = Shape319;

Transform317.children = new MFNode();

Transform317.children[0] = Transform318;

Transform Transform324 = createNode("Transform");
Transform324.translation = new SFVec3f(new float[-38.322,-46.8986,-28.2243]);
Transform324.rotation = new SFRotation(new float[1,0,0,4.71239]);
Transform324.scale = new SFVec3f(new float[0.999996,1.00004,0.644774]);
Transform324.center = new SFVec3f(new float[3.2464,52.8039,6.57235]);
Shape Shape325 = createNode("Shape");
Appearance Appearance326 = createNode("Appearance");
Material Material327 = createNode("Material");
Material327.USE = "_18";
Appearance326.material = Material327;

ImageTexture ImageTexture328 = createNode("ImageTexture");
ImageTexture328.DEF = "_19";
ImageTexture328.url = new MFString(new java.lang.String["deckenplatte2.png"]);
Appearance326.texture = ImageTexture328;

TextureTransform TextureTransform329 = createNode("TextureTransform");
TextureTransform329.scale = new SFVec2f(new float[18,1]);
Appearance326.textureTransform = TextureTransform329;

Shape325.appearance = Appearance326;

IndexedFaceSet IndexedFaceSet330 = createNode("IndexedFaceSet");
IndexedFaceSet330.solid = False;
IndexedFaceSet330.creaseAngle = 6.28319;
IndexedFaceSet330.colorPerVertex = False;
IndexedFaceSet330.texCoordIndex = new MFInt32(new int[0,1,5,4,-1,5,7,6,4,-1,7,2,3,6,-1]);
IndexedFaceSet330.coordIndex = new MFInt32(new int[0,1,5,4,-1,5,7,6,4,-1,7,2,3,6,-1]);
TextureCoordinate TextureCoordinate331 = createNode("TextureCoordinate");
TextureCoordinate331.point = new MFVec2f(new float[0.0000385701,0.00000861124,0.0000363614,0.999954,0.999998,0.999955,0.999454,0.0000584401,0.333844,0.0000252541,0.334025,0.999954,0.666649,0.0000418471,0.667011,0.999955]);
IndexedFaceSet330.texCoord = TextureCoordinate331;

Coordinate Coordinate332 = createNode("Coordinate");
Coordinate332.point = new MFVec3f(new float[4.72174,49.3305,9.28263,5.82208,49.3305,9.28263,5.82208,55.8416,9.28263,4.72175,55.8416,9.28263,4.72174,51.5052,9.28263,5.82208,51.5052,9.28263,4.72174,53.6734,9.28263,5.82208,53.6734,9.28263]);
IndexedFaceSet330.coord = Coordinate332;

Shape325.geometry = IndexedFaceSet330;

Transform324.child = new undefined();

Transform324.child[0] = Shape325;

Transform317.children[1] = Transform324;

Transform Transform333 = createNode("Transform");
Transform333.translation = new SFVec3f(new float[-38.322,-46.8986,-28.2243]);
Transform333.rotation = new SFRotation(new float[-1,0,0,1.5708]);
Transform333.scale = new SFVec3f(new float[0.999996,1.00004,0.644774]);
Transform333.center = new SFVec3f(new float[3.2464,52.8039,6.57235]);
Shape Shape334 = createNode("Shape");
Appearance Appearance335 = createNode("Appearance");
Material Material336 = createNode("Material");
Material336.USE = "_18";
Appearance335.material = Material336;

ImageTexture ImageTexture337 = createNode("ImageTexture");
ImageTexture337.DEF = "_20";
ImageTexture337.url = new MFString(new java.lang.String["lampe2.png"]);
Appearance335.texture = ImageTexture337;

TextureTransform TextureTransform338 = createNode("TextureTransform");
TextureTransform338.scale = new SFVec2f(new float[3,1]);
Appearance335.textureTransform = TextureTransform338;

Shape334.appearance = Appearance335;

IndexedFaceSet IndexedFaceSet339 = createNode("IndexedFaceSet");
IndexedFaceSet339.solid = False;
IndexedFaceSet339.creaseAngle = 6.28319;
IndexedFaceSet339.colorPerVertex = False;
IndexedFaceSet339.texCoordIndex = new MFInt32(new int[0,1,2,3,-1]);
IndexedFaceSet339.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
TextureCoordinate TextureCoordinate340 = createNode("TextureCoordinate");
TextureCoordinate340.point = new MFVec2f(new float[0.000590236,0.998563,0.000161478,0.0354206,0.999432,0.00113659,0.999057,0.932479]);
IndexedFaceSet339.texCoord = TextureCoordinate340;

Coordinate Coordinate341 = createNode("Coordinate");
Coordinate341.point = new MFVec3f(new float[4.39455,49.3305,9.28264,4.72174,49.3305,9.28263,4.72175,55.8416,9.28263,4.39456,55.8416,9.28263]);
IndexedFaceSet339.coord = Coordinate341;

Shape334.geometry = IndexedFaceSet339;

Transform333.child = new undefined();

Transform333.child[0] = Shape334;

Transform317.children[2] = Transform333;

Transform Transform342 = createNode("Transform");
Transform342.translation = new SFVec3f(new float[-38.322,-46.8986,-28.2243]);
Transform342.rotation = new SFRotation(new float[-1,0,0,1.5708]);
Transform342.scale = new SFVec3f(new float[0.999996,1.00004,0.644774]);
Transform342.center = new SFVec3f(new float[3.2464,52.8039,6.57235]);
Shape Shape343 = createNode("Shape");
Appearance Appearance344 = createNode("Appearance");
Material Material345 = createNode("Material");
Material345.USE = "_18";
Appearance344.material = Material345;

ImageTexture ImageTexture346 = createNode("ImageTexture");
ImageTexture346.USE = "_20";
Appearance344.texture = ImageTexture346;

TextureTransform TextureTransform347 = createNode("TextureTransform");
TextureTransform347.scale = new SFVec2f(new float[3,1]);
Appearance344.textureTransform = TextureTransform347;

Shape343.appearance = Appearance344;

IndexedFaceSet IndexedFaceSet348 = createNode("IndexedFaceSet");
IndexedFaceSet348.solid = False;
IndexedFaceSet348.creaseAngle = 6.28319;
IndexedFaceSet348.colorPerVertex = False;
IndexedFaceSet348.texCoordIndex = new MFInt32(new int[0,1,2,3,-1]);
IndexedFaceSet348.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
TextureCoordinate TextureCoordinate349 = createNode("TextureCoordinate");
TextureCoordinate349.point = new MFVec2f(new float[0.000430295,0.000630712,0.00026409,0.997726,0.999396,0.997267,0.999951,0.00132787]);
IndexedFaceSet348.texCoord = TextureCoordinate349;

Coordinate Coordinate350 = createNode("Coordinate");
Coordinate350.point = new MFVec3f(new float[1.62159,49.3305,9.28265,1.92222,49.3305,9.28264,1.92224,55.8416,9.28264,1.6216,55.8416,9.28264]);
IndexedFaceSet348.coord = Coordinate350;

Shape343.geometry = IndexedFaceSet348;

Transform342.child = new undefined();

Transform342.child[0] = Shape343;

Transform317.children[3] = Transform342;

Transform Transform351 = createNode("Transform");
Transform351.translation = new SFVec3f(new float[-38.322,-46.8986,-28.2243]);
Transform351.rotation = new SFRotation(new float[1,0,0,4.71239]);
Transform351.scale = new SFVec3f(new float[0.999996,1.00004,0.644774]);
Transform351.center = new SFVec3f(new float[3.2464,52.8039,6.57235]);
Shape Shape352 = createNode("Shape");
Appearance Appearance353 = createNode("Appearance");
Material Material354 = createNode("Material");
Material354.USE = "_18";
Appearance353.material = Material354;

ImageTexture ImageTexture355 = createNode("ImageTexture");
ImageTexture355.USE = "_19";
Appearance353.texture = ImageTexture355;

TextureTransform TextureTransform356 = createNode("TextureTransform");
TextureTransform356.scale = new SFVec2f(new float[18,1]);
Appearance353.textureTransform = TextureTransform356;

Shape352.appearance = Appearance353;

IndexedFaceSet IndexedFaceSet357 = createNode("IndexedFaceSet");
IndexedFaceSet357.solid = False;
IndexedFaceSet357.creaseAngle = 6.28319;
IndexedFaceSet357.texCoordIndex = new MFInt32(new int[4,2,3,5,-1,0,1,6,7,-1,6,4,5,7,-1]);
IndexedFaceSet357.coordIndex = new MFInt32(new int[4,2,3,5,-1,0,1,6,7,-1,6,4,5,7,-1]);
TextureCoordinate TextureCoordinate358 = createNode("TextureCoordinate");
TextureCoordinate358.point = new MFVec2f(new float[0.0000375365,0.00000906142,1.77316e-8,1,1,1,1,0,0.667037,1,0.667048,0.00000301713,0.333519,1,0.333542,0.00000603928]);
IndexedFaceSet357.texCoord = TextureCoordinate358;

Coordinate Coordinate359 = createNode("Coordinate");
Coordinate359.point = new MFVec3f(new float[0.923972,49.3305,9.28265,1.62159,49.3305,9.28265,1.6216,55.8416,9.28264,0.923931,55.8416,9.28265,1.6216,53.6737,9.28264,0.923944,53.6736,9.28265,1.62159,51.5021,9.28264,0.923958,51.5021,9.28265]);
IndexedFaceSet357.coord = Coordinate359;

Shape352.geometry = IndexedFaceSet357;

Transform351.child = new undefined();

Transform351.child[0] = Shape352;

Transform317.children[4] = Transform351;

Transform270.children[4] = Transform317;

Transform Transform360 = createNode("Transform");
Transform360.translation = new SFVec3f(new float[-38.3386,-46.8698,-28.2243]);
Transform360.rotation = new SFRotation(new float[1,0,0,4.71239]);
Transform360.scale = new SFVec3f(new float[0.999996,1.00004,0.644773]);
Transform360.center = new SFVec3f(new float[3.2464,52.8039,6.57235]);
Shape Shape361 = createNode("Shape");
Appearance Appearance362 = createNode("Appearance");
Material Material363 = createNode("Material");
Material363.ambientIntensity = 1.58865;
Material363.diffuseColor = new SFColor(new float[0.33388,0.401786,0.338056]);
Material363.shininess = 0;
Appearance362.material = Material363;

ImageTexture ImageTexture364 = createNode("ImageTexture");
ImageTexture364.DEF = "_21";
ImageTexture364.url = new MFString(new java.lang.String["granite.2.png"]);
Appearance362.texture = ImageTexture364;

TextureTransform TextureTransform365 = createNode("TextureTransform");
TextureTransform365.scale = new SFVec2f(new float[5,5]);
Appearance362.textureTransform = TextureTransform365;

Shape361.appearance = Appearance362;

IndexedFaceSet IndexedFaceSet366 = createNode("IndexedFaceSet");
IndexedFaceSet366.solid = False;
IndexedFaceSet366.creaseAngle = 6.28319;
IndexedFaceSet366.colorPerVertex = False;
IndexedFaceSet366.texCoordIndex = new MFInt32(new int[15,8,9,14,-1,20,19,18,16,-1,1,20,16,21,3,-1,21,16,17,10,-1,3,21,10,22,6,-1,22,10,11,12,-1,6,22,12,23,0,-1,23,12,13,14,-1,0,23,14,9,-1,7,24,25,-1,24,15,14,25,-1,26,13,12,27,-1,4,5,28,29,-1,28,11,10,29,-1,30,17,16,31,-1,19,33,32,18,-1,33,2,32,-1,30,31,32,29,-1,29,32,2,4,-1,26,27,28,25,-1,25,28,5,7,-1]);
IndexedFaceSet366.coordIndex = new MFInt32(new int[15,8,9,14,-1,20,19,18,16,-1,1,20,16,21,3,-1,21,16,17,10,-1,3,21,10,22,6,-1,22,10,11,12,-1,6,22,12,23,0,-1,23,12,13,14,-1,0,23,14,9,-1,7,24,25,-1,24,15,14,25,-1,26,13,12,27,-1,4,5,28,29,-1,28,11,10,29,-1,30,17,16,31,-1,19,33,32,18,-1,33,2,32,-1,30,31,32,29,-1,29,32,2,4,-1,26,27,28,25,-1,25,28,5,7,-1]);
TextureCoordinate TextureCoordinate367 = createNode("TextureCoordinate");
TextureCoordinate367.point = new MFVec2f(new float[0,0.983966,0,0,1,0,0,0.309834,1,0.601601,1,0.765786,0,0.617023,1,1.25207,0,1.25207,0,1.10425,0.301445,0.613443,0.300138,0.737735,0.298478,1.00451,0.300376,1.02277,0.301288,1.13853,0.229729,1.25207,0.297743,0.29069,0.296867,0.412792,0.299357,0.127318,0.225898,0,0.117693,0,0.100129,0.301443,0.11606,0.615233,0.114575,0.994238,0.832601,1.25207,0.834768,1.22522,0.833959,1.0789,0.836518,1.04432,0.838683,0.75932,0.840474,0.604306,0.840427,0.3956,0.841876,0.240582,0.843767,0.0283901,0.843767,0]);
IndexedFaceSet366.texCoord = TextureCoordinate367;

Coordinate Coordinate368 = createNode("Coordinate");
Coordinate368.point = new MFVec3f(new float[0.621812,54.4474,4.13363,0.621844,49.3305,4.13363,5.82208,49.3305,4.13362,0.621834,50.9417,4.13363,5.82208,52.459,4.13362,5.82208,53.3128,4.13362,0.621824,52.5392,4.13363,5.82208,55.8416,4.13362,0.621803,55.8416,4.13363,0.621808,55.0729,4.13363,2.1894,52.5206,4.13363,2.1826,53.1669,4.13363,2.17397,54.5542,4.13363,2.18384,54.6492,4.13363,2.18859,55.2512,4.13363,1.81646,55.8416,4.13363,2.17015,50.8422,4.13363,2.1656,51.4771,4.13363,2.17854,49.9926,4.13363,1.79653,49.3305,4.13363,1.23384,49.3305,4.13363,1.1425,50.8981,4.13363,1.22535,52.5299,4.13363,1.21762,54.5008,4.13363,4.95156,55.8416,4.13362,4.96283,55.702,4.13362,4.95862,54.9411,4.13362,4.97193,54.7613,4.13362,4.98318,53.2792,4.13362,4.9925,52.4731,4.13362,4.99225,51.3877,4.13362,4.99979,50.5816,4.13362,5.00962,49.4781,4.13362,5.00962,49.3305,4.13362]);
IndexedFaceSet366.coord = Coordinate368;

Shape361.geometry = IndexedFaceSet366;

Transform360.child = new undefined();

Transform360.child[0] = Shape361;

Transform270.children[5] = Transform360;

Transform Transform369 = createNode("Transform");
Transform369.translation = new SFVec3f(new float[-38.322,-46.8986,-28.2243]);
Transform369.rotation = new SFRotation(new float[-1,0,0,1.5708]);
Transform369.scale = new SFVec3f(new float[0.999996,1.00004,0.644775]);
Transform369.center = new SFVec3f(new float[3.2464,52.8039,6.57235]);
Shape Shape370 = createNode("Shape");
Appearance Appearance371 = createNode("Appearance");
Material Material372 = createNode("Material");
Material372.ambientIntensity = 0;
Material372.diffuseColor = new SFColor(new float[0.788985,1,0.762007]);
Material372.emissiveColor = new SFColor(new float[0.255319,0.255319,0.255319]);
Material372.shininess = 0;
Appearance371.material = Material372;

ImageTexture ImageTexture373 = createNode("ImageTexture");
ImageTexture373.USE = "_21";
Appearance371.texture = ImageTexture373;

TextureTransform TextureTransform374 = createNode("TextureTransform");
TextureTransform374.scale = new SFVec2f(new float[5,5]);
Appearance371.textureTransform = TextureTransform374;

Shape370.appearance = Appearance371;

IndexedFaceSet IndexedFaceSet375 = createNode("IndexedFaceSet");
IndexedFaceSet375.solid = False;
IndexedFaceSet375.creaseAngle = 6.28319;
IndexedFaceSet375.colorPerVertex = False;
IndexedFaceSet375.texCoordIndex = new MFInt32(new int[0,1,2,3,-1]);
IndexedFaceSet375.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
TextureCoordinate TextureCoordinate376 = createNode("TextureCoordinate");
TextureCoordinate376.point = new MFVec2f(new float[0.011835,0,0,0.929035,0.97633,0.946787,1,0]);
IndexedFaceSet375.texCoord = TextureCoordinate376;

Coordinate Coordinate377 = createNode("Coordinate");
Coordinate377.point = new MFVec3f(new float[0.621844,49.3305,4.13363,5.82208,49.3305,4.13362,5.82208,55.8416,4.13362,0.621803,55.8416,4.13363]);
IndexedFaceSet375.coord = Coordinate377;

Shape370.geometry = IndexedFaceSet375;

Transform369.child = new undefined();

Transform369.child[0] = Shape370;

Transform270.children[6] = Transform369;

Transform Transform378 = createNode("Transform");
Transform378.DEF = "_22";
Transform378.translation = new SFVec3f(new float[-38.019,-46.8821,-28.2243]);
Transform378.rotation = new SFRotation(new float[-1,0,0,1.5708]);
Transform378.scale = new SFVec3f(new float[0.56794,1.00004,0.644774]);
Transform378.center = new SFVec3f(new float[3.2464,52.8039,6.57235]);
Group Group379 = createNode("Group");
Group Group380 = createNode("Group");
Group380.USE = "Jalousie";
Group379.children = new MFNode();

Group379.children[0] = Group380;

PositionInterpolator PositionInterpolator381 = createNode("PositionInterpolator");
PositionInterpolator381.DEF = "UnnamedShapeTranslationInterp_2";
PositionInterpolator381.key = new MFFloat(new float[0,0.3,0.7,1]);
PositionInterpolator381.keyValue = new MFVec3f(new float[-38.019,-46.8821,-28.2243,-35.952,-46.8821,-28.2243,-35.952,-46.8821,-28.2243,-38.019,-46.8821,-28.2243]);
Group379.children[1] = PositionInterpolator381;

PositionInterpolator PositionInterpolator382 = createNode("PositionInterpolator");
PositionInterpolator382.DEF = "UnnamedShapeScaleFactorInterp_2";
PositionInterpolator382.key = new MFFloat(new float[0,0.3,0.7,1]);
PositionInterpolator382.keyValue = new MFVec3f(new float[0.56794,1.00004,0.644774,0.276148,1.00004,0.644774,0.276148,1.00004,0.644774,0.56794,1.00004,0.644774]);
Group379.children[2] = PositionInterpolator382;

Group Group383 = createNode("Group");
ScalarInterpolator ScalarInterpolator384 = createNode("ScalarInterpolator");
ScalarInterpolator384.DEF = "_23";
ScalarInterpolator384.key = new MFFloat(new float[0,1]);
ScalarInterpolator384.keyValue = new MFFloat(new float[5,5]);
Group383.children = new MFNode();

Group383.children[0] = ScalarInterpolator384;

ScalarInterpolator ScalarInterpolator385 = createNode("ScalarInterpolator");
ScalarInterpolator385.DEF = "_24";
ScalarInterpolator385.key = new MFFloat(new float[0,1]);
ScalarInterpolator385.keyValue = new MFFloat(new float[30,30]);
Group383.children[1] = ScalarInterpolator385;

Script Script386 = createNode("Script");
Script386.DEF = "_25";
field field387 = createNode("field");
field387.name = "vec";
field387.accessType = "outputOnly";
field387.type = "SFVec2f";
Script386.field = new MFNode();

Script386.field[0] = field387;

field field388 = createNode("field");
field388.name = "xIn";
field388.accessType = "inputOnly";
field388.type = "SFFloat";
Script386.field[1] = field388;

field field389 = createNode("field");
field389.name = "yIn";
field389.accessType = "inputOnly";
field389.type = "SFFloat";
Script386.field[2] = field389;

field field390 = createNode("field");
field390.name = "xBuf";
field390.accessType = "initializeOnly";
field390.type = "SFFloat";
Script386.field[3] = field390;

field field391 = createNode("field");
field391.name = "yBuf";
field391.accessType = "initializeOnly";
field391.type = "SFFloat";
Script386.field[4] = field391;


Script386.setSourceCode(`vrmlscript: function xIn(value) { xBuf = value; vec[0] = xBuf; vec[1] = yBuf; } function yIn(value) { yBuf = value; vec[0] = xBuf; vec[1] = yBuf; }`)
Group383.children[2] = Script386;

Group379.children[3] = Group383;

Transform378.children = new MFNode();

Transform378.children[0] = Group379;

Shape Shape392 = createNode("Shape");
Appearance Appearance393 = createNode("Appearance");
Material Material394 = createNode("Material");
Material394.ambientIntensity = 5.99999;
Material394.diffuseColor = new SFColor(new float[0.0884032,0.106383,0.0895089]);
Material394.shininess = 0;
Appearance393.material = Material394;

ImageTexture ImageTexture395 = createNode("ImageTexture");
ImageTexture395.url = new MFString(new java.lang.String["jalousie_schatten.png"]);
Appearance393.texture = ImageTexture395;

TextureTransform TextureTransform396 = createNode("TextureTransform");
TextureTransform396.DEF = "_26";
TextureTransform396.scale = new SFVec2f(new float[5,30]);
Appearance393.textureTransform = TextureTransform396;

Shape392.appearance = Appearance393;

IndexedFaceSet IndexedFaceSet397 = createNode("IndexedFaceSet");
IndexedFaceSet397.solid = False;
IndexedFaceSet397.creaseAngle = 6.28319;
IndexedFaceSet397.colorPerVertex = False;
IndexedFaceSet397.texCoordIndex = new MFInt32(new int[0,1,2,3,-1]);
IndexedFaceSet397.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
TextureCoordinate TextureCoordinate398 = createNode("TextureCoordinate");
TextureCoordinate398.point = new MFVec2f(new float[0.011835,0,0,0.929035,0.97633,0.946787,1,0]);
IndexedFaceSet397.texCoord = TextureCoordinate398;

Coordinate Coordinate399 = createNode("Coordinate");
Coordinate399.point = new MFVec3f(new float[0.621844,49.3305,4.13363,5.82208,49.3305,4.13362,5.82208,55.8416,4.13362,0.621803,55.8416,4.13363]);
IndexedFaceSet397.coord = Coordinate399;

Shape392.geometry = IndexedFaceSet397;

Transform378.child[1] = Shape392;

Transform270.children[7] = Transform378;

Transform Transform400 = createNode("Transform");
Transform400.translation = new SFVec3f(new float[-38.322,-46.8701,-28.2243]);
Transform400.rotation = new SFRotation(new float[-1,0,0,1.5708]);
Transform400.scale = new SFVec3f(new float[0.999996,1.00003,0.644772]);
Transform400.center = new SFVec3f(new float[3.2464,52.8039,6.57235]);
Shape Shape401 = createNode("Shape");
Appearance Appearance402 = createNode("Appearance");
Material Material403 = createNode("Material");
Material403.ambientIntensity = 0;
Material403.diffuseColor = new SFColor(new float[0,0,0]);
Material403.shininess = 0;
Material403.transparency = 1;
Appearance402.material = Material403;

Shape401.appearance = Appearance402;

IndexedFaceSet IndexedFaceSet404 = createNode("IndexedFaceSet");
IndexedFaceSet404.solid = False;
IndexedFaceSet404.creaseAngle = 6.28319;
IndexedFaceSet404.colorPerVertex = False;
IndexedFaceSet404.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
Coordinate Coordinate405 = createNode("Coordinate");
Coordinate405.point = new MFVec3f(new float[0.621844,49.3305,4.13363,5.82208,49.3305,4.13362,5.82208,55.8416,4.13362,0.621803,55.8416,4.13363]);
IndexedFaceSet404.coord = Coordinate405;

Shape401.geometry = IndexedFaceSet404;

Transform400.child = new undefined();

Transform400.child[0] = Shape401;

Transform270.children[8] = Transform400;

children[14] = Transform270;

Transform Transform406 = createNode("Transform");
Transform406.translation = new SFVec3f(new float[-50.1308,-8.95545,-30.2199]);
Transform406.scale = new SFVec3f(new float[0.549932,1,4.02312]);
Shape Shape407 = createNode("Shape");
Appearance Appearance408 = createNode("Appearance");
Material Material409 = createNode("Material");
Material409.USE = "_5";
Appearance408.material = Material409;

ImageTexture ImageTexture410 = createNode("ImageTexture");
ImageTexture410.url = new MFString(new java.lang.String["strasse03.png"]);
Appearance408.texture = ImageTexture410;

TextureTransform TextureTransform411 = createNode("TextureTransform");
TextureTransform411.scale = new SFVec2f(new float[1,9.48983]);
Appearance408.textureTransform = TextureTransform411;

Shape407.appearance = Appearance408;

IndexedFaceSet IndexedFaceSet412 = createNode("IndexedFaceSet");
IndexedFaceSet412.creaseAngle = 0.5;
IndexedFaceSet412.texCoordIndex = new MFInt32(new int[0,4,5,3,-1,4,1,2,5,-1]);
IndexedFaceSet412.coordIndex = new MFInt32(new int[0,4,5,3,-1,4,1,2,5,-1]);
TextureCoordinate TextureCoordinate413 = createNode("TextureCoordinate");
TextureCoordinate413.point = new MFVec2f(new float[0,1,0,0,1,0,1,1,0,0.25465,1,0.25465]);
IndexedFaceSet412.texCoord = TextureCoordinate413;

Coordinate Coordinate414 = createNode("Coordinate");
Coordinate414.point = new MFVec3f(new float[-10,10,-10,3.85821,10,10.9109,23.8582,10,10.9109,10,10,-10,-10,10,4.907,10,10,4.907]);
IndexedFaceSet412.coord = Coordinate414;

Shape407.geometry = IndexedFaceSet412;

Transform406.child = new undefined();

Transform406.child[0] = Shape407;

children[15] = Transform406;

Transform Transform415 = createNode("Transform");
Transform415.translation = new SFVec3f(new float[-27.4738,0.634178,7.30931]);
Transform415.rotation = new SFRotation(new float[0,-1,0,1.00453]);
Transform415.scale = new SFVec3f(new float[1.60843,1.91381,1.60844]);
Transform415.scaleOrientation = new SFRotation(new float[0,-1,0,0.0208194]);
Shape Shape416 = createNode("Shape");
Appearance Appearance417 = createNode("Appearance");
Material Material418 = createNode("Material");
Material418.ambientIntensity = 0;
Material418.diffuseColor = new SFColor(new float[1,1,1]);
Material418.emissiveColor = new SFColor(new float[0.595745,0.595745,0.595745]);
Appearance417.material = Material418;

ImageTexture ImageTexture419 = createNode("ImageTexture");
ImageTexture419.USE = "_4";
Appearance417.texture = ImageTexture419;

Shape416.appearance = Appearance417;

IndexedFaceSet IndexedFaceSet420 = createNode("IndexedFaceSet");
IndexedFaceSet420.solid = False;
IndexedFaceSet420.creaseAngle = 0.5;
IndexedFaceSet420.texCoordIndex = new MFInt32(new int[0,1,2,3,-1,4,5,6,7,-1,8,9,10,11,-1]);
IndexedFaceSet420.coordIndex = new MFInt32(new int[0,1,2,3,-1,4,5,6,7,-1,8,9,10,11,-1]);
TextureCoordinate TextureCoordinate421 = createNode("TextureCoordinate");
TextureCoordinate421.point = new MFVec2f(new float[0,0,1,0,1,1,0,1,0,0,1,0,1,1,0,1,0,0,1,0,1,1,0,1]);
IndexedFaceSet420.texCoord = TextureCoordinate421;

Coordinate Coordinate422 = createNode("Coordinate");
Coordinate422.point = new MFVec3f(new float[-52.6347,0.00499916,-10.6106,-45.6466,0.00499916,-10.6106,-45.6466,7.15655,-10.6106,-52.6347,5.739,-10.6106,-47.6449,0.00499058,-7.86263,-51.3424,0.00498962,-13.7923,-51.3424,6.60752,-13.7923,-47.7846,5.62517,-8.08669,-50.9676,0.00498962,-7.82067,-47.5528,0.00498962,-13.9176,-47.5528,6.60752,-13.9176,-50.9676,5.46237,-7.82067]);
IndexedFaceSet420.coord = Coordinate422;

Shape416.geometry = IndexedFaceSet420;

Transform415.child = new undefined();

Transform415.child[0] = Shape416;

children[16] = Transform415;

NavigationInfo NavigationInfo423 = createNode("NavigationInfo");
NavigationInfo423.type = new MFString(new java.lang.String[", ","WALKANY"]);
children[17] = NavigationInfo423;

ROUTE ROUTE424 = createNode("ROUTE");
ROUTE424.fromNode = "Touch_1";
ROUTE424.fromField = "touchTime";
ROUTE424.toNode = "Time_1";
ROUTE424.toField = "set_startTime";
children[18] = ROUTE424;

ROUTE ROUTE425 = createNode("ROUTE");
ROUTE425.fromNode = "Time_1";
ROUTE425.fromField = "fraction_changed";
ROUTE425.toNode = "UnnamedTransformTranslationInterp_1";
ROUTE425.toField = "set_fraction";
children[19] = ROUTE425;

ROUTE ROUTE426 = createNode("ROUTE");
ROUTE426.fromNode = "Time_1";
ROUTE426.fromField = "fraction_changed";
ROUTE426.toNode = "UnnamedTransformRotationInterp_1";
ROUTE426.toField = "set_fraction";
children[20] = ROUTE426;

ROUTE ROUTE427 = createNode("ROUTE");
ROUTE427.fromNode = "Time_1";
ROUTE427.fromField = "fraction_changed";
ROUTE427.toNode = "UnnamedShapeRotationInterp";
ROUTE427.toField = "set_fraction";
children[21] = ROUTE427;

ROUTE ROUTE428 = createNode("ROUTE");
ROUTE428.fromNode = "Time_1";
ROUTE428.fromField = "fraction_changed";
ROUTE428.toNode = "UnnamedTransformCenterInterp";
ROUTE428.toField = "set_fraction";
children[22] = ROUTE428;

ROUTE ROUTE429 = createNode("ROUTE");
ROUTE429.fromNode = "Time_1";
ROUTE429.fromField = "fraction_changed";
ROUTE429.toNode = "UnnamedShapeScaleOrientationInterp";
ROUTE429.toField = "set_fraction";
children[23] = ROUTE429;

ROUTE ROUTE430 = createNode("ROUTE");
ROUTE430.fromNode = "UnnamedShapeRotationInterp";
ROUTE430.fromField = "value_changed";
ROUTE430.toNode = "Klinke";
ROUTE430.toField = "set_rotation";
children[24] = ROUTE430;

ROUTE ROUTE431 = createNode("ROUTE");
ROUTE431.fromNode = "UnnamedShapeScaleOrientationInterp";
ROUTE431.fromField = "value_changed";
ROUTE431.toNode = "Klinke";
ROUTE431.toField = "set_scaleOrientation";
children[25] = ROUTE431;

ROUTE ROUTE432 = createNode("ROUTE");
ROUTE432.fromNode = "Touch_1";
ROUTE432.fromField = "touchTime";
ROUTE432.toNode = "door_snd";
ROUTE432.toField = "set_startTime";
children[26] = ROUTE432;

ROUTE ROUTE433 = createNode("ROUTE");
ROUTE433.fromNode = "UnnamedTransformTranslationInterp_1";
ROUTE433.fromField = "value_changed";
ROUTE433.toNode = "Tuer_AnimSound";
ROUTE433.toField = "set_translation";
children[27] = ROUTE433;

ROUTE ROUTE434 = createNode("ROUTE");
ROUTE434.fromNode = "UnnamedTransformRotationInterp_1";
ROUTE434.fromField = "value_changed";
ROUTE434.toNode = "Tuer_AnimSound";
ROUTE434.toField = "set_rotation";
children[28] = ROUTE434;

ROUTE ROUTE435 = createNode("ROUTE");
ROUTE435.fromNode = "UnnamedTransformCenterInterp";
ROUTE435.fromField = "value_changed";
ROUTE435.toNode = "Tuer_AnimSound";
ROUTE435.toField = "set_center";
children[29] = ROUTE435;

ROUTE ROUTE436 = createNode("ROUTE");
ROUTE436.fromNode = "Touch_2";
ROUTE436.fromField = "touchTime";
ROUTE436.toNode = "Time_2";
ROUTE436.toField = "set_startTime";
children[30] = ROUTE436;

ROUTE ROUTE437 = createNode("ROUTE");
ROUTE437.fromNode = "Time_2";
ROUTE437.fromField = "fraction_changed";
ROUTE437.toNode = "UnnamedTransformRotationInterp_2";
ROUTE437.toField = "set_fraction";
children[31] = ROUTE437;

ROUTE ROUTE438 = createNode("ROUTE");
ROUTE438.fromNode = "UnnamedTransformRotationInterp_2";
ROUTE438.fromField = "value_changed";
ROUTE438.toNode = "Door_left";
ROUTE438.toField = "set_rotation";
children[32] = ROUTE438;

ROUTE ROUTE439 = createNode("ROUTE");
ROUTE439.fromNode = "Touch_3";
ROUTE439.fromField = "touchTime";
ROUTE439.toNode = "Time_3";
ROUTE439.toField = "set_startTime";
children[33] = ROUTE439;

ROUTE ROUTE440 = createNode("ROUTE");
ROUTE440.fromNode = "Time_3";
ROUTE440.fromField = "fraction_changed";
ROUTE440.toNode = "UnnamedTransformRotationInterp_3";
ROUTE440.toField = "set_fraction";
children[34] = ROUTE440;

ROUTE ROUTE441 = createNode("ROUTE");
ROUTE441.fromNode = "Time_3";
ROUTE441.fromField = "fraction_changed";
ROUTE441.toNode = "UnnamedTransformTranslationInterp_2";
ROUTE441.toField = "set_fraction";
children[35] = ROUTE441;

ROUTE ROUTE442 = createNode("ROUTE");
ROUTE442.fromNode = "UnnamedTransformTranslationInterp_2";
ROUTE442.fromField = "value_changed";
ROUTE442.toNode = "Door_right";
ROUTE442.toField = "set_translation";
children[36] = ROUTE442;

ROUTE ROUTE443 = createNode("ROUTE");
ROUTE443.fromNode = "UnnamedTransformRotationInterp_3";
ROUTE443.fromField = "value_changed";
ROUTE443.toNode = "Door_right";
ROUTE443.toField = "set_rotation";
children[37] = ROUTE443;

ROUTE ROUTE444 = createNode("ROUTE");
ROUTE444.fromNode = "touchSensorTrigger";
ROUTE444.fromField = "touchTime";
ROUTE444.toNode = "Time_4";
ROUTE444.toField = "set_startTime";
children[38] = ROUTE444;

ROUTE ROUTE445 = createNode("ROUTE");
ROUTE445.fromNode = "Time_4";
ROUTE445.fromField = "fraction_changed";
ROUTE445.toNode = "UnnamedShapeScaleFactorInterp_1";
ROUTE445.toField = "set_fraction";
children[39] = ROUTE445;

ROUTE ROUTE446 = createNode("ROUTE");
ROUTE446.fromNode = "Time_4";
ROUTE446.fromField = "fraction_changed";
ROUTE446.toNode = "UnnamedShapeTranslationInterp_1";
ROUTE446.toField = "set_fraction";
children[40] = ROUTE446;

ROUTE ROUTE447 = createNode("ROUTE");
ROUTE447.fromNode = "Time_4";
ROUTE447.fromField = "fraction_changed";
ROUTE447.toNode = "_13";
ROUTE447.toField = "set_fraction";
children[41] = ROUTE447;

ROUTE ROUTE448 = createNode("ROUTE");
ROUTE448.fromNode = "Time_4";
ROUTE448.fromField = "fraction_changed";
ROUTE448.toNode = "_14";
ROUTE448.toField = "set_fraction";
children[42] = ROUTE448;

ROUTE ROUTE449 = createNode("ROUTE");
ROUTE449.fromNode = "_13";
ROUTE449.fromField = "value_changed";
ROUTE449.toNode = "_15";
ROUTE449.toField = "xIn";
children[43] = ROUTE449;

ROUTE ROUTE450 = createNode("ROUTE");
ROUTE450.fromNode = "_14";
ROUTE450.fromField = "value_changed";
ROUTE450.toNode = "_15";
ROUTE450.toField = "yIn";
children[44] = ROUTE450;

ROUTE ROUTE451 = createNode("ROUTE");
ROUTE451.fromNode = "Time_4";
ROUTE451.fromField = "fraction_changed";
ROUTE451.toNode = "UnnamedShapePointInterp";
ROUTE451.toField = "set_fraction";
children[45] = ROUTE451;

ROUTE ROUTE452 = createNode("ROUTE");
ROUTE452.fromNode = "_15";
ROUTE452.fromField = "vec";
ROUTE452.toNode = "_16";
ROUTE452.toField = "set_scale";
children[46] = ROUTE452;

ROUTE ROUTE453 = createNode("ROUTE");
ROUTE453.fromNode = "UnnamedShapePointInterp";
ROUTE453.fromField = "value_changed";
ROUTE453.toNode = "_17";
ROUTE453.toField = "set_point";
children[47] = ROUTE453;

ROUTE ROUTE454 = createNode("ROUTE");
ROUTE454.fromNode = "UnnamedShapeTranslationInterp_1";
ROUTE454.fromField = "value_changed";
ROUTE454.toNode = "_12";
ROUTE454.toField = "set_translation";
children[48] = ROUTE454;

ROUTE ROUTE455 = createNode("ROUTE");
ROUTE455.fromNode = "UnnamedShapeScaleFactorInterp_1";
ROUTE455.fromField = "value_changed";
ROUTE455.toNode = "_12";
ROUTE455.toField = "set_scale";
children[49] = ROUTE455;

ROUTE ROUTE456 = createNode("ROUTE");
ROUTE456.fromNode = "Time_4";
ROUTE456.fromField = "fraction_changed";
ROUTE456.toNode = "UnnamedShapeTranslationInterp_2";
ROUTE456.toField = "set_fraction";
children[50] = ROUTE456;

ROUTE ROUTE457 = createNode("ROUTE");
ROUTE457.fromNode = "Time_4";
ROUTE457.fromField = "fraction_changed";
ROUTE457.toNode = "UnnamedShapeScaleFactorInterp_2";
ROUTE457.toField = "set_fraction";
children[51] = ROUTE457;

ROUTE ROUTE458 = createNode("ROUTE");
ROUTE458.fromNode = "Time_4";
ROUTE458.fromField = "fraction_changed";
ROUTE458.toNode = "_23";
ROUTE458.toField = "set_fraction";
children[52] = ROUTE458;

ROUTE ROUTE459 = createNode("ROUTE");
ROUTE459.fromNode = "Time_4";
ROUTE459.fromField = "fraction_changed";
ROUTE459.toNode = "_24";
ROUTE459.toField = "set_fraction";
children[53] = ROUTE459;

ROUTE ROUTE460 = createNode("ROUTE");
ROUTE460.fromNode = "_23";
ROUTE460.fromField = "value_changed";
ROUTE460.toNode = "_25";
ROUTE460.toField = "xIn";
children[54] = ROUTE460;

ROUTE ROUTE461 = createNode("ROUTE");
ROUTE461.fromNode = "_24";
ROUTE461.fromField = "value_changed";
ROUTE461.toNode = "_25";
ROUTE461.toField = "yIn";
children[55] = ROUTE461;

ROUTE ROUTE462 = createNode("ROUTE");
ROUTE462.fromNode = "_25";
ROUTE462.fromField = "vec";
ROUTE462.toNode = "_26";
ROUTE462.toField = "set_scale";
children[56] = ROUTE462;

ROUTE ROUTE463 = createNode("ROUTE");
ROUTE463.fromNode = "UnnamedShapeTranslationInterp_2";
ROUTE463.fromField = "value_changed";
ROUTE463.toNode = "_22";
ROUTE463.toField = "set_translation";
children[57] = ROUTE463;

ROUTE ROUTE464 = createNode("ROUTE");
ROUTE464.fromNode = "UnnamedShapeScaleFactorInterp_2";
ROUTE464.fromField = "value_changed";
ROUTE464.toNode = "_22";
ROUTE464.toField = "set_scale";
children[58] = ROUTE464;

}
