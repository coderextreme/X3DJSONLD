//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
//int main(int argc, char ** argv) 
//{
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
meta3.setContent(CString("Thu, 23 Apr 2015 06:07:04 GMT"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("creator"));
meta4.setContent(CString("Holger Seelig"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("generator"));
meta5.setContent(CString("Titania V0.7.8, http://titania.create3000.de"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("modified"));
meta6.setContent(CString("Thu, 23 Apr 2015 06:07:04 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
WorldInfo& WorldInfo8 =  WorldInfo();
WorldInfo8.setInfo(new CString[]{CString(", "), CString("Created in TitaniaPackaged by CosmoPackage")}, 2);
Scene7.addChild(&WorldInfo8);

Transform& Transform9 =  Transform();
Transform9.setDEF(CString("deckel"));
Shape& Shape10 =  Shape();
Appearance& Appearance11 =  Appearance();
ImageTexture& ImageTexture12 =  ImageTexture();
ImageTexture12.setUrl(new CString[]{CString("sesam.jpg")}, 1);
Appearance11.addChild(&ImageTexture12);

TextureTransform& TextureTransform13 =  TextureTransform();
TextureTransform13.setDEF(CString("_1"));
Appearance11.setTextureTransform(TextureTransform13);

Shape10.addChild(&Appearance11);

IndexedFaceSet& IndexedFaceSet14 =  IndexedFaceSet();
IndexedFaceSet14.setSolid(false);
IndexedFaceSet14.setConvex(false);
IndexedFaceSet14.setTexCoordIndex(new int32_t[]{0,1,2,-1,1,3,2,-1,1,4,3,-1,4,5,3,-1,6,7,8,-1,9,10,11,-1,12,13,14,-1,13,15,14,-1,13,16,15,-1,16,17,15,-1,16,18,17,-1,18,19,17,-1,18,20,19,-1,20,21,19,-1,20,22,21,-1,22,23,21,-1,22,24,23,-1,24,25,23,-1,24,26,25,-1,26,27,25,-1,26,28,27,-1,28,29,27,-1,28,30,29,-1,30,31,29,-1,30,32,31,-1,32,33,31,-1,32,0,33,-1,0,2,33,-1,34,35,36,-1,35,37,36,-1,38,34,36,-1,37,39,36,-1,40,38,36,-1,39,41,36,-1,41,42,36,-1,42,43,36,-1,43,44,36,-1,44,45,36,-1,45,46,36,-1,46,47,36,-1,47,48,36,-1,48,40,36,-1,49,0,32,-1,49,50,0,-1,50,1,0,-1,50,51,1,-1,51,4,1,-1,52,53,54,-1,55,56,57,-1,58,59,12,-1,59,13,12,-1,59,60,13,-1,60,16,13,-1,60,61,16,-1,61,18,16,-1,61,62,18,-1,62,20,18,-1,62,63,20,-1,63,22,20,-1,63,64,22,-1,64,24,22,-1,64,65,24,-1,65,26,24,-1,65,66,26,-1,66,28,26,-1,66,67,28,-1,67,30,28,-1,67,68,30,-1,68,32,30,-1,68,49,32,-1}, 280);
IndexedFaceSet14.setCoordIndex(new int32_t[]{0,1,2,-1,1,3,2,-1,1,4,3,-1,4,5,3,-1,4,6,5,-1,6,7,5,-1,6,8,7,-1,8,9,7,-1,8,10,9,-1,10,11,9,-1,10,12,11,-1,12,13,11,-1,12,14,13,-1,14,15,13,-1,14,16,15,-1,16,17,15,-1,16,18,17,-1,18,19,17,-1,18,20,19,-1,20,21,19,-1,20,22,21,-1,22,23,21,-1,22,24,23,-1,24,25,23,-1,24,26,25,-1,26,27,25,-1,26,0,27,-1,0,2,27,-1,2,3,28,-1,3,5,28,-1,27,2,28,-1,5,7,28,-1,25,27,28,-1,7,9,28,-1,9,11,28,-1,11,13,28,-1,13,15,28,-1,15,17,28,-1,17,19,28,-1,19,21,28,-1,21,23,28,-1,23,25,28,-1,29,0,26,-1,29,30,0,-1,30,1,0,-1,30,31,1,-1,31,4,1,-1,31,32,4,-1,32,6,4,-1,32,33,6,-1,33,8,6,-1,33,34,8,-1,34,10,8,-1,34,35,10,-1,35,12,10,-1,35,36,12,-1,36,14,12,-1,36,37,14,-1,37,16,14,-1,37,38,16,-1,38,18,16,-1,38,39,18,-1,39,20,18,-1,39,40,20,-1,40,22,20,-1,40,41,22,-1,41,24,22,-1,41,42,24,-1,42,26,24,-1,42,29,26,-1}, 280);
TextureCoordinate& TextureCoordinate15 =  TextureCoordinate();
TextureCoordinate15.setPoint(new float[]{1.38652,0.515583,1.58352,0.515583,1.38652,0.778852,1.58352,0.778852,1.78052,0.515583,1.78052,0.778852,1.78149,0.516991,1.95022,0.522014,1.95439,0.774415,1.77842,0.515325,1.95328,0.776092,1.78037,0.774684,-0.834413,0.515583,-0.583519,0.515583,-0.834413,0.778852,-0.583519,0.778852,-0.386515,0.515583,-0.386515,0.778852,-0.189512,0.515583,-0.189512,0.778852,0.007491,0.515583,0.007491,0.778852,0.204495,0.515583,0.204495,0.778852,0.401498,0.515583,0.401498,0.778852,0.598502,0.515583,0.598502,0.778852,0.795505,0.515583,0.795505,0.778852,0.992509,0.515583,0.992509,0.778852,1.18951,0.515583,1.18951,0.778852,0.949439,0.446689,0.902703,0.582021,0.649603,0.380028,0.803066,0.678787,0.934017,0.299597,0.670262,0.717822,0.859492,0.169876,0.530595,0.691395,0.411728,0.60474,0.337203,0.47502,0.321781,0.327927,0.368517,0.192596,0.468154,0.095829,0.600957,0.056794,0.740624,0.083221,1.38652,0.320624,1.58352,0.320624,1.78052,0.320624,1.94977,0.520284,1.95606,0.327,1.78067,0.503245,1.96409,0.323421,1.78067,0.319842,1.78067,0.506824,-0.834413,0.320624,-0.583519,0.320624,-0.386515,0.320624,-0.189512,0.320624,0.007491,0.320624,0.204495,0.320624,0.401498,0.320624,0.598502,0.320624,0.795505,0.320624,0.992509,0.320624,1.18951,0.320624}, 138);
IndexedFaceSet14.setTexCoord(&TextureCoordinate15);

Coordinate& Coordinate16 =  Coordinate();
Coordinate16.setPoint(new float[]{0.0878428,0.0321435,-0.0423028,0.0607893,0.0321435,-0.0762276,0.0572418,0.0595127,-0.0275659,0.0396125,0.0595127,-0.0496723,0.0216956,0.0321435,-0.0950535,0.014137,0.0595127,-0.0619404,-0.0216956,0.0321435,-0.0950535,-0.014137,0.0595127,-0.0619404,-0.0607893,0.0321435,-0.0762276,-0.0396125,0.0595127,-0.0496723,-0.0878428,0.0321435,-0.0423028,-0.0572418,0.0595127,-0.0275659,-0.0974984,0.0321435,0.0,-0.0635336,0.0595127,0.0,-0.0878428,0.0321435,0.0423028,-0.0572418,0.0595127,0.0275659,-0.0607893,0.0321435,0.0762276,-0.0396125,0.0595127,0.0496723,-0.0216956,0.0321435,0.0950535,-0.014137,0.0595127,0.0619404,0.0216956,0.0321435,0.0950535,0.014137,0.0595127,0.0619404,0.0607893,0.0321435,0.0762276,0.0396125,0.0595127,0.0496723,0.0878428,0.0321435,0.0423028,0.0572418,0.0595127,0.0275659,0.0974984,0.0321435,0.0,0.0635336,0.0595127,0.0,0.0,0.0672368,0.0,0.0926182,-7.45058e-9,-0.0446029,0.0640935,-7.45058e-9,-0.0803717,0.0228749,-7.45058e-9,-0.100221,-0.0228749,-7.45058e-9,-0.100221,-0.0640935,-7.45058e-9,-0.0803717,-0.0926182,-7.45058e-9,-0.0446029,-0.102799,-7.45058e-9,0.0,-0.0926182,-7.45058e-9,0.0446029,-0.0640935,-7.45058e-9,0.0803717,-0.0228749,-7.45058e-9,0.100221,0.0228749,-7.45058e-9,0.100221,0.0640935,-7.45058e-9,0.0803717,0.0926182,-7.45058e-9,0.0446029,0.102799,-7.45058e-9,0.0}, 129);
IndexedFaceSet14.setCoord(&Coordinate16);

Shape10.setGeometry(&IndexedFaceSet14);

Transform9.addChild(&Shape10);

Scene7.addChild(&Transform9);

Transform& Transform17 =  Transform();
Shape& Shape18 =  Shape();
Appearance& Appearance19 =  Appearance();
ImageTexture& ImageTexture20 =  ImageTexture();
ImageTexture20.setUrl(new CString[]{CString("bread.jpg")}, 1);
Appearance19.addChild(&ImageTexture20);

TextureTransform& TextureTransform21 =  TextureTransform();
TextureTransform21.setUSE(CString("_1"));
Appearance19.setTextureTransform(TextureTransform21);

Shape18.addChild(&Appearance19);

IndexedFaceSet& IndexedFaceSet22 =  IndexedFaceSet();
IndexedFaceSet22.setSolid(false);
IndexedFaceSet22.setConvex(false);
IndexedFaceSet22.setCoordIndex(new int32_t[]{0,1,2,3,-1,4,0,3,5,-1,6,4,5,7,-1,8,9,10,11,-1,9,12,13,10,-1,12,6,7,13,-1}, 30);
TextureCoordinate& TextureCoordinate23 =  TextureCoordinate();
TextureCoordinate23.setPoint(new float[]{0.890916,0.188255,0.987464,0.388739,0.987464,0.61126,0.890916,0.811745,0.716942,0.049515,0.716942,0.950484,0.5,0.0,0.5,1.0,0.012536,0.38874,0.109084,0.188255,0.109084,0.811745,0.012536,0.611261,0.283058,0.049516,0.283058,0.950485}, 28);
IndexedFaceSet22.setTexCoord(&TextureCoordinate23);

Coordinate& Coordinate24 =  Coordinate();
Coordinate24.setPoint(new float[]{-0.0926182,-7.45058e-9,-0.0446029,-0.0640935,-7.45058e-9,-0.0803717,-0.0228749,-7.45058e-9,-0.100221,0.0228749,-7.45058e-9,-0.100221,-0.102799,-7.45058e-9,0.0,0.0640935,-7.45058e-9,-0.0803717,-0.0926182,-7.45058e-9,0.0446029,0.0926182,-7.45058e-9,-0.0446029,0.0228749,-7.45058e-9,0.100221,-0.0228749,-7.45058e-9,0.100221,0.0926182,-7.45058e-9,0.0446029,0.0640935,-7.45058e-9,0.0803717,-0.0640935,-7.45058e-9,0.0803717,0.102799,-7.45058e-9,0.0}, 42);
IndexedFaceSet22.setCoord(&Coordinate24);

Shape18.setGeometry(&IndexedFaceSet22);

Transform17.addChild(&Shape18);

Scene7.addChild(&Transform17);

X3D0.setScene(&Scene7);

//}
