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
meta3.setContent(CString("Mon, 09 Nov 2015 13:19:33 GMT"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("creator"));
meta4.setContent(CString("Holger Seelig"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("generator"));
meta5.setContent(CString("Titania V1.2.1, http://titania.create3000.de"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("modified"));
meta6.setContent(CString("Mon, 09 Nov 2015 13:19:33 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
Group& Group8 =  Group();
Group& Group9 =  Group();
TimeSensor& TimeSensor10 =  TimeSensor();
TimeSensor10.setDEF(CString("TimeSensor_Innertube-TIMER"));
TimeSensor10.setCycleInterval(2);
TimeSensor10.setLoop(true);
TimeSensor10.setStartTime(1);
Group9.addChild(&TimeSensor10);

Transform& Transform11 =  Transform();
Transform11.setDEF(CString("Innertube_boolean-ROOT"));
Transform11.setTranslation(new float[]{-0.05191,0.0,-0.05077});
TimeSensor& TimeSensor12 =  TimeSensor();
TimeSensor12.setDEF(CString("Innertube_boolean-TIMER"));
TimeSensor12.setCycleInterval(2);
Transform11.addChild(&TimeSensor12);

Shape& Shape13 =  Shape();
Appearance& Appearance14 =  Appearance();
Material& Material15 =  Material();
Material15.setDiffuseColor(new float[]{0.0,0.0,0.0});
Material15.setEmissiveColor(new float[]{0.007843,0.3922,0.6157});
Material15.setShininess(0);
Appearance14.addChild(&Material15);

Shape13.addChild(&Appearance14);

IndexedFaceSet& IndexedFaceSet16 =  IndexedFaceSet();
IndexedFaceSet16.setDEF(CString("Innertube_boolean-FACES"));
IndexedFaceSet16.setColorIndex(new int[]{0,2,3,-1,3,1,0,-1,0,1,5,-1,5,4,0,-1,1,3,7,-1,7,5,1,-1,3,2,6,-1,6,7,3,-1,2,0,4,-1,4,6,2,-1}, 40);
IndexedFaceSet16.setCoordIndex(new int32_t[]{0,2,3,-1,3,1,0,-1,0,1,5,-1,5,4,0,-1,1,3,7,-1,7,5,1,-1,3,2,6,-1,6,7,3,-1,2,0,4,-1,4,6,2,-1}, 40);
CColor& Color17 =  CColor();
Color17.setColor(new float[]{0.007843,0.3922,0.6157,0.007843,0.3922,0.6157,0.007843,0.3922,0.6157,0.007843,0.3922,0.6157,0.007843,0.3922,0.6157,0.007843,0.3922,0.6157,0.007843,0.3922,0.6157,0.007843,0.3922,0.6157}, 24);
IndexedFaceSet16.setColor(&Color17);

Coordinate& Coordinate18 =  Coordinate();
Coordinate18.setDEF(CString("Innertube_boolean-COORD"));
Coordinate18.setPoint(new float[]{-2.523,0.0,2.66,2.605,0.0,2.66,-2.523,0.0,-5.753,2.605,0.0,-5.753,-2.523,1.182,2.66,2.605,1.182,2.66,-2.523,1.182,-5.753,2.605,1.182,-5.753}, 24);
IndexedFaceSet16.setCoord(&Coordinate18);

Shape13.setGeometry(&IndexedFaceSet16);

Transform11.addChild(&Shape13);

Transform& Transform19 =  Transform();
Transform19.setDEF(CString("Innertube-ROOT"));
Transform19.setTranslation(new float[]{0.05259,-0.002682,0.04626});
Transform19.setRotation(new float[]{-0.00217899,0.999995,0.00217899,1.571});
Transform19.setScaleOrientation(new float[]{0.834748,-0.4924,-0.24645,0.00573601});
OrientationInterpolator& OrientationInterpolator20 =  OrientationInterpolator();
OrientationInterpolator20.setDEF(CString("Innertube-ROT-INTERP"));
OrientationInterpolator20.setKey(new float[]{0.0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1.0}, 11);
OrientationInterpolator20.setKeyValue(new float[]{-0.00217899,0.999995,0.00217899,1.571,-0.01416,0.999799,0.01416,1.571,-0.021251,0.999548,0.021251,1.571,-0.0153195,0.999765,0.0153195,1.571,-0.00403993,0.999984,0.00403993,1.571,0.00724634,0.999947,-0.00724634,1.571,0.0164405,0.99973,-0.0164405,1.571,0.0214309,0.999541,-0.0214309,1.571,0.0196902,0.999612,-0.0196902,1.571,0.0104999,0.99989,-0.0104999,1.571,-0.00217899,0.999995,0.00217899,1.571}, 44);
Transform19.addChild(&OrientationInterpolator20);

Shape& Shape21 =  Shape();
Appearance& Appearance22 =  Appearance();
Material& Material23 =  Material();
Material23.setDiffuseColor(new float[]{0.2353,0.2353,0.2353});
Material23.setShininess(0.25);
Appearance22.addChild(&Material23);

Shape21.addChild(&Appearance22);

IndexedFaceSet& IndexedFaceSet24 =  IndexedFaceSet();
IndexedFaceSet24.setDEF(CString("Innertube-FACES"));
IndexedFaceSet24.setCreaseAngle(3);
IndexedFaceSet24.setColorIndex(new int[]{0,9,8,-1,0,1,9,-1,2,11,10,-1,2,3,11,-1,3,12,11,-1,3,4,12,-1,4,13,12,-1,4,5,13,-1,5,14,13,-1,5,6,14,-1,6,15,14,-1,6,7,15,-1,7,8,15,-1,7,0,8,-1,8,17,16,-1,8,9,17,-1,10,19,18,-1,10,11,19,-1,11,20,19,-1,11,12,20,-1,12,21,20,-1,12,13,21,-1,13,22,21,-1,13,14,22,-1,14,23,22,-1,14,15,23,-1,15,16,23,-1,15,8,16,-1,16,25,24,-1,16,17,25,-1,18,27,26,-1,18,19,27,-1,19,28,27,-1,19,20,28,-1,20,29,28,-1,20,21,29,-1,21,30,29,-1,21,22,30,-1,22,31,30,-1,22,23,31,-1,23,24,31,-1,23,16,24,-1,24,33,32,-1,24,25,33,-1,26,35,34,-1,26,27,35,-1,27,36,35,-1,27,28,36,-1,28,37,36,-1,28,29,37,-1,29,38,37,-1,29,30,38,-1,30,39,38,-1,30,31,39,-1,31,32,39,-1,31,24,32,-1,32,41,40,-1,32,33,41,-1,34,43,42,-1,34,35,43,-1,35,44,43,-1,35,36,44,-1,36,45,44,-1,36,37,45,-1,37,46,45,-1,37,38,46,-1,38,47,46,-1,38,39,47,-1,39,40,47,-1,39,32,40,-1,40,49,48,-1,40,41,49,-1,42,51,50,-1,42,43,51,-1,43,52,51,-1,43,44,52,-1,44,53,52,-1,44,45,53,-1,45,54,53,-1,45,46,54,-1,46,55,54,-1,46,47,55,-1,47,48,55,-1,47,40,48,-1,48,57,56,-1,48,49,57,-1,50,59,58,-1,50,51,59,-1,51,60,59,-1,51,52,60,-1,52,61,60,-1,52,53,61,-1,53,62,61,-1,53,54,62,-1,54,63,62,-1,54,55,63,-1,55,56,63,-1,55,48,56,-1,56,1,0,-1,56,57,1,-1,58,3,2,-1,58,59,3,-1,59,4,3,-1,59,60,4,-1,60,5,4,-1,60,61,5,-1,61,6,5,-1,61,62,6,-1,62,7,6,-1,62,63,7,-1,63,0,7,-1,63,56,0,-1}, 448);
IndexedFaceSet24.setCoordIndex(new int32_t[]{0,9,8,-1,0,1,9,-1,2,11,10,-1,2,3,11,-1,3,12,11,-1,3,4,12,-1,4,13,12,-1,4,5,13,-1,5,14,13,-1,5,6,14,-1,6,15,14,-1,6,7,15,-1,7,8,15,-1,7,0,8,-1,8,17,16,-1,8,9,17,-1,10,19,18,-1,10,11,19,-1,11,20,19,-1,11,12,20,-1,12,21,20,-1,12,13,21,-1,13,22,21,-1,13,14,22,-1,14,23,22,-1,14,15,23,-1,15,16,23,-1,15,8,16,-1,16,25,24,-1,16,17,25,-1,18,27,26,-1,18,19,27,-1,19,28,27,-1,19,20,28,-1,20,29,28,-1,20,21,29,-1,21,30,29,-1,21,22,30,-1,22,31,30,-1,22,23,31,-1,23,24,31,-1,23,16,24,-1,24,33,32,-1,24,25,33,-1,26,35,34,-1,26,27,35,-1,27,36,35,-1,27,28,36,-1,28,37,36,-1,28,29,37,-1,29,38,37,-1,29,30,38,-1,30,39,38,-1,30,31,39,-1,31,32,39,-1,31,24,32,-1,32,41,40,-1,32,33,41,-1,34,43,42,-1,34,35,43,-1,35,44,43,-1,35,36,44,-1,36,45,44,-1,36,37,45,-1,37,46,45,-1,37,38,46,-1,38,47,46,-1,38,39,47,-1,39,40,47,-1,39,32,40,-1,40,49,48,-1,40,41,49,-1,42,51,50,-1,42,43,51,-1,43,52,51,-1,43,44,52,-1,44,53,52,-1,44,45,53,-1,45,54,53,-1,45,46,54,-1,46,55,54,-1,46,47,55,-1,47,48,55,-1,47,40,48,-1,48,57,56,-1,48,49,57,-1,50,59,58,-1,50,51,59,-1,51,60,59,-1,51,52,60,-1,52,61,60,-1,52,53,61,-1,53,62,61,-1,53,54,62,-1,54,63,62,-1,54,55,63,-1,55,56,63,-1,55,48,56,-1,56,1,0,-1,56,57,1,-1,58,3,2,-1,58,59,3,-1,59,4,3,-1,59,60,4,-1,60,5,4,-1,60,61,5,-1,61,6,5,-1,61,62,6,-1,62,7,6,-1,62,63,7,-1,63,0,7,-1,63,56,0,-1}, 448);
CColor& Color25 =  CColor();
Color25.setColor(new float[]{0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.4353,0.4353,0.4353,0.4353,0.4353,0.4353,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.4353,0.4353,0.4353,0.4353,0.4353,0.4353,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.4353,0.4353,0.4353,0.4353,0.4353,0.4353,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.4353,0.4353,0.4353,0.4353,0.4353,0.4353,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.4353,0.4353,0.4353,0.4353,0.4353,0.4353,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.4353,0.4353,0.4353,0.4353,0.4353,0.4353,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.4353,0.4353,0.4353,0.4353,0.4353,0.4353,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.1647,0.4353,0.4353,0.4353,0.4353,0.4353,0.4353,0.1647,0.1647,0.1647}, 192);
IndexedFaceSet24.setColor(&Color25);

Coordinate& Coordinate26 =  Coordinate();
Coordinate26.setDEF(CString("Innertube-COORD"));
Coordinate26.setPoint(new float[]{0.0,0.0,-2.37,0.0,0.4114,-2.237,0.0,0.4114,-1.104,0.0,0.0,-0.9704,0.0,-0.4114,-1.104,0.0,-0.6657,-1.454,0.0,-0.6657,-1.887,0.0,-0.4114,-2.237,1.676,0.0,-1.676,1.582,0.4114,-1.582,0.7807,0.4114,-0.7807,0.6862,0.0,-0.6862,0.7807,-0.4114,-0.7807,1.028,-0.6657,-1.028,1.334,-0.6657,-1.334,1.582,-0.4114,-1.582,2.37,0.0,0.0,2.237,0.4114,0.0,1.104,0.4114,0.0,0.9704,0.0,0.0,1.104,-0.4114,0.0,1.454,-0.6657,0.0,1.887,-0.6657,0.0,2.237,-0.4114,0.0,1.676,0.0,1.676,1.582,0.4114,1.582,0.7807,0.4114,0.7807,0.6862,0.0,0.6862,0.7807,-0.4114,0.7807,1.028,-0.6657,1.028,1.334,-0.6657,1.334,1.582,-0.4114,1.582,0.0,0.0,2.37,0.0,0.4114,2.237,0.0,0.4114,1.104,0.0,0.0,0.9704,0.0,-0.4114,1.104,0.0,-0.6657,1.454,0.0,-0.6657,1.887,0.0,-0.4114,2.237,-1.676,0.0,1.676,-1.582,0.4114,1.582,-0.7807,0.4114,0.7807,-0.6862,0.0,0.6862,-0.7807,-0.4114,0.7807,-1.028,-0.6657,1.028,-1.334,-0.6657,1.334,-1.582,-0.4114,1.582,-2.37,0.0,0.0,-2.237,0.4114,0.0,-1.104,0.4114,0.0,-0.9704,0.0,0.0,-1.104,-0.4114,0.0,-1.454,-0.6657,0.0,-1.887,-0.6657,0.0,-2.237,-0.4114,0.0,-1.676,0.0,-1.676,-1.582,0.4114,-1.582,-0.7807,0.4114,-0.7807,-0.6862,0.0,-0.6862,-0.7807,-0.4114,-0.7807,-1.028,-0.6657,-1.028,-1.334,-0.6657,-1.334,-1.582,-0.4114,-1.582}, 192);
IndexedFaceSet24.setCoord(&Coordinate26);

Shape21.setGeometry(&IndexedFaceSet24);

Transform19.addChild(&Shape21);

Transform& Transform27 =  Transform();
Transform27.setDEF(CString("Innertube_L_leg-ROOT"));
Transform27.setTranslation(new float[]{2.832,-0.4993,-0.8342});
Transform27.setRotation(new float[]{0.0107304,-0.00139006,0.999942,0.3562});
Transform27.setScaleOrientation(new float[]{0.0,-0.0296788,-0.999559,0.0631478});
PositionInterpolator& PositionInterpolator28 =  PositionInterpolator();
PositionInterpolator28.setDEF(CString("Innertube_L_leg-POS-INTERP"));
PositionInterpolator28.setKey(new float[]{0.0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1.0}, 11);
PositionInterpolator28.setKeyValue(new float[]{2.832,-0.4993,-0.8342,2.897,-0.4733,-0.8304,3.104,-0.3649,-0.8174,3.188,-0.3085,-0.8161,3.216,-0.2875,-0.8233,3.222,-0.2834,-0.8288,3.199,-0.3004,-0.8233,3.167,-0.3234,-0.8193,3.079,-0.3805,-0.8225,2.937,-0.4554,-0.8298,2.832,-0.4993,-0.8342}, 33);
Transform27.addChild(&PositionInterpolator28);

OrientationInterpolator& OrientationInterpolator29 =  OrientationInterpolator();
OrientationInterpolator29.setDEF(CString("Innertube_L_leg-ROT-INTERP"));
OrientationInterpolator29.setKey(new float[]{0.0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1.0}, 11);
OrientationInterpolator29.setKeyValue(new float[]{0.0107304,-0.00139006,0.999942,0.3562,0.006565,-0.01893,0.999799,0.4029,-0.000998629,-0.0462613,0.998929,0.5599,-0.00204294,-0.0381489,0.99927,0.627,-0.000941888,-0.0149998,0.999887,0.6502,0.0,0.0,1.0,0.6545,-0.00026581,-0.0179207,0.999839,0.6358,-0.000293105,-0.0341306,0.999417,0.6097,0.00150899,-0.0347598,0.999395,0.5396,0.00600693,-0.0197098,0.999788,0.4325,0.0107304,-0.00139006,0.999942,0.3562}, 44);
Transform27.addChild(&OrientationInterpolator29);

Shape& Shape30 =  Shape();
Appearance& Appearance31 =  Appearance();
Material& Material32 =  Material();
Material32.setDiffuseColor(new float[]{0.9804,0.7686,0.7255});
Material32.setShininess(0.25);
Appearance31.addChild(&Material32);

Shape30.addChild(&Appearance31);

IndexedFaceSet& IndexedFaceSet33 =  IndexedFaceSet();
IndexedFaceSet33.setDEF(CString("Innertube_L_leg-FACES"));
IndexedFaceSet33.setCreaseAngle(3);
IndexedFaceSet33.setColorIndex(new int[]{0,9,8,-1,0,1,9,-1,1,10,9,-1,1,2,10,-1,2,11,10,-1,2,3,11,-1,3,12,11,-1,3,4,12,-1,4,13,12,-1,4,5,13,-1,5,14,13,-1,5,6,14,-1,6,15,14,-1,6,7,15,-1,7,8,15,-1,7,0,8,-1}, 64);
IndexedFaceSet33.setCoordIndex(new int32_t[]{0,9,8,-1,0,1,9,-1,1,10,9,-1,1,2,10,-1,2,11,10,-1,2,3,11,-1,3,12,11,-1,3,4,12,-1,4,13,12,-1,4,5,13,-1,5,14,13,-1,5,6,14,-1,6,15,14,-1,6,7,15,-1,7,8,15,-1,7,0,8,-1}, 64);
CColor& Color34 =  CColor();
Color34.setColor(new float[]{0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549}, 48);
IndexedFaceSet33.setColor(&Color34);

Coordinate& Coordinate35 =  Coordinate();
Coordinate35.setDEF(CString("Innertube_L_leg-COORD"));
Coordinate35.setPoint(new float[]{0.2432,0.0,0.0,0.172,0.0,-0.172,0.0,0.0,-0.2432,-0.172,0.0,-0.172,-0.2432,0.0,0.0,-0.172,0.0,0.172,0.0,0.0,0.2432,0.172,0.0,0.172,0.2432,1.5,0.0,0.172,1.5,-0.172,0.0,1.5,-0.2432,-0.172,1.5,-0.172,-0.2432,1.5,0.0,-0.172,1.5,0.172,0.0,1.5,0.2432,0.172,1.5,0.172}, 48);
IndexedFaceSet33.setCoord(&Coordinate35);

Shape30.setGeometry(&IndexedFaceSet33);

Transform27.addChild(&Shape30);

Transform& Transform36 =  Transform();
Transform36.setDEF(CString("Innertube_L_flipper-ROOT"));
Transform36.setTranslation(new float[]{-0.05453,-1.021,-0.05153});
Transform36.setRotation(new float[]{-0.549493,-0.637292,-0.540293,1.897});
Transform36.setScale(new float[]{1.0,1.343,0.9976});
Transform36.setScaleOrientation(new float[]{-0.317708,0.946024,-0.0640316,0.2952});
PositionInterpolator& PositionInterpolator37 =  PositionInterpolator();
PositionInterpolator37.setDEF(CString("Innertube_L_flipper-POS-INTERP"));
PositionInterpolator37.setKey(new float[]{0.0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1.0}, 11);
PositionInterpolator37.setKeyValue(new float[]{-0.05453,-1.021,-0.05153,-0.2899,-0.9813,-0.05595,-0.46,-0.915,-0.05577,-0.1708,-1.008,-0.0556,0.4498,-0.9173,-0.02782,0.7328,-0.7119,0.0002907,0.6523,-0.7863,-0.009747,0.5533,-0.8589,-0.0198,0.3896,-0.9445,-0.03199,0.1714,-1.007,-0.04351,-0.05453,-1.021,-0.05153}, 33);
Transform36.addChild(&PositionInterpolator37);

OrientationInterpolator& OrientationInterpolator38 =  OrientationInterpolator();
OrientationInterpolator38.setDEF(CString("Innertube_L_flipper-ROT-INTERP"));
OrientationInterpolator38.setKey(new float[]{0.0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1.0}, 11);
OrientationInterpolator38.setKeyValue(new float[]{-0.549493,-0.637292,-0.540293,1.897,-0.599003,-0.538203,-0.592903,2.012,-0.629609,-0.461607,-0.624909,2.105,-0.576491,-0.587791,-0.567591,1.948,-0.396498,-0.836197,-0.378899,1.701,-0.255398,-0.938192,-0.233598,1.627,-0.302699,-0.910597,-0.281399,1.644,-0.352683,-0.874758,-0.332284,1.668,-0.420293,-0.813087,-0.402794,1.72,-0.491279,-0.728069,-0.47808,1.801,-0.549493,-0.637292,-0.540293,1.897}, 44);
Transform36.addChild(&OrientationInterpolator38);

Shape& Shape39 =  Shape();
Appearance& Appearance40 =  Appearance();
Material& Material41 =  Material();
Material41.setDiffuseColor(new float[]{0.8941,0.8392,0.6});
Appearance40.addChild(&Material41);

Shape39.addChild(&Appearance40);

IndexedFaceSet& IndexedFaceSet42 =  IndexedFaceSet();
IndexedFaceSet42.setDEF(CString("Innertube_L_flipper-FACES"));
IndexedFaceSet42.setColorIndex(new int[]{8,6,1,-1,6,9,1,-1,6,5,9,-1,5,6,7,-1,8,1,5,-1,8,5,7,-1,3,5,1,-1,2,0,4,-1,4,6,10,-1,6,0,10,-1,6,4,7,-1,0,7,4,-1,8,0,6,-1,0,8,7,-1,1,9,3,-1,5,3,9,-1,4,10,2,-1,10,0,2,-1}, 72);
IndexedFaceSet42.setCoordIndex(new int32_t[]{8,6,1,-1,6,9,1,-1,6,5,9,-1,5,6,7,-1,8,1,5,-1,8,5,7,-1,3,5,1,-1,2,0,4,-1,4,6,10,-1,6,0,10,-1,6,4,7,-1,0,7,4,-1,8,0,6,-1,0,8,7,-1,1,9,3,-1,5,3,9,-1,4,10,2,-1,10,0,2,-1}, 72);
CColor& Color43 =  CColor();
Color43.setColor(new float[]{0.6588,0.451,0.0,0.6588,0.451,0.0,1.0,0.8941,0.0,1.0,0.8941,0.0,1.0,0.8941,0.0,1.0,0.8941,0.0,1.0,0.8941,0.0,1.0,0.8941,0.0,0.6588,0.451,0.0,0.6588,0.451,0.0,0.6588,0.451,0.0}, 33);
IndexedFaceSet42.setColor(&Color43);

Coordinate& Coordinate44 =  Coordinate();
Coordinate44.setDEF(CString("Innertube_L_flipper-COORD"));
Coordinate44.setPoint(new float[]{-0.3059,0.0,1.228,0.3059,0.0,1.228,-0.7598,0.07611,-1.079,0.7598,0.07611,-1.079,-0.3059,0.1522,1.228,0.3059,0.1522,1.228,0.0,0.07611,-1.258,0.0,0.1522,1.374,0.0,0.0,1.374,0.3598,0.07611,-1.037,-0.4,0.07611,-1.037}, 33);
IndexedFaceSet42.setCoord(&Coordinate44);

Shape39.setGeometry(&IndexedFaceSet42);

Transform36.addChild(&Shape39);

Transform& Transform45 =  Transform();
Transform45.setDEF(CString("Innertube_foot_L-ROOT"));
Transform45.setTranslation(new float[]{0.009344,0.2285,1.015});
Transform45.setRotation(new float[]{0.548102,0.543802,-0.635502,2.018});
Transform45.setScale(new float[]{1.002,1.0,0.7445});
Transform45.setScaleOrientation(new float[]{-0.0369916,0.178508,-0.983243,0.2825});
Shape& Shape46 =  Shape();
Appearance& Appearance47 =  Appearance();
Material& Material48 =  Material();
Material48.setDiffuseColor(new float[]{0.9804,0.7686,0.7255});
Material48.setShininess(0.25);
Appearance47.addChild(&Material48);

Shape46.addChild(&Appearance47);

IndexedFaceSet& IndexedFaceSet49 =  IndexedFaceSet();
IndexedFaceSet49.setDEF(CString("Innertube_foot_L-FACES"));
IndexedFaceSet49.setCreaseAngle(3);
IndexedFaceSet49.setColorIndex(new int[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,1,-1,1,8,9,-1,1,9,2,-1,2,9,10,-1,2,10,3,-1,3,10,11,-1,3,11,4,-1,4,11,12,-1,4,12,5,-1,5,12,13,-1,5,13,6,-1,6,13,14,-1,6,14,7,-1,7,14,8,-1,7,8,1,-1,15,9,8,-1,15,10,9,-1,15,11,10,-1,15,12,11,-1,15,13,12,-1,15,14,13,-1,15,8,14,-1}, 112);
IndexedFaceSet49.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,1,-1,1,8,9,-1,1,9,2,-1,2,9,10,-1,2,10,3,-1,3,10,11,-1,3,11,4,-1,4,11,12,-1,4,12,5,-1,5,12,13,-1,5,13,6,-1,6,13,14,-1,6,14,7,-1,7,14,8,-1,7,8,1,-1,15,9,8,-1,15,10,9,-1,15,11,10,-1,15,12,11,-1,15,13,12,-1,15,14,13,-1,15,8,14,-1}, 112);
CColor& Color50 =  CColor();
Color50.setColor(new float[]{0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549}, 48);
IndexedFaceSet49.setColor(&Color50);

Coordinate& Coordinate51 =  Coordinate();
Coordinate51.setDEF(CString("Innertube_foot_L-COORD"));
Coordinate51.setPoint(new float[]{0.0,0.2454,0.0,0.003793,0.1584,-0.1692,-0.1576,0.1608,-0.1257,-0.1965,0.1608,0.04486,-0.1069,0.1608,0.08578,0.07954,0.1608,0.07121,0.7156,0.1608,-0.002197,0.1576,0.1608,-0.1257,0.003793,-0.05973,-0.219,-0.1965,-0.05738,-0.1567,-0.2451,-0.05738,0.05594,-0.1285,-0.05738,0.1306,0.1053,-0.05738,0.09845,0.7641,-0.05738,0.008882,0.1965,-0.05738,-0.1567,0.0,-0.2395,0.0}, 48);
IndexedFaceSet49.setCoord(&Coordinate51);

Shape46.setGeometry(&IndexedFaceSet49);

Transform45.addChild(&Shape46);

Transform36.addChild(&Transform45);

Transform27.addChild(&Transform36);

Transform19.addChild(&Transform27);

Transform& Transform52 =  Transform();
Transform52.setDEF(CString("Innertube_R_leg-ROOT"));
Transform52.setTranslation(new float[]{3.222,-0.2834,0.8137});
Transform52.setRotation(new float[]{0.0,0.0,1.0,0.6545});
Transform52.setScaleOrientation(new float[]{0.0,-0.00266799,0.999996,0.7854});
PositionInterpolator& PositionInterpolator53 =  PositionInterpolator();
PositionInterpolator53.setDEF(CString("Innertube_R_leg-POS-INTERP"));
PositionInterpolator53.setKey(new float[]{0.0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1.0}, 11);
PositionInterpolator53.setKeyValue(new float[]{3.222,-0.2834,0.8137,3.199,-0.3004,0.8192,3.167,-0.3234,0.8232,3.079,-0.3805,0.82,2.937,-0.4554,0.8127,2.832,-0.4993,0.8083,2.897,-0.4733,0.8121,3.104,-0.3649,0.8251,3.188,-0.3085,0.8264,3.216,-0.2875,0.8192,3.222,-0.2835,0.8144}, 33);
Transform52.addChild(&PositionInterpolator53);

OrientationInterpolator& OrientationInterpolator54 =  OrientationInterpolator();
OrientationInterpolator54.setDEF(CString("Innertube_R_leg-ROT-INTERP"));
OrientationInterpolator54.setKey(new float[]{0.0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1.0}, 11);
OrientationInterpolator54.setKeyValue(new float[]{0.0,0.0,1.0,0.6545,-0.00026581,-0.0179207,0.999839,0.6358,-0.000293105,-0.0341306,0.999417,0.6097,0.00150899,-0.0347598,0.999395,0.5396,0.00600693,-0.0197098,0.999788,0.4325,0.0107304,-0.00139006,0.999942,0.3562,0.006565,-0.01893,0.999799,0.4029,-0.000998629,-0.0462613,0.998929,0.5599,-0.00204294,-0.0381489,0.99927,0.627,-0.000941888,-0.0149998,0.999887,0.6502,-0.0001246,-0.001844,0.999998,0.6544}, 44);
Transform52.addChild(&OrientationInterpolator54);

Shape& Shape55 =  Shape();
Appearance& Appearance56 =  Appearance();
Material& Material57 =  Material();
Material57.setDiffuseColor(new float[]{0.9804,0.7686,0.7255});
Material57.setShininess(0.25);
Appearance56.addChild(&Material57);

Shape55.addChild(&Appearance56);

IndexedFaceSet& IndexedFaceSet58 =  IndexedFaceSet();
IndexedFaceSet58.setUSE(CString("Innertube_L_leg-FACES"));
Shape55.setGeometry(&IndexedFaceSet58);

Transform52.addChild(&Shape55);

Transform& Transform59 =  Transform();
Transform59.setDEF(CString("Innertube_R_flipper-ROOT"));
Transform59.setTranslation(new float[]{0.7328,-0.7119,0.00338});
Transform59.setRotation(new float[]{-0.255398,-0.938192,-0.233598,1.627});
Transform59.setScale(new float[]{1.0,1.343,0.9976});
Transform59.setScaleOrientation(new float[]{-0.317708,0.946024,-0.0640316,0.2952});
PositionInterpolator& PositionInterpolator60 =  PositionInterpolator();
PositionInterpolator60.setDEF(CString("Innertube_R_flipper-POS-INTERP"));
PositionInterpolator60.setKey(new float[]{0.0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1.0}, 11);
PositionInterpolator60.setKeyValue(new float[]{0.7328,-0.7119,0.00338,0.6326,-0.8022,-0.008813,0.5071,-0.8869,-0.02059,0.3354,-0.9651,-0.03218,0.1384,-1.013,-0.04181,-0.06012,-1.021,-0.04859,-0.2865,-0.9823,-0.05284,-0.4595,-0.9153,-0.05269,-0.1708,-1.008,-0.05251,0.4498,-0.9173,-0.02473,0.7328,-0.7119,0.00338}, 33);
Transform59.addChild(&PositionInterpolator60);

OrientationInterpolator& OrientationInterpolator61 =  OrientationInterpolator();
OrientationInterpolator61.setDEF(CString("Innertube_R_flipper-ROT-INTERP"));
OrientationInterpolator61.setKey(new float[]{0.0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1.0}, 11);
OrientationInterpolator61.setKeyValue(new float[]{-0.255398,-0.938192,-0.233598,1.627,-0.313304,-0.903613,-0.292104,1.648,-0.373312,-0.857628,-0.353712,1.682,-0.439697,-0.792194,-0.423197,1.739,-0.500608,-0.715011,-0.488007,1.814,-0.550788,-0.634986,-0.541688,1.9,-0.598382,-0.539684,-0.592182,2.01,-0.629501,-0.461901,-0.624801,2.105,-0.576491,-0.587791,-0.567591,1.948,-0.396498,-0.836197,-0.378899,1.701,-0.255398,-0.938192,-0.233598,1.627}, 44);
Transform59.addChild(&OrientationInterpolator61);

Shape& Shape62 =  Shape();
Appearance& Appearance63 =  Appearance();
Material& Material64 =  Material();
Material64.setDiffuseColor(new float[]{0.8941,0.8392,0.6});
Appearance63.addChild(&Material64);

Shape62.addChild(&Appearance63);

IndexedFaceSet& IndexedFaceSet65 =  IndexedFaceSet();
IndexedFaceSet65.setUSE(CString("Innertube_L_flipper-FACES"));
Shape62.setGeometry(&IndexedFaceSet65);

Transform59.addChild(&Shape62);

Transform& Transform66 =  Transform();
Transform66.setDEF(CString("Innertube_foot_R-ROOT"));
Transform66.setTranslation(new float[]{0.000116,0.2244,0.9932});
Transform66.setRotation(new float[]{0.552227,0.536026,-0.638531,2.029});
Transform66.setScale(new float[]{1.002,1.0,0.7445});
Transform66.setScaleOrientation(new float[]{-0.102804,0.168407,-0.980342,0.2838});
Shape& Shape67 =  Shape();
Appearance& Appearance68 =  Appearance();
Material& Material69 =  Material();
Material69.setDiffuseColor(new float[]{0.9804,0.7686,0.7255});
Material69.setShininess(0.25);
Appearance68.addChild(&Material69);

Shape67.addChild(&Appearance68);

IndexedFaceSet& IndexedFaceSet70 =  IndexedFaceSet();
IndexedFaceSet70.setDEF(CString("Innertube_foot_R-FACES"));
IndexedFaceSet70.setCreaseAngle(3);
IndexedFaceSet70.setColorIndex(new int[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,1,-1,1,8,9,-1,1,9,2,-1,2,9,10,-1,2,10,3,-1,3,10,11,-1,3,11,4,-1,4,11,12,-1,4,12,5,-1,5,12,13,-1,5,13,6,-1,6,13,14,-1,6,14,7,-1,7,14,8,-1,7,8,1,-1,15,9,8,-1,15,10,9,-1,15,11,10,-1,15,12,11,-1,15,13,12,-1,15,14,13,-1,15,8,14,-1}, 112);
IndexedFaceSet70.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,1,-1,1,8,9,-1,1,9,2,-1,2,9,10,-1,2,10,3,-1,3,10,11,-1,3,11,4,-1,4,11,12,-1,4,12,5,-1,5,12,13,-1,5,13,6,-1,6,13,14,-1,6,14,7,-1,7,14,8,-1,7,8,1,-1,15,9,8,-1,15,10,9,-1,15,11,10,-1,15,12,11,-1,15,13,12,-1,15,14,13,-1,15,8,14,-1}, 112);
CColor& Color71 =  CColor();
Color71.setColor(new float[]{0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549,0.7843,0.6275,0.549}, 48);
IndexedFaceSet70.setColor(&Color71);

Coordinate& Coordinate72 =  Coordinate();
Coordinate72.setDEF(CString("Innertube_foot_R-COORD"));
Coordinate72.setPoint(new float[]{0.0,0.2454,0.0,-0.04862,0.1547,-0.1776,-0.1576,0.1608,-0.1257,-0.1965,0.1608,0.04486,-0.1069,0.1608,0.08578,0.07954,0.1608,0.07121,0.7156,0.1608,-0.002197,0.1576,0.1608,-0.1257,-0.04862,-0.06344,-0.2273,-0.1965,-0.05738,-0.1567,-0.2451,-0.05738,0.05594,-0.1285,-0.05738,0.1306,0.1053,-0.05738,0.09845,0.7641,-0.05738,0.008882,0.1965,-0.05738,-0.1567,0.0,-0.2395,0.0}, 48);
IndexedFaceSet70.setCoord(&Coordinate72);

Shape67.setGeometry(&IndexedFaceSet70);

Transform66.addChild(&Shape67);

Transform59.addChild(&Transform66);

Transform52.addChild(&Transform59);

Transform19.addChild(&Transform52);

Transform& Transform73 =  Transform();
Transform73.setDEF(CString("Innertube_Dummy-ROOT"));
Transform73.setTranslation(new float[]{-0.004756,-0.7784,0.073});
Transform73.setRotation(new float[]{0.554691,-0.554691,0.62019,2.031});
Transform73.setScaleOrientation(new float[]{0.745084,-0.0868981,0.661286,0.1436});
OrientationInterpolator& OrientationInterpolator74 =  OrientationInterpolator();
OrientationInterpolator74.setDEF(CString("Innertube_Dummy-ROT-INTERP"));
OrientationInterpolator74.setKey(new float[]{0.0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1.0}, 11);
OrientationInterpolator74.setKeyValue(new float[]{0.554691,-0.554691,0.62019,2.031,0.550539,-0.550539,0.627545,2.021,0.559636,-0.559636,0.61124,2.044,0.569582,-0.569582,0.592581,2.072,0.578481,-0.578481,0.575081,2.098,0.584818,-0.584818,0.562117,2.117,0.587209,-0.587209,0.557109,2.125,0.583712,-0.583712,0.564412,2.114,0.575075,-0.575075,0.581874,2.088,0.564197,-0.564197,0.602797,2.057,0.554691,-0.554691,0.62019,2.031}, 44);
Transform73.addChild(&OrientationInterpolator74);

Transform& Transform75 =  Transform();
Transform75.setDEF(CString("Innertube_L_butt-ROOT"));
Transform75.setTranslation(new float[]{-0.4121,0.006308,-0.3326});
Transform75.setRotation(new float[]{-0.992815,-0.0846113,-0.0846113,1.578});
Transform75.setScale(new float[]{1.47,1.55,1.893});
OrientationInterpolator& OrientationInterpolator76 =  OrientationInterpolator();
OrientationInterpolator76.setDEF(CString("Innertube_L_butt-ROT-INTERP"));
OrientationInterpolator76.setKey(new float[]{0.0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1.0}, 11);
OrientationInterpolator76.setKeyValue(new float[]{-0.992815,-0.0846113,-0.0846113,1.578,-0.997238,-0.052522,-0.052522,1.574,-0.999752,-0.0157592,-0.0157592,1.571,-0.999644,0.0188608,0.0188608,1.571,-0.998018,0.0445008,0.0445008,1.573,-0.997025,0.0545014,0.0545014,1.574,-0.998395,0.0400498,0.0400498,1.572,-0.99997,0.00546484,0.00546484,1.571,-0.998715,-0.0358305,-0.0358305,1.572,-0.995052,-0.0702566,-0.0702566,1.576,-0.992815,-0.0846113,-0.0846113,1.578}, 44);
Transform75.addChild(&OrientationInterpolator76);

Shape& Shape77 =  Shape();
Appearance& Appearance78 =  Appearance();
Material& Material79 =  Material();
Material79.setDiffuseColor(new float[]{0.6902,0.102,0.102});
Appearance78.addChild(&Material79);

Shape77.addChild(&Appearance78);

IndexedFaceSet& IndexedFaceSet80 =  IndexedFaceSet();
IndexedFaceSet80.setDEF(CString("Innertube_L_butt-FACES"));
IndexedFaceSet80.setCreaseAngle(3);
IndexedFaceSet80.setColorIndex(new int[]{0,8,9,-1,0,9,1,-1,1,9,10,-1,1,10,2,-1,2,10,11,-1,2,11,3,-1,3,11,12,-1,3,12,4,-1,4,12,13,-1,4,13,5,-1,5,13,14,-1,5,14,6,-1,6,14,15,-1,6,15,7,-1,7,15,8,-1,7,8,0,-1,16,9,8,-1,16,10,9,-1,16,11,10,-1,16,12,11,-1,16,13,12,-1,16,14,13,-1,16,15,14,-1,16,8,15,-1}, 96);
IndexedFaceSet80.setCoordIndex(new int32_t[]{0,8,9,-1,0,9,1,-1,1,9,10,-1,1,10,2,-1,2,10,11,-1,2,11,3,-1,3,11,12,-1,3,12,4,-1,4,12,13,-1,4,13,5,-1,5,13,14,-1,5,14,6,-1,6,14,15,-1,6,15,7,-1,7,15,8,-1,7,8,0,-1,16,9,8,-1,16,10,9,-1,16,11,10,-1,16,12,11,-1,16,13,12,-1,16,14,13,-1,16,15,14,-1,16,8,15,-1}, 96);
CColor& Color81 =  CColor();
Color81.setColor(new float[]{1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0}, 51);
IndexedFaceSet80.setColor(&Color81);

Coordinate& Coordinate82 =  Coordinate();
Coordinate82.setDEF(CString("Innertube_L_butt-COORD"));
Coordinate82.setPoint(new float[]{-0.003811,0.1463,-0.4831,-0.3454,0.1463,-0.3416,-0.4869,0.1463,0.0,-0.3454,0.1463,0.3416,-0.003811,0.1463,0.4831,0.3378,0.1463,0.3416,0.4793,0.1463,0.0,0.3378,0.1463,-0.3416,0.0,-0.3416,-0.3416,-0.2415,-0.3416,-0.2415,-0.3416,-0.3416,0.0,-0.2415,-0.3416,0.2415,0.0,-0.3416,0.3416,0.2415,-0.3416,0.2415,0.3416,-0.3416,0.0,0.2415,-0.3416,-0.2415,0.0,-0.4831,0.0}, 51);
IndexedFaceSet80.setCoord(&Coordinate82);

Shape77.setGeometry(&IndexedFaceSet80);

Transform75.addChild(&Shape77);

Transform73.addChild(&Transform75);

Transform& Transform83 =  Transform();
Transform83.setDEF(CString("Innertube_R_butt-ROOT"));
Transform83.setTranslation(new float[]{0.3298,0.006308,-0.3294});
Transform83.setRotation(new float[]{-0.999996,-0.00210999,-0.00210999,1.571});
Transform83.setScale(new float[]{1.47,1.55,1.893});
Shape& Shape84 =  Shape();
Appearance& Appearance85 =  Appearance();
Material& Material86 =  Material();
Material86.setDiffuseColor(new float[]{0.6902,0.102,0.102});
Appearance85.addChild(&Material86);

Shape84.addChild(&Appearance85);

IndexedFaceSet& IndexedFaceSet87 =  IndexedFaceSet();
IndexedFaceSet87.setUSE(CString("Innertube_L_butt-FACES"));
Shape84.setGeometry(&IndexedFaceSet87);

Transform83.addChild(&Shape84);

Transform73.addChild(&Transform83);

Transform19.addChild(&Transform73);

Transform11.addChild(&Transform19);

Group9.addChild(&Transform11);

Group8.addChild(&Group9);

Scene7.addChild(&Group8);

ROUTE& ROUTE88 =  ROUTE();
ROUTE88.setFromNode(CString("Innertube_boolean-TIMER"));
ROUTE88.setFromField(CString("fraction_changed"));
ROUTE88.setToNode(CString("Innertube-ROT-INTERP"));
ROUTE88.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE88);

ROUTE& ROUTE89 =  ROUTE();
ROUTE89.setFromNode(CString("TimeSensor_Innertube-TIMER"));
ROUTE89.setFromField(CString("fraction_changed"));
ROUTE89.setToNode(CString("Innertube-ROT-INTERP"));
ROUTE89.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE89);

ROUTE& ROUTE90 =  ROUTE();
ROUTE90.setFromNode(CString("Innertube_boolean-TIMER"));
ROUTE90.setFromField(CString("fraction_changed"));
ROUTE90.setToNode(CString("Innertube_L_leg-POS-INTERP"));
ROUTE90.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE90);

ROUTE& ROUTE91 =  ROUTE();
ROUTE91.setFromNode(CString("TimeSensor_Innertube-TIMER"));
ROUTE91.setFromField(CString("fraction_changed"));
ROUTE91.setToNode(CString("Innertube_L_leg-POS-INTERP"));
ROUTE91.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE91);

ROUTE& ROUTE92 =  ROUTE();
ROUTE92.setFromNode(CString("Innertube_boolean-TIMER"));
ROUTE92.setFromField(CString("fraction_changed"));
ROUTE92.setToNode(CString("Innertube_L_leg-ROT-INTERP"));
ROUTE92.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE92);

ROUTE& ROUTE93 =  ROUTE();
ROUTE93.setFromNode(CString("TimeSensor_Innertube-TIMER"));
ROUTE93.setFromField(CString("fraction_changed"));
ROUTE93.setToNode(CString("Innertube_L_leg-ROT-INTERP"));
ROUTE93.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE93);

ROUTE& ROUTE94 =  ROUTE();
ROUTE94.setFromNode(CString("Innertube_boolean-TIMER"));
ROUTE94.setFromField(CString("fraction_changed"));
ROUTE94.setToNode(CString("Innertube_L_flipper-POS-INTERP"));
ROUTE94.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE94);

ROUTE& ROUTE95 =  ROUTE();
ROUTE95.setFromNode(CString("TimeSensor_Innertube-TIMER"));
ROUTE95.setFromField(CString("fraction_changed"));
ROUTE95.setToNode(CString("Innertube_L_flipper-POS-INTERP"));
ROUTE95.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE95);

ROUTE& ROUTE96 =  ROUTE();
ROUTE96.setFromNode(CString("Innertube_boolean-TIMER"));
ROUTE96.setFromField(CString("fraction_changed"));
ROUTE96.setToNode(CString("Innertube_L_flipper-ROT-INTERP"));
ROUTE96.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE96);

ROUTE& ROUTE97 =  ROUTE();
ROUTE97.setFromNode(CString("TimeSensor_Innertube-TIMER"));
ROUTE97.setFromField(CString("fraction_changed"));
ROUTE97.setToNode(CString("Innertube_L_flipper-ROT-INTERP"));
ROUTE97.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE97);

ROUTE& ROUTE98 =  ROUTE();
ROUTE98.setFromNode(CString("Innertube_L_flipper-POS-INTERP"));
ROUTE98.setFromField(CString("value_changed"));
ROUTE98.setToNode(CString("Innertube_L_flipper-ROOT"));
ROUTE98.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE98);

ROUTE& ROUTE99 =  ROUTE();
ROUTE99.setFromNode(CString("Innertube_L_flipper-ROT-INTERP"));
ROUTE99.setFromField(CString("value_changed"));
ROUTE99.setToNode(CString("Innertube_L_flipper-ROOT"));
ROUTE99.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE99);

ROUTE& ROUTE100 =  ROUTE();
ROUTE100.setFromNode(CString("Innertube_L_leg-POS-INTERP"));
ROUTE100.setFromField(CString("value_changed"));
ROUTE100.setToNode(CString("Innertube_L_leg-ROOT"));
ROUTE100.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE100);

ROUTE& ROUTE101 =  ROUTE();
ROUTE101.setFromNode(CString("Innertube_L_leg-ROT-INTERP"));
ROUTE101.setFromField(CString("value_changed"));
ROUTE101.setToNode(CString("Innertube_L_leg-ROOT"));
ROUTE101.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE101);

ROUTE& ROUTE102 =  ROUTE();
ROUTE102.setFromNode(CString("Innertube_boolean-TIMER"));
ROUTE102.setFromField(CString("fraction_changed"));
ROUTE102.setToNode(CString("Innertube_R_leg-POS-INTERP"));
ROUTE102.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE102);

ROUTE& ROUTE103 =  ROUTE();
ROUTE103.setFromNode(CString("TimeSensor_Innertube-TIMER"));
ROUTE103.setFromField(CString("fraction_changed"));
ROUTE103.setToNode(CString("Innertube_R_leg-POS-INTERP"));
ROUTE103.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE103);

ROUTE& ROUTE104 =  ROUTE();
ROUTE104.setFromNode(CString("Innertube_boolean-TIMER"));
ROUTE104.setFromField(CString("fraction_changed"));
ROUTE104.setToNode(CString("Innertube_R_leg-ROT-INTERP"));
ROUTE104.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE104);

ROUTE& ROUTE105 =  ROUTE();
ROUTE105.setFromNode(CString("TimeSensor_Innertube-TIMER"));
ROUTE105.setFromField(CString("fraction_changed"));
ROUTE105.setToNode(CString("Innertube_R_leg-ROT-INTERP"));
ROUTE105.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE105);

ROUTE& ROUTE106 =  ROUTE();
ROUTE106.setFromNode(CString("Innertube_boolean-TIMER"));
ROUTE106.setFromField(CString("fraction_changed"));
ROUTE106.setToNode(CString("Innertube_R_flipper-POS-INTERP"));
ROUTE106.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE106);

ROUTE& ROUTE107 =  ROUTE();
ROUTE107.setFromNode(CString("TimeSensor_Innertube-TIMER"));
ROUTE107.setFromField(CString("fraction_changed"));
ROUTE107.setToNode(CString("Innertube_R_flipper-POS-INTERP"));
ROUTE107.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE107);

ROUTE& ROUTE108 =  ROUTE();
ROUTE108.setFromNode(CString("Innertube_boolean-TIMER"));
ROUTE108.setFromField(CString("fraction_changed"));
ROUTE108.setToNode(CString("Innertube_R_flipper-ROT-INTERP"));
ROUTE108.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE108);

ROUTE& ROUTE109 =  ROUTE();
ROUTE109.setFromNode(CString("TimeSensor_Innertube-TIMER"));
ROUTE109.setFromField(CString("fraction_changed"));
ROUTE109.setToNode(CString("Innertube_R_flipper-ROT-INTERP"));
ROUTE109.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE109);

ROUTE& ROUTE110 =  ROUTE();
ROUTE110.setFromNode(CString("Innertube_R_flipper-POS-INTERP"));
ROUTE110.setFromField(CString("value_changed"));
ROUTE110.setToNode(CString("Innertube_R_flipper-ROOT"));
ROUTE110.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE110);

ROUTE& ROUTE111 =  ROUTE();
ROUTE111.setFromNode(CString("Innertube_R_flipper-ROT-INTERP"));
ROUTE111.setFromField(CString("value_changed"));
ROUTE111.setToNode(CString("Innertube_R_flipper-ROOT"));
ROUTE111.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE111);

ROUTE& ROUTE112 =  ROUTE();
ROUTE112.setFromNode(CString("Innertube_R_leg-POS-INTERP"));
ROUTE112.setFromField(CString("value_changed"));
ROUTE112.setToNode(CString("Innertube_R_leg-ROOT"));
ROUTE112.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE112);

ROUTE& ROUTE113 =  ROUTE();
ROUTE113.setFromNode(CString("Innertube_R_leg-ROT-INTERP"));
ROUTE113.setFromField(CString("value_changed"));
ROUTE113.setToNode(CString("Innertube_R_leg-ROOT"));
ROUTE113.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE113);

ROUTE& ROUTE114 =  ROUTE();
ROUTE114.setFromNode(CString("Innertube_boolean-TIMER"));
ROUTE114.setFromField(CString("fraction_changed"));
ROUTE114.setToNode(CString("Innertube_Dummy-ROT-INTERP"));
ROUTE114.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE114);

ROUTE& ROUTE115 =  ROUTE();
ROUTE115.setFromNode(CString("TimeSensor_Innertube-TIMER"));
ROUTE115.setFromField(CString("fraction_changed"));
ROUTE115.setToNode(CString("Innertube_Dummy-ROT-INTERP"));
ROUTE115.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE115);

ROUTE& ROUTE116 =  ROUTE();
ROUTE116.setFromNode(CString("Innertube_boolean-TIMER"));
ROUTE116.setFromField(CString("fraction_changed"));
ROUTE116.setToNode(CString("Innertube_L_butt-ROT-INTERP"));
ROUTE116.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE116);

ROUTE& ROUTE117 =  ROUTE();
ROUTE117.setFromNode(CString("TimeSensor_Innertube-TIMER"));
ROUTE117.setFromField(CString("fraction_changed"));
ROUTE117.setToNode(CString("Innertube_L_butt-ROT-INTERP"));
ROUTE117.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE117);

ROUTE& ROUTE118 =  ROUTE();
ROUTE118.setFromNode(CString("Innertube_L_butt-ROT-INTERP"));
ROUTE118.setFromField(CString("value_changed"));
ROUTE118.setToNode(CString("Innertube_L_butt-ROOT"));
ROUTE118.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE118);

ROUTE& ROUTE119 =  ROUTE();
ROUTE119.setFromNode(CString("Innertube_Dummy-ROT-INTERP"));
ROUTE119.setFromField(CString("value_changed"));
ROUTE119.setToNode(CString("Innertube_Dummy-ROOT"));
ROUTE119.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE119);

ROUTE& ROUTE120 =  ROUTE();
ROUTE120.setFromNode(CString("Innertube-ROT-INTERP"));
ROUTE120.setFromField(CString("value_changed"));
ROUTE120.setToNode(CString("Innertube-ROOT"));
ROUTE120.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE120);

X3D0.setScene(&Scene7);

//}
