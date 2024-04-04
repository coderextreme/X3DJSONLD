//#define False false
//#define True true
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
//int main(int argc, char ** argv) 
//{
X3D& X3D0 =  X3D();
X3D0.setProfile(CString("Immersive"));
X3D0.setVersion(CString("3.0"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(CString("title"));
meta2.setContent(CString("ArtDecoPrototypes.x3d"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(CString("description"));
meta3.setContent(CString("Prototype declarations defining values for X3D/VRML materials, originally converted from SGI's Open Inventor material examples."));
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
meta7.setContent(CString("20 October 2019"));
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
meta10.setContent(CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d"));
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
WorldInfo14.setTitle(CString("ArtDecoPrototypes.x3d"));
Scene13.addChild(&WorldInfo14);

ProtoDeclare& ProtoDeclare15 =  ProtoDeclare();
ProtoDeclare15.setName(CString("ArtDeco00"));
ProtoDeclare15.setAppinfo(CString("UniversalMediaMaterials prototype"));
ProtoDeclare15.setDocumentation(CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
ProtoBody& ProtoBody16 =  ProtoBody();
Material& Material17 =  Material();
Material17.setAmbientIntensity(0.25);
Material17.setDiffuseColor(new float[3]{0.282435,0.085159,0.134462});
Material17.setShininess(0.127273);
Material17.setSpecularColor(new float[3]{0.276305,0.11431,0.139857});
ProtoBody16.addChild(&Material17);

ProtoDeclare15.addChild(&ProtoBody16);

Scene13.addChild(&ProtoDeclare15);

ProtoDeclare& ProtoDeclare18 =  ProtoDeclare();
ProtoDeclare18.setName(CString("ArtDeco01"));
ProtoDeclare18.setAppinfo(CString("UniversalMediaMaterials prototype"));
ProtoDeclare18.setDocumentation(CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
ProtoBody& ProtoBody19 =  ProtoBody();
Material& Material20 =  Material();
Material20.setAmbientIntensity(0.254777);
Material20.setDiffuseColor(new float[3]{0.685208,0.134679,0.332385});
Material20.setShininess(0.071429);
Material20.setSpecularColor(new float[3]{0.122449,0.050035,0.050035});
ProtoBody19.addChild(&Material20);

ProtoDeclare18.addChild(&ProtoBody19);

Scene13.addChild(&ProtoDeclare18);

ProtoDeclare& ProtoDeclare21 =  ProtoDeclare();
ProtoDeclare21.setName(CString("ArtDeco02"));
ProtoDeclare21.setAppinfo(CString("UniversalMediaMaterials prototype"));
ProtoDeclare21.setDocumentation(CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
//computed conversion ambientIntensity=1.745282, normalized to 1.0
ProtoBody& ProtoBody22 =  ProtoBody();
Material& Material23 =  Material();
Material23.setAmbientIntensity(1);
Material23.setDiffuseColor(new float[3]{0.536861,0.0529,0.245479});
Material23.setShininess(0.832432);
Material23.setSpecularColor(new float[3]{0.805292,0.765198,0.747416});
ProtoBody22.addChild(&Material23);

ProtoDeclare21.addChild(&ProtoBody22);

Scene13.addChild(&ProtoDeclare21);

ProtoDeclare& ProtoDeclare24 =  ProtoDeclare();
ProtoDeclare24.setName(CString("ArtDeco03"));
ProtoDeclare24.setAppinfo(CString("UniversalMediaMaterials prototype"));
ProtoDeclare24.setDocumentation(CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
ProtoBody& ProtoBody25 =  ProtoBody();
Material& Material26 =  Material();
Material26.setAmbientIntensity(0.248649);
Material26.setDiffuseColor(new float[3]{1.0,0.452381,0.40339});
Material26.setShininess(0.902703);
Material26.setSpecularColor(new float[3]{0.686486,0.396903,0.419275});
ProtoBody25.addChild(&Material26);

ProtoDeclare24.addChild(&ProtoBody25);

Scene13.addChild(&ProtoDeclare24);

ProtoDeclare& ProtoDeclare27 =  ProtoDeclare();
ProtoDeclare27.setName(CString("ArtDeco04"));
ProtoDeclare27.setAppinfo(CString("UniversalMediaMaterials prototype"));
ProtoDeclare27.setDocumentation(CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
ProtoBody& ProtoBody28 =  ProtoBody();
Material& Material29 =  Material();
Material29.setAmbientIntensity(0.25);
Material29.setDiffuseColor(new float[3]{0.748016,0.298362,0.342624});
Material29.setShininess(0.69697);
Material29.setSpecularColor(new float[3]{0.345455,0.345455,0.345455});
ProtoBody28.addChild(&Material29);

ProtoDeclare27.addChild(&ProtoBody28);

Scene13.addChild(&ProtoDeclare27);

ProtoDeclare& ProtoDeclare30 =  ProtoDeclare();
ProtoDeclare30.setName(CString("ArtDeco05"));
ProtoDeclare30.setAppinfo(CString("UniversalMediaMaterials prototype"));
ProtoDeclare30.setDocumentation(CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
ProtoBody& ProtoBody31 =  ProtoBody();
Material& Material32 =  Material();
Material32.setAmbientIntensity(0.24359);
Material32.setDiffuseColor(new float[3]{0.945455,0.318988,0.321717});
Material32.setShininess(0.018182);
Material32.setSpecularColor(new float[3]{0.072727,0.021705,0.010732});
ProtoBody31.addChild(&Material32);

ProtoDeclare30.addChild(&ProtoBody31);

Scene13.addChild(&ProtoDeclare30);

ProtoDeclare& ProtoDeclare33 =  ProtoDeclare();
ProtoDeclare33.setName(CString("ArtDeco06"));
ProtoDeclare33.setAppinfo(CString("UniversalMediaMaterials prototype"));
ProtoDeclare33.setDocumentation(CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
ProtoBody& ProtoBody34 =  ProtoBody();
Material& Material35 =  Material();
Material35.setAmbientIntensity(0.25946);
Material35.setDiffuseColor(new float[3]{0.228655,0.195513,0.425484});
Material35.setShininess(0.542553);
Material35.setSpecularColor(new float[3]{0.324504,0.404255,0.404255});
ProtoBody34.addChild(&Material35);

ProtoDeclare33.addChild(&ProtoBody34);

Scene13.addChild(&ProtoDeclare33);

ProtoDeclare& ProtoDeclare36 =  ProtoDeclare();
ProtoDeclare36.setName(CString("ArtDeco07"));
ProtoDeclare36.setAppinfo(CString("UniversalMediaMaterials prototype"));
ProtoDeclare36.setDocumentation(CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
ProtoBody& ProtoBody37 =  ProtoBody();
Material& Material38 =  Material();
Material38.setAmbientIntensity(0.333333);
Material38.setDiffuseColor(new float[3]{0.200348,0.100857,0.320833});
Material38.setShininess(0.133333);
Material38.setSpecularColor(new float[3]{0.311358,0.387879,0.387879});
ProtoBody37.addChild(&Material38);

ProtoDeclare36.addChild(&ProtoBody37);

Scene13.addChild(&ProtoDeclare36);

ProtoDeclare& ProtoDeclare39 =  ProtoDeclare();
ProtoDeclare39.setName(CString("ArtDeco08"));
ProtoDeclare39.setAppinfo(CString("UniversalMediaMaterials prototype"));
ProtoDeclare39.setDocumentation(CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
ProtoBody& ProtoBody40 =  ProtoBody();
Material& Material41 =  Material();
Material41.setAmbientIntensity(0.242424);
Material41.setDiffuseColor(new float[3]{0.330519,0.3389,0.6});
Material41.setShininess(0.787879);
Material41.setSpecularColor(new float[3]{0.290909,0.290909,0.290909});
ProtoBody40.addChild(&Material41);

ProtoDeclare39.addChild(&ProtoBody40);

Scene13.addChild(&ProtoDeclare39);

ProtoDeclare& ProtoDeclare42 =  ProtoDeclare();
ProtoDeclare42.setName(CString("ArtDeco09"));
ProtoDeclare42.setAppinfo(CString("UniversalMediaMaterials prototype"));
ProtoDeclare42.setDocumentation(CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
ProtoBody& ProtoBody43 =  ProtoBody();
Material& Material44 =  Material();
Material44.setAmbientIntensity(0.333333);
Material44.setDiffuseColor(new float[3]{0.237059,0.096273,0.215625});
Material44.setShininess(0.133333);
Material44.setSpecularColor(new float[3]{0.311358,0.387879,0.387879});
ProtoBody43.addChild(&Material44);

ProtoDeclare42.addChild(&ProtoBody43);

Scene13.addChild(&ProtoDeclare42);

ProtoDeclare& ProtoDeclare45 =  ProtoDeclare();
ProtoDeclare45.setName(CString("ArtDeco10"));
ProtoDeclare45.setAppinfo(CString("UniversalMediaMaterials prototype"));
ProtoDeclare45.setDocumentation(CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
ProtoBody& ProtoBody46 =  ProtoBody();
Material& Material47 =  Material();
Material47.setAmbientIntensity(0.242425);
Material47.setDiffuseColor(new float[3]{0.304,0.09025,0.207364});
Material47.setShininess(0.072727);
Material47.setSpecularColor(new float[3]{0.6665,0.579046,0.830303});
ProtoBody46.addChild(&Material47);

ProtoDeclare45.addChild(&ProtoBody46);

Scene13.addChild(&ProtoDeclare45);

ProtoDeclare& ProtoDeclare48 =  ProtoDeclare();
ProtoDeclare48.setName(CString("ArtDeco11"));
ProtoDeclare48.setAppinfo(CString("UniversalMediaMaterials prototype"));
ProtoDeclare48.setDocumentation(CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
ProtoBody& ProtoBody49 =  ProtoBody();
Material& Material50 =  Material();
Material50.setAmbientIntensity(0.258928);
Material50.setDiffuseColor(new float[3]{0.335631,0.207672,0.238304});
Material50.setEmissiveColor(new float[3]{0.010638,0.010638,0.010638});
Material50.setShininess(0.021277);
Material50.setSpecularColor(new float[3]{0.198631,0.075403,0.138803});
ProtoBody49.addChild(&Material50);

ProtoDeclare48.addChild(&ProtoBody49);

Scene13.addChild(&ProtoDeclare48);

ProtoDeclare& ProtoDeclare51 =  ProtoDeclare();
ProtoDeclare51.setName(CString("ArtDeco12"));
ProtoDeclare51.setAppinfo(CString("UniversalMediaMaterials prototype"));
ProtoDeclare51.setDocumentation(CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
ProtoBody& ProtoBody52 =  ProtoBody();
Material& Material53 =  Material();
Material53.setAmbientIntensity(0.240838);
Material53.setDiffuseColor(new float[3]{0.876873,0.14715,0.00856});
Material53.setShininess(0.076531);
Material53.setSpecularColor(new float[3]{0.193878,0.029416,0.029416});
ProtoBody52.addChild(&Material53);

ProtoDeclare51.addChild(&ProtoBody52);

Scene13.addChild(&ProtoDeclare51);

ProtoDeclare& ProtoDeclare54 =  ProtoDeclare();
ProtoDeclare54.setName(CString("ArtDeco13"));
ProtoDeclare54.setAppinfo(CString("UniversalMediaMaterials prototype"));
ProtoDeclare54.setDocumentation(CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
ProtoBody& ProtoBody55 =  ProtoBody();
Material& Material56 =  Material();
Material56.setAmbientIntensity(0.25);
Material56.setDiffuseColor(new float[3]{0.794445,0.249425,0.0});
Material56.setShininess(0.551515);
Material56.setSpecularColor(new float[3]{0.62904,0.194211,0.033663});
ProtoBody55.addChild(&Material56);

ProtoDeclare54.addChild(&ProtoBody55);

Scene13.addChild(&ProtoDeclare54);

ProtoDeclare& ProtoDeclare57 =  ProtoDeclare();
ProtoDeclare57.setName(CString("ArtDeco14"));
ProtoDeclare57.setAppinfo(CString("UniversalMediaMaterials prototype"));
ProtoDeclare57.setDocumentation(CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
ProtoBody& ProtoBody58 =  ProtoBody();
Material& Material59 =  Material();
Material59.setAmbientIntensity(0.25);
Material59.setDiffuseColor(new float[3]{0.510609,0.17264,0.059872});
Material59.setShininess(0.933333);
Material59.setSpecularColor(new float[3]{0.533333,0.533333,0.533333});
ProtoBody58.addChild(&Material59);

ProtoDeclare57.addChild(&ProtoBody58);

Scene13.addChild(&ProtoDeclare57);

ProtoDeclare& ProtoDeclare60 =  ProtoDeclare();
ProtoDeclare60.setName(CString("ArtDeco15"));
ProtoDeclare60.setAppinfo(CString("UniversalMediaMaterials prototype"));
ProtoDeclare60.setDocumentation(CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
ProtoBody& ProtoBody61 =  ProtoBody();
Material& Material62 =  Material();
Material62.setAmbientIntensity(0.255814);
Material62.setDiffuseColor(new float[3]{0.914894,0.444404,0.348914});
Material62.setShininess(0.12766);
Material62.setSpecularColor(new float[3]{0.345745,0.143066,0.0});
ProtoBody61.addChild(&Material62);

ProtoDeclare60.addChild(&ProtoBody61);

Scene13.addChild(&ProtoDeclare60);

ProtoDeclare& ProtoDeclare63 =  ProtoDeclare();
ProtoDeclare63.setName(CString("ArtDeco16"));
ProtoDeclare63.setAppinfo(CString("UniversalMediaMaterials prototype"));
ProtoDeclare63.setDocumentation(CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
ProtoBody& ProtoBody64 =  ProtoBody();
Material& Material65 =  Material();
Material65.setAmbientIntensity(0.240838);
Material65.setDiffuseColor(new float[3]{0.876873,0.323147,0.199564});
Material65.setShininess(0.80102);
Material65.setSpecularColor(new float[3]{0.816327,0.278677,0.278677});
ProtoBody64.addChild(&Material65);

ProtoDeclare63.addChild(&ProtoBody64);

Scene13.addChild(&ProtoDeclare63);

ProtoDeclare& ProtoDeclare66 =  ProtoDeclare();
ProtoDeclare66.setName(CString("ArtDeco17"));
ProtoDeclare66.setAppinfo(CString("UniversalMediaMaterials prototype"));
ProtoDeclare66.setDocumentation(CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
ProtoBody& ProtoBody67 =  ProtoBody();
Material& Material68 =  Material();
Material68.setAmbientIntensity(0.242424);
Material68.setDiffuseColor(new float[3]{0.515625,0.315496,0.252441});
Material68.setShininess(0.933333);
Material68.setSpecularColor(new float[3]{0.533333,0.533333,0.533333});
ProtoBody67.addChild(&Material68);

ProtoDeclare66.addChild(&ProtoBody67);

Scene13.addChild(&ProtoDeclare66);

ProtoDeclare& ProtoDeclare69 =  ProtoDeclare();
ProtoDeclare69.setName(CString("ArtDeco18"));
ProtoDeclare69.setAppinfo(CString("UniversalMediaMaterials prototype"));
ProtoDeclare69.setDocumentation(CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
ProtoBody& ProtoBody70 =  ProtoBody();
Material& Material71 =  Material();
Material71.setAmbientIntensity(0.264706);
Material71.setDiffuseColor(new float[3]{0.0,0.346939,0.253624});
Material71.setShininess(0.316327);
Material71.setSpecularColor(new float[3]{0.0,0.311074,0.357143});
ProtoBody70.addChild(&Material71);

ProtoDeclare69.addChild(&ProtoBody70);

Scene13.addChild(&ProtoDeclare69);

ProtoDeclare& ProtoDeclare72 =  ProtoDeclare();
ProtoDeclare72.setName(CString("ArtDeco19"));
ProtoDeclare72.setAppinfo(CString("UniversalMediaMaterials prototype"));
ProtoDeclare72.setDocumentation(CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
ProtoBody& ProtoBody73 =  ProtoBody();
Material& Material74 =  Material();
Material74.setAmbientIntensity(0.259259);
Material74.setDiffuseColor(new float[3]{0.0,0.251004,0.239248});
Material74.setShininess(0.060606);
Material74.setSpecularColor(new float[3]{0.177935,0.249369,0.229278});
ProtoBody73.addChild(&Material74);

ProtoDeclare72.addChild(&ProtoBody73);

Scene13.addChild(&ProtoDeclare72);

ProtoDeclare& ProtoDeclare75 =  ProtoDeclare();
ProtoDeclare75.setName(CString("ArtDeco20"));
ProtoDeclare75.setAppinfo(CString("UniversalMediaMaterials prototype"));
ProtoDeclare75.setDocumentation(CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
ProtoBody& ProtoBody76 =  ProtoBody();
Material& Material77 =  Material();
Material77.setAmbientIntensity(0.24);
Material77.setDiffuseColor(new float[3]{0.228298,0.385771,0.186794});
Material77.setShininess(0.393939);
Material77.setSpecularColor(new float[3]{0.200464,0.300145,0.293518});
ProtoBody76.addChild(&Material77);

ProtoDeclare75.addChild(&ProtoBody76);

Scene13.addChild(&ProtoDeclare75);

ProtoDeclare& ProtoDeclare78 =  ProtoDeclare();
ProtoDeclare78.setName(CString("ArtDeco21"));
ProtoDeclare78.setAppinfo(CString("UniversalMediaMaterials prototype"));
ProtoDeclare78.setDocumentation(CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
ProtoBody& ProtoBody79 =  ProtoBody();
Material& Material80 =  Material();
Material80.setAmbientIntensity(0.25);
Material80.setDiffuseColor(new float[3]{0.315389,0.544,0.258052});
Material80.setShininess(0.509389);
Material80.setSpecularColor(new float[3]{0.456,0.456,0.456});
ProtoBody79.addChild(&Material80);

ProtoDeclare78.addChild(&ProtoBody79);

Scene13.addChild(&ProtoDeclare78);

ProtoDeclare& ProtoDeclare81 =  ProtoDeclare();
ProtoDeclare81.setName(CString("ArtDeco22"));
ProtoDeclare81.setAppinfo(CString("UniversalMediaMaterials prototype"));
ProtoDeclare81.setDocumentation(CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
ProtoBody& ProtoBody82 =  ProtoBody();
Material& Material83 =  Material();
Material83.setAmbientIntensity(0.246032);
Material83.setDiffuseColor(new float[3]{0.251104,0.312562,0.201724});
Material83.setShininess(0.086735);
Material83.setSpecularColor(new float[3]{0.209184,0.113842,0.111328});
ProtoBody82.addChild(&Material83);

ProtoDeclare81.addChild(&ProtoBody82);

Scene13.addChild(&ProtoDeclare81);

ProtoDeclare& ProtoDeclare84 =  ProtoDeclare();
ProtoDeclare84.setName(CString("ArtDeco23"));
ProtoDeclare84.setAppinfo(CString("UniversalMediaMaterials prototype"));
ProtoDeclare84.setDocumentation(CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
ProtoBody& ProtoBody85 =  ProtoBody();
Material& Material86 =  Material();
Material86.setAmbientIntensity(0.242424);
Material86.setDiffuseColor(new float[3]{0.392348,0.456,0.417708});
Material86.setShininess(0.933333);
Material86.setSpecularColor(new float[3]{0.533333,0.533333,0.533333});
ProtoBody85.addChild(&Material86);

ProtoDeclare84.addChild(&ProtoBody85);

Scene13.addChild(&ProtoDeclare84);

ProtoDeclare& ProtoDeclare87 =  ProtoDeclare();
ProtoDeclare87.setName(CString("ArtDeco24"));
ProtoDeclare87.setAppinfo(CString("UniversalMediaMaterials prototype"));
ProtoDeclare87.setDocumentation(CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
ProtoBody& ProtoBody88 =  ProtoBody();
Material& Material89 =  Material();
Material89.setAmbientIntensity(0.253968);
Material89.setDiffuseColor(new float[3]{1.0,0.854922,0.0});
Material89.setShininess(1);
Material89.setSpecularColor(new float[3]{0.872449,0.247119,0.254214});
ProtoBody88.addChild(&Material89);

ProtoDeclare87.addChild(&ProtoBody88);

Scene13.addChild(&ProtoDeclare87);

ProtoDeclare& ProtoDeclare90 =  ProtoDeclare();
ProtoDeclare90.setName(CString("ArtDeco25"));
ProtoDeclare90.setAppinfo(CString("UniversalMediaMaterials prototype"));
ProtoDeclare90.setDocumentation(CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
ProtoBody& ProtoBody91 =  ProtoBody();
Material& Material92 =  Material();
Material92.setAmbientIntensity(0.25641);
Material92.setDiffuseColor(new float[3]{0.795918,0.505869,0.093315});
Material92.setShininess(0.397959);
Material92.setSpecularColor(new float[3]{0.923469,0.428866,0.006369});
ProtoBody91.addChild(&Material92);

ProtoDeclare90.addChild(&ProtoBody91);

Scene13.addChild(&ProtoDeclare90);

ProtoDeclare& ProtoDeclare93 =  ProtoDeclare();
ProtoDeclare93.setName(CString("ArtDeco26"));
ProtoDeclare93.setAppinfo(CString("UniversalMediaMaterials prototype"));
ProtoDeclare93.setDocumentation(CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
//computed conversion ambientIntensity=2.226234, normalized to 1.0
ProtoBody& ProtoBody94 =  ProtoBody();
Material& Material95 =  Material();
Material95.setAmbientIntensity(1);
Material95.setDiffuseColor(new float[3]{0.331633,0.296582,0.279057});
Material95.setShininess(0.096939);
Material95.setSpecularColor(new float[3]{0.311224,0.25183,0.133042});
ProtoBody94.addChild(&Material95);

ProtoDeclare93.addChild(&ProtoBody94);

Scene13.addChild(&ProtoDeclare93);

ProtoDeclare& ProtoDeclare96 =  ProtoDeclare();
ProtoDeclare96.setName(CString("ArtDeco27"));
ProtoDeclare96.setAppinfo(CString("UniversalMediaMaterials prototype"));
ProtoDeclare96.setDocumentation(CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
ProtoBody& ProtoBody97 =  ProtoBody();
Material& Material98 =  Material();
Material98.setAmbientIntensity(0.263158);
Material98.setDiffuseColor(new float[3]{0.345455,0.163262,0.122622});
Material98.setShininess(0.048649);
Material98.setSpecularColor(new float[3]{0.212121,0.107475,0.0});
ProtoBody97.addChild(&Material98);

ProtoDeclare96.addChild(&ProtoBody97);

Scene13.addChild(&ProtoDeclare96);

ProtoDeclare& ProtoDeclare99 =  ProtoDeclare();
ProtoDeclare99.setName(CString("ArtDeco28"));
ProtoDeclare99.setAppinfo(CString("UniversalMediaMaterials prototype"));
ProtoDeclare99.setDocumentation(CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
ProtoBody& ProtoBody100 =  ProtoBody();
Material& Material101 =  Material();
Material101.setAmbientIntensity(0.240506);
Material101.setDiffuseColor(new float[3]{0.277281,0.104336,0.0799});
Material101.setShininess(0.09697);
Material101.setSpecularColor(new float[3]{0.305587,0.141916,0.270572});
ProtoBody100.addChild(&Material101);

ProtoDeclare99.addChild(&ProtoBody100);

Scene13.addChild(&ProtoDeclare99);

ProtoDeclare& ProtoDeclare102 =  ProtoDeclare();
ProtoDeclare102.setName(CString("ArtDeco29"));
ProtoDeclare102.setAppinfo(CString("UniversalMediaMaterials prototype"));
ProtoDeclare102.setDocumentation(CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
ProtoBody& ProtoBody103 =  ProtoBody();
Material& Material104 =  Material();
Material104.setAmbientIntensity(0.215686);
Material104.setDiffuseColor(new float[3]{0.087034,0.025888,0.0});
Material104.setShininess(0.045918);
Material104.setSpecularColor(new float[3]{0.224138,0.104091,0.104091});
ProtoBody103.addChild(&Material104);

ProtoDeclare102.addChild(&ProtoBody103);

Scene13.addChild(&ProtoDeclare102);

ProtoDeclare& ProtoDeclare105 =  ProtoDeclare();
ProtoDeclare105.setName(CString("ArtDeco30"));
ProtoDeclare105.setAppinfo(CString("UniversalMediaMaterials prototype"));
ProtoDeclare105.setDocumentation(CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
ProtoBody& ProtoBody106 =  ProtoBody();
Material& Material107 =  Material();
Material107.setAmbientIntensity(0);
Material107.setDiffuseColor(new float[3]{0.0,0.0,0.0});
Material107.setShininess(0.081633);
Material107.setSpecularColor(new float[3]{0.293243,0.297387,0.290421});
ProtoBody106.addChild(&Material107);

ProtoDeclare105.addChild(&ProtoBody106);

Scene13.addChild(&ProtoDeclare105);

ProtoDeclare& ProtoDeclare108 =  ProtoDeclare();
ProtoDeclare108.setName(CString("ArtDeco31"));
ProtoDeclare108.setAppinfo(CString("UniversalMediaMaterials prototype"));
ProtoDeclare108.setDocumentation(CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
ProtoBody& ProtoBody109 =  ProtoBody();
Material& Material110 =  Material();
Material110.setAmbientIntensity(0.25641);
Material110.setDiffuseColor(new float[3]{0.236364,0.236364,0.236364});
Material110.setShininess(0.054546);
Material110.setSpecularColor(new float[3]{0.29697,0.245839,0.295962});
ProtoBody109.addChild(&Material110);

ProtoDeclare108.addChild(&ProtoBody109);

Scene13.addChild(&ProtoDeclare108);

ProtoDeclare& ProtoDeclare111 =  ProtoDeclare();
ProtoDeclare111.setName(CString("ArtDeco32"));
ProtoDeclare111.setAppinfo(CString("UniversalMediaMaterials prototype"));
ProtoDeclare111.setDocumentation(CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
ProtoBody& ProtoBody112 =  ProtoBody();
Material& Material113 =  Material();
Material113.setAmbientIntensity(0.242424);
Material113.setDiffuseColor(new float[3]{0.38087,0.382957,0.417708});
Material113.setShininess(0.933333);
Material113.setSpecularColor(new float[3]{0.533333,0.533333,0.533333});
ProtoBody112.addChild(&Material113);

ProtoDeclare111.addChild(&ProtoBody112);

Scene13.addChild(&ProtoDeclare111);

ProtoDeclare& ProtoDeclare114 =  ProtoDeclare();
ProtoDeclare114.setName(CString("ArtDeco33"));
ProtoDeclare114.setAppinfo(CString("UniversalMediaMaterials prototype"));
ProtoDeclare114.setDocumentation(CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
ProtoBody& ProtoBody115 =  ProtoBody();
Material& Material116 =  Material();
Material116.setAmbientIntensity(0.230089);
Material116.setDiffuseColor(new float[3]{0.610811,0.610811,0.610811});
Material116.setShininess(0.897297);
Material116.setSpecularColor(new float[3]{0.767568,0.756757,0.764964});
ProtoBody115.addChild(&Material116);

ProtoDeclare114.addChild(&ProtoBody115);

Scene13.addChild(&ProtoDeclare114);

ProtoDeclare& ProtoDeclare117 =  ProtoDeclare();
ProtoDeclare117.setName(CString("ArtDeco34"));
ProtoDeclare117.setAppinfo(CString("UniversalMediaMaterials prototype"));
ProtoDeclare117.setDocumentation(CString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
ProtoBody& ProtoBody118 =  ProtoBody();
Material& Material119 =  Material();
Material119.setAmbientIntensity(0.25);
Material119.setShininess(0);
Material119.setSpecularColor(new float[3]{0.2,0.2,0.2});
ProtoBody118.addChild(&Material119);

ProtoDeclare117.addChild(&ProtoBody118);

Scene13.addChild(&ProtoDeclare117);

Anchor& Anchor120 =  Anchor();
Anchor120.setDescription(CString("ArtDecoPrototypeExample"));
Anchor120.setParameter(new CString[1]{CString("target=_blank")}, 1);
Anchor120.setUrl(new CString[4]{CString("../data/ArtDecoExamples.json"), CString("../data/ArtDecoExamples.x3d"), CString("ArtDecoExamples.json"), CString("ArtDecoExamples.x3d")}, 4);
Shape& Shape121 =  Shape();
Appearance& Appearance122 =  Appearance();
Material& Material123 =  Material();
Material123.setDiffuseColor(new float[3]{0.8,0.4,0.0});
Appearance122.addChild(&Material123);

Shape121.addChild(&Appearance122);

Text& Text124 =  Text();
Text124.setString(new CString[6]{CString("ArtDecoExamples.x3d"), CString("is a Materials Prototype declaration file."), CString(""), CString("For an example scene using these node,"), CString("click this text and view"), CString("ArtDecoExamples.x3d")}, 6);
CFontStyle& FontStyle125 =  CFontStyle();
FontStyle125.setJustify(new CString[2]{CString("MIDDLE"), CString("MIDDLE")}, 2);
FontStyle125.setSize(0.8);
Text124.setFontStyle(&FontStyle125);

Shape121.setGeometry(&Text124);

Anchor120.addChild(&Shape121);

Scene13.addChild(&Anchor120);

X3D0.setScene(&Scene13);

//}
