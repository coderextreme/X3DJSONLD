#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Full";
X3D0.version = "3.3";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "comment";
meta2.content = "World of Titania";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "created";
meta3.content = "Thu, 05 Nov 2015 03:28:57 GMT";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Holger Seelig";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "generator";
meta5.content = "Titania V1.2.0, http://titania.create3000.de";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "modified";
meta6.content = "Thu, 05 Nov 2015 03:28:57 GMT";
head1.meta[4] = meta6;

head = head1;

ExternProtoDeclare ExternProtoDeclare8 = createNode("ExternProtoDeclare");
ExternProtoDeclare8.name = "Bonus";
ExternProtoDeclare8.url = new MFString(new java.lang.String["Bonus_proto__2.x3d"]);
field field9 = createNode("field");
field9.name = "startTime";
field9.accessType = "inputOnly";
field9.type = "SFTime";
ExternProtoDeclare8.field = new MFNode();

ExternProtoDeclare8.field[0] = field9;

field field10 = createNode("field");
field10.name = "enterTime";
field10.accessType = "outputOnly";
field10.type = "SFTime";
ExternProtoDeclare8.field[1] = field10;

field field11 = createNode("field");
field11.name = "range";
field11.accessType = "initializeOnly";
field11.type = "MFFloat";
ExternProtoDeclare8.field[2] = field11;

field field12 = createNode("field");
field12.name = "size";
field12.accessType = "inputOutput";
field12.type = "SFVec3f";
ExternProtoDeclare8.field[3] = field12;

field field13 = createNode("field");
field13.name = "level2";
field13.accessType = "inputOutput";
field13.type = "MFNode";
ExternProtoDeclare8.field[4] = field13;

field field14 = createNode("field");
field14.name = "level1";
field14.accessType = "inputOutput";
field14.type = "MFNode";
ExternProtoDeclare8.field[5] = field14;

field field15 = createNode("field");
field15.name = "level0";
field15.accessType = "inputOutput";
field15.type = "MFNode";
ExternProtoDeclare8.field[6] = field15;

children = new MFNode();

children[0] = ExternProtoDeclare8;

Transform Transform16 = createNode("Transform");
Transform16.DEF = "Bonus";
Transform Transform17 = createNode("Transform");
Transform17.DEF = "Yellow";
Transform Transform18 = createNode("Transform");
Transform18.DEF = "Wache-rechts-Yellow1";
Transform18.translation = new SFVec3f(new float[56.7031,4.58303,66.4808]);
ProtoInstance ProtoInstance19 = createNode("ProtoInstance");
ProtoInstance19.name = "Bonus";
fieldValue fieldValue20 = createNode("fieldValue");
fieldValue20.name = "level2";
Inline Inline21 = createNode("Inline");
Inline21.DEF = "_1";
Inline21.url = new MFString(new java.lang.String["bonus-yellow-level2.x3d"]);
fieldValue20.children = new MFNode();

fieldValue20.children[0] = Inline21;

ProtoInstance19.fieldValue = new MFNode();

ProtoInstance19.fieldValue[0] = fieldValue20;

fieldValue fieldValue22 = createNode("fieldValue");
fieldValue22.name = "level1";
Inline Inline23 = createNode("Inline");
Inline23.DEF = "_2";
Inline23.url = new MFString(new java.lang.String["bonus-yellow-level1.x3d"]);
fieldValue22.children = new MFNode();

fieldValue22.children[0] = Inline23;

ProtoInstance19.fieldValue[1] = fieldValue22;

fieldValue fieldValue24 = createNode("fieldValue");
fieldValue24.name = "level0";
Inline Inline25 = createNode("Inline");
Inline25.DEF = "_3";
Inline25.url = new MFString(new java.lang.String["bonus-yellow-level0.x3d"]);
fieldValue24.children = new MFNode();

fieldValue24.children[0] = Inline25;

ProtoInstance19.fieldValue[2] = fieldValue24;

Transform18.children = new MFNode();

Transform18.children[0] = ProtoInstance19;

Transform17.children = new MFNode();

Transform17.children[0] = Transform18;

Transform Transform26 = createNode("Transform");
Transform26.DEF = "Wache-rechts-Yellow2";
Transform26.translation = new SFVec3f(new float[56.7892,4.53746,70.5596]);
ProtoInstance ProtoInstance27 = createNode("ProtoInstance");
ProtoInstance27.name = "Bonus";
fieldValue fieldValue28 = createNode("fieldValue");
fieldValue28.name = "level2";
Inline Inline29 = createNode("Inline");
Inline29.USE = "_1";
fieldValue28.children = new MFNode();

fieldValue28.children[0] = Inline29;

ProtoInstance27.fieldValue = new MFNode();

ProtoInstance27.fieldValue[0] = fieldValue28;

fieldValue fieldValue30 = createNode("fieldValue");
fieldValue30.name = "level1";
Inline Inline31 = createNode("Inline");
Inline31.USE = "_2";
fieldValue30.children = new MFNode();

fieldValue30.children[0] = Inline31;

ProtoInstance27.fieldValue[1] = fieldValue30;

fieldValue fieldValue32 = createNode("fieldValue");
fieldValue32.name = "level0";
Inline Inline33 = createNode("Inline");
Inline33.USE = "_3";
fieldValue32.children = new MFNode();

fieldValue32.children[0] = Inline33;

ProtoInstance27.fieldValue[2] = fieldValue32;

Transform26.children = new MFNode();

Transform26.children[0] = ProtoInstance27;

Transform17.children[1] = Transform26;

Transform Transform34 = createNode("Transform");
Transform34.DEF = "Felsgang-Yellow3";
Transform34.translation = new SFVec3f(new float[115.71,42.3592,-0.817799]);
ProtoInstance ProtoInstance35 = createNode("ProtoInstance");
ProtoInstance35.name = "Bonus";
fieldValue fieldValue36 = createNode("fieldValue");
fieldValue36.name = "level2";
Inline Inline37 = createNode("Inline");
Inline37.USE = "_1";
fieldValue36.children = new MFNode();

fieldValue36.children[0] = Inline37;

ProtoInstance35.fieldValue = new MFNode();

ProtoInstance35.fieldValue[0] = fieldValue36;

fieldValue fieldValue38 = createNode("fieldValue");
fieldValue38.name = "level1";
Inline Inline39 = createNode("Inline");
Inline39.USE = "_2";
fieldValue38.children = new MFNode();

fieldValue38.children[0] = Inline39;

ProtoInstance35.fieldValue[1] = fieldValue38;

fieldValue fieldValue40 = createNode("fieldValue");
fieldValue40.name = "level0";
Inline Inline41 = createNode("Inline");
Inline41.USE = "_3";
fieldValue40.children = new MFNode();

fieldValue40.children[0] = Inline41;

ProtoInstance35.fieldValue[2] = fieldValue40;

Transform34.children = new MFNode();

Transform34.children[0] = ProtoInstance35;

Transform17.children[2] = Transform34;

Transform Transform42 = createNode("Transform");
Transform42.DEF = "Ausgang-oben-Yellow4";
Transform42.translation = new SFVec3f(new float[30.196,31.6091,-37.0206]);
ProtoInstance ProtoInstance43 = createNode("ProtoInstance");
ProtoInstance43.name = "Bonus";
fieldValue fieldValue44 = createNode("fieldValue");
fieldValue44.name = "level2";
Inline Inline45 = createNode("Inline");
Inline45.USE = "_1";
fieldValue44.children = new MFNode();

fieldValue44.children[0] = Inline45;

ProtoInstance43.fieldValue = new MFNode();

ProtoInstance43.fieldValue[0] = fieldValue44;

fieldValue fieldValue46 = createNode("fieldValue");
fieldValue46.name = "level1";
Inline Inline47 = createNode("Inline");
Inline47.USE = "_2";
fieldValue46.children = new MFNode();

fieldValue46.children[0] = Inline47;

ProtoInstance43.fieldValue[1] = fieldValue46;

fieldValue fieldValue48 = createNode("fieldValue");
fieldValue48.name = "level0";
Inline Inline49 = createNode("Inline");
Inline49.USE = "_3";
fieldValue48.children = new MFNode();

fieldValue48.children[0] = Inline49;

ProtoInstance43.fieldValue[2] = fieldValue48;

Transform42.children = new MFNode();

Transform42.children[0] = ProtoInstance43;

Transform17.children[3] = Transform42;

Transform Transform50 = createNode("Transform");
Transform50.DEF = "Ausgang-oben-Yellow5";
Transform50.translation = new SFVec3f(new float[-27.9319,31.6091,-36.9089]);
ProtoInstance ProtoInstance51 = createNode("ProtoInstance");
ProtoInstance51.name = "Bonus";
fieldValue fieldValue52 = createNode("fieldValue");
fieldValue52.name = "level2";
Inline Inline53 = createNode("Inline");
Inline53.USE = "_1";
fieldValue52.children = new MFNode();

fieldValue52.children[0] = Inline53;

ProtoInstance51.fieldValue = new MFNode();

ProtoInstance51.fieldValue[0] = fieldValue52;

fieldValue fieldValue54 = createNode("fieldValue");
fieldValue54.name = "level1";
Inline Inline55 = createNode("Inline");
Inline55.USE = "_2";
fieldValue54.children = new MFNode();

fieldValue54.children[0] = Inline55;

ProtoInstance51.fieldValue[1] = fieldValue54;

fieldValue fieldValue56 = createNode("fieldValue");
fieldValue56.name = "level0";
Inline Inline57 = createNode("Inline");
Inline57.USE = "_3";
fieldValue56.children = new MFNode();

fieldValue56.children[0] = Inline57;

ProtoInstance51.fieldValue[2] = fieldValue56;

Transform50.children = new MFNode();

Transform50.children[0] = ProtoInstance51;

Transform17.children[4] = Transform50;

Transform Transform58 = createNode("Transform");
Transform58.DEF = "Ausgang-oben-Yellow6";
Transform58.translation = new SFVec3f(new float[-25.9477,31.6091,-36.9089]);
ProtoInstance ProtoInstance59 = createNode("ProtoInstance");
ProtoInstance59.name = "Bonus";
fieldValue fieldValue60 = createNode("fieldValue");
fieldValue60.name = "level2";
Inline Inline61 = createNode("Inline");
Inline61.USE = "_1";
fieldValue60.children = new MFNode();

fieldValue60.children[0] = Inline61;

ProtoInstance59.fieldValue = new MFNode();

ProtoInstance59.fieldValue[0] = fieldValue60;

fieldValue fieldValue62 = createNode("fieldValue");
fieldValue62.name = "level1";
Inline Inline63 = createNode("Inline");
Inline63.USE = "_2";
fieldValue62.children = new MFNode();

fieldValue62.children[0] = Inline63;

ProtoInstance59.fieldValue[1] = fieldValue62;

fieldValue fieldValue64 = createNode("fieldValue");
fieldValue64.name = "level0";
Inline Inline65 = createNode("Inline");
Inline65.USE = "_3";
fieldValue64.children = new MFNode();

fieldValue64.children[0] = Inline65;

ProtoInstance59.fieldValue[2] = fieldValue64;

Transform58.children = new MFNode();

Transform58.children[0] = ProtoInstance59;

Transform17.children[5] = Transform58;

Transform Transform66 = createNode("Transform");
Transform66.DEF = "Ausgang-oben-Yellow7";
Transform66.translation = new SFVec3f(new float[28.1998,31.6091,-37.0206]);
ProtoInstance ProtoInstance67 = createNode("ProtoInstance");
ProtoInstance67.name = "Bonus";
fieldValue fieldValue68 = createNode("fieldValue");
fieldValue68.name = "level2";
Inline Inline69 = createNode("Inline");
Inline69.USE = "_1";
fieldValue68.children = new MFNode();

fieldValue68.children[0] = Inline69;

ProtoInstance67.fieldValue = new MFNode();

ProtoInstance67.fieldValue[0] = fieldValue68;

fieldValue fieldValue70 = createNode("fieldValue");
fieldValue70.name = "level1";
Inline Inline71 = createNode("Inline");
Inline71.USE = "_2";
fieldValue70.children = new MFNode();

fieldValue70.children[0] = Inline71;

ProtoInstance67.fieldValue[1] = fieldValue70;

fieldValue fieldValue72 = createNode("fieldValue");
fieldValue72.name = "level0";
Inline Inline73 = createNode("Inline");
Inline73.USE = "_3";
fieldValue72.children = new MFNode();

fieldValue72.children[0] = Inline73;

ProtoInstance67.fieldValue[2] = fieldValue72;

Transform66.children = new MFNode();

Transform66.children[0] = ProtoInstance67;

Transform17.children[6] = Transform66;

Transform Transform74 = createNode("Transform");
Transform74.DEF = "Eingang1-Yellow8";
Transform74.translation = new SFVec3f(new float[3.62108,1.89283,68.9743]);
ProtoInstance ProtoInstance75 = createNode("ProtoInstance");
ProtoInstance75.name = "Bonus";
fieldValue fieldValue76 = createNode("fieldValue");
fieldValue76.name = "level2";
Inline Inline77 = createNode("Inline");
Inline77.USE = "_1";
fieldValue76.children = new MFNode();

fieldValue76.children[0] = Inline77;

ProtoInstance75.fieldValue = new MFNode();

ProtoInstance75.fieldValue[0] = fieldValue76;

fieldValue fieldValue78 = createNode("fieldValue");
fieldValue78.name = "level1";
Inline Inline79 = createNode("Inline");
Inline79.USE = "_2";
fieldValue78.children = new MFNode();

fieldValue78.children[0] = Inline79;

ProtoInstance75.fieldValue[1] = fieldValue78;

fieldValue fieldValue80 = createNode("fieldValue");
fieldValue80.name = "level0";
Inline Inline81 = createNode("Inline");
Inline81.USE = "_3";
fieldValue80.children = new MFNode();

fieldValue80.children[0] = Inline81;

ProtoInstance75.fieldValue[2] = fieldValue80;

Transform74.children = new MFNode();

Transform74.children[0] = ProtoInstance75;

Transform17.children[7] = Transform74;

Transform Transform82 = createNode("Transform");
Transform82.DEF = "Eingang2-Yellow9";
Transform82.translation = new SFVec3f(new float[9.97336,1.5,57.0006]);
ProtoInstance ProtoInstance83 = createNode("ProtoInstance");
ProtoInstance83.name = "Bonus";
fieldValue fieldValue84 = createNode("fieldValue");
fieldValue84.name = "level2";
Inline Inline85 = createNode("Inline");
Inline85.USE = "_1";
fieldValue84.children = new MFNode();

fieldValue84.children[0] = Inline85;

ProtoInstance83.fieldValue = new MFNode();

ProtoInstance83.fieldValue[0] = fieldValue84;

fieldValue fieldValue86 = createNode("fieldValue");
fieldValue86.name = "level1";
Inline Inline87 = createNode("Inline");
Inline87.USE = "_2";
fieldValue86.children = new MFNode();

fieldValue86.children[0] = Inline87;

ProtoInstance83.fieldValue[1] = fieldValue86;

fieldValue fieldValue88 = createNode("fieldValue");
fieldValue88.name = "level0";
Inline Inline89 = createNode("Inline");
Inline89.USE = "_3";
fieldValue88.children = new MFNode();

fieldValue88.children[0] = Inline89;

ProtoInstance83.fieldValue[2] = fieldValue88;

Transform82.children = new MFNode();

Transform82.children[0] = ProtoInstance83;

Transform17.children[8] = Transform82;

Transform Transform90 = createNode("Transform");
Transform90.DEF = "Pflanze-Yellow10";
Transform90.translation = new SFVec3f(new float[31.0486,1.5,35.005]);
ProtoInstance ProtoInstance91 = createNode("ProtoInstance");
ProtoInstance91.name = "Bonus";
fieldValue fieldValue92 = createNode("fieldValue");
fieldValue92.name = "level2";
Inline Inline93 = createNode("Inline");
Inline93.USE = "_1";
fieldValue92.children = new MFNode();

fieldValue92.children[0] = Inline93;

ProtoInstance91.fieldValue = new MFNode();

ProtoInstance91.fieldValue[0] = fieldValue92;

fieldValue fieldValue94 = createNode("fieldValue");
fieldValue94.name = "level1";
Inline Inline95 = createNode("Inline");
Inline95.USE = "_2";
fieldValue94.children = new MFNode();

fieldValue94.children[0] = Inline95;

ProtoInstance91.fieldValue[1] = fieldValue94;

fieldValue fieldValue96 = createNode("fieldValue");
fieldValue96.name = "level0";
Inline Inline97 = createNode("Inline");
Inline97.USE = "_3";
fieldValue96.children = new MFNode();

fieldValue96.children[0] = Inline97;

ProtoInstance91.fieldValue[2] = fieldValue96;

Transform90.children = new MFNode();

Transform90.children[0] = ProtoInstance91;

Transform17.children[9] = Transform90;

Transform Transform98 = createNode("Transform");
Transform98.DEF = "Wache-rechts-vor-Yellow11";
Transform98.translation = new SFVec3f(new float[61.9902,1.5,51.9971]);
ProtoInstance ProtoInstance99 = createNode("ProtoInstance");
ProtoInstance99.name = "Bonus";
fieldValue fieldValue100 = createNode("fieldValue");
fieldValue100.name = "level2";
Inline Inline101 = createNode("Inline");
Inline101.USE = "_1";
fieldValue100.children = new MFNode();

fieldValue100.children[0] = Inline101;

ProtoInstance99.fieldValue = new MFNode();

ProtoInstance99.fieldValue[0] = fieldValue100;

fieldValue fieldValue102 = createNode("fieldValue");
fieldValue102.name = "level1";
Inline Inline103 = createNode("Inline");
Inline103.USE = "_2";
fieldValue102.children = new MFNode();

fieldValue102.children[0] = Inline103;

ProtoInstance99.fieldValue[1] = fieldValue102;

fieldValue fieldValue104 = createNode("fieldValue");
fieldValue104.name = "level0";
Inline Inline105 = createNode("Inline");
Inline105.USE = "_3";
fieldValue104.children = new MFNode();

fieldValue104.children[0] = Inline105;

ProtoInstance99.fieldValue[2] = fieldValue104;

Transform98.children = new MFNode();

Transform98.children[0] = ProtoInstance99;

Transform17.children[10] = Transform98;

Transform Transform106 = createNode("Transform");
Transform106.DEF = "Turm-rechts-Yellow12";
Transform106.translation = new SFVec3f(new float[71.1193,33.9596,60.6608]);
ProtoInstance ProtoInstance107 = createNode("ProtoInstance");
ProtoInstance107.name = "Bonus";
fieldValue fieldValue108 = createNode("fieldValue");
fieldValue108.name = "level2";
Inline Inline109 = createNode("Inline");
Inline109.USE = "_1";
fieldValue108.children = new MFNode();

fieldValue108.children[0] = Inline109;

ProtoInstance107.fieldValue = new MFNode();

ProtoInstance107.fieldValue[0] = fieldValue108;

fieldValue fieldValue110 = createNode("fieldValue");
fieldValue110.name = "level1";
Inline Inline111 = createNode("Inline");
Inline111.USE = "_2";
fieldValue110.children = new MFNode();

fieldValue110.children[0] = Inline111;

ProtoInstance107.fieldValue[1] = fieldValue110;

fieldValue fieldValue112 = createNode("fieldValue");
fieldValue112.name = "level0";
Inline Inline113 = createNode("Inline");
Inline113.USE = "_3";
fieldValue112.children = new MFNode();

fieldValue112.children[0] = Inline113;

ProtoInstance107.fieldValue[2] = fieldValue112;

Transform106.children = new MFNode();

Transform106.children[0] = ProtoInstance107;

Transform17.children[11] = Transform106;

Transform Transform114 = createNode("Transform");
Transform114.DEF = "Bau-hinten-links-Yellow13";
Transform114.translation = new SFVec3f(new float[-80.0357,1.5,-6.00637]);
ProtoInstance ProtoInstance115 = createNode("ProtoInstance");
ProtoInstance115.name = "Bonus";
fieldValue fieldValue116 = createNode("fieldValue");
fieldValue116.name = "level2";
Inline Inline117 = createNode("Inline");
Inline117.USE = "_1";
fieldValue116.children = new MFNode();

fieldValue116.children[0] = Inline117;

ProtoInstance115.fieldValue = new MFNode();

ProtoInstance115.fieldValue[0] = fieldValue116;

fieldValue fieldValue118 = createNode("fieldValue");
fieldValue118.name = "level1";
Inline Inline119 = createNode("Inline");
Inline119.USE = "_2";
fieldValue118.children = new MFNode();

fieldValue118.children[0] = Inline119;

ProtoInstance115.fieldValue[1] = fieldValue118;

fieldValue fieldValue120 = createNode("fieldValue");
fieldValue120.name = "level0";
Inline Inline121 = createNode("Inline");
Inline121.USE = "_3";
fieldValue120.children = new MFNode();

fieldValue120.children[0] = Inline121;

ProtoInstance115.fieldValue[2] = fieldValue120;

Transform114.children = new MFNode();

Transform114.children[0] = ProtoInstance115;

Transform17.children[12] = Transform114;

Transform Transform122 = createNode("Transform");
Transform122.DEF = "Bau-hinten-links-Raum-Yellow14";
Transform122.translation = new SFVec3f(new float[-81.4743,21.5034,-57.6993]);
ProtoInstance ProtoInstance123 = createNode("ProtoInstance");
ProtoInstance123.name = "Bonus";
fieldValue fieldValue124 = createNode("fieldValue");
fieldValue124.name = "level2";
Inline Inline125 = createNode("Inline");
Inline125.USE = "_1";
fieldValue124.children = new MFNode();

fieldValue124.children[0] = Inline125;

ProtoInstance123.fieldValue = new MFNode();

ProtoInstance123.fieldValue[0] = fieldValue124;

fieldValue fieldValue126 = createNode("fieldValue");
fieldValue126.name = "level1";
Inline Inline127 = createNode("Inline");
Inline127.USE = "_2";
fieldValue126.children = new MFNode();

fieldValue126.children[0] = Inline127;

ProtoInstance123.fieldValue[1] = fieldValue126;

fieldValue fieldValue128 = createNode("fieldValue");
fieldValue128.name = "level0";
Inline Inline129 = createNode("Inline");
Inline129.USE = "_3";
fieldValue128.children = new MFNode();

fieldValue128.children[0] = Inline129;

ProtoInstance123.fieldValue[2] = fieldValue128;

Transform122.children = new MFNode();

Transform122.children[0] = ProtoInstance123;

Transform17.children[13] = Transform122;

Transform Transform130 = createNode("Transform");
Transform130.DEF = "Bau-hinten-rechts-Yellow15";
Transform130.translation = new SFVec3f(new float[75.2517,21.5032,-57.4253]);
ProtoInstance ProtoInstance131 = createNode("ProtoInstance");
ProtoInstance131.name = "Bonus";
fieldValue fieldValue132 = createNode("fieldValue");
fieldValue132.name = "level2";
Inline Inline133 = createNode("Inline");
Inline133.USE = "_1";
fieldValue132.children = new MFNode();

fieldValue132.children[0] = Inline133;

ProtoInstance131.fieldValue = new MFNode();

ProtoInstance131.fieldValue[0] = fieldValue132;

fieldValue fieldValue134 = createNode("fieldValue");
fieldValue134.name = "level1";
Inline Inline135 = createNode("Inline");
Inline135.USE = "_2";
fieldValue134.children = new MFNode();

fieldValue134.children[0] = Inline135;

ProtoInstance131.fieldValue[1] = fieldValue134;

fieldValue fieldValue136 = createNode("fieldValue");
fieldValue136.name = "level0";
Inline Inline137 = createNode("Inline");
Inline137.USE = "_3";
fieldValue136.children = new MFNode();

fieldValue136.children[0] = Inline137;

ProtoInstance131.fieldValue[2] = fieldValue136;

Transform130.children = new MFNode();

Transform130.children[0] = ProtoInstance131;

Transform17.children[14] = Transform130;

Transform Transform138 = createNode("Transform");
Transform138.DEF = "Bau-hinten-rechts-Yellow16";
Transform138.translation = new SFVec3f(new float[82.9777,21.5032,-57.9282]);
ProtoInstance ProtoInstance139 = createNode("ProtoInstance");
ProtoInstance139.name = "Bonus";
fieldValue fieldValue140 = createNode("fieldValue");
fieldValue140.name = "level2";
Inline Inline141 = createNode("Inline");
Inline141.USE = "_1";
fieldValue140.children = new MFNode();

fieldValue140.children[0] = Inline141;

ProtoInstance139.fieldValue = new MFNode();

ProtoInstance139.fieldValue[0] = fieldValue140;

fieldValue fieldValue142 = createNode("fieldValue");
fieldValue142.name = "level1";
Inline Inline143 = createNode("Inline");
Inline143.USE = "_2";
fieldValue142.children = new MFNode();

fieldValue142.children[0] = Inline143;

ProtoInstance139.fieldValue[1] = fieldValue142;

fieldValue fieldValue144 = createNode("fieldValue");
fieldValue144.name = "level0";
Inline Inline145 = createNode("Inline");
Inline145.USE = "_3";
fieldValue144.children = new MFNode();

fieldValue144.children[0] = Inline145;

ProtoInstance139.fieldValue[2] = fieldValue144;

Transform138.children = new MFNode();

Transform138.children[0] = ProtoInstance139;

Transform17.children[15] = Transform138;

Transform16.children = new MFNode();

Transform16.children[0] = Transform17;

children[1] = Transform16;

}
