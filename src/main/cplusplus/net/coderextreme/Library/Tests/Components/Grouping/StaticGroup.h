//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
//int main(int argc, char ** argv) 
//{
MFInt32 MFInt320 =  MFInt32();
MFInt320.setValue(3, new int32_t[]{34, 10, 20});
X3D& X3D0 =  X3D();
X3D0.setProfile(CString("Interchange"));
X3D0.setVersion(CString("4.0"));
head& head1 =  head();
component& component2 =  component();
component2.setName(CString("CubeMapTexturing"));
component2.setLevel(3);
head1.addChild(&component2);

component& component3 =  component();
component3.setName(CString("Geometry2D"));
component3.setLevel(2);
head1.addChild(&component3);

component& component4 =  component();
component4.setName(CString("NURBS"));
component4.setLevel(4);
head1.addChild(&component4);

component& component5 =  component();
component5.setName(CString("ParticleSystems"));
component5.setLevel(3);
head1.addChild(&component5);

component& component6 =  component();
component6.setName(CString("Text"));
component6.setLevel(1);
head1.addChild(&component6);

component& component7 =  component();
component7.setName(CString("X_ITE"));
component7.setLevel(1);
head1.addChild(&component7);

unit& unit8 =  unit();
unit8.setName(CString("degree"));
unit8.setCategory(CString("angle"));
unit8.setConversionFactor(0.017453292519943295);
head1.addUnit(unit8);

meta& meta9 =  meta();
meta9.setName(CString("created"));
meta9.setContent(CString("Mon, 19 Aug 2024 08:19:30 GMT"));
head1.addMeta(&meta9);

meta& meta10 =  meta();
meta10.setName(CString("creator"));
meta10.setContent(CString("Holger Seelig"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(CString("generator"));
meta11.setContent(CString("Sunrize X3D Editor V1.7.12, https://create3000.github.io/sunrize/"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(CString("modified"));
meta12.setContent(CString("Sat, 24 Aug 2024 08:38:32 GMT"));
head1.addMeta(&meta12);

X3D0.setHead(&head1);

Scene& Scene13 =  Scene();
WorldInfo& WorldInfo14 =  WorldInfo();
WorldInfo14.setTitle(CString("StaticGroup Test Cases"));
MetadataSet& MetadataSet15 =  MetadataSet();
MetadataSet15.X3DNode::setName(CString("Sunrize"));
MetadataSet15.X3DNode::setReference(CString("https://create3000.github.io/sunrize/"));
MetadataSet& MetadataSet16 =  MetadataSet();
MetadataSet16.X3DNode::setName(CString("GridTool"));
MetadataDouble& MetadataDouble17 =  MetadataDouble();
MetadataDouble17.X3DNode::setName(CString("rotation"));
MetadataDouble17.setValue(new double[]{1.0,0.0,0.0,1.5707963267949}, 4);
MetadataSet16.setValue((X3DNode *)&MetadataDouble17);

MetadataInteger& MetadataInteger18 =  MetadataInteger();
MetadataInteger18.X3DNode::setName(CString("dimension"));
MetadataInteger18.setValue(MFInt320);
MetadataSet16.setValue((X3DNode *)&MetadataInteger18);

MetadataBoolean& MetadataBoolean19 =  MetadataBoolean();
MetadataBoolean19.X3DNode::setName(CString("visible"));
MetadataBoolean19.setValue(new boolean[]{true});
MetadataSet16.setValue((X3DNode *)&MetadataBoolean19);

MetadataFloat& MetadataFloat20 =  MetadataFloat();
MetadataFloat20.X3DNode::setName(CString("translation"));
MetadataFloat20.setValue(new float[]{4.0,0.0,-2.0}, 3);
MetadataSet16.setValue((X3DNode *)&MetadataFloat20);

MetadataSet15.setValue((X3DNode *)&MetadataSet16);

WorldInfo14.setMetadata(&MetadataSet15);

Scene13.addChild(&WorldInfo14);

Background& Background21 =  Background();
Background21.setDEF(CString("Gray"));
Background21.setSkyColor(new float[]{0.2,0.2,0.2}, 3);
Scene13.addChild(&Background21);

Viewpoint& Viewpoint22 =  Viewpoint();
Viewpoint22.setDescription(CString("Initial View"));
Viewpoint22.setPosition(new float[]{4.5,1.379883,22.515});
Viewpoint22.setCenterOfRotation(new float[]{4.5,1.379883,0.0});
Scene13.addChild(&Viewpoint22);

Group& Group23 =  Group();
Group23.setDEF(CString("Groups"));
StaticGroup& StaticGroup24 =  StaticGroup();
StaticGroup24.setDEF(CString("Geometries"));
Transform& Transform25 =  Transform();
Transform25.setDEF(CString("Points"));
Transform25.setTranslation(new float[]{0.0,6.0,0.0});
Transform& Transform26 =  Transform();
Transform26.setDEF(CString("Polypoint2D"));
Transform26.setTranslation(new float[]{-3.0,0.0,0.0});
Shape& Shape27 =  Shape();
Appearance& Appearance28 =  Appearance();
Appearance28.setDEF(CString("_10"));
PointProperties& PointProperties29 =  PointProperties();
PointProperties29.setPointSizeScaleFactor(10);
PointProperties29.setPointSizeMinValue(10);
PointProperties29.setPointSizeMaxValue(10);
Appearance28.setPointProperties(PointProperties29);

UnlitMaterial& UnlitMaterial30 =  UnlitMaterial();
UnlitMaterial30.setEmissiveColor(new float[]{1.0,1.0,1.0});
UnlitMaterial30.setNormalScale(0);
Appearance28.addChild(&UnlitMaterial30);

Shape27.addChild(&Appearance28);

Polypoint2D& Polypoint2D31 =  Polypoint2D();
Polypoint2D31.setPoint(new float[]{0.0,0.0,0.0,0.5,0.0,-0.5,-0.5,0.0,0.5,0.0}, 10);
Shape27.setGeometry(Polypoint2D31);

Transform26.addChild(&Shape27);

Transform25.addChild(&Transform26);

Transform& Transform32 =  Transform();
Transform32.setDEF(CString("PointSet_1"));
Transform32.setTranslation(new float[]{-1.0,0.0,0.0});
Shape& Shape33 =  Shape();
Appearance& Appearance34 =  Appearance();
Appearance34.setUSE(CString("_10"));
Shape33.addChild(&Appearance34);

PointSet& PointSet35 =  PointSet();
FogCoordinate& FogCoordinate36 =  FogCoordinate();
FogCoordinate36.setDepth(new float[]{1.0,1.0,1.0,1.0}, 4);
PointSet35.setFogCoord(FogCoordinate36);

CColor& Color37 =  CColor();
Color37.setDEF(CString("_15"));
Color37.setColor(new float[]{1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,1.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0}, 24);
PointSet35.setColor(&Color37);

Coordinate& Coordinate38 =  Coordinate();
Coordinate38.setPoint(new float[]{0.5,0.5,0.0,-0.5,0.5,0.0,-0.5,-0.5,0.0,0.5,-0.5,0.0}, 12);
PointSet35.setCoord(&Coordinate38);

Shape33.setGeometry(PointSet35);

Transform32.addChild(&Shape33);

Transform25.addChild(&Transform32);

StaticGroup24.addChildren(&Transform25);

Transform& Transform39 =  Transform();
Transform39.setDEF(CString("Lines"));
Transform39.setTranslation(new float[]{0.0,4.0,0.0});
Transform& Transform40 =  Transform();
Transform40.setDEF(CString("Disk2D_2"));
Transform40.setTranslation(new float[]{-3.0,0.0,0.0});
Shape& Shape41 =  Shape();
Appearance& Appearance42 =  Appearance();
Appearance42.setDEF(CString("_3"));
LineProperties& LineProperties43 =  LineProperties();
LineProperties43.setLinewidthScaleFactor(2);
Appearance42.setLineProperties(LineProperties43);

UnlitMaterial& UnlitMaterial44 =  UnlitMaterial();
UnlitMaterial44.setEmissiveColor(new float[]{1.0,1.0,1.0});
UnlitMaterial44.setNormalScale(0);
Appearance42.addChild(&UnlitMaterial44);

Shape41.addChild(&Appearance42);

Disk2D& Disk2D45 =  Disk2D();
Disk2D45.setInnerRadius(0.5);
Disk2D45.setOuterRadius(0.5);
Shape41.setGeometry(Disk2D45);

Transform40.addChild(&Shape41);

Transform39.addChild(&Transform40);

Transform& Transform46 =  Transform();
Transform46.setDEF(CString("Circle2D"));
Transform46.setTranslation(new float[]{-1.0,0.0,0.0});
Shape& Shape47 =  Shape();
Appearance& Appearance48 =  Appearance();
Appearance48.setUSE(CString("_3"));
Shape47.addChild(&Appearance48);

Circle2D& Circle2D49 =  Circle2D();
Shape47.setGeometry(Circle2D49);

Transform46.addChild(&Shape47);

Transform39.addChild(&Transform46);

Transform& Transform50 =  Transform();
Transform50.setDEF(CString("Polyline2D"));
Transform50.setTranslation(new float[]{1.0,0.0,0.0});
Shape& Shape51 =  Shape();
Appearance& Appearance52 =  Appearance();
Appearance52.setUSE(CString("_3"));
Shape51.addChild(&Appearance52);

Polyline2D& Polyline2D53 =  Polyline2D();
Polyline2D53.setLineSegments(new float[]{-1.0,-1.0,-0.5,0.0,0.0,-1.0,0.5,1.0,1.0,-1.0}, 10);
Shape51.setGeometry(Polyline2D53);

Transform50.addChild(&Shape51);

Transform39.addChild(&Transform50);

Transform& Transform54 =  Transform();
Transform54.setDEF(CString("IndexedLineSet"));
Transform54.setTranslation(new float[]{3.0,0.0,0.0});
Shape& Shape55 =  Shape();
Appearance& Appearance56 =  Appearance();
Appearance56.setUSE(CString("_3"));
Shape55.addChild(&Appearance56);

IndexedLineSet& IndexedLineSet57 =  IndexedLineSet();
IndexedLineSet57.setColorPerVertex(false);
IndexedLineSet57.setCoordIndex(new int32_t[]{0,1,2,3,0,-1,4,5,6,7,4,-1,0,4,-1,1,5,-1,2,6,-1,3,7,-1}, 24);
CColor& Color58 =  CColor();
Color58.setUSE(CString("_15"));
IndexedLineSet57.setColor(&Color58);

Coordinate& Coordinate59 =  Coordinate();
Coordinate59.setPoint(new float[]{1.0,1.0,1.0,-1.0,1.0,1.0,-1.0,-1.0,1.0,1.0,-1.0,1.0,1.0,1.0,-1.0,-1.0,1.0,-1.0,-1.0,-1.0,-1.0,1.0,-1.0,-1.0}, 24);
IndexedLineSet57.setCoord(&Coordinate59);

Shape55.setGeometry(&IndexedLineSet57);

Transform54.addChild(&Shape55);

Transform39.addChild(&Transform54);

StaticGroup24.addChildren(&Transform39);

Transform& Transform60 =  Transform();
Transform60.setDEF(CString("Geometry2D"));
Transform60.setTranslation(new float[]{0.0,2.0,0.0});
Transform& Transform61 =  Transform();
Transform61.setDEF(CString("ArcClose2D"));
Transform61.setTranslation(new float[]{-3.0,0.0,0.0});
Shape& Shape62 =  Shape();
Appearance& Appearance63 =  Appearance();
Appearance63.setDEF(CString("_4"));
Material& Material64 =  Material();
Appearance63.addChild(&Material64);

PixelTexture& PixelTexture65 =  PixelTexture();
PixelTexture65.setDEF(CString("_12"));
PixelTexture65.setImage(CString("2 2 3 16711680 65280 255 16777215"));
Appearance63.addChild(&PixelTexture65);

Shape62.addChild(&Appearance63);

ArcClose2D& ArcClose2D66 =  ArcClose2D();
ArcClose2D66.setStartAngle(45);
ArcClose2D66.setEndAngle(315);
Shape62.setGeometry(ArcClose2D66);

Transform61.addChild(&Shape62);

Transform60.addChild(&Transform61);

Transform& Transform67 =  Transform();
Transform67.setDEF(CString("Disk2D_1"));
Transform67.setTranslation(new float[]{-1.0,0.0,0.0});
Shape& Shape68 =  Shape();
Appearance& Appearance69 =  Appearance();
Appearance69.setUSE(CString("_4"));
Shape68.addChild(&Appearance69);

Disk2D& Disk2D70 =  Disk2D();
Disk2D70.setInnerRadius(0.25);
Shape68.setGeometry(Disk2D70);

Transform67.addChild(&Shape68);

Transform60.addChild(&Transform67);

Transform& Transform71 =  Transform();
Transform71.setDEF(CString("Rectangle2D_1"));
Transform71.setTranslation(new float[]{1.0,0.0,0.0});
Shape& Shape72 =  Shape();
Appearance& Appearance73 =  Appearance();
Appearance73.setUSE(CString("_4"));
Shape72.addChild(&Appearance73);

Rectangle2D& Rectangle2D74 =  Rectangle2D();
Shape72.setGeometry(Rectangle2D74);

Transform71.addChild(&Shape72);

Transform60.addChild(&Transform71);

Transform& Transform75 =  Transform();
Transform75.setDEF(CString("TriangleSet2D"));
Transform75.setTranslation(new float[]{3.0,0.0,0.0});
Shape& Shape76 =  Shape();
Appearance& Appearance77 =  Appearance();
Appearance77.setUSE(CString("_4"));
Shape76.addChild(&Appearance77);

TriangleSet2D& TriangleSet2D78 =  TriangleSet2D();
TriangleSet2D78.setVertices(new float[]{-1.0,-1.0,1.0,-1.0,0.0,0.0,-1.0,1.0,0.0,0.0,1.0,1.0}, 12);
Shape76.setGeometry(TriangleSet2D78);

Transform75.addChild(&Shape76);

Transform60.addChild(&Transform75);

StaticGroup24.addChildren(&Transform60);

Transform& Transform79 =  Transform();
Transform79.setDEF(CString("Geometry3D"));
Transform& Transform80 =  Transform();
Transform80.setDEF(CString("Box_1"));
Transform80.setTranslation(new float[]{-3.0,0.0,0.0});
Shape& Shape81 =  Shape();
Appearance& Appearance82 =  Appearance();
Appearance82.setDEF(CString("_11"));
Material& Material83 =  Material();
Appearance82.addChild(&Material83);

PixelTexture& PixelTexture84 =  PixelTexture();
PixelTexture84.setUSE(CString("_12"));
Appearance82.addChild(&PixelTexture84);

Shape81.addChild(&Appearance82);

Box& Box85 =  Box();
Box85.setDEF(CString("_7"));
Shape81.setGeometry(&Box85);

Transform80.addChild(&Shape81);

Transform79.addChild(&Transform80);

Transform& Transform86 =  Transform();
Transform86.setDEF(CString("Cone_1"));
Transform86.setTranslation(new float[]{-1.0,0.0,0.0});
Shape& Shape87 =  Shape();
Appearance& Appearance88 =  Appearance();
Appearance88.setUSE(CString("_11"));
Shape87.addChild(&Appearance88);

Cone& Cone89 =  Cone();
Cone89.setDEF(CString("_8"));
Shape87.setGeometry(&Cone89);

Transform86.addChild(&Shape87);

Transform79.addChild(&Transform86);

Transform& Transform90 =  Transform();
Transform90.setDEF(CString("BoxTransparent"));
Transform90.setTranslation(new float[]{1.0,0.0,0.0});
Shape& Shape91 =  Shape();
Appearance& Appearance92 =  Appearance();
Appearance92.setDEF(CString("_9"));
Material& Material93 =  Material();
Material93.setTransparency(0.5015458);
Appearance92.addChild(&Material93);

PixelTexture& PixelTexture94 =  PixelTexture();
PixelTexture94.setUSE(CString("_12"));
Appearance92.addChild(&PixelTexture94);

Shape91.addChild(&Appearance92);

Box& Box95 =  Box();
Box95.setUSE(CString("_7"));
Shape91.setGeometry(&Box95);

Transform90.addChild(&Shape91);

Transform79.addChild(&Transform90);

Transform& Transform96 =  Transform();
Transform96.setDEF(CString("ConeTransparent"));
Transform96.setTranslation(new float[]{3.0,0.0,0.0});
Shape& Shape97 =  Shape();
Appearance& Appearance98 =  Appearance();
Appearance98.setUSE(CString("_9"));
Shape97.addChild(&Appearance98);

Cone& Cone99 =  Cone();
Cone99.setUSE(CString("_8"));
Shape97.setGeometry(&Cone99);

Transform96.addChild(&Shape97);

Transform79.addChild(&Transform96);

StaticGroup24.addChildren(&Transform79);

Transform& Transform100 =  Transform();
Transform100.setDEF(CString("Rendering"));
Transform100.setTranslation(new float[]{-9.0,-2.0,0.0});
Transform& Transform101 =  Transform();
Transform101.setDEF(CString("Pyramid_1"));
Transform101.setTranslation(new float[]{6.0,0.0,0.0});
Shape& Shape102 =  Shape();
Appearance& Appearance103 =  Appearance();
Appearance103.setUSE(CString("_11"));
Shape102.addChild(&Appearance103);

IndexedFaceSet& IndexedFaceSet104 =  IndexedFaceSet();
IndexedFaceSet104.setCoordIndex(new int32_t[]{3,2,1,0,-1,0,1,4,-1,1,2,4,-1,2,3,4,-1,3,0,4,-1}, 21);
Coordinate& Coordinate105 =  Coordinate();
Coordinate105.setDEF(CString("_1"));
Coordinate105.setPoint(new float[]{-1.0,-0.8660254,1.0,1.0,-0.8660254,1.0,1.0,-0.8660254,-1.0,-1.0,-0.8660254,-1.0,0.0,0.8660254,0.0}, 15);
IndexedFaceSet104.setCoord(&Coordinate105);

Shape102.setGeometry(&IndexedFaceSet104);

Transform101.addChild(&Shape102);

Transform100.addChild(&Transform101);

Transform& Transform106 =  Transform();
Transform106.setDEF(CString("PyramidCW"));
Transform106.setTranslation(new float[]{8.0,0.0,0.0});
Shape& Shape107 =  Shape();
Appearance& Appearance108 =  Appearance();
Appearance108.setUSE(CString("_11"));
Shape107.addChild(&Appearance108);

IndexedFaceSet& IndexedFaceSet109 =  IndexedFaceSet();
IndexedFaceSet109.setCcw(false);
IndexedFaceSet109.setCoordIndex(new int32_t[]{4,0,3,-1,4,3,2,-1,4,2,1,-1,4,1,0,-1,0,1,2,3,-1}, 21);
Coordinate& Coordinate110 =  Coordinate();
Coordinate110.setUSE(CString("_1"));
IndexedFaceSet109.setCoord(&Coordinate110);

Shape107.setGeometry(&IndexedFaceSet109);

Transform106.addChild(&Shape107);

Transform100.addChild(&Transform106);

Transform& Transform111 =  Transform();
Transform111.setDEF(CString("NurbsSwungSurface"));
Transform111.setTranslation(new float[]{9.647157,0.3535812,0.3533477});
Transform111.setRotation(new float[]{1.0,0.0,0.0,90.0000000000003});
Transform111.setScale(new float[]{0.7064238,0.7064238,0.7064238});
Shape& Shape112 =  Shape();
Appearance& Appearance113 =  Appearance();
Appearance113.setUSE(CString("_11"));
Shape112.addChild(&Appearance113);

NurbsSwungSurface& NurbsSwungSurface114 =  NurbsSwungSurface();
NurbsSwungSurface114.setCcw(false);
NurbsCurve2D& NurbsCurve2D115 =  NurbsCurve2D();
NurbsCurve2D115.setTessellation(50);
NurbsCurve2D115.setClosed(true);
NurbsCurve2D115.setOrder(4);
NurbsCurve2D115.setControlPoint(new double[]{0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,0.0}, 10);
NurbsSwungSurface114.setProfileCurve(NurbsCurve2D115);

NurbsCurve2D& NurbsCurve2D116 =  NurbsCurve2D();
NurbsCurve2D116.setTessellation(50);
NurbsCurve2D116.setClosed(true);
NurbsCurve2D116.setOrder(4);
NurbsCurve2D116.setControlPoint(new double[]{0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,0.0}, 10);
NurbsSwungSurface114.setTrajectoryCurve(NurbsCurve2D116);

Shape112.setGeometry(NurbsSwungSurface114);

Transform111.addChild(&Shape112);

Transform100.addChild(&Transform111);

StaticGroup24.addChildren(&Transform100);

Transform& Transform117 =  Transform();
Transform117.setDEF(CString("Text_2"));
Transform117.setTranslation(new float[]{0.0,-5.0,0.0});
Transform& Transform118 =  Transform();
Transform118.setDEF(CString("Text_1"));
Transform118.setTranslation(new float[]{-4.0,0.0,0.0});
Shape& Shape119 =  Shape();
Appearance& Appearance120 =  Appearance();
Appearance120.setDEF(CString("_13"));
Material& Material121 =  Material();
Material121.setDiffuseColor(new float[]{0.0,0.8,0.0});
Appearance120.addChild(&Material121);

Shape119.addChild(&Appearance120);

Text& Text122 =  Text();
Text122.setString(new CString[]{CString("3D Text")}, 1);
CFontStyle& FontStyle123 =  CFontStyle();
FontStyle123.setSize(2);
Text122.setFontStyle(&FontStyle123);

Shape119.setGeometry(&Text122);

Transform118.addChild(&Shape119);

Transform117.addChild(&Transform118);

Transform& Transform124 =  Transform();
Transform124.setDEF(CString("Text_3"));
Transform124.setTranslation(new float[]{4.0,1.461256,0.0});
Transform124.setScale(new float[]{0.1847084,0.1847084,0.1847084});
Shape& Shape125 =  Shape();
Appearance& Appearance126 =  Appearance();
Appearance126.setUSE(CString("_13"));
Shape125.addChild(&Appearance126);

Text& Text127 =  Text();
Text127.setString(new CString[]{CString("3D Text")}, 1);
CFontStyle& FontStyle128 =  CFontStyle();
FontStyle128.setSize(2);
FontStyle128.setJustify(new CString[]{CString("END")}, 1);
Text127.setFontStyle(&FontStyle128);

Shape125.setGeometry(&Text127);

Transform124.addChild(&Shape125);

Transform117.addChild(&Transform124);

StaticGroup24.addChildren(&Transform117);

Transform& Transform129 =  Transform();
Transform129.setDEF(CString("SpecialShapes"));
Transform129.setTranslation(new float[]{0.0,-6.0,0.0});
Transform& Transform130 =  Transform();
Transform130.setDEF(CString("ParticleSystem"));
Transform130.setTranslation(new float[]{-3.0,0.0,0.0});
ParticleSystem& ParticleSystem131 =  ParticleSystem();
ParticleSystem131.setGeometryType(CString("POINT"));
ParticleSystem131.setMaxParticles(100);
ParticleSystem131.setParticleLifetime(1);
ParticleSystem131.setLifetimeVariation(0.1);
PointEmitter& PointEmitter132 =  PointEmitter();
PointEmitter132.setDirection(new float[]{0.0,0.0,0.0});
PointEmitter132.setSpeed(1);
ParticleSystem131.setEmitter(PointEmitter132);

Appearance& Appearance133 =  Appearance();
Appearance133.setUSE(CString("_10"));
ParticleSystem131.addChildren(&Appearance133);

Transform130.addChild(&ParticleSystem131);

Transform129.addChild(&Transform130);

Transform& Transform134 =  Transform();
Transform134.setDEF(CString("InstancedShape"));
Transform134.setTranslation(new float[]{-1.0,0.0,0.0});
InstancedShape& InstancedShape135 =  InstancedShape();
InstancedShape135.setTranslations(CString("0 0 0 -0.5 0 0 0.5 0 0 0 -0.5 0 0 0.5 0"));
Appearance& Appearance136 =  Appearance();
Appearance136.setUSE(CString("_10"));
InstancedShape135.addChildren(&Appearance136);

PointSet& PointSet137 =  PointSet();
Coordinate& Coordinate138 =  Coordinate();
Coordinate138.setPoint(new float[]{0.0,0.0,0.0}, 3);
PointSet137.setCoord(&Coordinate138);

InstancedShape135.addPointSet(PointSet137);

Transform134.setInstancedShape(InstancedShape135);

Transform129.addChild(&Transform134);

Transform& Transform139 =  Transform();
Transform139.setDEF(CString("WideOcean"));
Transform139.setTranslation(new float[]{1.0,0.0,0.0});
Shape& Shape140 =  Shape();
Appearance& Appearance141 =  Appearance();
ComposedCubeMapTexture& ComposedCubeMapTexture142 =  ComposedCubeMapTexture();
ImageTexture& ImageTexture143 =  ImageTexture();
ImageTexture143.setUrl(new CString[]{CString("https://create3000.github.io/Library/Textures/CubeMapTextures/WideOcean/WideOcean-front.jpg")}, 1);
ComposedCubeMapTexture142.setFront(ImageTexture143);

ImageTexture& ImageTexture144 =  ImageTexture();
ImageTexture144.setUrl(new CString[]{CString("https://create3000.github.io/Library/Textures/CubeMapTextures/WideOcean/WideOcean-back.jpg")}, 1);
ComposedCubeMapTexture142.setBack(ImageTexture144);

ImageTexture& ImageTexture145 =  ImageTexture();
ImageTexture145.setUrl(new CString[]{CString("https://create3000.github.io/Library/Textures/CubeMapTextures/WideOcean/WideOcean-left.jpg")}, 1);
ComposedCubeMapTexture142.setLeft(ImageTexture145);

ImageTexture& ImageTexture146 =  ImageTexture();
ImageTexture146.setUrl(new CString[]{CString("https://create3000.github.io/Library/Textures/CubeMapTextures/WideOcean/WideOcean-right.jpg")}, 1);
ComposedCubeMapTexture142.setRight(ImageTexture146);

ImageTexture& ImageTexture147 =  ImageTexture();
ImageTexture147.setUrl(new CString[]{CString("https://create3000.github.io/Library/Textures/CubeMapTextures/WideOcean/WideOcean-top.jpg")}, 1);
ComposedCubeMapTexture142.setTop(ImageTexture147);

ImageTexture& ImageTexture148 =  ImageTexture();
ImageTexture148.setUrl(new CString[]{CString("https://create3000.github.io/Library/Textures/CubeMapTextures/WideOcean/WideOcean-bottom.jpg")}, 1);
ComposedCubeMapTexture142.setBottom(ImageTexture148);

Appearance141.addChild(&ComposedCubeMapTexture142);

Shape140.addChild(&Appearance141);

IndexedFaceSet& IndexedFaceSet149 =  IndexedFaceSet();
IndexedFaceSet149.setCreaseAngle(28.64789);
IndexedFaceSet149.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,13,-1,0,13,14,-1,0,14,15,-1,0,15,16,-1,0,16,17,-1,0,17,18,-1,0,18,19,-1,0,19,1,-1,1,20,21,-1,1,21,2,-1,2,21,22,-1,2,22,3,-1,3,22,23,-1,3,23,4,-1,4,23,24,-1,4,24,5,-1,5,24,25,-1,5,25,6,-1,6,25,26,-1,6,26,7,-1,7,26,27,-1,7,27,8,-1,8,27,28,-1,8,28,9,-1,9,28,29,-1,9,29,10,-1,10,29,30,-1,10,30,11,-1,11,30,31,-1,11,31,12,-1,12,31,32,-1,12,32,13,-1,13,32,33,-1,13,33,14,-1,14,33,34,-1,14,34,15,-1,15,34,35,-1,15,35,16,-1,16,35,36,-1,16,36,17,-1,17,36,37,-1,17,37,18,-1,18,37,38,-1,18,38,19,-1,19,38,20,-1,19,20,1,-1,20,39,40,-1,20,40,21,-1,21,40,41,-1,21,41,22,-1,22,41,42,-1,22,42,23,-1,23,42,43,-1,23,43,24,-1,24,43,44,-1,24,44,25,-1,25,44,45,-1,25,45,26,-1,26,45,46,-1,26,46,27,-1,27,46,47,-1,27,47,28,-1,28,47,48,-1,28,48,29,-1,29,48,49,-1,29,49,30,-1,30,49,50,-1,30,50,31,-1,31,50,51,-1,31,51,32,-1,32,51,52,-1,32,52,33,-1,33,52,53,-1,33,53,34,-1,34,53,54,-1,34,54,35,-1,35,54,55,-1,35,55,36,-1,36,55,56,-1,36,56,37,-1,37,56,57,-1,37,57,38,-1,38,57,39,-1,38,39,20,-1,39,58,59,-1,39,59,40,-1,40,59,60,-1,40,60,41,-1,41,60,61,-1,41,61,42,-1,42,61,62,-1,42,62,43,-1,43,62,63,-1,43,63,44,-1,44,63,64,-1,44,64,45,-1,45,64,65,-1,45,65,46,-1,46,65,66,-1,46,66,47,-1,47,66,67,-1,47,67,48,-1,48,67,68,-1,48,68,49,-1,49,68,69,-1,49,69,50,-1,50,69,70,-1,50,70,51,-1,51,70,71,-1,51,71,52,-1,52,71,72,-1,52,72,53,-1,53,72,73,-1,53,73,54,-1,54,73,74,-1,54,74,55,-1,55,74,75,-1,55,75,56,-1,56,75,76,-1,56,76,57,-1,57,76,58,-1,57,58,39,-1,58,77,78,-1,58,78,59,-1,59,78,79,-1,59,79,60,-1,60,79,80,-1,60,80,61,-1,61,80,81,-1,61,81,62,-1,62,81,82,-1,62,82,63,-1,63,82,83,-1,63,83,64,-1,64,83,84,-1,64,84,65,-1,65,84,85,-1,65,85,66,-1,66,85,86,-1,66,86,67,-1,67,86,87,-1,67,87,68,-1,68,87,88,-1,68,88,69,-1,69,88,89,-1,69,89,70,-1,70,89,90,-1,70,90,71,-1,71,90,91,-1,71,91,72,-1,72,91,92,-1,72,92,73,-1,73,92,93,-1,73,93,74,-1,74,93,94,-1,74,94,75,-1,75,94,95,-1,75,95,76,-1,76,95,77,-1,76,77,58,-1,77,96,97,-1,77,97,78,-1,78,97,98,-1,78,98,79,-1,79,98,99,-1,79,99,80,-1,80,99,100,-1,80,100,81,-1,81,100,101,-1,81,101,82,-1,82,101,102,-1,82,102,83,-1,83,102,103,-1,83,103,84,-1,84,103,104,-1,84,104,85,-1,85,104,105,-1,85,105,86,-1,86,105,106,-1,86,106,87,-1,87,106,107,-1,87,107,88,-1,88,107,108,-1,88,108,89,-1,89,108,109,-1,89,109,90,-1,90,109,110,-1,90,110,91,-1,91,110,111,-1,91,111,92,-1,92,111,112,-1,92,112,93,-1,93,112,113,-1,93,113,94,-1,94,113,114,-1,94,114,95,-1,95,114,96,-1,95,96,77,-1,96,115,116,-1,96,116,97,-1,97,116,117,-1,97,117,98,-1,98,117,118,-1,98,118,99,-1,99,118,119,-1,99,119,100,-1,100,119,120,-1,100,120,101,-1,101,120,121,-1,101,121,102,-1,102,121,122,-1,102,122,103,-1,103,122,123,-1,103,123,104,-1,104,123,124,-1,104,124,105,-1,105,124,125,-1,105,125,106,-1,106,125,126,-1,106,126,107,-1,107,126,127,-1,107,127,108,-1,108,127,128,-1,108,128,109,-1,109,128,129,-1,109,129,110,-1,110,129,130,-1,110,130,111,-1,111,130,131,-1,111,131,112,-1,112,131,132,-1,112,132,113,-1,113,132,133,-1,113,133,114,-1,114,133,115,-1,114,115,96,-1,115,134,135,-1,115,135,116,-1,116,135,136,-1,116,136,117,-1,117,136,137,-1,117,137,118,-1,118,137,138,-1,118,138,119,-1,119,138,139,-1,119,139,120,-1,120,139,140,-1,120,140,121,-1,121,140,141,-1,121,141,122,-1,122,141,142,-1,122,142,123,-1,123,142,143,-1,123,143,124,-1,124,143,144,-1,124,144,125,-1,125,144,145,-1,125,145,126,-1,126,145,146,-1,126,146,127,-1,127,146,147,-1,127,147,128,-1,128,147,148,-1,128,148,129,-1,129,148,149,-1,129,149,130,-1,130,149,150,-1,130,150,131,-1,131,150,151,-1,131,151,132,-1,132,151,152,-1,132,152,133,-1,133,152,134,-1,133,134,115,-1,134,153,135,-1,135,153,136,-1,136,153,137,-1,137,153,138,-1,138,153,139,-1,139,153,140,-1,140,153,141,-1,141,153,142,-1,142,153,143,-1,143,153,144,-1,144,153,145,-1,145,153,146,-1,146,153,147,-1,147,153,148,-1,148,153,149,-1,149,153,150,-1,150,153,151,-1,151,153,152,-1,152,153,134,-1}, 1216);
TextureCoordinateGenerator& TextureCoordinateGenerator150 =  TextureCoordinateGenerator();
TextureCoordinateGenerator150.setMode(CString("COORD"));
IndexedFaceSet149.setTexCoord(TextureCoordinateGenerator150);

Coordinate& Coordinate151 =  Coordinate();
Coordinate151.setPoint(new float[]{0.0,1.0,0.0,0.0,0.939693,0.34202,0.111055,0.939693,0.323488,0.210073,0.939693,0.269902,0.286328,0.939693,0.187066,0.331554,0.939693,0.083961,0.340852,0.939693,-0.028244,0.313213,0.939693,-0.137387,0.251632,0.939693,-0.231644,0.162783,0.939693,-0.300798,0.056295,0.939693,-0.337355,-0.056295,0.939693,-0.337355,-0.162783,0.939693,-0.300798,-0.251632,0.939693,-0.231644,-0.313213,0.939693,-0.137387,-0.340852,0.939693,-0.028244,-0.331554,0.939693,0.083962,-0.286328,0.939693,0.187067,-0.210072,0.939693,0.269902,-0.111055,0.939693,0.323488,0.0,0.766045,0.642787,0.208714,0.766045,0.607958,0.394807,0.766045,0.50725,0.538121,0.766045,0.35157,0.623118,0.766045,0.157796,0.640591,0.766045,-0.053082,0.588648,0.766045,-0.258203,0.472914,0.766045,-0.435348,0.305931,0.766045,-0.565315,0.1058,0.766045,-0.63402,-0.1058,0.766045,-0.63402,-0.305932,0.766045,-0.565315,-0.472914,0.766045,-0.435347,-0.588648,0.766045,-0.258202,-0.640591,0.766045,-0.053081,-0.623118,0.766045,0.157796,-0.53812,0.766045,0.35157,-0.394807,0.766045,0.50725,-0.208714,0.766045,0.607958,0.0,0.5,0.866025,0.2812,0.5,0.8191,0.531923,0.5,0.683416,0.725008,0.5,0.473669,0.839525,0.5,0.212598,0.863067,0.5,-0.071517,0.793083,0.5,-0.347876,0.637155,0.5,-0.586543,0.41218,0.5,-0.761647,0.142543,0.5,-0.854213,-0.142544,0.5,-0.854213,-0.412181,0.5,-0.761647,-0.637155,0.5,-0.586542,-0.793084,0.5,-0.347875,-0.863067,0.5,-0.071516,-0.839525,0.5,0.212599,-0.725008,0.5,0.47367,-0.531922,0.5,0.683417,-0.2812,0.5,0.8191,0.0,0.17365,0.984808,0.319769,0.17365,0.931447,0.604881,0.17365,0.777152,0.82445,0.17365,0.538637,0.954673,0.17365,0.241758,0.981444,0.17365,-0.081326,0.901862,0.17365,-0.39559,0.724547,0.17365,-0.666993,0.468714,0.17365,-0.866114,0.162094,0.17365,-0.971376,-0.162095,0.17365,-0.971376,-0.468715,0.17365,-0.866114,-0.724547,0.17365,-0.666992,-0.901863,0.17365,-0.395589,-0.981444,0.17365,-0.081325,-0.954673,0.17365,0.241759,-0.824449,0.17365,0.538638,-0.60488,0.17365,0.777153,-0.319769,0.17365,0.931447,0.0,-0.17365,0.984807,0.319769,-0.17365,0.931446,0.60488,-0.17365,0.777152,0.824449,-0.17365,0.538636,0.954672,-0.17365,0.241757,0.981443,-0.17365,-0.081326,0.901861,-0.17365,-0.39559,0.724546,-0.17365,-0.666992,0.468714,-0.17365,-0.866113,0.162094,-0.17365,-0.971375,-0.162095,-0.17365,-0.971375,-0.468715,-0.17365,-0.866113,-0.724546,-0.17365,-0.666991,-0.901862,-0.17365,-0.395589,-0.981443,-0.17365,-0.081325,-0.954672,-0.17365,0.241758,-0.824448,-0.17365,0.538637,-0.604879,-0.17365,0.777153,-0.319769,-0.17365,0.931446,0.0,-0.500001,0.866025,0.2812,-0.500001,0.8191,0.531923,-0.500001,0.683416,0.725008,-0.500001,0.473669,0.839525,-0.500001,0.212598,0.863067,-0.500001,-0.071517,0.793083,-0.500001,-0.347876,0.637155,-0.500001,-0.586543,0.41218,-0.500001,-0.761647,0.142543,-0.500001,-0.854213,-0.142544,-0.500001,-0.854213,-0.412181,-0.500001,-0.761647,-0.637155,-0.500001,-0.586542,-0.793084,-0.500001,-0.347875,-0.863067,-0.500001,-0.071516,-0.839525,-0.500001,0.212599,-0.725008,-0.500001,0.47367,-0.531922,-0.500001,0.683417,-0.2812,-0.500001,0.8191,0.0,-0.766045,0.642787,0.208714,-0.766045,0.607958,0.394807,-0.766045,0.50725,0.538121,-0.766045,0.35157,0.623118,-0.766045,0.157796,0.640591,-0.766045,-0.053082,0.588648,-0.766045,-0.258203,0.472914,-0.766045,-0.435348,0.305931,-0.766045,-0.565315,0.1058,-0.766045,-0.63402,-0.1058,-0.766045,-0.63402,-0.305932,-0.766045,-0.565315,-0.472914,-0.766045,-0.435347,-0.588648,-0.766045,-0.258202,-0.640591,-0.766045,-0.053081,-0.623118,-0.766045,0.157796,-0.53812,-0.766045,0.35157,-0.394807,-0.766045,0.50725,-0.208714,-0.766045,0.607958,0.0,-0.939693,0.34202,0.111055,-0.939693,0.323488,0.210073,-0.939693,0.269902,0.286328,-0.939693,0.187066,0.331554,-0.939693,0.083961,0.340852,-0.939693,-0.028244,0.313213,-0.939693,-0.137387,0.251632,-0.939693,-0.231644,0.162783,-0.939693,-0.300798,0.056295,-0.939693,-0.337355,-0.056295,-0.939693,-0.337355,-0.162783,-0.939693,-0.300798,-0.251632,-0.939693,-0.231644,-0.313213,-0.939693,-0.137387,-0.340852,-0.939693,-0.028244,-0.331554,-0.939693,0.083962,-0.286328,-0.939693,0.187067,-0.210072,-0.939693,0.269902,-0.111055,-0.939693,0.323488,0.0,-1.0,0.0}, 462);
IndexedFaceSet149.setCoord(&Coordinate151);

Shape140.setGeometry(&IndexedFaceSet149);

Transform139.addChild(&Shape140);

Transform129.addChild(&Transform139);

StaticGroup24.addChildren(&Transform129);

Group23.addChild(&StaticGroup24);

Transform& Transform152 =  Transform();
Transform152.setTranslation(new float[]{9.0,0.0,0.0});
Transform& Transform153 =  Transform();
Transform153.setUSE(CString("Points"));
Transform152.addChild(&Transform153);

Transform& Transform154 =  Transform();
Transform154.setUSE(CString("Lines"));
Transform152.addChild(&Transform154);

Transform& Transform155 =  Transform();
Transform155.setUSE(CString("Geometry2D"));
Transform152.addChild(&Transform155);

Transform& Transform156 =  Transform();
Transform156.setUSE(CString("Geometry3D"));
Transform152.addChild(&Transform156);

Transform& Transform157 =  Transform();
Transform157.setUSE(CString("Rendering"));
Transform152.addChild(&Transform157);

Transform& Transform158 =  Transform();
Transform158.setUSE(CString("Text_2"));
Transform152.addChild(&Transform158);

Transform& Transform159 =  Transform();
Transform159.setUSE(CString("SpecialShapes"));
Transform152.addChild(&Transform159);

Group23.addChild(&Transform152);

Group& Group160 =  Group();
Group160.setDEF(CString("Labels"));
Transform& Transform161 =  Transform();
Transform161.setDEF(CString("StaticGroup"));
Transform161.setTranslation(new float[]{-4.0,8.0,0.0});
Shape& Shape162 =  Shape();
Appearance& Appearance163 =  Appearance();
Appearance163.setDEF(CString("_14"));
UnlitMaterial& UnlitMaterial164 =  UnlitMaterial();
UnlitMaterial164.setNormalScale(0);
Appearance163.addChild(&UnlitMaterial164);

Shape162.addChild(&Appearance163);

Text& Text165 =  Text();
Text165.setString(new CString[]{CString("StaticGroup")}, 1);
CFontStyle& FontStyle166 =  CFontStyle();
Text165.setFontStyle(&FontStyle166);

Shape162.setGeometry(&Text165);

Transform161.addChild(&Shape162);

Group160.addChild(&Transform161);

Transform& Transform167 =  Transform();
Transform167.setDEF(CString("Group_1"));
Transform167.setTranslation(new float[]{5.0,8.0,0.0});
Shape& Shape168 =  Shape();
Appearance& Appearance169 =  Appearance();
Appearance169.setUSE(CString("_14"));
Shape168.addChild(&Appearance169);

Text& Text170 =  Text();
Text170.setString(new CString[]{CString("Group")}, 1);
CFontStyle& FontStyle171 =  CFontStyle();
Text170.setFontStyle(&FontStyle171);

Shape168.setGeometry(&Text170);

Transform167.addChild(&Shape168);

Group160.addChild(&Transform167);

Group23.addChild(&Group160);

Scene13.addChild(&Group23);

X3D0.setScene(&Scene13);

//}
