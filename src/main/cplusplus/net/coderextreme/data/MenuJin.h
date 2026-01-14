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
meta2.setContent(CString("Menu.x3d"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(CString("description"));
meta3.setContent(CString("X3D scene with a Switch of Inlines controlled by a menu"));
head1.addMeta(&meta3);

X3D0.setHead(&head1);

Scene& Scene4 =  Scene();
//Viewpoint and any other scene setup
Viewpoint& Viewpoint5 =  Viewpoint();
Viewpoint5.setPosition(new float[]{0.0,20.0,110.0});
Scene4.addChild(&Viewpoint5);

Group& Group6 =  Group();
Switch& Switch7 =  Switch();
Switch7.setDEF(CString("SceneSwitcher"));
Switch7.setWhichChoice(0);
Group& Group8 =  Group();
Script& Script9 =  Script();
Script9.setDEF(CString("Choice0"));
field& field10 =  field();
field10.setName(CString("touchTime"));
field10.setType(CString("SFTime"));
field10.setAccessType(CString("inputOnly"));
Script9.addChild(&field10);

field& field11 =  field();
field11.setName(CString("choice"));
field11.setType(CString("SFInt32"));
field11.setAccessType(CString("outputOnly"));
Script9.addChild(&field11);


//Script9.setSourceCode(CString("ecmascript:")+
//_T("      function set_touchTime(value) {")+
//_T("          choice = 0;")+
//_T("      }")+
//_T("      function touchTime(value) {")+
//_T("          choice = 0;")+
//_T("      }"));
Group8.addChild(&Script9);

Inline& Inline12 =  Inline();
Inline12.setDEF(CString("JinBlink"));
Inline12.setUrl(new CString[]{CString("../resources/JinBlink.x3d"), CString("JinBlink.x3d")}, 2);
Group8.addChild(&Inline12);

Switch7.addChild(&Group8);

Group& Group13 =  Group();
Script& Script14 =  Script();
Script14.setDEF(CString("Choice1"));
field& field15 =  field();
field15.setName(CString("touchTime"));
field15.setType(CString("SFTime"));
field15.setAccessType(CString("inputOnly"));
Script14.addChild(&field15);

field& field16 =  field();
field16.setName(CString("choice"));
field16.setType(CString("SFInt32"));
field16.setAccessType(CString("outputOnly"));
Script14.addChild(&field16);


//Script14.setSourceCode(CString("ecmascript:")+
//_T("      function set_touchTime(value) {")+
//_T("          choice = 1;")+
//_T("      }")+
//_T("      function touchTime(value) {")+
//_T("          choice = 1;")+
//_T("      }"));
Group13.addChild(&Script14);

Inline& Inline17 =  Inline();
Inline17.setDEF(CString("JinBrowLowerer"));
Inline17.setUrl(new CString[]{CString("../resources/JinBrowLowerer.x3d"), CString("JinBrowLowerer.x3d")}, 2);
Group13.addChild(&Inline17);

Switch7.addChild(&Group13);

Group& Group18 =  Group();
Script& Script19 =  Script();
Script19.setDEF(CString("Choice2"));
field& field20 =  field();
field20.setName(CString("touchTime"));
field20.setType(CString("SFTime"));
field20.setAccessType(CString("inputOnly"));
Script19.addChild(&field20);

field& field21 =  field();
field21.setName(CString("choice"));
field21.setType(CString("SFInt32"));
field21.setAccessType(CString("outputOnly"));
Script19.addChild(&field21);


//Script19.setSourceCode(CString("ecmascript:")+
//_T("      function set_touchTime(value) {")+
//_T("          choice = 2;")+
//_T("      }")+
//_T("      function touchTime(value) {")+
//_T("          choice = 2;")+
//_T("      }"));
Group18.addChild(&Script19);

Inline& Inline22 =  Inline();
Inline22.setDEF(CString("JinCheekPuffer"));
Inline22.setUrl(new CString[]{CString("../resources/JinCheekPuffer.x3d"), CString("JinCheekPuffer.x3d")}, 2);
Group18.addChild(&Inline22);

Switch7.addChild(&Group18);

Group& Group23 =  Group();
Script& Script24 =  Script();
Script24.setDEF(CString("Choice3"));
field& field25 =  field();
field25.setName(CString("touchTime"));
field25.setType(CString("SFTime"));
field25.setAccessType(CString("inputOnly"));
Script24.addChild(&field25);

field& field26 =  field();
field26.setName(CString("choice"));
field26.setType(CString("SFInt32"));
field26.setAccessType(CString("outputOnly"));
Script24.addChild(&field26);


//Script24.setSourceCode(CString("ecmascript:")+
//_T("      function set_touchTime(value) {")+
//_T("          choice = 3;")+
//_T("      }")+
//_T("      function touchTime(value) {")+
//_T("          choice = 3;")+
//_T("      }"));
Group23.addChild(&Script24);

Inline& Inline27 =  Inline();
Inline27.setDEF(CString("JinCheekRaiser"));
Inline27.setUrl(new CString[]{CString("../resources/JinCheekRaiser.x3d"), CString("JinCheekRaiser.x3d")}, 2);
Group23.addChild(&Inline27);

Switch7.addChild(&Group23);

Group& Group28 =  Group();
Script& Script29 =  Script();
Script29.setDEF(CString("Choice4"));
field& field30 =  field();
field30.setName(CString("touchTime"));
field30.setType(CString("SFTime"));
field30.setAccessType(CString("inputOnly"));
Script29.addChild(&field30);

field& field31 =  field();
field31.setName(CString("choice"));
field31.setType(CString("SFInt32"));
field31.setAccessType(CString("outputOnly"));
Script29.addChild(&field31);


//Script29.setSourceCode(CString("ecmascript:")+
//_T("      function set_touchTime(value) {")+
//_T("          choice = 4;")+
//_T("      }")+
//_T("      function touchTime(value) {")+
//_T("          choice = 4;")+
//_T("      }"));
Group28.addChild(&Script29);

Inline& Inline32 =  Inline();
Inline32.setDEF(CString("JinChinRaiser"));
Inline32.setUrl(new CString[]{CString("../resources/JinChinRaiser.x3d"), CString("JinChinRaiser.x3d")}, 2);
Group28.addChild(&Inline32);

Switch7.addChild(&Group28);

Group& Group33 =  Group();
Script& Script34 =  Script();
Script34.setDEF(CString("Choice5"));
field& field35 =  field();
field35.setName(CString("touchTime"));
field35.setType(CString("SFTime"));
field35.setAccessType(CString("inputOnly"));
Script34.addChild(&field35);

field& field36 =  field();
field36.setName(CString("choice"));
field36.setType(CString("SFInt32"));
field36.setAccessType(CString("outputOnly"));
Script34.addChild(&field36);


//Script34.setSourceCode(CString("ecmascript:")+
//_T("      function set_touchTime(value) {")+
//_T("          choice = 5;")+
//_T("      }")+
//_T("      function touchTime(value) {")+
//_T("          choice = 5;")+
//_T("      }"));
Group33.addChild(&Script34);

Inline& Inline37 =  Inline();
Inline37.setDEF(CString("JinDimpler"));
Inline37.setUrl(new CString[]{CString("../resources/JinDimpler.x3d"), CString("JinDimpler.x3d")}, 2);
Group33.addChild(&Inline37);

Switch7.addChild(&Group33);

Group& Group38 =  Group();
Script& Script39 =  Script();
Script39.setDEF(CString("Choice6"));
field& field40 =  field();
field40.setName(CString("touchTime"));
field40.setType(CString("SFTime"));
field40.setAccessType(CString("inputOnly"));
Script39.addChild(&field40);

field& field41 =  field();
field41.setName(CString("choice"));
field41.setType(CString("SFInt32"));
field41.setAccessType(CString("outputOnly"));
Script39.addChild(&field41);


//Script39.setSourceCode(CString("ecmascript:")+
//_T("      function set_touchTime(value) {")+
//_T("          choice = 6;")+
//_T("      }")+
//_T("      function touchTime(value) {")+
//_T("          choice = 6;")+
//_T("      }"));
Group38.addChild(&Script39);

Inline& Inline42 =  Inline();
Inline42.setDEF(CString("JinEyesClosed"));
Inline42.setUrl(new CString[]{CString("../resources/JinEyesClosed.x3d"), CString("JinEyesClosed.x3d")}, 2);
Group38.addChild(&Inline42);

Switch7.addChild(&Group38);

Group& Group43 =  Group();
Script& Script44 =  Script();
Script44.setDEF(CString("Choice7"));
field& field45 =  field();
field45.setName(CString("touchTime"));
field45.setType(CString("SFTime"));
field45.setAccessType(CString("inputOnly"));
Script44.addChild(&field45);

field& field46 =  field();
field46.setName(CString("choice"));
field46.setType(CString("SFInt32"));
field46.setAccessType(CString("outputOnly"));
Script44.addChild(&field46);


//Script44.setSourceCode(CString("ecmascript:")+
//_T("      function set_touchTime(value) {")+
//_T("          choice = 7;")+
//_T("      }")+
//_T("      function touchTime(value) {")+
//_T("          choice = 7;")+
//_T("      }"));
Group43.addChild(&Script44);

Inline& Inline47 =  Inline();
Inline47.setDEF(CString("JinInnerBrowRaiser"));
Inline47.setUrl(new CString[]{CString("../resources/JinInnerBrowRaiser.x3d"), CString("JinInnerBrowRaiser.x3d")}, 2);
Group43.addChild(&Inline47);

Switch7.addChild(&Group43);

Group& Group48 =  Group();
Script& Script49 =  Script();
Script49.setDEF(CString("Choice8"));
field& field50 =  field();
field50.setName(CString("touchTime"));
field50.setType(CString("SFTime"));
field50.setAccessType(CString("inputOnly"));
Script49.addChild(&field50);

field& field51 =  field();
field51.setName(CString("choice"));
field51.setType(CString("SFInt32"));
field51.setAccessType(CString("outputOnly"));
Script49.addChild(&field51);


//Script49.setSourceCode(CString("ecmascript:")+
//_T("      function set_touchTime(value) {")+
//_T("          choice = 8;")+
//_T("      }")+
//_T("      function touchTime(value) {")+
//_T("          choice = 8;")+
//_T("      }"));
Group48.addChild(&Script49);

Inline& Inline52 =  Inline();
Inline52.setDEF(CString("JinJawDrop"));
Inline52.setUrl(new CString[]{CString("../resources/JinJawDrop.x3d"), CString("JinJawDrop.x3d")}, 2);
Group48.addChild(&Inline52);

Switch7.addChild(&Group48);

Group& Group53 =  Group();
Script& Script54 =  Script();
Script54.setDEF(CString("Choice9"));
field& field55 =  field();
field55.setName(CString("touchTime"));
field55.setType(CString("SFTime"));
field55.setAccessType(CString("inputOnly"));
Script54.addChild(&field55);

field& field56 =  field();
field56.setName(CString("choice"));
field56.setType(CString("SFInt32"));
field56.setAccessType(CString("outputOnly"));
Script54.addChild(&field56);


//Script54.setSourceCode(CString("ecmascript:")+
//_T("      function set_touchTime(value) {")+
//_T("          choice = 9;")+
//_T("      }")+
//_T("      function touchTime(value) {")+
//_T("          choice = 9;")+
//_T("      }"));
Group53.addChild(&Script54);

Inline& Inline57 =  Inline();
Inline57.setDEF(CString("JinLidDroop"));
Inline57.setUrl(new CString[]{CString("../resources/JinLidDroop.x3d"), CString("JinLidDroop.x3d")}, 2);
Group53.addChild(&Inline57);

Switch7.addChild(&Group53);

Group& Group58 =  Group();
Script& Script59 =  Script();
Script59.setDEF(CString("Choice10"));
field& field60 =  field();
field60.setName(CString("touchTime"));
field60.setType(CString("SFTime"));
field60.setAccessType(CString("inputOnly"));
Script59.addChild(&field60);

field& field61 =  field();
field61.setName(CString("choice"));
field61.setType(CString("SFInt32"));
field61.setAccessType(CString("outputOnly"));
Script59.addChild(&field61);


//Script59.setSourceCode(CString("ecmascript:")+
//_T("      function set_touchTime(value) {")+
//_T("          choice = 10;")+
//_T("      }")+
//_T("      function touchTime(value) {")+
//_T("          choice = 10;")+
//_T("      }"));
Group58.addChild(&Script59);

Inline& Inline62 =  Inline();
Inline62.setDEF(CString("JinLidTightener"));
Inline62.setUrl(new CString[]{CString("../resources/JinLidTightener.x3d"), CString("JinLidTightener.x3d")}, 2);
Group58.addChild(&Inline62);

Switch7.addChild(&Group58);

Group& Group63 =  Group();
Script& Script64 =  Script();
Script64.setDEF(CString("Choice11"));
field& field65 =  field();
field65.setName(CString("touchTime"));
field65.setType(CString("SFTime"));
field65.setAccessType(CString("inputOnly"));
Script64.addChild(&field65);

field& field66 =  field();
field66.setName(CString("choice"));
field66.setType(CString("SFInt32"));
field66.setAccessType(CString("outputOnly"));
Script64.addChild(&field66);


//Script64.setSourceCode(CString("ecmascript:")+
//_T("      function set_touchTime(value) {")+
//_T("          choice = 11;")+
//_T("      }")+
//_T("      function touchTime(value) {")+
//_T("          choice = 11;")+
//_T("      }"));
Group63.addChild(&Script64);

Inline& Inline67 =  Inline();
Inline67.setDEF(CString("JinLipCornerDepressor"));
Inline67.setUrl(new CString[]{CString("../resources/JinLipCornerDepressor.x3d"), CString("JinLipCornerDepressor.x3d")}, 2);
Group63.addChild(&Inline67);

Switch7.addChild(&Group63);

Group& Group68 =  Group();
Script& Script69 =  Script();
Script69.setDEF(CString("Choice12"));
field& field70 =  field();
field70.setName(CString("touchTime"));
field70.setType(CString("SFTime"));
field70.setAccessType(CString("inputOnly"));
Script69.addChild(&field70);

field& field71 =  field();
field71.setName(CString("choice"));
field71.setType(CString("SFInt32"));
field71.setAccessType(CString("outputOnly"));
Script69.addChild(&field71);


//Script69.setSourceCode(CString("ecmascript:")+
//_T("      function set_touchTime(value) {")+
//_T("          choice = 12;")+
//_T("      }")+
//_T("      function touchTime(value) {")+
//_T("          choice = 12;")+
//_T("      }"));
Group68.addChild(&Script69);

Inline& Inline72 =  Inline();
Inline72.setDEF(CString("JinLipCornerPuller"));
Inline72.setUrl(new CString[]{CString("../resources/JinLipCornerPuller.x3d"), CString("JinLipCornerPuller.x3d")}, 2);
Group68.addChild(&Inline72);

Switch7.addChild(&Group68);

Group& Group73 =  Group();
Script& Script74 =  Script();
Script74.setDEF(CString("Choice13"));
field& field75 =  field();
field75.setName(CString("touchTime"));
field75.setType(CString("SFTime"));
field75.setAccessType(CString("inputOnly"));
Script74.addChild(&field75);

field& field76 =  field();
field76.setName(CString("choice"));
field76.setType(CString("SFInt32"));
field76.setAccessType(CString("outputOnly"));
Script74.addChild(&field76);


//Script74.setSourceCode(CString("ecmascript:")+
//_T("      function set_touchTime(value) {")+
//_T("          choice = 13;")+
//_T("      }")+
//_T("      function touchTime(value) {")+
//_T("          choice = 13;")+
//_T("      }"));
Group73.addChild(&Script74);

Inline& Inline77 =  Inline();
Inline77.setDEF(CString("JinLipFunneler"));
Inline77.setUrl(new CString[]{CString("../resources/JinLipFunneler.x3d"), CString("JinLipFunneler.x3d")}, 2);
Group73.addChild(&Inline77);

Switch7.addChild(&Group73);

Group& Group78 =  Group();
Script& Script79 =  Script();
Script79.setDEF(CString("Choice14"));
field& field80 =  field();
field80.setName(CString("touchTime"));
field80.setType(CString("SFTime"));
field80.setAccessType(CString("inputOnly"));
Script79.addChild(&field80);

field& field81 =  field();
field81.setName(CString("choice"));
field81.setType(CString("SFInt32"));
field81.setAccessType(CString("outputOnly"));
Script79.addChild(&field81);


//Script79.setSourceCode(CString("ecmascript:")+
//_T("      function set_touchTime(value) {")+
//_T("          choice = 14;")+
//_T("      }")+
//_T("      function touchTime(value) {")+
//_T("          choice = 14;")+
//_T("      }"));
Group78.addChild(&Script79);

Inline& Inline82 =  Inline();
Inline82.setDEF(CString("JinLipPressor"));
Inline82.setUrl(new CString[]{CString("../resources/JinLipPressor.x3d"), CString("JinLipPressor.x3d")}, 2);
Group78.addChild(&Inline82);

Switch7.addChild(&Group78);

Group& Group83 =  Group();
Script& Script84 =  Script();
Script84.setDEF(CString("Choice15"));
field& field85 =  field();
field85.setName(CString("touchTime"));
field85.setType(CString("SFTime"));
field85.setAccessType(CString("inputOnly"));
Script84.addChild(&field85);

field& field86 =  field();
field86.setName(CString("choice"));
field86.setType(CString("SFInt32"));
field86.setAccessType(CString("outputOnly"));
Script84.addChild(&field86);


//Script84.setSourceCode(CString("ecmascript:")+
//_T("      function set_touchTime(value) {")+
//_T("          choice = 15;")+
//_T("      }")+
//_T("      function touchTime(value) {")+
//_T("          choice = 15;")+
//_T("      }"));
Group83.addChild(&Script84);

Inline& Inline87 =  Inline();
Inline87.setDEF(CString("JinLipPuckerer"));
Inline87.setUrl(new CString[]{CString("../resources/JinLipPuckerer.x3d"), CString("JinLipPuckerer.x3d")}, 2);
Group83.addChild(&Inline87);

Switch7.addChild(&Group83);

Group& Group88 =  Group();
Script& Script89 =  Script();
Script89.setDEF(CString("Choice16"));
field& field90 =  field();
field90.setName(CString("touchTime"));
field90.setType(CString("SFTime"));
field90.setAccessType(CString("inputOnly"));
Script89.addChild(&field90);

field& field91 =  field();
field91.setName(CString("choice"));
field91.setType(CString("SFInt32"));
field91.setAccessType(CString("outputOnly"));
Script89.addChild(&field91);


//Script89.setSourceCode(CString("ecmascript:")+
//_T("      function set_touchTime(value) {")+
//_T("          choice = 16;")+
//_T("      }")+
//_T("      function touchTime(value) {")+
//_T("          choice = 16;")+
//_T("      }"));
Group88.addChild(&Script89);

Inline& Inline92 =  Inline();
Inline92.setDEF(CString("JinLipsPart"));
Inline92.setUrl(new CString[]{CString("../resources/JinLipsPart.x3d"), CString("JinLipsPart.x3d")}, 2);
Group88.addChild(&Inline92);

Switch7.addChild(&Group88);

Group& Group93 =  Group();
Script& Script94 =  Script();
Script94.setDEF(CString("Choice17"));
field& field95 =  field();
field95.setName(CString("touchTime"));
field95.setType(CString("SFTime"));
field95.setAccessType(CString("inputOnly"));
Script94.addChild(&field95);

field& field96 =  field();
field96.setName(CString("choice"));
field96.setType(CString("SFInt32"));
field96.setAccessType(CString("outputOnly"));
Script94.addChild(&field96);


//Script94.setSourceCode(CString("ecmascript:")+
//_T("      function set_touchTime(value) {")+
//_T("          choice = 17;")+
//_T("      }")+
//_T("      function touchTime(value) {")+
//_T("          choice = 17;")+
//_T("      }"));
Group93.addChild(&Script94);

Inline& Inline97 =  Inline();
Inline97.setDEF(CString("JinLipStretcher"));
Inline97.setUrl(new CString[]{CString("../resources/JinLipStretcher.x3d"), CString("JinLipStretcher.x3d")}, 2);
Group93.addChild(&Inline97);

Switch7.addChild(&Group93);

Group& Group98 =  Group();
Script& Script99 =  Script();
Script99.setDEF(CString("Choice18"));
field& field100 =  field();
field100.setName(CString("touchTime"));
field100.setType(CString("SFTime"));
field100.setAccessType(CString("inputOnly"));
Script99.addChild(&field100);

field& field101 =  field();
field101.setName(CString("choice"));
field101.setType(CString("SFInt32"));
field101.setAccessType(CString("outputOnly"));
Script99.addChild(&field101);


//Script99.setSourceCode(CString("ecmascript:")+
//_T("      function set_touchTime(value) {")+
//_T("          choice = 18;")+
//_T("      }")+
//_T("      function touchTime(value) {")+
//_T("          choice = 18;")+
//_T("      }"));
Group98.addChild(&Script99);

Inline& Inline102 =  Inline();
Inline102.setDEF(CString("JinLipSuck"));
Inline102.setUrl(new CString[]{CString("../resources/JinLipSuck.x3d"), CString("JinLipSuck.x3d")}, 2);
Group98.addChild(&Inline102);

Switch7.addChild(&Group98);

Group& Group103 =  Group();
Script& Script104 =  Script();
Script104.setDEF(CString("Choice19"));
field& field105 =  field();
field105.setName(CString("touchTime"));
field105.setType(CString("SFTime"));
field105.setAccessType(CString("inputOnly"));
Script104.addChild(&field105);

field& field106 =  field();
field106.setName(CString("choice"));
field106.setType(CString("SFInt32"));
field106.setAccessType(CString("outputOnly"));
Script104.addChild(&field106);


//Script104.setSourceCode(CString("ecmascript:")+
//_T("      function set_touchTime(value) {")+
//_T("          choice = 19;")+
//_T("      }")+
//_T("      function touchTime(value) {")+
//_T("          choice = 19;")+
//_T("      }"));
Group103.addChild(&Script104);

Inline& Inline107 =  Inline();
Inline107.setDEF(CString("JinLipTightener"));
Inline107.setUrl(new CString[]{CString("../resources/JinLipTightener.x3d"), CString("JinLipTightener.x3d")}, 2);
Group103.addChild(&Inline107);

Switch7.addChild(&Group103);

Group& Group108 =  Group();
Script& Script109 =  Script();
Script109.setDEF(CString("Choice20"));
field& field110 =  field();
field110.setName(CString("touchTime"));
field110.setType(CString("SFTime"));
field110.setAccessType(CString("inputOnly"));
Script109.addChild(&field110);

field& field111 =  field();
field111.setName(CString("choice"));
field111.setType(CString("SFInt32"));
field111.setAccessType(CString("outputOnly"));
Script109.addChild(&field111);


//Script109.setSourceCode(CString("ecmascript:")+
//_T("      function set_touchTime(value) {")+
//_T("          choice = 20;")+
//_T("      }")+
//_T("      function touchTime(value) {")+
//_T("          choice = 20;")+
//_T("      }"));
Group108.addChild(&Script109);

Inline& Inline112 =  Inline();
Inline112.setDEF(CString("JinLowerLipDepressor"));
Inline112.setUrl(new CString[]{CString("../resources/JinLowerLipDepressor.x3d"), CString("JinLowerLipDepressor.x3d")}, 2);
Group108.addChild(&Inline112);

Switch7.addChild(&Group108);

Group& Group113 =  Group();
Script& Script114 =  Script();
Script114.setDEF(CString("Choice21"));
field& field115 =  field();
field115.setName(CString("touchTime"));
field115.setType(CString("SFTime"));
field115.setAccessType(CString("inputOnly"));
Script114.addChild(&field115);

field& field116 =  field();
field116.setName(CString("choice"));
field116.setType(CString("SFInt32"));
field116.setAccessType(CString("outputOnly"));
Script114.addChild(&field116);


//Script114.setSourceCode(CString("ecmascript:")+
//_T("      function set_touchTime(value) {")+
//_T("          choice = 21;")+
//_T("      }")+
//_T("      function touchTime(value) {")+
//_T("          choice = 21;")+
//_T("      }"));
Group113.addChild(&Script114);

Inline& Inline117 =  Inline();
Inline117.setDEF(CString("JinMouthStretch"));
Inline117.setUrl(new CString[]{CString("../resources/JinMouthStretch.x3d"), CString("JinMouthStretch.x3d")}, 2);
Group113.addChild(&Inline117);

Switch7.addChild(&Group113);

Group& Group118 =  Group();
Script& Script119 =  Script();
Script119.setDEF(CString("Choice22"));
field& field120 =  field();
field120.setName(CString("touchTime"));
field120.setType(CString("SFTime"));
field120.setAccessType(CString("inputOnly"));
Script119.addChild(&field120);

field& field121 =  field();
field121.setName(CString("choice"));
field121.setType(CString("SFInt32"));
field121.setAccessType(CString("outputOnly"));
Script119.addChild(&field121);


//Script119.setSourceCode(CString("ecmascript:")+
//_T("      function set_touchTime(value) {")+
//_T("          choice = 22;")+
//_T("      }")+
//_T("      function touchTime(value) {")+
//_T("          choice = 22;")+
//_T("      }"));
Group118.addChild(&Script119);

Inline& Inline122 =  Inline();
Inline122.setDEF(CString("JinNasolabialDeepener"));
Inline122.setUrl(new CString[]{CString("../resources/JinNasolabialDeepener.x3d"), CString("JinNasolabialDeepener.x3d")}, 2);
Group118.addChild(&Inline122);

Switch7.addChild(&Group118);

Group& Group123 =  Group();
Script& Script124 =  Script();
Script124.setDEF(CString("Choice23"));
field& field125 =  field();
field125.setName(CString("touchTime"));
field125.setType(CString("SFTime"));
field125.setAccessType(CString("inputOnly"));
Script124.addChild(&field125);

field& field126 =  field();
field126.setName(CString("choice"));
field126.setType(CString("SFInt32"));
field126.setAccessType(CString("outputOnly"));
Script124.addChild(&field126);


//Script124.setSourceCode(CString("ecmascript:")+
//_T("      function set_touchTime(value) {")+
//_T("          choice = 23;")+
//_T("      }")+
//_T("      function touchTime(value) {")+
//_T("          choice = 23;")+
//_T("      }"));
Group123.addChild(&Script124);

Inline& Inline127 =  Inline();
Inline127.setDEF(CString("JinNoseWrinkler"));
Inline127.setUrl(new CString[]{CString("../resources/JinNoseWrinkler.x3d"), CString("JinNoseWrinkler.x3d")}, 2);
Group123.addChild(&Inline127);

Switch7.addChild(&Group123);

Group& Group128 =  Group();
Script& Script129 =  Script();
Script129.setDEF(CString("Choice24"));
field& field130 =  field();
field130.setName(CString("touchTime"));
field130.setType(CString("SFTime"));
field130.setAccessType(CString("inputOnly"));
Script129.addChild(&field130);

field& field131 =  field();
field131.setName(CString("choice"));
field131.setType(CString("SFInt32"));
field131.setAccessType(CString("outputOnly"));
Script129.addChild(&field131);


//Script129.setSourceCode(CString("ecmascript:")+
//_T("      function set_touchTime(value) {")+
//_T("          choice = 24;")+
//_T("      }")+
//_T("      function touchTime(value) {")+
//_T("          choice = 24;")+
//_T("      }"));
Group128.addChild(&Script129);

Inline& Inline132 =  Inline();
Inline132.setDEF(CString("JinOuterBrowRaiser"));
Inline132.setUrl(new CString[]{CString("../resources/JinOuterBrowRaiser.x3d"), CString("JinOuterBrowRaiser.x3d")}, 2);
Group128.addChild(&Inline132);

Switch7.addChild(&Group128);

Group& Group133 =  Group();
Script& Script134 =  Script();
Script134.setDEF(CString("Choice25"));
field& field135 =  field();
field135.setName(CString("touchTime"));
field135.setType(CString("SFTime"));
field135.setAccessType(CString("inputOnly"));
Script134.addChild(&field135);

field& field136 =  field();
field136.setName(CString("choice"));
field136.setType(CString("SFInt32"));
field136.setAccessType(CString("outputOnly"));
Script134.addChild(&field136);


//Script134.setSourceCode(CString("ecmascript:")+
//_T("      function set_touchTime(value) {")+
//_T("          choice = 25;")+
//_T("      }")+
//_T("      function touchTime(value) {")+
//_T("          choice = 25;")+
//_T("      }"));
Group133.addChild(&Script134);

Inline& Inline137 =  Inline();
Inline137.setDEF(CString("JinSlit"));
Inline137.setUrl(new CString[]{CString("../resources/JinSlit.x3d"), CString("JinSlit.x3d")}, 2);
Group133.addChild(&Inline137);

Switch7.addChild(&Group133);

Group& Group138 =  Group();
Script& Script139 =  Script();
Script139.setDEF(CString("Choice26"));
field& field140 =  field();
field140.setName(CString("touchTime"));
field140.setType(CString("SFTime"));
field140.setAccessType(CString("inputOnly"));
Script139.addChild(&field140);

field& field141 =  field();
field141.setName(CString("choice"));
field141.setType(CString("SFInt32"));
field141.setAccessType(CString("outputOnly"));
Script139.addChild(&field141);


//Script139.setSourceCode(CString("ecmascript:")+
//_T("      function set_touchTime(value) {")+
//_T("          choice = 26;")+
//_T("      }")+
//_T("      function touchTime(value) {")+
//_T("          choice = 26;")+
//_T("      }"));
Group138.addChild(&Script139);

Inline& Inline142 =  Inline();
Inline142.setDEF(CString("JinSquint"));
Inline142.setUrl(new CString[]{CString("../resources/JinSquint.x3d"), CString("JinSquint.x3d")}, 2);
Group138.addChild(&Inline142);

Switch7.addChild(&Group138);

Group& Group143 =  Group();
Script& Script144 =  Script();
Script144.setDEF(CString("Choice27"));
field& field145 =  field();
field145.setName(CString("touchTime"));
field145.setType(CString("SFTime"));
field145.setAccessType(CString("inputOnly"));
Script144.addChild(&field145);

field& field146 =  field();
field146.setName(CString("choice"));
field146.setType(CString("SFInt32"));
field146.setAccessType(CString("outputOnly"));
Script144.addChild(&field146);


//Script144.setSourceCode(CString("ecmascript:")+
//_T("      function set_touchTime(value) {")+
//_T("          choice = 27;")+
//_T("      }")+
//_T("      function touchTime(value) {")+
//_T("          choice = 27;")+
//_T("      }"));
Group143.addChild(&Script144);

Inline& Inline147 =  Inline();
Inline147.setDEF(CString("JinUpperLidRaiser"));
Inline147.setUrl(new CString[]{CString("../resources/JinUpperLidRaiser.x3d"), CString("JinUpperLidRaiser.x3d")}, 2);
Group143.addChild(&Inline147);

Switch7.addChild(&Group143);

Group& Group148 =  Group();
Script& Script149 =  Script();
Script149.setDEF(CString("Choice28"));
field& field150 =  field();
field150.setName(CString("touchTime"));
field150.setType(CString("SFTime"));
field150.setAccessType(CString("inputOnly"));
Script149.addChild(&field150);

field& field151 =  field();
field151.setName(CString("choice"));
field151.setType(CString("SFInt32"));
field151.setAccessType(CString("outputOnly"));
Script149.addChild(&field151);


//Script149.setSourceCode(CString("ecmascript:")+
//_T("      function set_touchTime(value) {")+
//_T("          choice = 28;")+
//_T("      }")+
//_T("      function touchTime(value) {")+
//_T("          choice = 28;")+
//_T("      }"));
Group148.addChild(&Script149);

Inline& Inline152 =  Inline();
Inline152.setDEF(CString("JinUpperLipRaiser"));
Inline152.setUrl(new CString[]{CString("../resources/JinUpperLipRaiser.x3d"), CString("JinUpperLipRaiser.x3d")}, 2);
Group148.addChild(&Inline152);

Switch7.addChild(&Group148);

Group& Group153 =  Group();
Script& Script154 =  Script();
Script154.setDEF(CString("Choice29"));
field& field155 =  field();
field155.setName(CString("touchTime"));
field155.setType(CString("SFTime"));
field155.setAccessType(CString("inputOnly"));
Script154.addChild(&field155);

field& field156 =  field();
field156.setName(CString("choice"));
field156.setType(CString("SFInt32"));
field156.setAccessType(CString("outputOnly"));
Script154.addChild(&field156);


//Script154.setSourceCode(CString("ecmascript:")+
//_T("      function set_touchTime(value) {")+
//_T("          choice = 29;")+
//_T("      }")+
//_T("      function touchTime(value) {")+
//_T("          choice = 29;")+
//_T("      }"));
Group153.addChild(&Script154);

Inline& Inline157 =  Inline();
Inline157.setDEF(CString("JinWink"));
Inline157.setUrl(new CString[]{CString("../resources/JinWink.x3d"), CString("JinWink.x3d")}, 2);
Group153.addChild(&Inline157);

Switch7.addChild(&Group153);

Group6.addChild(&Switch7);

Transform& Transform158 =  Transform();
Transform158.setTranslation(new float[]{48.0,63.4,0.0});
TouchSensor& TouchSensor159 =  TouchSensor();
TouchSensor159.setDescription(CString("TSJinBlink"));
TouchSensor159.setDEF(CString("JinBlink_Sensor"));
Transform158.addChild(&TouchSensor159);

Shape& Shape160 =  Shape();
Appearance& Appearance161 =  Appearance();
Material& Material162 =  Material();
Material162.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance161.addChild(&Material162);

Shape160.addChild(&Appearance161);

Text& Text163 =  Text();
Text163.setString(new CString[]{CString("JinBlink")}, 1);
CFontStyle& FontStyle164 =  CFontStyle();
FontStyle164.setSize(2.4);
FontStyle164.setSpacing(1.2);
FontStyle164.setJustify(new CString[]{CString("MIDDLE"), CString("MIDDLE")}, 2);
Text163.setFontStyle(&FontStyle164);

Shape160.setGeometry(&Text163);

Transform158.addChild(&Shape160);

Shape& Shape165 =  Shape();
Appearance& Appearance166 =  Appearance();
Material& Material167 =  Material();
Material167.setDiffuseColor(new float[]{0.0,0.0,1.0});
Appearance166.addChild(&Material167);

Shape165.addChild(&Appearance166);

IndexedFaceSet& IndexedFaceSet168 =  IndexedFaceSet();
IndexedFaceSet168.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
Coordinate& Coordinate169 =  Coordinate();
Coordinate169.setPoint(new float[]{20.0,1.3833333333333333,-0.1,-20.0,1.3833333333333333,-0.1,-20.0,-1.616666666666667,-0.1,20.0,-1.616666666666667,-0.1}, 12);
IndexedFaceSet168.setCoord(&Coordinate169);

Shape165.setGeometry(&IndexedFaceSet168);

Transform158.addChild(&Shape165);

Group6.addChild(&Transform158);

ROUTE& ROUTE170 =  ROUTE();
ROUTE170.setFromNode(CString("JinBlink_Sensor"));
ROUTE170.setFromField(CString("touchTime"));
ROUTE170.setToNode(CString("Choice0"));
ROUTE170.setToField(CString("touchTime"));
Group6.addChild(&ROUTE170);

ROUTE& ROUTE171 =  ROUTE();
ROUTE171.setFromNode(CString("Choice0"));
ROUTE171.setFromField(CString("choice"));
ROUTE171.setToNode(CString("SceneSwitcher"));
ROUTE171.setToField(CString("whichChoice"));
Group6.addChild(&ROUTE171);

Transform& Transform172 =  Transform();
Transform172.setTranslation(new float[]{48.0,60.4,0.0});
TouchSensor& TouchSensor173 =  TouchSensor();
TouchSensor173.setDescription(CString("TSJinBrowLowerer"));
TouchSensor173.setDEF(CString("JinBrowLowerer_Sensor"));
Transform172.addChild(&TouchSensor173);

Shape& Shape174 =  Shape();
Appearance& Appearance175 =  Appearance();
Material& Material176 =  Material();
Material176.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance175.addChild(&Material176);

Shape174.addChild(&Appearance175);

Text& Text177 =  Text();
Text177.setString(new CString[]{CString("JinBrowLowerer")}, 1);
CFontStyle& FontStyle178 =  CFontStyle();
FontStyle178.setSize(2.4);
FontStyle178.setSpacing(1.2);
FontStyle178.setJustify(new CString[]{CString("MIDDLE"), CString("MIDDLE")}, 2);
Text177.setFontStyle(&FontStyle178);

Shape174.setGeometry(&Text177);

Transform172.addChild(&Shape174);

Shape& Shape179 =  Shape();
Appearance& Appearance180 =  Appearance();
Material& Material181 =  Material();
Material181.setDiffuseColor(new float[]{0.0,0.0,1.0});
Appearance180.addChild(&Material181);

Shape179.addChild(&Appearance180);

IndexedFaceSet& IndexedFaceSet182 =  IndexedFaceSet();
IndexedFaceSet182.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
Coordinate& Coordinate183 =  Coordinate();
Coordinate183.setPoint(new float[]{20.0,1.3833333333333333,-0.1,-20.0,1.3833333333333333,-0.1,-20.0,-1.616666666666667,-0.1,20.0,-1.616666666666667,-0.1}, 12);
IndexedFaceSet182.setCoord(&Coordinate183);

Shape179.setGeometry(&IndexedFaceSet182);

Transform172.addChild(&Shape179);

Group6.addChild(&Transform172);

ROUTE& ROUTE184 =  ROUTE();
ROUTE184.setFromNode(CString("JinBrowLowerer_Sensor"));
ROUTE184.setFromField(CString("touchTime"));
ROUTE184.setToNode(CString("Choice1"));
ROUTE184.setToField(CString("touchTime"));
Group6.addChild(&ROUTE184);

ROUTE& ROUTE185 =  ROUTE();
ROUTE185.setFromNode(CString("Choice1"));
ROUTE185.setFromField(CString("choice"));
ROUTE185.setToNode(CString("SceneSwitcher"));
ROUTE185.setToField(CString("whichChoice"));
Group6.addChild(&ROUTE185);

Transform& Transform186 =  Transform();
Transform186.setTranslation(new float[]{48.0,57.39999999999999,0.0});
TouchSensor& TouchSensor187 =  TouchSensor();
TouchSensor187.setDescription(CString("TSJinCheekPuffer"));
TouchSensor187.setDEF(CString("JinCheekPuffer_Sensor"));
Transform186.addChild(&TouchSensor187);

Shape& Shape188 =  Shape();
Appearance& Appearance189 =  Appearance();
Material& Material190 =  Material();
Material190.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance189.addChild(&Material190);

Shape188.addChild(&Appearance189);

Text& Text191 =  Text();
Text191.setString(new CString[]{CString("JinCheekPuffer")}, 1);
CFontStyle& FontStyle192 =  CFontStyle();
FontStyle192.setSize(2.4);
FontStyle192.setSpacing(1.2);
FontStyle192.setJustify(new CString[]{CString("MIDDLE"), CString("MIDDLE")}, 2);
Text191.setFontStyle(&FontStyle192);

Shape188.setGeometry(&Text191);

Transform186.addChild(&Shape188);

Shape& Shape193 =  Shape();
Appearance& Appearance194 =  Appearance();
Material& Material195 =  Material();
Material195.setDiffuseColor(new float[]{0.0,0.0,1.0});
Appearance194.addChild(&Material195);

Shape193.addChild(&Appearance194);

IndexedFaceSet& IndexedFaceSet196 =  IndexedFaceSet();
IndexedFaceSet196.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
Coordinate& Coordinate197 =  Coordinate();
Coordinate197.setPoint(new float[]{20.0,1.3833333333333333,-0.1,-20.0,1.3833333333333333,-0.1,-20.0,-1.616666666666667,-0.1,20.0,-1.616666666666667,-0.1}, 12);
IndexedFaceSet196.setCoord(&Coordinate197);

Shape193.setGeometry(&IndexedFaceSet196);

Transform186.addChild(&Shape193);

Group6.addChild(&Transform186);

ROUTE& ROUTE198 =  ROUTE();
ROUTE198.setFromNode(CString("JinCheekPuffer_Sensor"));
ROUTE198.setFromField(CString("touchTime"));
ROUTE198.setToNode(CString("Choice2"));
ROUTE198.setToField(CString("touchTime"));
Group6.addChild(&ROUTE198);

ROUTE& ROUTE199 =  ROUTE();
ROUTE199.setFromNode(CString("Choice2"));
ROUTE199.setFromField(CString("choice"));
ROUTE199.setToNode(CString("SceneSwitcher"));
ROUTE199.setToField(CString("whichChoice"));
Group6.addChild(&ROUTE199);

Transform& Transform200 =  Transform();
Transform200.setTranslation(new float[]{48.0,54.39999999999999,0.0});
TouchSensor& TouchSensor201 =  TouchSensor();
TouchSensor201.setDescription(CString("TSJinCheekRaiser"));
TouchSensor201.setDEF(CString("JinCheekRaiser_Sensor"));
Transform200.addChild(&TouchSensor201);

Shape& Shape202 =  Shape();
Appearance& Appearance203 =  Appearance();
Material& Material204 =  Material();
Material204.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance203.addChild(&Material204);

Shape202.addChild(&Appearance203);

Text& Text205 =  Text();
Text205.setString(new CString[]{CString("JinCheekRaiser")}, 1);
CFontStyle& FontStyle206 =  CFontStyle();
FontStyle206.setSize(2.4);
FontStyle206.setSpacing(1.2);
FontStyle206.setJustify(new CString[]{CString("MIDDLE"), CString("MIDDLE")}, 2);
Text205.setFontStyle(&FontStyle206);

Shape202.setGeometry(&Text205);

Transform200.addChild(&Shape202);

Shape& Shape207 =  Shape();
Appearance& Appearance208 =  Appearance();
Material& Material209 =  Material();
Material209.setDiffuseColor(new float[]{0.0,0.0,1.0});
Appearance208.addChild(&Material209);

Shape207.addChild(&Appearance208);

IndexedFaceSet& IndexedFaceSet210 =  IndexedFaceSet();
IndexedFaceSet210.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
Coordinate& Coordinate211 =  Coordinate();
Coordinate211.setPoint(new float[]{20.0,1.3833333333333333,-0.1,-20.0,1.3833333333333333,-0.1,-20.0,-1.616666666666667,-0.1,20.0,-1.616666666666667,-0.1}, 12);
IndexedFaceSet210.setCoord(&Coordinate211);

Shape207.setGeometry(&IndexedFaceSet210);

Transform200.addChild(&Shape207);

Group6.addChild(&Transform200);

ROUTE& ROUTE212 =  ROUTE();
ROUTE212.setFromNode(CString("JinCheekRaiser_Sensor"));
ROUTE212.setFromField(CString("touchTime"));
ROUTE212.setToNode(CString("Choice3"));
ROUTE212.setToField(CString("touchTime"));
Group6.addChild(&ROUTE212);

ROUTE& ROUTE213 =  ROUTE();
ROUTE213.setFromNode(CString("Choice3"));
ROUTE213.setFromField(CString("choice"));
ROUTE213.setToNode(CString("SceneSwitcher"));
ROUTE213.setToField(CString("whichChoice"));
Group6.addChild(&ROUTE213);

Transform& Transform214 =  Transform();
Transform214.setTranslation(new float[]{48.0,51.39999999999999,0.0});
TouchSensor& TouchSensor215 =  TouchSensor();
TouchSensor215.setDescription(CString("TSJinChinRaiser"));
TouchSensor215.setDEF(CString("JinChinRaiser_Sensor"));
Transform214.addChild(&TouchSensor215);

Shape& Shape216 =  Shape();
Appearance& Appearance217 =  Appearance();
Material& Material218 =  Material();
Material218.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance217.addChild(&Material218);

Shape216.addChild(&Appearance217);

Text& Text219 =  Text();
Text219.setString(new CString[]{CString("JinChinRaiser")}, 1);
CFontStyle& FontStyle220 =  CFontStyle();
FontStyle220.setSize(2.4);
FontStyle220.setSpacing(1.2);
FontStyle220.setJustify(new CString[]{CString("MIDDLE"), CString("MIDDLE")}, 2);
Text219.setFontStyle(&FontStyle220);

Shape216.setGeometry(&Text219);

Transform214.addChild(&Shape216);

Shape& Shape221 =  Shape();
Appearance& Appearance222 =  Appearance();
Material& Material223 =  Material();
Material223.setDiffuseColor(new float[]{0.0,0.0,1.0});
Appearance222.addChild(&Material223);

Shape221.addChild(&Appearance222);

IndexedFaceSet& IndexedFaceSet224 =  IndexedFaceSet();
IndexedFaceSet224.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
Coordinate& Coordinate225 =  Coordinate();
Coordinate225.setPoint(new float[]{20.0,1.3833333333333333,-0.1,-20.0,1.3833333333333333,-0.1,-20.0,-1.616666666666667,-0.1,20.0,-1.616666666666667,-0.1}, 12);
IndexedFaceSet224.setCoord(&Coordinate225);

Shape221.setGeometry(&IndexedFaceSet224);

Transform214.addChild(&Shape221);

Group6.addChild(&Transform214);

ROUTE& ROUTE226 =  ROUTE();
ROUTE226.setFromNode(CString("JinChinRaiser_Sensor"));
ROUTE226.setFromField(CString("touchTime"));
ROUTE226.setToNode(CString("Choice4"));
ROUTE226.setToField(CString("touchTime"));
Group6.addChild(&ROUTE226);

ROUTE& ROUTE227 =  ROUTE();
ROUTE227.setFromNode(CString("Choice4"));
ROUTE227.setFromField(CString("choice"));
ROUTE227.setToNode(CString("SceneSwitcher"));
ROUTE227.setToField(CString("whichChoice"));
Group6.addChild(&ROUTE227);

Transform& Transform228 =  Transform();
Transform228.setTranslation(new float[]{48.0,48.39999999999999,0.0});
TouchSensor& TouchSensor229 =  TouchSensor();
TouchSensor229.setDescription(CString("TSJinDimpler"));
TouchSensor229.setDEF(CString("JinDimpler_Sensor"));
Transform228.addChild(&TouchSensor229);

Shape& Shape230 =  Shape();
Appearance& Appearance231 =  Appearance();
Material& Material232 =  Material();
Material232.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance231.addChild(&Material232);

Shape230.addChild(&Appearance231);

Text& Text233 =  Text();
Text233.setString(new CString[]{CString("JinDimpler")}, 1);
CFontStyle& FontStyle234 =  CFontStyle();
FontStyle234.setSize(2.4);
FontStyle234.setSpacing(1.2);
FontStyle234.setJustify(new CString[]{CString("MIDDLE"), CString("MIDDLE")}, 2);
Text233.setFontStyle(&FontStyle234);

Shape230.setGeometry(&Text233);

Transform228.addChild(&Shape230);

Shape& Shape235 =  Shape();
Appearance& Appearance236 =  Appearance();
Material& Material237 =  Material();
Material237.setDiffuseColor(new float[]{0.0,0.0,1.0});
Appearance236.addChild(&Material237);

Shape235.addChild(&Appearance236);

IndexedFaceSet& IndexedFaceSet238 =  IndexedFaceSet();
IndexedFaceSet238.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
Coordinate& Coordinate239 =  Coordinate();
Coordinate239.setPoint(new float[]{20.0,1.3833333333333333,-0.1,-20.0,1.3833333333333333,-0.1,-20.0,-1.616666666666667,-0.1,20.0,-1.616666666666667,-0.1}, 12);
IndexedFaceSet238.setCoord(&Coordinate239);

Shape235.setGeometry(&IndexedFaceSet238);

Transform228.addChild(&Shape235);

Group6.addChild(&Transform228);

ROUTE& ROUTE240 =  ROUTE();
ROUTE240.setFromNode(CString("JinDimpler_Sensor"));
ROUTE240.setFromField(CString("touchTime"));
ROUTE240.setToNode(CString("Choice5"));
ROUTE240.setToField(CString("touchTime"));
Group6.addChild(&ROUTE240);

ROUTE& ROUTE241 =  ROUTE();
ROUTE241.setFromNode(CString("Choice5"));
ROUTE241.setFromField(CString("choice"));
ROUTE241.setToNode(CString("SceneSwitcher"));
ROUTE241.setToField(CString("whichChoice"));
Group6.addChild(&ROUTE241);

Transform& Transform242 =  Transform();
Transform242.setTranslation(new float[]{48.0,45.39999999999999,0.0});
TouchSensor& TouchSensor243 =  TouchSensor();
TouchSensor243.setDescription(CString("TSJinEyesClosed"));
TouchSensor243.setDEF(CString("JinEyesClosed_Sensor"));
Transform242.addChild(&TouchSensor243);

Shape& Shape244 =  Shape();
Appearance& Appearance245 =  Appearance();
Material& Material246 =  Material();
Material246.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance245.addChild(&Material246);

Shape244.addChild(&Appearance245);

Text& Text247 =  Text();
Text247.setString(new CString[]{CString("JinEyesClosed")}, 1);
CFontStyle& FontStyle248 =  CFontStyle();
FontStyle248.setSize(2.4);
FontStyle248.setSpacing(1.2);
FontStyle248.setJustify(new CString[]{CString("MIDDLE"), CString("MIDDLE")}, 2);
Text247.setFontStyle(&FontStyle248);

Shape244.setGeometry(&Text247);

Transform242.addChild(&Shape244);

Shape& Shape249 =  Shape();
Appearance& Appearance250 =  Appearance();
Material& Material251 =  Material();
Material251.setDiffuseColor(new float[]{0.0,0.0,1.0});
Appearance250.addChild(&Material251);

Shape249.addChild(&Appearance250);

IndexedFaceSet& IndexedFaceSet252 =  IndexedFaceSet();
IndexedFaceSet252.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
Coordinate& Coordinate253 =  Coordinate();
Coordinate253.setPoint(new float[]{20.0,1.3833333333333333,-0.1,-20.0,1.3833333333333333,-0.1,-20.0,-1.616666666666667,-0.1,20.0,-1.616666666666667,-0.1}, 12);
IndexedFaceSet252.setCoord(&Coordinate253);

Shape249.setGeometry(&IndexedFaceSet252);

Transform242.addChild(&Shape249);

Group6.addChild(&Transform242);

ROUTE& ROUTE254 =  ROUTE();
ROUTE254.setFromNode(CString("JinEyesClosed_Sensor"));
ROUTE254.setFromField(CString("touchTime"));
ROUTE254.setToNode(CString("Choice6"));
ROUTE254.setToField(CString("touchTime"));
Group6.addChild(&ROUTE254);

ROUTE& ROUTE255 =  ROUTE();
ROUTE255.setFromNode(CString("Choice6"));
ROUTE255.setFromField(CString("choice"));
ROUTE255.setToNode(CString("SceneSwitcher"));
ROUTE255.setToField(CString("whichChoice"));
Group6.addChild(&ROUTE255);

Transform& Transform256 =  Transform();
Transform256.setTranslation(new float[]{48.0,42.39999999999999,0.0});
TouchSensor& TouchSensor257 =  TouchSensor();
TouchSensor257.setDescription(CString("TSJinInnerBrowRaiser"));
TouchSensor257.setDEF(CString("JinInnerBrowRaiser_Sensor"));
Transform256.addChild(&TouchSensor257);

Shape& Shape258 =  Shape();
Appearance& Appearance259 =  Appearance();
Material& Material260 =  Material();
Material260.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance259.addChild(&Material260);

Shape258.addChild(&Appearance259);

Text& Text261 =  Text();
Text261.setString(new CString[]{CString("JinInnerBrowRaiser")}, 1);
CFontStyle& FontStyle262 =  CFontStyle();
FontStyle262.setSize(2.4);
FontStyle262.setSpacing(1.2);
FontStyle262.setJustify(new CString[]{CString("MIDDLE"), CString("MIDDLE")}, 2);
Text261.setFontStyle(&FontStyle262);

Shape258.setGeometry(&Text261);

Transform256.addChild(&Shape258);

Shape& Shape263 =  Shape();
Appearance& Appearance264 =  Appearance();
Material& Material265 =  Material();
Material265.setDiffuseColor(new float[]{0.0,0.0,1.0});
Appearance264.addChild(&Material265);

Shape263.addChild(&Appearance264);

IndexedFaceSet& IndexedFaceSet266 =  IndexedFaceSet();
IndexedFaceSet266.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
Coordinate& Coordinate267 =  Coordinate();
Coordinate267.setPoint(new float[]{20.0,1.3833333333333333,-0.1,-20.0,1.3833333333333333,-0.1,-20.0,-1.616666666666667,-0.1,20.0,-1.616666666666667,-0.1}, 12);
IndexedFaceSet266.setCoord(&Coordinate267);

Shape263.setGeometry(&IndexedFaceSet266);

Transform256.addChild(&Shape263);

Group6.addChild(&Transform256);

ROUTE& ROUTE268 =  ROUTE();
ROUTE268.setFromNode(CString("JinInnerBrowRaiser_Sensor"));
ROUTE268.setFromField(CString("touchTime"));
ROUTE268.setToNode(CString("Choice7"));
ROUTE268.setToField(CString("touchTime"));
Group6.addChild(&ROUTE268);

ROUTE& ROUTE269 =  ROUTE();
ROUTE269.setFromNode(CString("Choice7"));
ROUTE269.setFromField(CString("choice"));
ROUTE269.setToNode(CString("SceneSwitcher"));
ROUTE269.setToField(CString("whichChoice"));
Group6.addChild(&ROUTE269);

Transform& Transform270 =  Transform();
Transform270.setTranslation(new float[]{48.0,39.39999999999999,0.0});
TouchSensor& TouchSensor271 =  TouchSensor();
TouchSensor271.setDescription(CString("TSJinJawDrop"));
TouchSensor271.setDEF(CString("JinJawDrop_Sensor"));
Transform270.addChild(&TouchSensor271);

Shape& Shape272 =  Shape();
Appearance& Appearance273 =  Appearance();
Material& Material274 =  Material();
Material274.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance273.addChild(&Material274);

Shape272.addChild(&Appearance273);

Text& Text275 =  Text();
Text275.setString(new CString[]{CString("JinJawDrop")}, 1);
CFontStyle& FontStyle276 =  CFontStyle();
FontStyle276.setSize(2.4);
FontStyle276.setSpacing(1.2);
FontStyle276.setJustify(new CString[]{CString("MIDDLE"), CString("MIDDLE")}, 2);
Text275.setFontStyle(&FontStyle276);

Shape272.setGeometry(&Text275);

Transform270.addChild(&Shape272);

Shape& Shape277 =  Shape();
Appearance& Appearance278 =  Appearance();
Material& Material279 =  Material();
Material279.setDiffuseColor(new float[]{0.0,0.0,1.0});
Appearance278.addChild(&Material279);

Shape277.addChild(&Appearance278);

IndexedFaceSet& IndexedFaceSet280 =  IndexedFaceSet();
IndexedFaceSet280.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
Coordinate& Coordinate281 =  Coordinate();
Coordinate281.setPoint(new float[]{20.0,1.3833333333333333,-0.1,-20.0,1.3833333333333333,-0.1,-20.0,-1.616666666666667,-0.1,20.0,-1.616666666666667,-0.1}, 12);
IndexedFaceSet280.setCoord(&Coordinate281);

Shape277.setGeometry(&IndexedFaceSet280);

Transform270.addChild(&Shape277);

Group6.addChild(&Transform270);

ROUTE& ROUTE282 =  ROUTE();
ROUTE282.setFromNode(CString("JinJawDrop_Sensor"));
ROUTE282.setFromField(CString("touchTime"));
ROUTE282.setToNode(CString("Choice8"));
ROUTE282.setToField(CString("touchTime"));
Group6.addChild(&ROUTE282);

ROUTE& ROUTE283 =  ROUTE();
ROUTE283.setFromNode(CString("Choice8"));
ROUTE283.setFromField(CString("choice"));
ROUTE283.setToNode(CString("SceneSwitcher"));
ROUTE283.setToField(CString("whichChoice"));
Group6.addChild(&ROUTE283);

Transform& Transform284 =  Transform();
Transform284.setTranslation(new float[]{48.0,36.39999999999999,0.0});
TouchSensor& TouchSensor285 =  TouchSensor();
TouchSensor285.setDescription(CString("TSJinLidDroop"));
TouchSensor285.setDEF(CString("JinLidDroop_Sensor"));
Transform284.addChild(&TouchSensor285);

Shape& Shape286 =  Shape();
Appearance& Appearance287 =  Appearance();
Material& Material288 =  Material();
Material288.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance287.addChild(&Material288);

Shape286.addChild(&Appearance287);

Text& Text289 =  Text();
Text289.setString(new CString[]{CString("JinLidDroop")}, 1);
CFontStyle& FontStyle290 =  CFontStyle();
FontStyle290.setSize(2.4);
FontStyle290.setSpacing(1.2);
FontStyle290.setJustify(new CString[]{CString("MIDDLE"), CString("MIDDLE")}, 2);
Text289.setFontStyle(&FontStyle290);

Shape286.setGeometry(&Text289);

Transform284.addChild(&Shape286);

Shape& Shape291 =  Shape();
Appearance& Appearance292 =  Appearance();
Material& Material293 =  Material();
Material293.setDiffuseColor(new float[]{0.0,0.0,1.0});
Appearance292.addChild(&Material293);

Shape291.addChild(&Appearance292);

IndexedFaceSet& IndexedFaceSet294 =  IndexedFaceSet();
IndexedFaceSet294.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
Coordinate& Coordinate295 =  Coordinate();
Coordinate295.setPoint(new float[]{20.0,1.3833333333333333,-0.1,-20.0,1.3833333333333333,-0.1,-20.0,-1.616666666666667,-0.1,20.0,-1.616666666666667,-0.1}, 12);
IndexedFaceSet294.setCoord(&Coordinate295);

Shape291.setGeometry(&IndexedFaceSet294);

Transform284.addChild(&Shape291);

Group6.addChild(&Transform284);

ROUTE& ROUTE296 =  ROUTE();
ROUTE296.setFromNode(CString("JinLidDroop_Sensor"));
ROUTE296.setFromField(CString("touchTime"));
ROUTE296.setToNode(CString("Choice9"));
ROUTE296.setToField(CString("touchTime"));
Group6.addChild(&ROUTE296);

ROUTE& ROUTE297 =  ROUTE();
ROUTE297.setFromNode(CString("Choice9"));
ROUTE297.setFromField(CString("choice"));
ROUTE297.setToNode(CString("SceneSwitcher"));
ROUTE297.setToField(CString("whichChoice"));
Group6.addChild(&ROUTE297);

Transform& Transform298 =  Transform();
Transform298.setTranslation(new float[]{48.0,33.39999999999999,0.0});
TouchSensor& TouchSensor299 =  TouchSensor();
TouchSensor299.setDescription(CString("TSJinLidTightener"));
TouchSensor299.setDEF(CString("JinLidTightener_Sensor"));
Transform298.addChild(&TouchSensor299);

Shape& Shape300 =  Shape();
Appearance& Appearance301 =  Appearance();
Material& Material302 =  Material();
Material302.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance301.addChild(&Material302);

Shape300.addChild(&Appearance301);

Text& Text303 =  Text();
Text303.setString(new CString[]{CString("JinLidTightener")}, 1);
CFontStyle& FontStyle304 =  CFontStyle();
FontStyle304.setSize(2.4);
FontStyle304.setSpacing(1.2);
FontStyle304.setJustify(new CString[]{CString("MIDDLE"), CString("MIDDLE")}, 2);
Text303.setFontStyle(&FontStyle304);

Shape300.setGeometry(&Text303);

Transform298.addChild(&Shape300);

Shape& Shape305 =  Shape();
Appearance& Appearance306 =  Appearance();
Material& Material307 =  Material();
Material307.setDiffuseColor(new float[]{0.0,0.0,1.0});
Appearance306.addChild(&Material307);

Shape305.addChild(&Appearance306);

IndexedFaceSet& IndexedFaceSet308 =  IndexedFaceSet();
IndexedFaceSet308.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
Coordinate& Coordinate309 =  Coordinate();
Coordinate309.setPoint(new float[]{20.0,1.3833333333333333,-0.1,-20.0,1.3833333333333333,-0.1,-20.0,-1.616666666666667,-0.1,20.0,-1.616666666666667,-0.1}, 12);
IndexedFaceSet308.setCoord(&Coordinate309);

Shape305.setGeometry(&IndexedFaceSet308);

Transform298.addChild(&Shape305);

Group6.addChild(&Transform298);

ROUTE& ROUTE310 =  ROUTE();
ROUTE310.setFromNode(CString("JinLidTightener_Sensor"));
ROUTE310.setFromField(CString("touchTime"));
ROUTE310.setToNode(CString("Choice10"));
ROUTE310.setToField(CString("touchTime"));
Group6.addChild(&ROUTE310);

ROUTE& ROUTE311 =  ROUTE();
ROUTE311.setFromNode(CString("Choice10"));
ROUTE311.setFromField(CString("choice"));
ROUTE311.setToNode(CString("SceneSwitcher"));
ROUTE311.setToField(CString("whichChoice"));
Group6.addChild(&ROUTE311);

Transform& Transform312 =  Transform();
Transform312.setTranslation(new float[]{48.0,30.399999999999995,0.0});
TouchSensor& TouchSensor313 =  TouchSensor();
TouchSensor313.setDescription(CString("TSJinLipCornerDepressor"));
TouchSensor313.setDEF(CString("JinLipCornerDepressor_Sensor"));
Transform312.addChild(&TouchSensor313);

Shape& Shape314 =  Shape();
Appearance& Appearance315 =  Appearance();
Material& Material316 =  Material();
Material316.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance315.addChild(&Material316);

Shape314.addChild(&Appearance315);

Text& Text317 =  Text();
Text317.setString(new CString[]{CString("JinLipCornerDepressor")}, 1);
CFontStyle& FontStyle318 =  CFontStyle();
FontStyle318.setSize(2.4);
FontStyle318.setSpacing(1.2);
FontStyle318.setJustify(new CString[]{CString("MIDDLE"), CString("MIDDLE")}, 2);
Text317.setFontStyle(&FontStyle318);

Shape314.setGeometry(&Text317);

Transform312.addChild(&Shape314);

Shape& Shape319 =  Shape();
Appearance& Appearance320 =  Appearance();
Material& Material321 =  Material();
Material321.setDiffuseColor(new float[]{0.0,0.0,1.0});
Appearance320.addChild(&Material321);

Shape319.addChild(&Appearance320);

IndexedFaceSet& IndexedFaceSet322 =  IndexedFaceSet();
IndexedFaceSet322.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
Coordinate& Coordinate323 =  Coordinate();
Coordinate323.setPoint(new float[]{20.0,1.3833333333333333,-0.1,-20.0,1.3833333333333333,-0.1,-20.0,-1.616666666666667,-0.1,20.0,-1.616666666666667,-0.1}, 12);
IndexedFaceSet322.setCoord(&Coordinate323);

Shape319.setGeometry(&IndexedFaceSet322);

Transform312.addChild(&Shape319);

Group6.addChild(&Transform312);

ROUTE& ROUTE324 =  ROUTE();
ROUTE324.setFromNode(CString("JinLipCornerDepressor_Sensor"));
ROUTE324.setFromField(CString("touchTime"));
ROUTE324.setToNode(CString("Choice11"));
ROUTE324.setToField(CString("touchTime"));
Group6.addChild(&ROUTE324);

ROUTE& ROUTE325 =  ROUTE();
ROUTE325.setFromNode(CString("Choice11"));
ROUTE325.setFromField(CString("choice"));
ROUTE325.setToNode(CString("SceneSwitcher"));
ROUTE325.setToField(CString("whichChoice"));
Group6.addChild(&ROUTE325);

Transform& Transform326 =  Transform();
Transform326.setTranslation(new float[]{48.0,27.399999999999995,0.0});
TouchSensor& TouchSensor327 =  TouchSensor();
TouchSensor327.setDescription(CString("TSJinLipCornerPuller"));
TouchSensor327.setDEF(CString("JinLipCornerPuller_Sensor"));
Transform326.addChild(&TouchSensor327);

Shape& Shape328 =  Shape();
Appearance& Appearance329 =  Appearance();
Material& Material330 =  Material();
Material330.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance329.addChild(&Material330);

Shape328.addChild(&Appearance329);

Text& Text331 =  Text();
Text331.setString(new CString[]{CString("JinLipCornerPuller")}, 1);
CFontStyle& FontStyle332 =  CFontStyle();
FontStyle332.setSize(2.4);
FontStyle332.setSpacing(1.2);
FontStyle332.setJustify(new CString[]{CString("MIDDLE"), CString("MIDDLE")}, 2);
Text331.setFontStyle(&FontStyle332);

Shape328.setGeometry(&Text331);

Transform326.addChild(&Shape328);

Shape& Shape333 =  Shape();
Appearance& Appearance334 =  Appearance();
Material& Material335 =  Material();
Material335.setDiffuseColor(new float[]{0.0,0.0,1.0});
Appearance334.addChild(&Material335);

Shape333.addChild(&Appearance334);

IndexedFaceSet& IndexedFaceSet336 =  IndexedFaceSet();
IndexedFaceSet336.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
Coordinate& Coordinate337 =  Coordinate();
Coordinate337.setPoint(new float[]{20.0,1.3833333333333333,-0.1,-20.0,1.3833333333333333,-0.1,-20.0,-1.616666666666667,-0.1,20.0,-1.616666666666667,-0.1}, 12);
IndexedFaceSet336.setCoord(&Coordinate337);

Shape333.setGeometry(&IndexedFaceSet336);

Transform326.addChild(&Shape333);

Group6.addChild(&Transform326);

ROUTE& ROUTE338 =  ROUTE();
ROUTE338.setFromNode(CString("JinLipCornerPuller_Sensor"));
ROUTE338.setFromField(CString("touchTime"));
ROUTE338.setToNode(CString("Choice12"));
ROUTE338.setToField(CString("touchTime"));
Group6.addChild(&ROUTE338);

ROUTE& ROUTE339 =  ROUTE();
ROUTE339.setFromNode(CString("Choice12"));
ROUTE339.setFromField(CString("choice"));
ROUTE339.setToNode(CString("SceneSwitcher"));
ROUTE339.setToField(CString("whichChoice"));
Group6.addChild(&ROUTE339);

Transform& Transform340 =  Transform();
Transform340.setTranslation(new float[]{48.0,24.399999999999995,0.0});
TouchSensor& TouchSensor341 =  TouchSensor();
TouchSensor341.setDescription(CString("TSJinLipFunneler"));
TouchSensor341.setDEF(CString("JinLipFunneler_Sensor"));
Transform340.addChild(&TouchSensor341);

Shape& Shape342 =  Shape();
Appearance& Appearance343 =  Appearance();
Material& Material344 =  Material();
Material344.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance343.addChild(&Material344);

Shape342.addChild(&Appearance343);

Text& Text345 =  Text();
Text345.setString(new CString[]{CString("JinLipFunneler")}, 1);
CFontStyle& FontStyle346 =  CFontStyle();
FontStyle346.setSize(2.4);
FontStyle346.setSpacing(1.2);
FontStyle346.setJustify(new CString[]{CString("MIDDLE"), CString("MIDDLE")}, 2);
Text345.setFontStyle(&FontStyle346);

Shape342.setGeometry(&Text345);

Transform340.addChild(&Shape342);

Shape& Shape347 =  Shape();
Appearance& Appearance348 =  Appearance();
Material& Material349 =  Material();
Material349.setDiffuseColor(new float[]{0.0,0.0,1.0});
Appearance348.addChild(&Material349);

Shape347.addChild(&Appearance348);

IndexedFaceSet& IndexedFaceSet350 =  IndexedFaceSet();
IndexedFaceSet350.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
Coordinate& Coordinate351 =  Coordinate();
Coordinate351.setPoint(new float[]{20.0,1.3833333333333333,-0.1,-20.0,1.3833333333333333,-0.1,-20.0,-1.616666666666667,-0.1,20.0,-1.616666666666667,-0.1}, 12);
IndexedFaceSet350.setCoord(&Coordinate351);

Shape347.setGeometry(&IndexedFaceSet350);

Transform340.addChild(&Shape347);

Group6.addChild(&Transform340);

ROUTE& ROUTE352 =  ROUTE();
ROUTE352.setFromNode(CString("JinLipFunneler_Sensor"));
ROUTE352.setFromField(CString("touchTime"));
ROUTE352.setToNode(CString("Choice13"));
ROUTE352.setToField(CString("touchTime"));
Group6.addChild(&ROUTE352);

ROUTE& ROUTE353 =  ROUTE();
ROUTE353.setFromNode(CString("Choice13"));
ROUTE353.setFromField(CString("choice"));
ROUTE353.setToNode(CString("SceneSwitcher"));
ROUTE353.setToField(CString("whichChoice"));
Group6.addChild(&ROUTE353);

Transform& Transform354 =  Transform();
Transform354.setTranslation(new float[]{48.0,21.399999999999995,0.0});
TouchSensor& TouchSensor355 =  TouchSensor();
TouchSensor355.setDescription(CString("TSJinLipPressor"));
TouchSensor355.setDEF(CString("JinLipPressor_Sensor"));
Transform354.addChild(&TouchSensor355);

Shape& Shape356 =  Shape();
Appearance& Appearance357 =  Appearance();
Material& Material358 =  Material();
Material358.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance357.addChild(&Material358);

Shape356.addChild(&Appearance357);

Text& Text359 =  Text();
Text359.setString(new CString[]{CString("JinLipPressor")}, 1);
CFontStyle& FontStyle360 =  CFontStyle();
FontStyle360.setSize(2.4);
FontStyle360.setSpacing(1.2);
FontStyle360.setJustify(new CString[]{CString("MIDDLE"), CString("MIDDLE")}, 2);
Text359.setFontStyle(&FontStyle360);

Shape356.setGeometry(&Text359);

Transform354.addChild(&Shape356);

Shape& Shape361 =  Shape();
Appearance& Appearance362 =  Appearance();
Material& Material363 =  Material();
Material363.setDiffuseColor(new float[]{0.0,0.0,1.0});
Appearance362.addChild(&Material363);

Shape361.addChild(&Appearance362);

IndexedFaceSet& IndexedFaceSet364 =  IndexedFaceSet();
IndexedFaceSet364.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
Coordinate& Coordinate365 =  Coordinate();
Coordinate365.setPoint(new float[]{20.0,1.3833333333333333,-0.1,-20.0,1.3833333333333333,-0.1,-20.0,-1.616666666666667,-0.1,20.0,-1.616666666666667,-0.1}, 12);
IndexedFaceSet364.setCoord(&Coordinate365);

Shape361.setGeometry(&IndexedFaceSet364);

Transform354.addChild(&Shape361);

Group6.addChild(&Transform354);

ROUTE& ROUTE366 =  ROUTE();
ROUTE366.setFromNode(CString("JinLipPressor_Sensor"));
ROUTE366.setFromField(CString("touchTime"));
ROUTE366.setToNode(CString("Choice14"));
ROUTE366.setToField(CString("touchTime"));
Group6.addChild(&ROUTE366);

ROUTE& ROUTE367 =  ROUTE();
ROUTE367.setFromNode(CString("Choice14"));
ROUTE367.setFromField(CString("choice"));
ROUTE367.setToNode(CString("SceneSwitcher"));
ROUTE367.setToField(CString("whichChoice"));
Group6.addChild(&ROUTE367);

Transform& Transform368 =  Transform();
Transform368.setTranslation(new float[]{48.0,18.4,0.0});
TouchSensor& TouchSensor369 =  TouchSensor();
TouchSensor369.setDescription(CString("TSJinLipPuckerer"));
TouchSensor369.setDEF(CString("JinLipPuckerer_Sensor"));
Transform368.addChild(&TouchSensor369);

Shape& Shape370 =  Shape();
Appearance& Appearance371 =  Appearance();
Material& Material372 =  Material();
Material372.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance371.addChild(&Material372);

Shape370.addChild(&Appearance371);

Text& Text373 =  Text();
Text373.setString(new CString[]{CString("JinLipPuckerer")}, 1);
CFontStyle& FontStyle374 =  CFontStyle();
FontStyle374.setSize(2.4);
FontStyle374.setSpacing(1.2);
FontStyle374.setJustify(new CString[]{CString("MIDDLE"), CString("MIDDLE")}, 2);
Text373.setFontStyle(&FontStyle374);

Shape370.setGeometry(&Text373);

Transform368.addChild(&Shape370);

Shape& Shape375 =  Shape();
Appearance& Appearance376 =  Appearance();
Material& Material377 =  Material();
Material377.setDiffuseColor(new float[]{0.0,0.0,1.0});
Appearance376.addChild(&Material377);

Shape375.addChild(&Appearance376);

IndexedFaceSet& IndexedFaceSet378 =  IndexedFaceSet();
IndexedFaceSet378.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
Coordinate& Coordinate379 =  Coordinate();
Coordinate379.setPoint(new float[]{20.0,1.3833333333333333,-0.1,-20.0,1.3833333333333333,-0.1,-20.0,-1.616666666666667,-0.1,20.0,-1.616666666666667,-0.1}, 12);
IndexedFaceSet378.setCoord(&Coordinate379);

Shape375.setGeometry(&IndexedFaceSet378);

Transform368.addChild(&Shape375);

Group6.addChild(&Transform368);

ROUTE& ROUTE380 =  ROUTE();
ROUTE380.setFromNode(CString("JinLipPuckerer_Sensor"));
ROUTE380.setFromField(CString("touchTime"));
ROUTE380.setToNode(CString("Choice15"));
ROUTE380.setToField(CString("touchTime"));
Group6.addChild(&ROUTE380);

ROUTE& ROUTE381 =  ROUTE();
ROUTE381.setFromNode(CString("Choice15"));
ROUTE381.setFromField(CString("choice"));
ROUTE381.setToNode(CString("SceneSwitcher"));
ROUTE381.setToField(CString("whichChoice"));
Group6.addChild(&ROUTE381);

Transform& Transform382 =  Transform();
Transform382.setTranslation(new float[]{48.0,15.399999999999997,0.0});
TouchSensor& TouchSensor383 =  TouchSensor();
TouchSensor383.setDescription(CString("TSJinLipsPart"));
TouchSensor383.setDEF(CString("JinLipsPart_Sensor"));
Transform382.addChild(&TouchSensor383);

Shape& Shape384 =  Shape();
Appearance& Appearance385 =  Appearance();
Material& Material386 =  Material();
Material386.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance385.addChild(&Material386);

Shape384.addChild(&Appearance385);

Text& Text387 =  Text();
Text387.setString(new CString[]{CString("JinLipsPart")}, 1);
CFontStyle& FontStyle388 =  CFontStyle();
FontStyle388.setSize(2.4);
FontStyle388.setSpacing(1.2);
FontStyle388.setJustify(new CString[]{CString("MIDDLE"), CString("MIDDLE")}, 2);
Text387.setFontStyle(&FontStyle388);

Shape384.setGeometry(&Text387);

Transform382.addChild(&Shape384);

Shape& Shape389 =  Shape();
Appearance& Appearance390 =  Appearance();
Material& Material391 =  Material();
Material391.setDiffuseColor(new float[]{0.0,0.0,1.0});
Appearance390.addChild(&Material391);

Shape389.addChild(&Appearance390);

IndexedFaceSet& IndexedFaceSet392 =  IndexedFaceSet();
IndexedFaceSet392.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
Coordinate& Coordinate393 =  Coordinate();
Coordinate393.setPoint(new float[]{20.0,1.3833333333333333,-0.1,-20.0,1.3833333333333333,-0.1,-20.0,-1.616666666666667,-0.1,20.0,-1.616666666666667,-0.1}, 12);
IndexedFaceSet392.setCoord(&Coordinate393);

Shape389.setGeometry(&IndexedFaceSet392);

Transform382.addChild(&Shape389);

Group6.addChild(&Transform382);

ROUTE& ROUTE394 =  ROUTE();
ROUTE394.setFromNode(CString("JinLipsPart_Sensor"));
ROUTE394.setFromField(CString("touchTime"));
ROUTE394.setToNode(CString("Choice16"));
ROUTE394.setToField(CString("touchTime"));
Group6.addChild(&ROUTE394);

ROUTE& ROUTE395 =  ROUTE();
ROUTE395.setFromNode(CString("Choice16"));
ROUTE395.setFromField(CString("choice"));
ROUTE395.setToNode(CString("SceneSwitcher"));
ROUTE395.setToField(CString("whichChoice"));
Group6.addChild(&ROUTE395);

Transform& Transform396 =  Transform();
Transform396.setTranslation(new float[]{48.0,12.399999999999999,0.0});
TouchSensor& TouchSensor397 =  TouchSensor();
TouchSensor397.setDescription(CString("TSJinLipStretcher"));
TouchSensor397.setDEF(CString("JinLipStretcher_Sensor"));
Transform396.addChild(&TouchSensor397);

Shape& Shape398 =  Shape();
Appearance& Appearance399 =  Appearance();
Material& Material400 =  Material();
Material400.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance399.addChild(&Material400);

Shape398.addChild(&Appearance399);

Text& Text401 =  Text();
Text401.setString(new CString[]{CString("JinLipStretcher")}, 1);
CFontStyle& FontStyle402 =  CFontStyle();
FontStyle402.setSize(2.4);
FontStyle402.setSpacing(1.2);
FontStyle402.setJustify(new CString[]{CString("MIDDLE"), CString("MIDDLE")}, 2);
Text401.setFontStyle(&FontStyle402);

Shape398.setGeometry(&Text401);

Transform396.addChild(&Shape398);

Shape& Shape403 =  Shape();
Appearance& Appearance404 =  Appearance();
Material& Material405 =  Material();
Material405.setDiffuseColor(new float[]{0.0,0.0,1.0});
Appearance404.addChild(&Material405);

Shape403.addChild(&Appearance404);

IndexedFaceSet& IndexedFaceSet406 =  IndexedFaceSet();
IndexedFaceSet406.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
Coordinate& Coordinate407 =  Coordinate();
Coordinate407.setPoint(new float[]{20.0,1.3833333333333333,-0.1,-20.0,1.3833333333333333,-0.1,-20.0,-1.616666666666667,-0.1,20.0,-1.616666666666667,-0.1}, 12);
IndexedFaceSet406.setCoord(&Coordinate407);

Shape403.setGeometry(&IndexedFaceSet406);

Transform396.addChild(&Shape403);

Group6.addChild(&Transform396);

ROUTE& ROUTE408 =  ROUTE();
ROUTE408.setFromNode(CString("JinLipStretcher_Sensor"));
ROUTE408.setFromField(CString("touchTime"));
ROUTE408.setToNode(CString("Choice17"));
ROUTE408.setToField(CString("touchTime"));
Group6.addChild(&ROUTE408);

ROUTE& ROUTE409 =  ROUTE();
ROUTE409.setFromNode(CString("Choice17"));
ROUTE409.setFromField(CString("choice"));
ROUTE409.setToNode(CString("SceneSwitcher"));
ROUTE409.setToField(CString("whichChoice"));
Group6.addChild(&ROUTE409);

Transform& Transform410 =  Transform();
Transform410.setTranslation(new float[]{48.0,9.399999999999999,0.0});
TouchSensor& TouchSensor411 =  TouchSensor();
TouchSensor411.setDescription(CString("TSJinLipSuck"));
TouchSensor411.setDEF(CString("JinLipSuck_Sensor"));
Transform410.addChild(&TouchSensor411);

Shape& Shape412 =  Shape();
Appearance& Appearance413 =  Appearance();
Material& Material414 =  Material();
Material414.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance413.addChild(&Material414);

Shape412.addChild(&Appearance413);

Text& Text415 =  Text();
Text415.setString(new CString[]{CString("JinLipSuck")}, 1);
CFontStyle& FontStyle416 =  CFontStyle();
FontStyle416.setSize(2.4);
FontStyle416.setSpacing(1.2);
FontStyle416.setJustify(new CString[]{CString("MIDDLE"), CString("MIDDLE")}, 2);
Text415.setFontStyle(&FontStyle416);

Shape412.setGeometry(&Text415);

Transform410.addChild(&Shape412);

Shape& Shape417 =  Shape();
Appearance& Appearance418 =  Appearance();
Material& Material419 =  Material();
Material419.setDiffuseColor(new float[]{0.0,0.0,1.0});
Appearance418.addChild(&Material419);

Shape417.addChild(&Appearance418);

IndexedFaceSet& IndexedFaceSet420 =  IndexedFaceSet();
IndexedFaceSet420.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
Coordinate& Coordinate421 =  Coordinate();
Coordinate421.setPoint(new float[]{20.0,1.3833333333333333,-0.1,-20.0,1.3833333333333333,-0.1,-20.0,-1.616666666666667,-0.1,20.0,-1.616666666666667,-0.1}, 12);
IndexedFaceSet420.setCoord(&Coordinate421);

Shape417.setGeometry(&IndexedFaceSet420);

Transform410.addChild(&Shape417);

Group6.addChild(&Transform410);

ROUTE& ROUTE422 =  ROUTE();
ROUTE422.setFromNode(CString("JinLipSuck_Sensor"));
ROUTE422.setFromField(CString("touchTime"));
ROUTE422.setToNode(CString("Choice18"));
ROUTE422.setToField(CString("touchTime"));
Group6.addChild(&ROUTE422);

ROUTE& ROUTE423 =  ROUTE();
ROUTE423.setFromNode(CString("Choice18"));
ROUTE423.setFromField(CString("choice"));
ROUTE423.setToNode(CString("SceneSwitcher"));
ROUTE423.setToField(CString("whichChoice"));
Group6.addChild(&ROUTE423);

Transform& Transform424 =  Transform();
Transform424.setTranslation(new float[]{48.0,6.399999999999999,0.0});
TouchSensor& TouchSensor425 =  TouchSensor();
TouchSensor425.setDescription(CString("TSJinLipTightener"));
TouchSensor425.setDEF(CString("JinLipTightener_Sensor"));
Transform424.addChild(&TouchSensor425);

Shape& Shape426 =  Shape();
Appearance& Appearance427 =  Appearance();
Material& Material428 =  Material();
Material428.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance427.addChild(&Material428);

Shape426.addChild(&Appearance427);

Text& Text429 =  Text();
Text429.setString(new CString[]{CString("JinLipTightener")}, 1);
CFontStyle& FontStyle430 =  CFontStyle();
FontStyle430.setSize(2.4);
FontStyle430.setSpacing(1.2);
FontStyle430.setJustify(new CString[]{CString("MIDDLE"), CString("MIDDLE")}, 2);
Text429.setFontStyle(&FontStyle430);

Shape426.setGeometry(&Text429);

Transform424.addChild(&Shape426);

Shape& Shape431 =  Shape();
Appearance& Appearance432 =  Appearance();
Material& Material433 =  Material();
Material433.setDiffuseColor(new float[]{0.0,0.0,1.0});
Appearance432.addChild(&Material433);

Shape431.addChild(&Appearance432);

IndexedFaceSet& IndexedFaceSet434 =  IndexedFaceSet();
IndexedFaceSet434.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
Coordinate& Coordinate435 =  Coordinate();
Coordinate435.setPoint(new float[]{20.0,1.3833333333333333,-0.1,-20.0,1.3833333333333333,-0.1,-20.0,-1.616666666666667,-0.1,20.0,-1.616666666666667,-0.1}, 12);
IndexedFaceSet434.setCoord(&Coordinate435);

Shape431.setGeometry(&IndexedFaceSet434);

Transform424.addChild(&Shape431);

Group6.addChild(&Transform424);

ROUTE& ROUTE436 =  ROUTE();
ROUTE436.setFromNode(CString("JinLipTightener_Sensor"));
ROUTE436.setFromField(CString("touchTime"));
ROUTE436.setToNode(CString("Choice19"));
ROUTE436.setToField(CString("touchTime"));
Group6.addChild(&ROUTE436);

ROUTE& ROUTE437 =  ROUTE();
ROUTE437.setFromNode(CString("Choice19"));
ROUTE437.setFromField(CString("choice"));
ROUTE437.setToNode(CString("SceneSwitcher"));
ROUTE437.setToField(CString("whichChoice"));
Group6.addChild(&ROUTE437);

Transform& Transform438 =  Transform();
Transform438.setTranslation(new float[]{48.0,3.399999999999995,0.0});
TouchSensor& TouchSensor439 =  TouchSensor();
TouchSensor439.setDescription(CString("TSJinLowerLipDepressor"));
TouchSensor439.setDEF(CString("JinLowerLipDepressor_Sensor"));
Transform438.addChild(&TouchSensor439);

Shape& Shape440 =  Shape();
Appearance& Appearance441 =  Appearance();
Material& Material442 =  Material();
Material442.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance441.addChild(&Material442);

Shape440.addChild(&Appearance441);

Text& Text443 =  Text();
Text443.setString(new CString[]{CString("JinLowerLipDepressor")}, 1);
CFontStyle& FontStyle444 =  CFontStyle();
FontStyle444.setSize(2.4);
FontStyle444.setSpacing(1.2);
FontStyle444.setJustify(new CString[]{CString("MIDDLE"), CString("MIDDLE")}, 2);
Text443.setFontStyle(&FontStyle444);

Shape440.setGeometry(&Text443);

Transform438.addChild(&Shape440);

Shape& Shape445 =  Shape();
Appearance& Appearance446 =  Appearance();
Material& Material447 =  Material();
Material447.setDiffuseColor(new float[]{0.0,0.0,1.0});
Appearance446.addChild(&Material447);

Shape445.addChild(&Appearance446);

IndexedFaceSet& IndexedFaceSet448 =  IndexedFaceSet();
IndexedFaceSet448.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
Coordinate& Coordinate449 =  Coordinate();
Coordinate449.setPoint(new float[]{20.0,1.3833333333333333,-0.1,-20.0,1.3833333333333333,-0.1,-20.0,-1.616666666666667,-0.1,20.0,-1.616666666666667,-0.1}, 12);
IndexedFaceSet448.setCoord(&Coordinate449);

Shape445.setGeometry(&IndexedFaceSet448);

Transform438.addChild(&Shape445);

Group6.addChild(&Transform438);

ROUTE& ROUTE450 =  ROUTE();
ROUTE450.setFromNode(CString("JinLowerLipDepressor_Sensor"));
ROUTE450.setFromField(CString("touchTime"));
ROUTE450.setToNode(CString("Choice20"));
ROUTE450.setToField(CString("touchTime"));
Group6.addChild(&ROUTE450);

ROUTE& ROUTE451 =  ROUTE();
ROUTE451.setFromNode(CString("Choice20"));
ROUTE451.setFromField(CString("choice"));
ROUTE451.setToNode(CString("SceneSwitcher"));
ROUTE451.setToField(CString("whichChoice"));
Group6.addChild(&ROUTE451);

Transform& Transform452 =  Transform();
Transform452.setTranslation(new float[]{48.0,0.399999999999995,0.0});
TouchSensor& TouchSensor453 =  TouchSensor();
TouchSensor453.setDescription(CString("TSJinMouthStretch"));
TouchSensor453.setDEF(CString("JinMouthStretch_Sensor"));
Transform452.addChild(&TouchSensor453);

Shape& Shape454 =  Shape();
Appearance& Appearance455 =  Appearance();
Material& Material456 =  Material();
Material456.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance455.addChild(&Material456);

Shape454.addChild(&Appearance455);

Text& Text457 =  Text();
Text457.setString(new CString[]{CString("JinMouthStretch")}, 1);
CFontStyle& FontStyle458 =  CFontStyle();
FontStyle458.setSize(2.4);
FontStyle458.setSpacing(1.2);
FontStyle458.setJustify(new CString[]{CString("MIDDLE"), CString("MIDDLE")}, 2);
Text457.setFontStyle(&FontStyle458);

Shape454.setGeometry(&Text457);

Transform452.addChild(&Shape454);

Shape& Shape459 =  Shape();
Appearance& Appearance460 =  Appearance();
Material& Material461 =  Material();
Material461.setDiffuseColor(new float[]{0.0,0.0,1.0});
Appearance460.addChild(&Material461);

Shape459.addChild(&Appearance460);

IndexedFaceSet& IndexedFaceSet462 =  IndexedFaceSet();
IndexedFaceSet462.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
Coordinate& Coordinate463 =  Coordinate();
Coordinate463.setPoint(new float[]{20.0,1.3833333333333333,-0.1,-20.0,1.3833333333333333,-0.1,-20.0,-1.616666666666667,-0.1,20.0,-1.616666666666667,-0.1}, 12);
IndexedFaceSet462.setCoord(&Coordinate463);

Shape459.setGeometry(&IndexedFaceSet462);

Transform452.addChild(&Shape459);

Group6.addChild(&Transform452);

ROUTE& ROUTE464 =  ROUTE();
ROUTE464.setFromNode(CString("JinMouthStretch_Sensor"));
ROUTE464.setFromField(CString("touchTime"));
ROUTE464.setToNode(CString("Choice21"));
ROUTE464.setToField(CString("touchTime"));
Group6.addChild(&ROUTE464);

ROUTE& ROUTE465 =  ROUTE();
ROUTE465.setFromNode(CString("Choice21"));
ROUTE465.setFromField(CString("choice"));
ROUTE465.setToNode(CString("SceneSwitcher"));
ROUTE465.setToField(CString("whichChoice"));
Group6.addChild(&ROUTE465);

Transform& Transform466 =  Transform();
Transform466.setTranslation(new float[]{48.0,-2.6000000000000085,0.0});
TouchSensor& TouchSensor467 =  TouchSensor();
TouchSensor467.setDescription(CString("TSJinNasolabialDeepener"));
TouchSensor467.setDEF(CString("JinNasolabialDeepener_Sensor"));
Transform466.addChild(&TouchSensor467);

Shape& Shape468 =  Shape();
Appearance& Appearance469 =  Appearance();
Material& Material470 =  Material();
Material470.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance469.addChild(&Material470);

Shape468.addChild(&Appearance469);

Text& Text471 =  Text();
Text471.setString(new CString[]{CString("JinNasolabialDeepener")}, 1);
CFontStyle& FontStyle472 =  CFontStyle();
FontStyle472.setSize(2.4);
FontStyle472.setSpacing(1.2);
FontStyle472.setJustify(new CString[]{CString("MIDDLE"), CString("MIDDLE")}, 2);
Text471.setFontStyle(&FontStyle472);

Shape468.setGeometry(&Text471);

Transform466.addChild(&Shape468);

Shape& Shape473 =  Shape();
Appearance& Appearance474 =  Appearance();
Material& Material475 =  Material();
Material475.setDiffuseColor(new float[]{0.0,0.0,1.0});
Appearance474.addChild(&Material475);

Shape473.addChild(&Appearance474);

IndexedFaceSet& IndexedFaceSet476 =  IndexedFaceSet();
IndexedFaceSet476.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
Coordinate& Coordinate477 =  Coordinate();
Coordinate477.setPoint(new float[]{20.0,1.3833333333333333,-0.1,-20.0,1.3833333333333333,-0.1,-20.0,-1.616666666666667,-0.1,20.0,-1.616666666666667,-0.1}, 12);
IndexedFaceSet476.setCoord(&Coordinate477);

Shape473.setGeometry(&IndexedFaceSet476);

Transform466.addChild(&Shape473);

Group6.addChild(&Transform466);

ROUTE& ROUTE478 =  ROUTE();
ROUTE478.setFromNode(CString("JinNasolabialDeepener_Sensor"));
ROUTE478.setFromField(CString("touchTime"));
ROUTE478.setToNode(CString("Choice22"));
ROUTE478.setToField(CString("touchTime"));
Group6.addChild(&ROUTE478);

ROUTE& ROUTE479 =  ROUTE();
ROUTE479.setFromNode(CString("Choice22"));
ROUTE479.setFromField(CString("choice"));
ROUTE479.setToNode(CString("SceneSwitcher"));
ROUTE479.setToField(CString("whichChoice"));
Group6.addChild(&ROUTE479);

Transform& Transform480 =  Transform();
Transform480.setTranslation(new float[]{48.0,-5.6000000000000085,0.0});
TouchSensor& TouchSensor481 =  TouchSensor();
TouchSensor481.setDescription(CString("TSJinNoseWrinkler"));
TouchSensor481.setDEF(CString("JinNoseWrinkler_Sensor"));
Transform480.addChild(&TouchSensor481);

Shape& Shape482 =  Shape();
Appearance& Appearance483 =  Appearance();
Material& Material484 =  Material();
Material484.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance483.addChild(&Material484);

Shape482.addChild(&Appearance483);

Text& Text485 =  Text();
Text485.setString(new CString[]{CString("JinNoseWrinkler")}, 1);
CFontStyle& FontStyle486 =  CFontStyle();
FontStyle486.setSize(2.4);
FontStyle486.setSpacing(1.2);
FontStyle486.setJustify(new CString[]{CString("MIDDLE"), CString("MIDDLE")}, 2);
Text485.setFontStyle(&FontStyle486);

Shape482.setGeometry(&Text485);

Transform480.addChild(&Shape482);

Shape& Shape487 =  Shape();
Appearance& Appearance488 =  Appearance();
Material& Material489 =  Material();
Material489.setDiffuseColor(new float[]{0.0,0.0,1.0});
Appearance488.addChild(&Material489);

Shape487.addChild(&Appearance488);

IndexedFaceSet& IndexedFaceSet490 =  IndexedFaceSet();
IndexedFaceSet490.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
Coordinate& Coordinate491 =  Coordinate();
Coordinate491.setPoint(new float[]{20.0,1.3833333333333333,-0.1,-20.0,1.3833333333333333,-0.1,-20.0,-1.616666666666667,-0.1,20.0,-1.616666666666667,-0.1}, 12);
IndexedFaceSet490.setCoord(&Coordinate491);

Shape487.setGeometry(&IndexedFaceSet490);

Transform480.addChild(&Shape487);

Group6.addChild(&Transform480);

ROUTE& ROUTE492 =  ROUTE();
ROUTE492.setFromNode(CString("JinNoseWrinkler_Sensor"));
ROUTE492.setFromField(CString("touchTime"));
ROUTE492.setToNode(CString("Choice23"));
ROUTE492.setToField(CString("touchTime"));
Group6.addChild(&ROUTE492);

ROUTE& ROUTE493 =  ROUTE();
ROUTE493.setFromNode(CString("Choice23"));
ROUTE493.setFromField(CString("choice"));
ROUTE493.setToNode(CString("SceneSwitcher"));
ROUTE493.setToField(CString("whichChoice"));
Group6.addChild(&ROUTE493);

Transform& Transform494 =  Transform();
Transform494.setTranslation(new float[]{48.0,-8.600000000000009,0.0});
TouchSensor& TouchSensor495 =  TouchSensor();
TouchSensor495.setDescription(CString("TSJinOuterBrowRaiser"));
TouchSensor495.setDEF(CString("JinOuterBrowRaiser_Sensor"));
Transform494.addChild(&TouchSensor495);

Shape& Shape496 =  Shape();
Appearance& Appearance497 =  Appearance();
Material& Material498 =  Material();
Material498.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance497.addChild(&Material498);

Shape496.addChild(&Appearance497);

Text& Text499 =  Text();
Text499.setString(new CString[]{CString("JinOuterBrowRaiser")}, 1);
CFontStyle& FontStyle500 =  CFontStyle();
FontStyle500.setSize(2.4);
FontStyle500.setSpacing(1.2);
FontStyle500.setJustify(new CString[]{CString("MIDDLE"), CString("MIDDLE")}, 2);
Text499.setFontStyle(&FontStyle500);

Shape496.setGeometry(&Text499);

Transform494.addChild(&Shape496);

Shape& Shape501 =  Shape();
Appearance& Appearance502 =  Appearance();
Material& Material503 =  Material();
Material503.setDiffuseColor(new float[]{0.0,0.0,1.0});
Appearance502.addChild(&Material503);

Shape501.addChild(&Appearance502);

IndexedFaceSet& IndexedFaceSet504 =  IndexedFaceSet();
IndexedFaceSet504.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
Coordinate& Coordinate505 =  Coordinate();
Coordinate505.setPoint(new float[]{20.0,1.3833333333333333,-0.1,-20.0,1.3833333333333333,-0.1,-20.0,-1.616666666666667,-0.1,20.0,-1.616666666666667,-0.1}, 12);
IndexedFaceSet504.setCoord(&Coordinate505);

Shape501.setGeometry(&IndexedFaceSet504);

Transform494.addChild(&Shape501);

Group6.addChild(&Transform494);

ROUTE& ROUTE506 =  ROUTE();
ROUTE506.setFromNode(CString("JinOuterBrowRaiser_Sensor"));
ROUTE506.setFromField(CString("touchTime"));
ROUTE506.setToNode(CString("Choice24"));
ROUTE506.setToField(CString("touchTime"));
Group6.addChild(&ROUTE506);

ROUTE& ROUTE507 =  ROUTE();
ROUTE507.setFromNode(CString("Choice24"));
ROUTE507.setFromField(CString("choice"));
ROUTE507.setToNode(CString("SceneSwitcher"));
ROUTE507.setToField(CString("whichChoice"));
Group6.addChild(&ROUTE507);

Transform& Transform508 =  Transform();
Transform508.setTranslation(new float[]{48.0,-11.600000000000009,0.0});
TouchSensor& TouchSensor509 =  TouchSensor();
TouchSensor509.setDescription(CString("TSJinSlit"));
TouchSensor509.setDEF(CString("JinSlit_Sensor"));
Transform508.addChild(&TouchSensor509);

Shape& Shape510 =  Shape();
Appearance& Appearance511 =  Appearance();
Material& Material512 =  Material();
Material512.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance511.addChild(&Material512);

Shape510.addChild(&Appearance511);

Text& Text513 =  Text();
Text513.setString(new CString[]{CString("JinSlit")}, 1);
CFontStyle& FontStyle514 =  CFontStyle();
FontStyle514.setSize(2.4);
FontStyle514.setSpacing(1.2);
FontStyle514.setJustify(new CString[]{CString("MIDDLE"), CString("MIDDLE")}, 2);
Text513.setFontStyle(&FontStyle514);

Shape510.setGeometry(&Text513);

Transform508.addChild(&Shape510);

Shape& Shape515 =  Shape();
Appearance& Appearance516 =  Appearance();
Material& Material517 =  Material();
Material517.setDiffuseColor(new float[]{0.0,0.0,1.0});
Appearance516.addChild(&Material517);

Shape515.addChild(&Appearance516);

IndexedFaceSet& IndexedFaceSet518 =  IndexedFaceSet();
IndexedFaceSet518.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
Coordinate& Coordinate519 =  Coordinate();
Coordinate519.setPoint(new float[]{20.0,1.3833333333333333,-0.1,-20.0,1.3833333333333333,-0.1,-20.0,-1.616666666666667,-0.1,20.0,-1.616666666666667,-0.1}, 12);
IndexedFaceSet518.setCoord(&Coordinate519);

Shape515.setGeometry(&IndexedFaceSet518);

Transform508.addChild(&Shape515);

Group6.addChild(&Transform508);

ROUTE& ROUTE520 =  ROUTE();
ROUTE520.setFromNode(CString("JinSlit_Sensor"));
ROUTE520.setFromField(CString("touchTime"));
ROUTE520.setToNode(CString("Choice25"));
ROUTE520.setToField(CString("touchTime"));
Group6.addChild(&ROUTE520);

ROUTE& ROUTE521 =  ROUTE();
ROUTE521.setFromNode(CString("Choice25"));
ROUTE521.setFromField(CString("choice"));
ROUTE521.setToNode(CString("SceneSwitcher"));
ROUTE521.setToField(CString("whichChoice"));
Group6.addChild(&ROUTE521);

Transform& Transform522 =  Transform();
Transform522.setTranslation(new float[]{48.0,-14.600000000000001,0.0});
TouchSensor& TouchSensor523 =  TouchSensor();
TouchSensor523.setDescription(CString("TSJinSquint"));
TouchSensor523.setDEF(CString("JinSquint_Sensor"));
Transform522.addChild(&TouchSensor523);

Shape& Shape524 =  Shape();
Appearance& Appearance525 =  Appearance();
Material& Material526 =  Material();
Material526.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance525.addChild(&Material526);

Shape524.addChild(&Appearance525);

Text& Text527 =  Text();
Text527.setString(new CString[]{CString("JinSquint")}, 1);
CFontStyle& FontStyle528 =  CFontStyle();
FontStyle528.setSize(2.4);
FontStyle528.setSpacing(1.2);
FontStyle528.setJustify(new CString[]{CString("MIDDLE"), CString("MIDDLE")}, 2);
Text527.setFontStyle(&FontStyle528);

Shape524.setGeometry(&Text527);

Transform522.addChild(&Shape524);

Shape& Shape529 =  Shape();
Appearance& Appearance530 =  Appearance();
Material& Material531 =  Material();
Material531.setDiffuseColor(new float[]{0.0,0.0,1.0});
Appearance530.addChild(&Material531);

Shape529.addChild(&Appearance530);

IndexedFaceSet& IndexedFaceSet532 =  IndexedFaceSet();
IndexedFaceSet532.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
Coordinate& Coordinate533 =  Coordinate();
Coordinate533.setPoint(new float[]{20.0,1.3833333333333333,-0.1,-20.0,1.3833333333333333,-0.1,-20.0,-1.616666666666667,-0.1,20.0,-1.616666666666667,-0.1}, 12);
IndexedFaceSet532.setCoord(&Coordinate533);

Shape529.setGeometry(&IndexedFaceSet532);

Transform522.addChild(&Shape529);

Group6.addChild(&Transform522);

ROUTE& ROUTE534 =  ROUTE();
ROUTE534.setFromNode(CString("JinSquint_Sensor"));
ROUTE534.setFromField(CString("touchTime"));
ROUTE534.setToNode(CString("Choice26"));
ROUTE534.setToField(CString("touchTime"));
Group6.addChild(&ROUTE534);

ROUTE& ROUTE535 =  ROUTE();
ROUTE535.setFromNode(CString("Choice26"));
ROUTE535.setFromField(CString("choice"));
ROUTE535.setToNode(CString("SceneSwitcher"));
ROUTE535.setToField(CString("whichChoice"));
Group6.addChild(&ROUTE535);

Transform& Transform536 =  Transform();
Transform536.setTranslation(new float[]{48.0,-17.6,0.0});
TouchSensor& TouchSensor537 =  TouchSensor();
TouchSensor537.setDescription(CString("TSJinUpperLidRaiser"));
TouchSensor537.setDEF(CString("JinUpperLidRaiser_Sensor"));
Transform536.addChild(&TouchSensor537);

Shape& Shape538 =  Shape();
Appearance& Appearance539 =  Appearance();
Material& Material540 =  Material();
Material540.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance539.addChild(&Material540);

Shape538.addChild(&Appearance539);

Text& Text541 =  Text();
Text541.setString(new CString[]{CString("JinUpperLidRaiser")}, 1);
CFontStyle& FontStyle542 =  CFontStyle();
FontStyle542.setSize(2.4);
FontStyle542.setSpacing(1.2);
FontStyle542.setJustify(new CString[]{CString("MIDDLE"), CString("MIDDLE")}, 2);
Text541.setFontStyle(&FontStyle542);

Shape538.setGeometry(&Text541);

Transform536.addChild(&Shape538);

Shape& Shape543 =  Shape();
Appearance& Appearance544 =  Appearance();
Material& Material545 =  Material();
Material545.setDiffuseColor(new float[]{0.0,0.0,1.0});
Appearance544.addChild(&Material545);

Shape543.addChild(&Appearance544);

IndexedFaceSet& IndexedFaceSet546 =  IndexedFaceSet();
IndexedFaceSet546.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
Coordinate& Coordinate547 =  Coordinate();
Coordinate547.setPoint(new float[]{20.0,1.3833333333333333,-0.1,-20.0,1.3833333333333333,-0.1,-20.0,-1.616666666666667,-0.1,20.0,-1.616666666666667,-0.1}, 12);
IndexedFaceSet546.setCoord(&Coordinate547);

Shape543.setGeometry(&IndexedFaceSet546);

Transform536.addChild(&Shape543);

Group6.addChild(&Transform536);

ROUTE& ROUTE548 =  ROUTE();
ROUTE548.setFromNode(CString("JinUpperLidRaiser_Sensor"));
ROUTE548.setFromField(CString("touchTime"));
ROUTE548.setToNode(CString("Choice27"));
ROUTE548.setToField(CString("touchTime"));
Group6.addChild(&ROUTE548);

ROUTE& ROUTE549 =  ROUTE();
ROUTE549.setFromNode(CString("Choice27"));
ROUTE549.setFromField(CString("choice"));
ROUTE549.setToNode(CString("SceneSwitcher"));
ROUTE549.setToField(CString("whichChoice"));
Group6.addChild(&ROUTE549);

Transform& Transform550 =  Transform();
Transform550.setTranslation(new float[]{48.0,-20.6,0.0});
TouchSensor& TouchSensor551 =  TouchSensor();
TouchSensor551.setDescription(CString("TSJinUpperLipRaiser"));
TouchSensor551.setDEF(CString("JinUpperLipRaiser_Sensor"));
Transform550.addChild(&TouchSensor551);

Shape& Shape552 =  Shape();
Appearance& Appearance553 =  Appearance();
Material& Material554 =  Material();
Material554.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance553.addChild(&Material554);

Shape552.addChild(&Appearance553);

Text& Text555 =  Text();
Text555.setString(new CString[]{CString("JinUpperLipRaiser")}, 1);
CFontStyle& FontStyle556 =  CFontStyle();
FontStyle556.setSize(2.4);
FontStyle556.setSpacing(1.2);
FontStyle556.setJustify(new CString[]{CString("MIDDLE"), CString("MIDDLE")}, 2);
Text555.setFontStyle(&FontStyle556);

Shape552.setGeometry(&Text555);

Transform550.addChild(&Shape552);

Shape& Shape557 =  Shape();
Appearance& Appearance558 =  Appearance();
Material& Material559 =  Material();
Material559.setDiffuseColor(new float[]{0.0,0.0,1.0});
Appearance558.addChild(&Material559);

Shape557.addChild(&Appearance558);

IndexedFaceSet& IndexedFaceSet560 =  IndexedFaceSet();
IndexedFaceSet560.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
Coordinate& Coordinate561 =  Coordinate();
Coordinate561.setPoint(new float[]{20.0,1.3833333333333333,-0.1,-20.0,1.3833333333333333,-0.1,-20.0,-1.616666666666667,-0.1,20.0,-1.616666666666667,-0.1}, 12);
IndexedFaceSet560.setCoord(&Coordinate561);

Shape557.setGeometry(&IndexedFaceSet560);

Transform550.addChild(&Shape557);

Group6.addChild(&Transform550);

ROUTE& ROUTE562 =  ROUTE();
ROUTE562.setFromNode(CString("JinUpperLipRaiser_Sensor"));
ROUTE562.setFromField(CString("touchTime"));
ROUTE562.setToNode(CString("Choice28"));
ROUTE562.setToField(CString("touchTime"));
Group6.addChild(&ROUTE562);

ROUTE& ROUTE563 =  ROUTE();
ROUTE563.setFromNode(CString("Choice28"));
ROUTE563.setFromField(CString("choice"));
ROUTE563.setToNode(CString("SceneSwitcher"));
ROUTE563.setToField(CString("whichChoice"));
Group6.addChild(&ROUTE563);

Transform& Transform564 =  Transform();
Transform564.setTranslation(new float[]{48.0,-23.599999999999994,0.0});
TouchSensor& TouchSensor565 =  TouchSensor();
TouchSensor565.setDescription(CString("TSJinWink"));
TouchSensor565.setDEF(CString("JinWink_Sensor"));
Transform564.addChild(&TouchSensor565);

Shape& Shape566 =  Shape();
Appearance& Appearance567 =  Appearance();
Material& Material568 =  Material();
Material568.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance567.addChild(&Material568);

Shape566.addChild(&Appearance567);

Text& Text569 =  Text();
Text569.setString(new CString[]{CString("JinWink")}, 1);
CFontStyle& FontStyle570 =  CFontStyle();
FontStyle570.setSize(2.4);
FontStyle570.setSpacing(1.2);
FontStyle570.setJustify(new CString[]{CString("MIDDLE"), CString("MIDDLE")}, 2);
Text569.setFontStyle(&FontStyle570);

Shape566.setGeometry(&Text569);

Transform564.addChild(&Shape566);

Shape& Shape571 =  Shape();
Appearance& Appearance572 =  Appearance();
Material& Material573 =  Material();
Material573.setDiffuseColor(new float[]{0.0,0.0,1.0});
Appearance572.addChild(&Material573);

Shape571.addChild(&Appearance572);

IndexedFaceSet& IndexedFaceSet574 =  IndexedFaceSet();
IndexedFaceSet574.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
Coordinate& Coordinate575 =  Coordinate();
Coordinate575.setPoint(new float[]{20.0,1.3833333333333333,-0.1,-20.0,1.3833333333333333,-0.1,-20.0,-1.616666666666667,-0.1,20.0,-1.616666666666667,-0.1}, 12);
IndexedFaceSet574.setCoord(&Coordinate575);

Shape571.setGeometry(&IndexedFaceSet574);

Transform564.addChild(&Shape571);

Group6.addChild(&Transform564);

ROUTE& ROUTE576 =  ROUTE();
ROUTE576.setFromNode(CString("JinWink_Sensor"));
ROUTE576.setFromField(CString("touchTime"));
ROUTE576.setToNode(CString("Choice29"));
ROUTE576.setToField(CString("touchTime"));
Group6.addChild(&ROUTE576);

ROUTE& ROUTE577 =  ROUTE();
ROUTE577.setFromNode(CString("Choice29"));
ROUTE577.setFromField(CString("choice"));
ROUTE577.setToNode(CString("SceneSwitcher"));
ROUTE577.setToField(CString("whichChoice"));
Group6.addChild(&ROUTE577);

Scene4.addChild(&Group6);

X3D0.setScene(&Scene4);

//}
