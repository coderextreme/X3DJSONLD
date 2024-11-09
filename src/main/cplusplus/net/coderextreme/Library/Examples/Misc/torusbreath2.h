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
meta3.setContent(CString("Thu, 08 Oct 2015 11:03:48 GMT"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("creator"));
meta4.setContent(CString("Holger Seelig"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("generator"));
meta5.setContent(CString("Titania V2.0.0, http://titania.create3000.de"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("identifier"));
meta6.setContent(CString("file:///home/holger/Projekte/Library/Examples/Misc/torusbreath2.x3d"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("modified"));
meta7.setContent(CString("Mon, 03 Oct 2016 12:49:26 GMT"));
head1.addMeta(&meta7);

X3D0.setHead(&head1);

Scene& Scene8 =  Scene();
WorldInfo& WorldInfo9 =  WorldInfo();
WorldInfo9.setTitle(CString("torusbreath2"));
MetadataSet& MetadataSet10 =  MetadataSet();
MetadataSet10.X3DNode::setName(CString("Titania"));
MetadataSet10.setDEF(CString("Titania"));
MetadataSet10.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataSet& MetadataSet11 =  MetadataSet();
MetadataSet11.X3DNode::setName(CString("NavigationInfo"));
MetadataSet11.setDEF(CString("NavigationInfo"));
MetadataSet11.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataString& MetadataString12 =  MetadataString();
MetadataString12.X3DNode::setName(CString("type"));
MetadataString12.setDEF(CString("type"));
MetadataString12.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataString12.setValue(new CString[]{CString("EXAMINE")}, 1);
MetadataSet11.setValue((X3DNode *)&MetadataString12);

MetadataSet10.setValue((X3DNode *)&MetadataSet11);

MetadataSet& MetadataSet13 =  MetadataSet();
MetadataSet13.X3DNode::setName(CString("Viewpoint"));
MetadataSet13.setDEF(CString("Viewpoint"));
MetadataSet13.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble& MetadataDouble14 =  MetadataDouble();
MetadataDouble14.X3DNode::setName(CString("position"));
MetadataDouble14.setDEF(CString("position"));
MetadataDouble14.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble14.setValue(new double[]{1.0,162.0,268.0}, 3);
MetadataSet13.setValue((X3DNode *)&MetadataDouble14);

MetadataDouble& MetadataDouble15 =  MetadataDouble();
MetadataDouble15.X3DNode::setName(CString("orientation"));
MetadataDouble15.setDEF(CString("orientation"));
MetadataDouble15.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble15.setValue(new double[]{-1.0,0.0,0.0,0.573000073432922}, 4);
MetadataSet13.setValue((X3DNode *)&MetadataDouble15);

MetadataDouble& MetadataDouble16 =  MetadataDouble();
MetadataDouble16.X3DNode::setName(CString("centerOfRotation"));
MetadataDouble16.setDEF(CString("centerOfRotation"));
MetadataDouble16.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble16.setValue(new double[]{0.0,0.0,0.0}, 3);
MetadataSet13.setValue((X3DNode *)&MetadataDouble16);

MetadataSet10.setValue((X3DNode *)&MetadataSet13);

MetadataSet& MetadataSet17 =  MetadataSet();
MetadataSet17.X3DNode::setName(CString("Selection"));
MetadataSet17.setDEF(CString("Selection"));
MetadataSet17.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataSet& MetadataSet18 =  MetadataSet();
MetadataSet18.X3DNode::setName(CString("children"));
MetadataSet18.setDEF(CString("children"));
MetadataSet18.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataSet17.setValue((X3DNode *)&MetadataSet18);

MetadataSet& MetadataSet19 =  MetadataSet();
MetadataSet19.X3DNode::setName(CString("previous"));
MetadataSet19.setDEF(CString("previous"));
MetadataSet19.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataSet17.setValue((X3DNode *)&MetadataSet19);

MetadataSet10.setValue((X3DNode *)&MetadataSet17);

WorldInfo9.setMetadata(&MetadataSet10);

Scene8.addChild(&WorldInfo9);

Viewpoint& Viewpoint20 =  Viewpoint();
Viewpoint20.setDEF(CString("entry"));
Viewpoint20.setDescription(CString("entry"));
Viewpoint20.setPosition(new float[]{1.0,162.0,268.0});
Viewpoint20.setOrientation(new float[]{-1.0,0.0,0.0,0.573});
Viewpoint20.setFieldOfView(0.785);
Scene8.addChild(&Viewpoint20);

NavigationInfo& NavigationInfo21 =  NavigationInfo();
NavigationInfo21.setDEF(CString("Examine"));
NavigationInfo21.setType(new CString[]{CString("EXAMINE")}, 1);
NavigationInfo21.setSpeed(5);
Scene8.addChild(&NavigationInfo21);

TimeSensor& TimeSensor22 =  TimeSensor();
TimeSensor22.setDEF(CString("TimeSensor01-TIMER"));
TimeSensor22.setCycleInterval(1.33);
TimeSensor22.setLoop(true);
TimeSensor22.setStartTime(1);
Scene8.addChild(&TimeSensor22);

Script& Script23 =  Script();
Script23.setDEF(CString("TimeSensor01-SCRIPT"));
field& field24 =  field();
field24.setName(CString("fractionIn"));
field24.setAccessType(CString("inputOnly"));
field24.setType(CString("SFFloat"));
Script23.addChild(&field24);

field& field25 =  field();
field25.setName(CString("fractionOut"));
field25.setAccessType(CString("outputOnly"));
field25.setType(CString("SFFloat"));
Script23.addChild(&field25);


//Script23.setSourceCode(CString("vrmlscript:")+
//_T("    function fractionIn(i) {")+
//_T("    fractionOut = 0.4 * i;")+
//_T("  }"));
Scene8.addChild(&Script23);

Viewpoint& Viewpoint26 =  Viewpoint();
Viewpoint26.setDEF(CString("closeup"));
Viewpoint26.setDescription(CString("closeup"));
Viewpoint26.setPosition(new float[]{0.0,190.0,0.0000103});
Viewpoint26.setOrientation(new float[]{-0.76193400937255,-0.457961005633378,-0.457961005633378,1.84});
Viewpoint26.setFieldOfView(0.785);
Scene8.addChild(&Viewpoint26);

Viewpoint& Viewpoint27 =  Viewpoint();
Viewpoint27.setDEF(CString("sideview"));
Viewpoint27.setDescription(CString("sideview"));
Viewpoint27.setPosition(new float[]{0.0,-60.0,0.0});
Viewpoint27.setOrientation(new float[]{0.258013964510698,-0.931051871935686,0.258013964510698,1.64});
Viewpoint27.setFieldOfView(0.785);
Scene8.addChild(&Viewpoint27);

Transform& Transform28 =  Transform();
Transform28.setDEF(CString("Torus01"));
Transform28.setTranslation(new float[]{0.0,14.5827,0.0});
Transform28.setRotation(new float[]{-0.707106781186548,0.0,-0.707106781186548,3.14});
Transform28.setScale(new float[]{1.65058,1.0,1.65058});
TimeSensor& TimeSensor29 =  TimeSensor();
TimeSensor29.setDEF(CString("Torus01-TIMER"));
TimeSensor29.setCycleInterval(3.33);
Transform28.addChild(&TimeSensor29);

PositionInterpolator& PositionInterpolator30 =  PositionInterpolator();
PositionInterpolator30.setDEF(CString("Torus01-POS-INTERP"));
PositionInterpolator30.setKey(new float[]{0.0,0.01,0.02,0.03,0.04,0.05,0.06,0.07,0.08,0.09,0.1,0.11,0.12,0.13,0.14,0.15,0.16,0.17,0.18,0.19,0.2,0.21,0.22,0.23,0.24,0.25,0.26,0.27,0.28,0.29,0.3,0.31,0.32,0.33,0.34,0.35,0.36,0.37,0.38,0.39,0.4}, 41);
PositionInterpolator30.setKeyValue(new float[]{0.0,0.0,0.0,0.0,3.8,0.0,0.0,7.2,0.0,0.0,10.2,0.0,0.0,12.8,0.0,0.0,15.0,0.0,0.0,16.8,0.0,0.0,18.2,0.0,0.0,19.2,0.0,0.0,19.8,0.0,0.0,20.0,0.0,0.0,19.6,0.0,0.0,18.6,0.0,0.0,16.9,0.0,0.0,14.9,0.0,0.0,12.5,0.0,0.0,9.92,0.0,0.0,7.26,0.0,0.0,4.64,0.0,0.0,2.18,0.0,0.0,0.0,0.0,0.0,-2.18,0.0,0.0,-4.64,0.0,0.0,-7.26,0.0,0.0,-9.92,0.0,0.0,-12.5,0.0,0.0,-14.9,0.0,0.0,-16.9,0.0,0.0,-18.6,0.0,0.0,-19.6,0.0,0.0,-20.0,0.0,0.0,-19.8,0.0,0.0,-19.2,0.0,0.0,-18.2,0.0,0.0,-16.8,0.0,0.0,-15.0,0.0,0.0,-12.8,0.0,0.0,-10.2,0.0,0.0,-7.2,0.0,0.0,-3.8,0.0,0.0,0.0,0.0}, 123);
Transform28.addChild(&PositionInterpolator30);

OrientationInterpolator& OrientationInterpolator31 =  OrientationInterpolator();
OrientationInterpolator31.setDEF(CString("Torus01-ROT-INTERP"));
OrientationInterpolator31.setKey(new float[]{0.0,0.04,0.05,0.06,0.08,0.09,0.11,0.12,0.13,0.14,0.16,0.17,0.18,0.19,0.2,0.25,0.26,0.28,0.29,0.32,0.33,0.34,0.35,0.36,0.37,0.38,0.39,0.4}, 28);
OrientationInterpolator31.setKeyValue(new float[]{-0.707106781186548,0.0,-0.707106781186548,3.14,-0.707106781186548,0.0,-0.707106781186548,3.14,0.707106781186548,0.0,0.707106781186548,3.14,-0.707106781186548,0.0,-0.707106781186548,3.14,-0.707106781186548,0.0,-0.707106781186548,3.14,0.707106781186548,0.0,0.707106781186548,3.14,0.707106781186548,0.0,0.707106781186548,3.14,-0.707106781186548,0.0,-0.707106781186548,3.14,0.707106781186548,0.0,0.707106781186548,3.14,-0.707106781186548,0.0,-0.707106781186548,3.14,-0.707106781186548,0.0,-0.707106781186548,3.14,0.707106781186548,0.0,0.707106781186548,3.14,-0.707106781186548,0.0,-0.707106781186548,3.14,-0.707106781186548,0.0,-0.707106781186548,3.14,0.707106781186548,0.0,0.707106781186548,3.14,0.707106781186548,0.0,0.707106781186548,3.14,-0.707106781186548,0.0,-0.707106781186548,3.14,-0.707106781186548,0.0,-0.707106781186548,3.14,0.707106781186548,0.0,0.707106781186548,3.14,0.707106781186548,0.0,0.707106781186548,3.14,-0.707106781186548,0.0,-0.707106781186548,3.14,0.707106781186548,0.0,0.707106781186548,3.14,-0.707106781186548,0.0,-0.707106781186548,3.14,0.707106781186548,0.0,0.707106781186548,3.14,0.707106781186548,0.0,0.707106781186548,3.14,-0.707106781186548,0.0,-0.707106781186548,3.14,-0.707106781186548,0.0,-0.707106781186548,3.14,0.707106781186548,0.0,0.707106781186548,3.14}, 112);
Transform28.addChild(&OrientationInterpolator31);

PositionInterpolator& PositionInterpolator32 =  PositionInterpolator();
PositionInterpolator32.setDEF(CString("Torus01-SCALE-INTERP"));
PositionInterpolator32.setKey(new float[]{0.0,0.01,0.02,0.03,0.04,0.05,0.06,0.07,0.08,0.09,0.1,0.11,0.12,0.13,0.14,0.15,0.16,0.17,0.18,0.19,0.2,0.21,0.22,0.23,0.24,0.25,0.26,0.27,0.28,0.29,0.3,0.31,0.32,0.33,0.34,0.35,0.36,0.37,0.38,0.39,0.4}, 41);
PositionInterpolator32.setKeyValue(new float[]{1.0,1.0,1.0,1.02,1.0,1.02,1.04,1.0,1.04,1.07,1.0,1.07,1.1,1.0,1.1,1.13,1.0,1.13,1.17,1.0,1.17,1.21,1.0,1.21,1.25,1.0,1.25,1.29,1.0,1.29,1.34,1.0,1.34,1.4,1.0,1.4,1.47,1.0,1.47,1.55,1.0,1.55,1.64,1.0,1.64,1.72,1.0,1.72,1.8,1.0,1.8,1.88,1.0,1.88,1.93,1.0,1.93,1.97,1.0,1.97,1.98,1.0,1.98,1.97,1.0,1.97,1.93,1.0,1.93,1.87,1.0,1.87,1.8,1.0,1.8,1.72,1.0,1.72,1.63,1.0,1.63,1.54,1.0,1.54,1.46,1.0,1.46,1.39,1.0,1.39,1.33,1.0,1.33,1.28,1.0,1.28,1.24,1.0,1.24,1.2,1.0,1.2,1.16,1.0,1.16,1.13,1.0,1.13,1.09,1.0,1.09,1.07,1.0,1.07,1.04,1.0,1.04,1.02,1.0,1.02,1.0,1.0,1.0}, 123);
Transform28.addChild(&PositionInterpolator32);

Shape& Shape33 =  Shape();
Appearance& Appearance34 =  Appearance();
Material& Material35 =  Material();
Material35.setDiffuseColor(new float[]{0.4,0.522,0.702});
Material35.setEmissiveColor(new float[]{0.04,0.0522,0.0702});
Material35.setShininess(0.4);
Appearance34.addChild(&Material35);

Shape33.addChild(&Appearance34);

IndexedFaceSet& IndexedFaceSet36 =  IndexedFaceSet();
IndexedFaceSet36.setDEF(CString("Torus01-FACES"));
IndexedFaceSet36.setCoordIndex(new int32_t[]{0,5,4,-1,0,1,5,-1,1,6,5,-1,1,2,6,-1,2,7,6,-1,2,3,7,-1,3,4,7,-1,3,0,4,-1,4,9,8,-1,4,5,9,-1,5,10,9,-1,5,6,10,-1,6,11,10,-1,6,7,11,-1,7,8,11,-1,7,4,8,-1,8,13,12,-1,8,9,13,-1,9,14,13,-1,9,10,14,-1,10,15,14,-1,10,11,15,-1,11,12,15,-1,11,8,12,-1,12,1,0,-1,12,13,1,-1,13,2,1,-1,13,14,2,-1,14,3,2,-1,14,15,3,-1,15,0,3,-1,15,12,0,-1}, 128);
Coordinate& Coordinate37 =  Coordinate();
Coordinate37.setDEF(CString("Torus01-COORD"));
Coordinate37.setPoint(new float[]{80.0,0.0,0.0,60.0,20.0,0.0,40.0,0.0,0.0,60.0,-20.0,0.0,0.0,0.0,80.0,0.0,20.0,60.0,0.0,0.0,40.0,0.0,-20.0,60.0,-80.0,0.0,0.0,-60.0,20.0,0.0,-40.0,0.0,0.0,-60.0,-20.0,0.0,0.0000105,0.0,-80.0,0.0,20.0,-60.0,0.0,0.0,-40.0,0.0,-20.0,-60.0}, 48);
IndexedFaceSet36.setCoord(&Coordinate37);

Shape33.setGeometry(&IndexedFaceSet36);

Transform28.addChild(&Shape33);

Scene8.addChild(&Transform28);

Transform& Transform38 =  Transform();
Transform38.setDEF(CString("Torus02"));
Transform38.setTranslation(new float[]{0.964,-14.5827,-0.482});
Transform38.setRotation(new float[]{0.0,1.0,0.0,1.57});
Transform38.setScale(new float[]{0.73762,1.0,0.73762});
TimeSensor& TimeSensor39 =  TimeSensor();
TimeSensor39.setDEF(CString("Torus02-TIMER"));
TimeSensor39.setCycleInterval(3.33);
Transform38.addChild(&TimeSensor39);

PositionInterpolator& PositionInterpolator40 =  PositionInterpolator();
PositionInterpolator40.setDEF(CString("Torus02-POS-INTERP"));
PositionInterpolator40.setKey(new float[]{0.0,0.01,0.02,0.03,0.04,0.05,0.06,0.07,0.08,0.09,0.1,0.11,0.12,0.13,0.14,0.15,0.16,0.17,0.18,0.19,0.2,0.21,0.22,0.23,0.24,0.25,0.26,0.27,0.28,0.29,0.3,0.31,0.32,0.33,0.34,0.35,0.36,0.37,0.38,0.39,0.4}, 41);
PositionInterpolator40.setKeyValue(new float[]{0.964,0.0,-0.482,0.964,-3.8,-0.482,0.964,-7.2,-0.482,0.964,-10.2,-0.482,0.964,-12.8,-0.482,0.964,-15.0,-0.482,0.964,-16.8,-0.482,0.964,-18.2,-0.482,0.964,-19.2,-0.482,0.964,-19.8,-0.482,0.964,-20.0,-0.482,0.964,-19.6,-0.482,0.964,-18.6,-0.482,0.964,-16.9,-0.482,0.964,-14.9,-0.482,0.964,-12.5,-0.482,0.964,-9.92,-0.482,0.964,-7.26,-0.482,0.964,-4.64,-0.482,0.964,-2.18,-0.482,0.964,0.0,-0.482,0.964,2.18,-0.482,0.964,4.64,-0.482,0.964,7.26,-0.482,0.964,9.92,-0.482,0.964,12.5,-0.482,0.964,14.9,-0.482,0.964,16.9,-0.482,0.964,18.6,-0.482,0.964,19.6,-0.482,0.964,20.0,-0.482,0.964,19.8,-0.482,0.964,19.2,-0.482,0.964,18.2,-0.482,0.964,16.8,-0.482,0.964,15.0,-0.482,0.964,12.8,-0.482,0.964,10.2,-0.482,0.964,7.2,-0.482,0.964,3.8,-0.482,0.964,0.0,-0.482}, 123);
Transform38.addChild(&PositionInterpolator40);

PositionInterpolator& PositionInterpolator41 =  PositionInterpolator();
PositionInterpolator41.setDEF(CString("Torus02-SCALE-INTERP"));
PositionInterpolator41.setKey(new float[]{0.0,0.01,0.02,0.03,0.04,0.05,0.06,0.07,0.08,0.09,0.1,0.11,0.12,0.13,0.14,0.15,0.16,0.17,0.18,0.19,0.2,0.21,0.22,0.23,0.24,0.25,0.26,0.27,0.28,0.29,0.3,0.31,0.32,0.33,0.34,0.35,0.36,0.37,0.38,0.39,0.4}, 41);
PositionInterpolator41.setKeyValue(new float[]{1.0,1.0,1.0,0.979,1.0,0.979,0.959,1.0,0.959,0.939,1.0,0.939,0.92,1.0,0.92,0.901,1.0,0.901,0.882,1.0,0.882,0.864,1.0,0.864,0.847,1.0,0.847,0.83,1.0,0.83,0.813,1.0,0.813,0.796,1.0,0.796,0.777,1.0,0.777,0.759,1.0,0.759,0.74,1.0,0.74,0.722,1.0,0.722,0.706,1.0,0.706,0.693,1.0,0.693,0.682,1.0,0.682,0.675,1.0,0.675,0.672,1.0,0.672,0.674,1.0,0.674,0.68,1.0,0.68,0.69,1.0,0.69,0.703,1.0,0.703,0.718,1.0,0.718,0.734,1.0,0.734,0.752,1.0,0.752,0.771,1.0,0.771,0.789,1.0,0.789,0.806,1.0,0.806,0.823,1.0,0.823,0.841,1.0,0.841,0.86,1.0,0.86,0.879,1.0,0.879,0.899,1.0,0.899,0.919,1.0,0.919,0.94,1.0,0.94,0.962,1.0,0.962,0.985,1.0,0.985,1.01,1.0,1.01}, 123);
Transform38.addChild(&PositionInterpolator41);

Shape& Shape42 =  Shape();
Appearance& Appearance43 =  Appearance();
Material& Material44 =  Material();
Material44.setDiffuseColor(new float[]{0.4,0.522,0.702});
Material44.setEmissiveColor(new float[]{0.04,0.0522,0.0702});
Material44.setShininess(0.4);
Appearance43.addChild(&Material44);

Shape42.addChild(&Appearance43);

IndexedFaceSet& IndexedFaceSet45 =  IndexedFaceSet();
IndexedFaceSet45.setDEF(CString("Torus02-FACES"));
IndexedFaceSet45.setCoordIndex(new int32_t[]{0,5,4,-1,0,1,5,-1,1,6,5,-1,1,2,6,-1,2,7,6,-1,2,3,7,-1,3,4,7,-1,3,0,4,-1,4,9,8,-1,4,5,9,-1,5,10,9,-1,5,6,10,-1,6,11,10,-1,6,7,11,-1,7,8,11,-1,7,4,8,-1,8,13,12,-1,8,9,13,-1,9,14,13,-1,9,10,14,-1,10,15,14,-1,10,11,15,-1,11,12,15,-1,11,8,12,-1,12,1,0,-1,12,13,1,-1,13,2,1,-1,13,14,2,-1,14,3,2,-1,14,15,3,-1,15,0,3,-1,15,12,0,-1}, 128);
Coordinate& Coordinate46 =  Coordinate();
Coordinate46.setDEF(CString("Torus02-COORD"));
Coordinate46.setPoint(new float[]{120.0,0.0,0.0,100.0,20.0,0.0,80.0,0.0,0.0,100.0,-20.0,0.0,0.0,0.0,120.0,0.0,20.0,100.0,0.0,0.0,80.0,0.0,-20.0,100.0,-120.0,0.0,-0.0000105,-100.0,20.0,0.0,-80.0,0.0,0.0,-100.0,-20.0,0.0,0.0000157,0.0,-120.0,0.0000131,20.0,-100.0,0.0000105,0.0,-80.0,0.0000131,-20.0,-100.0}, 48);
IndexedFaceSet45.setCoord(&Coordinate46);

Shape42.setGeometry(&IndexedFaceSet45);

Transform38.addChild(&Shape42);

Scene8.addChild(&Transform38);

Transform& Transform47 =  Transform();
Transform47.setDEF(CString("Sphere01"));
Transform47.setRotation(new float[]{0.0,1.0,0.0,1.57});
Transform47.setScale(new float[]{1.02793,0.729241,1.02793});
Transform47.setScaleOrientation(new float[]{0.0,-1.0,0.0,0.227});
TimeSensor& TimeSensor48 =  TimeSensor();
TimeSensor48.setDEF(CString("Sphere01-TIMER"));
TimeSensor48.setCycleInterval(3.33);
Transform47.addChild(&TimeSensor48);

PositionInterpolator& PositionInterpolator49 =  PositionInterpolator();
PositionInterpolator49.setDEF(CString("Sphere01-SCALE-INTERP"));
PositionInterpolator49.setKey(new float[]{0.0,0.01,0.02,0.03,0.04,0.05,0.06,0.07,0.08,0.09,0.1,0.11,0.12,0.13,0.14,0.15,0.16,0.17,0.18,0.19,0.2,0.21,0.22,0.23,0.24,0.25,0.26,0.27,0.28,0.29,0.3,0.31,0.32,0.33,0.34,0.35,0.36,0.37,0.38,0.39,0.4}, 41);
PositionInterpolator49.setKeyValue(new float[]{1.0,0.725,1.0,0.964,0.752,0.964,0.933,0.775,0.933,0.907,0.795,0.907,0.886,0.812,0.886,0.871,0.824,0.871,0.86,0.833,0.86,0.855,0.839,0.855,0.855,0.841,0.855,0.86,0.839,0.86,0.87,0.833,0.87,0.89,0.82,0.89,0.925,0.798,0.925,0.97,0.768,0.97,1.02,0.734,1.02,1.08,0.698,1.08,1.13,0.662,1.13,1.18,0.63,1.18,1.22,0.604,1.22,1.24,0.586,1.24,1.25,0.579,1.25,1.24,0.584,1.24,1.22,0.601,1.22,1.18,0.626,1.18,1.13,0.656,1.13,1.08,0.69,1.08,1.03,0.725,1.03,0.981,0.758,0.981,0.937,0.787,0.937,0.902,0.809,0.902,0.882,0.822,0.882,0.872,0.827,0.872,0.866,0.83,0.866,0.866,0.828,0.866,0.87,0.824,0.87,0.879,0.816,0.879,0.894,0.805,0.894,0.913,0.79,0.913,0.937,0.772,0.937,0.965,0.75,0.965,0.999,0.725,0.999}, 123);
Transform47.addChild(&PositionInterpolator49);

Shape& Shape50 =  Shape();
Appearance& Appearance51 =  Appearance();
Material& Material52 =  Material();
Material52.setDiffuseColor(new float[]{0.882,0.345,0.78});
Appearance51.addChild(&Material52);

Shape50.addChild(&Appearance51);

IndexedFaceSet& IndexedFaceSet53 =  IndexedFaceSet();
IndexedFaceSet53.setDEF(CString("Sphere01-FACES"));
IndexedFaceSet53.setCoordIndex(new int32_t[]{1,0,2,-1,2,0,3,-1,3,0,4,-1,4,0,5,-1,5,0,6,-1,6,0,7,-1,7,0,8,-1,8,0,9,-1,9,0,10,-1,10,0,11,-1,11,0,12,-1,12,0,1,-1,13,1,14,-1,14,1,2,-1,14,2,15,-1,15,2,3,-1,15,3,16,-1,16,3,4,-1,16,4,17,-1,17,4,5,-1,17,5,18,-1,18,5,6,-1,18,6,19,-1,19,6,7,-1,19,7,20,-1,20,7,8,-1,20,8,21,-1,21,8,9,-1,21,9,22,-1,22,9,10,-1,22,10,23,-1,23,10,11,-1,23,11,24,-1,24,11,12,-1,24,12,13,-1,13,12,1,-1,25,13,26,-1,26,13,14,-1,26,14,27,-1,27,14,15,-1,27,15,28,-1,28,15,16,-1,28,16,29,-1,29,16,17,-1,29,17,30,-1,30,17,18,-1,30,18,31,-1,31,18,19,-1,31,19,32,-1,32,19,20,-1,32,20,33,-1,33,20,21,-1,33,21,34,-1,34,21,22,-1,34,22,35,-1,35,22,23,-1,35,23,36,-1,36,23,24,-1,36,24,25,-1,25,24,13,-1,37,25,38,-1,38,25,26,-1,38,26,39,-1,39,26,27,-1,39,27,40,-1,40,27,28,-1,40,28,41,-1,41,28,29,-1,41,29,42,-1,42,29,30,-1,42,30,43,-1,43,30,31,-1,43,31,44,-1,44,31,32,-1,44,32,45,-1,45,32,33,-1,45,33,46,-1,46,33,34,-1,46,34,47,-1,47,34,35,-1,47,35,48,-1,48,35,36,-1,48,36,37,-1,37,36,25,-1,49,37,50,-1,50,37,38,-1,50,38,51,-1,51,38,39,-1,51,39,52,-1,52,39,40,-1,52,40,53,-1,53,40,41,-1,53,41,54,-1,54,41,42,-1,54,42,55,-1,55,42,43,-1,55,43,56,-1,56,43,44,-1,56,44,57,-1,57,44,45,-1,57,45,58,-1,58,45,46,-1,58,46,59,-1,59,46,47,-1,59,47,60,-1,60,47,48,-1,60,48,49,-1,49,48,37,-1,50,61,49,-1,51,61,50,-1,52,61,51,-1,53,61,52,-1,54,61,53,-1,55,61,54,-1,56,61,55,-1,57,61,56,-1,58,61,57,-1,59,61,58,-1,60,61,59,-1,49,61,60,-1}, 480);
Coordinate& Coordinate54 =  Coordinate();
Coordinate54.setDEF(CString("Sphere01-COORD"));
Coordinate54.setPoint(new float[]{0.0,140.0,0.0,70.0,121.0,0.0,60.6,121.0,-35.0,35.0,121.0,-60.6,0.0,121.0,-70.0,-35.0,121.0,-60.6,-60.6,121.0,-35.0,-70.0,121.0,0.0,-60.6,121.0,35.0,-35.0,121.0,60.6,0.0,121.0,70.0,35.0,121.0,60.6,60.6,121.0,35.0,121.0,70.0,0.0,105.0,70.0,-60.6,60.6,70.0,-105.0,0.0,70.0,-121.0,-60.6,70.0,-105.0,-105.0,70.0,-60.6,-121.0,70.0,0.0000106,-105.0,70.0,60.6,-60.6,70.0,105.0,0.0000159,70.0,121.0,60.6,70.0,105.0,105.0,70.0,60.6,140.0,0.0,0.0,121.0,0.0,-70.0,70.0,0.0,-121.0,0.0,0.0,-140.0,-70.0,0.0,-121.0,-121.0,0.0,-70.0,-140.0,0.0,0.0000122,-121.0,0.0,70.0,-70.0,0.0,121.0,0.0000184,0.0,140.0,70.0,0.0,121.0,121.0,0.0,70.0,121.0,-70.0,0.0,105.0,-70.0,-60.6,60.6,-70.0,-105.0,0.0,-70.0,-121.0,-60.6,-70.0,-105.0,-105.0,-70.0,-60.6,-121.0,-70.0,0.0000106,-105.0,-70.0,60.6,-60.6,-70.0,105.0,0.0000159,-70.0,121.0,60.6,-70.0,105.0,105.0,-70.0,60.6,70.0,-121.0,0.0,60.6,-121.0,-35.0,35.0,-121.0,-60.6,0.0,-121.0,-70.0,-35.0,-121.0,-60.6,-60.6,-121.0,-35.0,-70.0,-121.0,0.0,-60.6,-121.0,35.0,-35.0,-121.0,60.6,0.0,-121.0,70.0,35.0,-121.0,60.6,60.6,-121.0,35.0,0.0,-140.0,0.0}, 186);
IndexedFaceSet53.setCoord(&Coordinate54);

Shape50.setGeometry(&IndexedFaceSet53);

Transform47.addChild(&Shape50);

Scene8.addChild(&Transform47);

ROUTE& ROUTE55 =  ROUTE();
ROUTE55.setFromNode(CString("Torus01-TIMER"));
ROUTE55.setFromField(CString("fraction_changed"));
ROUTE55.setToNode(CString("Torus01-POS-INTERP"));
ROUTE55.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE55);

ROUTE& ROUTE56 =  ROUTE();
ROUTE56.setFromNode(CString("Torus01-POS-INTERP"));
ROUTE56.setFromField(CString("value_changed"));
ROUTE56.setToNode(CString("Torus01"));
ROUTE56.setToField(CString("set_translation"));
Scene8.addChild(&ROUTE56);

ROUTE& ROUTE57 =  ROUTE();
ROUTE57.setFromNode(CString("TimeSensor01-TIMER"));
ROUTE57.setFromField(CString("fraction_changed"));
ROUTE57.setToNode(CString("TimeSensor01-SCRIPT"));
ROUTE57.setToField(CString("fractionIn"));
Scene8.addChild(&ROUTE57);

ROUTE& ROUTE58 =  ROUTE();
ROUTE58.setFromNode(CString("TimeSensor01-SCRIPT"));
ROUTE58.setFromField(CString("fractionOut"));
ROUTE58.setToNode(CString("Torus01-POS-INTERP"));
ROUTE58.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE58);

ROUTE& ROUTE59 =  ROUTE();
ROUTE59.setFromNode(CString("Torus01-TIMER"));
ROUTE59.setFromField(CString("fraction_changed"));
ROUTE59.setToNode(CString("Torus01-ROT-INTERP"));
ROUTE59.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE59);

ROUTE& ROUTE60 =  ROUTE();
ROUTE60.setFromNode(CString("Torus01-ROT-INTERP"));
ROUTE60.setFromField(CString("value_changed"));
ROUTE60.setToNode(CString("Torus01"));
ROUTE60.setToField(CString("set_rotation"));
Scene8.addChild(&ROUTE60);

ROUTE& ROUTE61 =  ROUTE();
ROUTE61.setFromNode(CString("TimeSensor01-SCRIPT"));
ROUTE61.setFromField(CString("fractionOut"));
ROUTE61.setToNode(CString("Torus01-ROT-INTERP"));
ROUTE61.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE61);

ROUTE& ROUTE62 =  ROUTE();
ROUTE62.setFromNode(CString("Torus01-TIMER"));
ROUTE62.setFromField(CString("fraction_changed"));
ROUTE62.setToNode(CString("Torus01-SCALE-INTERP"));
ROUTE62.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE62);

ROUTE& ROUTE63 =  ROUTE();
ROUTE63.setFromNode(CString("Torus01-SCALE-INTERP"));
ROUTE63.setFromField(CString("value_changed"));
ROUTE63.setToNode(CString("Torus01"));
ROUTE63.setToField(CString("set_scale"));
Scene8.addChild(&ROUTE63);

ROUTE& ROUTE64 =  ROUTE();
ROUTE64.setFromNode(CString("TimeSensor01-SCRIPT"));
ROUTE64.setFromField(CString("fractionOut"));
ROUTE64.setToNode(CString("Torus01-SCALE-INTERP"));
ROUTE64.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE64);

ROUTE& ROUTE65 =  ROUTE();
ROUTE65.setFromNode(CString("Torus02-TIMER"));
ROUTE65.setFromField(CString("fraction_changed"));
ROUTE65.setToNode(CString("Torus02-POS-INTERP"));
ROUTE65.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE65);

ROUTE& ROUTE66 =  ROUTE();
ROUTE66.setFromNode(CString("Torus02-POS-INTERP"));
ROUTE66.setFromField(CString("value_changed"));
ROUTE66.setToNode(CString("Torus02"));
ROUTE66.setToField(CString("set_translation"));
Scene8.addChild(&ROUTE66);

ROUTE& ROUTE67 =  ROUTE();
ROUTE67.setFromNode(CString("TimeSensor01-SCRIPT"));
ROUTE67.setFromField(CString("fractionOut"));
ROUTE67.setToNode(CString("Torus02-POS-INTERP"));
ROUTE67.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE67);

ROUTE& ROUTE68 =  ROUTE();
ROUTE68.setFromNode(CString("Torus02-TIMER"));
ROUTE68.setFromField(CString("fraction_changed"));
ROUTE68.setToNode(CString("Torus02-SCALE-INTERP"));
ROUTE68.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE68);

ROUTE& ROUTE69 =  ROUTE();
ROUTE69.setFromNode(CString("Torus02-SCALE-INTERP"));
ROUTE69.setFromField(CString("value_changed"));
ROUTE69.setToNode(CString("Torus02"));
ROUTE69.setToField(CString("set_scale"));
Scene8.addChild(&ROUTE69);

ROUTE& ROUTE70 =  ROUTE();
ROUTE70.setFromNode(CString("TimeSensor01-SCRIPT"));
ROUTE70.setFromField(CString("fractionOut"));
ROUTE70.setToNode(CString("Torus02-SCALE-INTERP"));
ROUTE70.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE70);

ROUTE& ROUTE71 =  ROUTE();
ROUTE71.setFromNode(CString("Sphere01-TIMER"));
ROUTE71.setFromField(CString("fraction_changed"));
ROUTE71.setToNode(CString("Sphere01-SCALE-INTERP"));
ROUTE71.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE71);

ROUTE& ROUTE72 =  ROUTE();
ROUTE72.setFromNode(CString("Sphere01-SCALE-INTERP"));
ROUTE72.setFromField(CString("value_changed"));
ROUTE72.setToNode(CString("Sphere01"));
ROUTE72.setToField(CString("set_scale"));
Scene8.addChild(&ROUTE72);

ROUTE& ROUTE73 =  ROUTE();
ROUTE73.setFromNode(CString("TimeSensor01-SCRIPT"));
ROUTE73.setFromField(CString("fractionOut"));
ROUTE73.setToNode(CString("Sphere01-SCALE-INTERP"));
ROUTE73.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE73);

X3D0.setScene(&Scene8);

//}
