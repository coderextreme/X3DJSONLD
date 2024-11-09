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
meta3.setContent(CString("Thu, 05 Nov 2015 03:28:57 GMT"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("creator"));
meta4.setContent(CString("Holger Seelig"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("generator"));
meta5.setContent(CString("Titania V1.2.0, http://titania.create3000.de"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("modified"));
meta6.setContent(CString("Thu, 05 Nov 2015 03:28:57 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
ExternProtoDeclare& ExternProtoDeclare8 =  ExternProtoDeclare();
ExternProtoDeclare8.setName(CString("Bonus"));
ExternProtoDeclare8.setUrl(new CString[]{CString("Bonus_proto__2.x3d")}, 1);
field& field9 =  field();
field9.setName(CString("startTime"));
field9.setAccessType(CString("inputOnly"));
field9.setType(CString("SFTime"));
ExternProtoDeclare8.addChild(&field9);

field& field10 =  field();
field10.setName(CString("enterTime"));
field10.setAccessType(CString("outputOnly"));
field10.setType(CString("SFTime"));
ExternProtoDeclare8.addChild(&field10);

field& field11 =  field();
field11.setName(CString("range"));
field11.setAccessType(CString("initializeOnly"));
field11.setType(CString("MFFloat"));
ExternProtoDeclare8.addChild(&field11);

field& field12 =  field();
field12.setName(CString("size"));
field12.setAccessType(CString("inputOutput"));
field12.setType(CString("SFVec3f"));
ExternProtoDeclare8.addChild(&field12);

field& field13 =  field();
field13.setName(CString("level2"));
field13.setAccessType(CString("inputOutput"));
field13.setType(CString("MFNode"));
ExternProtoDeclare8.addChild(&field13);

field& field14 =  field();
field14.setName(CString("level1"));
field14.setAccessType(CString("inputOutput"));
field14.setType(CString("MFNode"));
ExternProtoDeclare8.addChild(&field14);

field& field15 =  field();
field15.setName(CString("level0"));
field15.setAccessType(CString("inputOutput"));
field15.setType(CString("MFNode"));
ExternProtoDeclare8.addChild(&field15);

Scene7.addChild(&ExternProtoDeclare8);

Transform& Transform16 =  Transform();
Transform16.setDEF(CString("Bonus"));
Transform& Transform17 =  Transform();
Transform17.setDEF(CString("Yellow"));
Transform& Transform18 =  Transform();
Transform18.setDEF(CString("Wache-rechts-Yellow1"));
Transform18.setTranslation(new float[]{56.7031,4.58303,66.4808});
ProtoInstance& ProtoInstance19 =  ProtoInstance();
ProtoInstance19.setName(CString("Bonus"));
fieldValue& fieldValue20 =  fieldValue();
fieldValue20.setName(CString("level2"));
Inline& Inline21 =  Inline();
Inline21.setDEF(CString("_1"));
Inline21.setUrl(new CString[]{CString("bonus-yellow-level2.x3d")}, 1);
fieldValue20.addChild(Inline21);

ProtoInstance19.addChild(&fieldValue20);

fieldValue& fieldValue22 =  fieldValue();
fieldValue22.setName(CString("level1"));
Inline& Inline23 =  Inline();
Inline23.setDEF(CString("_2"));
Inline23.setUrl(new CString[]{CString("bonus-yellow-level1.x3d")}, 1);
fieldValue22.addChild(Inline23);

ProtoInstance19.addChild(&fieldValue22);

fieldValue& fieldValue24 =  fieldValue();
fieldValue24.setName(CString("level0"));
Inline& Inline25 =  Inline();
Inline25.setDEF(CString("_3"));
Inline25.setUrl(new CString[]{CString("bonus-yellow-level0.x3d")}, 1);
fieldValue24.addChild(Inline25);

ProtoInstance19.addChild(&fieldValue24);

Transform18.addChild(&ProtoInstance19);

Transform17.addChild(&Transform18);

Transform& Transform26 =  Transform();
Transform26.setDEF(CString("Wache-rechts-Yellow2"));
Transform26.setTranslation(new float[]{56.7892,4.53746,70.5596});
ProtoInstance& ProtoInstance27 =  ProtoInstance();
ProtoInstance27.setName(CString("Bonus"));
fieldValue& fieldValue28 =  fieldValue();
fieldValue28.setName(CString("level2"));
Inline& Inline29 =  Inline();
Inline29.setUSE(CString("_1"));
fieldValue28.addChild(Inline29);

ProtoInstance27.addChild(&fieldValue28);

fieldValue& fieldValue30 =  fieldValue();
fieldValue30.setName(CString("level1"));
Inline& Inline31 =  Inline();
Inline31.setUSE(CString("_2"));
fieldValue30.addChild(Inline31);

ProtoInstance27.addChild(&fieldValue30);

fieldValue& fieldValue32 =  fieldValue();
fieldValue32.setName(CString("level0"));
Inline& Inline33 =  Inline();
Inline33.setUSE(CString("_3"));
fieldValue32.addChild(Inline33);

ProtoInstance27.addChild(&fieldValue32);

Transform26.addChild(&ProtoInstance27);

Transform17.addChild(&Transform26);

Transform& Transform34 =  Transform();
Transform34.setDEF(CString("Felsgang-Yellow3"));
Transform34.setTranslation(new float[]{115.71,42.3592,-0.817799});
ProtoInstance& ProtoInstance35 =  ProtoInstance();
ProtoInstance35.setName(CString("Bonus"));
fieldValue& fieldValue36 =  fieldValue();
fieldValue36.setName(CString("level2"));
Inline& Inline37 =  Inline();
Inline37.setUSE(CString("_1"));
fieldValue36.addChild(Inline37);

ProtoInstance35.addChild(&fieldValue36);

fieldValue& fieldValue38 =  fieldValue();
fieldValue38.setName(CString("level1"));
Inline& Inline39 =  Inline();
Inline39.setUSE(CString("_2"));
fieldValue38.addChild(Inline39);

ProtoInstance35.addChild(&fieldValue38);

fieldValue& fieldValue40 =  fieldValue();
fieldValue40.setName(CString("level0"));
Inline& Inline41 =  Inline();
Inline41.setUSE(CString("_3"));
fieldValue40.addChild(Inline41);

ProtoInstance35.addChild(&fieldValue40);

Transform34.addChild(&ProtoInstance35);

Transform17.addChild(&Transform34);

Transform& Transform42 =  Transform();
Transform42.setDEF(CString("Ausgang-oben-Yellow4"));
Transform42.setTranslation(new float[]{30.196,31.6091,-37.0206});
ProtoInstance& ProtoInstance43 =  ProtoInstance();
ProtoInstance43.setName(CString("Bonus"));
fieldValue& fieldValue44 =  fieldValue();
fieldValue44.setName(CString("level2"));
Inline& Inline45 =  Inline();
Inline45.setUSE(CString("_1"));
fieldValue44.addChild(Inline45);

ProtoInstance43.addChild(&fieldValue44);

fieldValue& fieldValue46 =  fieldValue();
fieldValue46.setName(CString("level1"));
Inline& Inline47 =  Inline();
Inline47.setUSE(CString("_2"));
fieldValue46.addChild(Inline47);

ProtoInstance43.addChild(&fieldValue46);

fieldValue& fieldValue48 =  fieldValue();
fieldValue48.setName(CString("level0"));
Inline& Inline49 =  Inline();
Inline49.setUSE(CString("_3"));
fieldValue48.addChild(Inline49);

ProtoInstance43.addChild(&fieldValue48);

Transform42.addChild(&ProtoInstance43);

Transform17.addChild(&Transform42);

Transform& Transform50 =  Transform();
Transform50.setDEF(CString("Ausgang-oben-Yellow5"));
Transform50.setTranslation(new float[]{-27.9319,31.6091,-36.9089});
ProtoInstance& ProtoInstance51 =  ProtoInstance();
ProtoInstance51.setName(CString("Bonus"));
fieldValue& fieldValue52 =  fieldValue();
fieldValue52.setName(CString("level2"));
Inline& Inline53 =  Inline();
Inline53.setUSE(CString("_1"));
fieldValue52.addChild(Inline53);

ProtoInstance51.addChild(&fieldValue52);

fieldValue& fieldValue54 =  fieldValue();
fieldValue54.setName(CString("level1"));
Inline& Inline55 =  Inline();
Inline55.setUSE(CString("_2"));
fieldValue54.addChild(Inline55);

ProtoInstance51.addChild(&fieldValue54);

fieldValue& fieldValue56 =  fieldValue();
fieldValue56.setName(CString("level0"));
Inline& Inline57 =  Inline();
Inline57.setUSE(CString("_3"));
fieldValue56.addChild(Inline57);

ProtoInstance51.addChild(&fieldValue56);

Transform50.addChild(&ProtoInstance51);

Transform17.addChild(&Transform50);

Transform& Transform58 =  Transform();
Transform58.setDEF(CString("Ausgang-oben-Yellow6"));
Transform58.setTranslation(new float[]{-25.9477,31.6091,-36.9089});
ProtoInstance& ProtoInstance59 =  ProtoInstance();
ProtoInstance59.setName(CString("Bonus"));
fieldValue& fieldValue60 =  fieldValue();
fieldValue60.setName(CString("level2"));
Inline& Inline61 =  Inline();
Inline61.setUSE(CString("_1"));
fieldValue60.addChild(Inline61);

ProtoInstance59.addChild(&fieldValue60);

fieldValue& fieldValue62 =  fieldValue();
fieldValue62.setName(CString("level1"));
Inline& Inline63 =  Inline();
Inline63.setUSE(CString("_2"));
fieldValue62.addChild(Inline63);

ProtoInstance59.addChild(&fieldValue62);

fieldValue& fieldValue64 =  fieldValue();
fieldValue64.setName(CString("level0"));
Inline& Inline65 =  Inline();
Inline65.setUSE(CString("_3"));
fieldValue64.addChild(Inline65);

ProtoInstance59.addChild(&fieldValue64);

Transform58.addChild(&ProtoInstance59);

Transform17.addChild(&Transform58);

Transform& Transform66 =  Transform();
Transform66.setDEF(CString("Ausgang-oben-Yellow7"));
Transform66.setTranslation(new float[]{28.1998,31.6091,-37.0206});
ProtoInstance& ProtoInstance67 =  ProtoInstance();
ProtoInstance67.setName(CString("Bonus"));
fieldValue& fieldValue68 =  fieldValue();
fieldValue68.setName(CString("level2"));
Inline& Inline69 =  Inline();
Inline69.setUSE(CString("_1"));
fieldValue68.addChild(Inline69);

ProtoInstance67.addChild(&fieldValue68);

fieldValue& fieldValue70 =  fieldValue();
fieldValue70.setName(CString("level1"));
Inline& Inline71 =  Inline();
Inline71.setUSE(CString("_2"));
fieldValue70.addChild(Inline71);

ProtoInstance67.addChild(&fieldValue70);

fieldValue& fieldValue72 =  fieldValue();
fieldValue72.setName(CString("level0"));
Inline& Inline73 =  Inline();
Inline73.setUSE(CString("_3"));
fieldValue72.addChild(Inline73);

ProtoInstance67.addChild(&fieldValue72);

Transform66.addChild(&ProtoInstance67);

Transform17.addChild(&Transform66);

Transform& Transform74 =  Transform();
Transform74.setDEF(CString("Eingang1-Yellow8"));
Transform74.setTranslation(new float[]{3.62108,1.89283,68.9743});
ProtoInstance& ProtoInstance75 =  ProtoInstance();
ProtoInstance75.setName(CString("Bonus"));
fieldValue& fieldValue76 =  fieldValue();
fieldValue76.setName(CString("level2"));
Inline& Inline77 =  Inline();
Inline77.setUSE(CString("_1"));
fieldValue76.addChild(Inline77);

ProtoInstance75.addChild(&fieldValue76);

fieldValue& fieldValue78 =  fieldValue();
fieldValue78.setName(CString("level1"));
Inline& Inline79 =  Inline();
Inline79.setUSE(CString("_2"));
fieldValue78.addChild(Inline79);

ProtoInstance75.addChild(&fieldValue78);

fieldValue& fieldValue80 =  fieldValue();
fieldValue80.setName(CString("level0"));
Inline& Inline81 =  Inline();
Inline81.setUSE(CString("_3"));
fieldValue80.addChild(Inline81);

ProtoInstance75.addChild(&fieldValue80);

Transform74.addChild(&ProtoInstance75);

Transform17.addChild(&Transform74);

Transform& Transform82 =  Transform();
Transform82.setDEF(CString("Eingang2-Yellow9"));
Transform82.setTranslation(new float[]{9.97336,1.5,57.0006});
ProtoInstance& ProtoInstance83 =  ProtoInstance();
ProtoInstance83.setName(CString("Bonus"));
fieldValue& fieldValue84 =  fieldValue();
fieldValue84.setName(CString("level2"));
Inline& Inline85 =  Inline();
Inline85.setUSE(CString("_1"));
fieldValue84.addChild(Inline85);

ProtoInstance83.addChild(&fieldValue84);

fieldValue& fieldValue86 =  fieldValue();
fieldValue86.setName(CString("level1"));
Inline& Inline87 =  Inline();
Inline87.setUSE(CString("_2"));
fieldValue86.addChild(Inline87);

ProtoInstance83.addChild(&fieldValue86);

fieldValue& fieldValue88 =  fieldValue();
fieldValue88.setName(CString("level0"));
Inline& Inline89 =  Inline();
Inline89.setUSE(CString("_3"));
fieldValue88.addChild(Inline89);

ProtoInstance83.addChild(&fieldValue88);

Transform82.addChild(&ProtoInstance83);

Transform17.addChild(&Transform82);

Transform& Transform90 =  Transform();
Transform90.setDEF(CString("Pflanze-Yellow10"));
Transform90.setTranslation(new float[]{31.0486,1.5,35.005});
ProtoInstance& ProtoInstance91 =  ProtoInstance();
ProtoInstance91.setName(CString("Bonus"));
fieldValue& fieldValue92 =  fieldValue();
fieldValue92.setName(CString("level2"));
Inline& Inline93 =  Inline();
Inline93.setUSE(CString("_1"));
fieldValue92.addChild(Inline93);

ProtoInstance91.addChild(&fieldValue92);

fieldValue& fieldValue94 =  fieldValue();
fieldValue94.setName(CString("level1"));
Inline& Inline95 =  Inline();
Inline95.setUSE(CString("_2"));
fieldValue94.addChild(Inline95);

ProtoInstance91.addChild(&fieldValue94);

fieldValue& fieldValue96 =  fieldValue();
fieldValue96.setName(CString("level0"));
Inline& Inline97 =  Inline();
Inline97.setUSE(CString("_3"));
fieldValue96.addChild(Inline97);

ProtoInstance91.addChild(&fieldValue96);

Transform90.addChild(&ProtoInstance91);

Transform17.addChild(&Transform90);

Transform& Transform98 =  Transform();
Transform98.setDEF(CString("Wache-rechts-vor-Yellow11"));
Transform98.setTranslation(new float[]{61.9902,1.5,51.9971});
ProtoInstance& ProtoInstance99 =  ProtoInstance();
ProtoInstance99.setName(CString("Bonus"));
fieldValue& fieldValue100 =  fieldValue();
fieldValue100.setName(CString("level2"));
Inline& Inline101 =  Inline();
Inline101.setUSE(CString("_1"));
fieldValue100.addChild(Inline101);

ProtoInstance99.addChild(&fieldValue100);

fieldValue& fieldValue102 =  fieldValue();
fieldValue102.setName(CString("level1"));
Inline& Inline103 =  Inline();
Inline103.setUSE(CString("_2"));
fieldValue102.addChild(Inline103);

ProtoInstance99.addChild(&fieldValue102);

fieldValue& fieldValue104 =  fieldValue();
fieldValue104.setName(CString("level0"));
Inline& Inline105 =  Inline();
Inline105.setUSE(CString("_3"));
fieldValue104.addChild(Inline105);

ProtoInstance99.addChild(&fieldValue104);

Transform98.addChild(&ProtoInstance99);

Transform17.addChild(&Transform98);

Transform& Transform106 =  Transform();
Transform106.setDEF(CString("Turm-rechts-Yellow12"));
Transform106.setTranslation(new float[]{71.1193,33.9596,60.6608});
ProtoInstance& ProtoInstance107 =  ProtoInstance();
ProtoInstance107.setName(CString("Bonus"));
fieldValue& fieldValue108 =  fieldValue();
fieldValue108.setName(CString("level2"));
Inline& Inline109 =  Inline();
Inline109.setUSE(CString("_1"));
fieldValue108.addChild(Inline109);

ProtoInstance107.addChild(&fieldValue108);

fieldValue& fieldValue110 =  fieldValue();
fieldValue110.setName(CString("level1"));
Inline& Inline111 =  Inline();
Inline111.setUSE(CString("_2"));
fieldValue110.addChild(Inline111);

ProtoInstance107.addChild(&fieldValue110);

fieldValue& fieldValue112 =  fieldValue();
fieldValue112.setName(CString("level0"));
Inline& Inline113 =  Inline();
Inline113.setUSE(CString("_3"));
fieldValue112.addChild(Inline113);

ProtoInstance107.addChild(&fieldValue112);

Transform106.addChild(&ProtoInstance107);

Transform17.addChild(&Transform106);

Transform& Transform114 =  Transform();
Transform114.setDEF(CString("Bau-hinten-links-Yellow13"));
Transform114.setTranslation(new float[]{-80.0357,1.5,-6.00637});
ProtoInstance& ProtoInstance115 =  ProtoInstance();
ProtoInstance115.setName(CString("Bonus"));
fieldValue& fieldValue116 =  fieldValue();
fieldValue116.setName(CString("level2"));
Inline& Inline117 =  Inline();
Inline117.setUSE(CString("_1"));
fieldValue116.addChild(Inline117);

ProtoInstance115.addChild(&fieldValue116);

fieldValue& fieldValue118 =  fieldValue();
fieldValue118.setName(CString("level1"));
Inline& Inline119 =  Inline();
Inline119.setUSE(CString("_2"));
fieldValue118.addChild(Inline119);

ProtoInstance115.addChild(&fieldValue118);

fieldValue& fieldValue120 =  fieldValue();
fieldValue120.setName(CString("level0"));
Inline& Inline121 =  Inline();
Inline121.setUSE(CString("_3"));
fieldValue120.addChild(Inline121);

ProtoInstance115.addChild(&fieldValue120);

Transform114.addChild(&ProtoInstance115);

Transform17.addChild(&Transform114);

Transform& Transform122 =  Transform();
Transform122.setDEF(CString("Bau-hinten-links-Raum-Yellow14"));
Transform122.setTranslation(new float[]{-81.4743,21.5034,-57.6993});
ProtoInstance& ProtoInstance123 =  ProtoInstance();
ProtoInstance123.setName(CString("Bonus"));
fieldValue& fieldValue124 =  fieldValue();
fieldValue124.setName(CString("level2"));
Inline& Inline125 =  Inline();
Inline125.setUSE(CString("_1"));
fieldValue124.addChild(Inline125);

ProtoInstance123.addChild(&fieldValue124);

fieldValue& fieldValue126 =  fieldValue();
fieldValue126.setName(CString("level1"));
Inline& Inline127 =  Inline();
Inline127.setUSE(CString("_2"));
fieldValue126.addChild(Inline127);

ProtoInstance123.addChild(&fieldValue126);

fieldValue& fieldValue128 =  fieldValue();
fieldValue128.setName(CString("level0"));
Inline& Inline129 =  Inline();
Inline129.setUSE(CString("_3"));
fieldValue128.addChild(Inline129);

ProtoInstance123.addChild(&fieldValue128);

Transform122.addChild(&ProtoInstance123);

Transform17.addChild(&Transform122);

Transform& Transform130 =  Transform();
Transform130.setDEF(CString("Bau-hinten-rechts-Yellow15"));
Transform130.setTranslation(new float[]{75.2517,21.5032,-57.4253});
ProtoInstance& ProtoInstance131 =  ProtoInstance();
ProtoInstance131.setName(CString("Bonus"));
fieldValue& fieldValue132 =  fieldValue();
fieldValue132.setName(CString("level2"));
Inline& Inline133 =  Inline();
Inline133.setUSE(CString("_1"));
fieldValue132.addChild(Inline133);

ProtoInstance131.addChild(&fieldValue132);

fieldValue& fieldValue134 =  fieldValue();
fieldValue134.setName(CString("level1"));
Inline& Inline135 =  Inline();
Inline135.setUSE(CString("_2"));
fieldValue134.addChild(Inline135);

ProtoInstance131.addChild(&fieldValue134);

fieldValue& fieldValue136 =  fieldValue();
fieldValue136.setName(CString("level0"));
Inline& Inline137 =  Inline();
Inline137.setUSE(CString("_3"));
fieldValue136.addChild(Inline137);

ProtoInstance131.addChild(&fieldValue136);

Transform130.addChild(&ProtoInstance131);

Transform17.addChild(&Transform130);

Transform& Transform138 =  Transform();
Transform138.setDEF(CString("Bau-hinten-rechts-Yellow16"));
Transform138.setTranslation(new float[]{82.9777,21.5032,-57.9282});
ProtoInstance& ProtoInstance139 =  ProtoInstance();
ProtoInstance139.setName(CString("Bonus"));
fieldValue& fieldValue140 =  fieldValue();
fieldValue140.setName(CString("level2"));
Inline& Inline141 =  Inline();
Inline141.setUSE(CString("_1"));
fieldValue140.addChild(Inline141);

ProtoInstance139.addChild(&fieldValue140);

fieldValue& fieldValue142 =  fieldValue();
fieldValue142.setName(CString("level1"));
Inline& Inline143 =  Inline();
Inline143.setUSE(CString("_2"));
fieldValue142.addChild(Inline143);

ProtoInstance139.addChild(&fieldValue142);

fieldValue& fieldValue144 =  fieldValue();
fieldValue144.setName(CString("level0"));
Inline& Inline145 =  Inline();
Inline145.setUSE(CString("_3"));
fieldValue144.addChild(Inline145);

ProtoInstance139.addChild(&fieldValue144);

Transform138.addChild(&ProtoInstance139);

Transform17.addChild(&Transform138);

Transform16.addChild(&Transform17);

Scene7.addChild(&Transform16);

X3D0.setScene(&Scene7);

//}
