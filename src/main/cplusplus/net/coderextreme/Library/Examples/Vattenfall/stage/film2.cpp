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
meta3.setContent(CString("Sat, 25 Apr 2015 12:38:21 GMT"));
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
meta6.setContent(CString("Mon, 27 Apr 2015 08:58:39 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
WorldInfo& WorldInfo8 =  WorldInfo();
WorldInfo8.setInfo(new CString[]{CString(", "), CString("Created in TitaniaPackaged by CosmoPackage")}, 2);
Scene7.addChild(&WorldInfo8);

Shape& Shape9 =  Shape();
Appearance& Appearance10 =  Appearance();
MovieTexture& MovieTexture11 =  MovieTexture();
MovieTexture11.setDEF(CString("Movie"));
MovieTexture11.setUrl(new CString[]{CString(", "), CString("film2.mp4, "), CString("film2.mpvhttp://titania.create3000.de/fileadmin/cobweb/videos/film2.mp4")}, 3);
MovieTexture11.setLoop(True);
MovieTexture11.setStopTime(1);
Appearance10.addChild(MovieTexture11);

Shape9.addChild(&Appearance10);

IndexedFaceSet& IndexedFaceSet12 =  IndexedFaceSet();
IndexedFaceSet12.setSolid(False);
IndexedFaceSet12.setCoordIndex(new int32_t[]{0,1,2,3,-1,4,5,6,7,-1,8,9,10,11,-1,12,13,14,15,-1,16,17,18,19,-1,20,21,22,23,-1,24,25,26,27,-1,28,29,30,31,-1,32,33,34,35,-1,36,37,38,39,-1,40,41,42,43,-1,44,45,46,47,-1,48,49,50,51,-1,52,53,54,55,-1,56,57,58,59,-1,60,61,62,63,-1,64,65,66,67,-1,68,69,70,71,-1}, 90);
TextureCoordinate& TextureCoordinate13 =  TextureCoordinate();
TextureCoordinate13.setPoint(new float[]{0.0082661,0.672812,0.163054,0.67244,0.163054,0.998334,0.00835073,0.999781,0.999258,0.000462353,0.999492,0.639748,0.945749,0.639748,0.945514,0.000462353,0.925228,0.000462353,0.92549,0.639989,0.865507,0.639989,0.865246,0.000462353,0.845707,0.0000250936,0.845955,0.641105,0.789043,0.641105,0.788794,0.0000250936,0.768978,0.000746608,0.76923,0.639919,0.711396,0.639919,0.711145,0.000746608,0.691976,0.000210941,0.692238,0.639194,0.63227,0.639194,0.632008,0.000210941,0.615381,0.000178128,0.615646,0.638985,0.554756,0.638985,0.55449,0.000178128,0.538541,0.000834048,0.538811,0.640361,0.476969,0.640361,0.476699,0.000834048,0.455904,0.000888765,0.456184,0.640233,0.391732,0.640233,0.39145,0.000888765,0.3773,0.000920385,0.377582,0.640166,0.313029,0.640166,0.312747,0.000920385,0.296283,0.000451475,0.296551,0.639738,0.235146,0.639738,0.234879,0.000451475,0.218027,0.00119483,0.21829,0.639269,0.157843,0.639269,0.15758,0.00119483,0.1397,0.000920385,0.139968,0.639447,0.0786345,0.639447,0.0783671,0.000920385,0.0618422,0,0.0620756,0.640245,0.0085549,0.640245,0.00832148,0,0.844901,0.674489,0.999372,0.673644,0.99999,0.997645,0.844445,0.999337,0.637969,0.673732,0.796212,0.673732,0.796212,0.999337,0.63749,0.999337,0.424289,0.674249,0.585156,0.671253,0.584966,0.99859,0.424289,0.997936,0.211698,0.673263,0.37066,0.672799,0.369989,0.999774,0.211698,0.998149}, 144);
IndexedFaceSet12.setTexCoord(&TextureCoordinate13);

Coordinate& Coordinate14 =  Coordinate();
Coordinate14.setPoint(new float[]{-10.3922,19.5508,0.00432408,-10.3922,17.011,0.00431478,-7.63772,17.011,0.00431478,-7.63772,19.5508,0.00432408,25.5518,0.433584,0.303677,25.5518,3.61268,0.303688,23.7736,3.61268,0.303688,23.7736,0.433584,0.303677,23.0008,0.433584,0.303677,23.0008,3.61268,0.303688,21.2225,3.61268,0.303688,21.2225,0.433584,0.303677,20.45,0.433584,0.303677,20.45,3.61268,0.303688,18.6718,3.61268,0.303688,18.6718,0.433584,0.303677,17.8931,0.433584,0.303677,17.8931,3.61268,0.303688,16.1149,3.61268,0.303688,16.1149,0.433584,0.303677,15.3497,0.433584,0.303677,15.3497,3.61268,0.303688,13.5715,3.61268,0.303688,13.5715,0.433584,0.303677,12.7981,0.433584,0.303677,12.7981,3.61268,0.303688,11.0199,3.61268,0.303688,11.0199,0.433584,0.303677,10.2448,0.433584,0.303677,10.2448,3.61268,0.303688,8.46658,3.61268,0.303688,8.46658,0.433584,0.303677,7.69545,0.433584,0.303677,7.69545,3.61268,0.303688,5.91727,3.61268,0.303688,5.91727,0.433584,0.303677,5.14532,0.433584,0.303677,5.14532,3.61268,0.303688,3.36718,3.61268,0.303688,3.36718,0.433584,0.303677,2.60324,0.433584,0.303677,2.60324,3.61268,0.303688,0.825047,3.61268,0.303688,0.825047,0.433584,0.303677,0.0533123,0.433584,0.303677,0.0533123,3.61268,0.303688,-1.72488,3.61268,0.303688,-1.72488,0.433584,0.303677,-2.50931,0.433584,0.303677,-2.50931,3.61268,0.303688,-4.28749,3.61268,0.303688,-4.28749,0.433584,0.303677,-5.05642,0.433584,0.303677,-5.05642,3.61268,0.303688,-6.83384,3.61268,0.303688,-6.83384,0.433584,0.303677,-10.3922,6.93197,0.00427747,-10.3922,4.07543,0.00426698,-7.63772,4.07543,0.00426698,-7.63772,6.93197,0.00427747,-10.3922,10.1666,0.00428939,-10.3922,7.32427,0.0042789,-7.63772,7.32427,0.0042789,-7.63772,10.1666,0.00428939,-10.3922,13.4117,0.00430143,-10.3922,10.5694,0.00429094,-7.63772,10.5694,0.00429094,-7.63772,13.4117,0.00430143,-10.3922,16.6242,0.00431335,-10.3922,13.8278,0.00430298,-7.63772,13.8278,0.00430298,-7.63772,16.6242,0.00431335}, 216);
IndexedFaceSet12.setCoord(&Coordinate14);

Shape9.setGeometry(&IndexedFaceSet12);

Scene7.addChild(&Shape9);

VisibilitySensor& VisibilitySensor15 =  VisibilitySensor();
VisibilitySensor15.setDEF(CString("VisibilitySensor"));
VisibilitySensor15.setSize(new float[]{1000,1000,1000});
Scene7.addChild(&VisibilitySensor15);

ROUTE& ROUTE16 =  ROUTE();
ROUTE16.setFromNode(CString("VisibilitySensor"));
ROUTE16.setFromField(CString("enterTime"));
ROUTE16.setToNode(CString("Movie"));
ROUTE16.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE16);

ROUTE& ROUTE17 =  ROUTE();
ROUTE17.setFromNode(CString("VisibilitySensor"));
ROUTE17.setFromField(CString("exitTime"));
ROUTE17.setToNode(CString("Movie"));
ROUTE17.setToField(CString("set_stopTime"));
Scene7.addChild(&ROUTE17);

X3D0.setScene(&Scene7);

}
