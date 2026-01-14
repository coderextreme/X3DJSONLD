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
meta3.setContent(CString("HAnimModelsHandsFeet.x3d"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("description"));
meta4.setContent(CString("Left and right hands and feet, using high-fidelity definitions for HAnim version 2.0"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("creator"));
meta5.setContent(CString("Kwan Hee YOO and Don Brutzman"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("created"));
meta6.setContent(CString("8 February 2015"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("modified"));
meta7.setContent(CString("Mon, 15 Sep 2025 05:20:09 GMT"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(CString("warning"));
meta8.setContent(CString("not yet to scale"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(CString("warning"));
meta9.setContent(CString("TODO will X3D HAnim component add a new level to support LOA-4 functionality?"));
head1.addMeta(&meta9);

meta& meta10 =  meta();
meta10.setName(CString("TODO"));
meta10.setContent(CString("how to have HAnimHumanoid root with Inline IMPORT/EXPORT of limbs?"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(CString("Image"));
meta11.setContent(CString("HAnimModelsHandsFeet.png"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(CString("Image"));
meta12.setContent(CString("HAnimModelsHandsFeetWithFour1mGrids.png"));
head1.addMeta(&meta12);

meta& meta13 =  meta();
meta13.setName(CString("reference"));
meta13.setContent(CString("https://www.web3d.org/working-groups/humanoid-animation-HAnim"));
head1.addMeta(&meta13);

meta& meta14 =  meta();
meta14.setName(CString("reference"));
meta14.setContent(CString("https://www.web3d.org/documents/specifications/19774/V2.0"));
head1.addMeta(&meta14);

meta& meta15 =  meta();
meta15.setName(CString("reference"));
meta15.setContent(CString("https://www.web3d.org/specifications/X3Dv4/ISO-IEC19775-1v4-IS/Part01/components/hanim.html"));
head1.addMeta(&meta15);

meta& meta16 =  meta();
meta16.setName(CString("subject"));
meta16.setContent(CString("X3D HAnim humanoid animation"));
head1.addMeta(&meta16);

meta& meta17 =  meta();
meta17.setName(CString("identifier"));
meta17.setContent(CString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelsHandsFeet.x3d"));
head1.addMeta(&meta17);

X3D0.setHead(&head1);

Scene& Scene18 =  Scene();
WorldInfo& WorldInfo19 =  WorldInfo();
WorldInfo19.setTitle(CString("HAnimModelsHandsFeet.x3d"));
Scene18.addChild(&WorldInfo19);

Viewpoint& Viewpoint20 =  Viewpoint();
Viewpoint20.setDescription(CString("Hands and feet 10m"));
Scene18.addChild(&Viewpoint20);

Viewpoint& Viewpoint21 =  Viewpoint();
Viewpoint21.setDescription(CString("Hands and feet 1.7m"));
Viewpoint21.setPosition(new float[]{0.0,0.0,1.7});
Scene18.addChild(&Viewpoint21);

Transform& Transform22 =  Transform();
Transform22.setTranslation(new float[]{-1.0,1.0,0.0});
Inline& Inline23 =  Inline();
Inline23.setUrl(new CString[]{CString("HAnimModelHandLeft.x3d"), CString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandLeft.x3d"), CString("HAnimModelHandLeft.wrl"), CString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandLeft.wrl")}, 4);
Transform22.addChild(&Inline23);

Transform& Transform24 =  Transform();
Transform24.setDEF(CString("GridXY_20x20Fixed_AdjustScale"));
Transform24.setScale(new float[]{0.1,0.1,0.1});
Inline& Inline25 =  Inline();
Inline25.setDEF(CString("GridXY_20x20Fixed"));
Inline25.setUrl(new CString[]{CString("../../Savage/Tools/Authoring/GridXY_20x20Fixed.x3d"), CString("https://savage.nps.edu/Savage/Tools/Authoring/GridXY_20x20Fixed.x3d"), CString("../../Savage/Tools/Authoring/GridXY_20x20Fixed.wrl"), CString("https://savage.nps.edu/Savage/Tools/Authoring/GridXY_20x20Fixed.wrl")}, 4);
Transform24.addChild(&Inline25);

Transform22.addChild(&Transform24);

Scene18.addChild(&Transform22);

Transform& Transform26 =  Transform();
Transform26.setTranslation(new float[]{1.0,1.0,0.0});
Inline& Inline27 =  Inline();
Inline27.setUrl(new CString[]{CString("HAnimModelHandRight.x3d"), CString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandRight.x3d"), CString("HAnimModelHandRight.wrl"), CString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandRight.wrl")}, 4);
Transform26.addChild(&Inline27);

Transform& Transform28 =  Transform();
Transform28.setUSE(CString("GridXY_20x20Fixed_AdjustScale"));
Transform26.addChild(&Transform28);

Scene18.addChild(&Transform26);

Transform& Transform29 =  Transform();
Transform29.setTranslation(new float[]{-1.0,-1.0,0.0});
Inline& Inline30 =  Inline();
Inline30.setUrl(new CString[]{CString("HAnimModelFootLeft.x3d"), CString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootLeft.x3d"), CString("HAnimModelFootLeft.wrl"), CString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootLeft.wrl")}, 4);
Transform29.addChild(&Inline30);

Transform& Transform31 =  Transform();
Transform31.setUSE(CString("GridXY_20x20Fixed_AdjustScale"));
Transform29.addChild(&Transform31);

Scene18.addChild(&Transform29);

Transform& Transform32 =  Transform();
Transform32.setTranslation(new float[]{1.0,-1.0,0.0});
Inline& Inline33 =  Inline();
Inline33.setUrl(new CString[]{CString("HAnimModelFootRight.x3d"), CString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootRight.x3d"), CString("HAnimModelFootRight.wrl"), CString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootRight.wrl")}, 4);
Transform32.addChild(&Inline33);

Transform& Transform34 =  Transform();
Transform34.setUSE(CString("GridXY_20x20Fixed_AdjustScale"));
Transform32.addChild(&Transform34);

Scene18.addChild(&Transform32);

X3D0.setScene(&Scene18);

//}
