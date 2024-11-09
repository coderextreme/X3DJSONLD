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
meta3.setContent(CString("Wed, 06 Jan 2016 14:05:33 GMT"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("creator"));
meta4.setContent(CString("Holger Seelig"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("generator"));
meta5.setContent(CString("Titania V1.2.2, http://titania.create3000.de"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("modified"));
meta6.setContent(CString("Wed, 06 Jan 2016 14:07:34 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
WorldInfo& WorldInfo8 =  WorldInfo();
MetadataSet& MetadataSet9 =  MetadataSet();
MetadataSet9.X3DNode::setName(CString("Titania"));
MetadataSet9.setDEF(CString("Titania"));
MetadataSet9.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataSet& MetadataSet10 =  MetadataSet();
MetadataSet10.X3DNode::setName(CString("NavigationInfo"));
MetadataSet10.setDEF(CString("NavigationInfo"));
MetadataSet10.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataString& MetadataString11 =  MetadataString();
MetadataString11.X3DNode::setName(CString("type"));
MetadataString11.setDEF(CString("type"));
MetadataString11.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataString11.setValue(new CString[]{CString("EXAMINE")}, 1);
MetadataSet10.setValue((X3DNode *)&MetadataString11);

MetadataSet9.setValue((X3DNode *)&MetadataSet10);

MetadataSet& MetadataSet12 =  MetadataSet();
MetadataSet12.X3DNode::setName(CString("Viewpoint"));
MetadataSet12.setDEF(CString("Viewpoint"));
MetadataSet12.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble& MetadataDouble13 =  MetadataDouble();
MetadataDouble13.X3DNode::setName(CString("position"));
MetadataDouble13.setDEF(CString("position"));
MetadataDouble13.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble13.setValue(new double[]{0.0,0.0,10.0}, 3);
MetadataSet12.setValue((X3DNode *)&MetadataDouble13);

MetadataDouble& MetadataDouble14 =  MetadataDouble();
MetadataDouble14.X3DNode::setName(CString("orientation"));
MetadataDouble14.setDEF(CString("orientation"));
MetadataDouble14.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble14.setValue(new double[]{0.0,0.0,1.0,0.0}, 4);
MetadataSet12.setValue((X3DNode *)&MetadataDouble14);

MetadataDouble& MetadataDouble15 =  MetadataDouble();
MetadataDouble15.X3DNode::setName(CString("centerOfRotation"));
MetadataDouble15.setDEF(CString("centerOfRotation"));
MetadataDouble15.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble15.setValue(new double[]{0.0,0.0,0.0}, 3);
MetadataSet12.setValue((X3DNode *)&MetadataDouble15);

MetadataSet9.setValue((X3DNode *)&MetadataSet12);

WorldInfo8.setMetadata(&MetadataSet9);

Scene7.addChild(&WorldInfo8);

Anchor& Anchor16 =  Anchor();
Anchor16.setUrl(new CString[]{CString("#VP2")}, 1);
Transform& Transform17 =  Transform();
Transform17.setDEF(CString("Box"));
Transform17.setTranslation(new float[]{-3.6511,0.0,0.0});
Shape& Shape18 =  Shape();
Appearance& Appearance19 =  Appearance();
Material& Material20 =  Material();
Material20.setDEF(CString("Rococo8"));
Material20.setAmbientIntensity(0.226102);
Material20.setDiffuseColor(new float[]{0.904409,0.457768,0.341109});
Material20.setSpecularColor(new float[]{0.0955906,0.0955906,0.0955906});
Material20.setShininess(0.078125);
Appearance19.addChild(&Material20);

Shape18.addChild(&Appearance19);

Box& Box21 =  Box();
Shape18.setGeometry(&Box21);

Transform17.addChild(&Shape18);

Anchor16.addChild(&Transform17);

Scene7.addChild(&Anchor16);

Anchor& Anchor22 =  Anchor();
Anchor22.setUrl(new CString[]{CString("http://web3d.org")}, 1);
Transform& Transform23 =  Transform();
Transform23.setDEF(CString("Cone"));
Shape& Shape24 =  Shape();
Appearance& Appearance25 =  Appearance();
Material& Material26 =  Material();
Material26.setDEF(CString("Rococo14"));
Material26.setAmbientIntensity(0.226102);
Material26.setDiffuseColor(new float[]{0.904409,0.315531,0.544386});
Material26.setSpecularColor(new float[]{0.0955906,0.0955906,0.0955906});
Material26.setShininess(0.078125);
Appearance25.addChild(&Material26);

Shape24.addChild(&Appearance25);

Cone& Cone27 =  Cone();
Shape24.setGeometry(&Cone27);

Transform23.addChild(&Shape24);

Anchor22.addChild(&Transform23);

Scene7.addChild(&Anchor22);

Anchor& Anchor28 =  Anchor();
Anchor28.setUrl(new CString[]{CString("http://web3d.org")}, 1);
Anchor28.setParameter(new CString[]{CString("target=_blank")}, 1);
Transform& Transform29 =  Transform();
Transform29.setDEF(CString("Cylinder"));
Transform29.setTranslation(new float[]{3.65254,0.0,0.0});
Shape& Shape30 =  Shape();
Appearance& Appearance31 =  Appearance();
Material& Material32 =  Material();
Material32.setDEF(CString("Rococo20"));
Material32.setAmbientIntensity(0.226102);
Material32.setDiffuseColor(new float[]{0.52545,0.455896,0.904409});
Material32.setSpecularColor(new float[]{0.0955906,0.0955906,0.0955906});
Material32.setShininess(0.078125);
Appearance31.addChild(&Material32);

Shape30.addChild(&Appearance31);

Cylinder& Cylinder33 =  Cylinder();
Shape30.setGeometry(&Cylinder33);

Transform29.addChild(&Shape30);

Anchor28.addChild(&Transform29);

Scene7.addChild(&Anchor28);

Viewpoint& Viewpoint34 =  Viewpoint();
Viewpoint34.setDEF(CString("VP1"));
Viewpoint34.setDescription(CString("Viewpoint1"));
Scene7.addChild(&Viewpoint34);

Viewpoint& Viewpoint35 =  Viewpoint();
Viewpoint35.setDEF(CString("VP2"));
Viewpoint35.setDescription(CString("Viewpoint2"));
Viewpoint35.setPosition(new float[]{0.0,0.0,15.4598});
Scene7.addChild(&Viewpoint35);

X3D0.setScene(&Scene7);

//}
