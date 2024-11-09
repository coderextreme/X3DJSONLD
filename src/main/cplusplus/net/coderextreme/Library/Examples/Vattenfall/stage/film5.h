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
meta6.setContent(CString("Mon, 27 Apr 2015 08:59:53 GMT"));
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
MovieTexture11.setUrl(new CString[]{CString(", "), CString("film5.mp4, "), CString("film5.mpvhttp://titania.create3000.de/fileadmin/cobweb/videos/film5.mp4")}, 3);
MovieTexture11.setLoop(true);
MovieTexture11.setStopTime(1);
Appearance10.addChild(MovieTexture11);

Shape9.addChild(&Appearance10);

IndexedFaceSet& IndexedFaceSet12 =  IndexedFaceSet();
IndexedFaceSet12.setSolid(false);
IndexedFaceSet12.setCoordIndex(new int32_t[]{0,1,2,3,-1,4,5,6,7,-1,8,9,10,11,-1,12,13,14,15,-1,16,17,18,19,-1,20,21,22,23,-1,24,25,26,27,-1,28,29,30,31,-1,32,33,34,35,-1,36,37,38,39,-1,40,41,42,43,-1,44,45,46,47,-1,48,49,50,51,-1,52,53,54,55,-1,56,57,58,59,-1,60,61,62,63,-1,64,65,66,67,-1,68,69,70,71,-1}, 90);
TextureCoordinate& TextureCoordinate13 =  TextureCoordinate();
TextureCoordinate13.setPoint(new float[]{0.0070907,0.658046,0.197683,0.659496,0.19732,0.987053,0.00672835,0.985604,0.994266,0.0149172,0.994266,0.638428,0.924905,0.638428,0.924905,0.0149172,0.917623,0.0154788,0.917623,0.638989,0.848259,0.638989,0.848259,0.0154788,0.840076,0.0157671,0.840076,0.639277,0.770714,0.639277,0.770714,0.0157671,0.765174,0.0154468,0.765174,0.638957,0.695812,0.638957,0.695812,0.0154468,0.687107,0.0153035,0.687107,0.638814,0.617745,0.638814,0.617745,0.0153035,0.610494,0.0158599,0.610494,0.63937,0.541132,0.63937,0.541132,0.0158599,0.53421,0.0152445,0.53421,0.638755,0.464848,0.638755,0.464848,0.0152445,0.458435,0.0159947,0.458435,0.639505,0.389074,0.639505,0.389074,0.0159947,0.381863,0.0159273,0.381863,0.639438,0.312503,0.639438,0.312503,0.0159273,0.304367,0.0151012,0.304367,0.638612,0.235005,0.638612,0.235005,0.0151012,0.228681,0.0150844,0.228681,0.638595,0.15932,0.638595,0.15932,0.0150844,0.152228,0.0144016,0.152228,0.637912,0.0828669,0.637912,0.0828669,0.0144016,0.0753645,0.0144016,0.0753645,0.637912,0.00603318,0.637912,0.00603318,0.0144016,0.802798,0.658929,0.993535,0.660535,0.994412,0.987605,0.803675,0.988629,0.603676,0.657943,0.794207,0.659687,0.793768,0.988511,0.604553,0.986767,0.405077,0.658991,0.594469,0.659697,0.593592,0.987644,0.405439,0.985824,0.207234,0.660359,0.394931,0.659716,0.393844,0.986548,0.206872,0.985742}, 144);
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
