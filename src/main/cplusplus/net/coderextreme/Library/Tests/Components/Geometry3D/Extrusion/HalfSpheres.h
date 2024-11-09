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
meta3.setContent(CString("Sat, 06 Aug 2016 21:20:09 GMT"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("creator"));
meta4.setContent(CString("holger"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("generator"));
meta5.setContent(CString("Titania V1.4.8, http://titania.create3000.de"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("identifier"));
meta6.setContent(CString("file:///home/holger/.config/Titania/Materials/Test/Test9.x3dv"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("modified"));
meta7.setContent(CString("Sat, 06 Aug 2016 21:22:47 GMT"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(CString("titania magic"));
meta8.setContent(CString("Material"));
head1.addMeta(&meta8);

X3D0.setHead(&head1);

Scene& Scene9 =  Scene();
WorldInfo& WorldInfo10 =  WorldInfo();
WorldInfo10.setTitle(CString("Test9"));
MetadataSet& MetadataSet11 =  MetadataSet();
MetadataSet11.X3DNode::setName(CString("Titania"));
MetadataSet11.setDEF(CString("Titania"));
MetadataSet11.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataSet& MetadataSet12 =  MetadataSet();
MetadataSet12.X3DNode::setName(CString("NavigationInfo"));
MetadataSet12.setDEF(CString("NavigationInfo"));
MetadataSet12.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataString& MetadataString13 =  MetadataString();
MetadataString13.X3DNode::setName(CString("type"));
MetadataString13.setDEF(CString("type"));
MetadataString13.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataString13.setValue(new CString[]{CString("EXAMINE")}, 1);
MetadataSet12.setValue((X3DNode *)&MetadataString13);

MetadataSet11.setValue((X3DNode *)&MetadataSet12);

MetadataSet& MetadataSet14 =  MetadataSet();
MetadataSet14.X3DNode::setName(CString("Viewpoint"));
MetadataSet14.setDEF(CString("Viewpoint"));
MetadataSet14.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble& MetadataDouble15 =  MetadataDouble();
MetadataDouble15.X3DNode::setName(CString("position"));
MetadataDouble15.setDEF(CString("position"));
MetadataDouble15.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble15.setValue(new double[]{0.500247853117111,0.462496657119401,2.77530185804378}, 3);
MetadataSet14.setValue((X3DNode *)&MetadataDouble15);

MetadataDouble& MetadataDouble16 =  MetadataDouble();
MetadataDouble16.X3DNode::setName(CString("orientation"));
MetadataDouble16.setDEF(CString("orientation"));
MetadataDouble16.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble16.setValue(new double[]{-0.630731817514386,0.72940230697818,0.264857790049507,0.249682745994581}, 4);
MetadataSet14.setValue((X3DNode *)&MetadataDouble16);

MetadataDouble& MetadataDouble17 =  MetadataDouble();
MetadataDouble17.X3DNode::setName(CString("centerOfRotation"));
MetadataDouble17.setDEF(CString("centerOfRotation"));
MetadataDouble17.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble17.setValue(new double[]{0.0,0.0,0.0}, 3);
MetadataSet14.setValue((X3DNode *)&MetadataDouble17);

MetadataSet11.setValue((X3DNode *)&MetadataSet14);

MetadataSet& MetadataSet18 =  MetadataSet();
MetadataSet18.X3DNode::setName(CString("Selection"));
MetadataSet18.setDEF(CString("Selection"));
MetadataSet18.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataSet& MetadataSet19 =  MetadataSet();
MetadataSet19.X3DNode::setName(CString("children"));
MetadataSet19.setDEF(CString("children"));
MetadataSet19.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataSet18.setValue((X3DNode *)&MetadataSet19);

MetadataSet& MetadataSet20 =  MetadataSet();
MetadataSet20.X3DNode::setName(CString("previous"));
MetadataSet20.setDEF(CString("previous"));
MetadataSet20.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataSet18.setValue((X3DNode *)&MetadataSet20);

MetadataSet11.setValue((X3DNode *)&MetadataSet18);

WorldInfo10.setMetadata(&MetadataSet11);

Scene9.addChild(&WorldInfo10);

Transform& Transform21 =  Transform();
Transform21.setRotation(new float[]{0.577350269189626,-0.577350269189626,0.577350269189626,2.0943951023932});
Shape& Shape22 =  Shape();
Appearance& Appearance23 =  Appearance();
TwoSidedMaterial& TwoSidedMaterial24 =  TwoSidedMaterial();
TwoSidedMaterial24.setSeparateBackColor(true);
TwoSidedMaterial24.setAmbientIntensity(0.253968);
TwoSidedMaterial24.setDiffuseColor(new float[]{0.279399,0.589,0.394407});
TwoSidedMaterial24.setSpecularColor(new float[]{0.39624,0.427003,0.00760637});
TwoSidedMaterial24.setShininess(0.0378378);
TwoSidedMaterial24.setBackAmbientIntensity(0.253968);
TwoSidedMaterial24.setBackDiffuseColor(new float[]{0.117647,0.564706,1.0});
TwoSidedMaterial24.setBackSpecularColor(new float[]{0.39624,0.427003,0.00760637});
TwoSidedMaterial24.setBackShininess(0.0378378);
Appearance23.addChild(&TwoSidedMaterial24);

Shape22.addChild(&Appearance23);

Extrusion& Extrusion25 =  Extrusion();
Extrusion25.setBeginCap(false);
Extrusion25.setEndCap(false);
Extrusion25.setCreaseAngle(3.14159);
Extrusion25.setCrossSection(new float[]{0.0,1.0,0.0980171,0.995185,0.19509,0.980785,0.290285,0.95694,0.382683,0.92388,0.471397,0.881921,0.55557,0.83147,0.634393,0.77301,0.707107,0.707107,0.77301,0.634393,0.83147,0.55557,0.881921,0.471397,0.92388,0.382683,0.95694,0.290285,0.980785,0.19509,0.995185,0.0980171,1.0,6.12323e-17,0.995185,-0.0980171,0.980785,-0.19509,0.95694,-0.290285,0.92388,-0.382683,0.881921,-0.471397,0.83147,-0.55557,0.77301,-0.634393,0.707107,-0.707107,0.634393,-0.77301,0.55557,-0.83147,0.471397,-0.881921,0.382683,-0.92388,0.290285,-0.95694,0.19509,-0.980785,0.0980171,-0.995185,0.0,-1.0}, 66);
Extrusion25.setOrientation(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0981747704246805,0.0,0.0,1.0,0.196349540849361,0.0,0.0,1.0,0.294524311274043,0.0,0.0,1.0,0.392699081698724,0.0,0.0,1.0,0.490873852123405,0.0,0.0,1.0,0.589048622548087,0.0,0.0,1.0,0.687223392972767,0.0,0.0,1.0,0.785398163397448,0.0,0.0,1.0,0.883572933822129,0.0,0.0,1.0,0.98174770424681,0.0,0.0,1.0,1.07992247467149,0.0,0.0,1.0,1.17809724509617,0.0,0.0,1.0,1.27627201552085,0.0,0.0,1.0,1.37444678594553,0.0,0.0,1.0,1.47262155637022,0.0,0.0,1.0,1.5707963267949,0.0,0.0,1.0,1.66897109721958,0.0,0.0,1.0,1.76714586764426,0.0,0.0,1.0,1.86532063806894,0.0,0.0,1.0,1.96349540849362,0.0,0.0,1.0,2.0616701789183,0.0,0.0,1.0,2.15984494934298,0.0,0.0,1.0,2.25801971976766,0.0,0.0,1.0,2.35619449019234,0.0,0.0,1.0,2.45436926061703,0.0,0.0,1.0,2.55254403104171,0.0,0.0,1.0,2.65071880146639,0.0,0.0,1.0,2.74889357189107,0.0,0.0,1.0,2.84706834231575,0.0,0.0,1.0,2.94524311274043,0.0,0.0,1.0,3.04341788316511,0.0,0.0,1.0,3.14159265358979}, 132);
Extrusion25.setSpine(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 99);
Shape22.setGeometry(&Extrusion25);

Transform21.addChild(&Shape22);

Scene9.addChild(&Transform21);

Transform& Transform26 =  Transform();
Transform26.setRotation(new float[]{0.577350269189626,0.577350269189626,-0.577350269189626,2.0943951023932});
Shape& Shape27 =  Shape();
Appearance& Appearance28 =  Appearance();
TwoSidedMaterial& TwoSidedMaterial29 =  TwoSidedMaterial();
TwoSidedMaterial29.setSeparateBackColor(true);
TwoSidedMaterial29.setAmbientIntensity(0.253968);
TwoSidedMaterial29.setDiffuseColor(new float[]{0.279399,0.589,0.394407});
TwoSidedMaterial29.setSpecularColor(new float[]{0.39624,0.427003,0.00760637});
TwoSidedMaterial29.setShininess(0.0378378);
TwoSidedMaterial29.setTransparency(1);
TwoSidedMaterial29.setBackAmbientIntensity(0.253968);
TwoSidedMaterial29.setBackDiffuseColor(new float[]{0.117647,0.564706,1.0});
TwoSidedMaterial29.setBackSpecularColor(new float[]{0.39624,0.427003,0.00760637});
TwoSidedMaterial29.setBackShininess(0.0378378);
Appearance28.addChild(&TwoSidedMaterial29);

Shape27.addChild(&Appearance28);

Extrusion& Extrusion30 =  Extrusion();
Extrusion30.setBeginCap(false);
Extrusion30.setEndCap(false);
Extrusion30.setSolid(false);
Extrusion30.setCcw(false);
Extrusion30.setCreaseAngle(3.14159);
Extrusion30.setCrossSection(new float[]{0.0,1.0,0.0980171,0.995185,0.19509,0.980785,0.290285,0.95694,0.382683,0.92388,0.471397,0.881921,0.55557,0.83147,0.634393,0.77301,0.707107,0.707107,0.77301,0.634393,0.83147,0.55557,0.881921,0.471397,0.92388,0.382683,0.95694,0.290285,0.980785,0.19509,0.995185,0.0980171,1.0,6.12323e-17,0.995185,-0.0980171,0.980785,-0.19509,0.95694,-0.290285,0.92388,-0.382683,0.881921,-0.471397,0.83147,-0.55557,0.77301,-0.634393,0.707107,-0.707107,0.634393,-0.77301,0.55557,-0.83147,0.471397,-0.881921,0.382683,-0.92388,0.290285,-0.95694,0.19509,-0.980785,0.0980171,-0.995185,0.0,-1.0}, 66);
Extrusion30.setOrientation(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0981747704246805,0.0,0.0,1.0,0.196349540849361,0.0,0.0,1.0,0.294524311274043,0.0,0.0,1.0,0.392699081698724,0.0,0.0,1.0,0.490873852123405,0.0,0.0,1.0,0.589048622548087,0.0,0.0,1.0,0.687223392972767,0.0,0.0,1.0,0.785398163397448,0.0,0.0,1.0,0.883572933822129,0.0,0.0,1.0,0.98174770424681,0.0,0.0,1.0,1.07992247467149,0.0,0.0,1.0,1.17809724509617,0.0,0.0,1.0,1.27627201552085,0.0,0.0,1.0,1.37444678594553,0.0,0.0,1.0,1.47262155637022,0.0,0.0,1.0,1.5707963267949,0.0,0.0,1.0,1.66897109721958,0.0,0.0,1.0,1.76714586764426,0.0,0.0,1.0,1.86532063806894,0.0,0.0,1.0,1.96349540849362,0.0,0.0,1.0,2.0616701789183,0.0,0.0,1.0,2.15984494934298,0.0,0.0,1.0,2.25801971976766,0.0,0.0,1.0,2.35619449019234,0.0,0.0,1.0,2.45436926061703,0.0,0.0,1.0,2.55254403104171,0.0,0.0,1.0,2.65071880146639,0.0,0.0,1.0,2.74889357189107,0.0,0.0,1.0,2.84706834231575,0.0,0.0,1.0,2.94524311274043,0.0,0.0,1.0,3.04341788316511,0.0,0.0,1.0,3.14159265358979}, 132);
Extrusion30.setSpine(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 99);
Shape27.setGeometry(&Extrusion30);

Transform26.addChild(&Shape27);

Scene9.addChild(&Transform26);

X3D0.setScene(&Scene9);

//}
