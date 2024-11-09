#define False false
#define True true
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
int main(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(CString("Full"));
X3D0.setVersion(CString("3.3"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(CString("comment"));
meta2.setContent(CString("World of Titania"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(CString("created"));
meta3.setContent(CString("Wed, 18 Mar 2015 02:57:23 GMT"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("creator"));
meta4.setContent(CString("Holger Seelig"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("generator"));
meta5.setContent(CString("Titania V0.7.6, http://titania.create3000.de"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("modified"));
meta6.setContent(CString("Wed, 18 Mar 2015 02:57:23 GMT"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("title"));
meta7.setContent(CString("BIC Buero"));
head1.addMeta(&meta7);

X3D0.setHead(&head1);

Scene& Scene8 =  Scene();
Viewpoint& Viewpoint9 =  Viewpoint();
Viewpoint9.setDEF(CString("VP1"));
Viewpoint9.setDescription(CString("viewpoint2"));
Viewpoint9.setPosition(new float[]{-33.5441,5.45531,-19.045});
Viewpoint9.setOrientation(new float[]{-0.127353,0.991449,0.0284452,0.873982});
Scene8.addChild(&Viewpoint9);

Transform& Transform10 =  Transform();
Transform10.setTranslation(new float[]{-81.6385,-23.4139,-23.6912});
Transform10.setRotation(new float[]{6.5522e-7,1,-0.00000215342,3.14159});
Transform10.setScale(new float[]{83.9983,83.9984,83.9984});
Transform10.setScaleOrientation(new float[]{0.0431866,-0.967337,-0.249786,0.611351});
Shape& Shape11 =  Shape();
Appearance& Appearance12 =  Appearance();
Material& Material13 =  Material();
Material13.setAmbientIntensity(0.16);
Material13.setDiffuseColor(new float[]{1,1,1});
Material13.setEmissiveColor(new float[]{0.489362,0.489362,0.489362});
Material13.setShininess(0.361702);
Appearance12.addChild(&Material13);

ImageTexture& ImageTexture14 =  ImageTexture();
ImageTexture14.setUrl(new CString[]{CString("himmel.png")}, 1);
Appearance12.addChild(&ImageTexture14);

Shape11.addChild(&Appearance12);

IndexedFaceSet& IndexedFaceSet15 =  IndexedFaceSet();
IndexedFaceSet15.setCcw(False);
IndexedFaceSet15.setCreaseAngle(0.5);
IndexedFaceSet15.setTexCoordIndex(new int32_t[]{0,1,2,-1,2,1,3,-1,2,3,4,-1,4,3,5,-1,4,5,6,-1,6,5,7,-1,6,7,8,-1,8,7,9,-1,8,9,10,-1,1,11,3,-1,3,11,12,-1,3,12,5,-1,5,12,13,-1,5,13,7,-1,7,13,14,-1,7,14,9,-1,11,15,12,-1,12,15,16,-1,12,16,13,-1,13,16,17,-1,13,17,14,-1,15,18,16,-1,16,18,19,-1,16,19,17,-1,19,18,60,-1,10,9,20,-1,20,9,21,-1,20,21,22,-1,22,21,23,-1,22,23,24,-1,24,23,25,-1,24,25,26,-1,26,25,27,-1,26,27,28,-1,9,14,21,-1,21,14,29,-1,21,29,23,-1,23,29,30,-1,23,30,25,-1,25,30,31,-1,25,31,27,-1,14,17,29,-1,29,17,32,-1,29,32,30,-1,30,32,33,-1,30,33,31,-1,17,19,32,-1,32,19,34,-1,32,34,33,-1,34,19,60,-1,53,52,35,-1,35,52,36,-1,35,36,37,-1,37,36,38,-1,37,38,39,-1,39,38,40,-1,39,40,41,-1,41,40,1,-1,41,1,0,-1,52,56,36,-1,36,56,42,-1,36,42,38,-1,38,42,43,-1,38,43,40,-1,40,43,11,-1,40,11,1,-1,56,58,42,-1,42,58,44,-1,42,44,43,-1,43,44,15,-1,43,15,11,-1,58,59,44,-1,44,59,18,-1,44,18,15,-1,18,59,60,-1,28,27,45,-1,45,27,46,-1,45,46,47,-1,47,46,48,-1,47,48,49,-1,49,48,50,-1,49,50,51,-1,51,50,52,-1,51,52,53,-1,27,31,46,-1,46,31,54,-1,46,54,48,-1,48,54,55,-1,48,55,50,-1,50,55,56,-1,50,56,52,-1,31,33,54,-1,54,33,57,-1,54,57,55,-1,55,57,58,-1,55,58,56,-1,33,34,57,-1,57,34,59,-1,57,59,58,-1,59,34,60,-1}, 400);
IndexedFaceSet15.setCoordIndex(new int32_t[]{0,1,2,-1,2,1,3,-1,2,3,4,-1,4,3,5,-1,4,5,6,-1,6,5,7,-1,6,7,8,-1,8,7,9,-1,8,9,10,-1,1,11,3,-1,3,11,12,-1,3,12,5,-1,5,12,13,-1,5,13,7,-1,7,13,14,-1,7,14,9,-1,11,15,12,-1,12,15,16,-1,12,16,13,-1,13,16,17,-1,13,17,14,-1,15,18,16,-1,16,18,19,-1,16,19,17,-1,19,18,20,-1,10,9,21,-1,21,9,22,-1,21,22,23,-1,23,22,24,-1,23,24,25,-1,25,24,26,-1,25,26,27,-1,27,26,28,-1,27,28,29,-1,9,14,22,-1,22,14,30,-1,22,30,24,-1,24,30,31,-1,24,31,26,-1,26,31,32,-1,26,32,28,-1,14,17,30,-1,30,17,33,-1,30,33,31,-1,31,33,34,-1,31,34,32,-1,17,19,33,-1,33,19,35,-1,33,35,34,-1,35,19,20,-1,36,37,38,-1,38,37,39,-1,38,39,40,-1,40,39,41,-1,40,41,42,-1,42,41,43,-1,42,43,44,-1,44,43,1,-1,44,1,0,-1,37,45,39,-1,39,45,46,-1,39,46,41,-1,41,46,47,-1,41,47,43,-1,43,47,11,-1,43,11,1,-1,45,48,46,-1,46,48,49,-1,46,49,47,-1,47,49,15,-1,47,15,11,-1,48,50,49,-1,49,50,18,-1,49,18,15,-1,18,50,20,-1,29,28,51,-1,51,28,52,-1,51,52,53,-1,53,52,54,-1,53,54,55,-1,55,54,56,-1,55,56,57,-1,57,56,37,-1,57,37,36,-1,28,32,52,-1,52,32,58,-1,52,58,54,-1,54,58,59,-1,54,59,56,-1,56,59,45,-1,56,45,37,-1,32,34,58,-1,58,34,60,-1,58,60,59,-1,59,60,48,-1,59,48,45,-1,34,35,60,-1,60,35,50,-1,60,50,48,-1,50,35,20,-1}, 400);
TextureCoordinate& TextureCoordinate16 =  TextureCoordinate();
TextureCoordinate16.setPoint(new float[]{1,0.513746,0.985071,0.513746,0.985071,0.389144,0.952267,0.358846,0.916025,0.228771,0.833333,0.171248,0.77735,0.0862836,0.650756,0.0490453,0.621268,0.0153394,0.5,0.0153394,0.5,0,0.916025,0.513746,0.833333,0.342497,0.666667,0.171248,0.5,0.0862836,0.77735,0.513746,0.650756,0.358846,0.5,0.228771,0.621268,0.513746,0.5,0.389144,0.378732,0.0153394,0.349245,0.0490453,0.22265,0.0862836,0.166667,0.171248,0.083975,0.228771,0.047733,0.358846,0.014929,0.389144,0.014929,0.513746,0,0.513746,0.333333,0.171248,0.166667,0.342497,0.083975,0.513746,0.349245,0.358846,0.22265,0.513746,0.378732,0.513746,0.621268,1.01215,0.650756,0.978446,0.77735,0.941208,0.833333,0.856243,0.916025,0.79872,0.952267,0.668646,0.985071,0.638348,0.666667,0.856243,0.833333,0.684994,0.650756,0.668646,0.014929,0.638348,0.047733,0.668646,0.083975,0.79872,0.166667,0.856243,0.22265,0.941208,0.349245,0.978446,0.378732,1.01215,0.5,1.01215,0.5,1.02749,0.166667,0.684994,0.333333,0.856243,0.5,0.941208,0.349245,0.668646,0.5,0.79872,0.5,0.638348,0.5,0.513746}, 122);
IndexedFaceSet15.setTexCoord(&TextureCoordinate16);

Coordinate& Coordinate17 =  Coordinate();
Coordinate17.setPoint(new float[]{1,0,0,0.970142,0.242536,0,0.970142,0,0.242536,0.904534,0.301511,0.301511,0.83205,0,0.5547,0.666667,0.333333,0.666667,0.5547,0,0.83205,0.301511,0.301511,0.904534,0.242536,0,0.970142,0,0.242536,0.970142,0,0,1,0.83205,0.5547,0,0.666667,0.666667,0.333333,0.333333,0.666667,0.666667,0,0.5547,0.83205,0.5547,0.83205,0,0.301511,0.904534,0.301511,0,0.83205,0.5547,0.242536,0.970142,0,0,0.970142,0.242536,0,1,0,-0.242536,0,0.970142,-0.301511,0.301511,0.904534,-0.5547,0,0.83205,-0.666667,0.333333,0.666667,-0.83205,0,0.5547,-0.904534,0.301511,0.301511,-0.970142,0,0.242536,-0.970142,0.242536,0,-1,0,0,-0.333333,0.666667,0.666667,-0.666667,0.666667,0.333333,-0.83205,0.5547,0,-0.301511,0.904534,0.301511,-0.5547,0.83205,0,-0.242536,0.970142,0,0,0,-1,0,0.242536,-0.970142,0.242536,0,-0.970142,0.301511,0.301511,-0.904534,0.5547,0,-0.83205,0.666667,0.333333,-0.666667,0.83205,0,-0.5547,0.904534,0.301511,-0.301511,0.970142,0,-0.242536,0,0.5547,-0.83205,0.333333,0.666667,-0.666667,0.666667,0.666667,-0.333333,0,0.83205,-0.5547,0.301511,0.904534,-0.301511,0,0.970142,-0.242536,-0.970142,0,-0.242536,-0.904534,0.301511,-0.301511,-0.83205,0,-0.5547,-0.666667,0.333333,-0.666667,-0.5547,0,-0.83205,-0.301511,0.301511,-0.904534,-0.242536,0,-0.970142,-0.666667,0.666667,-0.333333,-0.333333,0.666667,-0.666667,-0.301511,0.904534,-0.301511}, 183);
IndexedFaceSet15.setCoord(&Coordinate17);

Shape11.setGeometry(&IndexedFaceSet15);

Transform10.addChild(&Shape11);

Scene8.addChild(&Transform10);

PointLight& PointLight18 =  PointLight();
PointLight18.setDEF(CString("Light1"));
PointLight18.setAmbientIntensity(0.41);
PointLight18.setLocation(new float[]{-38.3413,6.99565,-21.3606});
Scene8.addChild(&PointLight18);

PointLight& PointLight19 =  PointLight();
PointLight19.setDEF(CString("Light2"));
PointLight19.setIntensity(0.407767);
PointLight19.setLocation(new float[]{-36,5.9944,-21.2446});
Scene8.addChild(&PointLight19);

Transform& Transform20 =  Transform();
Transform20.setTranslation(new float[]{-38.0198,-46.8986,-28.2243});
Transform20.setRotation(new float[]{1,0,0,4.71239});
Transform20.setScale(new float[]{0.999996,1.00004,0.644774});
Transform20.setCenter(new float[]{3.2464,52.8039,6.57235});
Shape& Shape21 =  Shape();
Appearance& Appearance22 =  Appearance();
Material& Material23 =  Material();
Material23.setAmbientIntensity(0);
Material23.setDiffuseColor(new float[]{0,0,0});
Material23.setSpecularColor(new float[]{1,1,1});
Material23.setEmissiveColor(new float[]{0.212766,0.212766,0.212766});
Appearance22.addChild(&Material23);

Shape21.addChild(&Appearance22);

IndexedFaceSet& IndexedFaceSet24 =  IndexedFaceSet();
IndexedFaceSet24.setSolid(False);
IndexedFaceSet24.setCreaseAngle(6.28319);
IndexedFaceSet24.setColorPerVertex(False);
IndexedFaceSet24.setCoordIndex(new int32_t[]{0,1,2,3,-1,4,5,6,7,-1}, 10);
Coordinate& Coordinate25 =  Coordinate();
Coordinate25.setPoint(new float[]{0.2647,51.1121,5.6512,0.264698,51.3974,5.6512,0.264698,51.3974,7.66718,0.2647,51.1121,7.66718,0.26469,52.6977,5.6512,0.264688,53.0168,5.6512,0.264688,53.0168,7.66718,0.26469,52.6977,7.66718}, 24);
IndexedFaceSet24.setCoord(&Coordinate25);

Shape21.setGeometry(&IndexedFaceSet24);

Transform20.addChild(&Shape21);

Scene8.addChild(&Transform20);

Transform& Transform26 =  Transform();
Transform26.setTranslation(new float[]{17.3908,-2.38265,6.33846});
Transform26.setScale(new float[]{1.46504,1.4649,1.46488});
Transform& Transform27 =  Transform();
Transform27.setTranslation(new float[]{-37.4314,5.11772,-20.724});
Transform27.setRotation(new float[]{0.577347,0.577352,-0.577352,2.0944});
Transform27.setScale(new float[]{0.0366491,0.036936,0.0370194});
Transform27.setScaleOrientation(new float[]{0.00457305,0.435849,-0.900008,0.00371864});
Shape& Shape28 =  Shape();
Appearance& Appearance29 =  Appearance();
Material& Material30 =  Material();
Material30.setDEF(CString("_1"));
Material30.setAmbientIntensity(0.340426);
Material30.setDiffuseColor(new float[]{1,1,1});
Material30.setEmissiveColor(new float[]{0.43617,0.43617,0.43617});
Appearance29.addChild(&Material30);

ImageTexture& ImageTexture31 =  ImageTexture();
ImageTexture31.setDEF(CString("_2"));
ImageTexture31.setUrl(new CString[]{CString("steckdose2.png")}, 1);
Appearance29.addChild(&ImageTexture31);

TextureTransform& TextureTransform32 =  TextureTransform();
Appearance29.setTextureTransform(TextureTransform32);

Shape28.addChild(&Appearance29);

IndexedFaceSet& IndexedFaceSet33 =  IndexedFaceSet();
IndexedFaceSet33.setCreaseAngle(0.5);
IndexedFaceSet33.setTexCoordIndex(new int32_t[]{0,1,3,2,-1}, 5);
IndexedFaceSet33.setCoordIndex(new int32_t[]{3,0,1,2,-1}, 5);
TextureCoordinate& TextureCoordinate34 =  TextureCoordinate();
TextureCoordinate34.setPoint(new float[]{0,1,0,0,1,1,1,0}, 8);
IndexedFaceSet33.setTexCoord(&TextureCoordinate34);

Coordinate& Coordinate35 =  Coordinate();
Coordinate35.setPoint(new float[]{-1,1,1,1,1,1,1,1,-1,-1,1,-1}, 12);
IndexedFaceSet33.setCoord(&Coordinate35);

Shape28.setGeometry(&IndexedFaceSet33);

Transform27.addChild(&Shape28);

Transform26.addChild(&Transform27);

Transform& Transform36 =  Transform();
Transform36.setTranslation(new float[]{-37.4319,5.118,-20.9288});
Transform36.setRotation(new float[]{0.577347,0.577352,-0.577352,2.0944});
Transform36.setScale(new float[]{0.111058,0.0369361,0.0370194});
Transform36.setScaleOrientation(new float[]{-0.0167824,0.438953,-0.898353,0.00371864});
Shape& Shape37 =  Shape();
Appearance& Appearance38 =  Appearance();
Material& Material39 =  Material();
Material39.setUSE(CString("_1"));
Appearance38.addChild(&Material39);

ImageTexture& ImageTexture40 =  ImageTexture();
ImageTexture40.setDEF(CString("_3"));
ImageTexture40.setUrl(new CString[]{CString("steckdose1.png")}, 1);
Appearance38.addChild(&ImageTexture40);

TextureTransform& TextureTransform41 =  TextureTransform();
TextureTransform41.setScale(new float[]{3,1});
Appearance38.setTextureTransform(TextureTransform41);

Shape37.addChild(&Appearance38);

IndexedFaceSet& IndexedFaceSet42 =  IndexedFaceSet();
IndexedFaceSet42.setCreaseAngle(0.5);
IndexedFaceSet42.setTexCoordIndex(new int32_t[]{0,1,3,2,-1}, 5);
IndexedFaceSet42.setCoordIndex(new int32_t[]{3,0,1,2,-1}, 5);
TextureCoordinate& TextureCoordinate43 =  TextureCoordinate();
TextureCoordinate43.setPoint(new float[]{0,1,0,0,1,1,1,0}, 8);
IndexedFaceSet42.setTexCoord(&TextureCoordinate43);

Coordinate& Coordinate44 =  Coordinate();
Coordinate44.setPoint(new float[]{-1,1,1,1,1,1,1,1,-1,-1,1,-1}, 12);
IndexedFaceSet42.setCoord(&Coordinate44);

Shape37.setGeometry(&IndexedFaceSet42);

Transform36.addChild(&Shape37);

Transform26.addChild(&Transform36);

Scene8.addChild(&Transform26);

Transform& Transform45 =  Transform();
Transform45.setTranslation(new float[]{17.3908,-2.38265,11.3153});
Transform45.setScale(new float[]{1.46504,1.4649,1.46488});
Transform& Transform46 =  Transform();
Transform46.setTranslation(new float[]{-37.4306,5.11737,-20.3516});
Transform46.setRotation(new float[]{0.577347,0.577352,-0.577352,2.0944});
Transform46.setScale(new float[]{0.111058,0.0369361,0.0370194});
Transform46.setScaleOrientation(new float[]{-0.0167824,0.438953,-0.898353,0.00371864});
Shape& Shape47 =  Shape();
Appearance& Appearance48 =  Appearance();
Material& Material49 =  Material();
Material49.setAmbientIntensity(0.340426);
Material49.setDiffuseColor(new float[]{1,1,1});
Material49.setEmissiveColor(new float[]{0.43617,0.43617,0.43617});
Appearance48.addChild(&Material49);

ImageTexture& ImageTexture50 =  ImageTexture();
ImageTexture50.setUSE(CString("_3"));
Appearance48.addChild(&ImageTexture50);

TextureTransform& TextureTransform51 =  TextureTransform();
TextureTransform51.setScale(new float[]{3,1});
Appearance48.setTextureTransform(TextureTransform51);

Shape47.addChild(&Appearance48);

IndexedFaceSet& IndexedFaceSet52 =  IndexedFaceSet();
IndexedFaceSet52.setCreaseAngle(0.5);
IndexedFaceSet52.setTexCoordIndex(new int32_t[]{0,1,3,2,-1}, 5);
IndexedFaceSet52.setCoordIndex(new int32_t[]{3,0,1,2,-1}, 5);
TextureCoordinate& TextureCoordinate53 =  TextureCoordinate();
TextureCoordinate53.setPoint(new float[]{0,1,0,0,1,1,1,0}, 8);
IndexedFaceSet52.setTexCoord(&TextureCoordinate53);

Coordinate& Coordinate54 =  Coordinate();
Coordinate54.setPoint(new float[]{-1,1,1,1,1,1,1,1,-1,-1,1,-1}, 12);
IndexedFaceSet52.setCoord(&Coordinate54);

Shape47.setGeometry(&IndexedFaceSet52);

Transform46.addChild(&Shape47);

Transform45.addChild(&Transform46);

Scene8.addChild(&Transform45);

Transform& Transform55 =  Transform();
Transform55.setTranslation(new float[]{-103.534,-78.1417,-23.2457});
Transform55.setRotation(new float[]{-0.707107,0,0.707107,3.14159});
Transform55.setScale(new float[]{83.2926,79.0865,79.087});
Shape& Shape56 =  Shape();
Appearance& Appearance57 =  Appearance();
Material& Material58 =  Material();
Material58.setEmissiveColor(new float[]{0.446809,0.446809,0.446809});
Appearance57.addChild(&Material58);

ImageTexture& ImageTexture59 =  ImageTexture();
ImageTexture59.setUrl(new CString[]{CString("gras_g.png")}, 1);
Appearance57.addChild(&ImageTexture59);

TextureTransform& TextureTransform60 =  TextureTransform();
TextureTransform60.setScale(new float[]{10,10});
Appearance57.setTextureTransform(TextureTransform60);

Shape56.addChild(&Appearance57);

IndexedFaceSet& IndexedFaceSet61 =  IndexedFaceSet();
IndexedFaceSet61.setCreaseAngle(0.5);
IndexedFaceSet61.setTexCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
IndexedFaceSet61.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate62 =  TextureCoordinate();
TextureCoordinate62.setPoint(new float[]{0,1,0,0,1,0,1,1}, 8);
IndexedFaceSet61.setTexCoord(&TextureCoordinate62);

Coordinate& Coordinate63 =  Coordinate();
Coordinate63.setPoint(new float[]{-1,-1,1,-1,-1,-1,1,-1,-1,1,-1,1}, 12);
IndexedFaceSet61.setCoord(&Coordinate63);

Shape56.setGeometry(&IndexedFaceSet61);

Transform55.addChild(&Shape56);

Scene8.addChild(&Transform55);

Transform& Transform64 =  Transform();
Transform64.setTranslation(new float[]{-31.6499,5.99605,-20.7605});
Transform64.setRotation(new float[]{-0.57735,-0.577349,0.577352,4.18879});
Transform64.setScale(new float[]{8.04266,1.03052,1.90638});
Shape& Shape65 =  Shape();
Appearance& Appearance66 =  Appearance();
Material& Material67 =  Material();
Appearance66.addChild(&Material67);

Shape65.addChild(&Appearance66);

IndexedFaceSet& IndexedFaceSet68 =  IndexedFaceSet();
IndexedFaceSet68.setCreaseAngle(0.5);
IndexedFaceSet68.setCoordIndex(new int32_t[]{2,3,1,0,-1,6,7,5,4,-1,0,1,7,6,-1,4,5,3,2,-1,4,2,0,6,-1,3,5,7,1,-1}, 30);
Coordinate& Coordinate69 =  Coordinate();
Coordinate69.setPoint(new float[]{-0.876843,0.876814,0.876836,-0.876843,-0.876814,0.876836,0.876843,0.876814,0.876836,0.876843,-0.876814,0.876836,0.876843,0.876814,-0.876836,0.876843,-0.876814,-0.876836,-0.876843,0.876814,-0.876836,-0.876843,-0.876814,-0.876836}, 24);
IndexedFaceSet68.setCoord(&Coordinate69);

Shape65.setGeometry(&IndexedFaceSet68);

Transform64.addChild(&Shape65);

Scene8.addChild(&Transform64);

Transform& Transform70 =  Transform();
Transform70.setDEF(CString("tree"));
Transform70.setTranslation(new float[]{7.22813,0.944695,-4.87276});
Transform& Transform71 =  Transform();
Transform71.setTranslation(new float[]{-30.645,-0.000947475,33.3974});
Transform71.setRotation(new float[]{0,-1,0,1.00453});
Transform71.setScale(new float[]{1,1.18986,1});
Shape& Shape72 =  Shape();
Appearance& Appearance73 =  Appearance();
Material& Material74 =  Material();
Material74.setAmbientIntensity(0);
Material74.setDiffuseColor(new float[]{1,1,1});
Material74.setEmissiveColor(new float[]{0.595745,0.595745,0.595745});
Appearance73.addChild(&Material74);

ImageTexture& ImageTexture75 =  ImageTexture();
ImageTexture75.setDEF(CString("_4"));
ImageTexture75.setUrl(new CString[]{CString("ntree.png")}, 1);
Appearance73.addChild(&ImageTexture75);

Shape72.addChild(&Appearance73);

IndexedFaceSet& IndexedFaceSet76 =  IndexedFaceSet();
IndexedFaceSet76.setSolid(False);
IndexedFaceSet76.setCreaseAngle(0.5);
IndexedFaceSet76.setTexCoordIndex(new int32_t[]{0,1,2,3,-1,4,5,6,7,-1,8,9,10,11,-1}, 15);
IndexedFaceSet76.setCoordIndex(new int32_t[]{0,1,2,3,-1,4,5,6,7,-1,8,9,10,11,-1}, 15);
TextureCoordinate& TextureCoordinate77 =  TextureCoordinate();
TextureCoordinate77.setPoint(new float[]{0,0,1,0,1,1,0,1,0,0,1,0,1,1,0,1,0,0,1,0,1,1,0,1}, 24);
IndexedFaceSet76.setTexCoord(&TextureCoordinate77);

Coordinate& Coordinate78 =  Coordinate();
Coordinate78.setPoint(new float[]{-52.6347,0.00499916,-10.6106,-45.6466,0.00499916,-10.6106,-45.6466,7.15655,-10.6106,-52.6347,5.739,-10.6106,-47.6449,0.00499058,-7.86263,-51.3424,0.00498962,-13.7923,-51.3424,6.60752,-13.7923,-47.7846,5.62517,-8.08669,-50.9676,0.00498962,-7.82067,-47.5528,0.00498962,-13.9176,-47.5528,6.60752,-13.9176,-50.9676,5.46237,-7.82067}, 36);
IndexedFaceSet76.setCoord(&Coordinate78);

Shape72.setGeometry(&IndexedFaceSet76);

Transform71.addChild(&Shape72);

Transform70.addChild(&Transform71);

Scene8.addChild(&Transform70);

Transform& Transform79 =  Transform();
Transform79.setTranslation(new float[]{-61.2457,10.8677,-22.9249});
Transform79.setScale(new float[]{0.56156,0.992292,1.23169});
Shape& Shape80 =  Shape();
Appearance& Appearance81 =  Appearance();
Material& Material82 =  Material();
Material82.setDEF(CString("_5"));
Appearance81.addChild(&Material82);

ImageTexture& ImageTexture83 =  ImageTexture();
ImageTexture83.setUrl(new CString[]{CString("haus_03-n.png")}, 1);
Appearance81.addChild(&ImageTexture83);

TextureTransform& TextureTransform84 =  TextureTransform();
TextureTransform84.setScale(new float[]{2.55676,1});
Appearance81.setTextureTransform(TextureTransform84);

Shape80.addChild(&Appearance81);

IndexedFaceSet& IndexedFaceSet85 =  IndexedFaceSet();
IndexedFaceSet85.setCreaseAngle(0.5);
IndexedFaceSet85.setTexCoordIndex(new int32_t[]{0,1,3,2,-1,0,1,3,2,-1}, 10);
IndexedFaceSet85.setCoordIndex(new int32_t[]{0,1,3,2,-1,2,3,5,4,-1}, 10);
TextureCoordinate& TextureCoordinate86 =  TextureCoordinate();
TextureCoordinate86.setPoint(new float[]{0,1,0,0,1,1,1,0}, 8);
IndexedFaceSet85.setTexCoord(&TextureCoordinate86);

Coordinate& Coordinate87 =  Coordinate();
Coordinate87.setPoint(new float[]{-10,10,10,-10,-10,10,10,10,10,10,-10,10,10,10,-10,10,-10,-10}, 18);
IndexedFaceSet85.setCoord(&Coordinate87);

Shape80.setGeometry(&IndexedFaceSet85);

Transform79.addChild(&Shape80);

Scene8.addChild(&Transform79);

Transform& Transform88 =  Transform();
Transform88.setTranslation(new float[]{-56.812,10.8676,3.47684});
Transform88.setRotation(new float[]{0.00000686721,1,-0.00000507457,0.298005});
Transform88.setScale(new float[]{0.56156,0.992292,1.23169});
Shape& Shape89 =  Shape();
Appearance& Appearance90 =  Appearance();
Material& Material91 =  Material();
Appearance90.addChild(&Material91);

ImageTexture& ImageTexture92 =  ImageTexture();
ImageTexture92.setUrl(new CString[]{CString("haus_01-n.png")}, 1);
Appearance90.addChild(&ImageTexture92);

TextureTransform& TextureTransform93 =  TextureTransform();
TextureTransform93.setScale(new float[]{2.55676,1});
Appearance90.setTextureTransform(TextureTransform93);

Shape89.addChild(&Appearance90);

IndexedFaceSet& IndexedFaceSet94 =  IndexedFaceSet();
IndexedFaceSet94.setCreaseAngle(0.5);
IndexedFaceSet94.setTexCoordIndex(new int32_t[]{0,1,3,2,-1,0,1,3,2,-1}, 10);
IndexedFaceSet94.setCoordIndex(new int32_t[]{2,3,5,4,-1,0,1,3,2,-1}, 10);
TextureCoordinate& TextureCoordinate95 =  TextureCoordinate();
TextureCoordinate95.setPoint(new float[]{0,1,0,0,1,1,1,0}, 8);
IndexedFaceSet94.setTexCoord(&TextureCoordinate95);

Coordinate& Coordinate96 =  Coordinate();
Coordinate96.setPoint(new float[]{10,10,10,10,-10,10,10,10,-10,10,-10,-10,-10,10,-10,-10,-10,-10}, 18);
IndexedFaceSet94.setCoord(&Coordinate96);

Shape89.setGeometry(&IndexedFaceSet94);

Transform88.addChild(&Shape89);

Scene8.addChild(&Transform88);

Transform& Transform97 =  Transform();
Transform97.setTranslation(new float[]{-63.3934,10.8677,-55.0009});
Transform97.setScale(new float[]{0.56156,0.992292,1.23169});
Shape& Shape98 =  Shape();
Appearance& Appearance99 =  Appearance();
Material& Material100 =  Material();
Appearance99.addChild(&Material100);

ImageTexture& ImageTexture101 =  ImageTexture();
ImageTexture101.setUrl(new CString[]{CString("haus_02-n.png")}, 1);
Appearance99.addChild(&ImageTexture101);

TextureTransform& TextureTransform102 =  TextureTransform();
TextureTransform102.setScale(new float[]{5.42554,1});
Appearance99.setTextureTransform(TextureTransform102);

Shape98.addChild(&Appearance99);

IndexedFaceSet& IndexedFaceSet103 =  IndexedFaceSet();
IndexedFaceSet103.setCreaseAngle(0.5);
IndexedFaceSet103.setTexCoordIndex(new int32_t[]{0,1,3,2,-1,0,1,3,2,-1}, 10);
IndexedFaceSet103.setCoordIndex(new int32_t[]{0,1,3,2,-1,2,3,5,4,-1}, 10);
TextureCoordinate& TextureCoordinate104 =  TextureCoordinate();
TextureCoordinate104.setPoint(new float[]{0,1,0,0,1,1,1,0}, 8);
IndexedFaceSet103.setTexCoord(&TextureCoordinate104);

Coordinate& Coordinate105 =  Coordinate();
Coordinate105.setPoint(new float[]{-10,10,10,-10,-10,10,10,10,10,10,-10,10,10,10,-10,10,-10,-10}, 18);
IndexedFaceSet103.setCoord(&Coordinate105);

Shape98.setGeometry(&IndexedFaceSet103);

Transform97.addChild(&Shape98);

Scene8.addChild(&Transform97);

Transform& Transform106 =  Transform();
Transform& Transform107 =  Transform();
Transform106.addChild(&Transform107);

Transform& Transform108 =  Transform();
Transform108.setTranslation(new float[]{-63.0607,0.00668185,-37.6936});
Transform108.setRotation(new float[]{9.31219e-7,1,5.06175e-7,3.14159});
Transform108.setScale(new float[]{0.999997,1,0.999997});
Transform108.setScaleOrientation(new float[]{1.97165e-7,1,-2.32074e-7,2.35619});
WorldInfo& WorldInfo109 =  WorldInfo();
WorldInfo109.setInfo(new CString[]{CString(", "), CString("Created in Titania, "), CString("Packaged by CosmoPackage, "), CString("Packaged by CosmoPackage, "), CString("Created in TitaniaPackaged by CosmoPackage")}, 5);
Transform108.addChild(&WorldInfo109);

Group& Group110 =  Group();
Transform& Transform111 =  Transform();
Transform111.setDEF(CString("Schwelle"));
Transform111.setTranslation(new float[]{-30.5547,4.33352,-18.8377});
Transform111.setRotation(new float[]{0,1,0,4.71239});
Transform111.setScale(new float[]{0.471668,0.00738103,0.0652795});
Shape& Shape112 =  Shape();
Appearance& Appearance113 =  Appearance();
Material& Material114 =  Material();
Appearance113.addChild(&Material114);

Shape112.addChild(&Appearance113);

IndexedFaceSet& IndexedFaceSet115 =  IndexedFaceSet();
IndexedFaceSet115.setCreaseAngle(0.5);
IndexedFaceSet115.setCoordIndex(new int32_t[]{0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1}, 25);
Coordinate& Coordinate116 =  Coordinate();
Coordinate116.setPoint(new float[]{-1.00618,1,1,-1.00618,-1,1,0.996804,1,1,0.996804,-1,1,0.996804,1,-1,0.996804,-1,-1,-1.00618,1,-1,-1.00618,-1,-1}, 24);
IndexedFaceSet115.setCoord(&Coordinate116);

Shape112.setGeometry(&IndexedFaceSet115);

Transform111.addChild(&Shape112);

Group110.addChild(&Transform111);

Transform& Transform117 =  Transform();
Transform117.setDEF(CString("Rahmen"));
Transform117.setTranslation(new float[]{-30.5562,5.44625,-19.2761});
Transform117.setRotation(new float[]{0,-1,0,1.5708});
Transform117.setScale(new float[]{0.0342311,1.11498,0.0407675});
Shape& Shape118 =  Shape();
Appearance& Appearance119 =  Appearance();
Material& Material120 =  Material();
Material120.setAmbientIntensity(0);
Material120.setDiffuseColor(new float[]{0.117021,0.022394,0});
Material120.setSpecularColor(new float[]{0.117021,0.117021,0.117021});
Material120.setEmissiveColor(new float[]{0.0744681,0.0744681,0.0744681});
Material120.setShininess(0.574468);
Appearance119.addChild(&Material120);

Shape118.addChild(&Appearance119);

IndexedFaceSet& IndexedFaceSet121 =  IndexedFaceSet();
IndexedFaceSet121.setCreaseAngle(0.5);
IndexedFaceSet121.setCoordIndex(new int32_t[]{4,21,5,7,6,-1,6,7,1,20,0,-1,6,0,2,4,-1,8,18,9,10,11,-1,11,10,12,17,13,-1,14,8,11,13,-1,13,17,16,14,-1,17,12,15,16,-1,16,15,9,18,-1,0,20,19,2,-1,20,1,3,19,-1,19,3,5,21,-1,8,14,4,2,-1,18,8,2,19,-1,4,14,16,21,-1,16,18,19,21,-1}, 84);
Coordinate& Coordinate122 =  Coordinate();
Coordinate122.setPoint(new float[]{-1,1,1,-1,-1,1,1,1,1,1,-1,1,1,1,-1,1,-1,-1,-1,1,-1,-1,-1,-1,24.5052,1,1,24.5052,-1,1,26.5052,-1,1,26.5052,1,1,26.5052,-1,-1,26.5052,1,-1,24.5052,1,-1,24.5052,-1,-1,24.5237,0.941309,-1,26.5052,0.941308,-1,24.5237,0.941308,1,1,0.941023,1,-1,0.941023,1,1,0.941023,-1}, 66);
IndexedFaceSet121.setCoord(&Coordinate122);

Shape118.setGeometry(&IndexedFaceSet121);

Transform117.addChild(&Shape118);

Group110.addChild(&Transform117);

Transform& Transform123 =  Transform();
Transform123.setDEF(CString("Tuer_AnimSound"));
Transform123.setScale(new float[]{0.999993,0.999999,0.999993});
Transform123.setCenter(new float[]{-30.5078,5.43194,-18.8276});
Group& Group124 =  Group();
Group& Group125 =  Group();
Group125.setDEF(CString("open_door"));
TimeSensor& TimeSensor126 =  TimeSensor();
TimeSensor126.setDEF(CString("Time_1"));
TimeSensor126.setCycleInterval(10);
TimeSensor126.setStopTime(1);
Group125.addChild(&TimeSensor126);

Group124.addChild(&Group125);

PositionInterpolator& PositionInterpolator127 =  PositionInterpolator();
PositionInterpolator127.setDEF(CString("UnnamedTransformTranslationInterp_1"));
PositionInterpolator127.setKey(new float[]{0,0.04,0.96,1}, 4);
PositionInterpolator127.setKeyValue(new float[]{0,0,0,0,0,0,0,0,0,0,0,0}, 12);
Group124.addChild(&PositionInterpolator127);

OrientationInterpolator& OrientationInterpolator128 =  OrientationInterpolator();
OrientationInterpolator128.setDEF(CString("UnnamedTransformRotationInterp_1"));
OrientationInterpolator128.setKey(new float[]{0,0.04,0.16,0.86,0.96,1}, 6);
OrientationInterpolator128.setKeyValue(new float[]{0,0,1,0,0,0,1,0,0,1,0,1.64979,0,1,0,1.64979,0,0,1,0,0,0,1,0}, 24);
Group124.addChild(&OrientationInterpolator128);

OrientationInterpolator& OrientationInterpolator129 =  OrientationInterpolator();
OrientationInterpolator129.setDEF(CString("UnnamedShapeRotationInterp"));
OrientationInterpolator129.setKey(new float[]{0,0.04,0.1,0.92,0.96,1}, 6);
OrientationInterpolator129.setKeyValue(new float[]{0.57735,-0.57735,0.57735,2.0944,0.522759,-0.522759,0.673385,1.95631,0.57735,-0.57735,0.57735,2.0944,0.57735,-0.57735,0.57735,2.0944,0.524697,-0.524697,0.670363,1.96048,0.57735,-0.57735,0.57735,2.0944}, 24);
Group124.addChild(&OrientationInterpolator129);

PositionInterpolator& PositionInterpolator130 =  PositionInterpolator();
PositionInterpolator130.setDEF(CString("UnnamedTransformCenterInterp"));
PositionInterpolator130.setKey(new float[]{0,0.04}, 2);
PositionInterpolator130.setKeyValue(new float[]{-30.5078,5.43194,-18.8276,-30.5078,5.43504,-19.2393}, 6);
Group124.addChild(&PositionInterpolator130);

OrientationInterpolator& OrientationInterpolator131 =  OrientationInterpolator();
OrientationInterpolator131.setDEF(CString("UnnamedShapeScaleOrientationInterp"));
OrientationInterpolator131.setKey(new float[]{0,0.04}, 2);
OrientationInterpolator131.setKeyValue(new float[]{-1,0.0000055376,0.00000557843,0.00737289,-1,-0.00000641583,0.00000564175,0.00724239}, 8);
Group124.addChild(&OrientationInterpolator131);

Transform123.addChild(&Group124);

TouchSensor& TouchSensor132 =  TouchSensor();
TouchSensor132.setDEF(CString("Touch_1"));
Transform123.addChild(&TouchSensor132);

Transform& Transform133 =  Transform();
Transform133.setDEF(CString("Tuerklinke"));
Transform133.setTranslation(new float[]{0.0519834,0,0});
Transform& Transform134 =  Transform();
Transform134.setDEF(CString("Klinke"));
Transform134.setTranslation(new float[]{-30.639,5.87077,-18.505});
Transform134.setRotation(new float[]{0.57735,-0.57735,0.57735,2.0944});
Transform134.setScale(new float[]{0.897348,0.195632,0.122587});
Transform134.setCenter(new float[]{0.0744146,-0.506144,-0.0227777});
Shape& Shape135 =  Shape();
Appearance& Appearance136 =  Appearance();
Material& Material137 =  Material();
Material137.setAmbientIntensity(0);
Material137.setDiffuseColor(new float[]{0.691489,0.691489,0.691489});
Material137.setSpecularColor(new float[]{1,1,1});
Material137.setShininess(0.159574);
Appearance136.addChild(&Material137);

Shape135.addChild(&Appearance136);

IndexedFaceSet& IndexedFaceSet138 =  IndexedFaceSet();
IndexedFaceSet138.setSolid(False);
IndexedFaceSet138.setCreaseAngle(3.14159);
IndexedFaceSet138.setCoordIndex(new int32_t[]{5,3,2,4,-1,12,11,10,13,-1,2,3,10,11,-1,9,8,1,0,-1,3,1,8,10,-1,0,2,11,9,-1,15,12,13,14,-1,6,5,4,7,-1,7,4,2,0,-1,3,5,6,1,-1,6,7,0,1,-1,14,13,10,8,-1,11,12,15,9,-1,15,14,8,9,-1}, 70);
Coordinate& Coordinate139 =  Coordinate();
Coordinate139.setPoint(new float[]{0.101571,-0.012592,0.096272,0.101571,-0.012592,-0.103728,0.0784915,-0.111403,0.100376,0.0784916,-0.111403,-0.0996237,-0.0887925,-0.111405,0.100376,-0.0887926,-0.111405,-0.0996237,-0.093096,-0.0125155,-0.103728,-0.093096,-0.0125155,0.096272,0.100341,-0.904158,-0.100809,0.100341,-0.904158,0.0991913,0.0789908,-0.806507,-0.100809,0.0789907,-0.806507,0.0991913,-0.0882932,-0.806509,0.0991913,-0.0882933,-0.806509,-0.100809,-0.094326,-0.908792,-0.100809,-0.094326,-0.908792,0.0991913}, 48);
IndexedFaceSet138.setCoord(&Coordinate139);

Shape135.setGeometry(&IndexedFaceSet138);

Transform134.addChild(&Shape135);

Transform133.addChild(&Transform134);

Transform& Transform140 =  Transform();
Transform140.setTranslation(new float[]{-30.574,5.29324,-18.5155});
Transform140.setRotation(new float[]{1,1.78814e-7,-1.78814e-7,1.5708});
Transform140.setScale(new float[]{0.205889,0.471041,1.20274});
Shape& Shape141 =  Shape();
Appearance& Appearance142 =  Appearance();
Material& Material143 =  Material();
Material143.setDEF(CString("_6"));
Material143.setAmbientIntensity(0.28169);
Material143.setDiffuseColor(new float[]{0.755319,0.755319,0.755319});
Material143.setSpecularColor(new float[]{1,1,1});
Material143.setEmissiveColor(new float[]{0.414894,0.414894,0.414894});
Material143.setShininess(0.159574);
Appearance142.addChild(&Material143);

ImageTexture& ImageTexture144 =  ImageTexture();
ImageTexture144.setDEF(CString("_7"));
ImageTexture144.setUrl(new CString[]{CString("door2.png")}, 1);
Appearance142.addChild(&ImageTexture144);

TextureTransform& TextureTransform145 =  TextureTransform();
TextureTransform145.setRotation(4.71239);
Appearance142.setTextureTransform(TextureTransform145);

Shape141.addChild(&Appearance142);

IndexedFaceSet& IndexedFaceSet146 =  IndexedFaceSet();
IndexedFaceSet146.setCreaseAngle(3.14159);
IndexedFaceSet146.setTexCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
IndexedFaceSet146.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate147 =  TextureCoordinate();
TextureCoordinate147.setPoint(new float[]{0,1,0,0,1,0,1,1}, 8);
IndexedFaceSet146.setTexCoord(&TextureCoordinate147);

Coordinate& Coordinate148 =  Coordinate();
Coordinate148.setPoint(new float[]{-0.1,0.1,-0.1,-0.1,-0.1,-0.1,-0.1,-0.1,0.1,-0.1,0.1,0.1}, 12);
IndexedFaceSet146.setCoord(&Coordinate148);

Shape141.setGeometry(&IndexedFaceSet146);

Transform140.addChild(&Shape141);

Transform133.addChild(&Transform140);

Transform& Transform149 =  Transform();
Transform149.setTranslation(new float[]{-30.574,5.29278,-18.5155});
Transform149.setRotation(new float[]{1,1.78814e-7,-1.78814e-7,1.5708});
Transform149.setScale(new float[]{0.205889,0.471041,1.20731});
Shape& Shape150 =  Shape();
Appearance& Appearance151 =  Appearance();
Material& Material152 =  Material();
Material152.setUSE(CString("_6"));
Appearance151.addChild(&Material152);

ImageTexture& ImageTexture153 =  ImageTexture();
ImageTexture153.setUSE(CString("_7"));
Appearance151.addChild(&ImageTexture153);

TextureTransform& TextureTransform154 =  TextureTransform();
TextureTransform154.setRotation(1.5708);
Appearance151.setTextureTransform(TextureTransform154);

Shape150.addChild(&Appearance151);

IndexedFaceSet& IndexedFaceSet155 =  IndexedFaceSet();
IndexedFaceSet155.setCreaseAngle(3.14159);
IndexedFaceSet155.setTexCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
IndexedFaceSet155.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate156 =  TextureCoordinate();
TextureCoordinate156.setPoint(new float[]{0,1,0,0,1,0,1,1}, 8);
IndexedFaceSet155.setTexCoord(&TextureCoordinate156);

Coordinate& Coordinate157 =  Coordinate();
Coordinate157.setPoint(new float[]{0.1,0.1,0.1,0.1,-0.1,0.1,0.1,-0.1,-0.1,0.1,0.1,-0.1}, 12);
IndexedFaceSet155.setCoord(&Coordinate157);

Shape150.setGeometry(&IndexedFaceSet155);

Transform149.addChild(&Shape150);

Transform133.addChild(&Transform149);

Transform123.addChild(&Transform133);

Transform& Transform158 =  Transform();
Transform158.setDEF(CString("Tuer_brett"));
Transform158.setTranslation(new float[]{-29.5192,5.4317,-19.2538});
Transform158.setRotation(new float[]{0,-1,0,1.5708});
Transform158.setScale(new float[]{0.424754,1.08903,0.0165043});
Transform158.setCenter(new float[]{-1.0035,-0.00275892,-0.00000153935});
Shape& Shape159 =  Shape();
Appearance& Appearance160 =  Appearance();
Material& Material161 =  Material();
Material161.setAmbientIntensity(1.2234);
Material161.setEmissiveColor(new float[]{0.404255,0.404255,0.404255});
Material161.setShininess(0);
Appearance160.addChild(&Material161);

ImageTexture& ImageTexture162 =  ImageTexture();
ImageTexture162.setUrl(new CString[]{CString("door1.png")}, 1);
Appearance160.addChild(&ImageTexture162);

TextureTransform& TextureTransform163 =  TextureTransform();
TextureTransform163.setScale(new float[]{1.4,1});
Appearance160.setTextureTransform(TextureTransform163);

Shape159.addChild(&Appearance160);

Box& Box164 =  Box();
Shape159.setGeometry(&Box164);

Transform158.addChild(&Shape159);

Transform123.addChild(&Transform158);

Sound& Sound165 =  Sound();
Sound165.setDEF(CString("Sound1"));
Sound165.setLocation(new float[]{-30.5078,5.43195,-18.8276});
AudioClip& AudioClip166 =  AudioClip();
AudioClip166.setDEF(CString("door_snd"));
AudioClip166.setDescription(CString("Start mit Trklick"));
AudioClip166.setUrl(new CString[]{CString("door_snd.aiff")}, 1);
Sound165.setSource(AudioClip166);

Transform123.addChild(&Sound165);

Group110.addChild(&Transform123);

Transform108.addChild(&Group110);

Transform106.addChild(&Transform108);

Transform& Transform167 =  Transform();
Transform167.setTranslation(new float[]{-33.5061,5.21267,-19.4389});
Transform167.setRotation(new float[]{7.40586e-7,1,-1.96688e-8,1.5708});
Transform167.setScale(new float[]{0.99999,0.73628,0.999991});
Shape& Shape168 =  Shape();
Appearance& Appearance169 =  Appearance();
Material& Material170 =  Material();
Material170.setAmbientIntensity(0);
Material170.setDiffuseColor(new float[]{1,0,0.0662079});
Material170.setShininess(0);
Material170.setTransparency(1);
Appearance169.addChild(&Material170);

Shape168.addChild(&Appearance169);

IndexedFaceSet& IndexedFaceSet171 =  IndexedFaceSet();
IndexedFaceSet171.setSolid(False);
IndexedFaceSet171.setCreaseAngle(0.5);
IndexedFaceSet171.setCoordIndex(new int32_t[]{2,3,5,4,-1,6,1,0,7,-1,4,5,9,8,-1,10,11,13,12,-1,6,7,15,14,-1,15,12,13,14,-1,16,11,10,17,-1,8,9,18,19,-1,18,16,17,19,-1,2,3,21,20,-1,20,21,23,22,-1,22,23,25,24,-1,0,1,27,26,-1}, 65);
Coordinate& Coordinate172 =  Coordinate();
Coordinate172.setPoint(new float[]{-0.927662,0.302864,1.0087,-0.927662,-1.00034,1.00871,-0.194948,0.30256,0.944056,-0.194948,-1.00065,0.944059,1.28228,0.303206,0.28828,1.28228,-1,0.288283,-0.923214,-1.01562,-0.186603,-0.923214,0.287587,-0.186598,4.12216,0.303206,0.288283,4.12216,-0.999999,0.288286,4.03333,0.303204,-3.32709,4.03333,-1,-3.32708,-0.0262551,0.303204,-3.32709,-0.0262551,-1,-3.32709,-0.518105,-1.00232,-2.86161,-0.520148,0.300822,-2.84812,4.53818,-1,-2.96061,4.53818,0.303205,-2.96061,4.53818,-0.999999,0.00556704,4.53818,0.303206,0.00556183,-0.194948,0.30256,1.03695,-0.194948,-1.00065,1.03696,-0.00349981,0.30256,1.14149,-0.00349984,-1.00065,1.1415,0.493674,0.30256,0.999392,0.493674,-1.00065,0.999394,-1.15724,0.302864,1.18947,-1.15724,-1.00034,1.18947}, 84);
IndexedFaceSet171.setCoord(&Coordinate172);

Shape168.setGeometry(&IndexedFaceSet171);

Transform167.addChild(&Shape168);

Transform106.addChild(&Transform167);

Transform& Transform173 =  Transform();
Transform173.setTranslation(new float[]{-38.322,-46.8986,-28.2243});
Transform173.setRotation(new float[]{-1,0,0,1.5708});
Transform173.setScale(new float[]{0.999996,1.00004,0.644774});
Transform173.setCenter(new float[]{3.2464,52.8039,6.57235});
Shape& Shape174 =  Shape();
Appearance& Appearance175 =  Appearance();
Material& Material176 =  Material();
Material176.setAmbientIntensity(0.87234);
Material176.setDiffuseColor(new float[]{1,1,1});
Material176.setShininess(0);
Appearance175.addChild(&Material176);

Shape174.addChild(&Appearance175);

IndexedFaceSet& IndexedFaceSet177 =  IndexedFaceSet();
IndexedFaceSet177.setSolid(False);
IndexedFaceSet177.setCreaseAngle(6.28319);
IndexedFaceSet177.setColorIndex(new int[]{0,0,0,0,0,-1,0,0,0,0,-1,0,2,0,0,0,-1,1,1,1,1,-1,1,3,4,1,-1,3,0,0,4,-1,3,1,1,3,-1,4,3,3,4,-1,1,4,4,1,-1,1,0,0,1,-1,0,7,7,0,-1,6,1,1,5,-1,1,6,7,6,-1,1,1,1,1,-1,5,1,1,7,-1,6,5,7,7,-1}, 82);
IndexedFaceSet177.setCoordIndex(new int32_t[]{11,8,12,3,0,-1,8,9,13,12,-1,13,9,10,4,7,-1,14,15,16,17,-1,20,21,22,23,-1,18,7,4,19,-1,21,20,6,18,-1,22,21,18,19,-1,23,22,19,5,-1,20,23,5,6,-1,0,25,24,3,-1,27,26,28,29,-1,26,27,25,1,-1,28,26,1,2,-1,29,28,2,24,-1,27,29,24,25,-1}, 82);
CColor& Color178 =  CColor();
Color178.setColor(new float[]{1,1,1,0,0,0,0.882353,0.882353,0.882353,0.12625,0.12625,0.12625,0.126249,0.126249,0.126249,0.0985277,0.0985277,0.0985277,0.0985258,0.0985258,0.0985258,0.518717,0.518717,0.518717}, 24);
IndexedFaceSet177.setColor(&Color178);

Coordinate& Coordinate179 =  Coordinate();
Coordinate179.setPoint(new float[]{5.82208,49.3305,4.13362,0.621844,49.3305,4.13363,0.621844,49.3305,9.28265,5.82208,49.3305,9.28263,5.82208,55.8416,4.13362,0.621803,55.8416,4.13363,0.621803,55.8416,9.28265,5.82208,55.8416,9.28263,5.82207,49.5612,7.55508,5.82207,50.4612,7.55508,5.82207,50.4612,4.13347,5.82207,49.5612,4.13347,5.82208,49.5612,9.28245,5.82208,50.4612,9.28245,0.923931,55.8416,7.76282,0.923931,55.8416,9.28265,0.923972,49.3305,9.28265,0.923972,49.3305,7.76283,1.13345,55.8416,9.28265,1.13345,55.8416,4.13363,0.621804,55.7132,9.28265,1.13345,55.7132,9.28265,1.13345,55.7132,4.13363,0.621804,55.7132,4.13363,1.13421,49.3305,9.28265,1.1342,49.3305,4.13363,0.621843,49.4307,4.13363,1.1342,49.4307,4.13363,0.621843,49.4307,9.28265,1.13421,49.4307,9.28265}, 90);
IndexedFaceSet177.setCoord(&Coordinate179);

Shape174.setGeometry(&IndexedFaceSet177);

Transform173.addChild(&Shape174);

Transform106.addChild(&Transform173);

Transform& Transform180 =  Transform();
Transform180.setTranslation(new float[]{-38.0198,-46.8986,-28.2243});
Transform180.setRotation(new float[]{-1,0,0,1.5708});
Transform180.setScale(new float[]{0.999996,1.00004,0.644774});
Transform180.setCenter(new float[]{3.2464,52.8039,6.57235});
Shape& Shape181 =  Shape();
Appearance& Appearance182 =  Appearance();
Material& Material183 =  Material();
Material183.setAmbientIntensity(0);
Material183.setDiffuseColor(new float[]{0,0,0});
Material183.setSpecularColor(new float[]{1,1,1});
Material183.setEmissiveColor(new float[]{0.0744681,0.0744681,0.0744681});
Appearance182.addChild(&Material183);

Shape181.addChild(&Appearance182);

IndexedFaceSet& IndexedFaceSet184 =  IndexedFaceSet();
IndexedFaceSet184.setSolid(False);
IndexedFaceSet184.setCreaseAngle(6.28319);
IndexedFaceSet184.setColorPerVertex(False);
IndexedFaceSet184.setCoordIndex(new int32_t[]{1,14,16,18,15,0,-1,14,12,17,16,-1,19,13,15,18,-1,13,19,17,12,20,22,24,21,-1,20,4,23,22,-1,25,5,21,24,-1,6,8,27,26,-1,10,3,29,34,28,-1,31,9,7,30,-1,35,33,2,11,32,-1,29,33,35,34,-1,28,32,37,36,-1,26,30,41,40,-1,28,32,45,44,-1,32,35,46,45,-1,28,34,47,44,-1,34,35,46,47,-1,27,31,49,48,-1,26,27,48,50,-1,26,30,51,50,-1,30,31,49,51,-1,23,25,53,52,-1,22,23,52,54,-1,22,24,55,54,-1,24,25,53,55,-1,17,19,57,56,-1,16,17,56,58,-1,16,18,59,58,-1,18,19,57,59,-1,61,60,37,39,-1,62,61,39,38,-1,63,62,38,36,-1,60,63,36,37,-1,65,64,41,43,-1,66,65,43,42,-1,67,66,42,40,-1,64,67,40,41,-1,68,10,28,36,38,-1,39,37,32,11,69,-1,27,8,70,71,9,31,-1,70,68,38,39,69,71,-1,70,71,73,72,-1,74,6,26,40,42,-1,43,41,30,7,75,-1,23,4,77,76,5,25,-1,77,74,42,43,75,76,-1,76,77,79,78,-1}, 255);
Coordinate& Coordinate185 =  Coordinate();
Coordinate185.setPoint(new float[]{0.328066,54.9703,5.56618,0.328066,54.9703,7.76283,0.328096,50.2337,5.56617,0.328096,50.2337,7.76283,0.328077,53.1654,7.76283,0.328077,53.1654,5.56618,0.328081,52.5646,7.76283,0.328081,52.5646,5.56617,0.328088,51.5549,7.76283,0.328088,51.5549,5.56617,0.328091,50.9717,7.76283,0.328091,50.9717,5.56617,0.32807,54.3434,7.76283,0.32807,54.3435,5.56618,0.328066,54.9155,7.76283,0.328066,54.9155,5.56618,0.328066,54.9155,7.65458,0.32807,54.3434,7.65458,0.328066,54.9155,5.68417,0.32807,54.3435,5.68417,0.328071,54.2163,7.76283,0.328071,54.2163,5.56618,0.328071,54.2163,7.66719,0.328077,53.1654,7.66719,0.328071,54.2163,5.6512,0.328077,53.1654,5.6512,0.328081,52.5646,7.66718,0.328088,51.5549,7.66718,0.328091,50.9717,7.66718,0.328096,50.2337,7.66718,0.328081,52.5646,5.6512,0.328088,51.5549,5.6512,0.328091,50.9717,5.6512,0.328096,50.2337,5.6512,0.328096,50.2785,7.66718,0.328096,50.2785,5.6512,0.32809,51.1121,7.66718,0.32809,51.1121,5.6512,0.328089,51.3974,7.66718,0.328089,51.3974,5.6512,0.32808,52.6977,7.66718,0.32808,52.6977,5.6512,0.328078,53.0168,7.66718,0.328078,53.0168,5.6512,0.264742,50.9717,7.66718,0.264742,50.9717,5.6512,0.264747,50.2785,5.6512,0.264747,50.2785,7.66718,0.264739,51.5549,7.66718,0.264739,51.5549,5.6512,0.264732,52.5646,7.66718,0.264732,52.5646,5.6512,0.264728,53.1654,7.66719,0.264728,53.1654,5.6512,0.264722,54.2163,7.66719,0.264722,54.2163,5.6512,0.264721,54.3434,7.65458,0.264721,54.3435,5.68417,0.264717,54.9155,7.65458,0.264717,54.9155,5.68417,0.2647,51.1121,5.6512,0.264698,51.3974,5.6512,0.264698,51.3974,7.66718,0.2647,51.1121,7.66718,0.26469,52.6977,5.6512,0.264688,53.0168,5.6512,0.264688,53.0168,7.66718,0.26469,52.6977,7.66718,0.328089,51.3974,7.76283,0.328089,51.3974,5.56617,0.328088,51.4762,7.76283,0.328088,51.4762,5.56617,0.670995,51.4762,7.76283,0.670995,51.4762,5.56617,0.328078,53.0168,7.76283,0.328078,53.0168,5.56618,0.328077,53.0911,5.56618,0.328077,53.0911,7.76283,0.671078,53.0911,5.56618,0.671077,53.0911,7.76283}, 240);
IndexedFaceSet184.setCoord(&Coordinate185);

Shape181.setGeometry(&IndexedFaceSet184);

Transform180.addChild(&Shape181);

Transform106.addChild(&Transform180);

Transform& Transform186 =  Transform();
Transform186.setTranslation(new float[]{-38.0198,-46.8986,-28.2243});
Transform186.setRotation(new float[]{-1,0,0,1.5708});
Transform186.setScale(new float[]{0.999996,1.00004,0.644774});
Transform186.setCenter(new float[]{3.2464,52.8039,6.57235});
Shape& Shape187 =  Shape();
Appearance& Appearance188 =  Appearance();
Material& Material189 =  Material();
Material189.setAmbientIntensity(0);
Material189.setDiffuseColor(new float[]{1,0.765351,0.53099});
Material189.setEmissiveColor(new float[]{0.351064,0.268687,0.186411});
Appearance188.addChild(&Material189);

ImageTexture& ImageTexture190 =  ImageTexture();
ImageTexture190.setDEF(CString("_8"));
ImageTexture190.setUrl(new CString[]{CString("fensterbank1.png")}, 1);
Appearance188.addChild(&ImageTexture190);

Shape187.addChild(&Appearance188);

IndexedFaceSet& IndexedFaceSet191 =  IndexedFaceSet();
IndexedFaceSet191.setSolid(False);
IndexedFaceSet191.setCreaseAngle(6.28319);
IndexedFaceSet191.setColorPerVertex(False);
IndexedFaceSet191.setTexCoordIndex(new int32_t[]{8,9,10,11,-1,3,1,0,2,-1,4,5,6,7,-1}, 15);
IndexedFaceSet191.setCoordIndex(new int32_t[]{0,1,2,3,-1,5,1,0,4,-1,4,5,6,7,-1}, 15);
TextureCoordinate& TextureCoordinate192 =  TextureCoordinate();
TextureCoordinate192.setPoint(new float[]{0.999566,0.188156,-0.998885,0.179163,0.999793,0.0340796,-0.996944,0.0000335384,0.999996,0.999977,1,0,-0.999979,0.000114637,-0.999996,0.999962,0.994656,0.423605,1,0,-0.986276,0,-0.991619,0.423605}, 24);
IndexedFaceSet191.setTexCoord(&TextureCoordinate192);

Coordinate& Coordinate193 =  Coordinate();
Coordinate193.setPoint(new float[]{0.703425,55.8416,5.47942,0.703466,49.3305,5.47943,0.621844,49.3305,5.47943,0.621803,55.8416,5.47942,0.703425,55.8416,5.56618,0.703466,49.3305,5.56617,0.328102,49.3305,5.56617,0.328061,55.8416,5.56618}, 24);
IndexedFaceSet191.setCoord(&Coordinate193);

Shape187.setGeometry(&IndexedFaceSet191);

Transform186.addChild(&Shape187);

Transform106.addChild(&Transform186);

Transform& Transform194 =  Transform();
Transform194.setTranslation(new float[]{-38.0198,-46.0424,-27.1903});
Transform194.setRotation(new float[]{1,0,0,1.5708});
Transform194.setScale(new float[]{0.999996,1.00004,0.644772});
Transform194.setCenter(new float[]{0.810186,52.5713,5.77103});
Shape& Shape195 =  Shape();
Appearance& Appearance196 =  Appearance();
Material& Material197 =  Material();
Material197.setAmbientIntensity(0);
Material197.setDiffuseColor(new float[]{1,0.765351,0.53099});
Material197.setEmissiveColor(new float[]{0.351064,0.268687,0.186411});
Appearance196.addChild(&Material197);

ImageTexture& ImageTexture198 =  ImageTexture();
ImageTexture198.setUSE(CString("_8"));
Appearance196.addChild(&ImageTexture198);

Shape195.addChild(&Appearance196);

IndexedFaceSet& IndexedFaceSet199 =  IndexedFaceSet();
IndexedFaceSet199.setSolid(False);
IndexedFaceSet199.setCreaseAngle(6.28319);
IndexedFaceSet199.setColorPerVertex(False);
IndexedFaceSet199.setTexCoordIndex(new int32_t[]{8,9,10,11,-1,3,1,0,2,-1,4,5,6,7,-1}, 15);
IndexedFaceSet199.setCoordIndex(new int32_t[]{0,1,2,3,-1,5,1,0,4,-1,4,5,6,7,-1}, 15);
TextureCoordinate& TextureCoordinate200 =  TextureCoordinate();
TextureCoordinate200.setPoint(new float[]{0.999566,0.188156,-0.998885,0.179163,0.999793,0.0340796,-0.996944,0.0000335384,0.999996,0.999977,1,0,-0.999979,0.000114637,-0.999996,0.999962,0.994656,0.423605,1,0,-0.986276,0,-0.991619,0.423605}, 24);
IndexedFaceSet199.setTexCoord(&TextureCoordinate200);

Coordinate& Coordinate201 =  Coordinate();
Coordinate201.setPoint(new float[]{0.703425,55.8416,5.47942,0.703466,49.3305,5.47943,0.621844,49.3305,5.47943,0.621803,55.8416,5.47942,0.703425,55.8416,5.56618,0.703466,49.3305,5.56617,0.328102,49.3305,5.56617,0.328061,55.8416,5.56618}, 24);
IndexedFaceSet199.setCoord(&Coordinate201);

Shape195.setGeometry(&IndexedFaceSet199);

Transform194.addChild(&Shape195);

Transform106.addChild(&Transform194);

Transform& Transform202 =  Transform();
Transform202.setTranslation(new float[]{0,0.531492,0.414537});
Transform202.setScale(new float[]{1,0.879727,1});
Transform& Transform203 =  Transform();
Transform203.setTranslation(new float[]{-37.3016,4.7683,-21.6967});
Transform203.setRotation(new float[]{0.00000121981,1,-5.13265e-8,1.5708});
Transform203.setScale(new float[]{0.702315,0.349258,0.0535702});
Shape& Shape204 =  Shape();
Appearance& Appearance205 =  Appearance();
Material& Material206 =  Material();
Material206.setDEF(CString("_9"));
Material206.setAmbientIntensity(0.340426);
Material206.setDiffuseColor(new float[]{1,1,1});
Material206.setEmissiveColor(new float[]{0.468085,0.468085,0.468085});
Appearance205.addChild(&Material206);

ImageTexture& ImageTexture207 =  ImageTexture();
ImageTexture207.setUrl(new CString[]{CString("heiz1.png")}, 1);
Appearance205.addChild(&ImageTexture207);

TextureTransform& TextureTransform208 =  TextureTransform();
TextureTransform208.setScale(new float[]{14.9661,1});
Appearance205.setTextureTransform(TextureTransform208);

Shape204.addChild(&Appearance205);

IndexedFaceSet& IndexedFaceSet209 =  IndexedFaceSet();
IndexedFaceSet209.setCreaseAngle(0.5);
IndexedFaceSet209.setTexCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
IndexedFaceSet209.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate210 =  TextureCoordinate();
TextureCoordinate210.setPoint(new float[]{0,1,0,0,1,0,1,1}, 8);
IndexedFaceSet209.setTexCoord(&TextureCoordinate210);

Coordinate& Coordinate211 =  Coordinate();
Coordinate211.setPoint(new float[]{-1,1,-1,-1,1,1,1,1,1,1,1,-1}, 12);
IndexedFaceSet209.setCoord(&Coordinate211);

Shape204.setGeometry(&IndexedFaceSet209);

Transform203.addChild(&Shape204);

Transform202.addChild(&Transform203);

Transform& Transform212 =  Transform();
Transform212.setTranslation(new float[]{-37.3016,4.7683,-21.6967});
Transform212.setRotation(new float[]{0.00000121981,1,-5.13264e-8,1.5708});
Transform212.setScale(new float[]{0.702315,0.349258,0.0535702});
Shape& Shape213 =  Shape();
Appearance& Appearance214 =  Appearance();
Material& Material215 =  Material();
Material215.setUSE(CString("_9"));
Appearance214.addChild(&Material215);

ImageTexture& ImageTexture216 =  ImageTexture();
ImageTexture216.setUrl(new CString[]{CString("heiz2.png")}, 1);
Appearance214.addChild(&ImageTexture216);

Shape213.addChild(&Appearance214);

IndexedFaceSet& IndexedFaceSet217 =  IndexedFaceSet();
IndexedFaceSet217.setCreaseAngle(0.5);
IndexedFaceSet217.setTexCoordIndex(new int32_t[]{0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1}, 20);
IndexedFaceSet217.setCoordIndex(new int32_t[]{0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1}, 20);
TextureCoordinate& TextureCoordinate218 =  TextureCoordinate();
TextureCoordinate218.setPoint(new float[]{0,1,0.007286,0.00917773,1,1,0.995735,0.00114659}, 8);
IndexedFaceSet217.setTexCoord(&TextureCoordinate218);

Coordinate& Coordinate219 =  Coordinate();
Coordinate219.setPoint(new float[]{-1,1,1,-1,-1,1,1,1,1,1,-1,1,1,1,-1,1,-1,-1,-1,1,-1,-1,-1,-1}, 24);
IndexedFaceSet217.setCoord(&Coordinate219);

Shape213.setGeometry(&IndexedFaceSet217);

Transform212.addChild(&Shape213);

Transform202.addChild(&Transform212);

Transform106.addChild(&Transform202);

Transform& Transform220 =  Transform();
Transform220.setTranslation(new float[]{-38.0198,-46.8986,-28.2243});
Transform220.setRotation(new float[]{-1,0,0,1.5708});
Transform220.setScale(new float[]{0.999996,1.00004,0.644774});
Transform220.setCenter(new float[]{3.2464,52.8039,6.57235});
Shape& Shape221 =  Shape();
Appearance& Appearance222 =  Appearance();
Material& Material223 =  Material();
Material223.setAmbientIntensity(0.744681);
Material223.setDiffuseColor(new float[]{1,1,1});
Material223.setEmissiveColor(new float[]{0.0957447,0.0957447,0.0957447});
Material223.setShininess(0);
Appearance222.addChild(&Material223);

ImageTexture& ImageTexture224 =  ImageTexture();
ImageTexture224.setDEF(CString("_10"));
ImageTexture224.setUrl(new CString[]{CString("wand1.png")}, 1);
Appearance222.addChild(&ImageTexture224);

Shape221.addChild(&Appearance222);

IndexedFaceSet& IndexedFaceSet225 =  IndexedFaceSet();
IndexedFaceSet225.setSolid(False);
IndexedFaceSet225.setCreaseAngle(6.28319);
IndexedFaceSet225.setTexCoordIndex(new int32_t[]{3,2,5,-1,2,1,5,-1,0,4,1,-1,0,3,4,-1}, 16);
IndexedFaceSet225.setCoordIndex(new int32_t[]{3,2,4,-1,2,1,4,-1,0,4,1,-1,0,3,4,-1}, 16);
TextureCoordinate& TextureCoordinate226 =  TextureCoordinate();
TextureCoordinate226.setPoint(new float[]{-0.259639,1.98959,-0.982079,1.99205,-0.982079,1.00057,-0.259639,1.00057,-0.620859,1.49631,-0.620859,1.49631}, 12);
IndexedFaceSet225.setTexCoord(&TextureCoordinate226);

Coordinate& Coordinate227 =  Coordinate();
Coordinate227.setPoint(new float[]{0.621844,49.3305,5.47943,0.621803,55.8416,5.47942,0.621803,55.8416,5.20329,0.621844,49.3305,5.2033,0.621823,52.586,5.34136}, 15);
IndexedFaceSet225.setCoord(&Coordinate227);

Shape221.setGeometry(&IndexedFaceSet225);

Transform220.addChild(&Shape221);

Transform106.addChild(&Transform220);

Transform& Transform228 =  Transform();
Transform228.setTranslation(new float[]{-38.0198,-46.8986,-28.2243});
Transform228.setRotation(new float[]{-1,0,0,1.5708});
Transform228.setScale(new float[]{0.999996,1.00004,0.644774});
Transform228.setCenter(new float[]{3.2464,52.8039,6.57235});
Shape& Shape229 =  Shape();
Appearance& Appearance230 =  Appearance();
Material& Material231 =  Material();
Material231.setAmbientIntensity(1);
Material231.setDiffuseColor(new float[]{1,1,1});
Material231.setEmissiveColor(new float[]{0.0851064,0.0851064,0.0851064});
Material231.setShininess(0);
Appearance230.addChild(&Material231);

ImageTexture& ImageTexture232 =  ImageTexture();
ImageTexture232.setUSE(CString("_10"));
Appearance230.addChild(&ImageTexture232);

Shape229.addChild(&Appearance230);

IndexedFaceSet& IndexedFaceSet233 =  IndexedFaceSet();
IndexedFaceSet233.setSolid(False);
IndexedFaceSet233.setCreaseAngle(6.28319);
IndexedFaceSet233.setColorPerVertex(False);
IndexedFaceSet233.setTexCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
IndexedFaceSet233.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate234 =  TextureCoordinate();
TextureCoordinate234.setPoint(new float[]{-0.828988,1.73507,-0.841187,1.33438,-0.046233,1.33246,-0.0484878,1.73507}, 8);
IndexedFaceSet233.setTexCoord(&TextureCoordinate234);

Coordinate& Coordinate235 =  Coordinate();
Coordinate235.setPoint(new float[]{0.621844,49.3305,5.2033,0.621844,49.3305,4.13363,0.621803,55.8416,4.13363,0.621803,55.8416,5.20329}, 12);
IndexedFaceSet233.setCoord(&Coordinate235);

Shape229.setGeometry(&IndexedFaceSet233);

Transform228.addChild(&Shape229);

Transform106.addChild(&Transform228);

Transform& Transform236 =  Transform();
Transform236.setTranslation(new float[]{17.3908,-2.38265,10.1835});
Transform236.setScale(new float[]{1.46504,1.4649,1.46488});
Transform& Transform237 =  Transform();
Transform237.setTranslation(new float[]{-37.4314,5.11772,-20.724});
Transform237.setRotation(new float[]{0.577347,0.577352,-0.577352,2.0944});
Transform237.setScale(new float[]{0.0366491,0.036936,0.0370194});
Transform237.setScaleOrientation(new float[]{0.00457305,0.435849,-0.900008,0.00371864});
Shape& Shape238 =  Shape();
Appearance& Appearance239 =  Appearance();
Material& Material240 =  Material();
Material240.setDEF(CString("_11"));
Material240.setAmbientIntensity(0.340426);
Material240.setDiffuseColor(new float[]{1,1,1});
Material240.setEmissiveColor(new float[]{0.43617,0.43617,0.43617});
Appearance239.addChild(&Material240);

ImageTexture& ImageTexture241 =  ImageTexture();
ImageTexture241.setUSE(CString("_2"));
Appearance239.addChild(&ImageTexture241);

TextureTransform& TextureTransform242 =  TextureTransform();
Appearance239.setTextureTransform(TextureTransform242);

Shape238.addChild(&Appearance239);

IndexedFaceSet& IndexedFaceSet243 =  IndexedFaceSet();
IndexedFaceSet243.setCreaseAngle(0.5);
IndexedFaceSet243.setTexCoordIndex(new int32_t[]{0,1,3,2,-1}, 5);
IndexedFaceSet243.setCoordIndex(new int32_t[]{3,0,1,2,-1}, 5);
TextureCoordinate& TextureCoordinate244 =  TextureCoordinate();
TextureCoordinate244.setPoint(new float[]{0,1,0,0,1,1,1,0}, 8);
IndexedFaceSet243.setTexCoord(&TextureCoordinate244);

Coordinate& Coordinate245 =  Coordinate();
Coordinate245.setPoint(new float[]{-1,1,1,1,1,1,1,1,-1,-1,1,-1}, 12);
IndexedFaceSet243.setCoord(&Coordinate245);

Shape238.setGeometry(&IndexedFaceSet243);

Transform237.addChild(&Shape238);

Transform236.addChild(&Transform237);

Transform& Transform246 =  Transform();
Transform246.setTranslation(new float[]{-37.4319,5.118,-20.9288});
Transform246.setRotation(new float[]{-0.577347,-0.577352,0.577352,4.18879});
Transform246.setScale(new float[]{0.111058,0.0369361,0.0370194});
Transform246.setScaleOrientation(new float[]{-0.0167827,0.438953,-0.898353,0.00371864});
Shape& Shape247 =  Shape();
Appearance& Appearance248 =  Appearance();
Material& Material249 =  Material();
Material249.setUSE(CString("_11"));
Appearance248.addChild(&Material249);

ImageTexture& ImageTexture250 =  ImageTexture();
ImageTexture250.setUSE(CString("_3"));
Appearance248.addChild(&ImageTexture250);

TextureTransform& TextureTransform251 =  TextureTransform();
TextureTransform251.setScale(new float[]{3,1});
Appearance248.setTextureTransform(TextureTransform251);

Shape247.addChild(&Appearance248);

IndexedFaceSet& IndexedFaceSet252 =  IndexedFaceSet();
IndexedFaceSet252.setCreaseAngle(0.5);
IndexedFaceSet252.setTexCoordIndex(new int32_t[]{0,1,3,2,-1}, 5);
IndexedFaceSet252.setCoordIndex(new int32_t[]{3,0,1,2,-1}, 5);
TextureCoordinate& TextureCoordinate253 =  TextureCoordinate();
TextureCoordinate253.setPoint(new float[]{0,1,0,0,1,1,1,0}, 8);
IndexedFaceSet252.setTexCoord(&TextureCoordinate253);

Coordinate& Coordinate254 =  Coordinate();
Coordinate254.setPoint(new float[]{-1,1,1,1,1,1,1,1,-1,-1,1,-1}, 12);
IndexedFaceSet252.setCoord(&Coordinate254);

Shape247.setGeometry(&IndexedFaceSet252);

Transform246.addChild(&Shape247);

Transform236.addChild(&Transform246);

Transform106.addChild(&Transform236);

Transform& Transform255 =  Transform();
Transform255.setTranslation(new float[]{-38.322,-46.907,-28.2243});
Transform255.setRotation(new float[]{1,0,0,4.71239});
Transform255.setScale(new float[]{0.999996,1.00004,0.644775});
Transform255.setCenter(new float[]{3.2464,52.8039,6.57235});
Shape& Shape256 =  Shape();
Appearance& Appearance257 =  Appearance();
Material& Material258 =  Material();
Material258.setAmbientIntensity(0);
Material258.setDiffuseColor(new float[]{1,0.707408,0.632231});
Material258.setShininess(0);
Appearance257.addChild(&Material258);

ImageTexture& ImageTexture259 =  ImageTexture();
ImageTexture259.setUrl(new CString[]{CString("granite.4.png")}, 1);
Appearance257.addChild(&ImageTexture259);

TextureTransform& TextureTransform260 =  TextureTransform();
TextureTransform260.setScale(new float[]{5,5});
Appearance257.setTextureTransform(TextureTransform260);

Shape256.addChild(&Appearance257);

IndexedFaceSet& IndexedFaceSet261 =  IndexedFaceSet();
IndexedFaceSet261.setSolid(False);
IndexedFaceSet261.setCreaseAngle(6.28319);
IndexedFaceSet261.setColorPerVertex(False);
IndexedFaceSet261.setTexCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
IndexedFaceSet261.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate262 =  TextureCoordinate();
TextureCoordinate262.setPoint(new float[]{0.011835,0,0,0.929035,0.97633,0.946787,1,0}, 8);
IndexedFaceSet261.setTexCoord(&TextureCoordinate262);

Coordinate& Coordinate263 =  Coordinate();
Coordinate263.setPoint(new float[]{0.621844,49.3305,4.13363,5.82208,49.3305,4.13362,5.82208,55.8416,4.13362,0.621803,55.8416,4.13363}, 12);
IndexedFaceSet261.setCoord(&Coordinate263);

Shape256.setGeometry(&IndexedFaceSet261);

Transform255.addChild(&Shape256);

Transform106.addChild(&Transform255);

Transform& Transform264 =  Transform();
Transform264.setTranslation(new float[]{-38.322,-46.8986,-28.2243});
Transform264.setRotation(new float[]{-1,0,0,1.5708});
Transform264.setScale(new float[]{0.999996,1.00004,0.644775});
Transform264.setCenter(new float[]{3.2464,52.8039,6.57235});
Shape& Shape265 =  Shape();
Appearance& Appearance266 =  Appearance();
Material& Material267 =  Material();
Material267.setAmbientIntensity(0.478723);
Material267.setDiffuseColor(new float[]{1,1,1});
Material267.setEmissiveColor(new float[]{0.0425532,0.0425532,0.0425532});
Appearance266.addChild(&Material267);

Shape265.addChild(&Appearance266);

IndexedFaceSet& IndexedFaceSet268 =  IndexedFaceSet();
IndexedFaceSet268.setSolid(False);
IndexedFaceSet268.setCreaseAngle(6.28319);
IndexedFaceSet268.setCoordIndex(new int32_t[]{0,1,2,3,-1,4,5,6,7,-1}, 10);
Coordinate& Coordinate269 =  Coordinate();
Coordinate269.setPoint(new float[]{0.630224,50.2337,7.76282,0.63023,49.3305,7.76282,0.63023,49.3305,5.56617,0.630224,50.2337,5.56617,0.630189,55.8416,7.76282,0.630194,54.9703,7.76282,0.630194,54.9703,5.56618,0.630189,55.8416,5.56618}, 24);
IndexedFaceSet268.setCoord(&Coordinate269);

Shape265.setGeometry(&IndexedFaceSet268);

Transform264.addChild(&Shape265);

Transform106.addChild(&Transform264);

Scene8.addChild(&Transform106);

Transform& Transform270 =  Transform();
Transform& Transform271 =  Transform();
Transform271.setDEF(CString("Door_left"));
Transform271.setTranslation(new float[]{-0.0000267029,-0.00000333786,-0.0000152588});
Transform271.setScale(new float[]{1,0.999999,1});
Transform271.setCenter(new float[]{-32.4999,5.38476,-17.9887});
Group& Group272 =  Group();
Group272.setDEF(CString("door_pivot_left"));
Group& Group273 =  Group();
Group273.setDEF(CString("open_door_left"));
TimeSensor& TimeSensor274 =  TimeSensor();
TimeSensor274.setDEF(CString("Time_2"));
TimeSensor274.setCycleInterval(10);
TimeSensor274.setStopTime(1);
Group273.addChild(&TimeSensor274);

Group272.addChild(&Group273);

OrientationInterpolator& OrientationInterpolator275 =  OrientationInterpolator();
OrientationInterpolator275.setDEF(CString("UnnamedTransformRotationInterp_2"));
OrientationInterpolator275.setKey(new float[]{0,0.1,0.9,1}, 4);
OrientationInterpolator275.setKeyValue(new float[]{0,0,1,0,0,1,0,4.56713,0,1,0,4.56713,0,0,1,0}, 16);
Group272.addChild(&OrientationInterpolator275);

Transform271.addChild(&Group272);

TouchSensor& TouchSensor276 =  TouchSensor();
TouchSensor276.setDEF(CString("Touch_2"));
Transform271.addChild(&TouchSensor276);

Transform270.addChild(&Transform271);

Transform& Transform277 =  Transform();
Transform277.setDEF(CString("Door_right"));
Transform277.setScale(new float[]{1,0.999999,1});
Transform277.setCenter(new float[]{-32.4999,5.44308,-18.4041});
Group& Group278 =  Group();
Group278.setDEF(CString("door_pivot_right"));
Group& Group279 =  Group();
Group279.setDEF(CString("open_door_right"));
TimeSensor& TimeSensor280 =  TimeSensor();
TimeSensor280.setDEF(CString("Time_3"));
TimeSensor280.setCycleInterval(10);
TimeSensor280.setStopTime(1);
Group279.addChild(&TimeSensor280);

Group278.addChild(&Group279);

OrientationInterpolator& OrientationInterpolator281 =  OrientationInterpolator();
OrientationInterpolator281.setDEF(CString("UnnamedTransformRotationInterp_3"));
OrientationInterpolator281.setKey(new float[]{0,0.1,0.9,1}, 4);
OrientationInterpolator281.setKeyValue(new float[]{0,0,1,0,0,1,0,1.73405,0,1,0,1.73405,0,0,1,0}, 16);
Group278.addChild(&OrientationInterpolator281);

PositionInterpolator& PositionInterpolator282 =  PositionInterpolator();
PositionInterpolator282.setDEF(CString("UnnamedTransformTranslationInterp_2"));
PositionInterpolator282.setKey(new float[]{0,0.1,0.9,1}, 4);
PositionInterpolator282.setKeyValue(new float[]{0,0,0,-0.0000038147,-0.00000429153,-0.0000305176,-0.0000038147,-0.00000429153,-0.0000305176,0,0,0}, 12);
Group278.addChild(&PositionInterpolator282);

Transform277.addChild(&Group278);

TouchSensor& TouchSensor283 =  TouchSensor();
TouchSensor283.setDEF(CString("Touch_3"));
Transform277.addChild(&TouchSensor283);

Transform270.addChild(&Transform277);

Transform& Transform284 =  Transform();
Transform284.setTranslation(new float[]{-38.0598,-46.6611,-27.9868});
Transform284.setRotation(new float[]{1,0,0,4.71239});
Transform284.setScale(new float[]{0.999996,1.00004,0.644773});
Transform284.setCenter(new float[]{0.324794,52.5664,6.57235});
Shape& Shape285 =  Shape();
Appearance& Appearance286 =  Appearance();
Material& Material287 =  Material();
Material287.setAmbientIntensity(0);
Material287.setDiffuseColor(new float[]{1,1,1});
Material287.setEmissiveColor(new float[]{0.457447,0.457447,0.457447});
Material287.setShininess(0.170213);
Material287.setTransparency(0.734043);
Appearance286.addChild(&Material287);

ImageTexture& ImageTexture288 =  ImageTexture();
ImageTexture288.setUrl(new CString[]{CString("aussenwand1.png")}, 1);
Appearance286.addChild(&ImageTexture288);

Shape285.addChild(&Appearance286);

IndexedFaceSet& IndexedFaceSet289 =  IndexedFaceSet();
IndexedFaceSet289.setSolid(False);
IndexedFaceSet289.setCreaseAngle(6.28319);
IndexedFaceSet289.setColorPerVertex(False);
IndexedFaceSet289.setTexCoordIndex(new int32_t[]{0,1,2,3,-1,4,5,6,7,-1,8,9,10,11,-1,12,13,14,15,-1}, 20);
IndexedFaceSet289.setCoordIndex(new int32_t[]{0,1,2,3,-1,4,5,6,7,-1,8,9,10,11,-1,12,13,14,15,-1}, 20);
TextureCoordinate& TextureCoordinate290 =  TextureCoordinate();
TextureCoordinate290.setPoint(new float[]{0.145627,1.29477,0.252078,1.29478,0.252083,1.68625,0.145633,1.68626,0.769876,1.68378,0.769875,1.30121,0.857726,1.30122,0.857728,1.68377,0.588961,1.68623,0.588958,1.2948,0.750353,1.29481,0.750355,1.68623,0.341649,1.68625,0.341644,1.29478,0.496697,1.29479,0.496701,1.68624}, 32);
IndexedFaceSet289.setTexCoord(&TextureCoordinate290);

Coordinate& Coordinate291 =  Coordinate();
Coordinate291.setPoint(new float[]{0.328096,50.2785,5.6512,0.328091,50.9717,5.6512,0.328091,50.9717,7.66718,0.328096,50.2785,7.66718,0.32807,54.3435,7.65458,0.32807,54.3435,5.68417,0.328066,54.9155,5.68417,0.328066,54.9155,7.65458,0.328077,53.1654,7.66719,0.328077,53.1654,5.6512,0.328071,54.2163,5.65121,0.328071,54.2163,7.66719,0.328088,51.5549,7.66718,0.328088,51.5549,5.6512,0.328081,52.5646,5.6512,0.328081,52.5646,7.66718}, 48);
IndexedFaceSet289.setCoord(&Coordinate291);

Shape285.setGeometry(&IndexedFaceSet289);

Transform284.addChild(&Shape285);

Transform270.addChild(&Transform284);

Transform& Transform292 =  Transform();
Transform292.setDEF(CString("_12"));
Transform292.setTranslation(new float[]{-38.0328,-46.6611,-27.9868});
Transform292.setRotation(new float[]{-1,0,0,1.5708});
Transform292.setScale(new float[]{0.999996,1.00004,0.644773});
Transform292.setCenter(new float[]{0.324794,52.5664,6.57235});
TouchSensor& TouchSensor293 =  TouchSensor();
TouchSensor293.setDEF(CString("touchSensorTrigger"));
Transform292.addChild(&TouchSensor293);

Group& Group294 =  Group();
Group& Group295 =  Group();
Group295.setDEF(CString("Jalousie"));
TimeSensor& TimeSensor296 =  TimeSensor();
TimeSensor296.setDEF(CString("Time_4"));
TimeSensor296.setCycleInterval(10);
TimeSensor296.setStopTime(1);
Group295.addChild(&TimeSensor296);

Group294.addChild(&Group295);

PositionInterpolator& PositionInterpolator297 =  PositionInterpolator();
PositionInterpolator297.setDEF(CString("UnnamedShapeScaleFactorInterp_1"));
PositionInterpolator297.setKey(new float[]{0,0.3,0.7,1}, 4);
PositionInterpolator297.setKeyValue(new float[]{0.999996,1.00004,0.644773,0.999996,1.00004,0.337192,0.999996,1.00004,0.337192,0.999996,1.00004,0.644773}, 12);
Group294.addChild(&PositionInterpolator297);

PositionInterpolator& PositionInterpolator298 =  PositionInterpolator();
PositionInterpolator298.setDEF(CString("UnnamedShapeTranslationInterp_1"));
PositionInterpolator298.setKey(new float[]{0,0.3,0.7,1}, 4);
PositionInterpolator298.setKeyValue(new float[]{-38.0328,-46.6611,-27.9868,-38.0328,-45.6916,-27.9868,-38.0328,-45.6916,-27.9868,-38.0328,-46.6611,-27.9868}, 12);
Group294.addChild(&PositionInterpolator298);

Group& Group299 =  Group();
ScalarInterpolator& ScalarInterpolator300 =  ScalarInterpolator();
ScalarInterpolator300.setDEF(CString("_13"));
ScalarInterpolator300.setKey(new float[]{0,1}, 2);
ScalarInterpolator300.setKeyValue(new float[]{1,1}, 2);
Group299.addChild(&ScalarInterpolator300);

ScalarInterpolator& ScalarInterpolator301 =  ScalarInterpolator();
ScalarInterpolator301.setDEF(CString("_14"));
ScalarInterpolator301.setKey(new float[]{0,1}, 2);
ScalarInterpolator301.setKeyValue(new float[]{30,30}, 2);
Group299.addChild(&ScalarInterpolator301);

Script& Script302 =  Script();
Script302.setDEF(CString("_15"));
field& field303 =  field();
field303.setName(CString("vec"));
field303.setAccessType(CString("outputOnly"));
field303.setType(CString("SFVec2f"));
Script302.addChild(&field303);

field& field304 =  field();
field304.setName(CString("xIn"));
field304.setAccessType(CString("inputOnly"));
field304.setType(CString("SFFloat"));
Script302.addChild(&field304);

field& field305 =  field();
field305.setName(CString("yIn"));
field305.setAccessType(CString("inputOnly"));
field305.setType(CString("SFFloat"));
Script302.addChild(&field305);

field& field306 =  field();
field306.setName(CString("xBuf"));
field306.setAccessType(CString("initializeOnly"));
field306.setType(CString("SFFloat"));
Script302.addChild(&field306);

field& field307 =  field();
field307.setName(CString("yBuf"));
field307.setAccessType(CString("initializeOnly"));
field307.setType(CString("SFFloat"));
Script302.addChild(&field307);


Script302.setSourceCode(CString("vrmlscript: function xIn(value) { xBuf = value; vec[0] = xBuf; vec[1] = yBuf; } function yIn(value) { yBuf = value; vec[0] = xBuf; vec[1] = yBuf; }"));
Group299.addChild(&Script302);

Group294.addChild(&Group299);

CoordinateInterpolator& CoordinateInterpolator308 =  CoordinateInterpolator();
CoordinateInterpolator308.setDEF(CString("UnnamedShapePointInterp"));
CoordinateInterpolator308.setKey(new float[]{0,1}, 2);
CoordinateInterpolator308.setKeyValue(new float[]{0.328099,50.2103,7.65458,0.328099,50.2103,5.68417,0.328066,54.9155,5.68417,0.328066,54.9155,7.65458,0.328079,53.0876,5.68417,0.328079,53.1117,7.65458,0.328082,52.6157,5.68417,0.328082,52.6157,7.65458,0.328093,51.0198,5.68417,0.328093,51.0198,7.65458,0.32809,51.4724,5.68417,0.32809,51.4724,7.65458,3.36312e-43,1.4013e-45,3.56727e-29,5.60519e-45,3.75015e-29,2.19196e-28,0,0,0,2.85986e-31,-1,-1,0.328099,50.2103,7.65458,0.328099,50.2103,5.68417,0.328066,54.9155,5.68417,0.328066,54.9155,7.65458,0.328079,53.0876,5.68417,0.328079,53.1117,7.65458,0.328082,52.6157,5.68417,0.328082,52.6157,7.65458,0.328093,51.0198,5.68417,0.328093,51.0198,7.65458,0.32809,51.4724,5.68417,0.32809,51.4724,7.65458,3.36312e-43,1.4013e-45,3.56727e-29,5.60519e-45,3.75015e-29,2.19196e-28,0,0,0,2.85986e-31,-1,-1}, 96);
Group294.addChild(&CoordinateInterpolator308);

Transform292.addChild(&Group294);

Shape& Shape309 =  Shape();
Appearance& Appearance310 =  Appearance();
Material& Material311 =  Material();
Material311.setAmbientIntensity(0);
Material311.setDiffuseColor(new float[]{1,1,1});
Material311.setEmissiveColor(new float[]{0.457447,0.457447,0.457447});
Material311.setShininess(0.170213);
Appearance310.addChild(&Material311);

ImageTexture& ImageTexture312 =  ImageTexture();
ImageTexture312.setUrl(new CString[]{CString("jalousie1.png")}, 1);
Appearance310.addChild(&ImageTexture312);

TextureTransform& TextureTransform313 =  TextureTransform();
TextureTransform313.setDEF(CString("_16"));
TextureTransform313.setScale(new float[]{1,30});
Appearance310.setTextureTransform(TextureTransform313);

Shape309.addChild(&Appearance310);

IndexedFaceSet& IndexedFaceSet314 =  IndexedFaceSet();
IndexedFaceSet314.setSolid(False);
IndexedFaceSet314.setCreaseAngle(6.28319);
IndexedFaceSet314.setColorPerVertex(False);
IndexedFaceSet314.setTexCoordIndex(new int32_t[]{4,2,3,5,-1,0,1,8,9,-1,10,6,7,11,-1}, 15);
IndexedFaceSet314.setCoordIndex(new int32_t[]{4,2,3,5,-1,0,1,8,9,-1,10,6,7,11,-1}, 15);
TextureCoordinate& TextureCoordinate315 =  TextureCoordinate();
TextureCoordinate315.setPoint(new float[]{0.769876,1.68378,0.769875,1.30121,0.857726,1.30122,0.857728,1.68377,0.822624,1.30122,0.823087,1.68377,0.813561,1.30121,0.813563,1.68377,0.782915,1.30121,0.782916,1.68378,0.791605,1.30121,0.791607,1.68378}, 24);
IndexedFaceSet314.setTexCoord(&TextureCoordinate315);

Coordinate& Coordinate316 =  Coordinate();
Coordinate316.setDEF(CString("_17"));
Coordinate316.setPoint(new float[]{0.328099,50.2103,7.65458,0.328099,50.2103,5.68417,0.328066,54.9155,5.68417,0.328066,54.9155,7.65458,0.328079,53.0876,5.68417,0.328079,53.1117,7.65458,0.328082,52.6157,5.68417,0.328082,52.6157,7.65458,0.328093,51.0198,5.68417,0.328093,51.0198,7.65458,0.32809,51.4724,5.68417,0.32809,51.4724,7.65458,3.36312e-43,1.4013e-45,3.56727e-29,5.60519e-45,3.75015e-29,2.19196e-28,0,0,0,2.85986e-31,-1,-1}, 48);
IndexedFaceSet314.setCoord(&Coordinate316);

Shape309.setGeometry(&IndexedFaceSet314);

Transform292.addChild(&Shape309);

Transform270.addChild(&Transform292);

Transform& Transform317 =  Transform();
Transform& Transform318 =  Transform();
Transform318.setTranslation(new float[]{-38.322,-46.8986,-28.2243});
Transform318.setRotation(new float[]{-1,0,0,1.5708});
Transform318.setScale(new float[]{0.999996,1.00004,0.644774});
Transform318.setCenter(new float[]{3.2464,52.8039,6.57235});
Shape& Shape319 =  Shape();
Appearance& Appearance320 =  Appearance();
Material& Material321 =  Material();
Material321.setDEF(CString("_18"));
Material321.setAmbientIntensity(0.797872);
Material321.setDiffuseColor(new float[]{1,1,1});
Material321.setShininess(0);
Appearance320.addChild(&Material321);

Shape319.addChild(&Appearance320);

IndexedFaceSet& IndexedFaceSet322 =  IndexedFaceSet();
IndexedFaceSet322.setSolid(False);
IndexedFaceSet322.setCreaseAngle(6.28319);
IndexedFaceSet322.setColorPerVertex(False);
IndexedFaceSet322.setCoordIndex(new int32_t[]{0,2,3,1,-1}, 5);
Coordinate& Coordinate323 =  Coordinate();
Coordinate323.setPoint(new float[]{1.92222,49.3305,9.28264,1.92224,55.8416,9.28264,4.39455,49.3305,9.28264,4.39456,55.8416,9.28263}, 12);
IndexedFaceSet322.setCoord(&Coordinate323);

Shape319.setGeometry(&IndexedFaceSet322);

Transform318.addChild(&Shape319);

Transform317.addChild(&Transform318);

Transform& Transform324 =  Transform();
Transform324.setTranslation(new float[]{-38.322,-46.8986,-28.2243});
Transform324.setRotation(new float[]{1,0,0,4.71239});
Transform324.setScale(new float[]{0.999996,1.00004,0.644774});
Transform324.setCenter(new float[]{3.2464,52.8039,6.57235});
Shape& Shape325 =  Shape();
Appearance& Appearance326 =  Appearance();
Material& Material327 =  Material();
Material327.setUSE(CString("_18"));
Appearance326.addChild(&Material327);

ImageTexture& ImageTexture328 =  ImageTexture();
ImageTexture328.setDEF(CString("_19"));
ImageTexture328.setUrl(new CString[]{CString("deckenplatte2.png")}, 1);
Appearance326.addChild(&ImageTexture328);

TextureTransform& TextureTransform329 =  TextureTransform();
TextureTransform329.setScale(new float[]{18,1});
Appearance326.setTextureTransform(TextureTransform329);

Shape325.addChild(&Appearance326);

IndexedFaceSet& IndexedFaceSet330 =  IndexedFaceSet();
IndexedFaceSet330.setSolid(False);
IndexedFaceSet330.setCreaseAngle(6.28319);
IndexedFaceSet330.setColorPerVertex(False);
IndexedFaceSet330.setTexCoordIndex(new int32_t[]{0,1,5,4,-1,5,7,6,4,-1,7,2,3,6,-1}, 15);
IndexedFaceSet330.setCoordIndex(new int32_t[]{0,1,5,4,-1,5,7,6,4,-1,7,2,3,6,-1}, 15);
TextureCoordinate& TextureCoordinate331 =  TextureCoordinate();
TextureCoordinate331.setPoint(new float[]{0.0000385701,0.00000861124,0.0000363614,0.999954,0.999998,0.999955,0.999454,0.0000584401,0.333844,0.0000252541,0.334025,0.999954,0.666649,0.0000418471,0.667011,0.999955}, 16);
IndexedFaceSet330.setTexCoord(&TextureCoordinate331);

Coordinate& Coordinate332 =  Coordinate();
Coordinate332.setPoint(new float[]{4.72174,49.3305,9.28263,5.82208,49.3305,9.28263,5.82208,55.8416,9.28263,4.72175,55.8416,9.28263,4.72174,51.5052,9.28263,5.82208,51.5052,9.28263,4.72174,53.6734,9.28263,5.82208,53.6734,9.28263}, 24);
IndexedFaceSet330.setCoord(&Coordinate332);

Shape325.setGeometry(&IndexedFaceSet330);

Transform324.addChild(&Shape325);

Transform317.addChild(&Transform324);

Transform& Transform333 =  Transform();
Transform333.setTranslation(new float[]{-38.322,-46.8986,-28.2243});
Transform333.setRotation(new float[]{-1,0,0,1.5708});
Transform333.setScale(new float[]{0.999996,1.00004,0.644774});
Transform333.setCenter(new float[]{3.2464,52.8039,6.57235});
Shape& Shape334 =  Shape();
Appearance& Appearance335 =  Appearance();
Material& Material336 =  Material();
Material336.setUSE(CString("_18"));
Appearance335.addChild(&Material336);

ImageTexture& ImageTexture337 =  ImageTexture();
ImageTexture337.setDEF(CString("_20"));
ImageTexture337.setUrl(new CString[]{CString("lampe2.png")}, 1);
Appearance335.addChild(&ImageTexture337);

TextureTransform& TextureTransform338 =  TextureTransform();
TextureTransform338.setScale(new float[]{3,1});
Appearance335.setTextureTransform(TextureTransform338);

Shape334.addChild(&Appearance335);

IndexedFaceSet& IndexedFaceSet339 =  IndexedFaceSet();
IndexedFaceSet339.setSolid(False);
IndexedFaceSet339.setCreaseAngle(6.28319);
IndexedFaceSet339.setColorPerVertex(False);
IndexedFaceSet339.setTexCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
IndexedFaceSet339.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate340 =  TextureCoordinate();
TextureCoordinate340.setPoint(new float[]{0.000590236,0.998563,0.000161478,0.0354206,0.999432,0.00113659,0.999057,0.932479}, 8);
IndexedFaceSet339.setTexCoord(&TextureCoordinate340);

Coordinate& Coordinate341 =  Coordinate();
Coordinate341.setPoint(new float[]{4.39455,49.3305,9.28264,4.72174,49.3305,9.28263,4.72175,55.8416,9.28263,4.39456,55.8416,9.28263}, 12);
IndexedFaceSet339.setCoord(&Coordinate341);

Shape334.setGeometry(&IndexedFaceSet339);

Transform333.addChild(&Shape334);

Transform317.addChild(&Transform333);

Transform& Transform342 =  Transform();
Transform342.setTranslation(new float[]{-38.322,-46.8986,-28.2243});
Transform342.setRotation(new float[]{-1,0,0,1.5708});
Transform342.setScale(new float[]{0.999996,1.00004,0.644774});
Transform342.setCenter(new float[]{3.2464,52.8039,6.57235});
Shape& Shape343 =  Shape();
Appearance& Appearance344 =  Appearance();
Material& Material345 =  Material();
Material345.setUSE(CString("_18"));
Appearance344.addChild(&Material345);

ImageTexture& ImageTexture346 =  ImageTexture();
ImageTexture346.setUSE(CString("_20"));
Appearance344.addChild(&ImageTexture346);

TextureTransform& TextureTransform347 =  TextureTransform();
TextureTransform347.setScale(new float[]{3,1});
Appearance344.setTextureTransform(TextureTransform347);

Shape343.addChild(&Appearance344);

IndexedFaceSet& IndexedFaceSet348 =  IndexedFaceSet();
IndexedFaceSet348.setSolid(False);
IndexedFaceSet348.setCreaseAngle(6.28319);
IndexedFaceSet348.setColorPerVertex(False);
IndexedFaceSet348.setTexCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
IndexedFaceSet348.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate349 =  TextureCoordinate();
TextureCoordinate349.setPoint(new float[]{0.000430295,0.000630712,0.00026409,0.997726,0.999396,0.997267,0.999951,0.00132787}, 8);
IndexedFaceSet348.setTexCoord(&TextureCoordinate349);

Coordinate& Coordinate350 =  Coordinate();
Coordinate350.setPoint(new float[]{1.62159,49.3305,9.28265,1.92222,49.3305,9.28264,1.92224,55.8416,9.28264,1.6216,55.8416,9.28264}, 12);
IndexedFaceSet348.setCoord(&Coordinate350);

Shape343.setGeometry(&IndexedFaceSet348);

Transform342.addChild(&Shape343);

Transform317.addChild(&Transform342);

Transform& Transform351 =  Transform();
Transform351.setTranslation(new float[]{-38.322,-46.8986,-28.2243});
Transform351.setRotation(new float[]{1,0,0,4.71239});
Transform351.setScale(new float[]{0.999996,1.00004,0.644774});
Transform351.setCenter(new float[]{3.2464,52.8039,6.57235});
Shape& Shape352 =  Shape();
Appearance& Appearance353 =  Appearance();
Material& Material354 =  Material();
Material354.setUSE(CString("_18"));
Appearance353.addChild(&Material354);

ImageTexture& ImageTexture355 =  ImageTexture();
ImageTexture355.setUSE(CString("_19"));
Appearance353.addChild(&ImageTexture355);

TextureTransform& TextureTransform356 =  TextureTransform();
TextureTransform356.setScale(new float[]{18,1});
Appearance353.setTextureTransform(TextureTransform356);

Shape352.addChild(&Appearance353);

IndexedFaceSet& IndexedFaceSet357 =  IndexedFaceSet();
IndexedFaceSet357.setSolid(False);
IndexedFaceSet357.setCreaseAngle(6.28319);
IndexedFaceSet357.setTexCoordIndex(new int32_t[]{4,2,3,5,-1,0,1,6,7,-1,6,4,5,7,-1}, 15);
IndexedFaceSet357.setCoordIndex(new int32_t[]{4,2,3,5,-1,0,1,6,7,-1,6,4,5,7,-1}, 15);
TextureCoordinate& TextureCoordinate358 =  TextureCoordinate();
TextureCoordinate358.setPoint(new float[]{0.0000375365,0.00000906142,1.77316e-8,1,1,1,1,0,0.667037,1,0.667048,0.00000301713,0.333519,1,0.333542,0.00000603928}, 16);
IndexedFaceSet357.setTexCoord(&TextureCoordinate358);

Coordinate& Coordinate359 =  Coordinate();
Coordinate359.setPoint(new float[]{0.923972,49.3305,9.28265,1.62159,49.3305,9.28265,1.6216,55.8416,9.28264,0.923931,55.8416,9.28265,1.6216,53.6737,9.28264,0.923944,53.6736,9.28265,1.62159,51.5021,9.28264,0.923958,51.5021,9.28265}, 24);
IndexedFaceSet357.setCoord(&Coordinate359);

Shape352.setGeometry(&IndexedFaceSet357);

Transform351.addChild(&Shape352);

Transform317.addChild(&Transform351);

Transform270.addChild(&Transform317);

Transform& Transform360 =  Transform();
Transform360.setTranslation(new float[]{-38.3386,-46.8698,-28.2243});
Transform360.setRotation(new float[]{1,0,0,4.71239});
Transform360.setScale(new float[]{0.999996,1.00004,0.644773});
Transform360.setCenter(new float[]{3.2464,52.8039,6.57235});
Shape& Shape361 =  Shape();
Appearance& Appearance362 =  Appearance();
Material& Material363 =  Material();
Material363.setAmbientIntensity(1.58865);
Material363.setDiffuseColor(new float[]{0.33388,0.401786,0.338056});
Material363.setShininess(0);
Appearance362.addChild(&Material363);

ImageTexture& ImageTexture364 =  ImageTexture();
ImageTexture364.setDEF(CString("_21"));
ImageTexture364.setUrl(new CString[]{CString("granite.2.png")}, 1);
Appearance362.addChild(&ImageTexture364);

TextureTransform& TextureTransform365 =  TextureTransform();
TextureTransform365.setScale(new float[]{5,5});
Appearance362.setTextureTransform(TextureTransform365);

Shape361.addChild(&Appearance362);

IndexedFaceSet& IndexedFaceSet366 =  IndexedFaceSet();
IndexedFaceSet366.setSolid(False);
IndexedFaceSet366.setCreaseAngle(6.28319);
IndexedFaceSet366.setColorPerVertex(False);
IndexedFaceSet366.setTexCoordIndex(new int32_t[]{15,8,9,14,-1,20,19,18,16,-1,1,20,16,21,3,-1,21,16,17,10,-1,3,21,10,22,6,-1,22,10,11,12,-1,6,22,12,23,0,-1,23,12,13,14,-1,0,23,14,9,-1,7,24,25,-1,24,15,14,25,-1,26,13,12,27,-1,4,5,28,29,-1,28,11,10,29,-1,30,17,16,31,-1,19,33,32,18,-1,33,2,32,-1,30,31,32,29,-1,29,32,2,4,-1,26,27,28,25,-1,25,28,5,7,-1}, 106);
IndexedFaceSet366.setCoordIndex(new int32_t[]{15,8,9,14,-1,20,19,18,16,-1,1,20,16,21,3,-1,21,16,17,10,-1,3,21,10,22,6,-1,22,10,11,12,-1,6,22,12,23,0,-1,23,12,13,14,-1,0,23,14,9,-1,7,24,25,-1,24,15,14,25,-1,26,13,12,27,-1,4,5,28,29,-1,28,11,10,29,-1,30,17,16,31,-1,19,33,32,18,-1,33,2,32,-1,30,31,32,29,-1,29,32,2,4,-1,26,27,28,25,-1,25,28,5,7,-1}, 106);
TextureCoordinate& TextureCoordinate367 =  TextureCoordinate();
TextureCoordinate367.setPoint(new float[]{0,0.983966,0,0,1,0,0,0.309834,1,0.601601,1,0.765786,0,0.617023,1,1.25207,0,1.25207,0,1.10425,0.301445,0.613443,0.300138,0.737735,0.298478,1.00451,0.300376,1.02277,0.301288,1.13853,0.229729,1.25207,0.297743,0.29069,0.296867,0.412792,0.299357,0.127318,0.225898,0,0.117693,0,0.100129,0.301443,0.11606,0.615233,0.114575,0.994238,0.832601,1.25207,0.834768,1.22522,0.833959,1.0789,0.836518,1.04432,0.838683,0.75932,0.840474,0.604306,0.840427,0.3956,0.841876,0.240582,0.843767,0.0283901,0.843767,0}, 68);
IndexedFaceSet366.setTexCoord(&TextureCoordinate367);

Coordinate& Coordinate368 =  Coordinate();
Coordinate368.setPoint(new float[]{0.621812,54.4474,4.13363,0.621844,49.3305,4.13363,5.82208,49.3305,4.13362,0.621834,50.9417,4.13363,5.82208,52.459,4.13362,5.82208,53.3128,4.13362,0.621824,52.5392,4.13363,5.82208,55.8416,4.13362,0.621803,55.8416,4.13363,0.621808,55.0729,4.13363,2.1894,52.5206,4.13363,2.1826,53.1669,4.13363,2.17397,54.5542,4.13363,2.18384,54.6492,4.13363,2.18859,55.2512,4.13363,1.81646,55.8416,4.13363,2.17015,50.8422,4.13363,2.1656,51.4771,4.13363,2.17854,49.9926,4.13363,1.79653,49.3305,4.13363,1.23384,49.3305,4.13363,1.1425,50.8981,4.13363,1.22535,52.5299,4.13363,1.21762,54.5008,4.13363,4.95156,55.8416,4.13362,4.96283,55.702,4.13362,4.95862,54.9411,4.13362,4.97193,54.7613,4.13362,4.98318,53.2792,4.13362,4.9925,52.4731,4.13362,4.99225,51.3877,4.13362,4.99979,50.5816,4.13362,5.00962,49.4781,4.13362,5.00962,49.3305,4.13362}, 102);
IndexedFaceSet366.setCoord(&Coordinate368);

Shape361.setGeometry(&IndexedFaceSet366);

Transform360.addChild(&Shape361);

Transform270.addChild(&Transform360);

Transform& Transform369 =  Transform();
Transform369.setTranslation(new float[]{-38.322,-46.8986,-28.2243});
Transform369.setRotation(new float[]{-1,0,0,1.5708});
Transform369.setScale(new float[]{0.999996,1.00004,0.644775});
Transform369.setCenter(new float[]{3.2464,52.8039,6.57235});
Shape& Shape370 =  Shape();
Appearance& Appearance371 =  Appearance();
Material& Material372 =  Material();
Material372.setAmbientIntensity(0);
Material372.setDiffuseColor(new float[]{0.788985,1,0.762007});
Material372.setEmissiveColor(new float[]{0.255319,0.255319,0.255319});
Material372.setShininess(0);
Appearance371.addChild(&Material372);

ImageTexture& ImageTexture373 =  ImageTexture();
ImageTexture373.setUSE(CString("_21"));
Appearance371.addChild(&ImageTexture373);

TextureTransform& TextureTransform374 =  TextureTransform();
TextureTransform374.setScale(new float[]{5,5});
Appearance371.setTextureTransform(TextureTransform374);

Shape370.addChild(&Appearance371);

IndexedFaceSet& IndexedFaceSet375 =  IndexedFaceSet();
IndexedFaceSet375.setSolid(False);
IndexedFaceSet375.setCreaseAngle(6.28319);
IndexedFaceSet375.setColorPerVertex(False);
IndexedFaceSet375.setTexCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
IndexedFaceSet375.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate376 =  TextureCoordinate();
TextureCoordinate376.setPoint(new float[]{0.011835,0,0,0.929035,0.97633,0.946787,1,0}, 8);
IndexedFaceSet375.setTexCoord(&TextureCoordinate376);

Coordinate& Coordinate377 =  Coordinate();
Coordinate377.setPoint(new float[]{0.621844,49.3305,4.13363,5.82208,49.3305,4.13362,5.82208,55.8416,4.13362,0.621803,55.8416,4.13363}, 12);
IndexedFaceSet375.setCoord(&Coordinate377);

Shape370.setGeometry(&IndexedFaceSet375);

Transform369.addChild(&Shape370);

Transform270.addChild(&Transform369);

Transform& Transform378 =  Transform();
Transform378.setDEF(CString("_22"));
Transform378.setTranslation(new float[]{-38.019,-46.8821,-28.2243});
Transform378.setRotation(new float[]{-1,0,0,1.5708});
Transform378.setScale(new float[]{0.56794,1.00004,0.644774});
Transform378.setCenter(new float[]{3.2464,52.8039,6.57235});
Group& Group379 =  Group();
Group& Group380 =  Group();
Group380.setUSE(CString("Jalousie"));
Group379.addChild(&Group380);

PositionInterpolator& PositionInterpolator381 =  PositionInterpolator();
PositionInterpolator381.setDEF(CString("UnnamedShapeTranslationInterp_2"));
PositionInterpolator381.setKey(new float[]{0,0.3,0.7,1}, 4);
PositionInterpolator381.setKeyValue(new float[]{-38.019,-46.8821,-28.2243,-35.952,-46.8821,-28.2243,-35.952,-46.8821,-28.2243,-38.019,-46.8821,-28.2243}, 12);
Group379.addChild(&PositionInterpolator381);

PositionInterpolator& PositionInterpolator382 =  PositionInterpolator();
PositionInterpolator382.setDEF(CString("UnnamedShapeScaleFactorInterp_2"));
PositionInterpolator382.setKey(new float[]{0,0.3,0.7,1}, 4);
PositionInterpolator382.setKeyValue(new float[]{0.56794,1.00004,0.644774,0.276148,1.00004,0.644774,0.276148,1.00004,0.644774,0.56794,1.00004,0.644774}, 12);
Group379.addChild(&PositionInterpolator382);

Group& Group383 =  Group();
ScalarInterpolator& ScalarInterpolator384 =  ScalarInterpolator();
ScalarInterpolator384.setDEF(CString("_23"));
ScalarInterpolator384.setKey(new float[]{0,1}, 2);
ScalarInterpolator384.setKeyValue(new float[]{5,5}, 2);
Group383.addChild(&ScalarInterpolator384);

ScalarInterpolator& ScalarInterpolator385 =  ScalarInterpolator();
ScalarInterpolator385.setDEF(CString("_24"));
ScalarInterpolator385.setKey(new float[]{0,1}, 2);
ScalarInterpolator385.setKeyValue(new float[]{30,30}, 2);
Group383.addChild(&ScalarInterpolator385);

Script& Script386 =  Script();
Script386.setDEF(CString("_25"));
field& field387 =  field();
field387.setName(CString("vec"));
field387.setAccessType(CString("outputOnly"));
field387.setType(CString("SFVec2f"));
Script386.addChild(&field387);

field& field388 =  field();
field388.setName(CString("xIn"));
field388.setAccessType(CString("inputOnly"));
field388.setType(CString("SFFloat"));
Script386.addChild(&field388);

field& field389 =  field();
field389.setName(CString("yIn"));
field389.setAccessType(CString("inputOnly"));
field389.setType(CString("SFFloat"));
Script386.addChild(&field389);

field& field390 =  field();
field390.setName(CString("xBuf"));
field390.setAccessType(CString("initializeOnly"));
field390.setType(CString("SFFloat"));
Script386.addChild(&field390);

field& field391 =  field();
field391.setName(CString("yBuf"));
field391.setAccessType(CString("initializeOnly"));
field391.setType(CString("SFFloat"));
Script386.addChild(&field391);


Script386.setSourceCode(CString("vrmlscript: function xIn(value) { xBuf = value; vec[0] = xBuf; vec[1] = yBuf; } function yIn(value) { yBuf = value; vec[0] = xBuf; vec[1] = yBuf; }"));
Group383.addChild(&Script386);

Group379.addChild(&Group383);

Transform378.addChild(&Group379);

Shape& Shape392 =  Shape();
Appearance& Appearance393 =  Appearance();
Material& Material394 =  Material();
Material394.setAmbientIntensity(5.99999);
Material394.setDiffuseColor(new float[]{0.0884032,0.106383,0.0895089});
Material394.setShininess(0);
Appearance393.addChild(&Material394);

ImageTexture& ImageTexture395 =  ImageTexture();
ImageTexture395.setUrl(new CString[]{CString("jalousie_schatten.png")}, 1);
Appearance393.addChild(&ImageTexture395);

TextureTransform& TextureTransform396 =  TextureTransform();
TextureTransform396.setDEF(CString("_26"));
TextureTransform396.setScale(new float[]{5,30});
Appearance393.setTextureTransform(TextureTransform396);

Shape392.addChild(&Appearance393);

IndexedFaceSet& IndexedFaceSet397 =  IndexedFaceSet();
IndexedFaceSet397.setSolid(False);
IndexedFaceSet397.setCreaseAngle(6.28319);
IndexedFaceSet397.setColorPerVertex(False);
IndexedFaceSet397.setTexCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
IndexedFaceSet397.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
TextureCoordinate& TextureCoordinate398 =  TextureCoordinate();
TextureCoordinate398.setPoint(new float[]{0.011835,0,0,0.929035,0.97633,0.946787,1,0}, 8);
IndexedFaceSet397.setTexCoord(&TextureCoordinate398);

Coordinate& Coordinate399 =  Coordinate();
Coordinate399.setPoint(new float[]{0.621844,49.3305,4.13363,5.82208,49.3305,4.13362,5.82208,55.8416,4.13362,0.621803,55.8416,4.13363}, 12);
IndexedFaceSet397.setCoord(&Coordinate399);

Shape392.setGeometry(&IndexedFaceSet397);

Transform378.addChild(&Shape392);

Transform270.addChild(&Transform378);

Transform& Transform400 =  Transform();
Transform400.setTranslation(new float[]{-38.322,-46.8701,-28.2243});
Transform400.setRotation(new float[]{-1,0,0,1.5708});
Transform400.setScale(new float[]{0.999996,1.00003,0.644772});
Transform400.setCenter(new float[]{3.2464,52.8039,6.57235});
Shape& Shape401 =  Shape();
Appearance& Appearance402 =  Appearance();
Material& Material403 =  Material();
Material403.setAmbientIntensity(0);
Material403.setDiffuseColor(new float[]{0,0,0});
Material403.setShininess(0);
Material403.setTransparency(1);
Appearance402.addChild(&Material403);

Shape401.addChild(&Appearance402);

IndexedFaceSet& IndexedFaceSet404 =  IndexedFaceSet();
IndexedFaceSet404.setSolid(False);
IndexedFaceSet404.setCreaseAngle(6.28319);
IndexedFaceSet404.setColorPerVertex(False);
IndexedFaceSet404.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
Coordinate& Coordinate405 =  Coordinate();
Coordinate405.setPoint(new float[]{0.621844,49.3305,4.13363,5.82208,49.3305,4.13362,5.82208,55.8416,4.13362,0.621803,55.8416,4.13363}, 12);
IndexedFaceSet404.setCoord(&Coordinate405);

Shape401.setGeometry(&IndexedFaceSet404);

Transform400.addChild(&Shape401);

Transform270.addChild(&Transform400);

Scene8.addChild(&Transform270);

Transform& Transform406 =  Transform();
Transform406.setTranslation(new float[]{-50.1308,-8.95545,-30.2199});
Transform406.setScale(new float[]{0.549932,1,4.02312});
Shape& Shape407 =  Shape();
Appearance& Appearance408 =  Appearance();
Material& Material409 =  Material();
Material409.setUSE(CString("_5"));
Appearance408.addChild(&Material409);

ImageTexture& ImageTexture410 =  ImageTexture();
ImageTexture410.setUrl(new CString[]{CString("strasse03.png")}, 1);
Appearance408.addChild(&ImageTexture410);

TextureTransform& TextureTransform411 =  TextureTransform();
TextureTransform411.setScale(new float[]{1,9.48983});
Appearance408.setTextureTransform(TextureTransform411);

Shape407.addChild(&Appearance408);

IndexedFaceSet& IndexedFaceSet412 =  IndexedFaceSet();
IndexedFaceSet412.setCreaseAngle(0.5);
IndexedFaceSet412.setTexCoordIndex(new int32_t[]{0,4,5,3,-1,4,1,2,5,-1}, 10);
IndexedFaceSet412.setCoordIndex(new int32_t[]{0,4,5,3,-1,4,1,2,5,-1}, 10);
TextureCoordinate& TextureCoordinate413 =  TextureCoordinate();
TextureCoordinate413.setPoint(new float[]{0,1,0,0,1,0,1,1,0,0.25465,1,0.25465}, 12);
IndexedFaceSet412.setTexCoord(&TextureCoordinate413);

Coordinate& Coordinate414 =  Coordinate();
Coordinate414.setPoint(new float[]{-10,10,-10,3.85821,10,10.9109,23.8582,10,10.9109,10,10,-10,-10,10,4.907,10,10,4.907}, 18);
IndexedFaceSet412.setCoord(&Coordinate414);

Shape407.setGeometry(&IndexedFaceSet412);

Transform406.addChild(&Shape407);

Scene8.addChild(&Transform406);

Transform& Transform415 =  Transform();
Transform415.setTranslation(new float[]{-27.4738,0.634178,7.30931});
Transform415.setRotation(new float[]{0,-1,0,1.00453});
Transform415.setScale(new float[]{1.60843,1.91381,1.60844});
Transform415.setScaleOrientation(new float[]{0,-1,0,0.0208194});
Shape& Shape416 =  Shape();
Appearance& Appearance417 =  Appearance();
Material& Material418 =  Material();
Material418.setAmbientIntensity(0);
Material418.setDiffuseColor(new float[]{1,1,1});
Material418.setEmissiveColor(new float[]{0.595745,0.595745,0.595745});
Appearance417.addChild(&Material418);

ImageTexture& ImageTexture419 =  ImageTexture();
ImageTexture419.setUSE(CString("_4"));
Appearance417.addChild(&ImageTexture419);

Shape416.addChild(&Appearance417);

IndexedFaceSet& IndexedFaceSet420 =  IndexedFaceSet();
IndexedFaceSet420.setSolid(False);
IndexedFaceSet420.setCreaseAngle(0.5);
IndexedFaceSet420.setTexCoordIndex(new int32_t[]{0,1,2,3,-1,4,5,6,7,-1,8,9,10,11,-1}, 15);
IndexedFaceSet420.setCoordIndex(new int32_t[]{0,1,2,3,-1,4,5,6,7,-1,8,9,10,11,-1}, 15);
TextureCoordinate& TextureCoordinate421 =  TextureCoordinate();
TextureCoordinate421.setPoint(new float[]{0,0,1,0,1,1,0,1,0,0,1,0,1,1,0,1,0,0,1,0,1,1,0,1}, 24);
IndexedFaceSet420.setTexCoord(&TextureCoordinate421);

Coordinate& Coordinate422 =  Coordinate();
Coordinate422.setPoint(new float[]{-52.6347,0.00499916,-10.6106,-45.6466,0.00499916,-10.6106,-45.6466,7.15655,-10.6106,-52.6347,5.739,-10.6106,-47.6449,0.00499058,-7.86263,-51.3424,0.00498962,-13.7923,-51.3424,6.60752,-13.7923,-47.7846,5.62517,-8.08669,-50.9676,0.00498962,-7.82067,-47.5528,0.00498962,-13.9176,-47.5528,6.60752,-13.9176,-50.9676,5.46237,-7.82067}, 36);
IndexedFaceSet420.setCoord(&Coordinate422);

Shape416.setGeometry(&IndexedFaceSet420);

Transform415.addChild(&Shape416);

Scene8.addChild(&Transform415);

NavigationInfo& NavigationInfo423 =  NavigationInfo();
NavigationInfo423.setType(new CString[]{CString(", "), CString("WALKANY")}, 2);
Scene8.addChild(&NavigationInfo423);

ROUTE& ROUTE424 =  ROUTE();
ROUTE424.setFromNode(CString("Touch_1"));
ROUTE424.setFromField(CString("touchTime"));
ROUTE424.setToNode(CString("Time_1"));
ROUTE424.setToField(CString("set_startTime"));
Scene8.addChild(&ROUTE424);

ROUTE& ROUTE425 =  ROUTE();
ROUTE425.setFromNode(CString("Time_1"));
ROUTE425.setFromField(CString("fraction_changed"));
ROUTE425.setToNode(CString("UnnamedTransformTranslationInterp_1"));
ROUTE425.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE425);

ROUTE& ROUTE426 =  ROUTE();
ROUTE426.setFromNode(CString("Time_1"));
ROUTE426.setFromField(CString("fraction_changed"));
ROUTE426.setToNode(CString("UnnamedTransformRotationInterp_1"));
ROUTE426.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE426);

ROUTE& ROUTE427 =  ROUTE();
ROUTE427.setFromNode(CString("Time_1"));
ROUTE427.setFromField(CString("fraction_changed"));
ROUTE427.setToNode(CString("UnnamedShapeRotationInterp"));
ROUTE427.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE427);

ROUTE& ROUTE428 =  ROUTE();
ROUTE428.setFromNode(CString("Time_1"));
ROUTE428.setFromField(CString("fraction_changed"));
ROUTE428.setToNode(CString("UnnamedTransformCenterInterp"));
ROUTE428.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE428);

ROUTE& ROUTE429 =  ROUTE();
ROUTE429.setFromNode(CString("Time_1"));
ROUTE429.setFromField(CString("fraction_changed"));
ROUTE429.setToNode(CString("UnnamedShapeScaleOrientationInterp"));
ROUTE429.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE429);

ROUTE& ROUTE430 =  ROUTE();
ROUTE430.setFromNode(CString("UnnamedShapeRotationInterp"));
ROUTE430.setFromField(CString("value_changed"));
ROUTE430.setToNode(CString("Klinke"));
ROUTE430.setToField(CString("set_rotation"));
Scene8.addChild(&ROUTE430);

ROUTE& ROUTE431 =  ROUTE();
ROUTE431.setFromNode(CString("UnnamedShapeScaleOrientationInterp"));
ROUTE431.setFromField(CString("value_changed"));
ROUTE431.setToNode(CString("Klinke"));
ROUTE431.setToField(CString("set_scaleOrientation"));
Scene8.addChild(&ROUTE431);

ROUTE& ROUTE432 =  ROUTE();
ROUTE432.setFromNode(CString("Touch_1"));
ROUTE432.setFromField(CString("touchTime"));
ROUTE432.setToNode(CString("door_snd"));
ROUTE432.setToField(CString("set_startTime"));
Scene8.addChild(&ROUTE432);

ROUTE& ROUTE433 =  ROUTE();
ROUTE433.setFromNode(CString("UnnamedTransformTranslationInterp_1"));
ROUTE433.setFromField(CString("value_changed"));
ROUTE433.setToNode(CString("Tuer_AnimSound"));
ROUTE433.setToField(CString("set_translation"));
Scene8.addChild(&ROUTE433);

ROUTE& ROUTE434 =  ROUTE();
ROUTE434.setFromNode(CString("UnnamedTransformRotationInterp_1"));
ROUTE434.setFromField(CString("value_changed"));
ROUTE434.setToNode(CString("Tuer_AnimSound"));
ROUTE434.setToField(CString("set_rotation"));
Scene8.addChild(&ROUTE434);

ROUTE& ROUTE435 =  ROUTE();
ROUTE435.setFromNode(CString("UnnamedTransformCenterInterp"));
ROUTE435.setFromField(CString("value_changed"));
ROUTE435.setToNode(CString("Tuer_AnimSound"));
ROUTE435.setToField(CString("set_center"));
Scene8.addChild(&ROUTE435);

ROUTE& ROUTE436 =  ROUTE();
ROUTE436.setFromNode(CString("Touch_2"));
ROUTE436.setFromField(CString("touchTime"));
ROUTE436.setToNode(CString("Time_2"));
ROUTE436.setToField(CString("set_startTime"));
Scene8.addChild(&ROUTE436);

ROUTE& ROUTE437 =  ROUTE();
ROUTE437.setFromNode(CString("Time_2"));
ROUTE437.setFromField(CString("fraction_changed"));
ROUTE437.setToNode(CString("UnnamedTransformRotationInterp_2"));
ROUTE437.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE437);

ROUTE& ROUTE438 =  ROUTE();
ROUTE438.setFromNode(CString("UnnamedTransformRotationInterp_2"));
ROUTE438.setFromField(CString("value_changed"));
ROUTE438.setToNode(CString("Door_left"));
ROUTE438.setToField(CString("set_rotation"));
Scene8.addChild(&ROUTE438);

ROUTE& ROUTE439 =  ROUTE();
ROUTE439.setFromNode(CString("Touch_3"));
ROUTE439.setFromField(CString("touchTime"));
ROUTE439.setToNode(CString("Time_3"));
ROUTE439.setToField(CString("set_startTime"));
Scene8.addChild(&ROUTE439);

ROUTE& ROUTE440 =  ROUTE();
ROUTE440.setFromNode(CString("Time_3"));
ROUTE440.setFromField(CString("fraction_changed"));
ROUTE440.setToNode(CString("UnnamedTransformRotationInterp_3"));
ROUTE440.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE440);

ROUTE& ROUTE441 =  ROUTE();
ROUTE441.setFromNode(CString("Time_3"));
ROUTE441.setFromField(CString("fraction_changed"));
ROUTE441.setToNode(CString("UnnamedTransformTranslationInterp_2"));
ROUTE441.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE441);

ROUTE& ROUTE442 =  ROUTE();
ROUTE442.setFromNode(CString("UnnamedTransformTranslationInterp_2"));
ROUTE442.setFromField(CString("value_changed"));
ROUTE442.setToNode(CString("Door_right"));
ROUTE442.setToField(CString("set_translation"));
Scene8.addChild(&ROUTE442);

ROUTE& ROUTE443 =  ROUTE();
ROUTE443.setFromNode(CString("UnnamedTransformRotationInterp_3"));
ROUTE443.setFromField(CString("value_changed"));
ROUTE443.setToNode(CString("Door_right"));
ROUTE443.setToField(CString("set_rotation"));
Scene8.addChild(&ROUTE443);

ROUTE& ROUTE444 =  ROUTE();
ROUTE444.setFromNode(CString("touchSensorTrigger"));
ROUTE444.setFromField(CString("touchTime"));
ROUTE444.setToNode(CString("Time_4"));
ROUTE444.setToField(CString("set_startTime"));
Scene8.addChild(&ROUTE444);

ROUTE& ROUTE445 =  ROUTE();
ROUTE445.setFromNode(CString("Time_4"));
ROUTE445.setFromField(CString("fraction_changed"));
ROUTE445.setToNode(CString("UnnamedShapeScaleFactorInterp_1"));
ROUTE445.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE445);

ROUTE& ROUTE446 =  ROUTE();
ROUTE446.setFromNode(CString("Time_4"));
ROUTE446.setFromField(CString("fraction_changed"));
ROUTE446.setToNode(CString("UnnamedShapeTranslationInterp_1"));
ROUTE446.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE446);

ROUTE& ROUTE447 =  ROUTE();
ROUTE447.setFromNode(CString("Time_4"));
ROUTE447.setFromField(CString("fraction_changed"));
ROUTE447.setToNode(CString("_13"));
ROUTE447.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE447);

ROUTE& ROUTE448 =  ROUTE();
ROUTE448.setFromNode(CString("Time_4"));
ROUTE448.setFromField(CString("fraction_changed"));
ROUTE448.setToNode(CString("_14"));
ROUTE448.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE448);

ROUTE& ROUTE449 =  ROUTE();
ROUTE449.setFromNode(CString("_13"));
ROUTE449.setFromField(CString("value_changed"));
ROUTE449.setToNode(CString("_15"));
ROUTE449.setToField(CString("xIn"));
Scene8.addChild(&ROUTE449);

ROUTE& ROUTE450 =  ROUTE();
ROUTE450.setFromNode(CString("_14"));
ROUTE450.setFromField(CString("value_changed"));
ROUTE450.setToNode(CString("_15"));
ROUTE450.setToField(CString("yIn"));
Scene8.addChild(&ROUTE450);

ROUTE& ROUTE451 =  ROUTE();
ROUTE451.setFromNode(CString("Time_4"));
ROUTE451.setFromField(CString("fraction_changed"));
ROUTE451.setToNode(CString("UnnamedShapePointInterp"));
ROUTE451.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE451);

ROUTE& ROUTE452 =  ROUTE();
ROUTE452.setFromNode(CString("_15"));
ROUTE452.setFromField(CString("vec"));
ROUTE452.setToNode(CString("_16"));
ROUTE452.setToField(CString("set_scale"));
Scene8.addChild(&ROUTE452);

ROUTE& ROUTE453 =  ROUTE();
ROUTE453.setFromNode(CString("UnnamedShapePointInterp"));
ROUTE453.setFromField(CString("value_changed"));
ROUTE453.setToNode(CString("_17"));
ROUTE453.setToField(CString("set_point"));
Scene8.addChild(&ROUTE453);

ROUTE& ROUTE454 =  ROUTE();
ROUTE454.setFromNode(CString("UnnamedShapeTranslationInterp_1"));
ROUTE454.setFromField(CString("value_changed"));
ROUTE454.setToNode(CString("_12"));
ROUTE454.setToField(CString("set_translation"));
Scene8.addChild(&ROUTE454);

ROUTE& ROUTE455 =  ROUTE();
ROUTE455.setFromNode(CString("UnnamedShapeScaleFactorInterp_1"));
ROUTE455.setFromField(CString("value_changed"));
ROUTE455.setToNode(CString("_12"));
ROUTE455.setToField(CString("set_scale"));
Scene8.addChild(&ROUTE455);

ROUTE& ROUTE456 =  ROUTE();
ROUTE456.setFromNode(CString("Time_4"));
ROUTE456.setFromField(CString("fraction_changed"));
ROUTE456.setToNode(CString("UnnamedShapeTranslationInterp_2"));
ROUTE456.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE456);

ROUTE& ROUTE457 =  ROUTE();
ROUTE457.setFromNode(CString("Time_4"));
ROUTE457.setFromField(CString("fraction_changed"));
ROUTE457.setToNode(CString("UnnamedShapeScaleFactorInterp_2"));
ROUTE457.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE457);

ROUTE& ROUTE458 =  ROUTE();
ROUTE458.setFromNode(CString("Time_4"));
ROUTE458.setFromField(CString("fraction_changed"));
ROUTE458.setToNode(CString("_23"));
ROUTE458.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE458);

ROUTE& ROUTE459 =  ROUTE();
ROUTE459.setFromNode(CString("Time_4"));
ROUTE459.setFromField(CString("fraction_changed"));
ROUTE459.setToNode(CString("_24"));
ROUTE459.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE459);

ROUTE& ROUTE460 =  ROUTE();
ROUTE460.setFromNode(CString("_23"));
ROUTE460.setFromField(CString("value_changed"));
ROUTE460.setToNode(CString("_25"));
ROUTE460.setToField(CString("xIn"));
Scene8.addChild(&ROUTE460);

ROUTE& ROUTE461 =  ROUTE();
ROUTE461.setFromNode(CString("_24"));
ROUTE461.setFromField(CString("value_changed"));
ROUTE461.setToNode(CString("_25"));
ROUTE461.setToField(CString("yIn"));
Scene8.addChild(&ROUTE461);

ROUTE& ROUTE462 =  ROUTE();
ROUTE462.setFromNode(CString("_25"));
ROUTE462.setFromField(CString("vec"));
ROUTE462.setToNode(CString("_26"));
ROUTE462.setToField(CString("set_scale"));
Scene8.addChild(&ROUTE462);

ROUTE& ROUTE463 =  ROUTE();
ROUTE463.setFromNode(CString("UnnamedShapeTranslationInterp_2"));
ROUTE463.setFromField(CString("value_changed"));
ROUTE463.setToNode(CString("_22"));
ROUTE463.setToField(CString("set_translation"));
Scene8.addChild(&ROUTE463);

ROUTE& ROUTE464 =  ROUTE();
ROUTE464.setFromNode(CString("UnnamedShapeScaleFactorInterp_2"));
ROUTE464.setFromField(CString("value_changed"));
ROUTE464.setToNode(CString("_22"));
ROUTE464.setToField(CString("set_scale"));
Scene8.addChild(&ROUTE464);

X3D0.setScene(&Scene8);

}
