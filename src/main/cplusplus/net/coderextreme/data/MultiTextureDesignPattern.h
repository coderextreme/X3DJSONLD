//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
//int main(int argc, char ** argv) 
//{
X3D& X3D0 =  X3D();
X3D0.setProfile(CString("Immersive"));
X3D0.setVersion(CString("3.3"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(CString("title"));
meta2.setContent(CString("MultiTextureDesignPattern.x3d"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(CString("description"));
meta3.setContent(CString("Design pattern for MultiTexture, MultiTextureCoordinate, MultiTextureTransform node correspondences"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("creator"));
meta4.setContent(CString("Don Brutzman"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("created"));
meta5.setContent(CString("5 March 2011"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("modified"));
meta6.setContent(CString("29 October 2023"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("TODO"));
meta7.setContent(CString("X3D schematron rules for quality assurance"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(CString("Image"));
meta8.setContent(CString("MultiTextureDesignPatternSceneGraph.png"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(CString("subject"));
meta9.setContent(CString("MultiTexture, MultiTextureCoordinate, MultiTextureTransform"));
head1.addMeta(&meta9);

meta& meta10 =  meta();
meta10.setName(CString("reference"));
meta10.setContent(CString("https://www.web3d.org/files/specifications/19775-1/V3.2/Part01/components/texturing.html#MultiTexture"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(CString("identifier"));
meta11.setContent(CString("https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/TextureMapping/MultiTextureDesignPattern.x3d"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(CString("reference"));
meta12.setContent(CString("https://www.web3d.org/x3d/content/examples/X3dResources.html"));
head1.addMeta(&meta12);

meta& meta13 =  meta();
meta13.setName(CString("generator"));
meta13.setContent(CString("X3D-Edit 3.3, https://www.web3d.org/x3d/tools/X3D-Edit"));
head1.addMeta(&meta13);

meta& meta14 =  meta();
meta14.setName(CString("license"));
meta14.setContent(CString("../license.html"));
head1.addMeta(&meta14);

X3D0.setHead(&head1);

Scene& Scene15 =  Scene();
//================================
WorldInfo& WorldInfo16 =  WorldInfo();
WorldInfo16.setTitle(CString("MultiTextureDesignPattern.x3d"));
Scene15.addChild(&WorldInfo16);

Background& Background17 =  Background();
Background17.setSkyColor(new float[]{0.72549,1.0,0.721569}, 3);
Scene15.addChild(&Background17);

Viewpoint& Viewpoint18 =  Viewpoint();
Viewpoint18.setDescription(CString("MultiTexture design pattern"));
Scene15.addChild(&Viewpoint18);

Shape& Shape19 =  Shape();
Text& Text20 =  Text();
Text20.setString(new CString[]{CString("Source shows design pattern for"), CString("MultiTexture, MultiTextureCoordinate,"), CString(" and MultiTextureTransform nodes")}, 3);
CFontStyle& FontStyle21 =  CFontStyle();
FontStyle21.setJustify(new CString[]{CString("MIDDLE"), CString("MIDDLE")}, 2);
FontStyle21.setSize(0.6);
Text20.setFontStyle(&FontStyle21);

Shape19.setGeometry(&Text20);

Appearance& Appearance22 =  Appearance();
Material& Material23 =  Material();
Material23.setDiffuseColor(new float[]{0.2,0.4,0.8});
Appearance22.addChild(&Material23);

Shape19.addChild(&Appearance22);

Scene15.addChild(&Shape19);

//================================
Shape& Shape24 =  Shape();
//add a single geometry node here
IndexedFaceSet& IndexedFaceSet25 =  IndexedFaceSet();
MultiTextureCoordinate& MultiTextureCoordinate26 =  MultiTextureCoordinate();
//add multiple TextureCoordinate nodes here, match corresponding MultiTexture child texture nodes
TextureCoordinate& TextureCoordinate27 =  TextureCoordinate();
TextureCoordinate27.setPoint(new float[]{0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0}, 8);
MultiTextureCoordinate26.addTexCoord(TextureCoordinate27);

TextureCoordinate& TextureCoordinate28 =  TextureCoordinate();
TextureCoordinate28.setPoint(new float[]{0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0}, 8);
MultiTextureCoordinate26.addTexCoord(TextureCoordinate28);

TextureCoordinate& TextureCoordinate29 =  TextureCoordinate();
TextureCoordinate29.setPoint(new float[]{0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0}, 8);
MultiTextureCoordinate26.addTexCoord(TextureCoordinate29);

IndexedFaceSet25.setTexCoord(MultiTextureCoordinate26);

Shape24.setGeometry(&IndexedFaceSet25);

Appearance& Appearance30 =  Appearance();
Material& Material31 =  Material();
Appearance30.addChild(&Material31);

MultiTexture& MultiTexture32 =  MultiTexture();
MultiTexture32.setAlpha(0.8);
MultiTexture32.setColor(new float[]{0.9,1.0,0.2});
MultiTexture32.setFunction(new CString[]{CString("COMPLEMENT"), CString("ALPHAREPLICATE")}, 2);
MultiTexture32.setMode(new CString[]{CString("MODULATE"), CString("REPLACE"), CString("BLENDDIFFUSEALPHA")}, 3);
MultiTexture32.setSource(new CString[]{CString("DIFFUSE"), CString("SPECULAR"), CString("FACTOR")}, 3);
//add multiple texture nodes here
ImageTexture& ImageTexture33 =  ImageTexture();
MultiTexture32.addTexture(ImageTexture33);

MovieTexture& MovieTexture34 =  MovieTexture();
MultiTexture32.addTexture(MovieTexture34);

PixelTexture& PixelTexture35 =  PixelTexture();
MultiTexture32.addTexture(PixelTexture35);

Appearance30.addChild(MultiTexture32);

MultiTextureTransform& MultiTextureTransform36 =  MultiTextureTransform();
//add multiple TextureTransform nodes here, match corresponding MultiTexture child texture nodes
TextureTransform& TextureTransform37 =  TextureTransform();
MultiTextureTransform36.addTextureTransform(TextureTransform37);

TextureTransform& TextureTransform38 =  TextureTransform();
MultiTextureTransform36.addTextureTransform(TextureTransform38);

TextureTransform& TextureTransform39 =  TextureTransform();
MultiTextureTransform36.addTextureTransform(TextureTransform39);

Appearance30.setTextureTransform(MultiTextureTransform36);

Shape24.addChild(&Appearance30);

Scene15.addChild(&Shape24);

X3D0.setScene(&Scene15);

//}
