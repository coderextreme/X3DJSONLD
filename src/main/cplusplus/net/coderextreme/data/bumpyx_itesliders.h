//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
//int main(int argc, char ** argv) 
//{
X3D& X3D0 =  X3D();
X3D0.setProfile(CString("Full"));
X3D0.setVersion(CString("4.1"));
head& head1 =  head();
//<component name='Shape' level='4'></component>
//<component name='DIS' level='2'></component>
component& component2 =  component();
component2.setName(CString("Scripting"));
component2.setLevel(1);
head1.addChild(&component2);

component& component3 =  component();
component3.setName(CString("EnvironmentalEffects"));
component3.setLevel(3);
head1.addChild(&component3);

component& component4 =  component();
component4.setName(CString("Shaders"));
component4.setLevel(1);
head1.addChild(&component4);

component& component5 =  component();
component5.setName(CString("CubeMapTexturing"));
component5.setLevel(1);
head1.addChild(&component5);

component& component6 =  component();
component6.setName(CString("Texturing"));
component6.setLevel(1);
head1.addChild(&component6);

component& component7 =  component();
component7.setName(CString("Rendering"));
component7.setLevel(1);
head1.addChild(&component7);

component& component8 =  component();
component8.setName(CString("Grouping"));
component8.setLevel(3);
head1.addChild(&component8);

component& component9 =  component();
component9.setName(CString("Core"));
component9.setLevel(1);
head1.addChild(&component9);

meta& meta10 =  meta();
meta10.setName(CString("title"));
meta10.setContent(CString("bumpyx_itesliders.x3d"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(CString("description"));
meta11.setContent(CString("*Bumpy flower with prototype sliders*"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(CString("creator"));
meta12.setContent(CString("Doug Sanden, Christoph Valentin, John Carlson"));
head1.addMeta(&meta12);

meta& meta13 =  meta();
meta13.setName(CString("identifier"));
meta13.setContent(CString("https://github.com/coderextreme/JSONverse/public/x3d/bumpyx_itesliders.x3d"));
head1.addMeta(&meta13);

meta& meta14 =  meta();
meta14.setName(CString("generator"));
meta14.setContent(CString("PSPad, http://www.pspad.com/"));
head1.addMeta(&meta14);

meta& meta15 =  meta();
meta15.setName(CString("license"));
meta15.setContent(CString("license.html"));
head1.addMeta(&meta15);

X3D0.setHead(&head1);

//\"The Flower Review (TPREV)\", a simple MU scene using DIS Sensor Event Distribution,
//It is assumed the reviewers (users) have a non-X3D voice channel (e.g. TeamSpeak)
//open for their \"discussion about the teapot\"
Scene& Scene16 =  Scene();
//LayerSet with two layers, navigation happens in layer 1
LayerSet& LayerSet17 =  LayerSet();
LayerSet17.setActiveLayer(1);
LayerSet17.setOrder(new int32_t[]{1,2,3}, 3);
//the first Layer contains the main scenery - \"The Review of the Flower (DIS Multiuser)\"
Layer& Layer18 =  Layer();
Layer18.setPickable(true);
Layer18.setObjectType(new CString[]{CString("ALL")}, 1);
//basic nodes, which might be present in any scene
NavigationInfo& NavigationInfo19 =  NavigationInfo();
NavigationInfo19.setType(new CString[]{CString("EXAMINE")}, 1);
NavigationInfo19.setAvatarSize(new float[]{0.25,1.75,0.75}, 3);
Layer18.addChild(&NavigationInfo19);

DirectionalLight& DirectionalLight20 =  DirectionalLight();
DirectionalLight20.setAmbientIntensity(0.2);
DirectionalLight20.setDirection(new float[]{0.0,-1.0,0.0});
Layer18.addChild(&DirectionalLight20);

DirectionalLight& DirectionalLight21 =  DirectionalLight();
DirectionalLight21.setAmbientIntensity(0.2);
DirectionalLight21.setDirection(new float[]{-1.0,-0.1,-1.0});
Layer18.addChild(&DirectionalLight21);

Viewpoint& Viewpoint22 =  Viewpoint();
Viewpoint22.setDescription(CString("My Overview"));
Viewpoint22.setFieldOfView(1.570796);
Viewpoint22.setPosition(new float[]{0.0,1.75,60.0});
Layer18.addChild(&Viewpoint22);

//this group contains the red/green/blue 3D crosshair
Group& Group23 =  Group();
//Arrow X
Transform& Transform24 =  Transform();
Transform24.setTranslation(new float[]{25.0,0.0,0.0});
Transform24.setRotation(new float[]{0.0,0.0,-1.0,1.57});
Shape& Shape25 =  Shape();
Cylinder& Cylinder26 =  Cylinder();
Cylinder26.setDEF(CString("Shaft"));
Cylinder26.setRadius(0.35);
Cylinder26.setHeight(50);
Shape25.setGeometry(&Cylinder26);

Appearance& Appearance27 =  Appearance();
Material& Material28 =  Material();
Material28.setDEF(CString("RED"));
Material28.setDiffuseColor(new float[]{1.0,0.0,0.0});
Material28.setEmissiveColor(new float[]{1.0,0.0,0.0});
Appearance27.addChild(&Material28);

Shape25.addChild(&Appearance27);

Transform24.addChild(&Shape25);

Group23.addChild(&Transform24);

Transform& Transform29 =  Transform();
Transform29.setTranslation(new float[]{50.0,0.0,0.0});
Transform29.setRotation(new float[]{0.0,0.0,-1.0,1.57});
Shape& Shape30 =  Shape();
Cone& Cone31 =  Cone();
Cone31.setDEF(CString("Tip"));
Cone31.setBottomRadius(0.8);
Cone31.setHeight(3);
Shape30.setGeometry(&Cone31);

Appearance& Appearance32 =  Appearance();
Material& Material33 =  Material();
Material33.setUSE(CString("RED"));
Appearance32.addChild(&Material33);

Shape30.addChild(&Appearance32);

Transform29.addChild(&Shape30);

Group23.addChild(&Transform29);

//Arrow Y
Transform& Transform34 =  Transform();
Transform34.setTranslation(new float[]{0.0,25.0,0.0});
Shape& Shape35 =  Shape();
Cylinder& Cylinder36 =  Cylinder();
Cylinder36.setUSE(CString("Shaft"));
Shape35.setGeometry(&Cylinder36);

Appearance& Appearance37 =  Appearance();
Material& Material38 =  Material();
Material38.setDEF(CString("GREEN"));
Material38.setDiffuseColor(new float[]{0.0,1.0,0.0});
Material38.setEmissiveColor(new float[]{0.0,1.0,0.0});
Appearance37.addChild(&Material38);

Shape35.addChild(&Appearance37);

Transform34.addChild(&Shape35);

Group23.addChild(&Transform34);

Transform& Transform39 =  Transform();
Transform39.setTranslation(new float[]{0.0,50.0,0.0});
Shape& Shape40 =  Shape();
Cone& Cone41 =  Cone();
Cone41.setUSE(CString("Tip"));
Shape40.setGeometry(&Cone41);

Appearance& Appearance42 =  Appearance();
Material& Material43 =  Material();
Material43.setUSE(CString("GREEN"));
Appearance42.addChild(&Material43);

Shape40.addChild(&Appearance42);

Transform39.addChild(&Shape40);

Group23.addChild(&Transform39);

//Arrow Z
Transform& Transform44 =  Transform();
Transform44.setTranslation(new float[]{0.0,0.0,25.0});
Transform44.setRotation(new float[]{1.0,0.0,0.0,1.57});
Shape& Shape45 =  Shape();
Cylinder& Cylinder46 =  Cylinder();
Cylinder46.setUSE(CString("Shaft"));
Shape45.setGeometry(&Cylinder46);

Appearance& Appearance47 =  Appearance();
Material& Material48 =  Material();
Material48.setDEF(CString("BLUE"));
Material48.setDiffuseColor(new float[]{0.0,0.0,1.0});
Material48.setEmissiveColor(new float[]{0.0,0.0,1.0});
Appearance47.addChild(&Material48);

Shape45.addChild(&Appearance47);

Transform44.addChild(&Shape45);

Group23.addChild(&Transform44);

Transform& Transform49 =  Transform();
Transform49.setTranslation(new float[]{0.0,0.0,50.0});
Transform49.setRotation(new float[]{1.0,0.0,0.0,1.57});
Shape& Shape50 =  Shape();
Cone& Cone51 =  Cone();
Cone51.setUSE(CString("Tip"));
Shape50.setGeometry(&Cone51);

Appearance& Appearance52 =  Appearance();
Material& Material53 =  Material();
Material53.setUSE(CString("BLUE"));
Appearance52.addChild(&Material53);

Shape50.addChild(&Appearance52);

Transform49.addChild(&Shape50);

Group23.addChild(&Transform49);

Layer18.addChild(&Group23);

//the model that is being reviewed by the users of this scene
Transform& Transform54 =  Transform();
Transform54.setDEF(CString("FlowerTransform"));
//<Inline DEF=\"Flower\" url='\"bumpyx_ite.x3d\"' />
//Images courtesy of Paul Debevec's Light Probe Image Gallery
Background& Background55 =  Background();
Background55.setBackUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_back.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")}, 2);
Background55.setBottomUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")}, 2);
Background55.setFrontUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_front.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")}, 2);
Background55.setLeftUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_left.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")}, 2);
Background55.setRightUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_right.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")}, 2);
Background55.setTopUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_top.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")}, 2);
Transform54.addChild(&Background55);

Transform& Transform56 =  Transform();
Shape& Shape57 =  Shape();
//<Sphere radius='40'></Sphere>
IndexedFaceSet& IndexedFaceSet58 =  IndexedFaceSet();
IndexedFaceSet58.setConvex(false);
IndexedFaceSet58.setDEF(CString("Orbit"));
Coordinate& Coordinate59 =  Coordinate();
Coordinate59.setDEF(CString("OrbitCoordinates"));
IndexedFaceSet58.setCoord(&Coordinate59);

Shape57.setGeometry(&IndexedFaceSet58);

Appearance& Appearance60 =  Appearance();
Material& Material61 =  Material();
Material61.setDiffuseColor(new float[]{0.7,0.7,0.7});
Material61.setSpecularColor(new float[]{0.5,0.5,0.5});
Appearance60.addChild(&Material61);

ComposedCubeMapTexture& ComposedCubeMapTexture62 =  ComposedCubeMapTexture();
ComposedCubeMapTexture62.setDEF(CString("texture"));
ImageTexture& ImageTexture63 =  ImageTexture();
ImageTexture63.setUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_back.png"), CString("https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")}, 2);
ComposedCubeMapTexture62.setBack(ImageTexture63);

ImageTexture& ImageTexture64 =  ImageTexture();
ImageTexture64.setUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), CString("https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")}, 2);
ComposedCubeMapTexture62.setBottom(ImageTexture64);

ImageTexture& ImageTexture65 =  ImageTexture();
ImageTexture65.setUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_front.png"), CString("https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")}, 2);
ComposedCubeMapTexture62.setFront(ImageTexture65);

ImageTexture& ImageTexture66 =  ImageTexture();
ImageTexture66.setUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_left.png"), CString("https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")}, 2);
ComposedCubeMapTexture62.setLeft(ImageTexture66);

ImageTexture& ImageTexture67 =  ImageTexture();
ImageTexture67.setUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_right.png"), CString("https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")}, 2);
ComposedCubeMapTexture62.setRight(ImageTexture67);

ImageTexture& ImageTexture68 =  ImageTexture();
ImageTexture68.setUrl(new CString[]{CString("../resources/images/all_probes/stpeters_cross/stpeters_top.png"), CString("https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")}, 2);
ComposedCubeMapTexture62.setTop(ImageTexture68);

Appearance60.addChild(&ComposedCubeMapTexture62);

ComposedShader& ComposedShader69 =  ComposedShader();
ComposedShader69.setDEF(CString("x_iteShader"));
ComposedShader69.setLanguage(CString("GLSL"));
field& field70 =  field();
field70.setName(CString("chromaticDispertion"));
field70.setAccessType(CString("inputOnly"));
field70.setType(CString("SFVec3f"));
field70.setValue(CString("0.98 1 1.033"));
ComposedShader69.addChild(&field70);

field& field71 =  field();
field71.setName(CString("cube"));
field71.setType(CString("SFNode"));
field71.setAccessType(CString("inputOnly"));
ComposedCubeMapTexture& ComposedCubeMapTexture72 =  ComposedCubeMapTexture();
ComposedCubeMapTexture72.setUSE(CString("texture"));
field71.addChild(&ComposedCubeMapTexture72);

ComposedShader69.addChild(&field71);

field& field73 =  field();
field73.setName(CString("bias"));
field73.setType(CString("SFFloat"));
field73.setAccessType(CString("inputOnly"));
field73.setValue(CString("0.5"));
ComposedShader69.addChild(&field73);

field& field74 =  field();
field74.setName(CString("scale"));
field74.setType(CString("SFFloat"));
field74.setAccessType(CString("inputOnly"));
field74.setValue(CString("0.5"));
ComposedShader69.addChild(&field74);

field& field75 =  field();
field75.setName(CString("power"));
field75.setType(CString("SFFloat"));
field75.setAccessType(CString("inputOnly"));
field75.setValue(CString("2"));
ComposedShader69.addChild(&field75);

field& field76 =  field();
field76.setName(CString("a"));
field76.setType(CString("SFFloat"));
field76.setAccessType(CString("inputOutput"));
field76.setValue(CString("15"));
ComposedShader69.addChild(&field76);

field& field77 =  field();
field77.setName(CString("b"));
field77.setType(CString("SFFloat"));
field77.setAccessType(CString("inputOutput"));
field77.setValue(CString("5"));
ComposedShader69.addChild(&field77);

field& field78 =  field();
field78.setName(CString("c"));
field78.setType(CString("SFFloat"));
field78.setAccessType(CString("inputOutput"));
field78.setValue(CString("5"));
ComposedShader69.addChild(&field78);

field& field79 =  field();
field79.setName(CString("d"));
field79.setType(CString("SFFloat"));
field79.setAccessType(CString("inputOutput"));
field79.setValue(CString("5"));
ComposedShader69.addChild(&field79);

field& field80 =  field();
field80.setName(CString("tdelta"));
field80.setType(CString("SFFloat"));
field80.setAccessType(CString("inputOutput"));
field80.setValue(CString("0"));
ComposedShader69.addChild(&field80);

field& field81 =  field();
field81.setName(CString("pdelta"));
field81.setType(CString("SFFloat"));
field81.setAccessType(CString("inputOutput"));
field81.setValue(CString("0"));
ComposedShader69.addChild(&field81);

ShaderPart& ShaderPart82 =  ShaderPart();
ShaderPart82.setUrl(new CString[]{CString("../shaders/x_ite_flowers_chromatic.vs"), CString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs")}, 2);
ShaderPart82.setType(CString("VERTEX"));
ComposedShader69.setParts(&ShaderPart82);

ShaderPart& ShaderPart83 =  ShaderPart();
ShaderPart83.setUrl(new CString[]{CString("../shaders/x_ite.fs"), CString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs")}, 2);
ShaderPart83.setType(CString("FRAGMENT"));
ComposedShader69.setParts(&ShaderPart83);

//TO CONVERT TO A SPHERE
//<ShaderPart url='\"../shaders/x_ite.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs\"' type=\"VERTEX\" containerField='parts'></ShaderPart>
//<ShaderPart url='\"../shaders/x_itebubbles.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/xite_bubbles.fs\"' containerField='parts' type='FRAGMENT'></ShaderPart>
Appearance60.addChild(&ComposedShader69);

Shape57.addChild(&Appearance60);

Transform56.addChild(&Shape57);

Transform54.addChild(&Transform56);

Layer18.addChild(&Transform54);

Script& Script84 =  Script();
Script84.setDEF(CString("OrbitScript"));
field& field85 =  field();
field85.setName(CString("coordinates"));
field85.setAccessType(CString("inputOutput"));
field85.setType(CString("MFVec3f"));
Script84.addChild(&field85);

field& field86 =  field();
field86.setName(CString("coordIndexes"));
field86.setAccessType(CString("outputOnly"));
field86.setType(CString("MFInt32"));
Script84.addChild(&field86);

field& field87 =  field();
field87.setName(CString("a"));
field87.setType(CString("SFFloat"));
field87.setAccessType(CString("inputOutput"));
field87.setValue(CString("10"));
Script84.addChild(&field87);

field& field88 =  field();
field88.setName(CString("b"));
field88.setType(CString("SFFloat"));
field88.setAccessType(CString("inputOutput"));
field88.setValue(CString("10"));
Script84.addChild(&field88);

field& field89 =  field();
field89.setName(CString("c"));
field89.setType(CString("SFFloat"));
field89.setAccessType(CString("inputOutput"));
field89.setValue(CString("2"));
Script84.addChild(&field89);

field& field90 =  field();
field90.setName(CString("d"));
field90.setType(CString("SFFloat"));
field90.setAccessType(CString("inputOutput"));
field90.setValue(CString("2"));
Script84.addChild(&field90);

field& field91 =  field();
field91.setName(CString("pdelta"));
field91.setType(CString("SFFloat"));
field91.setAccessType(CString("inputOutput"));
field91.setValue(CString("0"));
Script84.addChild(&field91);

field& field92 =  field();
field92.setName(CString("tdelta"));
field92.setType(CString("SFFloat"));
field92.setAccessType(CString("inputOutput"));
field92.setValue(CString("0"));
Script84.addChild(&field92);


//Script84.setSourceCode(CString("ecmascript:")+
//_T("function initialize() {")+
//_T("     var resolution = 300;")+
//_T("     var theta = 0.0;")+
//_T("     var phi = 0.0;")+
//_T("     var delta = (2 * 3.141592653) / (resolution-1);")+
//_T("     var crds = new MFVec3f();")+
//_T("     for ( i = 0; i < resolution; i++) {")+
//_T("     	for ( j = 0; j < resolution; j++) {")+
//_T("		var rho = a + b * Math.cos(c * theta + tdelta) * Math.cos(d * phi + pdelta);")+
//_T("		crds.push(new SFVec3f(")+
//_T("			rho * Math.cos(phi) * Math.cos(theta),")+
//_T("			rho * Math.cos(phi) * Math.sin(theta),")+
//_T("			rho * Math.sin(phi)")+
//_T("		));")+
//_T("		theta += delta;")+
//_T("	}")+
//_T("	phi += delta;")+
//_T("     }")+
//_T("     coordinates = crds;")+
//_T("     var cis = new MFInt32();")+
//_T("     for ( i = 0; i < resolution-1; i++) {")+
//_T("     	for ( j = 0; j < resolution-1; j++) {")+
//_T("	     cis.push(i*resolution+j);")+
//_T("	     cis.push(i*resolution+j+1);")+
//_T("	     cis.push((i+1)*resolution+j+1);")+
//_T("	     cis.push((i+1)*resolution+j);")+
//_T("	     cis.push(-1);")+
//_T("	}")+
//_T("    }")+
//_T("    coordIndexes = cis;")+
//_T("}"));
Layer18.addChild(&Script84);

ROUTE& ROUTE93 =  ROUTE();
ROUTE93.setFromField(CString("coordIndexes"));
ROUTE93.setFromNode(CString("OrbitScript"));
ROUTE93.setToField(CString("set_coordIndex"));
ROUTE93.setToNode(CString("Orbit"));
Layer18.addChild(&ROUTE93);

ROUTE& ROUTE94 =  ROUTE();
ROUTE94.setFromField(CString("coordinates"));
ROUTE94.setFromNode(CString("OrbitScript"));
ROUTE94.setToField(CString("set_point"));
ROUTE94.setToNode(CString("OrbitCoordinates"));
Layer18.addChild(&ROUTE94);

LayerSet17.addChild(&Layer18);

LayoutLayer& LayoutLayer95 =  LayoutLayer();
LayoutLayer95.setPickable(true);
LayoutLayer95.setObjectType(new CString[]{CString("ALL")}, 1);
Layout& Layout96 =  Layout();
Layout96.setAlign(new CString[]{CString("LEFT"), CString("BOTTOM")}, 2);
Layout96.setOffset(new float[]{-0.2,0.19}, 2);
Layout96.setSize(new float[]{0.4,0.6}, 2);
LayoutLayer95.setLayout(Layout96);

Viewport& Viewport97 =  Viewport();
Viewport97.setClipBoundary(new float[]{0.0,1.0,0.0,1.0}, 4);
LayoutLayer95.setViewport(Viewport97);

Transform& Transform98 =  Transform();
Transform98.setTranslation(new float[]{0.0,0.0,-3.0});
Shape& Shape99 =  Shape();
Appearance& Appearance100 =  Appearance();
Material& Material101 =  Material();
Material101.setDiffuseColor(new float[]{0.0,0.0,0.0});
Material101.setTransparency(0.7);
Appearance100.addChild(&Material101);

Shape99.addChild(&Appearance100);

Box& Box102 =  Box();
Box102.setSize(new float[]{100.0,100.0,0.02});
Shape99.setGeometry(&Box102);

Transform98.addChild(&Shape99);

LayoutLayer95.addChild(&Transform98);

Transform& Transform103 =  Transform();
Transform103.setDEF(CString("equationTransform"));
Transform& Transform104 =  Transform();
Transform104.setTranslation(new float[]{0.0,0.0,-20.0});
Shape& Shape105 =  Shape();
Text& Text106 =  Text();
Text106.setDEF(CString("equation"));
Text106.setString(new CString[]{CString("r = a + b * cos(c * theta + tdelta) * cos (d * phi + pdelta)")}, 1);
CFontStyle& FontStyle107 =  CFontStyle();
FontStyle107.setSize(0.09);
Text106.setFontStyle(&FontStyle107);

Shape105.setGeometry(&Text106);

Appearance& Appearance108 =  Appearance();
Material& Material109 =  Material();
Material109.setDiffuseColor(new float[]{1.0,1.0,0.0});
Appearance108.addChild(&Material109);

Shape105.addChild(&Appearance108);

Transform104.addChild(&Shape105);

Transform103.addChild(&Transform104);

LayoutLayer95.addChild(&Transform103);

ProtoDeclare& ProtoDeclare110 =  ProtoDeclare();
ProtoDeclare110.setName(CString("SliderProto"));
ProtoInterface& ProtoInterface111 =  ProtoInterface();
field& field112 =  field();
field112.setName(CString("sliderTranslation"));
field112.setAccessType(CString("inputOutput"));
field112.setType(CString("SFVec3f"));
field112.setValue(CString("0 0.7 0"));
ProtoInterface111.addChild(&field112);

field& field113 =  field();
field113.setName(CString("transformTranslation"));
field113.setAccessType(CString("inputOutput"));
field113.setType(CString("SFVec3f"));
field113.setValue(CString("0 0 0.1"));
ProtoInterface111.addChild(&field113);

field& field114 =  field();
field114.setName(CString("sensorTranslation"));
field114.setAccessType(CString("inputOutput"));
field114.setType(CString("SFVec3f"));
field114.setValue(CString("0 0 0"));
ProtoInterface111.addChild(&field114);

field& field115 =  field();
field115.setName(CString("textString"));
field115.setAccessType(CString("inputOutput"));
field115.setType(CString("MFString"));
field115.setValue(CString("\"a=\""));
ProtoInterface111.addChild(&field115);

field& field116 =  field();
field116.setName(CString("parameterScale"));
field116.setAccessType(CString("inputOutput"));
field116.setType(CString("SFFloat"));
field116.setValue(CString("30"));
ProtoInterface111.addChild(&field116);

field& field117 =  field();
field117.setName(CString("parameterName"));
field117.setAccessType(CString("inputOutput"));
field117.setType(CString("SFString"));
field117.setValue(CString("a"));
ProtoInterface111.addChild(&field117);

field& field118 =  field();
field118.setName(CString("petNames"));
field118.setAccessType(CString("inputOutput"));
field118.setType(CString("MFString"));
ProtoInterface111.addChild(&field118);

field& field119 =  field();
field119.setName(CString("shaderNode"));
field119.setAccessType(CString("inputOutput"));
field119.setType(CString("SFNode"));
ProtoInterface111.addChild(&field119);

ProtoDeclare110.addChild(&ProtoInterface111);

ProtoBody& ProtoBody120 =  ProtoBody();
Group& Group121 =  Group();
Transform& Transform122 =  Transform();
Transform122.setDEF(CString("protoSlider"));
Transform122.setTranslation(new float[]{0.0,0.7,0.0});
IS& IS123 =  IS();
Connect& connect124 =  Connect();
connect124.setNodeField(CString("translation"));
connect124.setProtoField(CString("sliderTranslation"));
IS123.addChild(&connect124);

Transform122.addChild(&IS123);

Transform& Transform125 =  Transform();
Transform125.setDEF(CString("protoTransform"));
Transform125.setTranslation(new float[]{0.0,0.0,0.1});
IS& IS126 =  IS();
Connect& connect127 =  Connect();
connect127.setNodeField(CString("translation"));
connect127.setProtoField(CString("sensorTranslation"));
IS126.addChild(&connect127);

Transform125.addChild(&IS126);

PlaneSensor& PlaneSensor128 =  PlaneSensor();
PlaneSensor128.setDEF(CString("protoSensor"));
PlaneSensor128.setDescription(CString("Grab with mouse to adjust slider"));
PlaneSensor128.setMaxPosition(new float[]{1.0,0.0});
Transform125.addChild(&PlaneSensor128);

Transform& Transform129 =  Transform();
Transform129.setTranslation(new float[]{0.0,0.0,0.0});
TouchSensor& TouchSensor130 =  TouchSensor();
TouchSensor130.setDEF(CString("protoTS"));
Transform129.addChild(&TouchSensor130);

Transform125.addChild(&Transform129);

Transform& Transform131 =  Transform();
Shape& Shape132 =  Shape();
Text& Text133 =  Text();
Text133.setDEF(CString("protoText"));
Text133.setString(new CString[]{CString("a=")}, 1);
IS& IS134 =  IS();
Connect& connect135 =  Connect();
connect135.setNodeField(CString("string"));
connect135.setProtoField(CString("textString"));
IS134.addChild(&connect135);

Text133.addChild(&IS134);

CFontStyle& FontStyle136 =  CFontStyle();
FontStyle136.setSize(0.23);
Text133.setFontStyle(&FontStyle136);

Shape132.setGeometry(&Text133);

Appearance& Appearance137 =  Appearance();
Material& Material138 =  Material();
Appearance137.addChild(&Material138);

Shape132.addChild(&Appearance137);

Transform131.addChild(&Shape132);

Transform125.addChild(&Transform131);

Transform122.addChild(&Transform125);

Group121.addChild(&Transform122);

Script& Script139 =  Script();
Script139.setUrl(new CString[]{CString("../javascripts/X3DUser.js"), CString("https://raw.githubusercontent.com/coderextreme/JSONverse/refs/heads/main/public/javascripts/X3DUser.js")}, 2);
Script139.setDEF(CString("protoValueTransformerScript"));
Script139.setDirectOutput(true);
Script139.setMustEvaluate(true);
field& field140 =  field();
field140.setName(CString("protoScale"));
field140.setAccessType(CString("inputOutput"));
field140.setType(CString("SFFloat"));
Script139.addChild(&field140);

field& field141 =  field();
field141.setName(CString("petNames"));
field141.setAccessType(CString("inputOutput"));
field141.setType(CString("MFString"));
Script139.addChild(&field141);

field& field142 =  field();
field142.setName(CString("protoParameterName"));
field142.setAccessType(CString("inputOutput"));
field142.setType(CString("SFString"));
Script139.addChild(&field142);

field& field143 =  field();
field143.setName(CString("shader"));
field143.setAccessType(CString("inputOutput"));
field143.setType(CString("SFNode"));
Script139.addChild(&field143);

field& field144 =  field();
field144.setName(CString("newTranslation"));
field144.setAccessType(CString("inputOnly"));
field144.setType(CString("SFVec3f"));
field144.setValue(CString("1 1 1"));
Script139.addChild(&field144);

field& field145 =  field();
field145.setName(CString("protoValue_changed"));
field145.setAccessType(CString("outputOnly"));
field145.setType(CString("SFFloat"));
field145.setValue(CString("1"));
Script139.addChild(&field145);

field& field146 =  field();
field146.setName(CString("protoText_changed"));
field146.setAccessType(CString("outputOnly"));
field146.setType(CString("MFString"));
field146.setValue(CString("\"1.0\""));
Script139.addChild(&field146);

IS& IS147 =  IS();
Connect& connect148 =  Connect();
connect148.setNodeField(CString("protoScale"));
connect148.setProtoField(CString("parameterScale"));
IS147.addChild(&connect148);

Connect& connect149 =  Connect();
connect149.setNodeField(CString("petNames"));
connect149.setProtoField(CString("petNames"));
IS147.addChild(&connect149);

Connect& connect150 =  Connect();
connect150.setNodeField(CString("protoParameterName"));
connect150.setProtoField(CString("parameterName"));
IS147.addChild(&connect150);

Connect& connect151 =  Connect();
connect151.setNodeField(CString("shader"));
connect151.setProtoField(CString("shaderNode"));
IS147.addChild(&connect151);

Script139.addChild(&IS147);

Group121.addChild(&Script139);

ROUTE& ROUTE152 =  ROUTE();
ROUTE152.setFromField(CString("translation_changed"));
ROUTE152.setFromNode(CString("protoSensor"));
ROUTE152.setToField(CString("set_translation"));
ROUTE152.setToNode(CString("protoTransform"));
Group121.addChild(&ROUTE152);

ROUTE& ROUTE153 =  ROUTE();
ROUTE153.setFromField(CString("translation_changed"));
ROUTE153.setFromNode(CString("protoSensor"));
ROUTE153.setToField(CString("newTranslation"));
ROUTE153.setToNode(CString("protoValueTransformerScript"));
Group121.addChild(&ROUTE153);

ROUTE& ROUTE154 =  ROUTE();
ROUTE154.setFromField(CString("protoText_changed"));
ROUTE154.setFromNode(CString("protoValueTransformerScript"));
ROUTE154.setToField(CString("string"));
ROUTE154.setToNode(CString("protoText"));
Group121.addChild(&ROUTE154);

ProtoBody120.addChild(&Group121);

ProtoDeclare110.addChild(&ProtoBody120);

LayoutLayer95.addChild(&ProtoDeclare110);

ProtoInstance& ProtoInstance155 =  ProtoInstance();
ProtoInstance155.setName(CString("SliderProto"));
ProtoInstance155.setDEF(CString("aPI"));
fieldValue& fieldValue156 =  fieldValue();
fieldValue156.setName(CString("sliderTranslation"));
fieldValue156.setValue(CString("0 0.7 0"));
ProtoInstance155.addChild(&fieldValue156);

fieldValue& fieldValue157 =  fieldValue();
fieldValue157.setName(CString("transformTranslation"));
fieldValue157.setValue(CString("0 0 0.1"));
ProtoInstance155.addChild(&fieldValue157);

fieldValue& fieldValue158 =  fieldValue();
fieldValue158.setName(CString("sensorTranslation"));
fieldValue158.setValue(CString("0 0 0"));
ProtoInstance155.addChild(&fieldValue158);

fieldValue& fieldValue159 =  fieldValue();
fieldValue159.setName(CString("textString"));
fieldValue159.setValue(CString("\"a=\""));
ProtoInstance155.addChild(&fieldValue159);

fieldValue& fieldValue160 =  fieldValue();
fieldValue160.setName(CString("parameterScale"));
fieldValue160.setValue(CString("30"));
ProtoInstance155.addChild(&fieldValue160);

fieldValue& fieldValue161 =  fieldValue();
fieldValue161.setName(CString("parameterName"));
fieldValue161.setValue(CString("a"));
ProtoInstance155.addChild(&fieldValue161);

fieldValue& fieldValue162 =  fieldValue();
fieldValue162.setName(CString("petNames"));
fieldValue162.setValue(CString("\"yottzumm\" \"group1-petname\""));
ProtoInstance155.addChild(&fieldValue162);

fieldValue& fieldValue163 =  fieldValue();
fieldValue163.setName(CString("shaderNode"));
ComposedShader& ComposedShader164 =  ComposedShader();
ComposedShader164.setUSE(CString("x_iteShader"));
fieldValue163.addChild(&ComposedShader164);

ProtoInstance155.addChild(&fieldValue163);

LayoutLayer95.addChild(&ProtoInstance155);

ProtoInstance& ProtoInstance165 =  ProtoInstance();
ProtoInstance165.setName(CString("SliderProto"));
ProtoInstance165.setDEF(CString("bPI"));
fieldValue& fieldValue166 =  fieldValue();
fieldValue166.setName(CString("sliderTranslation"));
fieldValue166.setValue(CString("0 0.4 0"));
ProtoInstance165.addChild(&fieldValue166);

fieldValue& fieldValue167 =  fieldValue();
fieldValue167.setName(CString("transformTranslation"));
fieldValue167.setValue(CString("0 0 0.1"));
ProtoInstance165.addChild(&fieldValue167);

fieldValue& fieldValue168 =  fieldValue();
fieldValue168.setName(CString("sensorTranslation"));
fieldValue168.setValue(CString("0 0 0"));
ProtoInstance165.addChild(&fieldValue168);

fieldValue& fieldValue169 =  fieldValue();
fieldValue169.setName(CString("textString"));
fieldValue169.setValue(CString("\"b=\""));
ProtoInstance165.addChild(&fieldValue169);

fieldValue& fieldValue170 =  fieldValue();
fieldValue170.setName(CString("parameterScale"));
fieldValue170.setValue(CString("30"));
ProtoInstance165.addChild(&fieldValue170);

fieldValue& fieldValue171 =  fieldValue();
fieldValue171.setName(CString("parameterName"));
fieldValue171.setValue(CString("b"));
ProtoInstance165.addChild(&fieldValue171);

fieldValue& fieldValue172 =  fieldValue();
fieldValue172.setName(CString("petNames"));
fieldValue172.setValue(CString("\"yottzumm\" \"group1-petname\""));
ProtoInstance165.addChild(&fieldValue172);

fieldValue& fieldValue173 =  fieldValue();
fieldValue173.setName(CString("shaderNode"));
ComposedShader& ComposedShader174 =  ComposedShader();
ComposedShader174.setUSE(CString("x_iteShader"));
fieldValue173.addChild(&ComposedShader174);

ProtoInstance165.addChild(&fieldValue173);

LayoutLayer95.addChild(&ProtoInstance165);

ProtoInstance& ProtoInstance175 =  ProtoInstance();
ProtoInstance175.setName(CString("SliderProto"));
ProtoInstance175.setDEF(CString("cPI"));
fieldValue& fieldValue176 =  fieldValue();
fieldValue176.setName(CString("sliderTranslation"));
fieldValue176.setValue(CString("0 0.1 0"));
ProtoInstance175.addChild(&fieldValue176);

fieldValue& fieldValue177 =  fieldValue();
fieldValue177.setName(CString("transformTranslation"));
fieldValue177.setValue(CString("0 0 0.1"));
ProtoInstance175.addChild(&fieldValue177);

fieldValue& fieldValue178 =  fieldValue();
fieldValue178.setName(CString("sensorTranslation"));
fieldValue178.setValue(CString("0 0 0"));
ProtoInstance175.addChild(&fieldValue178);

fieldValue& fieldValue179 =  fieldValue();
fieldValue179.setName(CString("textString"));
fieldValue179.setValue(CString("\"c=\""));
ProtoInstance175.addChild(&fieldValue179);

fieldValue& fieldValue180 =  fieldValue();
fieldValue180.setName(CString("parameterScale"));
fieldValue180.setValue(CString("20"));
ProtoInstance175.addChild(&fieldValue180);

fieldValue& fieldValue181 =  fieldValue();
fieldValue181.setName(CString("parameterName"));
fieldValue181.setValue(CString("c"));
ProtoInstance175.addChild(&fieldValue181);

fieldValue& fieldValue182 =  fieldValue();
fieldValue182.setName(CString("petNames"));
fieldValue182.setValue(CString("\"yottzumm\" \"yottzumm2\" \"group1-petname\""));
ProtoInstance175.addChild(&fieldValue182);

fieldValue& fieldValue183 =  fieldValue();
fieldValue183.setName(CString("shaderNode"));
ComposedShader& ComposedShader184 =  ComposedShader();
ComposedShader184.setUSE(CString("x_iteShader"));
fieldValue183.addChild(&ComposedShader184);

ProtoInstance175.addChild(&fieldValue183);

LayoutLayer95.addChild(&ProtoInstance175);

ProtoInstance& ProtoInstance185 =  ProtoInstance();
ProtoInstance185.setName(CString("SliderProto"));
ProtoInstance185.setDEF(CString("dPI"));
fieldValue& fieldValue186 =  fieldValue();
fieldValue186.setName(CString("sliderTranslation"));
fieldValue186.setValue(CString("0 -0.2 0"));
ProtoInstance185.addChild(&fieldValue186);

fieldValue& fieldValue187 =  fieldValue();
fieldValue187.setName(CString("transformTranslation"));
fieldValue187.setValue(CString("0 0 0.1"));
ProtoInstance185.addChild(&fieldValue187);

fieldValue& fieldValue188 =  fieldValue();
fieldValue188.setName(CString("sensorTranslation"));
fieldValue188.setValue(CString("0 0 0"));
ProtoInstance185.addChild(&fieldValue188);

fieldValue& fieldValue189 =  fieldValue();
fieldValue189.setName(CString("textString"));
fieldValue189.setValue(CString("\"d=\""));
ProtoInstance185.addChild(&fieldValue189);

fieldValue& fieldValue190 =  fieldValue();
fieldValue190.setName(CString("parameterScale"));
fieldValue190.setValue(CString("20"));
ProtoInstance185.addChild(&fieldValue190);

fieldValue& fieldValue191 =  fieldValue();
fieldValue191.setName(CString("parameterName"));
fieldValue191.setValue(CString("d"));
ProtoInstance185.addChild(&fieldValue191);

fieldValue& fieldValue192 =  fieldValue();
fieldValue192.setName(CString("petNames"));
fieldValue192.setValue(CString("\"yottzumm\" \"yottzumm2\" \"group1-petname\""));
ProtoInstance185.addChild(&fieldValue192);

fieldValue& fieldValue193 =  fieldValue();
fieldValue193.setName(CString("shaderNode"));
ComposedShader& ComposedShader194 =  ComposedShader();
ComposedShader194.setUSE(CString("x_iteShader"));
fieldValue193.addChild(&ComposedShader194);

ProtoInstance185.addChild(&fieldValue193);

LayoutLayer95.addChild(&ProtoInstance185);

ProtoInstance& ProtoInstance195 =  ProtoInstance();
ProtoInstance195.setName(CString("SliderProto"));
ProtoInstance195.setDEF(CString("tdeltaPI"));
fieldValue& fieldValue196 =  fieldValue();
fieldValue196.setName(CString("sliderTranslation"));
fieldValue196.setValue(CString("0 -0.5 0"));
ProtoInstance195.addChild(&fieldValue196);

fieldValue& fieldValue197 =  fieldValue();
fieldValue197.setName(CString("transformTranslation"));
fieldValue197.setValue(CString("0 0 0.1"));
ProtoInstance195.addChild(&fieldValue197);

fieldValue& fieldValue198 =  fieldValue();
fieldValue198.setName(CString("sensorTranslation"));
fieldValue198.setValue(CString("0 0 0"));
ProtoInstance195.addChild(&fieldValue198);

fieldValue& fieldValue199 =  fieldValue();
fieldValue199.setName(CString("textString"));
fieldValue199.setValue(CString("\"tdelta=\""));
ProtoInstance195.addChild(&fieldValue199);

fieldValue& fieldValue200 =  fieldValue();
fieldValue200.setName(CString("parameterScale"));
fieldValue200.setValue(CString("6.28"));
ProtoInstance195.addChild(&fieldValue200);

fieldValue& fieldValue201 =  fieldValue();
fieldValue201.setName(CString("parameterName"));
fieldValue201.setValue(CString("tdelta"));
ProtoInstance195.addChild(&fieldValue201);

fieldValue& fieldValue202 =  fieldValue();
fieldValue202.setName(CString("petNames"));
fieldValue202.setValue(CString("\"yottzumm2\" \"group1-petname\""));
ProtoInstance195.addChild(&fieldValue202);

fieldValue& fieldValue203 =  fieldValue();
fieldValue203.setName(CString("shaderNode"));
ComposedShader& ComposedShader204 =  ComposedShader();
ComposedShader204.setUSE(CString("x_iteShader"));
fieldValue203.addChild(&ComposedShader204);

ProtoInstance195.addChild(&fieldValue203);

LayoutLayer95.addChild(&ProtoInstance195);

ProtoInstance& ProtoInstance205 =  ProtoInstance();
ProtoInstance205.setName(CString("SliderProto"));
ProtoInstance205.setDEF(CString("pdeltaPI"));
fieldValue& fieldValue206 =  fieldValue();
fieldValue206.setName(CString("sliderTranslation"));
fieldValue206.setValue(CString("0 -0.8 0"));
ProtoInstance205.addChild(&fieldValue206);

fieldValue& fieldValue207 =  fieldValue();
fieldValue207.setName(CString("transformTranslation"));
fieldValue207.setValue(CString("0 0 0.1"));
ProtoInstance205.addChild(&fieldValue207);

fieldValue& fieldValue208 =  fieldValue();
fieldValue208.setName(CString("sensorTranslation"));
fieldValue208.setValue(CString("0 0 0"));
ProtoInstance205.addChild(&fieldValue208);

fieldValue& fieldValue209 =  fieldValue();
fieldValue209.setName(CString("textString"));
fieldValue209.setValue(CString("\"pdelta=\""));
ProtoInstance205.addChild(&fieldValue209);

fieldValue& fieldValue210 =  fieldValue();
fieldValue210.setName(CString("parameterScale"));
fieldValue210.setValue(CString("6.28"));
ProtoInstance205.addChild(&fieldValue210);

fieldValue& fieldValue211 =  fieldValue();
fieldValue211.setName(CString("parameterName"));
fieldValue211.setValue(CString("pdelta"));
ProtoInstance205.addChild(&fieldValue211);

fieldValue& fieldValue212 =  fieldValue();
fieldValue212.setName(CString("petNames"));
fieldValue212.setValue(CString("\"yottzumm2\" \"group1-petname\""));
ProtoInstance205.addChild(&fieldValue212);

fieldValue& fieldValue213 =  fieldValue();
fieldValue213.setName(CString("shaderNode"));
ComposedShader& ComposedShader214 =  ComposedShader();
ComposedShader214.setUSE(CString("x_iteShader"));
fieldValue213.addChild(&ComposedShader214);

ProtoInstance205.addChild(&fieldValue213);

LayoutLayer95.addChild(&ProtoInstance205);

LayerSet17.addChild(&LayoutLayer95);

Layer& Layer215 =  Layer();
Layer215.setPickable(true);
Layer215.setObjectType(new CString[]{CString("ALL")}, 1);
Viewpoint& Viewpoint216 =  Viewpoint();
Viewpoint216.setDescription(CString("My Humanoids"));
Viewpoint216.setFieldOfView(1.570796);
Viewpoint216.setPosition(new float[]{0.0,1.75,80.0});
Layer215.addChild(&Viewpoint216);

Script& Script217 =  Script();
Script217.setUrl(new CString[]{CString("../javascripts/X3DAvatar.js"), CString("https://raw.githubusercontent.com/coderextreme/JSONverse/refs/heads/main/public/javascripts/X3DAvatar.js")}, 2);
Script217.setDEF(CString("HumanoidScript"));
Script217.setDirectOutput(true);
Script217.setMustEvaluate(true);
Layer215.addChild(&Script217);

Group& Group218 =  Group();
Group218.setDEF(CString("humanoidGroup"));
Group& Group219 =  Group();
Group218.addChild(&Group219);

Layer215.addChild(&Group218);

LayerSet17.addChild(&Layer215);

Scene16.addChild(&LayerSet17);

X3D0.setScene(&Scene16);

//}
