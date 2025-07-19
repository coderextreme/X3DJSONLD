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
meta2.setContent(CString("ArtDecoExamples.x3d"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(CString("description"));
meta3.setContent(CString("Example ExternProtoDeclare/ProtoInstance usage of X3D/VRML materials, originally converted from SGI's Open Inventor material examples."));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("creator"));
meta4.setContent(CString("David Roussel"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("translator"));
meta5.setContent(CString("James Harney, Don Brutzman NPS"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("created"));
meta6.setContent(CString("7 April 2002"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("modified"));
meta7.setContent(CString("19 January 2025"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(CString("reference"));
meta8.setContent(CString("http://vrmlstuff.free.fr/materials"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(CString("subject"));
meta9.setContent(CString("Universal Media Material Library"));
head1.addMeta(&meta9);

meta& meta10 =  meta();
meta10.setName(CString("identifier"));
meta10.setContent(CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoExamples.x3d"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(CString("generator"));
meta11.setContent(CString("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(CString("license"));
meta12.setContent(CString("../license.html"));
head1.addMeta(&meta12);

X3D0.setHead(&head1);

Scene& Scene13 =  Scene();
WorldInfo& WorldInfo14 =  WorldInfo();
WorldInfo14.setTitle(CString("ArtDecoExamples.x3d"));
Scene13.addChild(&WorldInfo14);

ExternProtoDeclare& ExternProtoDeclare15 =  ExternProtoDeclare();
ExternProtoDeclare15.setName(CString("ArtDeco00"));
ExternProtoDeclare15.setAppinfo(CString("UniversalMediaMaterials prototype"));
ExternProtoDeclare15.setDocumentation(CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
ExternProtoDeclare15.setUrl(new CString[]{CString("../data/ArtDecoPrototypes.x3d#ArtDeco00"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco00"), CString("ArtDecoPrototypes.wrl#ArtDeco00"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco00")}, 4);
Scene13.addChild(&ExternProtoDeclare15);

ExternProtoDeclare& ExternProtoDeclare16 =  ExternProtoDeclare();
ExternProtoDeclare16.setName(CString("ArtDeco01"));
ExternProtoDeclare16.setAppinfo(CString("UniversalMediaMaterials prototype"));
ExternProtoDeclare16.setDocumentation(CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
ExternProtoDeclare16.setUrl(new CString[]{CString("../data/ArtDecoPrototypes.x3d#ArtDeco01"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco01"), CString("ArtDecoPrototypes.wrl#ArtDeco01"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco01")}, 4);
Scene13.addChild(&ExternProtoDeclare16);

ExternProtoDeclare& ExternProtoDeclare17 =  ExternProtoDeclare();
ExternProtoDeclare17.setName(CString("ArtDeco02"));
ExternProtoDeclare17.setAppinfo(CString("UniversalMediaMaterials prototype"));
ExternProtoDeclare17.setDocumentation(CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
ExternProtoDeclare17.setUrl(new CString[]{CString("../data/ArtDecoPrototypes.x3d#ArtDeco02"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco02"), CString("ArtDecoPrototypes.wrl#ArtDeco02"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco02")}, 4);
Scene13.addChild(&ExternProtoDeclare17);

ExternProtoDeclare& ExternProtoDeclare18 =  ExternProtoDeclare();
ExternProtoDeclare18.setName(CString("ArtDeco03"));
ExternProtoDeclare18.setAppinfo(CString("UniversalMediaMaterials prototype"));
ExternProtoDeclare18.setDocumentation(CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
ExternProtoDeclare18.setUrl(new CString[]{CString("../data/ArtDecoPrototypes.x3d#ArtDeco03"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco03"), CString("ArtDecoPrototypes.wrl#ArtDeco03"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco03")}, 4);
Scene13.addChild(&ExternProtoDeclare18);

ExternProtoDeclare& ExternProtoDeclare19 =  ExternProtoDeclare();
ExternProtoDeclare19.setName(CString("ArtDeco04"));
ExternProtoDeclare19.setAppinfo(CString("UniversalMediaMaterials prototype"));
ExternProtoDeclare19.setDocumentation(CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
ExternProtoDeclare19.setUrl(new CString[]{CString("../data/ArtDecoPrototypes.x3d#ArtDeco04"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco04"), CString("ArtDecoPrototypes.wrl#ArtDeco04"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco04")}, 4);
Scene13.addChild(&ExternProtoDeclare19);

ExternProtoDeclare& ExternProtoDeclare20 =  ExternProtoDeclare();
ExternProtoDeclare20.setName(CString("ArtDeco05"));
ExternProtoDeclare20.setAppinfo(CString("UniversalMediaMaterials prototype"));
ExternProtoDeclare20.setDocumentation(CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
ExternProtoDeclare20.setUrl(new CString[]{CString("../data/ArtDecoPrototypes.x3d#ArtDeco05"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco05"), CString("ArtDecoPrototypes.wrl#ArtDeco05"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco05")}, 4);
Scene13.addChild(&ExternProtoDeclare20);

ExternProtoDeclare& ExternProtoDeclare21 =  ExternProtoDeclare();
ExternProtoDeclare21.setName(CString("ArtDeco06"));
ExternProtoDeclare21.setAppinfo(CString("UniversalMediaMaterials prototype"));
ExternProtoDeclare21.setDocumentation(CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
ExternProtoDeclare21.setUrl(new CString[]{CString("../data/ArtDecoPrototypes.x3d#ArtDeco06"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco06"), CString("ArtDecoPrototypes.wrl#ArtDeco06"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco06")}, 4);
Scene13.addChild(&ExternProtoDeclare21);

ExternProtoDeclare& ExternProtoDeclare22 =  ExternProtoDeclare();
ExternProtoDeclare22.setName(CString("ArtDeco07"));
ExternProtoDeclare22.setAppinfo(CString("UniversalMediaMaterials prototype"));
ExternProtoDeclare22.setDocumentation(CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
ExternProtoDeclare22.setUrl(new CString[]{CString("../data/ArtDecoPrototypes.x3d#ArtDeco07"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco07"), CString("ArtDecoPrototypes.wrl#ArtDeco07"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco07")}, 4);
Scene13.addChild(&ExternProtoDeclare22);

ExternProtoDeclare& ExternProtoDeclare23 =  ExternProtoDeclare();
ExternProtoDeclare23.setName(CString("ArtDeco08"));
ExternProtoDeclare23.setAppinfo(CString("UniversalMediaMaterials prototype"));
ExternProtoDeclare23.setDocumentation(CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
ExternProtoDeclare23.setUrl(new CString[]{CString("../data/ArtDecoPrototypes.x3d#ArtDeco08"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco08"), CString("ArtDecoPrototypes.wrl#ArtDeco08"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco08")}, 4);
Scene13.addChild(&ExternProtoDeclare23);

ExternProtoDeclare& ExternProtoDeclare24 =  ExternProtoDeclare();
ExternProtoDeclare24.setName(CString("ArtDeco09"));
ExternProtoDeclare24.setAppinfo(CString("UniversalMediaMaterials prototype"));
ExternProtoDeclare24.setDocumentation(CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
ExternProtoDeclare24.setUrl(new CString[]{CString("../data/ArtDecoPrototypes.x3d#ArtDeco09"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco09"), CString("ArtDecoPrototypes.wrl#ArtDeco09"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco09")}, 4);
Scene13.addChild(&ExternProtoDeclare24);

ExternProtoDeclare& ExternProtoDeclare25 =  ExternProtoDeclare();
ExternProtoDeclare25.setName(CString("ArtDeco10"));
ExternProtoDeclare25.setAppinfo(CString("UniversalMediaMaterials prototype"));
ExternProtoDeclare25.setDocumentation(CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
ExternProtoDeclare25.setUrl(new CString[]{CString("../data/ArtDecoPrototypes.x3d#ArtDeco10"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco10"), CString("ArtDecoPrototypes.wrl#ArtDeco10"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco10")}, 4);
Scene13.addChild(&ExternProtoDeclare25);

ExternProtoDeclare& ExternProtoDeclare26 =  ExternProtoDeclare();
ExternProtoDeclare26.setName(CString("ArtDeco11"));
ExternProtoDeclare26.setAppinfo(CString("UniversalMediaMaterials prototype"));
ExternProtoDeclare26.setDocumentation(CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
ExternProtoDeclare26.setUrl(new CString[]{CString("../data/ArtDecoPrototypes.x3d#ArtDeco11"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco11"), CString("ArtDecoPrototypes.wrl#ArtDeco11"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco11")}, 4);
Scene13.addChild(&ExternProtoDeclare26);

ExternProtoDeclare& ExternProtoDeclare27 =  ExternProtoDeclare();
ExternProtoDeclare27.setName(CString("ArtDeco12"));
ExternProtoDeclare27.setAppinfo(CString("UniversalMediaMaterials prototype"));
ExternProtoDeclare27.setDocumentation(CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
ExternProtoDeclare27.setUrl(new CString[]{CString("../data/ArtDecoPrototypes.x3d#ArtDeco12"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco12"), CString("ArtDecoPrototypes.wrl#ArtDeco12"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco12")}, 4);
Scene13.addChild(&ExternProtoDeclare27);

ExternProtoDeclare& ExternProtoDeclare28 =  ExternProtoDeclare();
ExternProtoDeclare28.setName(CString("ArtDeco13"));
ExternProtoDeclare28.setAppinfo(CString("UniversalMediaMaterials prototype"));
ExternProtoDeclare28.setDocumentation(CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
ExternProtoDeclare28.setUrl(new CString[]{CString("../data/ArtDecoPrototypes.x3d#ArtDeco13"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco13"), CString("ArtDecoPrototypes.wrl#ArtDeco13"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco13")}, 4);
Scene13.addChild(&ExternProtoDeclare28);

ExternProtoDeclare& ExternProtoDeclare29 =  ExternProtoDeclare();
ExternProtoDeclare29.setName(CString("ArtDeco14"));
ExternProtoDeclare29.setAppinfo(CString("UniversalMediaMaterials prototype"));
ExternProtoDeclare29.setDocumentation(CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
ExternProtoDeclare29.setUrl(new CString[]{CString("../data/ArtDecoPrototypes.x3d#ArtDeco14"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco14"), CString("ArtDecoPrototypes.wrl#ArtDeco14"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco14")}, 4);
Scene13.addChild(&ExternProtoDeclare29);

ExternProtoDeclare& ExternProtoDeclare30 =  ExternProtoDeclare();
ExternProtoDeclare30.setName(CString("ArtDeco15"));
ExternProtoDeclare30.setAppinfo(CString("UniversalMediaMaterials prototype"));
ExternProtoDeclare30.setDocumentation(CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
ExternProtoDeclare30.setUrl(new CString[]{CString("../data/ArtDecoPrototypes.x3d#ArtDeco15"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco15"), CString("ArtDecoPrototypes.wrl#ArtDeco15"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco15")}, 4);
Scene13.addChild(&ExternProtoDeclare30);

ExternProtoDeclare& ExternProtoDeclare31 =  ExternProtoDeclare();
ExternProtoDeclare31.setName(CString("ArtDeco16"));
ExternProtoDeclare31.setAppinfo(CString("UniversalMediaMaterials prototype"));
ExternProtoDeclare31.setDocumentation(CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
ExternProtoDeclare31.setUrl(new CString[]{CString("../data/ArtDecoPrototypes.x3d#ArtDeco16"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco16"), CString("ArtDecoPrototypes.wrl#ArtDeco16"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco16")}, 4);
Scene13.addChild(&ExternProtoDeclare31);

ExternProtoDeclare& ExternProtoDeclare32 =  ExternProtoDeclare();
ExternProtoDeclare32.setName(CString("ArtDeco17"));
ExternProtoDeclare32.setAppinfo(CString("UniversalMediaMaterials prototype"));
ExternProtoDeclare32.setDocumentation(CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
ExternProtoDeclare32.setUrl(new CString[]{CString("../data/ArtDecoPrototypes.x3d#ArtDeco17"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco17"), CString("ArtDecoPrototypes.wrl#ArtDeco17"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco17")}, 4);
Scene13.addChild(&ExternProtoDeclare32);

ExternProtoDeclare& ExternProtoDeclare33 =  ExternProtoDeclare();
ExternProtoDeclare33.setName(CString("ArtDeco18"));
ExternProtoDeclare33.setAppinfo(CString("UniversalMediaMaterials prototype"));
ExternProtoDeclare33.setDocumentation(CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
ExternProtoDeclare33.setUrl(new CString[]{CString("../data/ArtDecoPrototypes.x3d#ArtDeco18"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco18"), CString("ArtDecoPrototypes.wrl#ArtDeco18"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco18")}, 4);
Scene13.addChild(&ExternProtoDeclare33);

ExternProtoDeclare& ExternProtoDeclare34 =  ExternProtoDeclare();
ExternProtoDeclare34.setName(CString("ArtDeco19"));
ExternProtoDeclare34.setAppinfo(CString("UniversalMediaMaterials prototype"));
ExternProtoDeclare34.setDocumentation(CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
ExternProtoDeclare34.setUrl(new CString[]{CString("../data/ArtDecoPrototypes.x3d#ArtDeco19"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco19"), CString("ArtDecoPrototypes.wrl#ArtDeco19"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco19")}, 4);
Scene13.addChild(&ExternProtoDeclare34);

ExternProtoDeclare& ExternProtoDeclare35 =  ExternProtoDeclare();
ExternProtoDeclare35.setName(CString("ArtDeco20"));
ExternProtoDeclare35.setAppinfo(CString("UniversalMediaMaterials prototype"));
ExternProtoDeclare35.setDocumentation(CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
ExternProtoDeclare35.setUrl(new CString[]{CString("../data/ArtDecoPrototypes.x3d#ArtDeco20"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco20"), CString("ArtDecoPrototypes.wrl#ArtDeco20"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco20")}, 4);
Scene13.addChild(&ExternProtoDeclare35);

ExternProtoDeclare& ExternProtoDeclare36 =  ExternProtoDeclare();
ExternProtoDeclare36.setName(CString("ArtDeco21"));
ExternProtoDeclare36.setAppinfo(CString("UniversalMediaMaterials prototype"));
ExternProtoDeclare36.setDocumentation(CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
ExternProtoDeclare36.setUrl(new CString[]{CString("../data/ArtDecoPrototypes.x3d#ArtDeco21"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco21"), CString("ArtDecoPrototypes.wrl#ArtDeco21"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco21")}, 4);
Scene13.addChild(&ExternProtoDeclare36);

ExternProtoDeclare& ExternProtoDeclare37 =  ExternProtoDeclare();
ExternProtoDeclare37.setName(CString("ArtDeco22"));
ExternProtoDeclare37.setAppinfo(CString("UniversalMediaMaterials prototype"));
ExternProtoDeclare37.setDocumentation(CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
ExternProtoDeclare37.setUrl(new CString[]{CString("../data/ArtDecoPrototypes.x3d#ArtDeco22"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco22"), CString("ArtDecoPrototypes.wrl#ArtDeco22"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco22")}, 4);
Scene13.addChild(&ExternProtoDeclare37);

ExternProtoDeclare& ExternProtoDeclare38 =  ExternProtoDeclare();
ExternProtoDeclare38.setName(CString("ArtDeco23"));
ExternProtoDeclare38.setAppinfo(CString("UniversalMediaMaterials prototype"));
ExternProtoDeclare38.setDocumentation(CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
ExternProtoDeclare38.setUrl(new CString[]{CString("../data/ArtDecoPrototypes.x3d#ArtDeco23"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco23"), CString("ArtDecoPrototypes.wrl#ArtDeco23"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco23")}, 4);
Scene13.addChild(&ExternProtoDeclare38);

ExternProtoDeclare& ExternProtoDeclare39 =  ExternProtoDeclare();
ExternProtoDeclare39.setName(CString("ArtDeco24"));
ExternProtoDeclare39.setAppinfo(CString("UniversalMediaMaterials prototype"));
ExternProtoDeclare39.setDocumentation(CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
ExternProtoDeclare39.setUrl(new CString[]{CString("../data/ArtDecoPrototypes.x3d#ArtDeco24"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco24"), CString("ArtDecoPrototypes.wrl#ArtDeco24"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco24")}, 4);
Scene13.addChild(&ExternProtoDeclare39);

ExternProtoDeclare& ExternProtoDeclare40 =  ExternProtoDeclare();
ExternProtoDeclare40.setName(CString("ArtDeco25"));
ExternProtoDeclare40.setAppinfo(CString("UniversalMediaMaterials prototype"));
ExternProtoDeclare40.setDocumentation(CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
ExternProtoDeclare40.setUrl(new CString[]{CString("../data/ArtDecoPrototypes.x3d#ArtDeco25"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco25"), CString("ArtDecoPrototypes.wrl#ArtDeco25"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco25")}, 4);
Scene13.addChild(&ExternProtoDeclare40);

ExternProtoDeclare& ExternProtoDeclare41 =  ExternProtoDeclare();
ExternProtoDeclare41.setName(CString("ArtDeco26"));
ExternProtoDeclare41.setAppinfo(CString("UniversalMediaMaterials prototype"));
ExternProtoDeclare41.setDocumentation(CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
ExternProtoDeclare41.setUrl(new CString[]{CString("../data/ArtDecoPrototypes.x3d#ArtDeco26"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco26"), CString("ArtDecoPrototypes.wrl#ArtDeco26"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco26")}, 4);
Scene13.addChild(&ExternProtoDeclare41);

ExternProtoDeclare& ExternProtoDeclare42 =  ExternProtoDeclare();
ExternProtoDeclare42.setName(CString("ArtDeco27"));
ExternProtoDeclare42.setAppinfo(CString("UniversalMediaMaterials prototype"));
ExternProtoDeclare42.setDocumentation(CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
ExternProtoDeclare42.setUrl(new CString[]{CString("../data/ArtDecoPrototypes.x3d#ArtDeco27"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco27"), CString("ArtDecoPrototypes.wrl#ArtDeco27"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco27")}, 4);
Scene13.addChild(&ExternProtoDeclare42);

ExternProtoDeclare& ExternProtoDeclare43 =  ExternProtoDeclare();
ExternProtoDeclare43.setName(CString("ArtDeco28"));
ExternProtoDeclare43.setAppinfo(CString("UniversalMediaMaterials prototype"));
ExternProtoDeclare43.setDocumentation(CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
ExternProtoDeclare43.setUrl(new CString[]{CString("../data/ArtDecoPrototypes.x3d#ArtDeco28"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco28"), CString("ArtDecoPrototypes.wrl#ArtDeco28"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco28")}, 4);
Scene13.addChild(&ExternProtoDeclare43);

ExternProtoDeclare& ExternProtoDeclare44 =  ExternProtoDeclare();
ExternProtoDeclare44.setName(CString("ArtDeco29"));
ExternProtoDeclare44.setAppinfo(CString("UniversalMediaMaterials prototype"));
ExternProtoDeclare44.setDocumentation(CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
ExternProtoDeclare44.setUrl(new CString[]{CString("../data/ArtDecoPrototypes.x3d#ArtDeco29"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco29"), CString("ArtDecoPrototypes.wrl#ArtDeco29"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco29")}, 4);
Scene13.addChild(&ExternProtoDeclare44);

ExternProtoDeclare& ExternProtoDeclare45 =  ExternProtoDeclare();
ExternProtoDeclare45.setName(CString("ArtDeco30"));
ExternProtoDeclare45.setAppinfo(CString("UniversalMediaMaterials prototype"));
ExternProtoDeclare45.setDocumentation(CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
ExternProtoDeclare45.setUrl(new CString[]{CString("../data/ArtDecoPrototypes.x3d#ArtDeco30"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco30"), CString("ArtDecoPrototypes.wrl#ArtDeco30"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco30")}, 4);
Scene13.addChild(&ExternProtoDeclare45);

ExternProtoDeclare& ExternProtoDeclare46 =  ExternProtoDeclare();
ExternProtoDeclare46.setName(CString("ArtDeco31"));
ExternProtoDeclare46.setAppinfo(CString("UniversalMediaMaterials prototype"));
ExternProtoDeclare46.setDocumentation(CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
ExternProtoDeclare46.setUrl(new CString[]{CString("../data/ArtDecoPrototypes.x3d#ArtDeco31"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco31"), CString("ArtDecoPrototypes.wrl#ArtDeco31"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco31")}, 4);
Scene13.addChild(&ExternProtoDeclare46);

ExternProtoDeclare& ExternProtoDeclare47 =  ExternProtoDeclare();
ExternProtoDeclare47.setName(CString("ArtDeco32"));
ExternProtoDeclare47.setAppinfo(CString("UniversalMediaMaterials prototype"));
ExternProtoDeclare47.setDocumentation(CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
ExternProtoDeclare47.setUrl(new CString[]{CString("../data/ArtDecoPrototypes.x3d#ArtDeco32"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco32"), CString("ArtDecoPrototypes.wrl#ArtDeco32"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco32")}, 4);
Scene13.addChild(&ExternProtoDeclare47);

ExternProtoDeclare& ExternProtoDeclare48 =  ExternProtoDeclare();
ExternProtoDeclare48.setName(CString("ArtDeco33"));
ExternProtoDeclare48.setAppinfo(CString("UniversalMediaMaterials prototype"));
ExternProtoDeclare48.setDocumentation(CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
ExternProtoDeclare48.setUrl(new CString[]{CString("../data/ArtDecoPrototypes.x3d#ArtDeco33"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco33"), CString("ArtDecoPrototypes.wrl#ArtDeco33"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco33")}, 4);
Scene13.addChild(&ExternProtoDeclare48);

ExternProtoDeclare& ExternProtoDeclare49 =  ExternProtoDeclare();
ExternProtoDeclare49.setName(CString("ArtDeco34"));
ExternProtoDeclare49.setAppinfo(CString("UniversalMediaMaterials prototype"));
ExternProtoDeclare49.setDocumentation(CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
ExternProtoDeclare49.setUrl(new CString[]{CString("../data/ArtDecoPrototypes.x3d#ArtDeco34"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco34"), CString("ArtDecoPrototypes.wrl#ArtDeco34"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco34")}, 4);
Scene13.addChild(&ExternProtoDeclare49);

Group& Group50 =  Group();
NavigationInfo& NavigationInfo51 =  NavigationInfo();
NavigationInfo51.setHeadlight(false);
Group50.addChild(&NavigationInfo51);

Viewpoint& Viewpoint52 =  Viewpoint();
Viewpoint52.setDEF(CString("Front"));
Viewpoint52.setDescription(CString("Front view"));
Viewpoint52.setPosition(new float[]{0.0,0.0,12.0});
Group50.addChild(&Viewpoint52);

Viewpoint& Viewpoint53 =  Viewpoint();
Viewpoint53.setDEF(CString("PersRight"));
Viewpoint53.setDescription(CString("Low Right"));
Viewpoint53.setOrientation(new float[]{0.74291,0.30772,0.59447,1.2171});
Viewpoint53.setPosition(new float[]{6.9282,-6.9282,6.9282});
Group50.addChild(&Viewpoint53);

Viewpoint& Viewpoint54 =  Viewpoint();
Viewpoint54.setDEF(CString("PersLeft"));
Viewpoint54.setDescription(CString("Low Left"));
Viewpoint54.setOrientation(new float[]{0.74291,-0.30772,-0.59447,1.2171});
Viewpoint54.setPosition(new float[]{-6.9282,-6.9282,6.9282});
Group50.addChild(&Viewpoint54);

Viewpoint& Viewpoint55 =  Viewpoint();
Viewpoint55.setDEF(CString("Back"));
Viewpoint55.setDescription(CString("Back view"));
Viewpoint55.setOrientation(new float[]{0.0,1.0,0.0,3.1416});
Viewpoint55.setPosition(new float[]{0.0,0.0,-12.0});
Group50.addChild(&Viewpoint55);

Transform& Transform56 =  Transform();
Transform56.setDEF(CString("Close_travel"));
PositionInterpolator& PositionInterpolator57 =  PositionInterpolator();
PositionInterpolator57.setDEF(CString("Close_Mover"));
PositionInterpolator57.setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
PositionInterpolator57.setKeyValue(new float[]{0.0,2.5,0.0,0.0,0.0,0.0,0.0,-2.5,0.0,0.0,0.0,0.0,0.0,2.5,0.0}, 15);
Transform56.addChild(&PositionInterpolator57);

TimeSensor& TimeSensor58 =  TimeSensor();
TimeSensor58.setDEF(CString("Close_Time"));
TimeSensor58.setCycleInterval(12);
TimeSensor58.setLoop(true);
Transform56.addChild(&TimeSensor58);

Viewpoint& Viewpoint59 =  Viewpoint();
Viewpoint59.setDEF(CString("Close"));
Viewpoint59.setDescription(CString("Close Front"));
Viewpoint59.setPosition(new float[]{0.0,0.0,6.0});
Transform56.addChild(&Viewpoint59);

Group50.addChild(&Transform56);

DirectionalLight& DirectionalLight60 =  DirectionalLight();
DirectionalLight60.setDirection(new float[]{1.0,-1.0,-1.0});
Group50.addChild(&DirectionalLight60);

DirectionalLight& DirectionalLight61 =  DirectionalLight();
DirectionalLight61.setDirection(new float[]{0.0,1.0,-0.5});
DirectionalLight61.setIntensity(0.5);
Group50.addChild(&DirectionalLight61);

Anchor& Anchor62 =  Anchor();
Anchor62.setDescription(CString("Return to front view"));
Anchor62.setUrl(new CString[]{CString("#Front")}, 1);
Transform& Transform63 =  Transform();
Transform63.setTranslation(new float[]{0.0,0.0,-0.5});
Inline& Inline64 =  Inline();
Inline64.setUrl(new CString[]{CString("../data/gridBack.x3d"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/gridBack.x3d"), CString("gridBack.wrl"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/gridBack.wrl")}, 4);
Transform63.addChild(&Inline64);

Anchor62.addChild(&Transform63);

Group50.addChild(&Anchor62);

Viewpoint& Viewpoint65 =  Viewpoint();
Viewpoint65.setDEF(CString("View00"));
Viewpoint65.setDescription(CString("ArtDeco00"));
Viewpoint65.setPosition(new float[]{-3.75,3.75,3.0});
Group50.addChild(&Viewpoint65);

Transform& Transform66 =  Transform();
Transform66.setTranslation(new float[]{-3.75,3.75,0.0});
Anchor& Anchor67 =  Anchor();
Anchor67.setDescription(CString("ArtDeco00 view"));
Anchor67.setUrl(new CString[]{CString("#View00")}, 1);
Shape& Shape68 =  Shape();
Appearance& Appearance69 =  Appearance();
ProtoInstance& ProtoInstance70 =  ProtoInstance();
ProtoInstance70.setName(CString("ArtDeco00"));
Appearance69.addChild(&ProtoInstance70);

Shape68.addChild(&Appearance69);

Sphere& Sphere71 =  Sphere();
Sphere71.setDEF(CString("Ball"));
Sphere71.setRadius(0.5);
Shape68.setGeometry(&Sphere71);

Anchor67.addChild(&Shape68);

Transform66.addChild(&Anchor67);

Transform& Transform72 =  Transform();
Transform72.setTranslation(new float[]{0.0,0.3,0.5});
Anchor& Anchor73 =  Anchor();
Anchor73.setDescription(CString("ArtDeco00 view source documentation"));
Anchor73.setParameter(new CString[]{CString("target=_source")}, 1);
Anchor73.setUrl(new CString[]{CString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco00"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco00")}, 2);
Shape& Shape74 =  Shape();
Appearance& Appearance75 =  Appearance();
Material& Material76 =  Material();
Material76.setDEF(CString("TextMat"));
Material76.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance75.addChild(&Material76);

Shape74.addChild(&Appearance75);

Text& Text77 =  Text();
Text77.setString(new CString[]{CString("ArtDeco00")}, 1);
CFontStyle& FontStyle78 =  CFontStyle();
FontStyle78.setDEF(CString("Style"));
FontStyle78.setFamily(new CString[]{CString("SANS")}, 1);
FontStyle78.setJustify(new CString[]{CString("MIDDLE"), CString("MIDDLE")}, 2);
FontStyle78.setSize(0.3);
FontStyle78.setStyle(CString("BOLD"));
Text77.setFontStyle(&FontStyle78);

Shape74.setGeometry(&Text77);

Anchor73.addChild(&Shape74);

Transform72.addChild(&Anchor73);

Transform66.addChild(&Transform72);

Group50.addChild(&Transform66);

Viewpoint& Viewpoint79 =  Viewpoint();
Viewpoint79.setDEF(CString("View01"));
Viewpoint79.setDescription(CString("ArtDeco01"));
Viewpoint79.setPosition(new float[]{-2.25,3.75,3.0});
Group50.addChild(&Viewpoint79);

Transform& Transform80 =  Transform();
Transform80.setTranslation(new float[]{-2.25,3.75,0.0});
Anchor& Anchor81 =  Anchor();
Anchor81.setDescription(CString("ArtDeco01 view"));
Anchor81.setUrl(new CString[]{CString("#View01")}, 1);
Shape& Shape82 =  Shape();
Appearance& Appearance83 =  Appearance();
ProtoInstance& ProtoInstance84 =  ProtoInstance();
ProtoInstance84.setName(CString("ArtDeco01"));
Appearance83.addChild(&ProtoInstance84);

Shape82.addChild(&Appearance83);

Sphere& Sphere85 =  Sphere();
Sphere85.setUSE(CString("Ball"));
Shape82.setGeometry(&Sphere85);

Anchor81.addChild(&Shape82);

Transform80.addChild(&Anchor81);

Transform& Transform86 =  Transform();
Transform86.setTranslation(new float[]{0.0,0.3,0.5});
Anchor& Anchor87 =  Anchor();
Anchor87.setDescription(CString("ArtDeco01 view source documentation"));
Anchor87.setParameter(new CString[]{CString("target=_source")}, 1);
Anchor87.setUrl(new CString[]{CString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco01"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco01")}, 2);
Shape& Shape88 =  Shape();
Appearance& Appearance89 =  Appearance();
Material& Material90 =  Material();
Material90.setUSE(CString("TextMat"));
Appearance89.addChild(&Material90);

Shape88.addChild(&Appearance89);

Text& Text91 =  Text();
Text91.setString(new CString[]{CString("ArtDeco01")}, 1);
CFontStyle& FontStyle92 =  CFontStyle();
FontStyle92.setUSE(CString("Style"));
Text91.setFontStyle(&FontStyle92);

Shape88.setGeometry(&Text91);

Anchor87.addChild(&Shape88);

Transform86.addChild(&Anchor87);

Transform80.addChild(&Transform86);

Group50.addChild(&Transform80);

Viewpoint& Viewpoint93 =  Viewpoint();
Viewpoint93.setDEF(CString("View02"));
Viewpoint93.setDescription(CString("ArtDeco02"));
Viewpoint93.setPosition(new float[]{-0.75,3.75,3.0});
Group50.addChild(&Viewpoint93);

Transform& Transform94 =  Transform();
Transform94.setTranslation(new float[]{-0.75,3.75,0.0});
Anchor& Anchor95 =  Anchor();
Anchor95.setDescription(CString("ArtDeco02 view"));
Anchor95.setUrl(new CString[]{CString("#View02")}, 1);
Shape& Shape96 =  Shape();
Appearance& Appearance97 =  Appearance();
ProtoInstance& ProtoInstance98 =  ProtoInstance();
ProtoInstance98.setName(CString("ArtDeco02"));
Appearance97.addChild(&ProtoInstance98);

Shape96.addChild(&Appearance97);

Sphere& Sphere99 =  Sphere();
Sphere99.setUSE(CString("Ball"));
Shape96.setGeometry(&Sphere99);

Anchor95.addChild(&Shape96);

Transform94.addChild(&Anchor95);

Transform& Transform100 =  Transform();
Transform100.setTranslation(new float[]{0.0,0.3,0.5});
Anchor& Anchor101 =  Anchor();
Anchor101.setDescription(CString("ArtDeco02 view source documentation"));
Anchor101.setParameter(new CString[]{CString("target=_source")}, 1);
Anchor101.setUrl(new CString[]{CString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco02"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco02")}, 2);
Shape& Shape102 =  Shape();
Appearance& Appearance103 =  Appearance();
Material& Material104 =  Material();
Material104.setUSE(CString("TextMat"));
Appearance103.addChild(&Material104);

Shape102.addChild(&Appearance103);

Text& Text105 =  Text();
Text105.setString(new CString[]{CString("ArtDeco02")}, 1);
CFontStyle& FontStyle106 =  CFontStyle();
FontStyle106.setUSE(CString("Style"));
Text105.setFontStyle(&FontStyle106);

Shape102.setGeometry(&Text105);

Anchor101.addChild(&Shape102);

Transform100.addChild(&Anchor101);

Transform94.addChild(&Transform100);

Group50.addChild(&Transform94);

Viewpoint& Viewpoint107 =  Viewpoint();
Viewpoint107.setDEF(CString("View03"));
Viewpoint107.setDescription(CString("ArtDeco03"));
Viewpoint107.setPosition(new float[]{0.75,3.75,3.0});
Group50.addChild(&Viewpoint107);

Transform& Transform108 =  Transform();
Transform108.setTranslation(new float[]{0.75,3.75,0.0});
Anchor& Anchor109 =  Anchor();
Anchor109.setDescription(CString("ArtDeco03 view"));
Anchor109.setUrl(new CString[]{CString("#View03")}, 1);
Shape& Shape110 =  Shape();
Appearance& Appearance111 =  Appearance();
ProtoInstance& ProtoInstance112 =  ProtoInstance();
ProtoInstance112.setName(CString("ArtDeco03"));
Appearance111.addChild(&ProtoInstance112);

Shape110.addChild(&Appearance111);

Sphere& Sphere113 =  Sphere();
Sphere113.setUSE(CString("Ball"));
Shape110.setGeometry(&Sphere113);

Anchor109.addChild(&Shape110);

Transform108.addChild(&Anchor109);

Transform& Transform114 =  Transform();
Transform114.setTranslation(new float[]{0.0,0.3,0.5});
Anchor& Anchor115 =  Anchor();
Anchor115.setDescription(CString("ArtDeco03 view source documentation"));
Anchor115.setParameter(new CString[]{CString("target=_source")}, 1);
Anchor115.setUrl(new CString[]{CString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco03"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco03")}, 2);
Shape& Shape116 =  Shape();
Appearance& Appearance117 =  Appearance();
Material& Material118 =  Material();
Material118.setUSE(CString("TextMat"));
Appearance117.addChild(&Material118);

Shape116.addChild(&Appearance117);

Text& Text119 =  Text();
Text119.setString(new CString[]{CString("ArtDeco03")}, 1);
CFontStyle& FontStyle120 =  CFontStyle();
FontStyle120.setUSE(CString("Style"));
Text119.setFontStyle(&FontStyle120);

Shape116.setGeometry(&Text119);

Anchor115.addChild(&Shape116);

Transform114.addChild(&Anchor115);

Transform108.addChild(&Transform114);

Group50.addChild(&Transform108);

Viewpoint& Viewpoint121 =  Viewpoint();
Viewpoint121.setDEF(CString("View04"));
Viewpoint121.setDescription(CString("ArtDeco04"));
Viewpoint121.setPosition(new float[]{2.25,3.75,3.0});
Group50.addChild(&Viewpoint121);

Transform& Transform122 =  Transform();
Transform122.setTranslation(new float[]{2.25,3.75,0.0});
Anchor& Anchor123 =  Anchor();
Anchor123.setDescription(CString("ArtDeco04 view"));
Anchor123.setUrl(new CString[]{CString("#View04")}, 1);
Shape& Shape124 =  Shape();
Appearance& Appearance125 =  Appearance();
ProtoInstance& ProtoInstance126 =  ProtoInstance();
ProtoInstance126.setName(CString("ArtDeco04"));
Appearance125.addChild(&ProtoInstance126);

Shape124.addChild(&Appearance125);

Sphere& Sphere127 =  Sphere();
Sphere127.setUSE(CString("Ball"));
Shape124.setGeometry(&Sphere127);

Anchor123.addChild(&Shape124);

Transform122.addChild(&Anchor123);

Transform& Transform128 =  Transform();
Transform128.setTranslation(new float[]{0.0,0.3,0.5});
Anchor& Anchor129 =  Anchor();
Anchor129.setDescription(CString("ArtDeco04 view source documentation"));
Anchor129.setParameter(new CString[]{CString("target=_source")}, 1);
Anchor129.setUrl(new CString[]{CString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco04"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco04")}, 2);
Shape& Shape130 =  Shape();
Appearance& Appearance131 =  Appearance();
Material& Material132 =  Material();
Material132.setUSE(CString("TextMat"));
Appearance131.addChild(&Material132);

Shape130.addChild(&Appearance131);

Text& Text133 =  Text();
Text133.setString(new CString[]{CString("ArtDeco04")}, 1);
CFontStyle& FontStyle134 =  CFontStyle();
FontStyle134.setUSE(CString("Style"));
Text133.setFontStyle(&FontStyle134);

Shape130.setGeometry(&Text133);

Anchor129.addChild(&Shape130);

Transform128.addChild(&Anchor129);

Transform122.addChild(&Transform128);

Group50.addChild(&Transform122);

Viewpoint& Viewpoint135 =  Viewpoint();
Viewpoint135.setDEF(CString("View05"));
Viewpoint135.setDescription(CString("ArtDeco05"));
Viewpoint135.setPosition(new float[]{3.75,3.75,3.0});
Group50.addChild(&Viewpoint135);

Transform& Transform136 =  Transform();
Transform136.setTranslation(new float[]{3.75,3.75,0.0});
Anchor& Anchor137 =  Anchor();
Anchor137.setDescription(CString("ArtDeco05 view"));
Anchor137.setUrl(new CString[]{CString("#View05")}, 1);
Shape& Shape138 =  Shape();
Appearance& Appearance139 =  Appearance();
ProtoInstance& ProtoInstance140 =  ProtoInstance();
ProtoInstance140.setName(CString("ArtDeco05"));
Appearance139.addChild(&ProtoInstance140);

Shape138.addChild(&Appearance139);

Sphere& Sphere141 =  Sphere();
Sphere141.setUSE(CString("Ball"));
Shape138.setGeometry(&Sphere141);

Anchor137.addChild(&Shape138);

Transform136.addChild(&Anchor137);

Transform& Transform142 =  Transform();
Transform142.setTranslation(new float[]{0.0,0.3,0.5});
Anchor& Anchor143 =  Anchor();
Anchor143.setDescription(CString("ArtDeco05 view source documentation"));
Anchor143.setParameter(new CString[]{CString("target=_source")}, 1);
Anchor143.setUrl(new CString[]{CString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco05"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco05")}, 2);
Shape& Shape144 =  Shape();
Appearance& Appearance145 =  Appearance();
Material& Material146 =  Material();
Material146.setUSE(CString("TextMat"));
Appearance145.addChild(&Material146);

Shape144.addChild(&Appearance145);

Text& Text147 =  Text();
Text147.setString(new CString[]{CString("ArtDeco05")}, 1);
CFontStyle& FontStyle148 =  CFontStyle();
FontStyle148.setUSE(CString("Style"));
Text147.setFontStyle(&FontStyle148);

Shape144.setGeometry(&Text147);

Anchor143.addChild(&Shape144);

Transform142.addChild(&Anchor143);

Transform136.addChild(&Transform142);

Group50.addChild(&Transform136);

Viewpoint& Viewpoint149 =  Viewpoint();
Viewpoint149.setDEF(CString("View06"));
Viewpoint149.setDescription(CString("ArtDeco06"));
Viewpoint149.setPosition(new float[]{-3.75,2.25,3.0});
Group50.addChild(&Viewpoint149);

Transform& Transform150 =  Transform();
Transform150.setTranslation(new float[]{-3.75,2.25,0.0});
Anchor& Anchor151 =  Anchor();
Anchor151.setDescription(CString("ArtDeco06 view"));
Anchor151.setUrl(new CString[]{CString("#View06")}, 1);
Shape& Shape152 =  Shape();
Appearance& Appearance153 =  Appearance();
ProtoInstance& ProtoInstance154 =  ProtoInstance();
ProtoInstance154.setName(CString("ArtDeco06"));
Appearance153.addChild(&ProtoInstance154);

Shape152.addChild(&Appearance153);

Sphere& Sphere155 =  Sphere();
Sphere155.setUSE(CString("Ball"));
Shape152.setGeometry(&Sphere155);

Anchor151.addChild(&Shape152);

Transform150.addChild(&Anchor151);

Transform& Transform156 =  Transform();
Transform156.setTranslation(new float[]{0.0,0.3,0.5});
Anchor& Anchor157 =  Anchor();
Anchor157.setDescription(CString("ArtDeco06 view source documentation"));
Anchor157.setParameter(new CString[]{CString("target=_source")}, 1);
Anchor157.setUrl(new CString[]{CString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco06"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco06")}, 2);
Shape& Shape158 =  Shape();
Appearance& Appearance159 =  Appearance();
Material& Material160 =  Material();
Material160.setUSE(CString("TextMat"));
Appearance159.addChild(&Material160);

Shape158.addChild(&Appearance159);

Text& Text161 =  Text();
Text161.setString(new CString[]{CString("ArtDeco06")}, 1);
CFontStyle& FontStyle162 =  CFontStyle();
FontStyle162.setUSE(CString("Style"));
Text161.setFontStyle(&FontStyle162);

Shape158.setGeometry(&Text161);

Anchor157.addChild(&Shape158);

Transform156.addChild(&Anchor157);

Transform150.addChild(&Transform156);

Group50.addChild(&Transform150);

Viewpoint& Viewpoint163 =  Viewpoint();
Viewpoint163.setDEF(CString("View07"));
Viewpoint163.setDescription(CString("ArtDeco07"));
Viewpoint163.setPosition(new float[]{-2.25,2.25,3.0});
Group50.addChild(&Viewpoint163);

Transform& Transform164 =  Transform();
Transform164.setTranslation(new float[]{-2.25,2.25,0.0});
Anchor& Anchor165 =  Anchor();
Anchor165.setDescription(CString("ArtDeco07 view"));
Anchor165.setUrl(new CString[]{CString("#View07")}, 1);
Shape& Shape166 =  Shape();
Appearance& Appearance167 =  Appearance();
ProtoInstance& ProtoInstance168 =  ProtoInstance();
ProtoInstance168.setName(CString("ArtDeco07"));
Appearance167.addChild(&ProtoInstance168);

Shape166.addChild(&Appearance167);

Sphere& Sphere169 =  Sphere();
Sphere169.setUSE(CString("Ball"));
Shape166.setGeometry(&Sphere169);

Anchor165.addChild(&Shape166);

Transform164.addChild(&Anchor165);

Transform& Transform170 =  Transform();
Transform170.setTranslation(new float[]{0.0,0.3,0.5});
Anchor& Anchor171 =  Anchor();
Anchor171.setDescription(CString("ArtDeco07 view source documentation"));
Anchor171.setParameter(new CString[]{CString("target=_source")}, 1);
Anchor171.setUrl(new CString[]{CString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco07"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco07")}, 2);
Shape& Shape172 =  Shape();
Appearance& Appearance173 =  Appearance();
Material& Material174 =  Material();
Material174.setUSE(CString("TextMat"));
Appearance173.addChild(&Material174);

Shape172.addChild(&Appearance173);

Text& Text175 =  Text();
Text175.setString(new CString[]{CString("ArtDeco07")}, 1);
CFontStyle& FontStyle176 =  CFontStyle();
FontStyle176.setUSE(CString("Style"));
Text175.setFontStyle(&FontStyle176);

Shape172.setGeometry(&Text175);

Anchor171.addChild(&Shape172);

Transform170.addChild(&Anchor171);

Transform164.addChild(&Transform170);

Group50.addChild(&Transform164);

Viewpoint& Viewpoint177 =  Viewpoint();
Viewpoint177.setDEF(CString("View08"));
Viewpoint177.setDescription(CString("ArtDeco08"));
Viewpoint177.setPosition(new float[]{-0.75,2.25,3.0});
Group50.addChild(&Viewpoint177);

Transform& Transform178 =  Transform();
Transform178.setTranslation(new float[]{-0.75,2.25,0.0});
Anchor& Anchor179 =  Anchor();
Anchor179.setDescription(CString("ArtDeco08 view"));
Anchor179.setUrl(new CString[]{CString("#View08")}, 1);
Shape& Shape180 =  Shape();
Appearance& Appearance181 =  Appearance();
ProtoInstance& ProtoInstance182 =  ProtoInstance();
ProtoInstance182.setName(CString("ArtDeco08"));
Appearance181.addChild(&ProtoInstance182);

Shape180.addChild(&Appearance181);

Sphere& Sphere183 =  Sphere();
Sphere183.setUSE(CString("Ball"));
Shape180.setGeometry(&Sphere183);

Anchor179.addChild(&Shape180);

Transform178.addChild(&Anchor179);

Transform& Transform184 =  Transform();
Transform184.setTranslation(new float[]{0.0,0.3,0.5});
Anchor& Anchor185 =  Anchor();
Anchor185.setDescription(CString("ArtDeco08 view source documentation"));
Anchor185.setParameter(new CString[]{CString("target=_source")}, 1);
Anchor185.setUrl(new CString[]{CString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco08"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco08")}, 2);
Shape& Shape186 =  Shape();
Appearance& Appearance187 =  Appearance();
Material& Material188 =  Material();
Material188.setUSE(CString("TextMat"));
Appearance187.addChild(&Material188);

Shape186.addChild(&Appearance187);

Text& Text189 =  Text();
Text189.setString(new CString[]{CString("ArtDeco08")}, 1);
CFontStyle& FontStyle190 =  CFontStyle();
FontStyle190.setUSE(CString("Style"));
Text189.setFontStyle(&FontStyle190);

Shape186.setGeometry(&Text189);

Anchor185.addChild(&Shape186);

Transform184.addChild(&Anchor185);

Transform178.addChild(&Transform184);

Group50.addChild(&Transform178);

Viewpoint& Viewpoint191 =  Viewpoint();
Viewpoint191.setDEF(CString("View09"));
Viewpoint191.setDescription(CString("ArtDeco09"));
Viewpoint191.setPosition(new float[]{0.75,2.25,3.0});
Group50.addChild(&Viewpoint191);

Transform& Transform192 =  Transform();
Transform192.setTranslation(new float[]{0.75,2.25,0.0});
Anchor& Anchor193 =  Anchor();
Anchor193.setDescription(CString("ArtDeco09 view"));
Anchor193.setUrl(new CString[]{CString("#View09")}, 1);
Shape& Shape194 =  Shape();
Appearance& Appearance195 =  Appearance();
ProtoInstance& ProtoInstance196 =  ProtoInstance();
ProtoInstance196.setName(CString("ArtDeco09"));
Appearance195.addChild(&ProtoInstance196);

Shape194.addChild(&Appearance195);

Sphere& Sphere197 =  Sphere();
Sphere197.setUSE(CString("Ball"));
Shape194.setGeometry(&Sphere197);

Anchor193.addChild(&Shape194);

Transform192.addChild(&Anchor193);

Transform& Transform198 =  Transform();
Transform198.setTranslation(new float[]{0.0,0.3,0.5});
Anchor& Anchor199 =  Anchor();
Anchor199.setDescription(CString("ArtDeco09 view source documentation"));
Anchor199.setParameter(new CString[]{CString("target=_source")}, 1);
Anchor199.setUrl(new CString[]{CString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco09"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco09")}, 2);
Shape& Shape200 =  Shape();
Appearance& Appearance201 =  Appearance();
Material& Material202 =  Material();
Material202.setUSE(CString("TextMat"));
Appearance201.addChild(&Material202);

Shape200.addChild(&Appearance201);

Text& Text203 =  Text();
Text203.setString(new CString[]{CString("ArtDeco09")}, 1);
CFontStyle& FontStyle204 =  CFontStyle();
FontStyle204.setUSE(CString("Style"));
Text203.setFontStyle(&FontStyle204);

Shape200.setGeometry(&Text203);

Anchor199.addChild(&Shape200);

Transform198.addChild(&Anchor199);

Transform192.addChild(&Transform198);

Group50.addChild(&Transform192);

Viewpoint& Viewpoint205 =  Viewpoint();
Viewpoint205.setDEF(CString("View10"));
Viewpoint205.setDescription(CString("ArtDeco10"));
Viewpoint205.setPosition(new float[]{2.25,2.25,3.0});
Group50.addChild(&Viewpoint205);

Transform& Transform206 =  Transform();
Transform206.setTranslation(new float[]{2.25,2.25,0.0});
Anchor& Anchor207 =  Anchor();
Anchor207.setDescription(CString("ArtDeco10 view"));
Anchor207.setUrl(new CString[]{CString("#View10")}, 1);
Shape& Shape208 =  Shape();
Appearance& Appearance209 =  Appearance();
ProtoInstance& ProtoInstance210 =  ProtoInstance();
ProtoInstance210.setName(CString("ArtDeco10"));
Appearance209.addChild(&ProtoInstance210);

Shape208.addChild(&Appearance209);

Sphere& Sphere211 =  Sphere();
Sphere211.setUSE(CString("Ball"));
Shape208.setGeometry(&Sphere211);

Anchor207.addChild(&Shape208);

Transform206.addChild(&Anchor207);

Transform& Transform212 =  Transform();
Transform212.setTranslation(new float[]{0.0,0.3,0.5});
Anchor& Anchor213 =  Anchor();
Anchor213.setDescription(CString("ArtDeco10 view source documentation"));
Anchor213.setParameter(new CString[]{CString("target=_source")}, 1);
Anchor213.setUrl(new CString[]{CString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco10"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco10")}, 2);
Shape& Shape214 =  Shape();
Appearance& Appearance215 =  Appearance();
Material& Material216 =  Material();
Material216.setUSE(CString("TextMat"));
Appearance215.addChild(&Material216);

Shape214.addChild(&Appearance215);

Text& Text217 =  Text();
Text217.setString(new CString[]{CString("ArtDeco10")}, 1);
CFontStyle& FontStyle218 =  CFontStyle();
FontStyle218.setUSE(CString("Style"));
Text217.setFontStyle(&FontStyle218);

Shape214.setGeometry(&Text217);

Anchor213.addChild(&Shape214);

Transform212.addChild(&Anchor213);

Transform206.addChild(&Transform212);

Group50.addChild(&Transform206);

Viewpoint& Viewpoint219 =  Viewpoint();
Viewpoint219.setDEF(CString("View11"));
Viewpoint219.setDescription(CString("ArtDeco11"));
Viewpoint219.setPosition(new float[]{3.75,2.25,3.0});
Group50.addChild(&Viewpoint219);

Transform& Transform220 =  Transform();
Transform220.setTranslation(new float[]{3.75,2.25,0.0});
Anchor& Anchor221 =  Anchor();
Anchor221.setDescription(CString("ArtDeco11 view"));
Anchor221.setUrl(new CString[]{CString("#View11")}, 1);
Shape& Shape222 =  Shape();
Appearance& Appearance223 =  Appearance();
ProtoInstance& ProtoInstance224 =  ProtoInstance();
ProtoInstance224.setName(CString("ArtDeco11"));
Appearance223.addChild(&ProtoInstance224);

Shape222.addChild(&Appearance223);

Sphere& Sphere225 =  Sphere();
Sphere225.setUSE(CString("Ball"));
Shape222.setGeometry(&Sphere225);

Anchor221.addChild(&Shape222);

Transform220.addChild(&Anchor221);

Transform& Transform226 =  Transform();
Transform226.setTranslation(new float[]{0.0,0.3,0.5});
Anchor& Anchor227 =  Anchor();
Anchor227.setDescription(CString("ArtDeco11 view source documentation"));
Anchor227.setParameter(new CString[]{CString("target=_source")}, 1);
Anchor227.setUrl(new CString[]{CString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco11"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco11")}, 2);
Shape& Shape228 =  Shape();
Appearance& Appearance229 =  Appearance();
Material& Material230 =  Material();
Material230.setUSE(CString("TextMat"));
Appearance229.addChild(&Material230);

Shape228.addChild(&Appearance229);

Text& Text231 =  Text();
Text231.setString(new CString[]{CString("ArtDeco11")}, 1);
CFontStyle& FontStyle232 =  CFontStyle();
FontStyle232.setUSE(CString("Style"));
Text231.setFontStyle(&FontStyle232);

Shape228.setGeometry(&Text231);

Anchor227.addChild(&Shape228);

Transform226.addChild(&Anchor227);

Transform220.addChild(&Transform226);

Group50.addChild(&Transform220);

Viewpoint& Viewpoint233 =  Viewpoint();
Viewpoint233.setDEF(CString("View12"));
Viewpoint233.setDescription(CString("ArtDeco12"));
Viewpoint233.setPosition(new float[]{-3.75,0.75,3.0});
Group50.addChild(&Viewpoint233);

Transform& Transform234 =  Transform();
Transform234.setTranslation(new float[]{-3.75,0.75,0.0});
Anchor& Anchor235 =  Anchor();
Anchor235.setDescription(CString("ArtDeco12 view"));
Anchor235.setUrl(new CString[]{CString("#View12")}, 1);
Shape& Shape236 =  Shape();
Appearance& Appearance237 =  Appearance();
ProtoInstance& ProtoInstance238 =  ProtoInstance();
ProtoInstance238.setName(CString("ArtDeco12"));
Appearance237.addChild(&ProtoInstance238);

Shape236.addChild(&Appearance237);

Sphere& Sphere239 =  Sphere();
Sphere239.setUSE(CString("Ball"));
Shape236.setGeometry(&Sphere239);

Anchor235.addChild(&Shape236);

Transform234.addChild(&Anchor235);

Transform& Transform240 =  Transform();
Transform240.setTranslation(new float[]{0.0,0.3,0.5});
Anchor& Anchor241 =  Anchor();
Anchor241.setDescription(CString("ArtDeco12 view source documentation"));
Anchor241.setParameter(new CString[]{CString("target=_source")}, 1);
Anchor241.setUrl(new CString[]{CString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco12"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco12")}, 2);
Shape& Shape242 =  Shape();
Appearance& Appearance243 =  Appearance();
Material& Material244 =  Material();
Material244.setUSE(CString("TextMat"));
Appearance243.addChild(&Material244);

Shape242.addChild(&Appearance243);

Text& Text245 =  Text();
Text245.setString(new CString[]{CString("ArtDeco12")}, 1);
CFontStyle& FontStyle246 =  CFontStyle();
FontStyle246.setUSE(CString("Style"));
Text245.setFontStyle(&FontStyle246);

Shape242.setGeometry(&Text245);

Anchor241.addChild(&Shape242);

Transform240.addChild(&Anchor241);

Transform234.addChild(&Transform240);

Group50.addChild(&Transform234);

Viewpoint& Viewpoint247 =  Viewpoint();
Viewpoint247.setDEF(CString("View13"));
Viewpoint247.setDescription(CString("ArtDeco13"));
Viewpoint247.setPosition(new float[]{-2.25,0.75,3.0});
Group50.addChild(&Viewpoint247);

Transform& Transform248 =  Transform();
Transform248.setTranslation(new float[]{-2.25,0.75,0.0});
Anchor& Anchor249 =  Anchor();
Anchor249.setDescription(CString("ArtDeco13 view"));
Anchor249.setUrl(new CString[]{CString("#View13")}, 1);
Shape& Shape250 =  Shape();
Appearance& Appearance251 =  Appearance();
ProtoInstance& ProtoInstance252 =  ProtoInstance();
ProtoInstance252.setName(CString("ArtDeco13"));
Appearance251.addChild(&ProtoInstance252);

Shape250.addChild(&Appearance251);

Sphere& Sphere253 =  Sphere();
Sphere253.setUSE(CString("Ball"));
Shape250.setGeometry(&Sphere253);

Anchor249.addChild(&Shape250);

Transform248.addChild(&Anchor249);

Transform& Transform254 =  Transform();
Transform254.setTranslation(new float[]{0.0,0.3,0.5});
Anchor& Anchor255 =  Anchor();
Anchor255.setDescription(CString("ArtDeco13 view source documentation"));
Anchor255.setParameter(new CString[]{CString("target=_source")}, 1);
Anchor255.setUrl(new CString[]{CString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco3"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco13")}, 2);
Shape& Shape256 =  Shape();
Appearance& Appearance257 =  Appearance();
Material& Material258 =  Material();
Material258.setUSE(CString("TextMat"));
Appearance257.addChild(&Material258);

Shape256.addChild(&Appearance257);

Text& Text259 =  Text();
Text259.setString(new CString[]{CString("ArtDeco13")}, 1);
CFontStyle& FontStyle260 =  CFontStyle();
FontStyle260.setUSE(CString("Style"));
Text259.setFontStyle(&FontStyle260);

Shape256.setGeometry(&Text259);

Anchor255.addChild(&Shape256);

Transform254.addChild(&Anchor255);

Transform248.addChild(&Transform254);

Group50.addChild(&Transform248);

Viewpoint& Viewpoint261 =  Viewpoint();
Viewpoint261.setDEF(CString("View14"));
Viewpoint261.setDescription(CString("ArtDeco14"));
Viewpoint261.setPosition(new float[]{-0.75,0.75,3.0});
Group50.addChild(&Viewpoint261);

Transform& Transform262 =  Transform();
Transform262.setTranslation(new float[]{-0.75,0.75,0.0});
Anchor& Anchor263 =  Anchor();
Anchor263.setDescription(CString("ArtDeco14 view"));
Anchor263.setUrl(new CString[]{CString("#View14")}, 1);
Shape& Shape264 =  Shape();
Appearance& Appearance265 =  Appearance();
ProtoInstance& ProtoInstance266 =  ProtoInstance();
ProtoInstance266.setName(CString("ArtDeco14"));
Appearance265.addChild(&ProtoInstance266);

Shape264.addChild(&Appearance265);

Sphere& Sphere267 =  Sphere();
Sphere267.setUSE(CString("Ball"));
Shape264.setGeometry(&Sphere267);

Anchor263.addChild(&Shape264);

Transform262.addChild(&Anchor263);

Transform& Transform268 =  Transform();
Transform268.setTranslation(new float[]{0.0,0.3,0.5});
Anchor& Anchor269 =  Anchor();
Anchor269.setDescription(CString("ArtDeco14 view source documentation"));
Anchor269.setParameter(new CString[]{CString("target=_source")}, 1);
Anchor269.setUrl(new CString[]{CString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco4"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco14")}, 2);
Shape& Shape270 =  Shape();
Appearance& Appearance271 =  Appearance();
Material& Material272 =  Material();
Material272.setUSE(CString("TextMat"));
Appearance271.addChild(&Material272);

Shape270.addChild(&Appearance271);

Text& Text273 =  Text();
Text273.setString(new CString[]{CString("ArtDeco14")}, 1);
CFontStyle& FontStyle274 =  CFontStyle();
FontStyle274.setUSE(CString("Style"));
Text273.setFontStyle(&FontStyle274);

Shape270.setGeometry(&Text273);

Anchor269.addChild(&Shape270);

Transform268.addChild(&Anchor269);

Transform262.addChild(&Transform268);

Group50.addChild(&Transform262);

Viewpoint& Viewpoint275 =  Viewpoint();
Viewpoint275.setDEF(CString("View15"));
Viewpoint275.setDescription(CString("ArtDeco15"));
Viewpoint275.setPosition(new float[]{0.75,0.75,3.0});
Group50.addChild(&Viewpoint275);

Transform& Transform276 =  Transform();
Transform276.setTranslation(new float[]{0.75,0.75,0.0});
Anchor& Anchor277 =  Anchor();
Anchor277.setDescription(CString("ArtDeco15 view"));
Anchor277.setUrl(new CString[]{CString("#View15")}, 1);
Shape& Shape278 =  Shape();
Appearance& Appearance279 =  Appearance();
ProtoInstance& ProtoInstance280 =  ProtoInstance();
ProtoInstance280.setName(CString("ArtDeco15"));
Appearance279.addChild(&ProtoInstance280);

Shape278.addChild(&Appearance279);

Sphere& Sphere281 =  Sphere();
Sphere281.setUSE(CString("Ball"));
Shape278.setGeometry(&Sphere281);

Anchor277.addChild(&Shape278);

Transform276.addChild(&Anchor277);

Transform& Transform282 =  Transform();
Transform282.setTranslation(new float[]{0.0,0.3,0.5});
Anchor& Anchor283 =  Anchor();
Anchor283.setDescription(CString("ArtDeco15 view source documentation"));
Anchor283.setParameter(new CString[]{CString("target=_source")}, 1);
Anchor283.setUrl(new CString[]{CString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco5"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco15")}, 2);
Shape& Shape284 =  Shape();
Appearance& Appearance285 =  Appearance();
Material& Material286 =  Material();
Material286.setUSE(CString("TextMat"));
Appearance285.addChild(&Material286);

Shape284.addChild(&Appearance285);

Text& Text287 =  Text();
Text287.setString(new CString[]{CString("ArtDeco15")}, 1);
CFontStyle& FontStyle288 =  CFontStyle();
FontStyle288.setUSE(CString("Style"));
Text287.setFontStyle(&FontStyle288);

Shape284.setGeometry(&Text287);

Anchor283.addChild(&Shape284);

Transform282.addChild(&Anchor283);

Transform276.addChild(&Transform282);

Group50.addChild(&Transform276);

Viewpoint& Viewpoint289 =  Viewpoint();
Viewpoint289.setDEF(CString("View16"));
Viewpoint289.setDescription(CString("ArtDeco16"));
Viewpoint289.setPosition(new float[]{2.25,0.75,3.0});
Group50.addChild(&Viewpoint289);

Transform& Transform290 =  Transform();
Transform290.setTranslation(new float[]{2.25,0.75,0.0});
Anchor& Anchor291 =  Anchor();
Anchor291.setDescription(CString("ArtDeco16 view"));
Anchor291.setUrl(new CString[]{CString("#View16")}, 1);
Shape& Shape292 =  Shape();
Appearance& Appearance293 =  Appearance();
ProtoInstance& ProtoInstance294 =  ProtoInstance();
ProtoInstance294.setName(CString("ArtDeco16"));
Appearance293.addChild(&ProtoInstance294);

Shape292.addChild(&Appearance293);

Sphere& Sphere295 =  Sphere();
Sphere295.setUSE(CString("Ball"));
Shape292.setGeometry(&Sphere295);

Anchor291.addChild(&Shape292);

Transform290.addChild(&Anchor291);

Transform& Transform296 =  Transform();
Transform296.setTranslation(new float[]{0.0,0.3,0.5});
Anchor& Anchor297 =  Anchor();
Anchor297.setDescription(CString("ArtDeco16 view source documentation"));
Anchor297.setParameter(new CString[]{CString("target=_source")}, 1);
Anchor297.setUrl(new CString[]{CString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco16"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco16")}, 2);
Shape& Shape298 =  Shape();
Appearance& Appearance299 =  Appearance();
Material& Material300 =  Material();
Material300.setUSE(CString("TextMat"));
Appearance299.addChild(&Material300);

Shape298.addChild(&Appearance299);

Text& Text301 =  Text();
Text301.setString(new CString[]{CString("ArtDeco16")}, 1);
CFontStyle& FontStyle302 =  CFontStyle();
FontStyle302.setUSE(CString("Style"));
Text301.setFontStyle(&FontStyle302);

Shape298.setGeometry(&Text301);

Anchor297.addChild(&Shape298);

Transform296.addChild(&Anchor297);

Transform290.addChild(&Transform296);

Group50.addChild(&Transform290);

Viewpoint& Viewpoint303 =  Viewpoint();
Viewpoint303.setDEF(CString("View17"));
Viewpoint303.setDescription(CString("ArtDeco17"));
Viewpoint303.setPosition(new float[]{3.75,0.75,3.0});
Group50.addChild(&Viewpoint303);

Transform& Transform304 =  Transform();
Transform304.setTranslation(new float[]{3.75,0.75,0.0});
Anchor& Anchor305 =  Anchor();
Anchor305.setDescription(CString("ArtDeco17 view"));
Anchor305.setUrl(new CString[]{CString("#View17")}, 1);
Shape& Shape306 =  Shape();
Appearance& Appearance307 =  Appearance();
ProtoInstance& ProtoInstance308 =  ProtoInstance();
ProtoInstance308.setName(CString("ArtDeco17"));
Appearance307.addChild(&ProtoInstance308);

Shape306.addChild(&Appearance307);

Sphere& Sphere309 =  Sphere();
Sphere309.setUSE(CString("Ball"));
Shape306.setGeometry(&Sphere309);

Anchor305.addChild(&Shape306);

Transform304.addChild(&Anchor305);

Transform& Transform310 =  Transform();
Transform310.setTranslation(new float[]{0.0,0.3,0.5});
Anchor& Anchor311 =  Anchor();
Anchor311.setDescription(CString("ArtDeco17 view source documentation"));
Anchor311.setParameter(new CString[]{CString("target=_source")}, 1);
Anchor311.setUrl(new CString[]{CString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco7"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco17")}, 2);
Shape& Shape312 =  Shape();
Appearance& Appearance313 =  Appearance();
Material& Material314 =  Material();
Material314.setUSE(CString("TextMat"));
Appearance313.addChild(&Material314);

Shape312.addChild(&Appearance313);

Text& Text315 =  Text();
Text315.setString(new CString[]{CString("ArtDeco17")}, 1);
CFontStyle& FontStyle316 =  CFontStyle();
FontStyle316.setUSE(CString("Style"));
Text315.setFontStyle(&FontStyle316);

Shape312.setGeometry(&Text315);

Anchor311.addChild(&Shape312);

Transform310.addChild(&Anchor311);

Transform304.addChild(&Transform310);

Group50.addChild(&Transform304);

Viewpoint& Viewpoint317 =  Viewpoint();
Viewpoint317.setDEF(CString("View18"));
Viewpoint317.setDescription(CString("ArtDeco18"));
Viewpoint317.setPosition(new float[]{-3.75,-0.75,3.0});
Group50.addChild(&Viewpoint317);

Transform& Transform318 =  Transform();
Transform318.setTranslation(new float[]{-3.75,-0.75,0.0});
Anchor& Anchor319 =  Anchor();
Anchor319.setDescription(CString("ArtDeco18 view"));
Anchor319.setUrl(new CString[]{CString("#View18")}, 1);
Shape& Shape320 =  Shape();
Appearance& Appearance321 =  Appearance();
ProtoInstance& ProtoInstance322 =  ProtoInstance();
ProtoInstance322.setName(CString("ArtDeco18"));
Appearance321.addChild(&ProtoInstance322);

Shape320.addChild(&Appearance321);

Sphere& Sphere323 =  Sphere();
Sphere323.setUSE(CString("Ball"));
Shape320.setGeometry(&Sphere323);

Anchor319.addChild(&Shape320);

Transform318.addChild(&Anchor319);

Transform& Transform324 =  Transform();
Transform324.setTranslation(new float[]{0.0,0.3,0.5});
Anchor& Anchor325 =  Anchor();
Anchor325.setDescription(CString("ArtDeco18 view source documentation"));
Anchor325.setParameter(new CString[]{CString("target=_source")}, 1);
Anchor325.setUrl(new CString[]{CString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco18"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco18")}, 2);
Shape& Shape326 =  Shape();
Appearance& Appearance327 =  Appearance();
Material& Material328 =  Material();
Material328.setUSE(CString("TextMat"));
Appearance327.addChild(&Material328);

Shape326.addChild(&Appearance327);

Text& Text329 =  Text();
Text329.setString(new CString[]{CString("ArtDeco18")}, 1);
CFontStyle& FontStyle330 =  CFontStyle();
FontStyle330.setUSE(CString("Style"));
Text329.setFontStyle(&FontStyle330);

Shape326.setGeometry(&Text329);

Anchor325.addChild(&Shape326);

Transform324.addChild(&Anchor325);

Transform318.addChild(&Transform324);

Group50.addChild(&Transform318);

Viewpoint& Viewpoint331 =  Viewpoint();
Viewpoint331.setDEF(CString("View19"));
Viewpoint331.setDescription(CString("ArtDeco19"));
Viewpoint331.setPosition(new float[]{-2.25,-0.75,3.0});
Group50.addChild(&Viewpoint331);

Transform& Transform332 =  Transform();
Transform332.setTranslation(new float[]{-2.25,-0.75,0.0});
Anchor& Anchor333 =  Anchor();
Anchor333.setDescription(CString("ArtDeco19 view"));
Anchor333.setUrl(new CString[]{CString("#View19")}, 1);
Shape& Shape334 =  Shape();
Appearance& Appearance335 =  Appearance();
ProtoInstance& ProtoInstance336 =  ProtoInstance();
ProtoInstance336.setName(CString("ArtDeco19"));
Appearance335.addChild(&ProtoInstance336);

Shape334.addChild(&Appearance335);

Sphere& Sphere337 =  Sphere();
Sphere337.setUSE(CString("Ball"));
Shape334.setGeometry(&Sphere337);

Anchor333.addChild(&Shape334);

Transform332.addChild(&Anchor333);

Transform& Transform338 =  Transform();
Transform338.setTranslation(new float[]{0.0,0.3,0.5});
Anchor& Anchor339 =  Anchor();
Anchor339.setDescription(CString("ArtDeco19 view source documentation"));
Anchor339.setParameter(new CString[]{CString("target=_source")}, 1);
Anchor339.setUrl(new CString[]{CString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco9"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco19")}, 2);
Shape& Shape340 =  Shape();
Appearance& Appearance341 =  Appearance();
Material& Material342 =  Material();
Material342.setUSE(CString("TextMat"));
Appearance341.addChild(&Material342);

Shape340.addChild(&Appearance341);

Text& Text343 =  Text();
Text343.setString(new CString[]{CString("ArtDeco19")}, 1);
CFontStyle& FontStyle344 =  CFontStyle();
FontStyle344.setUSE(CString("Style"));
Text343.setFontStyle(&FontStyle344);

Shape340.setGeometry(&Text343);

Anchor339.addChild(&Shape340);

Transform338.addChild(&Anchor339);

Transform332.addChild(&Transform338);

Group50.addChild(&Transform332);

Viewpoint& Viewpoint345 =  Viewpoint();
Viewpoint345.setDEF(CString("View20"));
Viewpoint345.setDescription(CString("ArtDeco20"));
Viewpoint345.setPosition(new float[]{-0.75,-0.75,3.0});
Group50.addChild(&Viewpoint345);

Transform& Transform346 =  Transform();
Transform346.setTranslation(new float[]{-0.75,-0.75,0.0});
Anchor& Anchor347 =  Anchor();
Anchor347.setDescription(CString("ArtDeco20 view"));
Anchor347.setUrl(new CString[]{CString("#View20")}, 1);
Shape& Shape348 =  Shape();
Appearance& Appearance349 =  Appearance();
ProtoInstance& ProtoInstance350 =  ProtoInstance();
ProtoInstance350.setName(CString("ArtDeco20"));
Appearance349.addChild(&ProtoInstance350);

Shape348.addChild(&Appearance349);

Sphere& Sphere351 =  Sphere();
Sphere351.setUSE(CString("Ball"));
Shape348.setGeometry(&Sphere351);

Anchor347.addChild(&Shape348);

Transform346.addChild(&Anchor347);

Transform& Transform352 =  Transform();
Transform352.setTranslation(new float[]{0.0,0.3,0.5});
Anchor& Anchor353 =  Anchor();
Anchor353.setDescription(CString("ArtDeco20 view source documentation"));
Anchor353.setParameter(new CString[]{CString("target=_source")}, 1);
Anchor353.setUrl(new CString[]{CString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco20"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco20")}, 2);
Shape& Shape354 =  Shape();
Appearance& Appearance355 =  Appearance();
Material& Material356 =  Material();
Material356.setUSE(CString("TextMat"));
Appearance355.addChild(&Material356);

Shape354.addChild(&Appearance355);

Text& Text357 =  Text();
Text357.setString(new CString[]{CString("ArtDeco20")}, 1);
CFontStyle& FontStyle358 =  CFontStyle();
FontStyle358.setUSE(CString("Style"));
Text357.setFontStyle(&FontStyle358);

Shape354.setGeometry(&Text357);

Anchor353.addChild(&Shape354);

Transform352.addChild(&Anchor353);

Transform346.addChild(&Transform352);

Group50.addChild(&Transform346);

Viewpoint& Viewpoint359 =  Viewpoint();
Viewpoint359.setDEF(CString("View21"));
Viewpoint359.setDescription(CString("ArtDeco21"));
Viewpoint359.setPosition(new float[]{0.75,-0.75,3.0});
Group50.addChild(&Viewpoint359);

Transform& Transform360 =  Transform();
Transform360.setTranslation(new float[]{0.75,-0.75,0.0});
Anchor& Anchor361 =  Anchor();
Anchor361.setDescription(CString("ArtDeco21 view"));
Anchor361.setUrl(new CString[]{CString("#View21")}, 1);
Shape& Shape362 =  Shape();
Appearance& Appearance363 =  Appearance();
ProtoInstance& ProtoInstance364 =  ProtoInstance();
ProtoInstance364.setName(CString("ArtDeco21"));
Appearance363.addChild(&ProtoInstance364);

Shape362.addChild(&Appearance363);

Sphere& Sphere365 =  Sphere();
Sphere365.setUSE(CString("Ball"));
Shape362.setGeometry(&Sphere365);

Anchor361.addChild(&Shape362);

Transform360.addChild(&Anchor361);

Transform& Transform366 =  Transform();
Transform366.setTranslation(new float[]{0.0,0.3,0.5});
Anchor& Anchor367 =  Anchor();
Anchor367.setDescription(CString("ArtDeco21 view source documentation"));
Anchor367.setParameter(new CString[]{CString("target=_source")}, 1);
Anchor367.setUrl(new CString[]{CString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco21"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco21")}, 2);
Shape& Shape368 =  Shape();
Appearance& Appearance369 =  Appearance();
Material& Material370 =  Material();
Material370.setUSE(CString("TextMat"));
Appearance369.addChild(&Material370);

Shape368.addChild(&Appearance369);

Text& Text371 =  Text();
Text371.setString(new CString[]{CString("ArtDeco21")}, 1);
CFontStyle& FontStyle372 =  CFontStyle();
FontStyle372.setUSE(CString("Style"));
Text371.setFontStyle(&FontStyle372);

Shape368.setGeometry(&Text371);

Anchor367.addChild(&Shape368);

Transform366.addChild(&Anchor367);

Transform360.addChild(&Transform366);

Group50.addChild(&Transform360);

Viewpoint& Viewpoint373 =  Viewpoint();
Viewpoint373.setDEF(CString("View22"));
Viewpoint373.setDescription(CString("ArtDeco22"));
Viewpoint373.setPosition(new float[]{2.25,-0.75,3.0});
Group50.addChild(&Viewpoint373);

Transform& Transform374 =  Transform();
Transform374.setTranslation(new float[]{2.25,-0.75,0.0});
Anchor& Anchor375 =  Anchor();
Anchor375.setDescription(CString("ArtDeco22 view"));
Anchor375.setUrl(new CString[]{CString("#View22")}, 1);
Shape& Shape376 =  Shape();
Appearance& Appearance377 =  Appearance();
ProtoInstance& ProtoInstance378 =  ProtoInstance();
ProtoInstance378.setName(CString("ArtDeco22"));
Appearance377.addChild(&ProtoInstance378);

Shape376.addChild(&Appearance377);

Sphere& Sphere379 =  Sphere();
Sphere379.setUSE(CString("Ball"));
Shape376.setGeometry(&Sphere379);

Anchor375.addChild(&Shape376);

Transform374.addChild(&Anchor375);

Transform& Transform380 =  Transform();
Transform380.setTranslation(new float[]{0.0,0.3,0.5});
Anchor& Anchor381 =  Anchor();
Anchor381.setDescription(CString("ArtDeco22 view source documentation"));
Anchor381.setParameter(new CString[]{CString("target=_source")}, 1);
Anchor381.setUrl(new CString[]{CString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco22"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco22")}, 2);
Shape& Shape382 =  Shape();
Appearance& Appearance383 =  Appearance();
Material& Material384 =  Material();
Material384.setUSE(CString("TextMat"));
Appearance383.addChild(&Material384);

Shape382.addChild(&Appearance383);

Text& Text385 =  Text();
Text385.setString(new CString[]{CString("ArtDeco22")}, 1);
CFontStyle& FontStyle386 =  CFontStyle();
FontStyle386.setUSE(CString("Style"));
Text385.setFontStyle(&FontStyle386);

Shape382.setGeometry(&Text385);

Anchor381.addChild(&Shape382);

Transform380.addChild(&Anchor381);

Transform374.addChild(&Transform380);

Group50.addChild(&Transform374);

Viewpoint& Viewpoint387 =  Viewpoint();
Viewpoint387.setDEF(CString("View23"));
Viewpoint387.setDescription(CString("ArtDeco23"));
Viewpoint387.setPosition(new float[]{3.75,-0.75,3.0});
Group50.addChild(&Viewpoint387);

Transform& Transform388 =  Transform();
Transform388.setTranslation(new float[]{3.75,-0.75,0.0});
Anchor& Anchor389 =  Anchor();
Anchor389.setDescription(CString("ArtDeco23 view"));
Anchor389.setUrl(new CString[]{CString("#View23")}, 1);
Shape& Shape390 =  Shape();
Appearance& Appearance391 =  Appearance();
ProtoInstance& ProtoInstance392 =  ProtoInstance();
ProtoInstance392.setName(CString("ArtDeco23"));
Appearance391.addChild(&ProtoInstance392);

Shape390.addChild(&Appearance391);

Sphere& Sphere393 =  Sphere();
Sphere393.setUSE(CString("Ball"));
Shape390.setGeometry(&Sphere393);

Anchor389.addChild(&Shape390);

Transform388.addChild(&Anchor389);

Transform& Transform394 =  Transform();
Transform394.setTranslation(new float[]{0.0,0.3,0.5});
Anchor& Anchor395 =  Anchor();
Anchor395.setDescription(CString("ArtDeco23 view source documentation"));
Anchor395.setParameter(new CString[]{CString("target=_source")}, 1);
Anchor395.setUrl(new CString[]{CString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco23"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco23")}, 2);
Shape& Shape396 =  Shape();
Appearance& Appearance397 =  Appearance();
Material& Material398 =  Material();
Material398.setUSE(CString("TextMat"));
Appearance397.addChild(&Material398);

Shape396.addChild(&Appearance397);

Text& Text399 =  Text();
Text399.setString(new CString[]{CString("ArtDeco23")}, 1);
CFontStyle& FontStyle400 =  CFontStyle();
FontStyle400.setUSE(CString("Style"));
Text399.setFontStyle(&FontStyle400);

Shape396.setGeometry(&Text399);

Anchor395.addChild(&Shape396);

Transform394.addChild(&Anchor395);

Transform388.addChild(&Transform394);

Group50.addChild(&Transform388);

Viewpoint& Viewpoint401 =  Viewpoint();
Viewpoint401.setDEF(CString("View24"));
Viewpoint401.setDescription(CString("ArtDeco24"));
Viewpoint401.setPosition(new float[]{-3.75,-2.25,3.0});
Group50.addChild(&Viewpoint401);

Transform& Transform402 =  Transform();
Transform402.setTranslation(new float[]{-3.75,-2.25,0.0});
Anchor& Anchor403 =  Anchor();
Anchor403.setDescription(CString("ArtDeco24 view"));
Anchor403.setUrl(new CString[]{CString("#View24")}, 1);
Shape& Shape404 =  Shape();
Appearance& Appearance405 =  Appearance();
ProtoInstance& ProtoInstance406 =  ProtoInstance();
ProtoInstance406.setName(CString("ArtDeco24"));
Appearance405.addChild(&ProtoInstance406);

Shape404.addChild(&Appearance405);

Sphere& Sphere407 =  Sphere();
Sphere407.setUSE(CString("Ball"));
Shape404.setGeometry(&Sphere407);

Anchor403.addChild(&Shape404);

Transform402.addChild(&Anchor403);

Transform& Transform408 =  Transform();
Transform408.setTranslation(new float[]{0.0,0.3,0.5});
Anchor& Anchor409 =  Anchor();
Anchor409.setDescription(CString("ArtDeco24 view source documentation"));
Anchor409.setParameter(new CString[]{CString("target=_source")}, 1);
Anchor409.setUrl(new CString[]{CString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco24"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco24")}, 2);
Shape& Shape410 =  Shape();
Appearance& Appearance411 =  Appearance();
Material& Material412 =  Material();
Material412.setUSE(CString("TextMat"));
Appearance411.addChild(&Material412);

Shape410.addChild(&Appearance411);

Text& Text413 =  Text();
Text413.setString(new CString[]{CString("ArtDeco24")}, 1);
CFontStyle& FontStyle414 =  CFontStyle();
FontStyle414.setUSE(CString("Style"));
Text413.setFontStyle(&FontStyle414);

Shape410.setGeometry(&Text413);

Anchor409.addChild(&Shape410);

Transform408.addChild(&Anchor409);

Transform402.addChild(&Transform408);

Group50.addChild(&Transform402);

Viewpoint& Viewpoint415 =  Viewpoint();
Viewpoint415.setDEF(CString("View25"));
Viewpoint415.setDescription(CString("ArtDeco25"));
Viewpoint415.setPosition(new float[]{-2.25,-2.25,3.0});
Group50.addChild(&Viewpoint415);

Transform& Transform416 =  Transform();
Transform416.setTranslation(new float[]{-2.25,-2.25,0.0});
Anchor& Anchor417 =  Anchor();
Anchor417.setDescription(CString("ArtDeco25 view"));
Anchor417.setUrl(new CString[]{CString("#View25")}, 1);
Shape& Shape418 =  Shape();
Appearance& Appearance419 =  Appearance();
ProtoInstance& ProtoInstance420 =  ProtoInstance();
ProtoInstance420.setName(CString("ArtDeco25"));
Appearance419.addChild(&ProtoInstance420);

Shape418.addChild(&Appearance419);

Sphere& Sphere421 =  Sphere();
Sphere421.setUSE(CString("Ball"));
Shape418.setGeometry(&Sphere421);

Anchor417.addChild(&Shape418);

Transform416.addChild(&Anchor417);

Transform& Transform422 =  Transform();
Transform422.setTranslation(new float[]{0.0,0.3,0.5});
Anchor& Anchor423 =  Anchor();
Anchor423.setDescription(CString("ArtDeco25 view source documentation"));
Anchor423.setParameter(new CString[]{CString("target=_source")}, 1);
Anchor423.setUrl(new CString[]{CString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco25"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco25")}, 2);
Shape& Shape424 =  Shape();
Appearance& Appearance425 =  Appearance();
Material& Material426 =  Material();
Material426.setUSE(CString("TextMat"));
Appearance425.addChild(&Material426);

Shape424.addChild(&Appearance425);

Text& Text427 =  Text();
Text427.setString(new CString[]{CString("ArtDeco25")}, 1);
CFontStyle& FontStyle428 =  CFontStyle();
FontStyle428.setUSE(CString("Style"));
Text427.setFontStyle(&FontStyle428);

Shape424.setGeometry(&Text427);

Anchor423.addChild(&Shape424);

Transform422.addChild(&Anchor423);

Transform416.addChild(&Transform422);

Group50.addChild(&Transform416);

Viewpoint& Viewpoint429 =  Viewpoint();
Viewpoint429.setDEF(CString("View26"));
Viewpoint429.setDescription(CString("ArtDeco26"));
Viewpoint429.setPosition(new float[]{-0.75,-2.25,3.0});
Group50.addChild(&Viewpoint429);

Transform& Transform430 =  Transform();
Transform430.setTranslation(new float[]{-0.75,-2.25,0.0});
Anchor& Anchor431 =  Anchor();
Anchor431.setDescription(CString("ArtDeco26 view"));
Anchor431.setUrl(new CString[]{CString("#View26")}, 1);
Shape& Shape432 =  Shape();
Appearance& Appearance433 =  Appearance();
ProtoInstance& ProtoInstance434 =  ProtoInstance();
ProtoInstance434.setName(CString("ArtDeco26"));
Appearance433.addChild(&ProtoInstance434);

Shape432.addChild(&Appearance433);

Sphere& Sphere435 =  Sphere();
Sphere435.setUSE(CString("Ball"));
Shape432.setGeometry(&Sphere435);

Anchor431.addChild(&Shape432);

Transform430.addChild(&Anchor431);

Transform& Transform436 =  Transform();
Transform436.setTranslation(new float[]{0.0,0.3,0.5});
Anchor& Anchor437 =  Anchor();
Anchor437.setDescription(CString("ArtDeco26 view source documentation"));
Anchor437.setParameter(new CString[]{CString("target=_source")}, 1);
Anchor437.setUrl(new CString[]{CString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco26"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco26")}, 2);
Shape& Shape438 =  Shape();
Appearance& Appearance439 =  Appearance();
Material& Material440 =  Material();
Material440.setUSE(CString("TextMat"));
Appearance439.addChild(&Material440);

Shape438.addChild(&Appearance439);

Text& Text441 =  Text();
Text441.setString(new CString[]{CString("ArtDeco26")}, 1);
CFontStyle& FontStyle442 =  CFontStyle();
FontStyle442.setUSE(CString("Style"));
Text441.setFontStyle(&FontStyle442);

Shape438.setGeometry(&Text441);

Anchor437.addChild(&Shape438);

Transform436.addChild(&Anchor437);

Transform430.addChild(&Transform436);

Group50.addChild(&Transform430);

Viewpoint& Viewpoint443 =  Viewpoint();
Viewpoint443.setDEF(CString("View27"));
Viewpoint443.setDescription(CString("ArtDeco27"));
Viewpoint443.setPosition(new float[]{0.75,-2.25,3.0});
Group50.addChild(&Viewpoint443);

Transform& Transform444 =  Transform();
Transform444.setTranslation(new float[]{0.75,-2.25,0.0});
Anchor& Anchor445 =  Anchor();
Anchor445.setDescription(CString("ArtDeco27 view"));
Anchor445.setUrl(new CString[]{CString("#View27")}, 1);
Shape& Shape446 =  Shape();
Appearance& Appearance447 =  Appearance();
ProtoInstance& ProtoInstance448 =  ProtoInstance();
ProtoInstance448.setName(CString("ArtDeco27"));
Appearance447.addChild(&ProtoInstance448);

Shape446.addChild(&Appearance447);

Sphere& Sphere449 =  Sphere();
Sphere449.setUSE(CString("Ball"));
Shape446.setGeometry(&Sphere449);

Anchor445.addChild(&Shape446);

Transform444.addChild(&Anchor445);

Transform& Transform450 =  Transform();
Transform450.setTranslation(new float[]{0.0,0.3,0.5});
Anchor& Anchor451 =  Anchor();
Anchor451.setDescription(CString("ArtDeco27 view source documentation"));
Anchor451.setParameter(new CString[]{CString("target=_source")}, 1);
Anchor451.setUrl(new CString[]{CString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco27"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco27")}, 2);
Shape& Shape452 =  Shape();
Appearance& Appearance453 =  Appearance();
Material& Material454 =  Material();
Material454.setUSE(CString("TextMat"));
Appearance453.addChild(&Material454);

Shape452.addChild(&Appearance453);

Text& Text455 =  Text();
Text455.setString(new CString[]{CString("ArtDeco27")}, 1);
CFontStyle& FontStyle456 =  CFontStyle();
FontStyle456.setUSE(CString("Style"));
Text455.setFontStyle(&FontStyle456);

Shape452.setGeometry(&Text455);

Anchor451.addChild(&Shape452);

Transform450.addChild(&Anchor451);

Transform444.addChild(&Transform450);

Group50.addChild(&Transform444);

Viewpoint& Viewpoint457 =  Viewpoint();
Viewpoint457.setDEF(CString("View28"));
Viewpoint457.setDescription(CString("ArtDeco28"));
Viewpoint457.setPosition(new float[]{2.25,-2.25,3.0});
Group50.addChild(&Viewpoint457);

Transform& Transform458 =  Transform();
Transform458.setTranslation(new float[]{2.25,-2.25,0.0});
Anchor& Anchor459 =  Anchor();
Anchor459.setDescription(CString("ArtDeco28 view"));
Anchor459.setUrl(new CString[]{CString("#View28")}, 1);
Shape& Shape460 =  Shape();
Appearance& Appearance461 =  Appearance();
ProtoInstance& ProtoInstance462 =  ProtoInstance();
ProtoInstance462.setName(CString("ArtDeco28"));
Appearance461.addChild(&ProtoInstance462);

Shape460.addChild(&Appearance461);

Sphere& Sphere463 =  Sphere();
Sphere463.setUSE(CString("Ball"));
Shape460.setGeometry(&Sphere463);

Anchor459.addChild(&Shape460);

Transform458.addChild(&Anchor459);

Transform& Transform464 =  Transform();
Transform464.setTranslation(new float[]{0.0,0.3,0.5});
Anchor& Anchor465 =  Anchor();
Anchor465.setDescription(CString("ArtDeco28 view source documentation"));
Anchor465.setParameter(new CString[]{CString("target=_source")}, 1);
Anchor465.setUrl(new CString[]{CString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco28"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco28")}, 2);
Shape& Shape466 =  Shape();
Appearance& Appearance467 =  Appearance();
Material& Material468 =  Material();
Material468.setUSE(CString("TextMat"));
Appearance467.addChild(&Material468);

Shape466.addChild(&Appearance467);

Text& Text469 =  Text();
Text469.setString(new CString[]{CString("ArtDeco28")}, 1);
CFontStyle& FontStyle470 =  CFontStyle();
FontStyle470.setUSE(CString("Style"));
Text469.setFontStyle(&FontStyle470);

Shape466.setGeometry(&Text469);

Anchor465.addChild(&Shape466);

Transform464.addChild(&Anchor465);

Transform458.addChild(&Transform464);

Group50.addChild(&Transform458);

Viewpoint& Viewpoint471 =  Viewpoint();
Viewpoint471.setDEF(CString("View29"));
Viewpoint471.setDescription(CString("ArtDeco29"));
Viewpoint471.setPosition(new float[]{3.75,-2.25,3.0});
Group50.addChild(&Viewpoint471);

Transform& Transform472 =  Transform();
Transform472.setTranslation(new float[]{3.75,-2.25,0.0});
Anchor& Anchor473 =  Anchor();
Anchor473.setDescription(CString("ArtDeco29 view"));
Anchor473.setUrl(new CString[]{CString("#View29")}, 1);
Shape& Shape474 =  Shape();
Appearance& Appearance475 =  Appearance();
ProtoInstance& ProtoInstance476 =  ProtoInstance();
ProtoInstance476.setName(CString("ArtDeco29"));
Appearance475.addChild(&ProtoInstance476);

Shape474.addChild(&Appearance475);

Sphere& Sphere477 =  Sphere();
Sphere477.setUSE(CString("Ball"));
Shape474.setGeometry(&Sphere477);

Anchor473.addChild(&Shape474);

Transform472.addChild(&Anchor473);

Transform& Transform478 =  Transform();
Transform478.setTranslation(new float[]{0.0,0.3,0.5});
Anchor& Anchor479 =  Anchor();
Anchor479.setDescription(CString("ArtDeco29 view source documentation"));
Anchor479.setParameter(new CString[]{CString("target=_source")}, 1);
Anchor479.setUrl(new CString[]{CString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco29"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco29")}, 2);
Shape& Shape480 =  Shape();
Appearance& Appearance481 =  Appearance();
Material& Material482 =  Material();
Material482.setUSE(CString("TextMat"));
Appearance481.addChild(&Material482);

Shape480.addChild(&Appearance481);

Text& Text483 =  Text();
Text483.setString(new CString[]{CString("ArtDeco29")}, 1);
CFontStyle& FontStyle484 =  CFontStyle();
FontStyle484.setUSE(CString("Style"));
Text483.setFontStyle(&FontStyle484);

Shape480.setGeometry(&Text483);

Anchor479.addChild(&Shape480);

Transform478.addChild(&Anchor479);

Transform472.addChild(&Transform478);

Group50.addChild(&Transform472);

Viewpoint& Viewpoint485 =  Viewpoint();
Viewpoint485.setDEF(CString("View30"));
Viewpoint485.setDescription(CString("ArtDeco30"));
Viewpoint485.setPosition(new float[]{-3.75,-3.75,3.0});
Group50.addChild(&Viewpoint485);

Transform& Transform486 =  Transform();
Transform486.setTranslation(new float[]{-3.75,-3.75,0.0});
Anchor& Anchor487 =  Anchor();
Anchor487.setDescription(CString("ArtDeco30 view"));
Anchor487.setUrl(new CString[]{CString("#View30")}, 1);
Shape& Shape488 =  Shape();
Appearance& Appearance489 =  Appearance();
ProtoInstance& ProtoInstance490 =  ProtoInstance();
ProtoInstance490.setName(CString("ArtDeco30"));
Appearance489.addChild(&ProtoInstance490);

Shape488.addChild(&Appearance489);

Sphere& Sphere491 =  Sphere();
Sphere491.setUSE(CString("Ball"));
Shape488.setGeometry(&Sphere491);

Anchor487.addChild(&Shape488);

Transform486.addChild(&Anchor487);

Transform& Transform492 =  Transform();
Transform492.setTranslation(new float[]{0.0,0.3,0.5});
Anchor& Anchor493 =  Anchor();
Anchor493.setDescription(CString("ArtDeco30 view source documentation"));
Anchor493.setParameter(new CString[]{CString("target=_source")}, 1);
Anchor493.setUrl(new CString[]{CString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco30"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco30")}, 2);
Shape& Shape494 =  Shape();
Appearance& Appearance495 =  Appearance();
Material& Material496 =  Material();
Material496.setUSE(CString("TextMat"));
Appearance495.addChild(&Material496);

Shape494.addChild(&Appearance495);

Text& Text497 =  Text();
Text497.setString(new CString[]{CString("ArtDeco30")}, 1);
CFontStyle& FontStyle498 =  CFontStyle();
FontStyle498.setUSE(CString("Style"));
Text497.setFontStyle(&FontStyle498);

Shape494.setGeometry(&Text497);

Anchor493.addChild(&Shape494);

Transform492.addChild(&Anchor493);

Transform486.addChild(&Transform492);

Group50.addChild(&Transform486);

Viewpoint& Viewpoint499 =  Viewpoint();
Viewpoint499.setDEF(CString("View31"));
Viewpoint499.setDescription(CString("ArtDeco31"));
Viewpoint499.setPosition(new float[]{-2.25,-3.75,3.0});
Group50.addChild(&Viewpoint499);

Transform& Transform500 =  Transform();
Transform500.setTranslation(new float[]{-2.25,-3.75,0.0});
Anchor& Anchor501 =  Anchor();
Anchor501.setDescription(CString("ArtDeco31 view"));
Anchor501.setUrl(new CString[]{CString("#View31")}, 1);
Shape& Shape502 =  Shape();
Appearance& Appearance503 =  Appearance();
ProtoInstance& ProtoInstance504 =  ProtoInstance();
ProtoInstance504.setName(CString("ArtDeco31"));
Appearance503.addChild(&ProtoInstance504);

Shape502.addChild(&Appearance503);

Sphere& Sphere505 =  Sphere();
Sphere505.setUSE(CString("Ball"));
Shape502.setGeometry(&Sphere505);

Anchor501.addChild(&Shape502);

Transform500.addChild(&Anchor501);

Transform& Transform506 =  Transform();
Transform506.setTranslation(new float[]{0.0,0.3,0.5});
Anchor& Anchor507 =  Anchor();
Anchor507.setDescription(CString("ArtDeco31 view source documentation"));
Anchor507.setParameter(new CString[]{CString("target=_source")}, 1);
Anchor507.setUrl(new CString[]{CString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco31"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco31")}, 2);
Shape& Shape508 =  Shape();
Appearance& Appearance509 =  Appearance();
Material& Material510 =  Material();
Material510.setUSE(CString("TextMat"));
Appearance509.addChild(&Material510);

Shape508.addChild(&Appearance509);

Text& Text511 =  Text();
Text511.setString(new CString[]{CString("ArtDeco31")}, 1);
CFontStyle& FontStyle512 =  CFontStyle();
FontStyle512.setUSE(CString("Style"));
Text511.setFontStyle(&FontStyle512);

Shape508.setGeometry(&Text511);

Anchor507.addChild(&Shape508);

Transform506.addChild(&Anchor507);

Transform500.addChild(&Transform506);

Group50.addChild(&Transform500);

Viewpoint& Viewpoint513 =  Viewpoint();
Viewpoint513.setDEF(CString("View32"));
Viewpoint513.setDescription(CString("ArtDeco32"));
Viewpoint513.setPosition(new float[]{-0.75,-3.75,3.0});
Group50.addChild(&Viewpoint513);

Transform& Transform514 =  Transform();
Transform514.setTranslation(new float[]{-0.75,-3.75,0.0});
Anchor& Anchor515 =  Anchor();
Anchor515.setDescription(CString("ArtDeco32 view"));
Anchor515.setUrl(new CString[]{CString("#View32")}, 1);
Shape& Shape516 =  Shape();
Appearance& Appearance517 =  Appearance();
ProtoInstance& ProtoInstance518 =  ProtoInstance();
ProtoInstance518.setName(CString("ArtDeco32"));
Appearance517.addChild(&ProtoInstance518);

Shape516.addChild(&Appearance517);

Sphere& Sphere519 =  Sphere();
Sphere519.setUSE(CString("Ball"));
Shape516.setGeometry(&Sphere519);

Anchor515.addChild(&Shape516);

Transform514.addChild(&Anchor515);

Transform& Transform520 =  Transform();
Transform520.setTranslation(new float[]{0.0,0.3,0.5});
Anchor& Anchor521 =  Anchor();
Anchor521.setDescription(CString("ArtDeco32 view source documentation"));
Anchor521.setParameter(new CString[]{CString("target=_source")}, 1);
Anchor521.setUrl(new CString[]{CString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco32"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco32")}, 2);
Shape& Shape522 =  Shape();
Appearance& Appearance523 =  Appearance();
Material& Material524 =  Material();
Material524.setUSE(CString("TextMat"));
Appearance523.addChild(&Material524);

Shape522.addChild(&Appearance523);

Text& Text525 =  Text();
Text525.setString(new CString[]{CString("ArtDeco32")}, 1);
CFontStyle& FontStyle526 =  CFontStyle();
FontStyle526.setUSE(CString("Style"));
Text525.setFontStyle(&FontStyle526);

Shape522.setGeometry(&Text525);

Anchor521.addChild(&Shape522);

Transform520.addChild(&Anchor521);

Transform514.addChild(&Transform520);

Group50.addChild(&Transform514);

Viewpoint& Viewpoint527 =  Viewpoint();
Viewpoint527.setDEF(CString("View33"));
Viewpoint527.setDescription(CString("ArtDeco33"));
Viewpoint527.setPosition(new float[]{0.75,-3.75,3.0});
Group50.addChild(&Viewpoint527);

Transform& Transform528 =  Transform();
Transform528.setTranslation(new float[]{0.75,-3.75,0.0});
Anchor& Anchor529 =  Anchor();
Anchor529.setDescription(CString("ArtDeco33 view"));
Anchor529.setUrl(new CString[]{CString("#View33")}, 1);
Shape& Shape530 =  Shape();
Appearance& Appearance531 =  Appearance();
ProtoInstance& ProtoInstance532 =  ProtoInstance();
ProtoInstance532.setName(CString("ArtDeco33"));
Appearance531.addChild(&ProtoInstance532);

Shape530.addChild(&Appearance531);

Sphere& Sphere533 =  Sphere();
Sphere533.setUSE(CString("Ball"));
Shape530.setGeometry(&Sphere533);

Anchor529.addChild(&Shape530);

Transform528.addChild(&Anchor529);

Transform& Transform534 =  Transform();
Transform534.setTranslation(new float[]{0.0,0.3,0.5});
Anchor& Anchor535 =  Anchor();
Anchor535.setDescription(CString("ArtDeco33 view source documentation"));
Anchor535.setParameter(new CString[]{CString("target=_source")}, 1);
Anchor535.setUrl(new CString[]{CString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco33"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco33")}, 2);
Shape& Shape536 =  Shape();
Appearance& Appearance537 =  Appearance();
Material& Material538 =  Material();
Material538.setUSE(CString("TextMat"));
Appearance537.addChild(&Material538);

Shape536.addChild(&Appearance537);

Text& Text539 =  Text();
Text539.setString(new CString[]{CString("ArtDeco33")}, 1);
CFontStyle& FontStyle540 =  CFontStyle();
FontStyle540.setUSE(CString("Style"));
Text539.setFontStyle(&FontStyle540);

Shape536.setGeometry(&Text539);

Anchor535.addChild(&Shape536);

Transform534.addChild(&Anchor535);

Transform528.addChild(&Transform534);

Group50.addChild(&Transform528);

Viewpoint& Viewpoint541 =  Viewpoint();
Viewpoint541.setDEF(CString("View34"));
Viewpoint541.setDescription(CString("ArtDeco34"));
Viewpoint541.setPosition(new float[]{2.25,-3.75,3.0});
Group50.addChild(&Viewpoint541);

Transform& Transform542 =  Transform();
Transform542.setTranslation(new float[]{2.25,-3.75,0.0});
Anchor& Anchor543 =  Anchor();
Anchor543.setDescription(CString("ArtDeco34 view"));
Anchor543.setUrl(new CString[]{CString("#View34")}, 1);
Shape& Shape544 =  Shape();
Appearance& Appearance545 =  Appearance();
ProtoInstance& ProtoInstance546 =  ProtoInstance();
ProtoInstance546.setName(CString("ArtDeco34"));
Appearance545.addChild(&ProtoInstance546);

Shape544.addChild(&Appearance545);

Sphere& Sphere547 =  Sphere();
Sphere547.setUSE(CString("Ball"));
Shape544.setGeometry(&Sphere547);

Anchor543.addChild(&Shape544);

Transform542.addChild(&Anchor543);

Transform& Transform548 =  Transform();
Transform548.setTranslation(new float[]{0.0,0.3,0.5});
Anchor& Anchor549 =  Anchor();
Anchor549.setDescription(CString("ArtDeco34 view source documentation"));
Anchor549.setParameter(new CString[]{CString("target=_source")}, 1);
Anchor549.setUrl(new CString[]{CString("ArtDecoPrototypes.html#ProtoDeclare_ArtDeco34"), CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco34")}, 2);
Shape& Shape550 =  Shape();
Appearance& Appearance551 =  Appearance();
Material& Material552 =  Material();
Material552.setUSE(CString("TextMat"));
Appearance551.addChild(&Material552);

Shape550.addChild(&Appearance551);

Text& Text553 =  Text();
Text553.setString(new CString[]{CString("ArtDeco34")}, 1);
CFontStyle& FontStyle554 =  CFontStyle();
FontStyle554.setUSE(CString("Style"));
Text553.setFontStyle(&FontStyle554);

Shape550.setGeometry(&Text553);

Anchor549.addChild(&Shape550);

Transform548.addChild(&Anchor549);

Transform542.addChild(&Transform548);

Group50.addChild(&Transform542);

Scene13.addChild(&Group50);

ROUTE& ROUTE555 =  ROUTE();
ROUTE555.setFromField(CString("fraction_changed"));
ROUTE555.setFromNode(CString("Close_Time"));
ROUTE555.setToField(CString("set_fraction"));
ROUTE555.setToNode(CString("Close_Mover"));
Scene13.addChild(&ROUTE555);

ROUTE& ROUTE556 =  ROUTE();
ROUTE556.setFromField(CString("value_changed"));
ROUTE556.setFromNode(CString("Close_Mover"));
ROUTE556.setToField(CString("set_translation"));
ROUTE556.setToNode(CString("Close_travel"));
Scene13.addChild(&ROUTE556);

X3D0.setScene(&Scene13);

//}
