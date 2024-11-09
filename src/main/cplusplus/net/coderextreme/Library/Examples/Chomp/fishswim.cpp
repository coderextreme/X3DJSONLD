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
TimeSensor& TimeSensor8 =  TimeSensor();
TimeSensor8.setDEF(CString("TimeSensor_Fishswim-TIMER"));
TimeSensor8.setCycleInterval(1.6);
TimeSensor8.setLoop(True);
TimeSensor8.setStartTime(1);
Scene7.addChild(&TimeSensor8);

Transform& Transform9 =  Transform();
Transform9.setDEF(CString("Fish_Dummy_rotate_Y-ROOT"));
Transform9.setTranslation(new float[]{0.02897,-0.005942,-0.01196});
Transform9.setRotation(new float[]{0.423218,-0.0127905,0.905938,0.0250124});
Transform9.setScaleOrientation(new float[]{0.19509,0.721735,-0.664108,0.0157011});
TimeSensor& TimeSensor10 =  TimeSensor();
TimeSensor10.setDEF(CString("Fish_Dummy_rotate_Y-TIMER"));
TimeSensor10.setCycleInterval(1.6);
Transform9.addChild(&TimeSensor10);

OrientationInterpolator& OrientationInterpolator11 =  OrientationInterpolator();
OrientationInterpolator11.setDEF(CString("Fish_Dummy_rotate_Y-ROT-INTERP"));
OrientationInterpolator11.setKey(new float[]{0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1}, 9);
OrientationInterpolator11.setKeyValue(new float[]{0.423218,-0.0127905,0.905938,0.0250124,0.670927,-0.00873856,-0.741472,0.015792,0.258901,0.000228401,-0.965904,0.0409116,0.203419,0.00134412,-0.979091,0.0520578,0.29261,-0.000459915,-0.956232,0.0361926,0.991332,-0.0194008,0.129939,0.0106754,0.272382,-0.0102393,0.962135,0.0388612,0.193107,-0.00884134,0.981138,0.0547807,0.423218,-0.0127905,0.905938,0.0250124}, 36);
Transform9.addChild(&OrientationInterpolator11);

Transform& Transform12 =  Transform();
Transform12.setDEF(CString("Fish_body-ROOT"));
Transform12.setTranslation(new float[]{-0.03523,-0.007528,0.3114});
Transform12.setRotation(new float[]{0.998783,-0.0348794,0.0348794,1.572});
PositionInterpolator& PositionInterpolator13 =  PositionInterpolator();
PositionInterpolator13.setDEF(CString("Fish_body-POS-INTERP"));
PositionInterpolator13.setKey(new float[]{0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1}, 9);
PositionInterpolator13.setKeyValue(new float[]{-0.03523,-0.007528,0.3114,-0.02274,-0.007528,0.3124,-0.008901,-0.007528,0.313,0.002314,-0.007528,0.313,0.00693,-0.007528,0.3128,0.0003348,-0.007528,0.313,-0.01418,-0.007528,0.3128,-0.02866,-0.007528,0.312,-0.03523,-0.007528,0.3114}, 27);
Transform12.addChild(&PositionInterpolator13);

OrientationInterpolator& OrientationInterpolator14 =  OrientationInterpolator();
OrientationInterpolator14.setDEF(CString("Fish_body-ROT-INTERP"));
OrientationInterpolator14.setKey(new float[]{0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1}, 9);
OrientationInterpolator14.setKeyValue(new float[]{0.998783,-0.0348794,0.0348794,1.572,0.999799,-0.01418,0.01418,1.571,0.999924,0.00872621,-0.00872621,1.571,0.999257,0.0272588,-0.0272588,1.572,0.998783,0.0348794,-0.0348794,1.572,0.999424,0.0239906,-0.0239906,1.571,1,0,0,1.571,0.999424,-0.0239906,0.0239906,1.571,0.998783,-0.0348794,0.0348794,1.572}, 36);
Transform12.addChild(&OrientationInterpolator14);

Shape& Shape15 =  Shape();
Appearance& Appearance16 =  Appearance();
Material& Material17 =  Material();
Material17.setDiffuseColor(new float[]{1,1,1});
Material17.setShininess(0.25);
Appearance16.addChild(&Material17);

Shape15.addChild(&Appearance16);

IndexedFaceSet& IndexedFaceSet18 =  IndexedFaceSet();
IndexedFaceSet18.setDEF(CString("Fish_body-FACES"));
IndexedFaceSet18.setCreaseAngle(3);
IndexedFaceSet18.setColorIndex(new int[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,1,-1,1,8,2,-1,8,9,2,-1,2,9,3,-1,9,10,3,-1,3,10,4,-1,10,11,4,-1,4,12,5,-1,11,12,4,-1,5,13,6,-1,12,13,5,-1,14,7,6,-1,13,14,6,-1,7,8,1,-1,14,8,7,-1,8,15,9,-1,15,16,9,-1,9,16,10,-1,16,17,10,-1,10,17,11,-1,17,18,11,-1,11,19,12,-1,18,19,11,-1,12,20,13,-1,19,20,12,-1,13,21,14,-1,20,21,13,-1,14,15,8,-1,21,15,14,-1,15,22,16,-1,16,22,17,-1,22,23,17,-1,17,23,18,-1,23,24,18,-1,18,24,19,-1,24,25,19,-1,19,25,20,-1,25,22,20,-1,20,22,21,-1,21,22,15,-1,26,23,22,-1,26,24,23,-1,26,25,24,-1,26,22,25,-1}, 200);
IndexedFaceSet18.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,1,-1,1,8,2,-1,8,9,2,-1,2,9,3,-1,9,10,3,-1,3,10,4,-1,10,11,4,-1,4,12,5,-1,11,12,4,-1,5,13,6,-1,12,13,5,-1,14,7,6,-1,13,14,6,-1,7,8,1,-1,14,8,7,-1,8,15,9,-1,15,16,9,-1,9,16,10,-1,16,17,10,-1,10,17,11,-1,17,18,11,-1,11,19,12,-1,18,19,11,-1,12,20,13,-1,19,20,12,-1,13,21,14,-1,20,21,13,-1,14,15,8,-1,21,15,14,-1,15,22,16,-1,16,22,17,-1,22,23,17,-1,17,23,18,-1,23,24,18,-1,18,24,19,-1,24,25,19,-1,19,25,20,-1,25,22,20,-1,20,22,21,-1,21,22,15,-1,26,23,22,-1,26,24,23,-1,26,25,24,-1,26,22,25,-1}, 200);
CColor& Color19 =  CColor();
Color19.setColor(new float[]{1,0.4706,0,1,0.4706,0,1,0.4706,0,1,0.4706,0,1,0.9647,0.7294,1,0.9647,0.7294,1,0.4706,0,1,0.4706,0,1,0.4706,0,1,0.4706,0,1,0.4706,0,1,0.9647,0.7294,1,0.9647,0.7294,1,0.4706,0,1,0.4706,0,1,0.4706,0,1,0.4706,0,1,0.4706,0,1,0.9647,0.7294,1,0.9647,0.7294,1,0.4706,0,1,0.4706,0,1,0.4706,0,1,0.4706,0,1,0.9647,0.7294,1,0.4706,0,1,0.4706,0}, 81);
IndexedFaceSet18.setColor(&Color19);

Coordinate& Coordinate20 =  Coordinate();
Coordinate20.setDEF(CString("Fish_body-COORD"));
Coordinate20.setPoint(new float[]{0,0.7757,0,0,0.6276,-0.456,-0.3147,0.6276,-0.3267,-0.458,0.6276,-0.0002355,-0.266,0.6262,0.4098,0.2454,0.6276,0.4098,0.4796,0.6276,0.0004446,0.3149,0.6276,-0.3296,0,0.2397,-0.7378,-0.5104,0.2397,-0.5294,-0.726,0.2397,-0.0002355,-0.4002,0.237,0.6119,0.3844,0.2397,0.6282,0.7476,0.2397,0.0004445,0.5106,0.2397,-0.5323,0,-0.3025,-0.7095,-0.5072,-0.3025,-0.5067,-0.726,-0.3025,-0.0003116,-0.4052,-0.3025,0.5862,0.3862,-0.3025,0.6052,0.7476,-0.3025,0.0003684,0.5074,-0.3025,-0.5096,0.005317,-0.8264,-0.5359,-0.4599,-0.8226,-0.05375,0,-0.8249,0.4095,0.4793,-0.8227,-0.07221,0,-1.856,-0.391}, 81);
IndexedFaceSet18.setCoord(&Coordinate20);

Shape15.setGeometry(&IndexedFaceSet18);

Transform12.addChild(&Shape15);

Transform& Transform21 =  Transform();
Transform21.setDEF(CString("Fish_fin_L-ROOT"));
Transform21.setTranslation(new float[]{0.6627,-0.1276,0.1854});
Transform21.setRotation(new float[]{-0.771583,-0.496889,0.397191,3.005});
Transform21.setScaleOrientation(new float[]{-0.976546,0,-0.21531,0.6453});
OrientationInterpolator& OrientationInterpolator22 =  OrientationInterpolator();
OrientationInterpolator22.setDEF(CString("Fish_fin_L-ROT-INTERP"));
OrientationInterpolator22.setKey(new float[]{0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1}, 9);
OrientationInterpolator22.setKeyValue(new float[]{-0.771583,-0.496889,0.397191,3.005,-0.893609,-0.233702,0.383204,2.803,-0.853784,-0.332894,0.400293,2.892,-0.796915,-0.441508,0.412308,2.994,-0.728687,-0.543491,0.416693,3.096,-0.660392,-0.626292,0.414295,3.183,-0.607503,-0.681404,0.408202,3.243,-0.5865,-0.7024,0.4033,3.262,-0.771583,-0.496889,0.397191,3.005}, 36);
Transform21.addChild(&OrientationInterpolator22);

Shape& Shape23 =  Shape();
Appearance& Appearance24 =  Appearance();
Material& Material25 =  Material();
Material25.setDiffuseColor(new float[]{1,1,1});
Material25.setShininess(0.25);
Appearance24.addChild(&Material25);

Shape23.addChild(&Appearance24);

IndexedFaceSet& IndexedFaceSet26 =  IndexedFaceSet();
IndexedFaceSet26.setDEF(CString("Fish_fin_L-FACES"));
IndexedFaceSet26.setSolid(False);
IndexedFaceSet26.setCreaseAngle(3);
IndexedFaceSet26.setColorIndex(new int[]{0,3,2,-1,0,1,3,-1,2,5,4,-1,2,3,5,-1,6,4,5,-1,0,8,7,-1,0,1,8,-1,7,10,9,-1,7,8,10,-1,11,9,10,-1,0,13,12,-1,0,1,13,-1,12,15,14,-1,12,13,15,-1,16,14,15,-1}, 60);
IndexedFaceSet26.setCoordIndex(new int32_t[]{0,3,2,-1,0,1,3,-1,2,5,4,-1,2,3,5,-1,6,4,5,-1,0,8,7,-1,0,1,8,-1,7,10,9,-1,7,8,10,-1,11,9,10,-1,0,13,12,-1,0,1,13,-1,12,15,14,-1,12,13,15,-1,16,14,15,-1}, 60);
CColor& Color27 =  CColor();
Color27.setColor(new float[]{0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471}, 51);
IndexedFaceSet26.setColor(&Color27);

Coordinate& Coordinate28 =  Coordinate();
Coordinate28.setDEF(CString("Fish_fin_L-COORD"));
Coordinate28.setPoint(new float[]{-0.02596,-0.02108,-0.0343,-0.02596,0.02108,0.0343,-0.03899,0.3204,-0.1301,-0.03899,0.3833,-0.07043,-0.02596,0.3887,-0.4543,-0.02596,0.4785,-0.4589,0,0.4262,-0.5171,-0.02075,0.1813,-0.2707,-0.02075,0.2655,-0.2505,-0.02596,0.1095,-0.5878,-0.02596,0.185,-0.6367,0,0.1106,-0.6609,-0.02596,-0.0123,-0.2212,-0.02596,0.07576,-0.2299,-0.02596,-0.07976,-0.4139,-0.02596,-0.007279,-0.4671,0,-0.08293,-0.4869}, 51);
IndexedFaceSet26.setCoord(&Coordinate28);

Shape23.setGeometry(&IndexedFaceSet26);

Transform21.addChild(&Shape23);

Transform12.addChild(&Transform21);

Transform& Transform29 =  Transform();
Transform29.setDEF(CString("Fish_tail-ROOT"));
Transform29.setTranslation(new float[]{-0.0106,-1.754,-0.3672});
Transform29.setRotation(new float[]{-0.998956,0.0322986,-0.0322986,1.572});
Transform29.setScaleOrientation(new float[]{0.691482,-0.722394,0,0.0161503});
OrientationInterpolator& OrientationInterpolator30 =  OrientationInterpolator();
OrientationInterpolator30.setDEF(CString("Fish_tail-ROT-INTERP"));
OrientationInterpolator30.setKey(new float[]{0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1}, 9);
OrientationInterpolator30.setKeyValue(new float[]{-0.998956,0.0322986,-0.0322986,1.572,-0.968493,-0.176099,0.176099,1.603,-0.954267,-0.211393,0.211393,1.618,-0.955761,-0.207992,0.207992,1.616,-0.990687,-0.0962787,0.0962787,1.58,-0.973967,0.160295,-0.160295,1.597,-0.954308,0.211302,-0.211302,1.618,-0.964008,0.188001,-0.188001,1.607,-0.998956,0.0322986,-0.0322986,1.572}, 36);
Transform29.addChild(&OrientationInterpolator30);

Shape& Shape31 =  Shape();
Appearance& Appearance32 =  Appearance();
Material& Material33 =  Material();
Material33.setDiffuseColor(new float[]{1,1,1});
Material33.setShininess(0.25);
Appearance32.addChild(&Material33);

Shape31.addChild(&Appearance32);

IndexedFaceSet& IndexedFaceSet34 =  IndexedFaceSet();
IndexedFaceSet34.setDEF(CString("Fish_tail-FACES"));
IndexedFaceSet34.setSolid(False);
IndexedFaceSet34.setCreaseAngle(3);
IndexedFaceSet34.setColorIndex(new int[]{0,3,2,-1,0,1,3,-1,2,5,4,-1,2,3,5,-1,6,4,5,-1,0,8,7,-1,0,1,8,-1,7,10,9,-1,7,8,10,-1,11,9,10,-1,0,13,12,-1,0,1,13,-1,12,15,14,-1,12,13,15,-1,16,14,15,-1}, 60);
IndexedFaceSet34.setCoordIndex(new int32_t[]{0,3,2,-1,0,1,3,-1,2,5,4,-1,2,3,5,-1,6,4,5,-1,0,8,7,-1,0,1,8,-1,7,10,9,-1,7,8,10,-1,11,9,10,-1,0,13,12,-1,0,1,13,-1,12,15,14,-1,12,13,15,-1,16,14,15,-1}, 60);
CColor& Color35 =  CColor();
Color35.setColor(new float[]{0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471}, 51);
IndexedFaceSet34.setColor(&Color35);

Coordinate& Coordinate36 =  Coordinate();
Coordinate36.setDEF(CString("Fish_tail-COORD"));
Coordinate36.setPoint(new float[]{-0.02596,-0.02108,-0.0343,-0.02596,0.02108,0.0343,-0.03899,0.3204,-0.1301,-0.03899,0.3833,-0.07043,-0.02596,0.3887,-0.4543,-0.02596,0.4785,-0.4589,0,0.4262,-0.5171,-0.02075,0.1813,-0.2707,-0.02075,0.2655,-0.2505,-0.02596,0.1095,-0.5878,-0.02596,0.185,-0.6367,0,0.1106,-0.6609,-0.02596,-0.0123,-0.2212,-0.02596,0.07576,-0.2299,-0.02596,-0.07976,-0.4139,-0.02596,-0.007279,-0.4671,0,-0.08293,-0.4869}, 51);
IndexedFaceSet34.setCoord(&Coordinate36);

Shape31.setGeometry(&IndexedFaceSet34);

Transform29.addChild(&Shape31);

Transform12.addChild(&Transform29);

Transform& Transform37 =  Transform();
Transform37.setDEF(CString("Fish_fin_R-ROOT"));
Transform37.setTranslation(new float[]{-0.6703,-0.14,0.1409});
Transform37.setRotation(new float[]{-0.742578,0.490286,-0.456287,3.094});
Transform37.setScaleOrientation(new float[]{0.45042,-0.490922,-0.745733,0.6073});
OrientationInterpolator& OrientationInterpolator38 =  OrientationInterpolator();
OrientationInterpolator38.setDEF(CString("Fish_fin_R-ROT-INTERP"));
OrientationInterpolator38.setKey(new float[]{0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1}, 9);
OrientationInterpolator38.setKeyValue(new float[]{-0.742578,0.490286,-0.456287,3.094,-0.680792,0.574893,-0.453895,3.193,-0.632455,0.631355,-0.448768,3.262,0.613219,-0.65222,0.445614,2.996,-0.780056,0.434575,-0.450175,3.021,-0.889261,0.179792,-0.420582,2.765,-0.853471,0.27659,-0.441685,2.869,-0.803604,0.386602,-0.452503,2.981,-0.742578,0.490286,-0.456287,3.094}, 36);
Transform37.addChild(&OrientationInterpolator38);

Shape& Shape39 =  Shape();
Appearance& Appearance40 =  Appearance();
Material& Material41 =  Material();
Material41.setDiffuseColor(new float[]{1,1,1});
Material41.setShininess(0.25);
Appearance40.addChild(&Material41);

Shape39.addChild(&Appearance40);

IndexedFaceSet& IndexedFaceSet42 =  IndexedFaceSet();
IndexedFaceSet42.setDEF(CString("Fish_fin_R-FACES"));
IndexedFaceSet42.setSolid(False);
IndexedFaceSet42.setCreaseAngle(3);
IndexedFaceSet42.setColorIndex(new int[]{0,3,2,-1,0,1,3,-1,2,5,4,-1,2,3,5,-1,6,4,5,-1,0,8,7,-1,0,1,8,-1,7,10,9,-1,7,8,10,-1,11,9,10,-1,0,13,12,-1,0,1,13,-1,12,15,14,-1,12,13,15,-1,16,14,15,-1}, 60);
IndexedFaceSet42.setCoordIndex(new int32_t[]{0,3,2,-1,0,1,3,-1,2,5,4,-1,2,3,5,-1,6,4,5,-1,0,8,7,-1,0,1,8,-1,7,10,9,-1,7,8,10,-1,11,9,10,-1,0,13,12,-1,0,1,13,-1,12,15,14,-1,12,13,15,-1,16,14,15,-1}, 60);
CColor& Color43 =  CColor();
Color43.setColor(new float[]{0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471}, 51);
IndexedFaceSet42.setColor(&Color43);

Coordinate& Coordinate44 =  Coordinate();
Coordinate44.setDEF(CString("Fish_fin_R-COORD"));
Coordinate44.setPoint(new float[]{-0.02596,-0.02108,-0.0343,-0.02596,0.02108,0.0343,-0.03899,0.3204,-0.1301,-0.03899,0.3833,-0.07043,-0.02596,0.3887,-0.4543,-0.02596,0.4785,-0.4589,0,0.4262,-0.5171,-0.02075,0.1813,-0.2707,-0.02075,0.2655,-0.2505,-0.02596,0.1095,-0.5878,-0.02596,0.185,-0.6367,0,0.1106,-0.6609,-0.02596,-0.0123,-0.2212,-0.02596,0.07576,-0.2299,-0.02596,-0.07976,-0.4139,-0.02596,-0.007279,-0.4671,0,-0.08293,-0.4869}, 51);
IndexedFaceSet42.setCoord(&Coordinate44);

Shape39.setGeometry(&IndexedFaceSet42);

Transform37.addChild(&Shape39);

Transform12.addChild(&Transform37);

Transform& Transform45 =  Transform();
Transform45.setDEF(CString("Fish_Jaw-ROOT"));
Transform45.setTranslation(new float[]{0,0.5783,0.2942});
Transform45.setRotation(new float[]{-1,0,0,0.2631});
Transform45.setScale(new float[]{1,1.188,0.5});
PositionInterpolator& PositionInterpolator46 =  PositionInterpolator();
PositionInterpolator46.setDEF(CString("Fish_Jaw-POS-INTERP"));
PositionInterpolator46.setKey(new float[]{0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1}, 9);
PositionInterpolator46.setKeyValue(new float[]{0,0.5783,0.2942,0,0.5785,0.2948,0,0.5745,0.2802,0,0.5679,0.2594,0,0.5749,0.2815,0,0.5825,0.3119,0,0.5872,0.3364,0,0.5863,0.3308,0,0.5783,0.2942}, 27);
Transform45.addChild(&PositionInterpolator46);

OrientationInterpolator& OrientationInterpolator47 =  OrientationInterpolator();
OrientationInterpolator47.setDEF(CString("Fish_Jaw-ROT-INTERP"));
OrientationInterpolator47.setKey(new float[]{0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1}, 9);
OrientationInterpolator47.setKeyValue(new float[]{-1,0,0,0.2631,-1,0,0,0.2618,-1,0,0,0.2945,-1,0,0,0.3416,-1,0,0,0.2915,-1,0,0,0.224,-1,0,0,0.170099,-1,0,0,0.182399,-1,0,0,0.2631}, 36);
Transform45.addChild(&OrientationInterpolator47);

Shape& Shape48 =  Shape();
Appearance& Appearance49 =  Appearance();
Material& Material50 =  Material();
Material50.setDiffuseColor(new float[]{1,1,1});
Material50.setShininess(0.25);
Appearance49.addChild(&Material50);

Shape48.addChild(&Appearance49);

IndexedFaceSet& IndexedFaceSet51 =  IndexedFaceSet();
IndexedFaceSet51.setDEF(CString("Fish_Jaw-FACES"));
IndexedFaceSet51.setCreaseAngle(3);
IndexedFaceSet51.setColorIndex(new int[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,5,6,-1,0,6,7,-1,0,7,1,-1,1,8,2,-1,8,9,2,-1,2,9,3,-1,9,10,3,-1,3,10,4,-1,10,11,4,-1,5,12,13,-1,5,13,6,-1,6,13,14,-1,6,14,7,-1,7,14,8,-1,7,8,1,-1,8,15,9,-1,9,16,10,-1,10,16,11,-1,16,17,11,-1,12,18,19,-1,12,19,13,-1,13,19,14,-1,14,15,8,-1,0,4,5,-1,4,11,5,-1,5,11,12,-1,12,11,17,-1,17,18,12,-1}, 124);
IndexedFaceSet51.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,5,6,-1,0,6,7,-1,0,7,1,-1,1,8,2,-1,8,9,2,-1,2,9,3,-1,9,10,3,-1,3,10,4,-1,10,11,4,-1,5,12,13,-1,5,13,6,-1,6,13,14,-1,6,14,7,-1,7,14,8,-1,7,8,1,-1,8,15,9,-1,9,16,10,-1,10,16,11,-1,16,17,11,-1,12,18,19,-1,12,19,13,-1,13,19,14,-1,14,15,8,-1,0,4,5,-1,4,11,5,-1,5,11,12,-1,12,11,17,-1,17,18,12,-1}, 124);
CColor& Color52 =  CColor();
Color52.setColor(new float[]{1,0.4706,0,1,0.4706,0,1,0.4706,0,1,0.4706,0,1,0.9647,0.7294,1,0.9647,0.7294,1,0.4706,0,1,0.4706,0,0.5176,0.1098,0,1,0.4706,0,1,0.4706,0,1,0.9647,0.7294,1,0.9647,0.7294,1,0.4706,0,1,0.4706,0,0.5176,0.1098,0,1,0.4706,0,1,0.9647,0.7294,1,0.9647,0.7294,1,0.4706,0}, 60);
IndexedFaceSet51.setColor(&Color52);

Coordinate& Coordinate53 =  Coordinate();
Coordinate53.setDEF(CString("Fish_Jaw-COORD"));
Coordinate53.setPoint(new float[]{0,0.7757,0,0.0072,0.6339,-0.5128,-0.4619,0.4526,-0.4281,-0.5485,0.5485,0,-0.2274,0.5475,0.3934,0.2318,0.5495,0.3825,0.5485,0.5485,0,0.4457,0.4526,-0.4281,0.03296,0.417,-0.1017,-0.5485,0,-0.5485,-0.7757,0,0,-0.325,-0.001422,0.5563,0.3243,0.001427,0.5408,0.7757,0,0,0.5485,0,-0.5485,-0.001625,-0.5596,-0.2906,-0.5485,-0.5485,0,-0.388,-0.5295,0.2488,0.3725,-0.5354,0.2824,0.5485,-0.5485,0}, 60);
IndexedFaceSet51.setCoord(&Coordinate53);

Shape48.setGeometry(&IndexedFaceSet51);

Transform45.addChild(&Shape48);

Transform& Transform54 =  Transform();
Transform54.setDEF(CString("Fish_tooth_R-ROOT"));
Transform54.setTranslation(new float[]{-0.176,0.5341,-0.4354});
Transform54.setRotation(new float[]{-0.96266,-0.104596,0.24969,1.449});
Transform54.setScale(new float[]{1,2,0.8417});
Transform54.setScaleOrientation(new float[]{-0.738145,0.405825,-0.538933,0.2442});
Shape& Shape55 =  Shape();
Appearance& Appearance56 =  Appearance();
Material& Material57 =  Material();
Material57.setDiffuseColor(new float[]{1,1,1});
Material57.setShininess(0.25);
Appearance56.addChild(&Material57);

Shape55.addChild(&Appearance56);

IndexedFaceSet& IndexedFaceSet58 =  IndexedFaceSet();
IndexedFaceSet58.setDEF(CString("Fish_tooth_R-FACES"));
IndexedFaceSet58.setSolid(False);
IndexedFaceSet58.setCreaseAngle(3);
IndexedFaceSet58.setColorIndex(new int[]{0,1,3,-1,3,2,0,-1}, 8);
IndexedFaceSet58.setCoordIndex(new int32_t[]{0,1,3,-1,3,2,0,-1}, 8);
CColor& Color59 =  CColor();
Color59.setColor(new float[]{0.7804,0.4392,0,0.7804,0.4392,0,1,1,1,1,1,1}, 12);
IndexedFaceSet58.setColor(&Color59);

Coordinate& Coordinate60 =  Coordinate();
Coordinate60.setDEF(CString("Fish_tooth_R-COORD"));
Coordinate60.setPoint(new float[]{-0.07413,0,0,0.07413,0,0,-0.07413,0.1322,0,0.07413,0.1322,0}, 12);
IndexedFaceSet58.setCoord(&Coordinate60);

Shape55.setGeometry(&IndexedFaceSet58);

Transform54.addChild(&Shape55);

Transform45.addChild(&Transform54);

Transform& Transform61 =  Transform();
Transform61.setDEF(CString("Fish_tooth_L-ROOT"));
Transform61.setTranslation(new float[]{0.1348,0.5467,-0.4041});
Transform61.setRotation(new float[]{-0.953377,0.186195,-0.237494,1.438});
Transform61.setScale(new float[]{1,2,0.8417});
Transform61.setScaleOrientation(new float[]{-0.695969,-0.695969,0.176792,0.2577});
Shape& Shape62 =  Shape();
Appearance& Appearance63 =  Appearance();
Material& Material64 =  Material();
Material64.setDiffuseColor(new float[]{1,1,1});
Material64.setShininess(0.25);
Appearance63.addChild(&Material64);

Shape62.addChild(&Appearance63);

IndexedFaceSet& IndexedFaceSet65 =  IndexedFaceSet();
IndexedFaceSet65.setDEF(CString("Fish_tooth_L-FACES"));
IndexedFaceSet65.setSolid(False);
IndexedFaceSet65.setCreaseAngle(3);
IndexedFaceSet65.setColorIndex(new int[]{0,1,3,-1,3,2,0,-1}, 8);
IndexedFaceSet65.setCoordIndex(new int32_t[]{0,1,3,-1,3,2,0,-1}, 8);
CColor& Color66 =  CColor();
Color66.setColor(new float[]{0.7804,0.4392,0,0.7804,0.4392,0,1,1,1,1,1,1}, 12);
IndexedFaceSet65.setColor(&Color66);

Coordinate& Coordinate67 =  Coordinate();
Coordinate67.setDEF(CString("Fish_tooth_L-COORD"));
Coordinate67.setPoint(new float[]{-0.09913,0,0,0.09913,0,0,-0.09913,0.1822,0,0.09913,0.1822,0}, 12);
IndexedFaceSet65.setCoord(&Coordinate67);

Shape62.setGeometry(&IndexedFaceSet65);

Transform61.addChild(&Shape62);

Transform45.addChild(&Transform61);

Transform12.addChild(&Transform45);

Transform& Transform68 =  Transform();
Transform68.setDEF(CString("Fish_eyebag_R2-ROOT"));
Transform68.setTranslation(new float[]{-0.2477,0.592,-0.3411});
Transform68.setRotation(new float[]{-0.721002,-0.150001,0.676502,0.5966});
Transform68.setScaleOrientation(new float[]{-0.752589,0.65849,0,0.0950596});
Shape& Shape69 =  Shape();
Appearance& Appearance70 =  Appearance();
Material& Material71 =  Material();
Material71.setDiffuseColor(new float[]{1,1,1});
Material71.setShininess(0.25);
Appearance70.addChild(&Material71);

Shape69.addChild(&Appearance70);

IndexedFaceSet& IndexedFaceSet72 =  IndexedFaceSet();
IndexedFaceSet72.setDEF(CString("Fish_eyebag_R2-FACES"));
IndexedFaceSet72.setCreaseAngle(3);
IndexedFaceSet72.setColorIndex(new int[]{0,4,3,-1,0,1,4,-1,1,5,4,-1,1,2,5,-1,3,7,6,-1,3,4,7,-1,4,8,7,-1,4,5,8,-1,6,10,9,-1,6,7,10,-1,7,11,10,-1,7,8,11,-1,9,13,12,-1,9,10,13,-1,10,14,13,-1,10,11,14,-1,12,16,15,-1,12,13,16,-1,13,17,16,-1,13,14,17,-1,15,19,18,-1,15,16,19,-1,16,20,19,-1,16,17,20,-1,18,22,21,-1,18,19,22,-1,19,23,22,-1,19,20,23,-1,21,1,0,-1,21,22,1,-1,22,2,1,-1,22,23,2,-1}, 128);
IndexedFaceSet72.setCoordIndex(new int32_t[]{0,4,3,-1,0,1,4,-1,1,5,4,-1,1,2,5,-1,3,7,6,-1,3,4,7,-1,4,8,7,-1,4,5,8,-1,6,10,9,-1,6,7,10,-1,7,11,10,-1,7,8,11,-1,9,13,12,-1,9,10,13,-1,10,14,13,-1,10,11,14,-1,12,16,15,-1,12,13,16,-1,13,17,16,-1,13,14,17,-1,15,19,18,-1,15,16,19,-1,16,20,19,-1,16,17,20,-1,18,22,21,-1,18,19,22,-1,19,23,22,-1,19,20,23,-1,21,1,0,-1,21,22,1,-1,22,2,1,-1,22,23,2,-1}, 128);
CColor& Color73 =  CColor();
Color73.setColor(new float[]{0.5176,0.1098,0,1,0.4706,0,0.5176,0.1098,0,0.5176,0.1098,0,1,0.4706,0,0.5176,0.1098,0,0.5176,0.1098,0,1,0.4706,0,0.5176,0.1098,0,0.5176,0.1098,0,1,0.4706,0,0.5176,0.1098,0,0.5176,0.1098,0,1,0.4706,0,0.5176,0.1098,0,0.5176,0.1098,0,1,0.4706,0,0.5176,0.1098,0,0.5176,0.1098,0,1,0.4706,0,0.5176,0.1098,0,0.5176,0.1098,0,1,0.4706,0,0.5176,0.1098,0}, 72);
IndexedFaceSet72.setColor(&Color73);

Coordinate& Coordinate74 =  Coordinate();
Coordinate74.setDEF(CString("Fish_eyebag_R2-COORD"));
Coordinate74.setPoint(new float[]{-0.006808,-0.08231,-0.2931,0,0.07093,-0.1838,0,0,-0.1128,0.1648,-0.03405,-0.196,0.1299,0.07093,-0.1299,0.07979,0,-0.07979,0.2615,-0.01672,-0.007798,0.1838,0.07093,0,0.1128,0,0,0.1784,-0.02396,0.1689,0.1299,0.07093,0.1299,0.07979,0,0.07979,0.06418,0.002961,0.2561,0,0.07093,0.1838,0,0,0.1128,-0.1801,0,0.1801,-0.1299,0.07093,0.1299,-0.07979,0,0.07979,-0.283,-0.04801,-0.02239,-0.1838,0.07093,0,-0.1128,0,0,-0.2029,-0.0565,-0.2065,-0.1299,0.07093,-0.1299,-0.07979,0,-0.07979}, 72);
IndexedFaceSet72.setCoord(&Coordinate74);

Shape69.setGeometry(&IndexedFaceSet72);

Transform68.addChild(&Shape69);

Transform12.addChild(&Transform68);

Transform& Transform75 =  Transform();
Transform75.setDEF(CString("Fish_eyebag_L2-ROOT"));
Transform75.setTranslation(new float[]{0.279,0.5864,-0.3411});
Transform75.setRotation(new float[]{-0.854353,0.112494,-0.507372,0.5078});
Transform75.setScaleOrientation(new float[]{-0.390791,-0.920479,0,0.3339});
Shape& Shape76 =  Shape();
Appearance& Appearance77 =  Appearance();
Material& Material78 =  Material();
Material78.setDiffuseColor(new float[]{1,1,1});
Material78.setShininess(0.25);
Appearance77.addChild(&Material78);

Shape76.addChild(&Appearance77);

IndexedFaceSet& IndexedFaceSet79 =  IndexedFaceSet();
IndexedFaceSet79.setDEF(CString("Fish_eyebag_L2-FACES"));
IndexedFaceSet79.setCreaseAngle(3);
IndexedFaceSet79.setColorIndex(new int[]{0,4,3,-1,0,1,4,-1,1,5,4,-1,1,2,5,-1,3,7,6,-1,3,4,7,-1,4,8,7,-1,4,5,8,-1,6,10,9,-1,6,7,10,-1,7,11,10,-1,7,8,11,-1,9,13,12,-1,9,10,13,-1,10,14,13,-1,10,11,14,-1,12,16,15,-1,12,13,16,-1,13,17,16,-1,13,14,17,-1,15,19,18,-1,15,16,19,-1,16,20,19,-1,16,17,20,-1,18,22,21,-1,18,19,22,-1,19,23,22,-1,19,20,23,-1,21,1,0,-1,21,22,1,-1,22,2,1,-1,22,23,2,-1}, 128);
IndexedFaceSet79.setCoordIndex(new int32_t[]{0,4,3,-1,0,1,4,-1,1,5,4,-1,1,2,5,-1,3,7,6,-1,3,4,7,-1,4,8,7,-1,4,5,8,-1,6,10,9,-1,6,7,10,-1,7,11,10,-1,7,8,11,-1,9,13,12,-1,9,10,13,-1,10,14,13,-1,10,11,14,-1,12,16,15,-1,12,13,16,-1,13,17,16,-1,13,14,17,-1,15,19,18,-1,15,16,19,-1,16,20,19,-1,16,17,20,-1,18,22,21,-1,18,19,22,-1,19,23,22,-1,19,20,23,-1,21,1,0,-1,21,22,1,-1,22,2,1,-1,22,23,2,-1}, 128);
CColor& Color80 =  CColor();
Color80.setColor(new float[]{0.5176,0.1098,0,1,0.4706,0,0.5176,0.1098,0,0.5176,0.1098,0,1,0.4706,0,0.5176,0.1098,0,0.5176,0.1098,0,1,0.4706,0,0.5176,0.1098,0,0.5176,0.1098,0,1,0.4706,0,0.5176,0.1098,0,0.5176,0.1098,0,1,0.4706,0,0.5176,0.1098,0,0.5176,0.1098,0,1,0.4706,0,0.5176,0.1098,0,0.5176,0.1098,0,1,0.4706,0,0.5176,0.1098,0,0.5176,0.1098,0,1,0.4706,0,0.5176,0.1098,0}, 72);
IndexedFaceSet79.setColor(&Color80);

Coordinate& Coordinate81 =  Coordinate();
Coordinate81.setDEF(CString("Fish_eyebag_L2-COORD"));
Coordinate81.setPoint(new float[]{-0.07863,-0.1193,-0.3083,0,0.07093,-0.1838,0,0,-0.1128,0.1764,-0.07652,-0.1929,0.1299,0.07093,-0.1299,0.07979,0,-0.07979,0.2664,-0.1297,-0.0212,0.1838,0.07093,0,0.1128,0,0,0.2249,-0.04408,0.1782,0.1299,0.07093,0.1299,0.07979,0,0.07979,0.0268,-0.02627,0.2698,0,0.07093,0.1838,0,0,0.1128,-0.1801,0,0.1801,-0.1299,0.07093,0.1299,-0.07979,0,0.07979,-0.2577,-0.001811,0.00967,-0.1838,0.07093,0,-0.1128,0,0,-0.1941,-0.01375,-0.1532,-0.1299,0.07093,-0.1299,-0.07979,0,-0.07979}, 72);
IndexedFaceSet79.setCoord(&Coordinate81);

Shape76.setGeometry(&IndexedFaceSet79);

Transform75.addChild(&Shape76);

Transform12.addChild(&Transform75);

Transform& Transform82 =  Transform();
Transform82.setDEF(CString("Fish_fin_T-ROOT"));
Transform82.setTranslation(new float[]{0.001723,-0.02606,-0.7095});
Transform82.setRotation(new float[]{-0.970745,0.21191,0.112905,0.9946});
OrientationInterpolator& OrientationInterpolator83 =  OrientationInterpolator();
OrientationInterpolator83.setDEF(CString("Fish_fin_T-ROT-INTERP"));
OrientationInterpolator83.setKey(new float[]{0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1}, 9);
OrientationInterpolator83.setKeyValue(new float[]{-0.970745,0.21191,0.112905,0.9946,-0.974006,0.192001,0.120201,1.012,-0.998335,0.0440315,0.0372613,0.9992,-0.993332,-0.104503,-0.0486916,1.009,-0.97294,-0.204208,-0.108104,1.028,-0.969013,-0.217003,-0.118002,1.029,-0.992327,-0.108003,-0.0601817,0.9994,-0.997094,0.0678296,0.0346898,0.9826,-0.970745,0.21191,0.112905,0.9946}, 36);
Transform82.addChild(&OrientationInterpolator83);

Shape& Shape84 =  Shape();
Appearance& Appearance85 =  Appearance();
Material& Material86 =  Material();
Material86.setDiffuseColor(new float[]{1,1,1});
Material86.setShininess(0.25);
Appearance85.addChild(&Material86);

Shape84.addChild(&Appearance85);

IndexedFaceSet& IndexedFaceSet87 =  IndexedFaceSet();
IndexedFaceSet87.setDEF(CString("Fish_fin_T-FACES"));
IndexedFaceSet87.setSolid(False);
IndexedFaceSet87.setCreaseAngle(3);
IndexedFaceSet87.setColorIndex(new int[]{0,1,3,-1,2,3,5,-1,6,4,5,-1,0,8,7,-1,0,1,8,-1,7,10,9,-1,7,8,10,-1,11,9,10,-1,0,13,12,-1,0,1,13,-1,12,15,14,-1,12,13,15,-1,16,14,15,-1,4,2,5,-1,2,0,3,-1}, 60);
IndexedFaceSet87.setCoordIndex(new int32_t[]{0,1,3,-1,2,3,5,-1,6,4,5,-1,0,8,7,-1,0,1,8,-1,7,10,9,-1,7,8,10,-1,11,9,10,-1,0,13,12,-1,0,1,13,-1,12,15,14,-1,12,13,15,-1,16,14,15,-1,4,2,5,-1,2,0,3,-1}, 60);
CColor& Color88 =  CColor();
Color88.setColor(new float[]{0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471,0,1,0.8471}, 51);
IndexedFaceSet87.setColor(&Color88);

Coordinate& Coordinate89 =  Coordinate();
Coordinate89.setDEF(CString("Fish_fin_T-COORD"));
Coordinate89.setPoint(new float[]{-0.02596,-0.02108,-0.0343,-0.02596,0.02108,0.0343,-0.03899,0.3204,-0.1301,-0.03899,0.3833,-0.07043,-0.02596,0.3887,-0.4543,-0.02596,0.4785,-0.4589,0,0.4262,-0.5171,-0.02075,0.1813,-0.2707,-0.02075,0.2655,-0.2505,-0.02596,0.1095,-0.5878,-0.02596,0.185,-0.6367,0,0.1106,-0.6609,-0.02596,-0.0123,-0.2212,-0.02596,0.07576,-0.2299,-0.02596,-0.07976,-0.4139,-0.02596,-0.007279,-0.4671,0,-0.08293,-0.4869}, 51);
IndexedFaceSet87.setCoord(&Coordinate89);

Shape84.setGeometry(&IndexedFaceSet87);

Transform82.addChild(&Shape84);

Transform12.addChild(&Transform82);

Transform& Transform90 =  Transform();
Transform90.setDEF(CString("Fish_eyeball_R-ROOT"));
Transform90.setTranslation(new float[]{-0.2795,0.7001,-0.3883});
Transform90.setRotation(new float[]{-0.493215,-0.391712,0.776724,0.4104});
Transform90.setScaleOrientation(new float[]{0.794274,0.433641,-0.42554,0.032857});
Shape& Shape91 =  Shape();
Appearance& Appearance92 =  Appearance();
Material& Material93 =  Material();
Material93.setDiffuseColor(new float[]{1,1,1});
Material93.setShininess(0.25);
Appearance92.addChild(&Material93);

Shape91.addChild(&Appearance92);

IndexedFaceSet& IndexedFaceSet94 =  IndexedFaceSet();
IndexedFaceSet94.setDEF(CString("Fish_eyeball_R-FACES"));
IndexedFaceSet94.setCreaseAngle(3);
IndexedFaceSet94.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,1,-1,1,7,8,-1,1,8,2,-1,2,8,9,-1,2,9,3,-1,3,9,10,-1,3,10,4,-1,4,10,11,-1,4,11,5,-1,5,11,12,-1,5,12,6,-1,6,12,7,-1,6,7,1,-1,13,8,7,-1,13,9,8,-1,13,10,9,-1,13,11,10,-1,13,12,11,-1,13,7,12,-1}, 96);
Coordinate& Coordinate95 =  Coordinate();
Coordinate95.setDEF(CString("Fish_eyeball_R-COORD"));
Coordinate95.setPoint(new float[]{0,0.1761,0,0,0.08806,-0.1525,-0.1321,0.08806,-0.07626,-0.1321,0.08806,0.07626,0,0.08806,0.1525,0.1321,0.08806,0.07626,0.1321,0.08806,-0.07626,0,-0.08806,-0.1525,-0.1321,-0.08806,-0.07626,-0.1321,-0.08806,0.07626,0,-0.08806,0.1525,0.1321,-0.08806,0.07626,0.1321,-0.08806,-0.07626,0,-0.1761,0}, 42);
IndexedFaceSet94.setCoord(&Coordinate95);

Shape91.setGeometry(&IndexedFaceSet94);

Transform90.addChild(&Shape91);

Billboard& Billboard96 =  Billboard();
Billboard& Billboard97 =  Billboard();
Billboard97.setAxisOfRotation(new float[]{1,0,0});
Transform& Transform98 =  Transform();
Transform98.setDEF(CString("Fish_pupil_R-ROOT"));
Transform98.setTranslation(new float[]{0,0,0.1435});
Transform98.setRotation(new float[]{1,0,0,1.57});
Transform98.setScaleOrientation(new float[]{0.812896,0.111699,0.571597,0.0948788});
Shape& Shape99 =  Shape();
Appearance& Appearance100 =  Appearance();
Material& Material101 =  Material();
Material101.setDiffuseColor(new float[]{0.102,0.102,0.102});
Material101.setShininess(0.25);
Appearance100.addChild(&Material101);

Shape99.addChild(&Appearance100);

IndexedFaceSet& IndexedFaceSet102 =  IndexedFaceSet();
IndexedFaceSet102.setDEF(CString("Fish_pupil_R-FACES"));
IndexedFaceSet102.setCreaseAngle(3);
IndexedFaceSet102.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,1,-1}, 20);
Coordinate& Coordinate103 =  Coordinate();
Coordinate103.setDEF(CString("Fish_pupil_R-COORD"));
Coordinate103.setPoint(new float[]{0,0.04612,0,0,0.01425,-0.04386,-0.04172,0.01425,-0.01355,-0.02578,0.01425,0.03549,0.02578,0.01425,0.03549,0.04172,0.01425,-0.01355}, 18);
IndexedFaceSet102.setCoord(&Coordinate103);

Shape99.setGeometry(&IndexedFaceSet102);

Transform98.addChild(&Shape99);

Billboard97.addChild(&Transform98);

Billboard96.addChild(&Billboard97);

Transform90.addChild(&Billboard96);

Transform12.addChild(&Transform90);

Transform& Transform104 =  Transform();
Transform104.setDEF(CString("Fish_eyeball_L-ROOT"));
Transform104.setTranslation(new float[]{0.3008,0.7041,-0.401});
Transform104.setRotation(new float[]{-0.385014,-0.409615,0.827031,0.6245});
Transform104.setScaleOrientation(new float[]{-0.189892,0.594875,0.781067,0.6771});
Shape& Shape105 =  Shape();
Appearance& Appearance106 =  Appearance();
Material& Material107 =  Material();
Material107.setDiffuseColor(new float[]{1,1,1});
Material107.setShininess(0.25);
Appearance106.addChild(&Material107);

Shape105.addChild(&Appearance106);

IndexedFaceSet& IndexedFaceSet108 =  IndexedFaceSet();
IndexedFaceSet108.setUSE(CString("Fish_eyeball_R-FACES"));
Shape105.setGeometry(&IndexedFaceSet108);

Transform104.addChild(&Shape105);

Billboard& Billboard109 =  Billboard();
Billboard109.setAxisOfRotation(new float[]{1,0,0});
Billboard& Billboard110 =  Billboard();
Transform& Transform111 =  Transform();
Transform111.setDEF(CString("Fish_pupil_L-ROOT"));
Transform111.setTranslation(new float[]{0,0,0.1435});
Transform111.setRotation(new float[]{1,0,0,1.57});
Shape& Shape112 =  Shape();
Appearance& Appearance113 =  Appearance();
Material& Material114 =  Material();
Material114.setDiffuseColor(new float[]{0.102,0.102,0.102});
Material114.setShininess(0.25);
Appearance113.addChild(&Material114);

Shape112.addChild(&Appearance113);

IndexedFaceSet& IndexedFaceSet115 =  IndexedFaceSet();
IndexedFaceSet115.setUSE(CString("Fish_pupil_R-FACES"));
Shape112.setGeometry(&IndexedFaceSet115);

Transform111.addChild(&Shape112);

Billboard110.addChild(&Transform111);

Billboard109.addChild(&Billboard110);

Transform104.addChild(&Billboard109);

Transform12.addChild(&Transform104);

Transform9.addChild(&Transform12);

Scene7.addChild(&Transform9);

ROUTE& ROUTE116 =  ROUTE();
ROUTE116.setFromNode(CString("Fish_Dummy_rotate_Y-TIMER"));
ROUTE116.setFromField(CString("fraction_changed"));
ROUTE116.setToNode(CString("Fish_Dummy_rotate_Y-ROT-INTERP"));
ROUTE116.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE116);

ROUTE& ROUTE117 =  ROUTE();
ROUTE117.setFromNode(CString("Fish_Dummy_rotate_Y-ROT-INTERP"));
ROUTE117.setFromField(CString("value_changed"));
ROUTE117.setToNode(CString("Fish_Dummy_rotate_Y-ROOT"));
ROUTE117.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE117);

ROUTE& ROUTE118 =  ROUTE();
ROUTE118.setFromNode(CString("TimeSensor_Fishswim-TIMER"));
ROUTE118.setFromField(CString("fraction_changed"));
ROUTE118.setToNode(CString("Fish_Dummy_rotate_Y-ROT-INTERP"));
ROUTE118.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE118);

ROUTE& ROUTE119 =  ROUTE();
ROUTE119.setFromNode(CString("Fish_Dummy_rotate_Y-TIMER"));
ROUTE119.setFromField(CString("fraction_changed"));
ROUTE119.setToNode(CString("Fish_body-POS-INTERP"));
ROUTE119.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE119);

ROUTE& ROUTE120 =  ROUTE();
ROUTE120.setFromNode(CString("Fish_body-POS-INTERP"));
ROUTE120.setFromField(CString("value_changed"));
ROUTE120.setToNode(CString("Fish_body-ROOT"));
ROUTE120.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE120);

ROUTE& ROUTE121 =  ROUTE();
ROUTE121.setFromNode(CString("TimeSensor_Fishswim-TIMER"));
ROUTE121.setFromField(CString("fraction_changed"));
ROUTE121.setToNode(CString("Fish_body-POS-INTERP"));
ROUTE121.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE121);

ROUTE& ROUTE122 =  ROUTE();
ROUTE122.setFromNode(CString("Fish_Dummy_rotate_Y-TIMER"));
ROUTE122.setFromField(CString("fraction_changed"));
ROUTE122.setToNode(CString("Fish_body-ROT-INTERP"));
ROUTE122.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE122);

ROUTE& ROUTE123 =  ROUTE();
ROUTE123.setFromNode(CString("Fish_body-ROT-INTERP"));
ROUTE123.setFromField(CString("value_changed"));
ROUTE123.setToNode(CString("Fish_body-ROOT"));
ROUTE123.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE123);

ROUTE& ROUTE124 =  ROUTE();
ROUTE124.setFromNode(CString("TimeSensor_Fishswim-TIMER"));
ROUTE124.setFromField(CString("fraction_changed"));
ROUTE124.setToNode(CString("Fish_body-ROT-INTERP"));
ROUTE124.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE124);

ROUTE& ROUTE125 =  ROUTE();
ROUTE125.setFromNode(CString("Fish_Dummy_rotate_Y-TIMER"));
ROUTE125.setFromField(CString("fraction_changed"));
ROUTE125.setToNode(CString("Fish_fin_L-ROT-INTERP"));
ROUTE125.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE125);

ROUTE& ROUTE126 =  ROUTE();
ROUTE126.setFromNode(CString("Fish_fin_L-ROT-INTERP"));
ROUTE126.setFromField(CString("value_changed"));
ROUTE126.setToNode(CString("Fish_fin_L-ROOT"));
ROUTE126.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE126);

ROUTE& ROUTE127 =  ROUTE();
ROUTE127.setFromNode(CString("TimeSensor_Fishswim-TIMER"));
ROUTE127.setFromField(CString("fraction_changed"));
ROUTE127.setToNode(CString("Fish_fin_L-ROT-INTERP"));
ROUTE127.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE127);

ROUTE& ROUTE128 =  ROUTE();
ROUTE128.setFromNode(CString("Fish_Dummy_rotate_Y-TIMER"));
ROUTE128.setFromField(CString("fraction_changed"));
ROUTE128.setToNode(CString("Fish_tail-ROT-INTERP"));
ROUTE128.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE128);

ROUTE& ROUTE129 =  ROUTE();
ROUTE129.setFromNode(CString("Fish_tail-ROT-INTERP"));
ROUTE129.setFromField(CString("value_changed"));
ROUTE129.setToNode(CString("Fish_tail-ROOT"));
ROUTE129.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE129);

ROUTE& ROUTE130 =  ROUTE();
ROUTE130.setFromNode(CString("TimeSensor_Fishswim-TIMER"));
ROUTE130.setFromField(CString("fraction_changed"));
ROUTE130.setToNode(CString("Fish_tail-ROT-INTERP"));
ROUTE130.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE130);

ROUTE& ROUTE131 =  ROUTE();
ROUTE131.setFromNode(CString("Fish_Dummy_rotate_Y-TIMER"));
ROUTE131.setFromField(CString("fraction_changed"));
ROUTE131.setToNode(CString("Fish_fin_R-ROT-INTERP"));
ROUTE131.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE131);

ROUTE& ROUTE132 =  ROUTE();
ROUTE132.setFromNode(CString("Fish_fin_R-ROT-INTERP"));
ROUTE132.setFromField(CString("value_changed"));
ROUTE132.setToNode(CString("Fish_fin_R-ROOT"));
ROUTE132.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE132);

ROUTE& ROUTE133 =  ROUTE();
ROUTE133.setFromNode(CString("TimeSensor_Fishswim-TIMER"));
ROUTE133.setFromField(CString("fraction_changed"));
ROUTE133.setToNode(CString("Fish_fin_R-ROT-INTERP"));
ROUTE133.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE133);

ROUTE& ROUTE134 =  ROUTE();
ROUTE134.setFromNode(CString("Fish_Dummy_rotate_Y-TIMER"));
ROUTE134.setFromField(CString("fraction_changed"));
ROUTE134.setToNode(CString("Fish_Jaw-POS-INTERP"));
ROUTE134.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE134);

ROUTE& ROUTE135 =  ROUTE();
ROUTE135.setFromNode(CString("Fish_Jaw-POS-INTERP"));
ROUTE135.setFromField(CString("value_changed"));
ROUTE135.setToNode(CString("Fish_Jaw-ROOT"));
ROUTE135.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE135);

ROUTE& ROUTE136 =  ROUTE();
ROUTE136.setFromNode(CString("TimeSensor_Fishswim-TIMER"));
ROUTE136.setFromField(CString("fraction_changed"));
ROUTE136.setToNode(CString("Fish_Jaw-POS-INTERP"));
ROUTE136.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE136);

ROUTE& ROUTE137 =  ROUTE();
ROUTE137.setFromNode(CString("Fish_Dummy_rotate_Y-TIMER"));
ROUTE137.setFromField(CString("fraction_changed"));
ROUTE137.setToNode(CString("Fish_Jaw-ROT-INTERP"));
ROUTE137.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE137);

ROUTE& ROUTE138 =  ROUTE();
ROUTE138.setFromNode(CString("Fish_Jaw-ROT-INTERP"));
ROUTE138.setFromField(CString("value_changed"));
ROUTE138.setToNode(CString("Fish_Jaw-ROOT"));
ROUTE138.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE138);

ROUTE& ROUTE139 =  ROUTE();
ROUTE139.setFromNode(CString("TimeSensor_Fishswim-TIMER"));
ROUTE139.setFromField(CString("fraction_changed"));
ROUTE139.setToNode(CString("Fish_Jaw-ROT-INTERP"));
ROUTE139.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE139);

ROUTE& ROUTE140 =  ROUTE();
ROUTE140.setFromNode(CString("Fish_Dummy_rotate_Y-TIMER"));
ROUTE140.setFromField(CString("fraction_changed"));
ROUTE140.setToNode(CString("Fish_fin_T-ROT-INTERP"));
ROUTE140.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE140);

ROUTE& ROUTE141 =  ROUTE();
ROUTE141.setFromNode(CString("Fish_fin_T-ROT-INTERP"));
ROUTE141.setFromField(CString("value_changed"));
ROUTE141.setToNode(CString("Fish_fin_T-ROOT"));
ROUTE141.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE141);

ROUTE& ROUTE142 =  ROUTE();
ROUTE142.setFromNode(CString("TimeSensor_Fishswim-TIMER"));
ROUTE142.setFromField(CString("fraction_changed"));
ROUTE142.setToNode(CString("Fish_fin_T-ROT-INTERP"));
ROUTE142.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE142);

X3D0.setScene(&Scene7);

}
