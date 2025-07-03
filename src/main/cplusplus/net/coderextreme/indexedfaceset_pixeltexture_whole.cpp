#ifndef WIN32
#define WINAPI
#define AFX_EXT_CLASS
#define EXPORT32
#define WINGDIAPI
#define APIENTRY
#endif
#define FALSE false
#define TRUE true
#define BOOL bool
#define False false
#define True true
#include "C:/Users/jcarl/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
#include "C:/Users/jcarl/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
#include "C:/Users/jcarl/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
#include "C:/Users/jcarl/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
int main(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(CString("Interchange"));
X3D0.setVersion(CString("3.0"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(CString("title"));
meta2.setContent(CString("indexedfaceset_pixeltexture_whole.x3d"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(CString("warning"));
meta3.setContent(CString("file did not transform to vrml97"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("Image"));
meta4.setContent(CString("indexedfaceset_pixeltexture_whole-front.jpg"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("Image"));
meta5.setContent(CString("indexedfaceset_pixeltexture_whole-rear.jpg"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("Image"));
meta6.setContent(CString("indexedfaceset_pixeltexture_whole-top.jpg"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("Image"));
meta7.setContent(CString("indexedfaceset_pixeltexture_whole-bottom.jpg"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(CString("Image"));
meta8.setContent(CString("indexedfaceset_pixeltexture_whole-left.jpg"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(CString("Image"));
meta9.setContent(CString("indexedfaceset_pixeltexture_whole-right.jpg"));
head1.addMeta(&meta9);

meta& meta10 =  meta();
meta10.setName(CString("reference"));
meta10.setContent(CString("http://www.nist.gov/vrml.html"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(CString("reference"));
meta11.setContent(CString("http://www.itl.nist.gov/div897/ctg/vrml/vrml.html"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(CString("creator"));
meta12.setContent(CString("http://www.itl.nist.gov/div897/ctg/vrml/members.html"));
head1.addMeta(&meta12);

meta& meta13 =  meta();
meta13.setName(CString("disclaimer"));
meta13.setContent(CString("This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified."));
head1.addMeta(&meta13);

meta& meta14 =  meta();
meta14.setName(CString("info"));
meta14.setContent(CString("Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d"));
head1.addMeta(&meta14);

meta& meta15 =  meta();
meta15.setName(CString("translator"));
meta15.setContent(CString("Michael Kass NIST, Don Brutzman NPS"));
head1.addMeta(&meta15);

meta& meta16 =  meta();
meta16.setName(CString("translated"));
meta16.setContent(CString("21 January 2001"));
head1.addMeta(&meta16);

meta& meta17 =  meta();
meta17.setName(CString("modified"));
meta17.setContent(CString("13 January 2014"));
head1.addMeta(&meta17);

meta& meta18 =  meta();
meta18.setName(CString("description"));
meta18.setContent(CString("Test of browser ability to map the entire portion of an PixelTexture onto an IndexedFaceSet geometry. Four equal sized red (bottom left), green (bottom right) yellow (top left) and white (top right) squares in the pixel texture map all the faces of the cube."));
head1.addMeta(&meta18);

meta& meta19 =  meta();
meta19.setName(CString("identifier"));
meta19.setContent(CString("https://www.web3d.org/x3d/content/examples/ConformanceNist/GeometricProperties/TextureCoordinate/indexedfaceset_pixeltexture_whole.x3d"));
head1.addMeta(&meta19);

meta& meta20 =  meta();
meta20.setName(CString("generator"));
meta20.setContent(CString("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"));
head1.addMeta(&meta20);

meta& meta21 =  meta();
meta21.setName(CString("generator"));
meta21.setContent(CString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"));
head1.addMeta(&meta21);

meta& meta22 =  meta();
meta22.setName(CString("license"));
meta22.setContent(CString("../../license.html"));
head1.addMeta(&meta22);

X3D0.setHead(&head1);

Scene& Scene23 =  Scene();
Viewpoint& Viewpoint24 =  Viewpoint();
Viewpoint24.setDescription(CString("Front View"));
Scene23.addChild(&Viewpoint24);

Viewpoint& Viewpoint25 =  Viewpoint();
Viewpoint25.setDescription(CString("Rear View"));
Viewpoint25.setOrientation(new float[]{0,1,0,3.14});
Viewpoint25.setPosition(new float[]{0,0,-10});
Scene23.addChild(&Viewpoint25);

Viewpoint& Viewpoint26 =  Viewpoint();
Viewpoint26.setDescription(CString("Top View"));
Viewpoint26.setOrientation(new float[]{1,0,0,-1.57});
Viewpoint26.setPosition(new float[]{0,10,0});
Scene23.addChild(&Viewpoint26);

Viewpoint& Viewpoint27 =  Viewpoint();
Viewpoint27.setDescription(CString("Bottom View"));
Viewpoint27.setOrientation(new float[]{1,0,0,1.57});
Viewpoint27.setPosition(new float[]{0,-10,0});
Scene23.addChild(&Viewpoint27);

Viewpoint& Viewpoint28 =  Viewpoint();
Viewpoint28.setDescription(CString("Right View"));
Viewpoint28.setOrientation(new float[]{0,1,0,1.57});
Viewpoint28.setPosition(new float[]{10,0,0});
Scene23.addChild(&Viewpoint28);

Viewpoint& Viewpoint29 =  Viewpoint();
Viewpoint29.setDescription(CString("Left View"));
Viewpoint29.setOrientation(new float[]{0,1,0,-1.57});
Viewpoint29.setPosition(new float[]{-10,0,0});
Scene23.addChild(&Viewpoint29);

NavigationInfo& NavigationInfo30 =  NavigationInfo();
NavigationInfo30.setType(new CString[]{CString("EXAMINE")}, 1);
Scene23.addChild(&NavigationInfo30);

Shape& Shape31 =  Shape();
Appearance& Appearance32 =  Appearance();
Material& Material33 =  Material();
Appearance32.addChild(&Material33);

PixelTexture& PixelTexture34 =  PixelTexture();
PixelTexture34.setImage(CString("2 2 4 4278190335 16711935 4294967295 4294902015"));
Appearance32.addChild(&PixelTexture34);

Shape31.addChild(&Appearance32);

IndexedFaceSet& IndexedFaceSet35 =  IndexedFaceSet();
IndexedFaceSet35.setColorPerVertex(False);
IndexedFaceSet35.setCoordIndex(new int32_t[]{0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1}, 30);
IndexedFaceSet35.setCreaseAngle(0.5);
IndexedFaceSet35.setTexCoordIndex(new int32_t[]{0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1}, 30);
CColor& Color36 =  CColor();
Color36.setColor(new float[]{0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0}, 18);
IndexedFaceSet35.setColor(&Color36);

Coordinate& Coordinate37 =  Coordinate();
Coordinate37.setPoint(new float[]{-2,1,1,-2,-1,1,2,1,1,2,-1,1,2,1,-1,2,-1,-1,-2,1,-1,-2,-1,-1}, 24);
IndexedFaceSet35.setCoord(&Coordinate37);

TextureCoordinate& TextureCoordinate38 =  TextureCoordinate();
TextureCoordinate38.setPoint(new float[]{0,1,0,0,1,1,1,0}, 8);
IndexedFaceSet35.setTexCoord(&TextureCoordinate38);

Shape31.setGeometry(&IndexedFaceSet35);

Scene23.addChild(&Shape31);

X3D0.setScene(&Scene23);

}
