//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
//int main(int argc, char ** argv) 
//{
X3D& X3D0 =  X3D();
X3D0.setProfile(CString("Immersive"));
X3D0.setVersion(CString("4.0"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(CString("title"));
meta2.setContent(CString("ExtrusionHeart.x3d"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(CString("description"));
meta3.setContent(CString("Simple extrusion of a Valentine heart."));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("creator"));
meta4.setContent(CString("Class participants in course Introduction to VRML/X3D."));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("created"));
meta5.setContent(CString("14 February 2001"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("modified"));
meta6.setContent(CString("27 November 2015"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("identifier"));
meta7.setContent(CString("https://www.web3d.org/x3d/content/examples/Basic/course/ExtrusionHeart.x3d"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(CString("generator"));
meta8.setContent(CString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(CString("license"));
meta9.setContent(CString("../license.html"));
head1.addMeta(&meta9);

X3D0.setHead(&head1);

Scene& Scene10 =  Scene();
Viewpoint& Viewpoint11 =  Viewpoint();
Viewpoint11.setDescription(CString("Extrusion Heart"));
Viewpoint11.setOrientation(new float[]{1.0,0.0,0.0,1.57});
Viewpoint11.setPosition(new float[]{0.0,-4.0,0.0});
Scene10.addChild(&Viewpoint11);

Transform& Transform12 =  Transform();
Transform12.setTranslation(new float[]{0.0,-0.5,0.0});
Shape& Shape13 =  Shape();
Extrusion& Extrusion14 =  Extrusion();
Extrusion14.setCreaseAngle(3.14159);
Extrusion14.setCrossSection(new float[]{0.0,0.8,0.2,1.0,0.7,0.95,1.0,0.5,0.8,0.0,0.5,-0.3,0.0,-0.7,-0.5,-0.3,-0.8,0.0,-1.0,0.5,-0.7,0.95,-0.2,1.0,0.0,0.8}, 26);
Extrusion14.setScale(new float[]{0.01,0.01,0.8,0.8,1.0,1.0,0.8,0.8,0.01,0.01}, 10);
Extrusion14.setSolid(false);
Extrusion14.setSpine(new float[]{0.0,0.0,0.0,0.0,0.1,0.0,0.0,0.5,0.0,0.0,0.9,0.0,0.0,1.0,0.0}, 15);
Shape13.setGeometry(&Extrusion14);

Appearance& Appearance15 =  Appearance();
Material& Material16 =  Material();
Material16.setDiffuseColor(new float[]{0.8,0.3,0.3});
Appearance15.addChild(&Material16);

Shape13.addChild(&Appearance15);

Transform12.addChild(&Shape13);

Scene10.addChild(&Transform12);

X3D0.setScene(&Scene10);

//}
