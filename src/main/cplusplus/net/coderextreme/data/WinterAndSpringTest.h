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
component& component2 =  component();
component2.setName(CString("HAnim"));
component2.setLevel(1);
head1.addChild(&component2);

meta& meta3 =  meta();
meta3.setName(CString("title"));
meta3.setContent(CString("WinterAndSpringTest.x3d"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("description"));
meta4.setContent(CString("3D Male Scan combined with JoeKick, 3 Korean characters Ru,Mi,Min from HAnim, CCBYSA music plus designs from Rhino. MaleScan modified in Cinema4D for articulation and translations, geometric values from Rhino, txt file for centers. Models vary. HAnim version 2 LOA-3 Humanoids with textured skin, 3 Korean characters, plus scan. Math for lines and intersections."));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("creator"));
meta5.setContent(CString("Carol McDonald, Katy Schildmeyer, Joe D. Williams and Don Brutzman"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("created"));
meta6.setContent(CString("1 May 2023"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("modified"));
meta7.setContent(CString("Mon, 15 Sep 2025 05:21:02 GMT"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(CString("reference"));
meta8.setContent(CString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/KoreanCharacter09Ru.x3d"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(CString("reference"));
meta9.setContent(CString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/KoreanCharacter10Mi.x3d"));
head1.addMeta(&meta9);

meta& meta10 =  meta();
meta10.setName(CString("reference"));
meta10.setContent(CString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/KoreanCharacter11Min.x3d"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(CString("identifier"));
meta11.setContent(CString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/WinterAndSpringTest.x3d"));
head1.addMeta(&meta11);

X3D0.setHead(&head1);

Scene& Scene12 =  Scene();
WorldInfo& WorldInfo13 =  WorldInfo();
WorldInfo13.setTitle(CString("X3D HANIM LOA3 (modified) Skeleton, Lots points Skin, texcoords, Displacer, translations"));
WorldInfo13.setInfo(new CString[]{CString("X3D Humanoid LOA3 skeleton plus others"), CString("Lots points")}, 2);
Scene12.addChild(&WorldInfo13);

NavigationInfo& NavigationInfo14 =  NavigationInfo();
NavigationInfo14.setDEF(CString("Start_NavigationInfo"));
Scene12.addChild(&NavigationInfo14);

Viewpoint& Viewpoint15 =  Viewpoint();
Viewpoint15.setDescription(CString("Male"));
Viewpoint15.setPosition(new float[]{0.0,1.0,-2.0});
Viewpoint15.setCenterOfRotation(new float[]{0.0,1.0,0.0});
Scene12.addChild(&Viewpoint15);

Background& Background16 =  Background();
Background16.setDEF(CString("gray_Background"));
Scene12.addChild(&Background16);

Background& Background17 =  Background();
Background17.setDEF(CString("dark_gray_Background"));
Scene12.addChild(&Background17);

Background& Background18 =  Background();
Background18.setDEF(CString("black_Background"));
Scene12.addChild(&Background18);

Background& Background19 =  Background();
Background19.setDEF(CString("blue_Background"));
Scene12.addChild(&Background19);

SpotLight& SpotLight20 =  SpotLight();
SpotLight20.setDEF(CString("light1"));
SpotLight20.setColor(new float[]{0.8,0.8,1.0});
SpotLight20.setAmbientIntensity(0.7);
SpotLight20.setLocation(new float[]{0.0,3.0,3.0});
SpotLight20.setDirection(new float[]{0.0,0.0,0.0});
SpotLight20.setRadius(10);
SpotLight20.setBeamWidth(1.5);
SpotLight20.setCutOffAngle(0.6);
Scene12.addChild(&SpotLight20);

PointLight& PointLight21 =  PointLight();
PointLight21.setDEF(CString("light2"));
PointLight21.setColor(new float[]{0.8,0.8,1.0});
PointLight21.setAmbientIntensity(0.7);
PointLight21.setLocation(new float[]{0.0,10.0,-7.0});
Scene12.addChild(&PointLight21);

Viewpoint& Viewpoint22 =  Viewpoint();
Viewpoint22.setDEF(CString("Scene_InclinedView"));
Viewpoint22.setDescription(CString("Scene_Inclined View"));
Viewpoint22.setPosition(new float[]{1.62,1.05,3.06});
Viewpoint22.setOrientation(new float[]{-0.113,0.993,0.0347,0.671});
Viewpoint22.setCenterOfRotation(new float[]{0.0,0.85,0.0});
Scene12.addChild(&Viewpoint22);

Viewpoint& Viewpoint23 =  Viewpoint();
Viewpoint23.setDEF(CString("Scene_IFrontView"));
Viewpoint23.setDescription(CString("Scene_Front View"));
Viewpoint23.setPosition(new float[]{0.0,0.8,2.58});
Viewpoint23.setCenterOfRotation(new float[]{0.0,0.8,0.0});
Scene12.addChild(&Viewpoint23);

Viewpoint& Viewpoint24 =  Viewpoint();
Viewpoint24.setDEF(CString("Scene_OldMan_ISideView"));
Viewpoint24.setDescription(CString("Scene_Side View"));
Viewpoint24.setPosition(new float[]{-2.6,1.5,1.0});
Viewpoint24.setOrientation(new float[]{0.0,1.0,0.0,1.5708});
Viewpoint24.setCenterOfRotation(new float[]{0.0,0.8,0.0});
Scene12.addChild(&Viewpoint24);

Viewpoint& Viewpoint25 =  Viewpoint();
Viewpoint25.setDEF(CString("Scene_ISideView"));
Viewpoint25.setDescription(CString("Scene_Side View"));
Viewpoint25.setPosition(new float[]{-5.0,1.5,1.0});
Viewpoint25.setOrientation(new float[]{0.0,1.0,0.0,1.5708});
Viewpoint25.setCenterOfRotation(new float[]{0.0,0.8,0.0});
Scene12.addChild(&Viewpoint25);

Viewpoint& Viewpoint26 =  Viewpoint();
Viewpoint26.setDEF(CString("Scene_Full_ISideView"));
Viewpoint26.setDescription(CString("Scene_Side View"));
Viewpoint26.setPosition(new float[]{-10.0,1.5,1.0});
Viewpoint26.setOrientation(new float[]{0.0,1.0,0.0,1.5708});
Viewpoint26.setCenterOfRotation(new float[]{0.0,0.8,0.0});
Scene12.addChild(&Viewpoint26);

Viewpoint& Viewpoint27 =  Viewpoint();
Viewpoint27.setDEF(CString("Scene_OneBush_ISideView"));
Viewpoint27.setDescription(CString("Scene_Side View"));
Viewpoint27.setPosition(new float[]{-20.0,1.5,1.0});
Viewpoint27.setOrientation(new float[]{0.0,1.0,0.0,1.5708});
Viewpoint27.setCenterOfRotation(new float[]{0.0,0.8,0.0});
Scene12.addChild(&Viewpoint27);

Viewpoint& Viewpoint28 =  Viewpoint();
Viewpoint28.setDEF(CString("Scene_TwoBush_ISideView"));
Viewpoint28.setDescription(CString("Scene_Side View"));
Viewpoint28.setPosition(new float[]{-10.0,1.5,1.0});
Viewpoint28.setOrientation(new float[]{0.0,1.0,0.0,1.5708});
Viewpoint28.setCenterOfRotation(new float[]{0.0,0.8,0.0});
Scene12.addChild(&Viewpoint28);

Viewpoint& Viewpoint29 =  Viewpoint();
Viewpoint29.setDEF(CString("Scene_BackView"));
Viewpoint29.setDescription(CString("Scene_Back View"));
Viewpoint29.setPosition(new float[]{0.0,1.5,-5.0});
Viewpoint29.setOrientation(new float[]{0.0,1.0,0.0,3.14});
Viewpoint29.setCenterOfRotation(new float[]{0.0,1.5,0.0});
Scene12.addChild(&Viewpoint29);

Viewpoint& Viewpoint30 =  Viewpoint();
Viewpoint30.setDEF(CString("Scene_OldMan_BackView"));
Viewpoint30.setDescription(CString("Scene_Back View"));
Viewpoint30.setPosition(new float[]{0.0,1.5,-2.5});
Viewpoint30.setOrientation(new float[]{0.0,1.0,0.0,3.14});
Viewpoint30.setCenterOfRotation(new float[]{0.0,1.5,0.0});
Scene12.addChild(&Viewpoint30);

Viewpoint& Viewpoint31 =  Viewpoint();
Viewpoint31.setDEF(CString("Scene_Full_BackView"));
Viewpoint31.setDescription(CString("Scene_Back View"));
Viewpoint31.setPosition(new float[]{0.0,1.5,-20.0});
Viewpoint31.setOrientation(new float[]{0.0,1.0,15.0,3.14});
Viewpoint31.setCenterOfRotation(new float[]{0.0,1.5,0.0});
Scene12.addChild(&Viewpoint31);

Viewpoint& Viewpoint32 =  Viewpoint();
Viewpoint32.setDEF(CString("Scene_TopView"));
Viewpoint32.setDescription(CString("Scene_Top View"));
Viewpoint32.setPosition(new float[]{0.0,3.5,0.0});
Viewpoint32.setOrientation(new float[]{1.0,0.0,0.0,-1.5708});
Viewpoint32.setCenterOfRotation(new float[]{0.0,1.5,0.0});
Scene12.addChild(&Viewpoint32);

Group& Group33 =  Group();
Group33.setDEF(CString("OldMan_Humanoid"));
HAnimHumanoid& HAnimHumanoid34 =  HAnimHumanoid();
HAnimHumanoid34.setDEF(CString("OldMan"));
HAnimHumanoid34.X3DNode::setName(CString("Walk"));
HAnimHumanoid34.setLoa(3);
MetadataSet& MetadataSet35 =  MetadataSet();
MetadataSet35.X3DNode::setName(CString("warnings"));
MetadataSet35.X3DNode::setReference(CString("HAnim"));
MetadataString& MetadataString36 =  MetadataString();
MetadataString36.X3DNode::setName(CString("SymmetricalLeftRight"));
MetadataString36.X3DNode::setReference(CString("correction options: ignore, warn, average, left, right, largest, smallest"));
MetadataString36.setValue(new CString[]{CString("ignore")}, 1);
MetadataSet35.setValue((X3DNode *)&MetadataString36);

HAnimHumanoid34.setMetadata(&MetadataSet35);

HAnimJoint& HAnimJoint37 =  HAnimJoint();
HAnimJoint37.setDEF(CString("OldMan_humanoid_root"));
HAnimJoint37.X3DNode::setName(CString("humanoid_root"));
HAnimSegment& HAnimSegment38 =  HAnimSegment();
HAnimSegment38.setDEF(CString("OldMan_sacrum"));
HAnimSegment38.X3DNode::setName(CString("sacrum"));
HAnimSite& HAnimSite39 =  HAnimSite();
HAnimSite39.setDEF(CString("OldMan_RootBack_view"));
HAnimSite39.X3DNode::setName(CString("RootBack_view"));
Transform& Transform40 =  Transform();
Transform40.setDEF(CString("hanimcordsys"));
Transform40.setScale(new float[]{0.175,0.175,0.175});
Viewpoint& Viewpoint41 =  Viewpoint();
Viewpoint41.setDEF(CString("ViewBodyRootAxes"));
Viewpoint41.setDescription(CString("Joe_HAnim Root HAnimSite Coordinate Axes View"));
Transform40.addChild(&Viewpoint41);

Shape& Shape42 =  Shape();
Shape42.setDEF(CString("AxisLinesShape"));
IndexedLineSet& IndexedLineSet43 =  IndexedLineSet();
IndexedLineSet43.setColorPerVertex(false);
IndexedLineSet43.setColorIndex(new int[]{0,1,2}, 3);
IndexedLineSet43.setCoordIndex(new int32_t[]{0,1,-1,0,2,-1,0,3,-1}, 9);
CColor& Color44 =  CColor();
Color44.setColor(new float[]{1.0,0.0,0.0,0.0,0.6,0.0,0.0,0.0,1.0}, 9);
IndexedLineSet43.setColor(&Color44);

Coordinate& Coordinate45 =  Coordinate();
Coordinate45.setPoint(new float[]{0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0}, 12);
IndexedLineSet43.setCoord(&Coordinate45);

Shape42.setGeometry(&IndexedLineSet43);

Transform40.addChild(&Shape42);

Shape& Shape46 =  Shape();
Shape46.setDEF(CString("OldMan_Shape"));
Appearance& Appearance47 =  Appearance();
Appearance47.setDEF(CString("OldMan_skin_Appearance"));
Material& Material48 =  Material();
Material48.setDEF(CString("OldMan_skin_Material"));
Material48.setDiffuseColor(new float[]{0.3,0.3,0.6});
Material48.setEmissiveColor(new float[]{0.3,0.3,0.6});
Appearance47.addChild(&Material48);

ImageTexture& ImageTexture49 =  ImageTexture();
ImageTexture49.setDEF(CString("OldManSkinImageTexture"));
ImageTexture49.setUrl(new CString[]{CString("OldManBodyTexture29.png"), CString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/JoeBodyTexture29.png")}, 2);
Appearance47.addChild(&ImageTexture49);

TextureTransform& TextureTransform50 =  TextureTransform();
TextureTransform50.setDEF(CString("KickTextureTransform"));
Appearance47.setTextureTransform(TextureTransform50);

Shape46.addChild(&Appearance47);

IndexedFaceSet& IndexedFaceSet51 =  IndexedFaceSet();
IndexedFaceSet51.setDEF(CString("OldMan_skin_IndexedFaceSet"));
Shape46.setGeometry(&IndexedFaceSet51);

Transform40.addChild(&Shape46);

HAnimSite39.addChild(&Transform40);

HAnimSegment38.addChild(&HAnimSite39);

HAnimJoint37.addChildren(&HAnimSegment38);

HAnimJoint& HAnimJoint52 =  HAnimJoint();
HAnimJoint52.setDEF(CString("OldMan_sacroiliac"));
HAnimJoint52.X3DNode::setName(CString("sacroiliac"));
HAnimJoint& HAnimJoint53 =  HAnimJoint();
HAnimJoint53.setDEF(CString("OldMan_l_hip"));
HAnimJoint53.X3DNode::setName(CString("l_hip"));
HAnimJoint& HAnimJoint54 =  HAnimJoint();
HAnimJoint54.setDEF(CString("OldMan_l_knee"));
HAnimJoint54.X3DNode::setName(CString("l_knee"));
HAnimJoint& HAnimJoint55 =  HAnimJoint();
HAnimJoint55.setDEF(CString("OldMan_l_talocrural"));
HAnimJoint55.X3DNode::setName(CString("l_talocrural"));
HAnimJoint& HAnimJoint56 =  HAnimJoint();
HAnimJoint56.setDEF(CString("Joe_l_tarsometatarsal_2"));
HAnimJoint56.X3DNode::setName(CString("l_tarsometatarsal_2"));
HAnimJoint& HAnimJoint57 =  HAnimJoint();
HAnimJoint57.setDEF(CString("Joe_l_metatarsophalangeal_2"));
HAnimJoint57.X3DNode::setName(CString("l_metatarsophalangeal_2"));
HAnimJoint& HAnimJoint58 =  HAnimJoint();
HAnimJoint58.setDEF(CString("Joe_l_tarsal_distal_interphalangeal_2"));
HAnimJoint58.X3DNode::setName(CString("l_tarsal_distal_interphalangeal_2"));
HAnimJoint58.setCenter(new float[]{0.115,0.02,0.122});
HAnimJoint57.addChildren(&HAnimJoint58);

HAnimJoint56.addChildren(&HAnimJoint57);

HAnimJoint55.addChildren(&HAnimJoint56);

HAnimJoint54.addChildren(&HAnimJoint55);

HAnimJoint53.addChildren(&HAnimJoint54);

HAnimJoint& HAnimJoint59 =  HAnimJoint();
HAnimJoint59.setDEF(CString("OldMan_r_hip"));
HAnimJoint59.X3DNode::setName(CString("l_hip"));
HAnimJoint& HAnimJoint60 =  HAnimJoint();
HAnimJoint60.setDEF(CString("OldMan_r_knee"));
HAnimJoint60.X3DNode::setName(CString("l_knee"));
HAnimJoint59.addChildren(&HAnimJoint60);

HAnimJoint& HAnimJoint61 =  HAnimJoint();
HAnimJoint61.setDEF(CString("OldMan_r_talocrural"));
HAnimJoint61.X3DNode::setName(CString("l_talocrural"));
HAnimJoint& HAnimJoint62 =  HAnimJoint();
HAnimJoint62.setDEF(CString("Joe_r_tarsometatarsal_2"));
HAnimJoint62.X3DNode::setName(CString("r_tarsometatarsal_2"));
HAnimJoint62.setCenter(new float[]{-0.1,0.015,-0.01});
HAnimJoint62.setSkinCoordIndex(new int32_t[]{374,375,376}, 3);
HAnimJoint62.setSkinCoordWeight(new float[]{1.0,1.0,1.0}, 3);
HAnimJoint& HAnimJoint63 =  HAnimJoint();
HAnimJoint63.setDEF(CString("Joe_r_metatarsophalangeal_2"));
HAnimJoint63.X3DNode::setName(CString("r_metatarsophalangeal_2"));
HAnimJoint63.setCenter(new float[]{-0.115,0.037,0.09});
HAnimJoint63.setSkinCoordIndex(new int32_t[]{377,378,379,380}, 4);
HAnimJoint63.setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
HAnimJoint& HAnimJoint64 =  HAnimJoint();
HAnimJoint64.setDEF(CString("Joe_r_tarsal_distal_interphalangeal_2"));
HAnimJoint64.X3DNode::setName(CString("r_tarsal_distal_interphalangeal_2"));
HAnimJoint64.setCenter(new float[]{-0.1,0.01,0.14});
HAnimJoint64.setSkinCoordIndex(new int32_t[]{381,382,383,384,385,386,387,388,389}, 9);
HAnimJoint64.setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
HAnimJoint63.addChildren(&HAnimJoint64);

HAnimJoint62.addChildren(&HAnimJoint63);

HAnimJoint61.addChildren(&HAnimJoint62);

HAnimJoint59.addChildren(&HAnimJoint61);

HAnimJoint53.addChildren(&HAnimJoint59);

HAnimJoint52.addChildren(&HAnimJoint53);

HAnimJoint& HAnimJoint65 =  HAnimJoint();
HAnimJoint65.setDEF(CString("OldMan_vl5"));
HAnimJoint65.X3DNode::setName(CString("vl5"));
HAnimJoint& HAnimJoint66 =  HAnimJoint();
HAnimJoint66.setDEF(CString("MeshName_vl4"));
HAnimJoint66.X3DNode::setName(CString("vl4"));
HAnimJoint& HAnimJoint67 =  HAnimJoint();
HAnimJoint67.setDEF(CString("OldMan_vl3"));
HAnimJoint67.X3DNode::setName(CString("vl3"));
HAnimJoint& HAnimJoint68 =  HAnimJoint();
HAnimJoint68.setDEF(CString("MeshName_vl2"));
HAnimJoint68.X3DNode::setName(CString("vl2"));
HAnimJoint& HAnimJoint69 =  HAnimJoint();
HAnimJoint69.setDEF(CString("OldMan_vl1"));
HAnimJoint69.X3DNode::setName(CString("vl1"));
HAnimJoint& HAnimJoint70 =  HAnimJoint();
HAnimJoint70.setDEF(CString("MeshName_vt12"));
HAnimJoint70.X3DNode::setName(CString("vt12"));
HAnimJoint& HAnimJoint71 =  HAnimJoint();
HAnimJoint71.setDEF(CString("OldMan_vt11"));
HAnimJoint71.X3DNode::setName(CString("vt11"));
HAnimJoint& HAnimJoint72 =  HAnimJoint();
HAnimJoint72.setDEF(CString("MeshName_vt10"));
HAnimJoint72.X3DNode::setName(CString("vt10"));
HAnimJoint& HAnimJoint73 =  HAnimJoint();
HAnimJoint73.setDEF(CString("MeshName_vt9"));
HAnimJoint73.X3DNode::setName(CString("vt9"));
HAnimJoint& HAnimJoint74 =  HAnimJoint();
HAnimJoint74.setDEF(CString("MeshName_vt8"));
HAnimJoint74.X3DNode::setName(CString("vt8"));
HAnimJoint& HAnimJoint75 =  HAnimJoint();
HAnimJoint75.setDEF(CString("OldMan_vt7"));
HAnimJoint75.X3DNode::setName(CString("vt7"));
HAnimJoint& HAnimJoint76 =  HAnimJoint();
HAnimJoint76.setDEF(CString("MeshName_vt6"));
HAnimJoint76.X3DNode::setName(CString("vt6"));
HAnimJoint& HAnimJoint77 =  HAnimJoint();
HAnimJoint77.setDEF(CString("MeshName_vt5"));
HAnimJoint77.X3DNode::setName(CString("vt5"));
HAnimJoint& HAnimJoint78 =  HAnimJoint();
HAnimJoint78.setDEF(CString("OldMan_vt4"));
HAnimJoint78.X3DNode::setName(CString("vt4"));
HAnimJoint& HAnimJoint79 =  HAnimJoint();
HAnimJoint79.setDEF(CString("MeshName_vt3"));
HAnimJoint79.X3DNode::setName(CString("vt3"));
HAnimJoint& HAnimJoint80 =  HAnimJoint();
HAnimJoint80.setDEF(CString("OldMan_vt2"));
HAnimJoint80.X3DNode::setName(CString("vt2"));
HAnimJoint& HAnimJoint81 =  HAnimJoint();
HAnimJoint81.setDEF(CString("MeshName_vt1"));
HAnimJoint81.X3DNode::setName(CString("vt1"));
HAnimJoint& HAnimJoint82 =  HAnimJoint();
HAnimJoint82.setDEF(CString("OldMan_vc7"));
HAnimJoint82.X3DNode::setName(CString("vc7"));
HAnimJoint& HAnimJoint83 =  HAnimJoint();
HAnimJoint83.setDEF(CString("MeshName_vc6"));
HAnimJoint83.X3DNode::setName(CString("vc6"));
HAnimJoint& HAnimJoint84 =  HAnimJoint();
HAnimJoint84.setDEF(CString("MeshName_vc5"));
HAnimJoint84.X3DNode::setName(CString("vc5"));
HAnimJoint& HAnimJoint85 =  HAnimJoint();
HAnimJoint85.setDEF(CString("OldMan_vc4"));
HAnimJoint85.X3DNode::setName(CString("vc4"));
HAnimJoint& HAnimJoint86 =  HAnimJoint();
HAnimJoint86.setDEF(CString("MeshName_vc3"));
HAnimJoint86.X3DNode::setName(CString("vc3"));
HAnimJoint& HAnimJoint87 =  HAnimJoint();
HAnimJoint87.setDEF(CString("MeshName_vc2"));
HAnimJoint87.X3DNode::setName(CString("vc2"));
HAnimJoint& HAnimJoint88 =  HAnimJoint();
HAnimJoint88.setDEF(CString("OldMan_vc1"));
HAnimJoint88.X3DNode::setName(CString("vc1"));
HAnimJoint& HAnimJoint89 =  HAnimJoint();
HAnimJoint89.setDEF(CString("OldMan_skullbase"));
HAnimJoint89.X3DNode::setName(CString("skullbase"));
HAnimDisplacer& HAnimDisplacer90 =  HAnimDisplacer();
HAnimDisplacer90.setDEF(CString("Joe_skull_tip_raiser_action"));
HAnimDisplacer90.X3DNode::setName(CString("skull_tip_raiser_action"));
HAnimDisplacer90.setCoordIndex(new int32_t[]{0,1,2,3,4,5,6,7,8,9}, 10);
HAnimDisplacer90.setDisplacements(new float[]{0.0,0.15,0.0,0.0,0.0,0.15,-0.1,0.0,0.15,0.1,0.0,0.05,0.0,-0.02,0.05,-0.15,0.0,0.0,-0.05,0.0,0.0,0.15,0.0,0.0,0.05,0.0,0.0,0.0,0.0,-0.15}, 30);
HAnimJoint89.setDisplacers(HAnimDisplacer90);

HAnimJoint& HAnimJoint91 =  HAnimJoint();
HAnimJoint91.setDEF(CString("OldMan_l_eyelid_joint"));
HAnimJoint91.X3DNode::setName(CString("l_eyelid_joint"));
HAnimJoint89.addChildren(&HAnimJoint91);

HAnimJoint& HAnimJoint92 =  HAnimJoint();
HAnimJoint92.setDEF(CString("OldMan_l_eyeball_joint"));
HAnimJoint92.X3DNode::setName(CString("l_eyeball_joint"));
HAnimJoint89.addChildren(&HAnimJoint92);

HAnimJoint& HAnimJoint93 =  HAnimJoint();
HAnimJoint93.setDEF(CString("OldMan_l_eyebrow_joint"));
HAnimJoint93.X3DNode::setName(CString("l_eyebrow_joint"));
HAnimJoint89.addChildren(&HAnimJoint93);

HAnimJoint& HAnimJoint94 =  HAnimJoint();
HAnimJoint94.setDEF(CString("OldMan_r_eyelid_joint"));
HAnimJoint94.X3DNode::setName(CString("r_eyelid_joint"));
HAnimJoint89.addChildren(&HAnimJoint94);

HAnimJoint& HAnimJoint95 =  HAnimJoint();
HAnimJoint95.setDEF(CString("OldMan_r_eyeball_joint"));
HAnimJoint95.X3DNode::setName(CString("r_eyeball_joint"));
HAnimJoint89.addChildren(&HAnimJoint95);

HAnimJoint& HAnimJoint96 =  HAnimJoint();
HAnimJoint96.setDEF(CString("OldMan_r_eyebrow_joint"));
HAnimJoint96.X3DNode::setName(CString("r_eyebrow_joint"));
HAnimJoint89.addChildren(&HAnimJoint96);

HAnimJoint& HAnimJoint97 =  HAnimJoint();
HAnimJoint97.setDEF(CString("OldMan_temporomandibular"));
HAnimJoint97.X3DNode::setName(CString("temporomandibular"));
HAnimJoint89.addChildren(&HAnimJoint97);

HAnimJoint88.addChildren(&HAnimJoint89);

HAnimJoint87.addChildren(&HAnimJoint88);

HAnimJoint86.addChildren(&HAnimJoint87);

HAnimJoint85.addChildren(&HAnimJoint86);

HAnimJoint84.addChildren(&HAnimJoint85);

HAnimJoint83.addChildren(&HAnimJoint84);

HAnimJoint82.addChildren(&HAnimJoint83);

HAnimJoint81.addChildren(&HAnimJoint82);

HAnimJoint& HAnimJoint98 =  HAnimJoint();
HAnimJoint98.setDEF(CString("OldMan_l_acromioclavicular"));
HAnimJoint98.X3DNode::setName(CString("l_acromioclavicular"));
HAnimJoint& HAnimJoint99 =  HAnimJoint();
HAnimJoint99.setDEF(CString("OldMan_l_sternoclavicular"));
HAnimJoint99.X3DNode::setName(CString("l_sternoclavicular"));
HAnimJoint& HAnimJoint100 =  HAnimJoint();
HAnimJoint100.setDEF(CString("OldMan_l_shoulder"));
HAnimJoint100.X3DNode::setName(CString("l_shoulder"));
HAnimJoint& HAnimJoint101 =  HAnimJoint();
HAnimJoint101.setDEF(CString("OldMan_l_elbow"));
HAnimJoint101.X3DNode::setName(CString("l_elbow"));
HAnimJoint& HAnimJoint102 =  HAnimJoint();
HAnimJoint102.setDEF(CString("OldMan_l_radiocarpal"));
HAnimJoint102.X3DNode::setName(CString("l_radiocarpal"));
HAnimJoint& HAnimJoint103 =  HAnimJoint();
HAnimJoint103.setDEF(CString("OldMan_l_carpometacarpal_1"));
HAnimJoint103.X3DNode::setName(CString("l_carpometacarpal_1"));
HAnimJoint& HAnimJoint104 =  HAnimJoint();
HAnimJoint104.setDEF(CString("OldMan_l_metacarpophalangeal_1"));
HAnimJoint104.X3DNode::setName(CString("l_metacarpophalangeal_1"));
HAnimJoint& HAnimJoint105 =  HAnimJoint();
HAnimJoint105.setDEF(CString("OldMan_l_carpal_interphalangeal_1"));
HAnimJoint105.X3DNode::setName(CString("l_carpal_interphalangeal_1"));
HAnimJoint104.addChildren(&HAnimJoint105);

HAnimJoint103.addChildren(&HAnimJoint104);

HAnimJoint& HAnimJoint106 =  HAnimJoint();
HAnimJoint106.setDEF(CString("OldMan_l_carpometacarpal_2"));
HAnimJoint106.X3DNode::setName(CString("l_carpometacarpal_2"));
HAnimJoint& HAnimJoint107 =  HAnimJoint();
HAnimJoint107.setDEF(CString("OldMan_l_metacarpophalangeal_2"));
HAnimJoint107.X3DNode::setName(CString("l_metacarpophalangeal_2"));
HAnimJoint& HAnimJoint108 =  HAnimJoint();
HAnimJoint108.setDEF(CString("OldMan_l_carpal_proximal_interphalangeal_2"));
HAnimJoint108.X3DNode::setName(CString("l_carpal_proximal_interphalangeal_2"));
HAnimJoint& HAnimJoint109 =  HAnimJoint();
HAnimJoint109.setDEF(CString("OldMan_l_carpal_distal_interphalangeal_2"));
HAnimJoint109.X3DNode::setName(CString("l_carpal_distal_interphalangeal_2"));
HAnimJoint108.addChildren(&HAnimJoint109);

HAnimJoint107.addChildren(&HAnimJoint108);

HAnimJoint106.addChildren(&HAnimJoint107);

HAnimJoint& HAnimJoint110 =  HAnimJoint();
HAnimJoint110.setDEF(CString("OldMan_l_carpometacarpal_3"));
HAnimJoint110.X3DNode::setName(CString("l_carpometacarpal_3"));
HAnimJoint& HAnimJoint111 =  HAnimJoint();
HAnimJoint111.setDEF(CString("OldMan_l_metacarpophalangeal_3"));
HAnimJoint111.X3DNode::setName(CString("l_metacarpophalangeal_3"));
HAnimJoint& HAnimJoint112 =  HAnimJoint();
HAnimJoint112.setDEF(CString("OldMan_l_carpal_proximal_interphalangeal_3"));
HAnimJoint112.X3DNode::setName(CString("l_carpal_proximal_interphalangeal_3"));
HAnimJoint& HAnimJoint113 =  HAnimJoint();
HAnimJoint113.setDEF(CString("OldMan_l_carpal_distal_interphalangeal_3"));
HAnimJoint113.X3DNode::setName(CString("l_carpal_distal_interphalangeal_3"));
HAnimJoint112.addChildren(&HAnimJoint113);

HAnimJoint111.addChildren(&HAnimJoint112);

HAnimJoint110.addChildren(&HAnimJoint111);

HAnimJoint& HAnimJoint114 =  HAnimJoint();
HAnimJoint114.setDEF(CString("OldMan_l_carpometacarpal_4"));
HAnimJoint114.X3DNode::setName(CString("l_carpometacarpal_4"));
HAnimJoint& HAnimJoint115 =  HAnimJoint();
HAnimJoint115.setDEF(CString("OldMan_l_metacarpophalangeal_4"));
HAnimJoint115.X3DNode::setName(CString("l_metacarpophalangeal_4"));
HAnimJoint& HAnimJoint116 =  HAnimJoint();
HAnimJoint116.setDEF(CString("OldMan_l_carpal_proximal_interphalangeal_4"));
HAnimJoint116.X3DNode::setName(CString("l_carpal_proximal_interphalangeal_4"));
HAnimJoint& HAnimJoint117 =  HAnimJoint();
HAnimJoint117.setDEF(CString("OldMan_l_carpal_distal_interphalangeal_4"));
HAnimJoint117.X3DNode::setName(CString("l_carpal_distal_interphalangeal_4"));
HAnimJoint116.addChildren(&HAnimJoint117);

HAnimJoint115.addChildren(&HAnimJoint116);

HAnimJoint114.addChildren(&HAnimJoint115);

HAnimJoint& HAnimJoint118 =  HAnimJoint();
HAnimJoint118.setDEF(CString("OldMan_l_carpometacarpal_5"));
HAnimJoint118.X3DNode::setName(CString("l_carpometacarpal_5"));
HAnimJoint& HAnimJoint119 =  HAnimJoint();
HAnimJoint119.setDEF(CString("OldMan_l_metacarpophalangeal_5"));
HAnimJoint119.X3DNode::setName(CString("l_metacarpophalangeal_5"));
HAnimJoint& HAnimJoint120 =  HAnimJoint();
HAnimJoint120.setDEF(CString("OldMan_l_carpal_proximal_interphalangeal_5"));
HAnimJoint120.X3DNode::setName(CString("l_carpal_proximal_interphalangeal_5"));
HAnimJoint& HAnimJoint121 =  HAnimJoint();
HAnimJoint121.setDEF(CString("OldMan_l_carpal_distal_interphalangeal_5"));
HAnimJoint121.X3DNode::setName(CString("l_carpal_distal_interphalangeal_5"));
HAnimJoint120.addChildren(&HAnimJoint121);

HAnimJoint119.addChildren(&HAnimJoint120);

HAnimJoint118.addChildren(&HAnimJoint119);

HAnimJoint114.addChildren(&HAnimJoint118);

HAnimJoint110.addChildren(&HAnimJoint114);

HAnimJoint106.addChildren(&HAnimJoint110);

HAnimJoint103.addChildren(&HAnimJoint106);

HAnimJoint102.addChildren(&HAnimJoint103);

HAnimJoint& HAnimJoint122 =  HAnimJoint();
HAnimJoint122.setDEF(CString("OldMan_r_sternoclavicular"));
HAnimJoint122.X3DNode::setName(CString("r_sternoclavicular"));
HAnimJoint& HAnimJoint123 =  HAnimJoint();
HAnimJoint123.setDEF(CString("OldMan_r_acromioclavicular"));
HAnimJoint123.X3DNode::setName(CString("r_acromioclavicular"));
HAnimJoint& HAnimJoint124 =  HAnimJoint();
HAnimJoint124.setDEF(CString("OldMan_r_shoulder"));
HAnimJoint124.X3DNode::setName(CString("r_shoulder"));
HAnimJoint& HAnimJoint125 =  HAnimJoint();
HAnimJoint125.setDEF(CString("OldMan_r_elbow"));
HAnimJoint125.X3DNode::setName(CString("r_elbow"));
HAnimJoint& HAnimJoint126 =  HAnimJoint();
HAnimJoint126.setDEF(CString("OldMan_r_radiocarpal"));
HAnimJoint126.X3DNode::setName(CString("r_radiocarpal"));
HAnimJoint& HAnimJoint127 =  HAnimJoint();
HAnimJoint127.setDEF(CString("OldMan_r_carpometacarpal_1"));
HAnimJoint127.X3DNode::setName(CString("r_carpometacarpal_1"));
HAnimJoint& HAnimJoint128 =  HAnimJoint();
HAnimJoint128.setDEF(CString("OldMan_r_metacarpophalangeal_1"));
HAnimJoint128.X3DNode::setName(CString("r_metacarpophalangeal_1"));
HAnimJoint& HAnimJoint129 =  HAnimJoint();
HAnimJoint129.setDEF(CString("OldMan_r_carpal_interphalangeal_1"));
HAnimJoint129.X3DNode::setName(CString("r_carpal_interphalangeal_1"));
HAnimJoint128.addChildren(&HAnimJoint129);

HAnimJoint127.addChildren(&HAnimJoint128);

HAnimJoint& HAnimJoint130 =  HAnimJoint();
HAnimJoint130.setDEF(CString("OldMan_r_carpometacarpal_2"));
HAnimJoint130.X3DNode::setName(CString("r_carpometacarpal_2"));
HAnimJoint& HAnimJoint131 =  HAnimJoint();
HAnimJoint131.setDEF(CString("OldMan_r_metacarpophalangeal_2"));
HAnimJoint131.X3DNode::setName(CString("r_metacarpophalangeal_2"));
HAnimJoint& HAnimJoint132 =  HAnimJoint();
HAnimJoint132.setDEF(CString("OldMan_r_carpal_proximal_interphalangeal_2"));
HAnimJoint132.X3DNode::setName(CString("r_carpal_proximal_interphalangeal_2"));
HAnimJoint& HAnimJoint133 =  HAnimJoint();
HAnimJoint133.setDEF(CString("OldMan_r_carpal_distal_interphalangeal_2"));
HAnimJoint133.X3DNode::setName(CString("r_carpal_distal_interphalangeal_2"));
HAnimJoint132.addChildren(&HAnimJoint133);

HAnimJoint131.addChildren(&HAnimJoint132);

HAnimJoint130.addChildren(&HAnimJoint131);

HAnimJoint& HAnimJoint134 =  HAnimJoint();
HAnimJoint134.setDEF(CString("OldMan_r_carpometacarpal_3"));
HAnimJoint134.X3DNode::setName(CString("r_carpometacarpal_3"));
HAnimJoint& HAnimJoint135 =  HAnimJoint();
HAnimJoint135.setDEF(CString("OldMan_r_metacarpophalangeal_3"));
HAnimJoint135.X3DNode::setName(CString("r_metacarpophalangeal_3"));
HAnimJoint& HAnimJoint136 =  HAnimJoint();
HAnimJoint136.setDEF(CString("OldMan_r_carpal_proximal_interphalangeal_3"));
HAnimJoint136.X3DNode::setName(CString("r_carpal_proximal_interphalangeal_3"));
HAnimJoint& HAnimJoint137 =  HAnimJoint();
HAnimJoint137.setDEF(CString("OldMan_r_carpal_distal_interphalangeal_3"));
HAnimJoint137.X3DNode::setName(CString("r_carpal_distal_interphalangeal_3"));
HAnimJoint136.addChildren(&HAnimJoint137);

HAnimJoint135.addChildren(&HAnimJoint136);

HAnimJoint134.addChildren(&HAnimJoint135);

HAnimJoint& HAnimJoint138 =  HAnimJoint();
HAnimJoint138.setDEF(CString("OldMan_r_carpometacarpal_4"));
HAnimJoint138.X3DNode::setName(CString("r_carpometacarpal_4"));
HAnimJoint& HAnimJoint139 =  HAnimJoint();
HAnimJoint139.setDEF(CString("OldMan_r_metacarpophalangeal_4"));
HAnimJoint139.X3DNode::setName(CString("r_metacarpophalangeal_4"));
HAnimJoint& HAnimJoint140 =  HAnimJoint();
HAnimJoint140.setDEF(CString("OldMan_r_carpal_proximal_interphalangeal_4"));
HAnimJoint140.X3DNode::setName(CString("r_carpal_proximal_interphalangeal_4"));
HAnimJoint& HAnimJoint141 =  HAnimJoint();
HAnimJoint141.setDEF(CString("OldMan_r_carpal_distal_interphalangeal_4"));
HAnimJoint141.X3DNode::setName(CString("r_carpal_distal_interphalangeal_4"));
HAnimJoint140.addChildren(&HAnimJoint141);

HAnimJoint139.addChildren(&HAnimJoint140);

HAnimJoint138.addChildren(&HAnimJoint139);

HAnimJoint& HAnimJoint142 =  HAnimJoint();
HAnimJoint142.setDEF(CString("OldMan_r_carpometacarpal_5"));
HAnimJoint142.X3DNode::setName(CString("r_carpometacarpal_5"));
HAnimJoint& HAnimJoint143 =  HAnimJoint();
HAnimJoint143.setDEF(CString("OldMan_r_metacarpophalangeal_5"));
HAnimJoint143.X3DNode::setName(CString("r_metacarpophalangeal_5"));
HAnimJoint& HAnimJoint144 =  HAnimJoint();
HAnimJoint144.setDEF(CString("OldMan_r_carpal_proximal_interphalangeal_5"));
HAnimJoint144.X3DNode::setName(CString("r_carpal_proximal_interphalangeal_5"));
HAnimJoint& HAnimJoint145 =  HAnimJoint();
HAnimJoint145.setDEF(CString("OldMan_r_carpal_distal_interphalangeal_5"));
HAnimJoint145.X3DNode::setName(CString("r_carpal_distal_interphalangeal_5"));
HAnimJoint144.addChildren(&HAnimJoint145);

HAnimJoint143.addChildren(&HAnimJoint144);

HAnimJoint142.addChildren(&HAnimJoint143);

HAnimJoint138.addChildren(&HAnimJoint142);

HAnimJoint134.addChildren(&HAnimJoint138);

HAnimJoint130.addChildren(&HAnimJoint134);

HAnimJoint127.addChildren(&HAnimJoint130);

HAnimJoint126.addChildren(&HAnimJoint127);

HAnimJoint125.addChildren(&HAnimJoint126);

HAnimJoint124.addChildren(&HAnimJoint125);

HAnimJoint123.addChildren(&HAnimJoint124);

HAnimJoint122.addChildren(&HAnimJoint123);

HAnimJoint102.addChildren(&HAnimJoint122);

HAnimJoint101.addChildren(&HAnimJoint102);

HAnimJoint100.addChildren(&HAnimJoint101);

HAnimJoint99.addChildren(&HAnimJoint100);

HAnimJoint98.addChildren(&HAnimJoint99);

HAnimJoint81.addChildren(&HAnimJoint98);

HAnimJoint80.addChildren(&HAnimJoint81);

HAnimJoint79.addChildren(&HAnimJoint80);

HAnimJoint78.addChildren(&HAnimJoint79);

HAnimJoint77.addChildren(&HAnimJoint78);

HAnimJoint76.addChildren(&HAnimJoint77);

HAnimJoint75.addChildren(&HAnimJoint76);

HAnimJoint74.addChildren(&HAnimJoint75);

HAnimJoint73.addChildren(&HAnimJoint74);

HAnimJoint72.addChildren(&HAnimJoint73);

HAnimJoint71.addChildren(&HAnimJoint72);

HAnimJoint70.addChildren(&HAnimJoint71);

HAnimJoint69.addChildren(&HAnimJoint70);

HAnimJoint68.addChildren(&HAnimJoint69);

HAnimJoint67.addChildren(&HAnimJoint68);

HAnimJoint66.addChildren(&HAnimJoint67);

HAnimJoint65.addChildren(&HAnimJoint66);

HAnimJoint52.addChildren(&HAnimJoint65);

HAnimJoint37.addChildren(&HAnimJoint52);

HAnimHumanoid34.setSkeleton(&HAnimJoint37);

Group33.addChild(&HAnimHumanoid34);

Scene12.addChild(&Group33);

X3D0.setScene(&Scene12);

//}
