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
meta3.setContent(CString("Sat, 25 Apr 2015 12:38:20 GMT"));
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
meta6.setContent(CString("Tue, 28 Apr 2015 02:31:10 GMT"));
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
MovieTexture11.setUrl(new CString[]{CString(", "), CString("film1.mp4, "), CString("film1.mpvhttp://titania.create3000.de/fileadmin/cobweb/videos/film1.mp4")}, 3);
MovieTexture11.setLoop(true);
MovieTexture11.setStopTime(1);
Appearance10.addChild(MovieTexture11);

Shape9.addChild(&Appearance10);

IndexedFaceSet& IndexedFaceSet12 =  IndexedFaceSet();
IndexedFaceSet12.setSolid(false);
IndexedFaceSet12.setCoordIndex(new int32_t[]{0,1,2,3,-1,4,5,6,7,-1,8,9,10,11,-1,12,13,14,15,-1,16,17,18,19,-1,20,21,22,23,-1,24,25,26,27,-1,28,29,30,31,-1,32,33,34,35,-1,36,37,38,39,-1,40,41,42,43,-1,44,45,46,47,-1,48,49,50,51,-1,52,53,54,55,-1,56,57,58,59,-1,60,61,62,63,-1,64,65,66,67,-1,68,69,70,71,-1}, 90);
TextureCoordinate& TextureCoordinate13 =  TextureCoordinate();
TextureCoordinate13.setPoint(new float[]{0.000149094,0.62583,0.156628,0.625405,0.156628,0.997781,0.000234652,0.999434,0.997642,0.000920385,0.997912,0.611335,0.93607,0.611335,0.9358,0.000920385,0.922,0.000920385,0.92227,0.611335,0.860427,0.611335,0.860158,0.000920385,0.844367,0.00888279,0.844637,0.619298,0.782795,0.619298,0.782525,0.00888279,0.764744,0.000920385,0.765013,0.611335,0.703171,0.611335,0.702902,0.000920385,0.68512,0.000920385,0.68539,0.611335,0.623548,0.611335,0.623278,0.000920385,0.609478,0.00888279,0.609748,0.619298,0.547906,0.619298,0.547636,0.00888279,0.533836,0.000920385,0.534106,0.611335,0.472264,0.611335,0.471994,0.000920385,0.450232,0.000920385,0.450501,0.611335,0.388659,0.611335,0.388389,0.000920385,0.374589,0.000920385,0.374859,0.611335,0.313017,0.611335,0.312747,0.000920385,0.294966,0.00888279,0.295236,0.619298,0.233393,0.619298,0.233124,0.00888279,0.219324,0.000920385,0.219593,0.611335,0.157751,0.611335,0.157482,0.000920385,0.1397,0.000920385,0.13997,0.611335,0.0781279,0.611335,0.0778582,0.000920385,0.0618422,0.0,0.0621119,0.610415,0.000269711,0.610415,0.0,0.0,0.836886,0.634869,0.997514,0.63109,0.997514,0.99581,0.836413,0.9977,0.629478,0.639731,0.785854,0.639731,0.785854,0.998782,0.629005,0.998782,0.4161,0.643833,0.573893,0.640054,0.574366,0.995326,0.4161,0.999105,0.206268,0.631709,0.36325,0.637185,0.362337,0.998609,0.206268,0.996783}, 144);
IndexedFaceSet12.setTexCoord(&TextureCoordinate13);

Coordinate& Coordinate14 =  Coordinate();
Coordinate14.setPoint(new float[]{-10.3922,19.5508,0.00432408,-10.3922,17.011,0.00431478,-7.63772,17.011,0.00431478,-7.63772,19.5508,0.00432408,25.5518,0.433584,0.303677,25.5518,3.61268,0.303688,23.7736,3.61268,0.303688,23.7736,0.433584,0.303677,23.0008,0.433584,0.303677,23.0008,3.61268,0.303688,21.2225,3.61268,0.303688,21.2225,0.433584,0.303677,20.45,0.433584,0.303677,20.45,3.61268,0.303688,18.6718,3.61268,0.303688,18.6718,0.433584,0.303677,17.8931,0.433584,0.303677,17.8931,3.61268,0.303688,16.1149,3.61268,0.303688,16.1149,0.433584,0.303677,15.3497,0.433584,0.303677,15.3497,3.61268,0.303688,13.5715,3.61268,0.303688,13.5715,0.433584,0.303677,12.7981,0.433584,0.303677,12.7981,3.61268,0.303688,11.0199,3.61268,0.303688,11.0199,0.433584,0.303677,10.2448,0.433584,0.303677,10.2448,3.61268,0.303688,8.46658,3.61268,0.303688,8.46658,0.433584,0.303677,7.69545,0.433584,0.303677,7.69545,3.61268,0.303688,5.91727,3.61268,0.303688,5.91727,0.433584,0.303677,5.14532,0.433584,0.303677,5.14532,3.61268,0.303688,3.36718,3.61268,0.303688,3.36718,0.433584,0.303677,2.60324,0.433584,0.303677,2.60324,3.61268,0.303688,0.825047,3.61268,0.303688,0.825047,0.433584,0.303677,0.0533123,0.433584,0.303677,0.0533123,3.61268,0.303688,-1.72488,3.61268,0.303688,-1.72488,0.433584,0.303677,-2.50931,0.433584,0.303677,-2.50931,3.61268,0.303688,-4.28749,3.61268,0.303688,-4.28749,0.433584,0.303677,-5.05642,0.433584,0.303677,-5.05642,3.61268,0.303688,-6.83384,3.61268,0.303688,-6.83384,0.433584,0.303677,-10.3922,6.93197,0.00427747,-10.3922,4.07543,0.00426698,-7.63772,4.07543,0.00426698,-7.63772,6.93197,0.00427747,-10.3922,10.1666,0.00428939,-10.3922,7.32427,0.0042789,-7.63772,7.32427,0.0042789,-7.63772,10.1666,0.00428939,-10.3922,13.4117,0.00430143,-10.3922,10.5694,0.00429094,-7.63772,10.5694,0.00429094,-7.63772,13.4117,0.00430143,-10.3922,16.6242,0.00431335,-10.3922,13.8278,0.00430298,-7.63772,13.8278,0.00430298,-7.63772,16.6242,0.00431335}, 216);
IndexedFaceSet12.setCoord(&Coordinate14);

Shape9.setGeometry(&IndexedFaceSet12);

Scene7.addChild(&Shape9);

VisibilitySensor& VisibilitySensor15 =  VisibilitySensor();
VisibilitySensor15.setDEF(CString("VisibilitySensor"));
VisibilitySensor15.setSize(new float[]{1000.0,1000.0,1000.0});
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

//}
