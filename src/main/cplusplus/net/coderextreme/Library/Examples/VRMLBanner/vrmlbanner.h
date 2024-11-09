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
meta3.setContent(CString("Sun, 01 Nov 2015 04:01:17 GMT"));
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
meta6.setContent(CString("Sun, 01 Nov 2015 04:01:17 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
ProtoDeclare& ProtoDeclare8 =  ProtoDeclare();
ProtoDeclare8.setName(CString("f"));
ProtoInterface& ProtoInterface9 =  ProtoInterface();
field& field10 =  field();
field10.setName(CString("h"));
field10.setAccessType(CString("inputOnly"));
field10.setType(CString("SFTime"));
ProtoInterface9.addChild(&field10);

field& field11 =  field();
field11.setName(CString("i"));
field11.setAccessType(CString("outputOnly"));
field11.setType(CString("SFTime"));
ProtoInterface9.addChild(&field11);

field& field12 =  field();
field12.setName(CString("j"));
field12.setAccessType(CString("outputOnly"));
field12.setType(CString("SFTime"));
ProtoInterface9.addChild(&field12);

ProtoDeclare8.addChild(&ProtoInterface9);

ProtoBody& ProtoBody13 =  ProtoBody();
Script& Script14 =  Script();
Script14.setDEF(CString("k_1"));
Script14.setDirectOutput(true);
field& field15 =  field();
field15.setName(CString("l"));
field15.setAccessType(CString("inputOnly"));
field15.setType(CString("SFTime"));
Script14.addChild(&field15);

field& field16 =  field();
field16.setName(CString("h"));
field16.setAccessType(CString("inputOnly"));
field16.setType(CString("SFTime"));
Script14.addChild(&field16);

field& field17 =  field();
field17.setName(CString("i"));
field17.setAccessType(CString("outputOnly"));
field17.setType(CString("SFTime"));
Script14.addChild(&field17);

field& field18 =  field();
field18.setName(CString("m"));
field18.setAccessType(CString("outputOnly"));
field18.setType(CString("SFTime"));
Script14.addChild(&field18);

field& field19 =  field();
field19.setName(CString("j"));
field19.setAccessType(CString("outputOnly"));
field19.setType(CString("SFTime"));
Script14.addChild(&field19);

IS& IS20 =  IS();
Connect& connect21 =  Connect();
connect21.setNodeField(CString("h"));
connect21.setProtoField(CString("h"));
IS20.addChild(&connect21);

Connect& connect22 =  Connect();
connect22.setNodeField(CString("i"));
connect22.setProtoField(CString("i"));
IS20.addChild(&connect22);

Connect& connect23 =  Connect();
connect23.setNodeField(CString("j"));
connect23.setProtoField(CString("j"));
IS20.addChild(&connect23);

Script14.addChild(&IS20);


//Script14.setSourceCode(CString("javascript:")+
//_T("function initialize(){")+
//_T("m=0;")+
//_T("}")+
//_T("function l(n,time){")+
//_T("j=time;")+
//_T("}")+
//_T("function h(n,time){")+
//_T("i=time;")+
//_T("}"));
ProtoBody13.addChild(&Script14);

ROUTE& ROUTE24 =  ROUTE();
ROUTE24.setFromNode(CString("k_1"));
ROUTE24.setFromField(CString("m"));
ROUTE24.setToNode(CString("k_1"));
ROUTE24.setToField(CString("l"));
ProtoBody13.addChild(&ROUTE24);

ProtoDeclare8.addChild(&ProtoBody13);

Scene7.addChild(&ProtoDeclare8);

ProtoDeclare& ProtoDeclare25 =  ProtoDeclare();
ProtoDeclare25.setName(CString("o"));
ProtoInterface& ProtoInterface26 =  ProtoInterface();
field& field27 =  field();
field27.setName(CString("set_p"));
field27.setAccessType(CString("inputOnly"));
field27.setType(CString("SFBool"));
ProtoInterface26.addChild(&field27);

field& field28 =  field();
field28.setName(CString("set_transparency"));
field28.setAccessType(CString("inputOnly"));
field28.setType(CString("SFFloat"));
ProtoInterface26.addChild(&field28);

field& field29 =  field();
field29.setName(CString("set_diffuseColor"));
field29.setAccessType(CString("inputOnly"));
field29.setType(CString("SFColor"));
ProtoInterface26.addChild(&field29);

field& field30 =  field();
field30.setName(CString("set_emissiveColor"));
field30.setAccessType(CString("inputOnly"));
field30.setType(CString("SFColor"));
ProtoInterface26.addChild(&field30);

field& field31 =  field();
field31.setName(CString("set_specularColor"));
field31.setAccessType(CString("inputOnly"));
field31.setType(CString("SFColor"));
ProtoInterface26.addChild(&field31);

field& field32 =  field();
field32.setName(CString("set_shininess"));
field32.setAccessType(CString("inputOnly"));
field32.setType(CString("SFFloat"));
ProtoInterface26.addChild(&field32);

field& field33 =  field();
field33.setName(CString("set_q"));
field33.setAccessType(CString("inputOnly"));
field33.setType(CString("SFVec2f"));
ProtoInterface26.addChild(&field33);

field& field34 =  field();
field34.setName(CString("set_s"));
field34.setAccessType(CString("inputOnly"));
field34.setType(CString("SFFloat"));
ProtoInterface26.addChild(&field34);

field& field35 =  field();
field35.setName(CString("set_t"));
field35.setAccessType(CString("inputOnly"));
field35.setType(CString("SFVec2f"));
ProtoInterface26.addChild(&field35);

field& field36 =  field();
field36.setName(CString("set_u"));
field36.setAccessType(CString("inputOnly"));
field36.setType(CString("SFVec2f"));
ProtoInterface26.addChild(&field36);

field& field37 =  field();
field37.setName(CString("set_v"));
field37.setAccessType(CString("inputOnly"));
field37.setType(CString("SFNode"));
ProtoInterface26.addChild(&field37);

field& field38 =  field();
field38.setName(CString("set_url"));
field38.setAccessType(CString("inputOnly"));
field38.setType(CString("MFString"));
ProtoInterface26.addChild(&field38);

field& field39 =  field();
field39.setName(CString("w"));
field39.setAccessType(CString("inputOnly"));
field39.setType(CString("SFBool"));
ProtoInterface26.addChild(&field39);

field& field40 =  field();
field40.setName(CString("p_changed"));
field40.setAccessType(CString("outputOnly"));
field40.setType(CString("SFBool"));
ProtoInterface26.addChild(&field40);

field& field41 =  field();
field41.setName(CString("transparency_changed"));
field41.setAccessType(CString("outputOnly"));
field41.setType(CString("SFFloat"));
ProtoInterface26.addChild(&field41);

field& field42 =  field();
field42.setName(CString("diffuseColor_changed"));
field42.setAccessType(CString("outputOnly"));
field42.setType(CString("SFColor"));
ProtoInterface26.addChild(&field42);

field& field43 =  field();
field43.setName(CString("emissiveColor_changed"));
field43.setAccessType(CString("outputOnly"));
field43.setType(CString("SFColor"));
ProtoInterface26.addChild(&field43);

field& field44 =  field();
field44.setName(CString("specularColor_changed"));
field44.setAccessType(CString("outputOnly"));
field44.setType(CString("SFColor"));
ProtoInterface26.addChild(&field44);

field& field45 =  field();
field45.setName(CString("shininess_changed"));
field45.setAccessType(CString("outputOnly"));
field45.setType(CString("SFFloat"));
ProtoInterface26.addChild(&field45);

field& field46 =  field();
field46.setName(CString("q_changed"));
field46.setAccessType(CString("outputOnly"));
field46.setType(CString("SFVec2f"));
ProtoInterface26.addChild(&field46);

field& field47 =  field();
field47.setName(CString("s_changed"));
field47.setAccessType(CString("outputOnly"));
field47.setType(CString("SFFloat"));
ProtoInterface26.addChild(&field47);

field& field48 =  field();
field48.setName(CString("t_changed"));
field48.setAccessType(CString("outputOnly"));
field48.setType(CString("SFVec2f"));
ProtoInterface26.addChild(&field48);

field& field49 =  field();
field49.setName(CString("u_changed"));
field49.setAccessType(CString("outputOnly"));
field49.setType(CString("SFVec2f"));
ProtoInterface26.addChild(&field49);

field& field50 =  field();
field50.setName(CString("v_changed"));
field50.setAccessType(CString("outputOnly"));
field50.setType(CString("SFNode"));
ProtoInterface26.addChild(&field50);

field& field51 =  field();
field51.setName(CString("url_changed"));
field51.setAccessType(CString("outputOnly"));
field51.setType(CString("MFString"));
ProtoInterface26.addChild(&field51);

field& field52 =  field();
field52.setName(CString("A_changed"));
field52.setAccessType(CString("outputOnly"));
field52.setType(CString("MFNode"));
ProtoInterface26.addChild(&field52);

field& field53 =  field();
field53.setName(CString("B"));
field53.setAccessType(CString("inputOutput"));
field53.setType(CString("SFNode"));
ProtoInterface26.addChild(&field53);

field& field54 =  field();
field54.setName(CString("C"));
field54.setAccessType(CString("inputOutput"));
field54.setType(CString("MFNode"));
ProtoInterface26.addChild(&field54);

field& field55 =  field();
field55.setName(CString("D"));
field55.setAccessType(CString("inputOutput"));
field55.setType(CString("SFNode"));
ProtoInterface26.addChild(&field55);

field& field56 =  field();
field56.setName(CString("F"));
field56.setAccessType(CString("inputOutput"));
field56.setType(CString("SFInt32"));
field56.setValue(CString("-1"));
ProtoInterface26.addChild(&field56);

field& field57 =  field();
field57.setName(CString("G"));
field57.setAccessType(CString("inputOutput"));
field57.setType(CString("SFBool"));
ProtoInterface26.addChild(&field57);

field& field58 =  field();
field58.setName(CString("children"));
field58.setAccessType(CString("initializeOnly"));
field58.setType(CString("MFNode"));
ProtoInterface26.addChild(&field58);

field& field59 =  field();
field59.setName(CString("H"));
field59.setAccessType(CString("initializeOnly"));
field59.setType(CString("SFBool"));
field59.setValue(CString("true"));
ProtoInterface26.addChild(&field59);

field& field60 =  field();
field60.setName(CString("p"));
field60.setAccessType(CString("initializeOnly"));
field60.setType(CString("SFBool"));
field60.setValue(CString("true"));
ProtoInterface26.addChild(&field60);

field& field61 =  field();
field61.setName(CString("A"));
field61.setAccessType(CString("initializeOnly"));
field61.setType(CString("MFNode"));
ProtoInterface26.addChild(&field61);

ProtoDeclare25.addChild(&ProtoInterface26);

ProtoBody& ProtoBody62 =  ProtoBody();
Group& Group63 =  Group();
IS& IS64 =  IS();
Connect& connect65 =  Connect();
connect65.setNodeField(CString("children"));
connect65.setProtoField(CString("children"));
IS64.addChild(&connect65);

Group63.addChild(&IS64);

ProtoBody62.addChild(&Group63);

Script& Script66 =  Script();
Script66.setDEF(CString("I"));
Script66.setDirectOutput(true);
field& field67 =  field();
field67.setName(CString("set_p"));
field67.setAccessType(CString("inputOnly"));
field67.setType(CString("SFBool"));
Script66.addChild(&field67);

field& field68 =  field();
field68.setName(CString("set_transparency"));
field68.setAccessType(CString("inputOnly"));
field68.setType(CString("SFFloat"));
Script66.addChild(&field68);

field& field69 =  field();
field69.setName(CString("set_diffuseColor"));
field69.setAccessType(CString("inputOnly"));
field69.setType(CString("SFColor"));
Script66.addChild(&field69);

field& field70 =  field();
field70.setName(CString("set_emissiveColor"));
field70.setAccessType(CString("inputOnly"));
field70.setType(CString("SFColor"));
Script66.addChild(&field70);

field& field71 =  field();
field71.setName(CString("set_specularColor"));
field71.setAccessType(CString("inputOnly"));
field71.setType(CString("SFColor"));
Script66.addChild(&field71);

field& field72 =  field();
field72.setName(CString("set_shininess"));
field72.setAccessType(CString("inputOnly"));
field72.setType(CString("SFFloat"));
Script66.addChild(&field72);

field& field73 =  field();
field73.setName(CString("set_q"));
field73.setAccessType(CString("inputOnly"));
field73.setType(CString("SFVec2f"));
Script66.addChild(&field73);

field& field74 =  field();
field74.setName(CString("set_s"));
field74.setAccessType(CString("inputOnly"));
field74.setType(CString("SFFloat"));
Script66.addChild(&field74);

field& field75 =  field();
field75.setName(CString("set_t"));
field75.setAccessType(CString("inputOnly"));
field75.setType(CString("SFVec2f"));
Script66.addChild(&field75);

field& field76 =  field();
field76.setName(CString("set_u"));
field76.setAccessType(CString("inputOnly"));
field76.setType(CString("SFVec2f"));
Script66.addChild(&field76);

field& field77 =  field();
field77.setName(CString("set_url"));
field77.setAccessType(CString("inputOnly"));
field77.setType(CString("MFString"));
Script66.addChild(&field77);

field& field78 =  field();
field78.setName(CString("set_v"));
field78.setAccessType(CString("inputOnly"));
field78.setType(CString("SFNode"));
Script66.addChild(&field78);

field& field79 =  field();
field79.setName(CString("w"));
field79.setAccessType(CString("inputOnly"));
field79.setType(CString("SFBool"));
Script66.addChild(&field79);

field& field80 =  field();
field80.setName(CString("p_changed"));
field80.setAccessType(CString("outputOnly"));
field80.setType(CString("SFBool"));
Script66.addChild(&field80);

field& field81 =  field();
field81.setName(CString("transparency_changed"));
field81.setAccessType(CString("outputOnly"));
field81.setType(CString("SFFloat"));
Script66.addChild(&field81);

field& field82 =  field();
field82.setName(CString("diffuseColor_changed"));
field82.setAccessType(CString("outputOnly"));
field82.setType(CString("SFColor"));
Script66.addChild(&field82);

field& field83 =  field();
field83.setName(CString("emissiveColor_changed"));
field83.setAccessType(CString("outputOnly"));
field83.setType(CString("SFColor"));
Script66.addChild(&field83);

field& field84 =  field();
field84.setName(CString("specularColor_changed"));
field84.setAccessType(CString("outputOnly"));
field84.setType(CString("SFColor"));
Script66.addChild(&field84);

field& field85 =  field();
field85.setName(CString("shininess_changed"));
field85.setAccessType(CString("outputOnly"));
field85.setType(CString("SFFloat"));
Script66.addChild(&field85);

field& field86 =  field();
field86.setName(CString("q_changed"));
field86.setAccessType(CString("outputOnly"));
field86.setType(CString("SFVec2f"));
Script66.addChild(&field86);

field& field87 =  field();
field87.setName(CString("s_changed"));
field87.setAccessType(CString("outputOnly"));
field87.setType(CString("SFFloat"));
Script66.addChild(&field87);

field& field88 =  field();
field88.setName(CString("t_changed"));
field88.setAccessType(CString("outputOnly"));
field88.setType(CString("SFVec2f"));
Script66.addChild(&field88);

field& field89 =  field();
field89.setName(CString("u_changed"));
field89.setAccessType(CString("outputOnly"));
field89.setType(CString("SFVec2f"));
Script66.addChild(&field89);

field& field90 =  field();
field90.setName(CString("url_changed"));
field90.setAccessType(CString("outputOnly"));
field90.setType(CString("MFString"));
Script66.addChild(&field90);

field& field91 =  field();
field91.setName(CString("v_changed"));
field91.setAccessType(CString("outputOnly"));
field91.setType(CString("SFNode"));
Script66.addChild(&field91);

field& field92 =  field();
field92.setName(CString("A_changed"));
field92.setAccessType(CString("outputOnly"));
field92.setType(CString("MFNode"));
Script66.addChild(&field92);

field& field93 =  field();
field93.setName(CString("p"));
field93.setAccessType(CString("initializeOnly"));
field93.setType(CString("SFBool"));
Script66.addChild(&field93);

field& field94 =  field();
field94.setName(CString("A"));
field94.setAccessType(CString("initializeOnly"));
field94.setType(CString("MFNode"));
Script66.addChild(&field94);

IS& IS95 =  IS();
Connect& connect96 =  Connect();
connect96.setNodeField(CString("set_p"));
connect96.setProtoField(CString("set_p"));
IS95.addChild(&connect96);

Connect& connect97 =  Connect();
connect97.setNodeField(CString("set_transparency"));
connect97.setProtoField(CString("set_transparency"));
IS95.addChild(&connect97);

Connect& connect98 =  Connect();
connect98.setNodeField(CString("set_diffuseColor"));
connect98.setProtoField(CString("set_diffuseColor"));
IS95.addChild(&connect98);

Connect& connect99 =  Connect();
connect99.setNodeField(CString("set_emissiveColor"));
connect99.setProtoField(CString("set_emissiveColor"));
IS95.addChild(&connect99);

Connect& connect100 =  Connect();
connect100.setNodeField(CString("set_specularColor"));
connect100.setProtoField(CString("set_specularColor"));
IS95.addChild(&connect100);

Connect& connect101 =  Connect();
connect101.setNodeField(CString("set_shininess"));
connect101.setProtoField(CString("set_shininess"));
IS95.addChild(&connect101);

Connect& connect102 =  Connect();
connect102.setNodeField(CString("set_q"));
connect102.setProtoField(CString("set_q"));
IS95.addChild(&connect102);

Connect& connect103 =  Connect();
connect103.setNodeField(CString("set_s"));
connect103.setProtoField(CString("set_s"));
IS95.addChild(&connect103);

Connect& connect104 =  Connect();
connect104.setNodeField(CString("set_t"));
connect104.setProtoField(CString("set_t"));
IS95.addChild(&connect104);

Connect& connect105 =  Connect();
connect105.setNodeField(CString("set_u"));
connect105.setProtoField(CString("set_u"));
IS95.addChild(&connect105);

Connect& connect106 =  Connect();
connect106.setNodeField(CString("set_url"));
connect106.setProtoField(CString("set_url"));
IS95.addChild(&connect106);

Connect& connect107 =  Connect();
connect107.setNodeField(CString("set_v"));
connect107.setProtoField(CString("set_v"));
IS95.addChild(&connect107);

Connect& connect108 =  Connect();
connect108.setNodeField(CString("w"));
connect108.setProtoField(CString("w"));
IS95.addChild(&connect108);

Connect& connect109 =  Connect();
connect109.setNodeField(CString("p_changed"));
connect109.setProtoField(CString("p_changed"));
IS95.addChild(&connect109);

Connect& connect110 =  Connect();
connect110.setNodeField(CString("transparency_changed"));
connect110.setProtoField(CString("transparency_changed"));
IS95.addChild(&connect110);

Connect& connect111 =  Connect();
connect111.setNodeField(CString("diffuseColor_changed"));
connect111.setProtoField(CString("diffuseColor_changed"));
IS95.addChild(&connect111);

Connect& connect112 =  Connect();
connect112.setNodeField(CString("emissiveColor_changed"));
connect112.setProtoField(CString("emissiveColor_changed"));
IS95.addChild(&connect112);

Connect& connect113 =  Connect();
connect113.setNodeField(CString("specularColor_changed"));
connect113.setProtoField(CString("specularColor_changed"));
IS95.addChild(&connect113);

Connect& connect114 =  Connect();
connect114.setNodeField(CString("shininess_changed"));
connect114.setProtoField(CString("shininess_changed"));
IS95.addChild(&connect114);

Connect& connect115 =  Connect();
connect115.setNodeField(CString("q_changed"));
connect115.setProtoField(CString("q_changed"));
IS95.addChild(&connect115);

Connect& connect116 =  Connect();
connect116.setNodeField(CString("s_changed"));
connect116.setProtoField(CString("s_changed"));
IS95.addChild(&connect116);

Connect& connect117 =  Connect();
connect117.setNodeField(CString("t_changed"));
connect117.setProtoField(CString("t_changed"));
IS95.addChild(&connect117);

Connect& connect118 =  Connect();
connect118.setNodeField(CString("u_changed"));
connect118.setProtoField(CString("u_changed"));
IS95.addChild(&connect118);

Connect& connect119 =  Connect();
connect119.setNodeField(CString("url_changed"));
connect119.setProtoField(CString("url_changed"));
IS95.addChild(&connect119);

Connect& connect120 =  Connect();
connect120.setNodeField(CString("v_changed"));
connect120.setProtoField(CString("v_changed"));
IS95.addChild(&connect120);

Connect& connect121 =  Connect();
connect121.setNodeField(CString("A_changed"));
connect121.setProtoField(CString("A_changed"));
IS95.addChild(&connect121);

Connect& connect122 =  Connect();
connect122.setNodeField(CString("p"));
connect122.setProtoField(CString("p"));
IS95.addChild(&connect122);

Connect& connect123 =  Connect();
connect123.setNodeField(CString("A"));
connect123.setProtoField(CString("A"));
IS95.addChild(&connect123);

Script66.addChild(&IS95);


//Script66.setSourceCode(CString("javascript:")+
//_T("function set_p(n){")+
//_T("for(J=0;J<A.length;J++){")+
//_T("A[J].set_p=n;")+
//_T("}")+
//_T("p=n;")+
//_T("p_changed=n;")+
//_T("}")+
//_T("function initialize(){")+
//_T("p_changed=p;")+
//_T("A_changed=A;")+
//_T("}")+
//_T("function set_diffuseColor(n){")+
//_T("for(J=0;J<A.length;J++){")+
//_T("A[J].set_diffuseColor=n;")+
//_T("}")+
//_T("diffuseColor_changed=n;")+
//_T("}")+
//_T("function set_specularColor(n){")+
//_T("for(J=0;J<A.length;J++){")+
//_T("A[J].set_specularColor=n;")+
//_T("}")+
//_T("specularColor_changed=n;")+
//_T("}")+
//_T("function set_emissiveColor(n){")+
//_T("for(J=0;J<A.length;J++){")+
//_T("A[J].set_emissiveColor=n;")+
//_T("}")+
//_T("emissiveColor_changed=n;")+
//_T("}")+
//_T("function set_transparency(n){")+
//_T("for(J=0;J<A.length;J++){")+
//_T("A[J].set_transparency=n;")+
//_T("}")+
//_T("transparency_changed=n;")+
//_T("}")+
//_T("function set_shininess(n){")+
//_T("for(J=0;J<A.length;J++){")+
//_T("A[J].set_shininess=n;")+
//_T("}")+
//_T("shininess_changed=n;")+
//_T("}")+
//_T("function set_q(n){")+
//_T("for(J=0;J<A.length;J++){")+
//_T("A[J].set_q=n;")+
//_T("}")+
//_T("q_changed=n;")+
//_T("}")+
//_T("function set_u(n){")+
//_T("for(J=0;J<A.length;J++){")+
//_T("A[J].set_u=n;")+
//_T("}")+
//_T("u_changed=n;")+
//_T("}")+
//_T("function set_t(n){")+
//_T("for(J=0;J<A.length;J++){")+
//_T("A[J].set_t=n;")+
//_T("}")+
//_T("t_changed=n;")+
//_T("}")+
//_T("function set_s(n){")+
//_T("for(J=0;J<A.length;J++){")+
//_T("A[J].set_s=n;")+
//_T("}")+
//_T("s_changed=n;")+
//_T("}")+
//_T("function set_url(n){")+
//_T("for(J=0;J<A.length;J++){")+
//_T("A[J].set_url=n;")+
//_T("}")+
//_T("url_changed=n;")+
//_T("}")+
//_T("function set_v(n){")+
//_T("for(J=0;J<A.length;J++){")+
//_T("A[J].set_v=n;")+
//_T("}")+
//_T("v_changed=n;")+
//_T("}")+
//_T("function w(){")+
//_T("}"));
ProtoBody62.addChild(&Script66);

ProtoDeclare25.addChild(&ProtoBody62);

Scene7.addChild(&ProtoDeclare25);

ProtoDeclare& ProtoDeclare124 =  ProtoDeclare();
ProtoDeclare124.setName(CString("K"));
ProtoInterface& ProtoInterface125 =  ProtoInterface();
field& field126 =  field();
field126.setName(CString("set_transparency"));
field126.setAccessType(CString("inputOnly"));
field126.setType(CString("SFFloat"));
ProtoInterface125.addChild(&field126);

field& field127 =  field();
field127.setName(CString("set_intensity"));
field127.setAccessType(CString("inputOnly"));
field127.setType(CString("SFFloat"));
ProtoInterface125.addChild(&field127);

field& field128 =  field();
field128.setName(CString("w"));
field128.setAccessType(CString("inputOnly"));
field128.setType(CString("SFBool"));
ProtoInterface125.addChild(&field128);

field& field129 =  field();
field129.setName(CString("transparency_changed"));
field129.setAccessType(CString("outputOnly"));
field129.setType(CString("SFFloat"));
ProtoInterface125.addChild(&field129);

field& field130 =  field();
field130.setName(CString("intensity_changed"));
field130.setAccessType(CString("outputOnly"));
field130.setType(CString("SFFloat"));
ProtoInterface125.addChild(&field130);

field& field131 =  field();
field131.setName(CString("p"));
field131.setAccessType(CString("inputOutput"));
field131.setType(CString("SFBool"));
field131.setValue(CString("true"));
ProtoInterface125.addChild(&field131);

field& field132 =  field();
field132.setName(CString("diffuseColor"));
field132.setAccessType(CString("inputOutput"));
field132.setType(CString("SFColor"));
field132.setValue(CString("1 1 1"));
ProtoInterface125.addChild(&field132);

field& field133 =  field();
field133.setName(CString("B"));
field133.setAccessType(CString("inputOutput"));
field133.setType(CString("SFNode"));
ProtoInterface125.addChild(&field133);

field& field134 =  field();
field134.setName(CString("C"));
field134.setAccessType(CString("inputOutput"));
field134.setType(CString("MFNode"));
ProtoInterface125.addChild(&field134);

field& field135 =  field();
field135.setName(CString("D"));
field135.setAccessType(CString("inputOutput"));
field135.setType(CString("SFNode"));
ProtoInterface125.addChild(&field135);

field& field136 =  field();
field136.setName(CString("F"));
field136.setAccessType(CString("inputOutput"));
field136.setType(CString("SFInt32"));
field136.setValue(CString("-1"));
ProtoInterface125.addChild(&field136);

field& field137 =  field();
field137.setName(CString("type"));
field137.setAccessType(CString("initializeOnly"));
field137.setType(CString("SFInt32"));
ProtoInterface125.addChild(&field137);

field& field138 =  field();
field138.setName(CString("radius"));
field138.setAccessType(CString("initializeOnly"));
field138.setType(CString("SFFloat"));
field138.setValue(CString("1000"));
ProtoInterface125.addChild(&field138);

field& field139 =  field();
field139.setName(CString("L"));
field139.setAccessType(CString("initializeOnly"));
field139.setType(CString("SFFloat"));
ProtoInterface125.addChild(&field139);

field& field140 =  field();
field140.setName(CString("attenuation"));
field140.setAccessType(CString("initializeOnly"));
field140.setType(CString("SFVec3f"));
field140.setValue(CString("1 0 0"));
ProtoInterface125.addChild(&field140);

field& field141 =  field();
field141.setName(CString("direction"));
field141.setAccessType(CString("initializeOnly"));
field141.setType(CString("SFVec3f"));
field141.setValue(CString("0 0 -1"));
ProtoInterface125.addChild(&field141);

field& field142 =  field();
field142.setName(CString("beamWidth"));
field142.setAccessType(CString("initializeOnly"));
field142.setType(CString("SFFloat"));
field142.setValue(CString("0.131"));
ProtoInterface125.addChild(&field142);

field& field143 =  field();
field143.setName(CString("cutOffAngle"));
field143.setAccessType(CString("initializeOnly"));
field143.setType(CString("SFFloat"));
field143.setValue(CString("1.57"));
ProtoInterface125.addChild(&field143);

field& field144 =  field();
field144.setName(CString("intensity"));
field144.setAccessType(CString("initializeOnly"));
field144.setType(CString("SFFloat"));
field144.setValue(CString("1"));
ProtoInterface125.addChild(&field144);

field& field145 =  field();
field145.setName(CString("M"));
field145.setAccessType(CString("initializeOnly"));
field145.setType(CString("MFNode"));
ProtoInterface125.addChild(&field145);

ProtoDeclare124.addChild(&ProtoInterface125);

ProtoBody& ProtoBody146 =  ProtoBody();
Group& Group147 =  Group();
Switch& Switch148 =  Switch();
Switch148.setWhichChoice(-1);
IS& IS149 =  IS();
Connect& connect150 =  Connect();
connect150.setNodeField(CString("whichChoice"));
connect150.setProtoField(CString("type"));
IS149.addChild(&connect150);

Switch148.addChild(&IS149);

PointLight& PointLight151 =  PointLight();
PointLight151.setDEF(CString("N_1"));
IS& IS152 =  IS();
Connect& connect153 =  Connect();
connect153.setNodeField(CString("on"));
connect153.setProtoField(CString("p"));
IS152.addChild(&connect153);

Connect& connect154 =  Connect();
connect154.setNodeField(CString("color"));
connect154.setProtoField(CString("diffuseColor"));
IS152.addChild(&connect154);

Connect& connect155 =  Connect();
connect155.setNodeField(CString("intensity"));
connect155.setProtoField(CString("intensity"));
IS152.addChild(&connect155);

Connect& connect156 =  Connect();
connect156.setNodeField(CString("attenuation"));
connect156.setProtoField(CString("attenuation"));
IS152.addChild(&connect156);

Connect& connect157 =  Connect();
connect157.setNodeField(CString("radius"));
connect157.setProtoField(CString("radius"));
IS152.addChild(&connect157);

PointLight151.addChild(&IS152);

Switch148.addChild(&PointLight151);

SpotLight& SpotLight158 =  SpotLight();
SpotLight158.setDEF(CString("O_1"));
IS& IS159 =  IS();
Connect& connect160 =  Connect();
connect160.setNodeField(CString("on"));
connect160.setProtoField(CString("p"));
IS159.addChild(&connect160);

Connect& connect161 =  Connect();
connect161.setNodeField(CString("color"));
connect161.setProtoField(CString("diffuseColor"));
IS159.addChild(&connect161);

Connect& connect162 =  Connect();
connect162.setNodeField(CString("intensity"));
connect162.setProtoField(CString("intensity"));
IS159.addChild(&connect162);

Connect& connect163 =  Connect();
connect163.setNodeField(CString("attenuation"));
connect163.setProtoField(CString("attenuation"));
IS159.addChild(&connect163);

Connect& connect164 =  Connect();
connect164.setNodeField(CString("direction"));
connect164.setProtoField(CString("direction"));
IS159.addChild(&connect164);

Connect& connect165 =  Connect();
connect165.setNodeField(CString("beamWidth"));
connect165.setProtoField(CString("beamWidth"));
IS159.addChild(&connect165);

Connect& connect166 =  Connect();
connect166.setNodeField(CString("cutOffAngle"));
connect166.setProtoField(CString("cutOffAngle"));
IS159.addChild(&connect166);

SpotLight158.addChild(&IS159);

Switch148.addChild(&SpotLight158);

Group147.addChild(&Switch148);

Group& Group167 =  Group();
IS& IS168 =  IS();
Connect& connect169 =  Connect();
connect169.setNodeField(CString("children"));
connect169.setProtoField(CString("M"));
IS168.addChild(&connect169);

Group167.addChild(&IS168);

Group147.addChild(&Group167);

ProtoBody146.addChild(&Group147);

Script& Script170 =  Script();
Script170.setDEF(CString("P_1"));
Script170.setDirectOutput(true);
field& field171 =  field();
field171.setName(CString("set_transparency"));
field171.setAccessType(CString("inputOnly"));
field171.setType(CString("SFFloat"));
Script170.addChild(&field171);

field& field172 =  field();
field172.setName(CString("set_intensity"));
field172.setAccessType(CString("inputOnly"));
field172.setType(CString("SFFloat"));
Script170.addChild(&field172);

field& field173 =  field();
field173.setName(CString("w"));
field173.setAccessType(CString("inputOnly"));
field173.setType(CString("SFBool"));
Script170.addChild(&field173);

field& field174 =  field();
field174.setName(CString("intensity_changed"));
field174.setAccessType(CString("outputOnly"));
field174.setType(CString("SFFloat"));
Script170.addChild(&field174);

field& field175 =  field();
field175.setName(CString("transparency_changed"));
field175.setAccessType(CString("outputOnly"));
field175.setType(CString("SFFloat"));
Script170.addChild(&field175);

field& field176 =  field();
field176.setName(CString("intensity"));
field176.setAccessType(CString("initializeOnly"));
field176.setType(CString("SFFloat"));
Script170.addChild(&field176);

IS& IS177 =  IS();
Connect& connect178 =  Connect();
connect178.setNodeField(CString("set_transparency"));
connect178.setProtoField(CString("set_transparency"));
IS177.addChild(&connect178);

Connect& connect179 =  Connect();
connect179.setNodeField(CString("set_intensity"));
connect179.setProtoField(CString("set_intensity"));
IS177.addChild(&connect179);

Connect& connect180 =  Connect();
connect180.setNodeField(CString("w"));
connect180.setProtoField(CString("w"));
IS177.addChild(&connect180);

Connect& connect181 =  Connect();
connect181.setNodeField(CString("intensity_changed"));
connect181.setProtoField(CString("intensity_changed"));
IS177.addChild(&connect181);

Connect& connect182 =  Connect();
connect182.setNodeField(CString("transparency_changed"));
connect182.setProtoField(CString("transparency_changed"));
IS177.addChild(&connect182);

Connect& connect183 =  Connect();
connect183.setNodeField(CString("intensity"));
connect183.setProtoField(CString("intensity"));
IS177.addChild(&connect183);

Script170.addChild(&IS177);


//Script170.setSourceCode(CString("javascript:")+
//_T("function set_transparency(n){")+
//_T("intensity=1-n;")+
//_T("intensity_changed=intensity;")+
//_T("transparency_changed=n;")+
//_T("}")+
//_T("function set_intensity(n){")+
//_T("intensity=n;")+
//_T("intensity_changed=n;")+
//_T("transparency_changed=1-n;")+
//_T("}")+
//_T("function w(){")+
//_T("}"));
ProtoBody146.addChild(&Script170);

ROUTE& ROUTE184 =  ROUTE();
ROUTE184.setFromNode(CString("P_1"));
ROUTE184.setFromField(CString("intensity_changed"));
ROUTE184.setToNode(CString("N_1"));
ROUTE184.setToField(CString("set_intensity"));
ProtoBody146.addChild(&ROUTE184);

ROUTE& ROUTE185 =  ROUTE();
ROUTE185.setFromNode(CString("P_1"));
ROUTE185.setFromField(CString("intensity_changed"));
ROUTE185.setToNode(CString("O_1"));
ROUTE185.setToField(CString("set_intensity"));
ProtoBody146.addChild(&ROUTE185);

ProtoDeclare124.addChild(&ProtoBody146);

Scene7.addChild(&ProtoDeclare124);

ProtoDeclare& ProtoDeclare186 =  ProtoDeclare();
ProtoDeclare186.setName(CString("Q"));
ProtoInterface& ProtoInterface187 =  ProtoInterface();
field& field188 =  field();
field188.setName(CString("R"));
field188.setAccessType(CString("inputOnly"));
field188.setType(CString("SFTime"));
ProtoInterface187.addChild(&field188);

field& field189 =  field();
field189.setName(CString("S"));
field189.setAccessType(CString("inputOnly"));
field189.setType(CString("SFTime"));
ProtoInterface187.addChild(&field189);

field& field190 =  field();
field190.setName(CString("set_fraction"));
field190.setAccessType(CString("inputOnly"));
field190.setType(CString("SFFloat"));
ProtoInterface187.addChild(&field190);

field& field191 =  field();
field191.setName(CString("R_changed"));
field191.setAccessType(CString("outputOnly"));
field191.setType(CString("SFTime"));
ProtoInterface187.addChild(&field191);

field& field192 =  field();
field192.setName(CString("translation"));
field192.setAccessType(CString("inputOutput"));
field192.setType(CString("SFVec3f"));
ProtoInterface187.addChild(&field192);

field& field193 =  field();
field193.setName(CString("scale"));
field193.setAccessType(CString("inputOutput"));
field193.setType(CString("SFVec3f"));
field193.setValue(CString("1 1 1"));
ProtoInterface187.addChild(&field193);

field& field194 =  field();
field194.setName(CString("center"));
field194.setAccessType(CString("inputOutput"));
field194.setType(CString("SFVec3f"));
ProtoInterface187.addChild(&field194);

field& field195 =  field();
field195.setName(CString("T"));
field195.setAccessType(CString("inputOutput"));
field195.setType(CString("SFBool"));
field195.setValue(CString("true"));
ProtoInterface187.addChild(&field195);

field& field196 =  field();
field196.setName(CString("rotation"));
field196.setAccessType(CString("inputOutput"));
field196.setType(CString("SFRotation"));
ProtoInterface187.addChild(&field196);

field& field197 =  field();
field197.setName(CString("scaleOrientation"));
field197.setAccessType(CString("inputOutput"));
field197.setType(CString("SFRotation"));
ProtoInterface187.addChild(&field197);

field& field198 =  field();
field198.setName(CString("U"));
field198.setAccessType(CString("initializeOnly"));
field198.setType(CString("SFNode"));
ProtoInterface187.addChild(&field198);

field& field199 =  field();
field199.setName(CString("children"));
field199.setAccessType(CString("initializeOnly"));
field199.setType(CString("MFNode"));
ProtoInterface187.addChild(&field199);

field& field200 =  field();
field200.setName(CString("V"));
field200.setAccessType(CString("initializeOnly"));
field200.setType(CString("SFBool"));
ProtoInterface187.addChild(&field200);

field& field201 =  field();
field201.setName(CString("W"));
field201.setAccessType(CString("initializeOnly"));
field201.setType(CString("SFInt32"));
ProtoInterface187.addChild(&field201);

ProtoDeclare186.addChild(&ProtoInterface187);

ProtoBody& ProtoBody202 =  ProtoBody();
Transform& Transform203 =  Transform();
Transform203.setDEF(CString("X_1"));
IS& IS204 =  IS();
Connect& connect205 =  Connect();
connect205.setNodeField(CString("translation"));
connect205.setProtoField(CString("translation"));
IS204.addChild(&connect205);

Connect& connect206 =  Connect();
connect206.setNodeField(CString("rotation"));
connect206.setProtoField(CString("rotation"));
IS204.addChild(&connect206);

Connect& connect207 =  Connect();
connect207.setNodeField(CString("scale"));
connect207.setProtoField(CString("scale"));
IS204.addChild(&connect207);

Connect& connect208 =  Connect();
connect208.setNodeField(CString("scaleOrientation"));
connect208.setProtoField(CString("scaleOrientation"));
IS204.addChild(&connect208);

Connect& connect209 =  Connect();
connect209.setNodeField(CString("center"));
connect209.setProtoField(CString("center"));
IS204.addChild(&connect209);

Connect& connect210 =  Connect();
connect210.setNodeField(CString("children"));
connect210.setProtoField(CString("children"));
IS204.addChild(&connect210);

Transform203.addChild(&IS204);

ProtoBody202.addChild(&Transform203);

Script& Script211 =  Script();
Script211.setDEF(CString("Y_1"));
Script211.setDirectOutput(true);
field& field212 =  field();
field212.setName(CString("R"));
field212.setAccessType(CString("inputOnly"));
field212.setType(CString("SFTime"));
Script211.addChild(&field212);

field& field213 =  field();
field213.setName(CString("S"));
field213.setAccessType(CString("inputOnly"));
field213.setType(CString("SFTime"));
Script211.addChild(&field213);

field& field214 =  field();
field214.setName(CString("set_fraction"));
field214.setAccessType(CString("inputOnly"));
field214.setType(CString("SFFloat"));
Script211.addChild(&field214);

field& field215 =  field();
field215.setName(CString("R_changed"));
field215.setAccessType(CString("outputOnly"));
field215.setType(CString("SFTime"));
Script211.addChild(&field215);

field& field216 =  field();
field216.setName(CString("Z_changed"));
field216.setAccessType(CString("outputOnly"));
field216.setType(CString("SFRotation"));
Script211.addChild(&field216);

field& field217 =  field();
field217.setName(CString("U"));
field217.setAccessType(CString("initializeOnly"));
field217.setType(CString("SFNode"));
Script211.addChild(&field217);

field& field218 =  field();
field218.setName(CString("V"));
field218.setAccessType(CString("initializeOnly"));
field218.setType(CString("SFBool"));
Script211.addChild(&field218);

field& field219 =  field();
field219.setName(CString("W"));
field219.setAccessType(CString("initializeOnly"));
field219.setType(CString("SFInt32"));
Script211.addChild(&field219);

field& field220 =  field();
field220.setName(CString("aa"));
field220.setAccessType(CString("initializeOnly"));
field220.setType(CString("SFBool"));
Script211.addChild(&field220);

field& field221 =  field();
field221.setName(CString("Z"));
field221.setAccessType(CString("initializeOnly"));
field221.setType(CString("SFRotation"));
Script211.addChild(&field221);

field& field222 =  field();
field222.setName(CString("ba"));
field222.setAccessType(CString("initializeOnly"));
field222.setType(CString("SFFloat"));
Script211.addChild(&field222);

field& field223 =  field();
field223.setName(CString("ca"));
field223.setAccessType(CString("initializeOnly"));
field223.setType(CString("SFFloat"));
Script211.addChild(&field223);

field& field224 =  field();
field224.setName(CString("da"));
field224.setAccessType(CString("initializeOnly"));
field224.setType(CString("SFBool"));
field224.setValue(CString("true"));
Script211.addChild(&field224);

field& field225 =  field();
field225.setName(CString("ea"));
field225.setAccessType(CString("initializeOnly"));
field225.setType(CString("SFTime"));
Script211.addChild(&field225);

field& field226 =  field();
field226.setName(CString("fa"));
field226.setAccessType(CString("initializeOnly"));
field226.setType(CString("SFTime"));
Script211.addChild(&field226);

IS& IS227 =  IS();
Connect& connect228 =  Connect();
connect228.setNodeField(CString("R"));
connect228.setProtoField(CString("R"));
IS227.addChild(&connect228);

Connect& connect229 =  Connect();
connect229.setNodeField(CString("S"));
connect229.setProtoField(CString("S"));
IS227.addChild(&connect229);

Connect& connect230 =  Connect();
connect230.setNodeField(CString("set_fraction"));
connect230.setProtoField(CString("set_fraction"));
IS227.addChild(&connect230);

Connect& connect231 =  Connect();
connect231.setNodeField(CString("R_changed"));
connect231.setProtoField(CString("R_changed"));
IS227.addChild(&connect231);

Connect& connect232 =  Connect();
connect232.setNodeField(CString("U"));
connect232.setProtoField(CString("U"));
IS227.addChild(&connect232);

Connect& connect233 =  Connect();
connect233.setNodeField(CString("V"));
connect233.setProtoField(CString("V"));
IS227.addChild(&connect233);

Connect& connect234 =  Connect();
connect234.setNodeField(CString("W"));
connect234.setProtoField(CString("W"));
IS227.addChild(&connect234);

Script211.addChild(&IS227);


//Script211.setSourceCode(CString("javascript:")+
//_T("function initialize(){")+
//_T("aa=FALSE;")+
//_T("if(W==0){")+
//_T("Z[0]=1.;")+
//_T("Z[1]=0.;")+
//_T("Z[2]=0.;")+
//_T("return;")+
//_T("}")+
//_T("if(W==1){")+
//_T("Z[0]=0.;")+
//_T("Z[1]=1.;")+
//_T("Z[2]=0.;")+
//_T("return;")+
//_T("}")+
//_T("if(W==2){")+
//_T("Z[0]=0.;")+
//_T("Z[1]=0.;")+
//_T("Z[2]=1.;")+
//_T("return;")+
//_T("}")+
//_T("}")+
//_T("function R(n){")+
//_T("if(fa==n){")+
//_T("return;")+
//_T("}")+
//_T("if(aa==TRUE){")+
//_T("ea=n;")+
//_T("return;")+
//_T("}")+
//_T("aa=TRUE;")+
//_T("da=TRUE;")+
//_T("R_changed=n;")+
//_T("fa=n;")+
//_T("}")+
//_T("function S(n){")+
//_T("aa=FALSE;")+
//_T("if(ea==n){")+
//_T("R(n);")+
//_T("}")+
//_T("}")+
//_T("function set_fraction(n){")+
//_T("if(da){")+
//_T("ba=n;")+
//_T("da=FALSE;")+
//_T("}else if(n<ca){")+
//_T("ba=(1.0-ca)+n;")+
//_T("}else{")+
//_T("ba=n-ca;")+
//_T("}")+
//_T("ca=n;")+
//_T("if(V==TRUE)Z[3]-=2.*Math.PI*ba;")+
//_T("else Z[3]+=2.*Math.PI*ba;")+
//_T("Z_changed=Z;")+
//_T("}"));
ProtoBody202.addChild(&Script211);

ROUTE& ROUTE235 =  ROUTE();
ROUTE235.setFromNode(CString("Y_1"));
ROUTE235.setFromField(CString("Z_changed"));
ROUTE235.setToNode(CString("X_1"));
ROUTE235.setToField(CString("set_rotation"));
ProtoBody202.addChild(&ROUTE235);

ProtoDeclare186.addChild(&ProtoBody202);

Scene7.addChild(&ProtoDeclare186);

ProtoDeclare& ProtoDeclare236 =  ProtoDeclare();
ProtoDeclare236.setName(CString("ga"));
ProtoInterface& ProtoInterface237 =  ProtoInterface();
field& field238 =  field();
field238.setName(CString("set_p"));
field238.setAccessType(CString("inputOnly"));
field238.setType(CString("SFBool"));
ProtoInterface237.addChild(&field238);

field& field239 =  field();
field239.setName(CString("w"));
field239.setAccessType(CString("inputOnly"));
field239.setType(CString("SFBool"));
ProtoInterface237.addChild(&field239);

field& field240 =  field();
field240.setName(CString("set_v"));
field240.setAccessType(CString("inputOnly"));
field240.setType(CString("SFNode"));
ProtoInterface237.addChild(&field240);

field& field241 =  field();
field241.setName(CString("p_changed"));
field241.setAccessType(CString("outputOnly"));
field241.setType(CString("SFBool"));
ProtoInterface237.addChild(&field241);

field& field242 =  field();
field242.setName(CString("v_changed"));
field242.setAccessType(CString("outputOnly"));
field242.setType(CString("SFNode"));
ProtoInterface237.addChild(&field242);

field& field243 =  field();
field243.setName(CString("url"));
field243.setAccessType(CString("inputOutput"));
field243.setType(CString("MFString"));
ProtoInterface237.addChild(&field243);

field& field244 =  field();
field244.setName(CString("transparency"));
field244.setAccessType(CString("inputOutput"));
field244.setType(CString("SFFloat"));
ProtoInterface237.addChild(&field244);

field& field245 =  field();
field245.setName(CString("diffuseColor"));
field245.setAccessType(CString("inputOutput"));
field245.setType(CString("SFColor"));
field245.setValue(CString("0 0.48 0.8"));
ProtoInterface237.addChild(&field245);

field& field246 =  field();
field246.setName(CString("emissiveColor"));
field246.setAccessType(CString("inputOutput"));
field246.setType(CString("SFColor"));
field246.setValue(CString("0 0.09 0.15"));
ProtoInterface237.addChild(&field246);

field& field247 =  field();
field247.setName(CString("specularColor"));
field247.setAccessType(CString("inputOutput"));
field247.setType(CString("SFColor"));
field247.setValue(CString("0.5 0.5 0.5"));
ProtoInterface237.addChild(&field247);

field& field248 =  field();
field248.setName(CString("shininess"));
field248.setAccessType(CString("inputOutput"));
field248.setType(CString("SFFloat"));
field248.setValue(CString("0.2"));
ProtoInterface237.addChild(&field248);

field& field249 =  field();
field249.setName(CString("q"));
field249.setAccessType(CString("inputOutput"));
field249.setType(CString("SFVec2f"));
field249.setValue(CString("-0.5 -0.5"));
ProtoInterface237.addChild(&field249);

field& field250 =  field();
field250.setName(CString("s"));
field250.setAccessType(CString("inputOutput"));
field250.setType(CString("SFFloat"));
ProtoInterface237.addChild(&field250);

field& field251 =  field();
field251.setName(CString("t"));
field251.setAccessType(CString("inputOutput"));
field251.setType(CString("SFVec2f"));
field251.setValue(CString("1 1"));
ProtoInterface237.addChild(&field251);

field& field252 =  field();
field252.setName(CString("u"));
field252.setAccessType(CString("inputOutput"));
field252.setType(CString("SFVec2f"));
ProtoInterface237.addChild(&field252);

field& field253 =  field();
field253.setName(CString("B"));
field253.setAccessType(CString("inputOutput"));
field253.setType(CString("SFNode"));
ProtoInterface237.addChild(&field253);

field& field254 =  field();
field254.setName(CString("C"));
field254.setAccessType(CString("inputOutput"));
field254.setType(CString("MFNode"));
ProtoInterface237.addChild(&field254);

field& field255 =  field();
field255.setName(CString("D"));
field255.setAccessType(CString("inputOutput"));
field255.setType(CString("SFNode"));
ProtoInterface237.addChild(&field255);

field& field256 =  field();
field256.setName(CString("F"));
field256.setAccessType(CString("inputOutput"));
field256.setType(CString("SFInt32"));
field256.setValue(CString("-1"));
ProtoInterface237.addChild(&field256);

field& field257 =  field();
field257.setName(CString("p"));
field257.setAccessType(CString("initializeOnly"));
field257.setType(CString("SFBool"));
field257.setValue(CString("true"));
ProtoInterface237.addChild(&field257);

field& field258 =  field();
field258.setName(CString("geometry"));
field258.setAccessType(CString("initializeOnly"));
field258.setType(CString("SFNode"));
ProtoInterface237.addChild(&field258);

field& field259 =  field();
field259.setName(CString("choice"));
field259.setAccessType(CString("initializeOnly"));
field259.setType(CString("SFInt32"));
ProtoInterface237.addChild(&field259);

field& field260 =  field();
field260.setName(CString("ha"));
field260.setAccessType(CString("initializeOnly"));
field260.setType(CString("SFVec3f"));
field260.setValue(CString("0 0 0.5"));
ProtoInterface237.addChild(&field260);

ProtoDeclare236.addChild(&ProtoInterface237);

ProtoBody& ProtoBody261 =  ProtoBody();
Switch& Switch262 =  Switch();
Switch262.setDEF(CString("ia_1"));
Switch262.setWhichChoice(-1);
IS& IS263 =  IS();
Connect& connect264 =  Connect();
connect264.setNodeField(CString("whichChoice"));
connect264.setProtoField(CString("choice"));
IS263.addChild(&connect264);

Switch262.addChild(&IS263);

Shape& Shape265 =  Shape();
IS& IS266 =  IS();
Connect& connect267 =  Connect();
connect267.setNodeField(CString("geometry"));
connect267.setProtoField(CString("geometry"));
IS266.addChild(&connect267);

Shape265.addChild(&IS266);

Appearance& Appearance268 =  Appearance();
Appearance268.setDEF(CString("ja_1"));
Material& Material269 =  Material();
IS& IS270 =  IS();
Connect& connect271 =  Connect();
connect271.setNodeField(CString("diffuseColor"));
connect271.setProtoField(CString("diffuseColor"));
IS270.addChild(&connect271);

Connect& connect272 =  Connect();
connect272.setNodeField(CString("specularColor"));
connect272.setProtoField(CString("specularColor"));
IS270.addChild(&connect272);

Connect& connect273 =  Connect();
connect273.setNodeField(CString("emissiveColor"));
connect273.setProtoField(CString("emissiveColor"));
IS270.addChild(&connect273);

Connect& connect274 =  Connect();
connect274.setNodeField(CString("shininess"));
connect274.setProtoField(CString("shininess"));
IS270.addChild(&connect274);

Connect& connect275 =  Connect();
connect275.setNodeField(CString("transparency"));
connect275.setProtoField(CString("transparency"));
IS270.addChild(&connect275);

Material269.addChild(&IS270);

Appearance268.addChild(&Material269);

ImageTexture& ImageTexture276 =  ImageTexture();
IS& IS277 =  IS();
Connect& connect278 =  Connect();
connect278.setNodeField(CString("url"));
connect278.setProtoField(CString("url"));
IS277.addChild(&connect278);

ImageTexture276.addChild(&IS277);

Appearance268.addChild(&ImageTexture276);

TextureTransform& TextureTransform279 =  TextureTransform();
IS& IS280 =  IS();
Connect& connect281 =  Connect();
connect281.setNodeField(CString("translation"));
connect281.setProtoField(CString("u"));
IS280.addChild(&connect281);

Connect& connect282 =  Connect();
connect282.setNodeField(CString("rotation"));
connect282.setProtoField(CString("s"));
IS280.addChild(&connect282);

Connect& connect283 =  Connect();
connect283.setNodeField(CString("scale"));
connect283.setProtoField(CString("t"));
IS280.addChild(&connect283);

Connect& connect284 =  Connect();
connect284.setNodeField(CString("center"));
connect284.setProtoField(CString("q"));
IS280.addChild(&connect284);

TextureTransform279.addChild(&IS280);

Appearance268.setTextureTransform(TextureTransform279);

Shape265.addChild(&Appearance268);

Switch262.addChild(&Shape265);

ProtoBody261.addChild(&Switch262);

Script& Script285 =  Script();
Script285.setDEF(CString("ka"));
Script285.setDirectOutput(true);
field& field286 =  field();
field286.setName(CString("set_p"));
field286.setAccessType(CString("inputOnly"));
field286.setType(CString("SFBool"));
Script285.addChild(&field286);

field& field287 =  field();
field287.setName(CString("w"));
field287.setAccessType(CString("inputOnly"));
field287.setType(CString("SFBool"));
Script285.addChild(&field287);

field& field288 =  field();
field288.setName(CString("set_v"));
field288.setAccessType(CString("inputOnly"));
field288.setType(CString("SFNode"));
Script285.addChild(&field288);

field& field289 =  field();
field289.setName(CString("p_changed"));
field289.setAccessType(CString("outputOnly"));
field289.setType(CString("SFBool"));
Script285.addChild(&field289);

field& field290 =  field();
field290.setName(CString("v_changed"));
field290.setAccessType(CString("outputOnly"));
field290.setType(CString("SFNode"));
Script285.addChild(&field290);

field& field291 =  field();
field291.setName(CString("p"));
field291.setAccessType(CString("initializeOnly"));
field291.setType(CString("SFBool"));
Script285.addChild(&field291);

field& field292 =  field();
field292.setName(CString("la"));
field292.setAccessType(CString("initializeOnly"));
field292.setType(CString("SFNode"));
Appearance& Appearance293 =  Appearance();
Appearance293.setUSE(CString("ja_1"));
field292.addChild(&Appearance293);

Script285.addChild(&field292);

field& field294 =  field();
field294.setName(CString("ma"));
field294.setAccessType(CString("initializeOnly"));
field294.setType(CString("SFNode"));
Switch& Switch295 =  Switch();
Switch295.setUSE(CString("ia_1"));
field294.addChild(Switch295);

Script285.addChild(&field294);

IS& IS296 =  IS();
Connect& connect297 =  Connect();
connect297.setNodeField(CString("set_p"));
connect297.setProtoField(CString("set_p"));
IS296.addChild(&connect297);

Connect& connect298 =  Connect();
connect298.setNodeField(CString("w"));
connect298.setProtoField(CString("w"));
IS296.addChild(&connect298);

Connect& connect299 =  Connect();
connect299.setNodeField(CString("set_v"));
connect299.setProtoField(CString("set_v"));
IS296.addChild(&connect299);

Connect& connect300 =  Connect();
connect300.setNodeField(CString("p_changed"));
connect300.setProtoField(CString("p_changed"));
IS296.addChild(&connect300);

Connect& connect301 =  Connect();
connect301.setNodeField(CString("v_changed"));
connect301.setProtoField(CString("v_changed"));
IS296.addChild(&connect301);

Connect& connect302 =  Connect();
connect302.setNodeField(CString("p"));
connect302.setProtoField(CString("p"));
IS296.addChild(&connect302);

Script285.addChild(&IS296);


//Script285.setSourceCode(CString("javascript:")+
//_T("function set_p(n){")+
//_T("if(n==TRUE){")+
//_T("ma.whichChoice=0;")+
//_T("}else{")+
//_T("ma.whichChoice=-1;")+
//_T("}")+
//_T("p=n;")+
//_T("p_changed=n;")+
//_T("}")+
//_T("function initialize(){")+
//_T("v_changed=la.texture_changed;")+
//_T("set_p(p);")+
//_T("}")+
//_T("function set_v(n){")+
//_T("la.set_texture=n;")+
//_T("v_changed=n;")+
//_T("}")+
//_T("function w(){")+
//_T("}"));
ProtoBody261.addChild(&Script285);

ProtoDeclare236.addChild(&ProtoBody261);

Scene7.addChild(&ProtoDeclare236);

ProtoDeclare& ProtoDeclare303 =  ProtoDeclare();
ProtoDeclare303.setName(CString("na"));
ProtoInterface& ProtoInterface304 =  ProtoInterface();
field& field305 =  field();
field305.setName(CString("set_enabled"));
field305.setAccessType(CString("inputOnly"));
field305.setType(CString("SFBool"));
ProtoInterface304.addChild(&field305);

field& field306 =  field();
field306.setName(CString("isOver"));
field306.setAccessType(CString("outputOnly"));
field306.setType(CString("SFBool"));
ProtoInterface304.addChild(&field306);

field& field307 =  field();
field307.setName(CString("isActive"));
field307.setAccessType(CString("outputOnly"));
field307.setType(CString("SFBool"));
ProtoInterface304.addChild(&field307);

field& field308 =  field();
field308.setName(CString("hitPoint_changed"));
field308.setAccessType(CString("outputOnly"));
field308.setType(CString("SFVec3f"));
ProtoInterface304.addChild(&field308);

field& field309 =  field();
field309.setName(CString("hitTexCoord_changed"));
field309.setAccessType(CString("outputOnly"));
field309.setType(CString("SFVec2f"));
ProtoInterface304.addChild(&field309);

field& field310 =  field();
field310.setName(CString("oa"));
field310.setAccessType(CString("initializeOnly"));
field310.setType(CString("SFInt32"));
ProtoInterface304.addChild(&field310);

ProtoDeclare303.addChild(&ProtoInterface304);

ProtoBody& ProtoBody311 =  ProtoBody();
TouchSensor& TouchSensor312 =  TouchSensor();
TouchSensor312.setDEF(CString("pa_1"));
TouchSensor312.setEnabled(false);
IS& IS313 =  IS();
Connect& connect314 =  Connect();
connect314.setNodeField(CString("hitTexCoord_changed"));
connect314.setProtoField(CString("hitTexCoord_changed"));
IS313.addChild(&connect314);

Connect& connect315 =  Connect();
connect315.setNodeField(CString("hitPoint_changed"));
connect315.setProtoField(CString("hitPoint_changed"));
IS313.addChild(&connect315);

Connect& connect316 =  Connect();
connect316.setNodeField(CString("isOver"));
connect316.setProtoField(CString("isOver"));
IS313.addChild(&connect316);

Connect& connect317 =  Connect();
connect317.setNodeField(CString("isActive"));
connect317.setProtoField(CString("isActive"));
IS313.addChild(&connect317);

TouchSensor312.addChild(&IS313);

ProtoBody311.addChild(&TouchSensor312);

Script& Script318 =  Script();
Script318.setDEF(CString("qa_1"));
Script318.setDirectOutput(true);
field& field319 =  field();
field319.setName(CString("set_enabled"));
field319.setAccessType(CString("inputOnly"));
field319.setType(CString("SFBool"));
Script318.addChild(&field319);

field& field320 =  field();
field320.setName(CString("enabled_changed"));
field320.setAccessType(CString("outputOnly"));
field320.setType(CString("SFBool"));
Script318.addChild(&field320);

field& field321 =  field();
field321.setName(CString("oa"));
field321.setAccessType(CString("initializeOnly"));
field321.setType(CString("SFInt32"));
Script318.addChild(&field321);

IS& IS322 =  IS();
Connect& connect323 =  Connect();
connect323.setNodeField(CString("set_enabled"));
connect323.setProtoField(CString("set_enabled"));
IS322.addChild(&connect323);

Connect& connect324 =  Connect();
connect324.setNodeField(CString("oa"));
connect324.setProtoField(CString("oa"));
IS322.addChild(&connect324);

Script318.addChild(&IS322);


//Script318.setSourceCode(CString("javascript:")+
//_T("function initialize(){")+
//_T("if(oa>0){")+
//_T("enabled_changed=TRUE;")+
//_T("}")+
//_T("}")+
//_T("function set_enabled(n){")+
//_T("if(n==TRUE){")+
//_T("if(oa==0){")+
//_T("enabled_changed=TRUE;")+
//_T("}")+
//_T("oa++;")+
//_T("}else{")+
//_T("if(oa==1){")+
//_T("enabled_changed=FALSE;")+
//_T("}")+
//_T("if(oa>0){")+
//_T("oa--;")+
//_T("}")+
//_T("}")+
//_T("}"));
ProtoBody311.addChild(&Script318);

ROUTE& ROUTE325 =  ROUTE();
ROUTE325.setFromNode(CString("qa_1"));
ROUTE325.setFromField(CString("enabled_changed"));
ROUTE325.setToNode(CString("pa_1"));
ROUTE325.setToField(CString("set_enabled"));
ProtoBody311.addChild(&ROUTE325);

ProtoDeclare303.addChild(&ProtoBody311);

Scene7.addChild(&ProtoDeclare303);

ProtoDeclare& ProtoDeclare326 =  ProtoDeclare();
ProtoDeclare326.setName(CString("ra"));
ProtoInterface& ProtoInterface327 =  ProtoInterface();
field& field328 =  field();
field328.setName(CString("R"));
field328.setAccessType(CString("inputOnly"));
field328.setType(CString("SFTime"));
ProtoInterface327.addChild(&field328);

field& field329 =  field();
field329.setName(CString("S"));
field329.setAccessType(CString("inputOnly"));
field329.setType(CString("SFTime"));
ProtoInterface327.addChild(&field329);

field& field330 =  field();
field330.setName(CString("sa"));
field330.setAccessType(CString("inputOnly"));
field330.setType(CString("SFTime"));
ProtoInterface327.addChild(&field330);

field& field331 =  field();
field331.setName(CString("ta"));
field331.setAccessType(CString("inputOnly"));
field331.setType(CString("SFTime"));
ProtoInterface327.addChild(&field331);

field& field332 =  field();
field332.setName(CString("fraction"));
field332.setAccessType(CString("outputOnly"));
field332.setType(CString("SFFloat"));
ProtoInterface327.addChild(&field332);

field& field333 =  field();
field333.setName(CString("ua"));
field333.setAccessType(CString("outputOnly"));
field333.setType(CString("SFFloat"));
ProtoInterface327.addChild(&field333);

field& field334 =  field();
field334.setName(CString("va"));
field334.setAccessType(CString("outputOnly"));
field334.setType(CString("SFFloat"));
ProtoInterface327.addChild(&field334);

field& field335 =  field();
field335.setName(CString("wa_changed"));
field335.setAccessType(CString("outputOnly"));
field335.setType(CString("SFTime"));
ProtoInterface327.addChild(&field335);

field& field336 =  field();
field336.setName(CString("xa_changed"));
field336.setAccessType(CString("outputOnly"));
field336.setType(CString("SFTime"));
ProtoInterface327.addChild(&field336);

field& field337 =  field();
field337.setName(CString("ya_changed"));
field337.setAccessType(CString("outputOnly"));
field337.setType(CString("SFVec2f"));
ProtoInterface327.addChild(&field337);

field& field338 =  field();
field338.setName(CString("startTime"));
field338.setAccessType(CString("outputOnly"));
field338.setType(CString("SFTime"));
ProtoInterface327.addChild(&field338);

field& field339 =  field();
field339.setName(CString("stopTime"));
field339.setAccessType(CString("outputOnly"));
field339.setType(CString("SFTime"));
ProtoInterface327.addChild(&field339);

field& field340 =  field();
field340.setName(CString("za"));
field340.setAccessType(CString("outputOnly"));
field340.setType(CString("SFTime"));
ProtoInterface327.addChild(&field340);

field& field341 =  field();
field341.setName(CString("Aa"));
field341.setAccessType(CString("outputOnly"));
field341.setType(CString("SFTime"));
ProtoInterface327.addChild(&field341);

field& field342 =  field();
field342.setName(CString("Ba"));
field342.setAccessType(CString("outputOnly"));
field342.setType(CString("SFTime"));
ProtoInterface327.addChild(&field342);

field& field343 =  field();
field343.setName(CString("cycleInterval"));
field343.setAccessType(CString("initializeOnly"));
field343.setType(CString("SFTime"));
field343.setValue(CString("2"));
ProtoInterface327.addChild(&field343);

field& field344 =  field();
field344.setName(CString("Ca"));
field344.setAccessType(CString("initializeOnly"));
field344.setType(CString("SFTime"));
ProtoInterface327.addChild(&field344);

field& field345 =  field();
field345.setName(CString("Da"));
field345.setAccessType(CString("initializeOnly"));
field345.setType(CString("SFBool"));
field345.setValue(CString("true"));
ProtoInterface327.addChild(&field345);

field& field346 =  field();
field346.setName(CString("xa"));
field346.setAccessType(CString("initializeOnly"));
field346.setType(CString("SFTime"));
field346.setValue(CString("5"));
ProtoInterface327.addChild(&field346);

field& field347 =  field();
field347.setName(CString("Ea"));
field347.setAccessType(CString("initializeOnly"));
field347.setType(CString("SFTime"));
ProtoInterface327.addChild(&field347);

field& field348 =  field();
field348.setName(CString("Fa"));
field348.setAccessType(CString("initializeOnly"));
field348.setType(CString("SFTime"));
ProtoInterface327.addChild(&field348);

field& field349 =  field();
field349.setName(CString("Ga"));
field349.setAccessType(CString("initializeOnly"));
field349.setType(CString("SFTime"));
ProtoInterface327.addChild(&field349);

field& field350 =  field();
field350.setName(CString("Ha"));
field350.setAccessType(CString("initializeOnly"));
field350.setType(CString("SFBool"));
ProtoInterface327.addChild(&field350);

field& field351 =  field();
field351.setName(CString("direction"));
field351.setAccessType(CString("initializeOnly"));
field351.setType(CString("SFInt32"));
ProtoInterface327.addChild(&field351);

field& field352 =  field();
field352.setName(CString("loop"));
field352.setAccessType(CString("initializeOnly"));
field352.setType(CString("SFBool"));
field352.setValue(CString("true"));
ProtoInterface327.addChild(&field352);

field& field353 =  field();
field353.setName(CString("Ia"));
field353.setAccessType(CString("initializeOnly"));
field353.setType(CString("SFBool"));
ProtoInterface327.addChild(&field353);

field& field354 =  field();
field354.setName(CString("Ja"));
field354.setAccessType(CString("initializeOnly"));
field354.setType(CString("SFBool"));
field354.setValue(CString("true"));
ProtoInterface327.addChild(&field354);

field& field355 =  field();
field355.setName(CString("Ka"));
field355.setAccessType(CString("initializeOnly"));
field355.setType(CString("SFBool"));
ProtoInterface327.addChild(&field355);

ProtoDeclare326.addChild(&ProtoInterface327);

ProtoBody& ProtoBody356 =  ProtoBody();
TimeSensor& TimeSensor357 =  TimeSensor();
TimeSensor357.setDEF(CString("La_1"));
TimeSensor357.setEnabled(false);
TimeSensor357.setLoop(true);
TimeSensor357.setStartTime(1);
IS& IS358 =  IS();
Connect& connect359 =  Connect();
connect359.setNodeField(CString("cycleInterval"));
connect359.setProtoField(CString("cycleInterval"));
IS358.addChild(&connect359);

TimeSensor357.addChild(&IS358);

ProtoBody356.addChild(&TimeSensor357);

Script& Script360 =  Script();
Script360.setDEF(CString("Ma_1"));
Script360.setDirectOutput(true);
field& field361 =  field();
field361.setName(CString("R"));
field361.setAccessType(CString("inputOnly"));
field361.setType(CString("SFTime"));
Script360.addChild(&field361);

field& field362 =  field();
field362.setName(CString("S"));
field362.setAccessType(CString("inputOnly"));
field362.setType(CString("SFTime"));
Script360.addChild(&field362);

field& field363 =  field();
field363.setName(CString("set_fraction"));
field363.setAccessType(CString("inputOnly"));
field363.setType(CString("SFFloat"));
Script360.addChild(&field363);

field& field364 =  field();
field364.setName(CString("sa"));
field364.setAccessType(CString("inputOnly"));
field364.setType(CString("SFTime"));
Script360.addChild(&field364);

field& field365 =  field();
field365.setName(CString("ta"));
field365.setAccessType(CString("inputOnly"));
field365.setType(CString("SFTime"));
Script360.addChild(&field365);

field& field366 =  field();
field366.setName(CString("fraction"));
field366.setAccessType(CString("outputOnly"));
field366.setType(CString("SFFloat"));
Script360.addChild(&field366);

field& field367 =  field();
field367.setName(CString("ua"));
field367.setAccessType(CString("outputOnly"));
field367.setType(CString("SFFloat"));
Script360.addChild(&field367);

field& field368 =  field();
field368.setName(CString("va"));
field368.setAccessType(CString("outputOnly"));
field368.setType(CString("SFFloat"));
Script360.addChild(&field368);

field& field369 =  field();
field369.setName(CString("wa_changed"));
field369.setAccessType(CString("outputOnly"));
field369.setType(CString("SFTime"));
Script360.addChild(&field369);

field& field370 =  field();
field370.setName(CString("xa_changed"));
field370.setAccessType(CString("outputOnly"));
field370.setType(CString("SFTime"));
Script360.addChild(&field370);

field& field371 =  field();
field371.setName(CString("ya_changed"));
field371.setAccessType(CString("outputOnly"));
field371.setType(CString("SFVec2f"));
Script360.addChild(&field371);

field& field372 =  field();
field372.setName(CString("startTime"));
field372.setAccessType(CString("outputOnly"));
field372.setType(CString("SFTime"));
Script360.addChild(&field372);

field& field373 =  field();
field373.setName(CString("stopTime"));
field373.setAccessType(CString("outputOnly"));
field373.setType(CString("SFTime"));
Script360.addChild(&field373);

field& field374 =  field();
field374.setName(CString("za"));
field374.setAccessType(CString("outputOnly"));
field374.setType(CString("SFTime"));
Script360.addChild(&field374);

field& field375 =  field();
field375.setName(CString("Aa"));
field375.setAccessType(CString("outputOnly"));
field375.setType(CString("SFTime"));
Script360.addChild(&field375);

field& field376 =  field();
field376.setName(CString("cycleInterval_changed"));
field376.setAccessType(CString("outputOnly"));
field376.setType(CString("SFTime"));
Script360.addChild(&field376);

field& field377 =  field();
field377.setName(CString("Na"));
field377.setAccessType(CString("outputOnly"));
field377.setType(CString("SFBool"));
Script360.addChild(&field377);

field& field378 =  field();
field378.setName(CString("Oa"));
field378.setAccessType(CString("outputOnly"));
field378.setType(CString("SFTime"));
Script360.addChild(&field378);

field& field379 =  field();
field379.setName(CString("Pa"));
field379.setAccessType(CString("outputOnly"));
field379.setType(CString("SFTime"));
Script360.addChild(&field379);

field& field380 =  field();
field380.setName(CString("Ba"));
field380.setAccessType(CString("outputOnly"));
field380.setType(CString("SFTime"));
Script360.addChild(&field380);

field& field381 =  field();
field381.setName(CString("da"));
field381.setAccessType(CString("initializeOnly"));
field381.setType(CString("SFBool"));
field381.setValue(CString("true"));
Script360.addChild(&field381);

field& field382 =  field();
field382.setName(CString("Qa"));
field382.setAccessType(CString("initializeOnly"));
field382.setType(CString("SFFloat"));
Script360.addChild(&field382);

field& field383 =  field();
field383.setName(CString("Ra"));
field383.setAccessType(CString("initializeOnly"));
field383.setType(CString("SFTime"));
Script360.addChild(&field383);

field& field384 =  field();
field384.setName(CString("direction"));
field384.setAccessType(CString("initializeOnly"));
field384.setType(CString("SFInt32"));
Script360.addChild(&field384);

field& field385 =  field();
field385.setName(CString("Sa"));
field385.setAccessType(CString("initializeOnly"));
field385.setType(CString("SFFloat"));
Script360.addChild(&field385);

field& field386 =  field();
field386.setName(CString("Ja"));
field386.setAccessType(CString("initializeOnly"));
field386.setType(CString("SFBool"));
Script360.addChild(&field386);

field& field387 =  field();
field387.setName(CString("loop"));
field387.setAccessType(CString("initializeOnly"));
field387.setType(CString("SFBool"));
Script360.addChild(&field387);

field& field388 =  field();
field388.setName(CString("Ia"));
field388.setAccessType(CString("initializeOnly"));
field388.setType(CString("SFBool"));
Script360.addChild(&field388);

field& field389 =  field();
field389.setName(CString("cycleInterval"));
field389.setAccessType(CString("initializeOnly"));
field389.setType(CString("SFTime"));
Script360.addChild(&field389);

field& field390 =  field();
field390.setName(CString("Ca"));
field390.setAccessType(CString("initializeOnly"));
field390.setType(CString("SFTime"));
Script360.addChild(&field390);

field& field391 =  field();
field391.setName(CString("Da"));
field391.setAccessType(CString("initializeOnly"));
field391.setType(CString("SFBool"));
Script360.addChild(&field391);

field& field392 =  field();
field392.setName(CString("xa"));
field392.setAccessType(CString("initializeOnly"));
field392.setType(CString("SFTime"));
Script360.addChild(&field392);

field& field393 =  field();
field393.setName(CString("Ea"));
field393.setAccessType(CString("initializeOnly"));
field393.setType(CString("SFTime"));
Script360.addChild(&field393);

field& field394 =  field();
field394.setName(CString("Fa"));
field394.setAccessType(CString("initializeOnly"));
field394.setType(CString("SFTime"));
Script360.addChild(&field394);

field& field395 =  field();
field395.setName(CString("Ga"));
field395.setAccessType(CString("initializeOnly"));
field395.setType(CString("SFTime"));
Script360.addChild(&field395);

field& field396 =  field();
field396.setName(CString("Ta"));
field396.setAccessType(CString("initializeOnly"));
field396.setType(CString("SFTime"));
Script360.addChild(&field396);

field& field397 =  field();
field397.setName(CString("Ha"));
field397.setAccessType(CString("initializeOnly"));
field397.setType(CString("SFBool"));
Script360.addChild(&field397);

field& field398 =  field();
field398.setName(CString("Ua"));
field398.setAccessType(CString("initializeOnly"));
field398.setType(CString("SFTime"));
Script360.addChild(&field398);

field& field399 =  field();
field399.setName(CString("Va"));
field399.setAccessType(CString("initializeOnly"));
field399.setType(CString("SFTime"));
Script360.addChild(&field399);

field& field400 =  field();
field400.setName(CString("ya"));
field400.setAccessType(CString("initializeOnly"));
field400.setType(CString("SFVec2f"));
Script360.addChild(&field400);

field& field401 =  field();
field401.setName(CString("Ka"));
field401.setAccessType(CString("initializeOnly"));
field401.setType(CString("SFBool"));
Script360.addChild(&field401);

IS& IS402 =  IS();
Connect& connect403 =  Connect();
connect403.setNodeField(CString("R"));
connect403.setProtoField(CString("R"));
IS402.addChild(&connect403);

Connect& connect404 =  Connect();
connect404.setNodeField(CString("S"));
connect404.setProtoField(CString("S"));
IS402.addChild(&connect404);

Connect& connect405 =  Connect();
connect405.setNodeField(CString("sa"));
connect405.setProtoField(CString("sa"));
IS402.addChild(&connect405);

Connect& connect406 =  Connect();
connect406.setNodeField(CString("ta"));
connect406.setProtoField(CString("ta"));
IS402.addChild(&connect406);

Connect& connect407 =  Connect();
connect407.setNodeField(CString("fraction"));
connect407.setProtoField(CString("fraction"));
IS402.addChild(&connect407);

Connect& connect408 =  Connect();
connect408.setNodeField(CString("ua"));
connect408.setProtoField(CString("ua"));
IS402.addChild(&connect408);

Connect& connect409 =  Connect();
connect409.setNodeField(CString("va"));
connect409.setProtoField(CString("va"));
IS402.addChild(&connect409);

Connect& connect410 =  Connect();
connect410.setNodeField(CString("wa_changed"));
connect410.setProtoField(CString("wa_changed"));
IS402.addChild(&connect410);

Connect& connect411 =  Connect();
connect411.setNodeField(CString("xa_changed"));
connect411.setProtoField(CString("xa_changed"));
IS402.addChild(&connect411);

Connect& connect412 =  Connect();
connect412.setNodeField(CString("ya_changed"));
connect412.setProtoField(CString("ya_changed"));
IS402.addChild(&connect412);

Connect& connect413 =  Connect();
connect413.setNodeField(CString("startTime"));
connect413.setProtoField(CString("startTime"));
IS402.addChild(&connect413);

Connect& connect414 =  Connect();
connect414.setNodeField(CString("stopTime"));
connect414.setProtoField(CString("stopTime"));
IS402.addChild(&connect414);

Connect& connect415 =  Connect();
connect415.setNodeField(CString("za"));
connect415.setProtoField(CString("za"));
IS402.addChild(&connect415);

Connect& connect416 =  Connect();
connect416.setNodeField(CString("Aa"));
connect416.setProtoField(CString("Aa"));
IS402.addChild(&connect416);

Connect& connect417 =  Connect();
connect417.setNodeField(CString("Ba"));
connect417.setProtoField(CString("Ba"));
IS402.addChild(&connect417);

Connect& connect418 =  Connect();
connect418.setNodeField(CString("direction"));
connect418.setProtoField(CString("direction"));
IS402.addChild(&connect418);

Connect& connect419 =  Connect();
connect419.setNodeField(CString("Ja"));
connect419.setProtoField(CString("Ja"));
IS402.addChild(&connect419);

Connect& connect420 =  Connect();
connect420.setNodeField(CString("loop"));
connect420.setProtoField(CString("loop"));
IS402.addChild(&connect420);

Connect& connect421 =  Connect();
connect421.setNodeField(CString("Ia"));
connect421.setProtoField(CString("Ia"));
IS402.addChild(&connect421);

Connect& connect422 =  Connect();
connect422.setNodeField(CString("cycleInterval"));
connect422.setProtoField(CString("cycleInterval"));
IS402.addChild(&connect422);

Connect& connect423 =  Connect();
connect423.setNodeField(CString("Ca"));
connect423.setProtoField(CString("Ca"));
IS402.addChild(&connect423);

Connect& connect424 =  Connect();
connect424.setNodeField(CString("Da"));
connect424.setProtoField(CString("Da"));
IS402.addChild(&connect424);

Connect& connect425 =  Connect();
connect425.setNodeField(CString("xa"));
connect425.setProtoField(CString("xa"));
IS402.addChild(&connect425);

Connect& connect426 =  Connect();
connect426.setNodeField(CString("Ea"));
connect426.setProtoField(CString("Ea"));
IS402.addChild(&connect426);

Connect& connect427 =  Connect();
connect427.setNodeField(CString("Fa"));
connect427.setProtoField(CString("Fa"));
IS402.addChild(&connect427);

Connect& connect428 =  Connect();
connect428.setNodeField(CString("Ga"));
connect428.setProtoField(CString("Ga"));
IS402.addChild(&connect428);

Connect& connect429 =  Connect();
connect429.setNodeField(CString("Ha"));
connect429.setProtoField(CString("Ha"));
IS402.addChild(&connect429);

Connect& connect430 =  Connect();
connect430.setNodeField(CString("Ka"));
connect430.setProtoField(CString("Ka"));
IS402.addChild(&connect430);

Script360.addChild(&IS402);


//Script360.setSourceCode(CString("javascript:")+
//_T("function Wa(){")+
//_T("var Xa=Math.random();")+
//_T("Va=")+
//_T("(cycleInterval-Ca)*(1-Xa)+")+
//_T("(cycleInterval+Ca)*Xa;")+
//_T("cycleInterval_changed=Va;")+
//_T("}")+
//_T("function Ya(){")+
//_T("var Xa=Math.random();")+
//_T("Ua=(xa-Ea)*(1-Xa)+")+
//_T("(xa+Ea)*Xa;")+
//_T("}")+
//_T("function initialize(){")+
//_T("if(direction==2){")+
//_T("cycleInterval*=2;")+
//_T("Ca*=2;")+
//_T("cycleInterval_changed=cycleInterval;")+
//_T("}")+
//_T("Wa();")+
//_T("if(Da==TRUE){")+
//_T("Ya();")+
//_T("}else{")+
//_T("Ua=-1;")+
//_T("}")+
//_T("if(Ka==FALSE){")+
//_T("Na=FALSE;")+
//_T("}else{")+
//_T("R(1,1);")+
//_T("}")+
//_T("}")+
//_T("function R(n,Za){")+
//_T("da=TRUE;")+
//_T("if((Ja==TRUE)||")+
//_T("((Ua>0)&&(ua==1))){")+
//_T("Sa=0;")+
//_T("if(Ca>0){")+
//_T("Wa();")+
//_T("}else{")+
//_T("Va=cycleInterval;")+
//_T("}")+
//_T("if(Da==TRUE){")+
//_T("if(Ea>0){")+
//_T("Ya();")+
//_T("}else{")+
//_T("Ua=xa;")+
//_T("}")+
//_T("}")+
//_T("}")+
//_T("ya[0]=Ua;")+
//_T("ya[1]=Va;")+
//_T("xa_changed=ya[0];")+
//_T("wa_changed=ya[1];")+
//_T("ya_changed=ya;")+
//_T("Na=TRUE;")+
//_T("startTime=Za;")+
//_T("Oa=Za;")+
//_T("}")+
//_T("function S(n,Za){")+
//_T("if((Ha==TRUE)||(Ga==0)){")+
//_T("Na=FALSE;")+
//_T("stopTime=Za;")+
//_T("}else{")+
//_T("Ta=Za;")+
//_T("}")+
//_T("}")+
//_T("function sa(n,Za){")+
//_T("if(Na==TRUE){")+
//_T("Na=FALSE;")+
//_T("stopTime=Za;")+
//_T("}")+
//_T("Ba=Za;")+
//_T("}")+
//_T("function ta(n,Za){")+
//_T("xa=n;")+
//_T("if(xa<(Fa+Ga)){")+
//_T("xa=Fa+Ga;")+
//_T("}")+
//_T("xa_changed=xa;")+
//_T("Ua=xa;")+
//_T("}")+
//_T("function ab(n,Za){")+
//_T("Na=FALSE;")+
//_T("stopTime=Za;")+
//_T("Ta=0;")+
//_T("va=0;")+
//_T("}")+
//_T("function bb(n,Za){")+
//_T("Na=FALSE;")+
//_T("stopTime=Za;")+
//_T("Ta=0;")+
//_T("va=0;")+
//_T("}")+
//_T("function cb(n,Za){")+
//_T("Na=FALSE;")+
//_T("stopTime=Ra+Ua;")+
//_T("if((Ca==0)&&")+
//_T("(Ea==0)){")+
//_T("var db=Ua;")+
//_T("while(db>cycleInterval){")+
//_T("db-=cycleInterval;")+
//_T("}")+
//_T("var eb=db/cycleInterval;")+
//_T("if(db>cycleInterval){")+
//_T("eb=1;")+
//_T("}")+
//_T("if((Ia==FALSE)||")+
//_T("((Fa==0)&&")+
//_T("(Ga==0))){")+
//_T("if(direction==0){")+
//_T("fraction=eb;")+
//_T("}else if(direction==1){")+
//_T("fraction=1-eb;")+
//_T("}else{")+
//_T("if(eb>.5){")+
//_T("fraction=2*(1-eb);")+
//_T("}else{")+
//_T("fraction=2*eb;")+
//_T("}")+
//_T("}")+
//_T("}")+
//_T("}")+
//_T("if(Ua>0){")+
//_T("ua=1;")+
//_T("if(direction==1){")+
//_T("ua=1-ua;")+
//_T("}")+
//_T("}")+
//_T("Ta=0;")+
//_T("va=0;")+
//_T("}")+
//_T("function set_fraction(n,Za){")+
//_T("if(Na==FALSE){")+
//_T("return;")+
//_T("}")+
//_T("if(da==FALSE){")+
//_T("if((Fa>0)&&")+
//_T("((Za-Ra)<=Fa)){")+
//_T("if(Ta>0){")+
//_T("if(Za-Ta>=Ga){")+
//_T("ab(n,Za);")+
//_T("}else{")+
//_T("fb=1-((Za-Ta)/Ga);")+
//_T("if(fb>va){")+
//_T("va=va;")+
//_T("}else{")+
//_T("va=fb;")+
//_T("}")+
//_T("}")+
//_T("}else{")+
//_T("va=(Za-Ra)/Fa;")+
//_T("}")+
//_T("}else if((Ga>0)&&")+
//_T("(Ua>0)&&")+
//_T("((Za-Ra)>=(Ua-Ga))){")+
//_T("fb=((Ua-(Za-Ra))/Ga);")+
//_T("if(fb>va){")+
//_T("va=va;")+
//_T("}else{")+
//_T("va=fb;")+
//_T("}")+
//_T("}else if((Ga>0)&&")+
//_T("(loop==FALSE)&&")+
//_T("((Za-Ra)>=(cycleInterval_changed-Ga))){")+
//_T("if(Sa>0){")+
//_T("fb=((cycleInterval_changed-(Za-Ra))/Ga);")+
//_T("if(fb>va){")+
//_T("va=va;")+
//_T("}else{")+
//_T("va=fb;")+
//_T("}")+
//_T("}")+
//_T("}else if(Ta>0){")+
//_T("if(Za-Ta>=Ga){")+
//_T("ab(n,Za);")+
//_T("}else{")+
//_T("fb=1-((Za-Ta)/Ga);")+
//_T("if(fb>va){")+
//_T("va=va;")+
//_T("}else{")+
//_T("va=fb;")+
//_T("}")+
//_T("}")+
//_T("}else{")+
//_T("va=1;")+
//_T("}")+
//_T("}else{")+
//_T("va=0;")+
//_T("}")+
//_T("if(da==TRUE){")+
//_T("da=FALSE;")+
//_T("if(!Ja&&(Ua>0)&&")+
//_T("(ua>0)&&(ua<1)){")+
//_T("Ra=Ra+(Za-stopTime);")+
//_T("}else{")+
//_T("Ra=Za;")+
//_T("if((loop==TRUE)&&(Ja)){")+
//_T("za=Za;")+
//_T("}")+
//_T("}")+
//_T("}else{")+
//_T("if(n>Qa){")+
//_T("if(Ia==FALSE){")+
//_T("Sa=Sa+(n-Qa);")+
//_T("}else{")+
//_T("Sa=Sa+(n-Qa)*va;")+
//_T("}")+
//_T("}else{")+
//_T("if(Ia==FALSE){")+
//_T("Sa=Sa+(1-Qa)+n;")+
//_T("}else{")+
//_T("Sa=Sa+((1-Qa)+n)*va;")+
//_T("}")+
//_T("}")+
//_T("if(direction==0){")+
//_T("fraction=Sa;")+
//_T("if(fraction>=1){")+
//_T("if(loop==TRUE){")+
//_T("fraction=fraction-1;")+
//_T("}else{")+
//_T("fraction=1;")+
//_T("}")+
//_T("}")+
//_T("}else if(direction==1){")+
//_T("fraction=1-Sa;")+
//_T("if(fraction<=0){")+
//_T("if(loop==TRUE){")+
//_T("fraction=fraction+1;")+
//_T("}else{")+
//_T("fraction=0;")+
//_T("}")+
//_T("}")+
//_T("}else if(direction==2){")+
//_T("fraction=Sa;")+
//_T("if(fraction>=1){")+
//_T("if(loop==TRUE){")+
//_T("fraction=fraction-1;")+
//_T("}else{")+
//_T("fraction=1;")+
//_T("}")+
//_T("}")+
//_T("if(fraction>.5){")+
//_T("fraction=2*(1-fraction);")+
//_T("}else{")+
//_T("fraction=2*fraction;")+
//_T("}")+
//_T("}")+
//_T("if(Sa>=1){")+
//_T("if(loop==TRUE){")+
//_T("Sa-=1;")+
//_T("Aa=Za;")+
//_T("za=Aa;")+
//_T("}else{")+
//_T("Sa=0;")+
//_T("bb(n,Za);")+
//_T("}")+
//_T("}")+
//_T("}")+
//_T("if(Ua>0){")+
//_T("if((Za-Ra)>Ua){")+
//_T("cb(n,Za);")+
//_T("}else{")+
//_T("ua=(Za-Ra)/Ua;")+
//_T("if(direction==1){")+
//_T("ua=1-ua;")+
//_T("}")+
//_T("}")+
//_T("}")+
//_T("Qa=n;")+
//_T("}"));
ProtoBody356.addChild(&Script360);

ROUTE& ROUTE431 =  ROUTE();
ROUTE431.setFromNode(CString("Ma_1"));
ROUTE431.setFromField(CString("Na"));
ROUTE431.setToNode(CString("La_1"));
ROUTE431.setToField(CString("set_enabled"));
ProtoBody356.addChild(&ROUTE431);

ROUTE& ROUTE432 =  ROUTE();
ROUTE432.setFromNode(CString("Ma_1"));
ROUTE432.setFromField(CString("Oa"));
ROUTE432.setToNode(CString("La_1"));
ROUTE432.setToField(CString("set_startTime"));
ProtoBody356.addChild(&ROUTE432);

ROUTE& ROUTE433 =  ROUTE();
ROUTE433.setFromNode(CString("Ma_1"));
ROUTE433.setFromField(CString("Pa"));
ROUTE433.setToNode(CString("La_1"));
ROUTE433.setToField(CString("set_stopTime"));
ProtoBody356.addChild(&ROUTE433);

ROUTE& ROUTE434 =  ROUTE();
ROUTE434.setFromNode(CString("Ma_1"));
ROUTE434.setFromField(CString("cycleInterval_changed"));
ROUTE434.setToNode(CString("La_1"));
ROUTE434.setToField(CString("set_cycleInterval"));
ProtoBody356.addChild(&ROUTE434);

ROUTE& ROUTE435 =  ROUTE();
ROUTE435.setFromNode(CString("La_1"));
ROUTE435.setFromField(CString("fraction_changed"));
ROUTE435.setToNode(CString("Ma_1"));
ROUTE435.setToField(CString("set_fraction"));
ProtoBody356.addChild(&ROUTE435);

ProtoDeclare326.addChild(&ProtoBody356);

Scene7.addChild(&ProtoDeclare326);

ProtoDeclare& ProtoDeclare436 =  ProtoDeclare();
ProtoDeclare436.setName(CString("gb"));
ProtoInterface& ProtoInterface437 =  ProtoInterface();
field& field438 =  field();
field438.setName(CString("R"));
field438.setAccessType(CString("inputOnly"));
field438.setType(CString("SFTime"));
ProtoInterface437.addChild(&field438);

field& field439 =  field();
field439.setName(CString("S"));
field439.setAccessType(CString("inputOnly"));
field439.setType(CString("SFTime"));
ProtoInterface437.addChild(&field439);

field& field440 =  field();
field440.setName(CString("set_fraction"));
field440.setAccessType(CString("inputOnly"));
field440.setType(CString("SFFloat"));
ProtoInterface437.addChild(&field440);

field& field441 =  field();
field441.setName(CString("R_changed"));
field441.setAccessType(CString("outputOnly"));
field441.setType(CString("SFTime"));
ProtoInterface437.addChild(&field441);

field& field442 =  field();
field442.setName(CString("U"));
field442.setAccessType(CString("initializeOnly"));
field442.setType(CString("SFNode"));
ProtoInterface437.addChild(&field442);

field& field443 =  field();
field443.setName(CString("direction"));
field443.setAccessType(CString("initializeOnly"));
field443.setType(CString("SFInt32"));
ProtoInterface437.addChild(&field443);

field& field444 =  field();
field444.setName(CString("hb"));
field444.setAccessType(CString("initializeOnly"));
field444.setType(CString("SFBool"));
ProtoInterface437.addChild(&field444);

field& field445 =  field();
field445.setName(CString("ib"));
field445.setAccessType(CString("initializeOnly"));
field445.setType(CString("SFBool"));
ProtoInterface437.addChild(&field445);

ProtoDeclare436.addChild(&ProtoInterface437);

ProtoBody& ProtoBody446 =  ProtoBody();
Script& Script447 =  Script();
Script447.setDEF(CString("jb"));
Script447.setDirectOutput(true);
field& field448 =  field();
field448.setName(CString("R"));
field448.setAccessType(CString("inputOnly"));
field448.setType(CString("SFTime"));
Script447.addChild(&field448);

field& field449 =  field();
field449.setName(CString("S"));
field449.setAccessType(CString("inputOnly"));
field449.setType(CString("SFTime"));
Script447.addChild(&field449);

field& field450 =  field();
field450.setName(CString("set_fraction"));
field450.setAccessType(CString("inputOnly"));
field450.setType(CString("SFFloat"));
Script447.addChild(&field450);

field& field451 =  field();
field451.setName(CString("R_changed"));
field451.setAccessType(CString("outputOnly"));
field451.setType(CString("SFTime"));
Script447.addChild(&field451);

field& field452 =  field();
field452.setName(CString("U"));
field452.setAccessType(CString("initializeOnly"));
field452.setType(CString("SFNode"));
Script447.addChild(&field452);

field& field453 =  field();
field453.setName(CString("direction"));
field453.setAccessType(CString("initializeOnly"));
field453.setType(CString("SFInt32"));
Script447.addChild(&field453);

field& field454 =  field();
field454.setName(CString("aa"));
field454.setAccessType(CString("initializeOnly"));
field454.setType(CString("SFBool"));
Script447.addChild(&field454);

field& field455 =  field();
field455.setName(CString("kb"));
field455.setAccessType(CString("initializeOnly"));
field455.setType(CString("MFVec2f"));
Script447.addChild(&field455);

field& field456 =  field();
field456.setName(CString("ba"));
field456.setAccessType(CString("initializeOnly"));
field456.setType(CString("SFFloat"));
Script447.addChild(&field456);

field& field457 =  field();
field457.setName(CString("ca"));
field457.setAccessType(CString("initializeOnly"));
field457.setType(CString("SFFloat"));
Script447.addChild(&field457);

field& field458 =  field();
field458.setName(CString("da"));
field458.setAccessType(CString("initializeOnly"));
field458.setType(CString("SFBool"));
field458.setValue(CString("true"));
Script447.addChild(&field458);

field& field459 =  field();
field459.setName(CString("ea"));
field459.setAccessType(CString("initializeOnly"));
field459.setType(CString("SFTime"));
Script447.addChild(&field459);

field& field460 =  field();
field460.setName(CString("fa"));
field460.setAccessType(CString("initializeOnly"));
field460.setType(CString("SFTime"));
Script447.addChild(&field460);

field& field461 =  field();
field461.setName(CString("hb"));
field461.setAccessType(CString("initializeOnly"));
field461.setType(CString("SFBool"));
Script447.addChild(&field461);

field& field462 =  field();
field462.setName(CString("ib"));
field462.setAccessType(CString("initializeOnly"));
field462.setType(CString("SFBool"));
Script447.addChild(&field462);

field& field463 =  field();
field463.setName(CString("lb"));
field463.setAccessType(CString("initializeOnly"));
field463.setType(CString("SFInt32"));
Script447.addChild(&field463);

field& field464 =  field();
field464.setName(CString("mb"));
field464.setAccessType(CString("initializeOnly"));
field464.setType(CString("MFNode"));
Script447.addChild(&field464);

IS& IS465 =  IS();
Connect& connect466 =  Connect();
connect466.setNodeField(CString("R"));
connect466.setProtoField(CString("R"));
IS465.addChild(&connect466);

Connect& connect467 =  Connect();
connect467.setNodeField(CString("S"));
connect467.setProtoField(CString("S"));
IS465.addChild(&connect467);

Connect& connect468 =  Connect();
connect468.setNodeField(CString("set_fraction"));
connect468.setProtoField(CString("set_fraction"));
IS465.addChild(&connect468);

Connect& connect469 =  Connect();
connect469.setNodeField(CString("R_changed"));
connect469.setProtoField(CString("R_changed"));
IS465.addChild(&connect469);

Connect& connect470 =  Connect();
connect470.setNodeField(CString("U"));
connect470.setProtoField(CString("U"));
IS465.addChild(&connect470);

Connect& connect471 =  Connect();
connect471.setNodeField(CString("direction"));
connect471.setProtoField(CString("direction"));
IS465.addChild(&connect471);

Connect& connect472 =  Connect();
connect472.setNodeField(CString("hb"));
connect472.setProtoField(CString("hb"));
IS465.addChild(&connect472);

Connect& connect473 =  Connect();
connect473.setNodeField(CString("ib"));
connect473.setProtoField(CString("ib"));
IS465.addChild(&connect473);

Script447.addChild(&IS465);


//Script447.setSourceCode(CString("javascript:")+
//_T("function initialize(){")+
//_T("U.w=TRUE;")+
//_T("aa=FALSE;")+
//_T("}")+
//_T("function R(n){")+
//_T("if(ib&&!hb){")+
//_T("return;")+
//_T("}")+
//_T("if(fa==n){")+
//_T("return;")+
//_T("}")+
//_T("if(aa==TRUE){")+
//_T("ea=n;")+
//_T("return;")+
//_T("}")+
//_T("aa=TRUE;")+
//_T("da=TRUE;")+
//_T("if(hb==FALSE){")+
//_T("mb.length=1;")+
//_T("mb[0]=U;")+
//_T("}else{")+
//_T("mb=U.A_changed;")+
//_T("}")+
//_T("kb.length=mb.length;")+
//_T("for(lb=0;lb<mb.length;lb++){")+
//_T("kb[lb].x=mb[lb].u_changed.x;")+
//_T("kb[lb].y=mb[lb].u_changed.y;")+
//_T("}")+
//_T("R_changed=n;")+
//_T("fa=n;")+
//_T("}")+
//_T("function S(n){")+
//_T("aa=FALSE;")+
//_T("if(ea==n){")+
//_T("R(n);")+
//_T("}")+
//_T("}")+
//_T("function set_fraction(n){")+
//_T("if(ib&&!hb){")+
//_T("return;")+
//_T("}")+
//_T("if(da){")+
//_T("ba=n;")+
//_T("da=FALSE;")+
//_T("}else if(n<ca){")+
//_T("ba=(1.0-ca)+n;")+
//_T("}else{")+
//_T("ba=n-ca;")+
//_T("}")+
//_T("ca=n;")+
//_T("for(lb=0;lb<mb.length;lb++){")+
//_T("if(direction==0)kb[lb].y+=-ba;")+
//_T("if(direction==1)kb[lb].y+=ba;")+
//_T("if(direction==2)kb[lb].x+=ba;")+
//_T("if(direction==3)kb[lb].x+=-ba;")+
//_T("mb[lb].set_u=kb[lb];")+
//_T("}")+
//_T("}"));
ProtoBody446.addChild(&Script447);

ProtoDeclare436.addChild(&ProtoBody446);

Scene7.addChild(&ProtoDeclare436);

ProtoDeclare& ProtoDeclare474 =  ProtoDeclare();
ProtoDeclare474.setName(CString("nb"));
ProtoInterface& ProtoInterface475 =  ProtoInterface();
field& field476 =  field();
field476.setName(CString("ob"));
field476.setAccessType(CString("inputOnly"));
field476.setType(CString("SFTime"));
ProtoInterface475.addChild(&field476);

field& field477 =  field();
field477.setName(CString("pb"));
field477.setAccessType(CString("inputOnly"));
field477.setType(CString("SFTime"));
ProtoInterface475.addChild(&field477);

field& field478 =  field();
field478.setName(CString("qb"));
field478.setAccessType(CString("inputOnly"));
field478.setType(CString("SFBool"));
ProtoInterface475.addChild(&field478);

field& field479 =  field();
field479.setName(CString("rb"));
field479.setAccessType(CString("inputOnly"));
field479.setType(CString("SFBool"));
ProtoInterface475.addChild(&field479);

field& field480 =  field();
field480.setName(CString("sb"));
field480.setAccessType(CString("inputOnly"));
field480.setType(CString("SFVec3f"));
ProtoInterface475.addChild(&field480);

field& field481 =  field();
field481.setName(CString("tb"));
field481.setAccessType(CString("inputOnly"));
field481.setType(CString("SFVec2f"));
ProtoInterface475.addChild(&field481);

field& field482 =  field();
field482.setName(CString("ub"));
field482.setAccessType(CString("outputOnly"));
field482.setType(CString("SFTime"));
ProtoInterface475.addChild(&field482);

field& field483 =  field();
field483.setName(CString("vb"));
field483.setAccessType(CString("outputOnly"));
field483.setType(CString("SFTime"));
ProtoInterface475.addChild(&field483);

field& field484 =  field();
field484.setName(CString("enterTime"));
field484.setAccessType(CString("outputOnly"));
field484.setType(CString("SFTime"));
ProtoInterface475.addChild(&field484);

field& field485 =  field();
field485.setName(CString("exitTime"));
field485.setAccessType(CString("outputOnly"));
field485.setType(CString("SFTime"));
ProtoInterface475.addChild(&field485);

field& field486 =  field();
field486.setName(CString("wb"));
field486.setAccessType(CString("outputOnly"));
field486.setType(CString("SFTime"));
ProtoInterface475.addChild(&field486);

field& field487 =  field();
field487.setName(CString("xb"));
field487.setAccessType(CString("outputOnly"));
field487.setType(CString("SFTime"));
ProtoInterface475.addChild(&field487);

field& field488 =  field();
field488.setName(CString("coord"));
field488.setAccessType(CString("outputOnly"));
field488.setType(CString("SFVec3f"));
ProtoInterface475.addChild(&field488);

field& field489 =  field();
field489.setName(CString("texCoord"));
field489.setAccessType(CString("outputOnly"));
field489.setType(CString("SFVec2f"));
ProtoInterface475.addChild(&field489);

field& field490 =  field();
field490.setName(CString("yb_changed"));
field490.setAccessType(CString("outputOnly"));
field490.setType(CString("SFBool"));
ProtoInterface475.addChild(&field490);

field& field491 =  field();
field491.setName(CString("enabled"));
field491.setAccessType(CString("initializeOnly"));
field491.setType(CString("SFBool"));
field491.setValue(CString("true"));
ProtoInterface475.addChild(&field491);

ProtoDeclare474.addChild(&ProtoInterface475);

ProtoBody& ProtoBody492 =  ProtoBody();
Script& Script493 =  Script();
Script493.setDEF(CString("I_1"));
Script493.setDirectOutput(true);
field& field494 =  field();
field494.setName(CString("ob"));
field494.setAccessType(CString("inputOnly"));
field494.setType(CString("SFTime"));
Script493.addChild(&field494);

field& field495 =  field();
field495.setName(CString("pb"));
field495.setAccessType(CString("inputOnly"));
field495.setType(CString("SFTime"));
Script493.addChild(&field495);

field& field496 =  field();
field496.setName(CString("qb"));
field496.setAccessType(CString("inputOnly"));
field496.setType(CString("SFBool"));
Script493.addChild(&field496);

field& field497 =  field();
field497.setName(CString("rb"));
field497.setAccessType(CString("inputOnly"));
field497.setType(CString("SFBool"));
Script493.addChild(&field497);

field& field498 =  field();
field498.setName(CString("sb"));
field498.setAccessType(CString("inputOnly"));
field498.setType(CString("SFVec3f"));
Script493.addChild(&field498);

field& field499 =  field();
field499.setName(CString("tb"));
field499.setAccessType(CString("inputOnly"));
field499.setType(CString("SFVec2f"));
Script493.addChild(&field499);

field& field500 =  field();
field500.setName(CString("ub"));
field500.setAccessType(CString("outputOnly"));
field500.setType(CString("SFTime"));
Script493.addChild(&field500);

field& field501 =  field();
field501.setName(CString("vb"));
field501.setAccessType(CString("outputOnly"));
field501.setType(CString("SFTime"));
Script493.addChild(&field501);

field& field502 =  field();
field502.setName(CString("wb"));
field502.setAccessType(CString("outputOnly"));
field502.setType(CString("SFTime"));
Script493.addChild(&field502);

field& field503 =  field();
field503.setName(CString("xb"));
field503.setAccessType(CString("outputOnly"));
field503.setType(CString("SFTime"));
Script493.addChild(&field503);

field& field504 =  field();
field504.setName(CString("enterTime"));
field504.setAccessType(CString("outputOnly"));
field504.setType(CString("SFTime"));
Script493.addChild(&field504);

field& field505 =  field();
field505.setName(CString("exitTime"));
field505.setAccessType(CString("outputOnly"));
field505.setType(CString("SFTime"));
Script493.addChild(&field505);

field& field506 =  field();
field506.setName(CString("coord"));
field506.setAccessType(CString("outputOnly"));
field506.setType(CString("SFVec3f"));
Script493.addChild(&field506);

field& field507 =  field();
field507.setName(CString("texCoord"));
field507.setAccessType(CString("outputOnly"));
field507.setType(CString("SFVec2f"));
Script493.addChild(&field507);

field& field508 =  field();
field508.setName(CString("yb_changed"));
field508.setAccessType(CString("outputOnly"));
field508.setType(CString("SFBool"));
Script493.addChild(&field508);

field& field509 =  field();
field509.setName(CString("enabled"));
field509.setAccessType(CString("initializeOnly"));
field509.setType(CString("SFBool"));
Script493.addChild(&field509);

IS& IS510 =  IS();
Connect& connect511 =  Connect();
connect511.setNodeField(CString("ob"));
connect511.setProtoField(CString("ob"));
IS510.addChild(&connect511);

Connect& connect512 =  Connect();
connect512.setNodeField(CString("pb"));
connect512.setProtoField(CString("pb"));
IS510.addChild(&connect512);

Connect& connect513 =  Connect();
connect513.setNodeField(CString("qb"));
connect513.setProtoField(CString("qb"));
IS510.addChild(&connect513);

Connect& connect514 =  Connect();
connect514.setNodeField(CString("rb"));
connect514.setProtoField(CString("rb"));
IS510.addChild(&connect514);

Connect& connect515 =  Connect();
connect515.setNodeField(CString("sb"));
connect515.setProtoField(CString("sb"));
IS510.addChild(&connect515);

Connect& connect516 =  Connect();
connect516.setNodeField(CString("tb"));
connect516.setProtoField(CString("tb"));
IS510.addChild(&connect516);

Connect& connect517 =  Connect();
connect517.setNodeField(CString("ub"));
connect517.setProtoField(CString("ub"));
IS510.addChild(&connect517);

Connect& connect518 =  Connect();
connect518.setNodeField(CString("vb"));
connect518.setProtoField(CString("vb"));
IS510.addChild(&connect518);

Connect& connect519 =  Connect();
connect519.setNodeField(CString("wb"));
connect519.setProtoField(CString("wb"));
IS510.addChild(&connect519);

Connect& connect520 =  Connect();
connect520.setNodeField(CString("xb"));
connect520.setProtoField(CString("xb"));
IS510.addChild(&connect520);

Connect& connect521 =  Connect();
connect521.setNodeField(CString("enterTime"));
connect521.setProtoField(CString("enterTime"));
IS510.addChild(&connect521);

Connect& connect522 =  Connect();
connect522.setNodeField(CString("exitTime"));
connect522.setProtoField(CString("exitTime"));
IS510.addChild(&connect522);

Connect& connect523 =  Connect();
connect523.setNodeField(CString("coord"));
connect523.setProtoField(CString("coord"));
IS510.addChild(&connect523);

Connect& connect524 =  Connect();
connect524.setNodeField(CString("texCoord"));
connect524.setProtoField(CString("texCoord"));
IS510.addChild(&connect524);

Connect& connect525 =  Connect();
connect525.setNodeField(CString("yb_changed"));
connect525.setProtoField(CString("yb_changed"));
IS510.addChild(&connect525);

Connect& connect526 =  Connect();
connect526.setNodeField(CString("enabled"));
connect526.setProtoField(CString("enabled"));
IS510.addChild(&connect526);

Script493.addChild(&IS510);


//Script493.setSourceCode(CString("javascript:")+
//_T("function initialize(){")+
//_T("yb_changed=enabled;")+
//_T("}")+
//_T("function ob(n,time){")+
//_T("if(!enabled){")+
//_T("enabled=TRUE;")+
//_T("yb_changed=TRUE;")+
//_T("wb=time;")+
//_T("}")+
//_T("}")+
//_T("function pb(n,time){")+
//_T("if(enabled){")+
//_T("enabled=FALSE;")+
//_T("yb_changed=FALSE;")+
//_T("xb=time;")+
//_T("}")+
//_T("}")+
//_T("function rb(n,Za){")+
//_T("if(enabled){")+
//_T("if(n==TRUE){")+
//_T("ub=Za;")+
//_T("}else{")+
//_T("vb=Za;")+
//_T("}")+
//_T("}")+
//_T("}")+
//_T("function qb(n,Za){")+
//_T("if(enabled){")+
//_T("if(n==TRUE){")+
//_T("enterTime=Za;")+
//_T("}else{")+
//_T("exitTime=Za;")+
//_T("}")+
//_T("}")+
//_T("}")+
//_T("function sb(n,Za){")+
//_T("if(enabled){")+
//_T("coord=n;")+
//_T("}")+
//_T("}")+
//_T("function tb(n,Za){")+
//_T("if(enabled){")+
//_T("texCoord=n;")+
//_T("}")+
//_T("}"));
ProtoBody492.addChild(&Script493);

ProtoDeclare474.addChild(&ProtoBody492);

Scene7.addChild(&ProtoDeclare474);

ProtoDeclare& ProtoDeclare527 =  ProtoDeclare();
ProtoDeclare527.setName(CString("zb"));
ProtoInterface& ProtoInterface528 =  ProtoInterface();
field& field529 =  field();
field529.setName(CString("set_p"));
field529.setAccessType(CString("inputOnly"));
field529.setType(CString("SFBool"));
ProtoInterface528.addChild(&field529);

field& field530 =  field();
field530.setName(CString("set_coord"));
field530.setAccessType(CString("inputOnly"));
field530.setType(CString("MFVec3f"));
ProtoInterface528.addChild(&field530);

field& field531 =  field();
field531.setName(CString("set_texCoord"));
field531.setAccessType(CString("inputOnly"));
field531.setType(CString("MFVec2f"));
ProtoInterface528.addChild(&field531);

field& field532 =  field();
field532.setName(CString("set_diffuseColor"));
field532.setAccessType(CString("inputOnly"));
field532.setType(CString("SFColor"));
ProtoInterface528.addChild(&field532);

field& field533 =  field();
field533.setName(CString("w"));
field533.setAccessType(CString("inputOnly"));
field533.setType(CString("SFBool"));
ProtoInterface528.addChild(&field533);

field& field534 =  field();
field534.setName(CString("set_v"));
field534.setAccessType(CString("inputOnly"));
field534.setType(CString("SFNode"));
ProtoInterface528.addChild(&field534);

field& field535 =  field();
field535.setName(CString("p_changed"));
field535.setAccessType(CString("outputOnly"));
field535.setType(CString("SFBool"));
ProtoInterface528.addChild(&field535);

field& field536 =  field();
field536.setName(CString("coord_changed"));
field536.setAccessType(CString("outputOnly"));
field536.setType(CString("MFVec3f"));
ProtoInterface528.addChild(&field536);

field& field537 =  field();
field537.setName(CString("texCoord_changed"));
field537.setAccessType(CString("outputOnly"));
field537.setType(CString("MFVec2f"));
ProtoInterface528.addChild(&field537);

field& field538 =  field();
field538.setName(CString("diffuseColor_changed"));
field538.setAccessType(CString("outputOnly"));
field538.setType(CString("SFColor"));
ProtoInterface528.addChild(&field538);

field& field539 =  field();
field539.setName(CString("v_changed"));
field539.setAccessType(CString("outputOnly"));
field539.setType(CString("SFNode"));
ProtoInterface528.addChild(&field539);

field& field540 =  field();
field540.setName(CString("url"));
field540.setAccessType(CString("inputOutput"));
field540.setType(CString("MFString"));
ProtoInterface528.addChild(&field540);

field& field541 =  field();
field541.setName(CString("transparency"));
field541.setAccessType(CString("inputOutput"));
field541.setType(CString("SFFloat"));
ProtoInterface528.addChild(&field541);

field& field542 =  field();
field542.setName(CString("emissiveColor"));
field542.setAccessType(CString("inputOutput"));
field542.setType(CString("SFColor"));
field542.setValue(CString("0 0.09 0.15"));
ProtoInterface528.addChild(&field542);

field& field543 =  field();
field543.setName(CString("specularColor"));
field543.setAccessType(CString("inputOutput"));
field543.setType(CString("SFColor"));
field543.setValue(CString("0.5 0.5 0.5"));
ProtoInterface528.addChild(&field543);

field& field544 =  field();
field544.setName(CString("shininess"));
field544.setAccessType(CString("inputOutput"));
field544.setType(CString("SFFloat"));
field544.setValue(CString("0.2"));
ProtoInterface528.addChild(&field544);

field& field545 =  field();
field545.setName(CString("q"));
field545.setAccessType(CString("inputOutput"));
field545.setType(CString("SFVec2f"));
field545.setValue(CString("-0.5 -0.5"));
ProtoInterface528.addChild(&field545);

field& field546 =  field();
field546.setName(CString("s"));
field546.setAccessType(CString("inputOutput"));
field546.setType(CString("SFFloat"));
ProtoInterface528.addChild(&field546);

field& field547 =  field();
field547.setName(CString("t"));
field547.setAccessType(CString("inputOutput"));
field547.setType(CString("SFVec2f"));
field547.setValue(CString("1 1"));
ProtoInterface528.addChild(&field547);

field& field548 =  field();
field548.setName(CString("u"));
field548.setAccessType(CString("inputOutput"));
field548.setType(CString("SFVec2f"));
ProtoInterface528.addChild(&field548);

field& field549 =  field();
field549.setName(CString("Ab"));
field549.setAccessType(CString("inputOutput"));
field549.setType(CString("SFVec2f"));
field549.setValue(CString("1 1"));
ProtoInterface528.addChild(&field549);

field& field550 =  field();
field550.setName(CString("Bb"));
field550.setAccessType(CString("inputOutput"));
field550.setType(CString("SFFloat"));
ProtoInterface528.addChild(&field550);

field& field551 =  field();
field551.setName(CString("Cb"));
field551.setAccessType(CString("inputOutput"));
field551.setType(CString("SFFloat"));
ProtoInterface528.addChild(&field551);

field& field552 =  field();
field552.setName(CString("Db"));
field552.setAccessType(CString("inputOutput"));
field552.setType(CString("SFFloat"));
ProtoInterface528.addChild(&field552);

field& field553 =  field();
field553.setName(CString("Eb"));
field553.setAccessType(CString("inputOutput"));
field553.setType(CString("SFFloat"));
ProtoInterface528.addChild(&field553);

field& field554 =  field();
field554.setName(CString("B"));
field554.setAccessType(CString("inputOutput"));
field554.setType(CString("SFNode"));
ProtoInterface528.addChild(&field554);

field& field555 =  field();
field555.setName(CString("C"));
field555.setAccessType(CString("inputOutput"));
field555.setType(CString("MFNode"));
ProtoInterface528.addChild(&field555);

field& field556 =  field();
field556.setName(CString("D"));
field556.setAccessType(CString("inputOutput"));
field556.setType(CString("SFNode"));
ProtoInterface528.addChild(&field556);

field& field557 =  field();
field557.setName(CString("F"));
field557.setAccessType(CString("inputOutput"));
field557.setType(CString("SFInt32"));
field557.setValue(CString("-1"));
ProtoInterface528.addChild(&field557);

field& field558 =  field();
field558.setName(CString("p"));
field558.setAccessType(CString("initializeOnly"));
field558.setType(CString("SFBool"));
field558.setValue(CString("true"));
ProtoInterface528.addChild(&field558);

field& field559 =  field();
field559.setName(CString("Fb"));
field559.setAccessType(CString("initializeOnly"));
field559.setType(CString("SFBool"));
ProtoInterface528.addChild(&field559);

field& field560 =  field();
field560.setName(CString("Gb"));
field560.setAccessType(CString("initializeOnly"));
field560.setType(CString("SFBool"));
field560.setValue(CString("true"));
ProtoInterface528.addChild(&field560);

field& field561 =  field();
field561.setName(CString("Hb"));
field561.setAccessType(CString("initializeOnly"));
field561.setType(CString("SFVec2f"));
ProtoInterface528.addChild(&field561);

field& field562 =  field();
field562.setName(CString("Ib"));
field562.setAccessType(CString("initializeOnly"));
field562.setType(CString("SFVec2f"));
field562.setValue(CString("1 1"));
ProtoInterface528.addChild(&field562);

field& field563 =  field();
field563.setName(CString("Jb"));
field563.setAccessType(CString("initializeOnly"));
field563.setType(CString("SFColor"));
ProtoInterface528.addChild(&field563);

field& field564 =  field();
field564.setName(CString("Kb"));
field564.setAccessType(CString("initializeOnly"));
field564.setType(CString("SFColor"));
ProtoInterface528.addChild(&field564);

field& field565 =  field();
field565.setName(CString("Lb"));
field565.setAccessType(CString("initializeOnly"));
field565.setType(CString("SFInt32"));
field565.setValue(CString("-1"));
ProtoInterface528.addChild(&field565);

field& field566 =  field();
field566.setName(CString("coord"));
field566.setAccessType(CString("initializeOnly"));
field566.setType(CString("MFVec3f"));
ProtoInterface528.addChild(&field566);

field& field567 =  field();
field567.setName(CString("texCoord"));
field567.setAccessType(CString("initializeOnly"));
field567.setType(CString("MFVec2f"));
ProtoInterface528.addChild(&field567);

field& field568 =  field();
field568.setName(CString("coordIndex"));
field568.setAccessType(CString("initializeOnly"));
field568.setType(CString("MFInt32"));
ProtoInterface528.addChild(&field568);

field& field569 =  field();
field569.setName(CString("color"));
field569.setAccessType(CString("initializeOnly"));
field569.setType(CString("MFColor"));
ProtoInterface528.addChild(&field569);

field& field570 =  field();
field570.setName(CString("Mb"));
field570.setAccessType(CString("initializeOnly"));
field570.setType(CString("SFNode"));
ProtoInterface528.addChild(&field570);

field& field571 =  field();
field571.setName(CString("Nb"));
field571.setAccessType(CString("initializeOnly"));
field571.setType(CString("SFNode"));
ProtoInterface528.addChild(&field571);

field& field572 =  field();
field572.setName(CString("Ob"));
field572.setAccessType(CString("initializeOnly"));
field572.setType(CString("SFFloat"));
field572.setValue(CString("0.02"));
ProtoInterface528.addChild(&field572);

field& field573 =  field();
field573.setName(CString("Pb"));
field573.setAccessType(CString("initializeOnly"));
field573.setType(CString("SFFloat"));
field573.setValue(CString("1"));
ProtoInterface528.addChild(&field573);

field& field574 =  field();
field574.setName(CString("creaseAngle"));
field574.setAccessType(CString("initializeOnly"));
field574.setType(CString("SFFloat"));
field574.setValue(CString("0.524"));
ProtoInterface528.addChild(&field574);

field& field575 =  field();
field575.setName(CString("H"));
field575.setAccessType(CString("initializeOnly"));
field575.setType(CString("SFBool"));
field575.setValue(CString("true"));
ProtoInterface528.addChild(&field575);

field& field576 =  field();
field576.setName(CString("choice"));
field576.setAccessType(CString("initializeOnly"));
field576.setType(CString("SFInt32"));
ProtoInterface528.addChild(&field576);

field& field577 =  field();
field577.setName(CString("Qb"));
field577.setAccessType(CString("initializeOnly"));
field577.setType(CString("MFString"));
ProtoInterface528.addChild(&field577);

field& field578 =  field();
field578.setName(CString("Rb"));
field578.setAccessType(CString("initializeOnly"));
field578.setType(CString("MFString"));
field578.setValue(CString("\"SERIF\""));
ProtoInterface528.addChild(&field578);

field& field579 =  field();
field579.setName(CString("fontStyle"));
field579.setAccessType(CString("initializeOnly"));
field579.setType(CString("SFString"));
field579.setValue(CString("PLAIN"));
ProtoInterface528.addChild(&field579);

field& field580 =  field();
field580.setName(CString("Sb"));
field580.setAccessType(CString("initializeOnly"));
field580.setType(CString("SFString"));
ProtoInterface528.addChild(&field580);

field& field581 =  field();
field581.setName(CString("diffuseColor"));
field581.setAccessType(CString("initializeOnly"));
field581.setType(CString("SFColor"));
field581.setValue(CString("0 0.48 0.8"));
ProtoInterface528.addChild(&field581);

ProtoDeclare527.addChild(&ProtoInterface528);

ProtoBody& ProtoBody582 =  ProtoBody();
Switch& Switch583 =  Switch();
Switch583.setDEF(CString("Tb_1"));
Switch583.setWhichChoice(-1);
IS& IS584 =  IS();
Connect& connect585 =  Connect();
connect585.setNodeField(CString("whichChoice"));
connect585.setProtoField(CString("choice"));
IS584.addChild(&connect585);

Switch583.addChild(&IS584);

Shape& Shape586 =  Shape();
Appearance& Appearance587 =  Appearance();
Appearance587.setDEF(CString("Ub_1"));
Material& Material588 =  Material();
IS& IS589 =  IS();
Connect& connect590 =  Connect();
connect590.setNodeField(CString("diffuseColor"));
connect590.setProtoField(CString("diffuseColor"));
IS589.addChild(&connect590);

Connect& connect591 =  Connect();
connect591.setNodeField(CString("specularColor"));
connect591.setProtoField(CString("specularColor"));
IS589.addChild(&connect591);

Connect& connect592 =  Connect();
connect592.setNodeField(CString("emissiveColor"));
connect592.setProtoField(CString("emissiveColor"));
IS589.addChild(&connect592);

Connect& connect593 =  Connect();
connect593.setNodeField(CString("shininess"));
connect593.setProtoField(CString("shininess"));
IS589.addChild(&connect593);

Connect& connect594 =  Connect();
connect594.setNodeField(CString("transparency"));
connect594.setProtoField(CString("transparency"));
IS589.addChild(&connect594);

Material588.addChild(&IS589);

Appearance587.addChild(&Material588);

ImageTexture& ImageTexture595 =  ImageTexture();
ImageTexture595.setDEF(CString("Vb_1"));
IS& IS596 =  IS();
Connect& connect597 =  Connect();
connect597.setNodeField(CString("url"));
connect597.setProtoField(CString("url"));
IS596.addChild(&connect597);

ImageTexture595.addChild(&IS596);

Appearance587.addChild(&ImageTexture595);

TextureTransform& TextureTransform598 =  TextureTransform();
TextureTransform598.setDEF(CString("Wb_1"));
IS& IS599 =  IS();
Connect& connect600 =  Connect();
connect600.setNodeField(CString("translation"));
connect600.setProtoField(CString("u"));
IS599.addChild(&connect600);

Connect& connect601 =  Connect();
connect601.setNodeField(CString("rotation"));
connect601.setProtoField(CString("s"));
IS599.addChild(&connect601);

Connect& connect602 =  Connect();
connect602.setNodeField(CString("scale"));
connect602.setProtoField(CString("t"));
IS599.addChild(&connect602);

Connect& connect603 =  Connect();
connect603.setNodeField(CString("center"));
connect603.setProtoField(CString("q"));
IS599.addChild(&connect603);

TextureTransform598.addChild(&IS599);

Appearance587.setTextureTransform(TextureTransform598);

Shape586.addChild(&Appearance587);

IndexedFaceSet& IndexedFaceSet604 =  IndexedFaceSet();
IndexedFaceSet604.setDEF(CString("Xb_1"));
IndexedFaceSet604.setConvex(false);
IS& IS605 =  IS();
Connect& connect606 =  Connect();
connect606.setNodeField(CString("solid"));
connect606.setProtoField(CString("Gb"));
IS605.addChild(&connect606);

Connect& connect607 =  Connect();
connect607.setNodeField(CString("creaseAngle"));
connect607.setProtoField(CString("creaseAngle"));
IS605.addChild(&connect607);

Connect& connect608 =  Connect();
connect608.setNodeField(CString("coordIndex"));
connect608.setProtoField(CString("coordIndex"));
IS605.addChild(&connect608);

IndexedFaceSet604.addChild(&IS605);

TextureCoordinate& TextureCoordinate609 =  TextureCoordinate();
TextureCoordinate609.setDEF(CString("Zb_1"));
IS& IS610 =  IS();
Connect& connect611 =  Connect();
connect611.setNodeField(CString("point"));
connect611.setProtoField(CString("texCoord"));
IS610.addChild(&connect611);

TextureCoordinate609.addChild(&IS610);

IndexedFaceSet604.setTexCoord(&TextureCoordinate609);

Coordinate& Coordinate612 =  Coordinate();
Coordinate612.setDEF(CString("Yb_1"));
IS& IS613 =  IS();
Connect& connect614 =  Connect();
connect614.setNodeField(CString("point"));
connect614.setProtoField(CString("coord"));
IS613.addChild(&connect614);

Coordinate612.addChild(&IS613);

IndexedFaceSet604.setCoord(&Coordinate612);

Shape586.setGeometry(&IndexedFaceSet604);

Switch583.addChild(&Shape586);

Shape& Shape615 =  Shape();
Appearance& Appearance616 =  Appearance();
Appearance616.setDEF(CString("ac_1"));
ImageTexture& ImageTexture617 =  ImageTexture();
ImageTexture617.setUSE(CString("Vb_1"));
Appearance616.addChild(&ImageTexture617);

TextureTransform& TextureTransform618 =  TextureTransform();
TextureTransform618.setUSE(CString("Wb_1"));
Appearance616.setTextureTransform(TextureTransform618);

Shape615.addChild(&Appearance616);

IndexedFaceSet& IndexedFaceSet619 =  IndexedFaceSet();
IndexedFaceSet619.setDEF(CString("bc_1"));
IndexedFaceSet619.setConvex(false);
IS& IS620 =  IS();
Connect& connect621 =  Connect();
connect621.setNodeField(CString("solid"));
connect621.setProtoField(CString("Gb"));
IS620.addChild(&connect621);

Connect& connect622 =  Connect();
connect622.setNodeField(CString("creaseAngle"));
connect622.setProtoField(CString("creaseAngle"));
IS620.addChild(&connect622);

Connect& connect623 =  Connect();
connect623.setNodeField(CString("coordIndex"));
connect623.setProtoField(CString("coordIndex"));
IS620.addChild(&connect623);

IndexedFaceSet619.addChild(&IS620);

CColor& Color624 =  CColor();
Color624.setDEF(CString("dc_1"));
IS& IS625 =  IS();
Connect& connect626 =  Connect();
connect626.setNodeField(CString("color"));
connect626.setProtoField(CString("color"));
IS625.addChild(&connect626);

Color624.addChild(&IS625);

IndexedFaceSet619.setColor(&Color624);

TextureCoordinate& TextureCoordinate627 =  TextureCoordinate();
TextureCoordinate627.setDEF(CString("ec_1"));
IS& IS628 =  IS();
Connect& connect629 =  Connect();
connect629.setNodeField(CString("point"));
connect629.setProtoField(CString("texCoord"));
IS628.addChild(&connect629);

TextureCoordinate627.addChild(&IS628);

IndexedFaceSet619.setTexCoord(&TextureCoordinate627);

Coordinate& Coordinate630 =  Coordinate();
Coordinate630.setDEF(CString("cc_1"));
IS& IS631 =  IS();
Connect& connect632 =  Connect();
connect632.setNodeField(CString("point"));
connect632.setProtoField(CString("coord"));
IS631.addChild(&connect632);

Coordinate630.addChild(&IS631);

IndexedFaceSet619.setCoord(&Coordinate630);

Shape615.setGeometry(&IndexedFaceSet619);

Switch583.addChild(&Shape615);

Shape& Shape633 =  Shape();
Appearance& Appearance634 =  Appearance();
Appearance634.setUSE(CString("Ub_1"));
Shape633.addChild(&Appearance634);

IndexedFaceSet& IndexedFaceSet635 =  IndexedFaceSet();
IndexedFaceSet635.setUSE(CString("bc_1"));
Shape633.setGeometry(&IndexedFaceSet635);

Switch583.addChild(&Shape633);

Shape& Shape636 =  Shape();
Appearance& Appearance637 =  Appearance();
Appearance637.setUSE(CString("ac_1"));
Shape636.addChild(&Appearance637);

IndexedFaceSet& IndexedFaceSet638 =  IndexedFaceSet();
IndexedFaceSet638.setUSE(CString("bc_1"));
Shape636.setGeometry(&IndexedFaceSet638);

Switch583.addChild(&Shape636);

Shape& Shape639 =  Shape();
Appearance& Appearance640 =  Appearance();
Appearance640.setUSE(CString("Ub_1"));
Shape639.addChild(&Appearance640);

Text& Text641 =  Text();
Text641.setDEF(CString("fc_1"));
IS& IS642 =  IS();
Connect& connect643 =  Connect();
connect643.setNodeField(CString("string"));
connect643.setProtoField(CString("Qb"));
IS642.addChild(&connect643);

Text641.addChild(&IS642);

CFontStyle& FontStyle644 =  CFontStyle();
IS& IS645 =  IS();
Connect& connect646 =  Connect();
connect646.setNodeField(CString("language"));
connect646.setProtoField(CString("Sb"));
IS645.addChild(&connect646);

Connect& connect647 =  Connect();
connect647.setNodeField(CString("family"));
connect647.setProtoField(CString("Rb"));
IS645.addChild(&connect647);

Connect& connect648 =  Connect();
connect648.setNodeField(CString("style"));
connect648.setProtoField(CString("fontStyle"));
IS645.addChild(&connect648);

FontStyle644.addChild(&IS645);

Text641.setFontStyle(&FontStyle644);

Shape639.setGeometry(&Text641);

Switch583.addChild(&Shape639);

Shape& Shape649 =  Shape();
Appearance& Appearance650 =  Appearance();
Appearance650.setUSE(CString("ac_1"));
Shape649.addChild(&Appearance650);

Text& Text651 =  Text();
Text651.setUSE(CString("fc_1"));
Shape649.setGeometry(&Text651);

Switch583.addChild(&Shape649);

ProtoBody582.addChild(&Switch583);

Script& Script652 =  Script();
Script652.setDEF(CString("gc_1"));
Script652.setDirectOutput(true);
field& field653 =  field();
field653.setName(CString("set_p"));
field653.setAccessType(CString("inputOnly"));
field653.setType(CString("SFBool"));
Script652.addChild(&field653);

field& field654 =  field();
field654.setName(CString("set_coord"));
field654.setAccessType(CString("inputOnly"));
field654.setType(CString("MFVec3f"));
Script652.addChild(&field654);

field& field655 =  field();
field655.setName(CString("set_texCoord"));
field655.setAccessType(CString("inputOnly"));
field655.setType(CString("MFVec2f"));
Script652.addChild(&field655);

field& field656 =  field();
field656.setName(CString("set_diffuseColor"));
field656.setAccessType(CString("inputOnly"));
field656.setType(CString("SFColor"));
Script652.addChild(&field656);

field& field657 =  field();
field657.setName(CString("w"));
field657.setAccessType(CString("inputOnly"));
field657.setType(CString("SFBool"));
Script652.addChild(&field657);

field& field658 =  field();
field658.setName(CString("set_v"));
field658.setAccessType(CString("inputOnly"));
field658.setType(CString("SFNode"));
Script652.addChild(&field658);

field& field659 =  field();
field659.setName(CString("choice"));
field659.setAccessType(CString("outputOnly"));
field659.setType(CString("SFInt32"));
Script652.addChild(&field659);

field& field660 =  field();
field660.setName(CString("coordIndex"));
field660.setAccessType(CString("outputOnly"));
field660.setType(CString("MFInt32"));
Script652.addChild(&field660);

field& field661 =  field();
field661.setName(CString("color_changed"));
field661.setAccessType(CString("outputOnly"));
field661.setType(CString("MFColor"));
Script652.addChild(&field661);

field& field662 =  field();
field662.setName(CString("p_changed"));
field662.setAccessType(CString("outputOnly"));
field662.setType(CString("SFBool"));
Script652.addChild(&field662);

field& field663 =  field();
field663.setName(CString("coord_changed"));
field663.setAccessType(CString("outputOnly"));
field663.setType(CString("MFVec3f"));
Script652.addChild(&field663);

field& field664 =  field();
field664.setName(CString("texCoord_changed"));
field664.setAccessType(CString("outputOnly"));
field664.setType(CString("MFVec2f"));
Script652.addChild(&field664);

field& field665 =  field();
field665.setName(CString("diffuseColor_changed"));
field665.setAccessType(CString("outputOnly"));
field665.setType(CString("SFColor"));
Script652.addChild(&field665);

field& field666 =  field();
field666.setName(CString("v_changed"));
field666.setAccessType(CString("outputOnly"));
field666.setType(CString("SFNode"));
Script652.addChild(&field666);

field& field667 =  field();
field667.setName(CString("hc"));
field667.setAccessType(CString("initializeOnly"));
field667.setType(CString("SFInt32"));
Script652.addChild(&field667);

field& field668 =  field();
field668.setName(CString("p"));
field668.setAccessType(CString("initializeOnly"));
field668.setType(CString("SFBool"));
Script652.addChild(&field668);

field& field669 =  field();
field669.setName(CString("coord"));
field669.setAccessType(CString("initializeOnly"));
field669.setType(CString("MFVec3f"));
Script652.addChild(&field669);

field& field670 =  field();
field670.setName(CString("texCoord"));
field670.setAccessType(CString("initializeOnly"));
field670.setType(CString("MFVec2f"));
Script652.addChild(&field670);

field& field671 =  field();
field671.setName(CString("H"));
field671.setAccessType(CString("initializeOnly"));
field671.setType(CString("SFBool"));
Script652.addChild(&field671);

field& field672 =  field();
field672.setName(CString("color"));
field672.setAccessType(CString("initializeOnly"));
field672.setType(CString("MFColor"));
Script652.addChild(&field672);

field& field673 =  field();
field673.setName(CString("Hb"));
field673.setAccessType(CString("initializeOnly"));
field673.setType(CString("SFVec2f"));
Script652.addChild(&field673);

field& field674 =  field();
field674.setName(CString("Ib"));
field674.setAccessType(CString("initializeOnly"));
field674.setType(CString("SFVec2f"));
Script652.addChild(&field674);

field& field675 =  field();
field675.setName(CString("Jb"));
field675.setAccessType(CString("initializeOnly"));
field675.setType(CString("SFColor"));
Script652.addChild(&field675);

field& field676 =  field();
field676.setName(CString("Kb"));
field676.setAccessType(CString("initializeOnly"));
field676.setType(CString("SFColor"));
Script652.addChild(&field676);

field& field677 =  field();
field677.setName(CString("Lb"));
field677.setAccessType(CString("initializeOnly"));
field677.setType(CString("SFInt32"));
Script652.addChild(&field677);

field& field678 =  field();
field678.setName(CString("diffuseColor"));
field678.setAccessType(CString("initializeOnly"));
field678.setType(CString("SFColor"));
Script652.addChild(&field678);

field& field679 =  field();
field679.setName(CString("Mb"));
field679.setAccessType(CString("initializeOnly"));
field679.setType(CString("SFNode"));
Script652.addChild(&field679);

field& field680 =  field();
field680.setName(CString("Nb"));
field680.setAccessType(CString("initializeOnly"));
field680.setType(CString("SFNode"));
Script652.addChild(&field680);

field& field681 =  field();
field681.setName(CString("Ob"));
field681.setAccessType(CString("initializeOnly"));
field681.setType(CString("SFFloat"));
Script652.addChild(&field681);

field& field682 =  field();
field682.setName(CString("Pb"));
field682.setAccessType(CString("initializeOnly"));
field682.setType(CString("SFFloat"));
Script652.addChild(&field682);

field& field683 =  field();
field683.setName(CString("Fb"));
field683.setAccessType(CString("initializeOnly"));
field683.setType(CString("SFBool"));
Script652.addChild(&field683);

field& field684 =  field();
field684.setName(CString("Gb"));
field684.setAccessType(CString("initializeOnly"));
field684.setType(CString("SFBool"));
Script652.addChild(&field684);

field& field685 =  field();
field685.setName(CString("ma"));
field685.setAccessType(CString("initializeOnly"));
field685.setType(CString("SFNode"));
Switch& Switch686 =  Switch();
Switch686.setUSE(CString("Tb_1"));
field685.addChild(Switch686);

Script652.addChild(&field685);

field& field687 =  field();
field687.setName(CString("ic"));
field687.setAccessType(CString("initializeOnly"));
field687.setType(CString("SFNode"));
Appearance& Appearance688 =  Appearance();
Appearance688.setUSE(CString("Ub_1"));
field687.addChild(&Appearance688);

Script652.addChild(&field687);

field& field689 =  field();
field689.setName(CString("jc"));
field689.setAccessType(CString("initializeOnly"));
field689.setType(CString("SFNode"));
Appearance& Appearance690 =  Appearance();
Appearance690.setUSE(CString("ac_1"));
field689.addChild(&Appearance690);

Script652.addChild(&field689);

IS& IS691 =  IS();
Connect& connect692 =  Connect();
connect692.setNodeField(CString("set_p"));
connect692.setProtoField(CString("set_p"));
IS691.addChild(&connect692);

Connect& connect693 =  Connect();
connect693.setNodeField(CString("set_coord"));
connect693.setProtoField(CString("set_coord"));
IS691.addChild(&connect693);

Connect& connect694 =  Connect();
connect694.setNodeField(CString("set_texCoord"));
connect694.setProtoField(CString("set_texCoord"));
IS691.addChild(&connect694);

Connect& connect695 =  Connect();
connect695.setNodeField(CString("set_diffuseColor"));
connect695.setProtoField(CString("set_diffuseColor"));
IS691.addChild(&connect695);

Connect& connect696 =  Connect();
connect696.setNodeField(CString("w"));
connect696.setProtoField(CString("w"));
IS691.addChild(&connect696);

Connect& connect697 =  Connect();
connect697.setNodeField(CString("set_v"));
connect697.setProtoField(CString("set_v"));
IS691.addChild(&connect697);

Connect& connect698 =  Connect();
connect698.setNodeField(CString("p_changed"));
connect698.setProtoField(CString("p_changed"));
IS691.addChild(&connect698);

Connect& connect699 =  Connect();
connect699.setNodeField(CString("coord_changed"));
connect699.setProtoField(CString("coord_changed"));
IS691.addChild(&connect699);

Connect& connect700 =  Connect();
connect700.setNodeField(CString("texCoord_changed"));
connect700.setProtoField(CString("texCoord_changed"));
IS691.addChild(&connect700);

Connect& connect701 =  Connect();
connect701.setNodeField(CString("diffuseColor_changed"));
connect701.setProtoField(CString("diffuseColor_changed"));
IS691.addChild(&connect701);

Connect& connect702 =  Connect();
connect702.setNodeField(CString("v_changed"));
connect702.setProtoField(CString("v_changed"));
IS691.addChild(&connect702);

Connect& connect703 =  Connect();
connect703.setNodeField(CString("hc"));
connect703.setProtoField(CString("choice"));
IS691.addChild(&connect703);

Connect& connect704 =  Connect();
connect704.setNodeField(CString("p"));
connect704.setProtoField(CString("p"));
IS691.addChild(&connect704);

Connect& connect705 =  Connect();
connect705.setNodeField(CString("H"));
connect705.setProtoField(CString("H"));
IS691.addChild(&connect705);

Connect& connect706 =  Connect();
connect706.setNodeField(CString("Hb"));
connect706.setProtoField(CString("Hb"));
IS691.addChild(&connect706);

Connect& connect707 =  Connect();
connect707.setNodeField(CString("Ib"));
connect707.setProtoField(CString("Ib"));
IS691.addChild(&connect707);

Connect& connect708 =  Connect();
connect708.setNodeField(CString("Jb"));
connect708.setProtoField(CString("Jb"));
IS691.addChild(&connect708);

Connect& connect709 =  Connect();
connect709.setNodeField(CString("Kb"));
connect709.setProtoField(CString("Kb"));
IS691.addChild(&connect709);

Connect& connect710 =  Connect();
connect710.setNodeField(CString("Lb"));
connect710.setProtoField(CString("Lb"));
IS691.addChild(&connect710);

Connect& connect711 =  Connect();
connect711.setNodeField(CString("diffuseColor"));
connect711.setProtoField(CString("diffuseColor"));
IS691.addChild(&connect711);

Connect& connect712 =  Connect();
connect712.setNodeField(CString("Mb"));
connect712.setProtoField(CString("Mb"));
IS691.addChild(&connect712);

Connect& connect713 =  Connect();
connect713.setNodeField(CString("Nb"));
connect713.setProtoField(CString("Nb"));
IS691.addChild(&connect713);

Connect& connect714 =  Connect();
connect714.setNodeField(CString("Ob"));
connect714.setProtoField(CString("Ob"));
IS691.addChild(&connect714);

Connect& connect715 =  Connect();
connect715.setNodeField(CString("Pb"));
connect715.setProtoField(CString("Pb"));
IS691.addChild(&connect715);

Connect& connect716 =  Connect();
connect716.setNodeField(CString("Fb"));
connect716.setProtoField(CString("Fb"));
IS691.addChild(&connect716);

Connect& connect717 =  Connect();
connect717.setNodeField(CString("Gb"));
connect717.setProtoField(CString("Gb"));
IS691.addChild(&connect717);

Script652.addChild(&IS691);


//Script652.setSourceCode(CString("javascript:")+
//_T("function kc()")+
//_T("{")+
//_T("R=0;")+
//_T("lc=-1;")+
//_T("for(J=0;J<Mb.mc.length-1;J++){")+
//_T("R=J;")+
//_T("nc=Mb.mc[J];")+
//_T("oc=Mb.mc[J+1];")+
//_T("for(J+=2;J<Mb.mc.length-1")+
//_T("&&Mb.mc[J]!=-1;J++);")+
//_T("lc=J-1;")+
//_T("pc=Mb.mc[lc];")+
//_T("for(qc=R;qc<=lc;qc++){")+
//_T("rc=coord[pc].x;")+
//_T("sc=coord[pc].y;")+
//_T("tc=coord[nc].x;")+
//_T("uc=coord[nc].y;")+
//_T("vc=coord[oc].x;")+
//_T("wc=coord[oc].y;")+
//_T("xc=sc-uc;")+
//_T("yc=tc-rc;")+
//_T("zc=rc*(uc-sc)-sc*(tc-rc);")+
//_T("Ac=uc-wc;")+
//_T("Bc=vc-tc;")+
//_T("Cc=tc*(wc-uc)-uc*(vc-tc);")+
//_T("Dc=1.0/Math.sqrt(xc*xc+yc*yc);")+
//_T("xc*=Dc;")+
//_T("yc*=Dc;")+
//_T("zc*=Dc;")+
//_T("Ec=1.0/Math.sqrt(Ac*Ac+Bc*Bc);")+
//_T("Ac*=Ec;")+
//_T("Bc*=Ec;")+
//_T("Cc*=Ec;")+
//_T("for(Fc=0;Fc<Nb.Gc.length;Fc++){")+
//_T("Hc=Nb.Gc[Fc].y*Ob;")+
//_T("if(Hc==0)")+
//_T("continue;")+
//_T("Ic=zc+Hc;")+
//_T("Jc=Cc+Hc;")+
//_T("Kc=xc*Bc-Ac*yc;")+
//_T("if(Math.abs(Kc)<0.001){")+
//_T("Lc=yc;")+
//_T("Mc=-xc;")+
//_T("Nc=-xc*uc-yc*tc+Hc;")+
//_T("Oc=1.0/(xc*Mc-Lc*yc);")+
//_T("Pc=(yc*Jc-Bc*Ic)*Oc;")+
//_T("Qc=(Ac*Ic-xc*Jc)*Oc;")+
//_T("}else{")+
//_T("Oc=1.0/Kc;")+
//_T("Pc=(yc*Jc-Bc*Ic)*Oc;")+
//_T("Qc=(Ac*Ic-xc*Jc)*Oc;")+
//_T("}")+
//_T("Rc=nc+(Fc*Mb.coord.length);")+
//_T("coord[Rc].x=Pc;")+
//_T("coord[Rc].y=Qc;")+
//_T("}")+
//_T("pc=nc;")+
//_T("nc=oc;")+
//_T("if(qc<lc-1)")+
//_T("oc=Mb.mc[qc+2];")+
//_T("else")+
//_T("oc=Mb.mc[R];")+
//_T("}")+
//_T("}")+
//_T("}")+
//_T("function Sc()")+
//_T("{")+
//_T("coord.length=Mb.coord.length*Nb.Gc.length;")+
//_T("Tc=FALSE;")+
//_T("Uc=0;")+
//_T("for(Fc=0;Fc<Nb.Gc.length;Fc++){")+
//_T("Vc=-1*Nb.Gc[Fc].x*Pb;")+
//_T("if(Nb.Gc[Fc].y!=0)")+
//_T("Tc=TRUE;")+
//_T("for(Wc=0;Wc<Mb.coord.length;Wc++){")+
//_T("coord[Uc].x=Mb.coord[Wc].x;")+
//_T("coord[Uc].y=Mb.coord[Wc].y;")+
//_T("coord[Uc].z=Vc;")+
//_T("Uc++;")+
//_T("}")+
//_T("}")+
//_T("coordIndex=Mb.coordIndex;")+
//_T("coordIndex.length=Mb.coordIndex.length*2")+
//_T("+(Mb.mc.length-1)*(Nb.Gc.length-1);")+
//_T("Xc=TRUE;")+
//_T("for(qc=Mb.coordIndex.length,Fc=0;")+
//_T("Fc<Nb.Gc.length-1;Fc++){")+
//_T("Yc=Mb.coord.length*Fc;")+
//_T("for(J=0;J<Mb.mc.length-1;J++){")+
//_T("Zc=Mb.mc[J];")+
//_T("if(Xc){")+
//_T("R=Zc;")+
//_T("Xc=FALSE;")+
//_T("}")+
//_T("ad=Mb.mc[J+1];")+
//_T("if(J>=Mb.mc.length-2||ad==-1){")+
//_T("ad=R;")+
//_T("Xc=TRUE;")+
//_T("}")+
//_T("if(Zc!=-1&&ad!=-1){")+
//_T("Zc+=Yc;")+
//_T("ad+=Yc;")+
//_T("bd=Zc+Mb.coord.length;")+
//_T("cd=ad+Mb.coord.length;")+
//_T("coordIndex[qc++]=Zc;")+
//_T("coordIndex[qc++]=bd;")+
//_T("coordIndex[qc++]=ad;")+
//_T("coordIndex[qc++]=-1;")+
//_T("coordIndex[qc++]=ad;")+
//_T("coordIndex[qc++]=bd;")+
//_T("coordIndex[qc++]=cd;")+
//_T("coordIndex[qc++]=-1;")+
//_T("}")+
//_T("else")+
//_T("Xc=TRUE;")+
//_T("}")+
//_T("}")+
//_T("dd=Mb.coord.length*(Nb.Gc.length-1);")+
//_T("for(J=Mb.coordIndex.length-2;J>=0;J--,qc++){")+
//_T("ed=Mb.coordIndex[J];")+
//_T("if(ed!=-1){")+
//_T("ed+=dd;")+
//_T("}")+
//_T("coordIndex[qc]=ed;")+
//_T("}")+
//_T("coordIndex[qc]=-1;qc++;")+
//_T("coordIndex.length=qc;")+
//_T("if(Tc){")+
//_T("kc();")+
//_T("}")+
//_T("coord_changed=coord;")+
//_T("}")+
//_T("function fd(){")+
//_T("coord=Mb.coord;")+
//_T("coordIndex=Mb.coordIndex;")+
//_T("coord_changed=coord;")+
//_T("}")+
//_T("function gd(){")+
//_T("if((H==TRUE)&&(Lb==-1))return;")+
//_T("if(Lb==0){")+
//_T("min=Hb.x;")+
//_T("max=Ib.x;")+
//_T("}")+
//_T("else{")+
//_T("min=Hb.y;")+
//_T("max=Ib.y;")+
//_T("}")+
//_T("hd=max-min;")+
//_T("color.length=coord.length;")+
//_T("for(id=0;id<coord.length;id++){")+
//_T("if(hd==0.0){")+
//_T("fraction=0.0;")+
//_T("}else{")+
//_T("if(Lb==0){")+
//_T("fraction=(coord[id].x-min)/hd;")+
//_T("}else{")+
//_T("fraction=(coord[id].y-min)/hd;")+
//_T("}")+
//_T("}")+
//_T("jd=new SFColor(0,0,0);")+
//_T("if(Lb==-1){")+
//_T("jd=diffuseColor;")+
//_T("}else{")+
//_T("if(fraction<0){fraction=0;}")+
//_T("if(fraction>1){fraction=1;}")+
//_T("jd.r=Kb.r*(1-fraction)+")+
//_T("Jb.r*fraction;")+
//_T("jd.g=Kb.g*(1-fraction)+")+
//_T("Jb.g*fraction;")+
//_T("jd.b=Kb.b*(1-fraction)+")+
//_T("Jb.b*fraction;")+
//_T("}")+
//_T("color[id]=jd;")+
//_T("}")+
//_T("color_changed=color;")+
//_T("}")+
//_T("function kd(){")+
//_T("hd=new SFVec2f(0,0);")+
//_T("hd.x=Ib.x-Hb.x;")+
//_T("hd.y=Ib.y-Hb.y;")+
//_T("texCoord.length=coord.length;")+
//_T("for(id=0;id<coord.length;id++){")+
//_T("if(hd.x==0.0){")+
//_T("texCoord[id].x=0.0;")+
//_T("}else{")+
//_T("texCoord[id].x=(coord[id].x-Hb.x)/hd.x;")+
//_T("}")+
//_T("if(hd.y==0.0){")+
//_T("texCoord[id].y=0.0;")+
//_T("}else{")+
//_T("texCoord[id].y=(coord[id].y-Hb.y)/hd.y;")+
//_T("}")+
//_T("}")+
//_T("texCoord_changed=texCoord;")+
//_T("}")+
//_T("function set_p(n){")+
//_T("if(n==TRUE){")+
//_T("if(H==TRUE){")+
//_T("if(hc>=4){")+
//_T("ma.whichChoice=4;")+
//_T("choice=4;")+
//_T("}")+
//_T("else if(Lb>=0){")+
//_T("ma.whichChoice=2;")+
//_T("choice=2;")+
//_T("}else{")+
//_T("ma.whichChoice=0;")+
//_T("choice=0;")+
//_T("}")+
//_T("}else{")+
//_T("if(hc>=4){")+
//_T("ma.whichChoice=5;")+
//_T("choice=5;")+
//_T("}")+
//_T("else if(Lb>=0){")+
//_T("ma.whichChoice=3;")+
//_T("choice=3;")+
//_T("}else{")+
//_T("ma.whichChoice=1;")+
//_T("choice=1;")+
//_T("}")+
//_T("}")+
//_T("}else{")+
//_T("ma.whichChoice=-1;")+
//_T("choice=-1;")+
//_T("}")+
//_T("p=n;")+
//_T("p_changed=n;")+
//_T("}")+
//_T("function ld()")+
//_T("{")+
//_T("if(Fb){")+
//_T("fd();")+
//_T("}")+
//_T("else{")+
//_T("Sc();")+
//_T("}")+
//_T("}")+
//_T("function initialize(){")+
//_T("set_p(p);")+
//_T("v_changed=ic.texture_changed;")+
//_T("diffuseColor_changed=diffuseColor;")+
//_T("if(hc<4){")+
//_T("ld();")+
//_T("kd();")+
//_T("gd();")+
//_T("}")+
//_T("}")+
//_T("function set_diffuseColor(n){")+
//_T("diffuseColor=n;")+
//_T("diffuseColor_changed=n;")+
//_T("gd();")+
//_T("}")+
//_T("function set_v(n){")+
//_T("ic.set_texture=n;")+
//_T("jc.set_texture=n;")+
//_T("v_changed=n;")+
//_T("}")+
//_T("function w(){")+
//_T("}"));
ProtoBody582.addChild(&Script652);

ROUTE& ROUTE718 =  ROUTE();
ROUTE718.setFromNode(CString("gc_1"));
ROUTE718.setFromField(CString("coord_changed"));
ROUTE718.setToNode(CString("Yb_1"));
ROUTE718.setToField(CString("set_point"));
ProtoBody582.addChild(&ROUTE718);

ROUTE& ROUTE719 =  ROUTE();
ROUTE719.setFromNode(CString("gc_1"));
ROUTE719.setFromField(CString("texCoord_changed"));
ROUTE719.setToNode(CString("Zb_1"));
ROUTE719.setToField(CString("set_point"));
ProtoBody582.addChild(&ROUTE719);

ROUTE& ROUTE720 =  ROUTE();
ROUTE720.setFromNode(CString("gc_1"));
ROUTE720.setFromField(CString("coordIndex"));
ROUTE720.setToNode(CString("Xb_1"));
ROUTE720.setToField(CString("set_coordIndex"));
ProtoBody582.addChild(&ROUTE720);

ROUTE& ROUTE721 =  ROUTE();
ROUTE721.setFromNode(CString("gc_1"));
ROUTE721.setFromField(CString("coord_changed"));
ROUTE721.setToNode(CString("cc_1"));
ROUTE721.setToField(CString("set_point"));
ProtoBody582.addChild(&ROUTE721);

ROUTE& ROUTE722 =  ROUTE();
ROUTE722.setFromNode(CString("gc_1"));
ROUTE722.setFromField(CString("color_changed"));
ROUTE722.setToNode(CString("dc_1"));
ROUTE722.setToField(CString("set_color"));
ProtoBody582.addChild(&ROUTE722);

ROUTE& ROUTE723 =  ROUTE();
ROUTE723.setFromNode(CString("gc_1"));
ROUTE723.setFromField(CString("texCoord_changed"));
ROUTE723.setToNode(CString("ec_1"));
ROUTE723.setToField(CString("set_point"));
ProtoBody582.addChild(&ROUTE723);

ROUTE& ROUTE724 =  ROUTE();
ROUTE724.setFromNode(CString("gc_1"));
ROUTE724.setFromField(CString("coordIndex"));
ROUTE724.setToNode(CString("bc_1"));
ROUTE724.setToField(CString("set_coordIndex"));
ProtoBody582.addChild(&ROUTE724);

ROUTE& ROUTE725 =  ROUTE();
ROUTE725.setFromNode(CString("gc_1"));
ROUTE725.setFromField(CString("coordIndex"));
ROUTE725.setToNode(CString("bc_1"));
ROUTE725.setToField(CString("set_colorIndex"));
ProtoBody582.addChild(&ROUTE725);

ROUTE& ROUTE726 =  ROUTE();
ROUTE726.setFromNode(CString("gc_1"));
ROUTE726.setFromField(CString("choice"));
ROUTE726.setToNode(CString("Tb_1"));
ROUTE726.setToField(CString("set_whichChoice"));
ProtoBody582.addChild(&ROUTE726);

ProtoDeclare527.addChild(&ProtoBody582);

Scene7.addChild(&ProtoDeclare527);

ProtoDeclare& ProtoDeclare727 =  ProtoDeclare();
ProtoDeclare727.setName(CString("md"));
ProtoInterface& ProtoInterface728 =  ProtoInterface();
field& field729 =  field();
field729.setName(CString("coord"));
field729.setAccessType(CString("inputOutput"));
field729.setType(CString("MFVec3f"));
ProtoInterface728.addChild(&field729);

field& field730 =  field();
field730.setName(CString("coordIndex"));
field730.setAccessType(CString("inputOutput"));
field730.setType(CString("MFInt32"));
ProtoInterface728.addChild(&field730);

field& field731 =  field();
field731.setName(CString("mc"));
field731.setAccessType(CString("inputOutput"));
field731.setType(CString("MFInt32"));
ProtoInterface728.addChild(&field731);

ProtoDeclare727.addChild(&ProtoInterface728);

ProtoBody& ProtoBody732 =  ProtoBody();
Group& Group733 =  Group();
ProtoBody732.addChild(&Group733);

ProtoDeclare727.addChild(&ProtoBody732);

Scene7.addChild(&ProtoDeclare727);

ProtoDeclare& ProtoDeclare734 =  ProtoDeclare();
ProtoDeclare734.setName(CString("nd"));
ProtoInterface& ProtoInterface735 =  ProtoInterface();
field& field736 =  field();
field736.setName(CString("R"));
field736.setAccessType(CString("inputOnly"));
field736.setType(CString("SFTime"));
ProtoInterface735.addChild(&field736);

field& field737 =  field();
field737.setName(CString("S"));
field737.setAccessType(CString("inputOnly"));
field737.setType(CString("SFTime"));
ProtoInterface735.addChild(&field737);

field& field738 =  field();
field738.setName(CString("set_od"));
field738.setAccessType(CString("inputOnly"));
field738.setType(CString("SFFloat"));
ProtoInterface735.addChild(&field738);

field& field739 =  field();
field739.setName(CString("set_fraction"));
field739.setAccessType(CString("inputOnly"));
field739.setType(CString("SFFloat"));
ProtoInterface735.addChild(&field739);

field& field740 =  field();
field740.setName(CString("R_changed"));
field740.setAccessType(CString("outputOnly"));
field740.setType(CString("SFTime"));
ProtoInterface735.addChild(&field740);

field& field741 =  field();
field741.setName(CString("U"));
field741.setAccessType(CString("initializeOnly"));
field741.setType(CString("SFNode"));
ProtoInterface735.addChild(&field741);

field& field742 =  field();
field742.setName(CString("hb"));
field742.setAccessType(CString("initializeOnly"));
field742.setType(CString("SFBool"));
ProtoInterface735.addChild(&field742);

field& field743 =  field();
field743.setName(CString("ib"));
field743.setAccessType(CString("initializeOnly"));
field743.setType(CString("SFBool"));
ProtoInterface735.addChild(&field743);

field& field744 =  field();
field744.setName(CString("pd"));
field744.setAccessType(CString("initializeOnly"));
field744.setType(CString("SFBool"));
ProtoInterface735.addChild(&field744);

field& field745 =  field();
field745.setName(CString("qd"));
field745.setAccessType(CString("initializeOnly"));
field745.setType(CString("SFBool"));
ProtoInterface735.addChild(&field745);

field& field746 =  field();
field746.setName(CString("rd"));
field746.setAccessType(CString("initializeOnly"));
field746.setType(CString("SFBool"));
ProtoInterface735.addChild(&field746);

field& field747 =  field();
field747.setName(CString("sd"));
field747.setAccessType(CString("initializeOnly"));
field747.setType(CString("SFBool"));
ProtoInterface735.addChild(&field747);

field& field748 =  field();
field748.setName(CString("td"));
field748.setAccessType(CString("initializeOnly"));
field748.setType(CString("SFBool"));
ProtoInterface735.addChild(&field748);

field& field749 =  field();
field749.setName(CString("ud"));
field749.setAccessType(CString("initializeOnly"));
field749.setType(CString("SFBool"));
ProtoInterface735.addChild(&field749);

field& field750 =  field();
field750.setName(CString("vd"));
field750.setAccessType(CString("initializeOnly"));
field750.setType(CString("SFBool"));
ProtoInterface735.addChild(&field750);

field& field751 =  field();
field751.setName(CString("wd"));
field751.setAccessType(CString("initializeOnly"));
field751.setType(CString("SFBool"));
ProtoInterface735.addChild(&field751);

field& field752 =  field();
field752.setName(CString("xd"));
field752.setAccessType(CString("initializeOnly"));
field752.setType(CString("SFBool"));
ProtoInterface735.addChild(&field752);

field& field753 =  field();
field753.setName(CString("diffuseColor"));
field753.setAccessType(CString("initializeOnly"));
field753.setType(CString("SFColor"));
field753.setValue(CString("1 0 0"));
ProtoInterface735.addChild(&field753);

field& field754 =  field();
field754.setName(CString("emissiveColor"));
field754.setAccessType(CString("initializeOnly"));
field754.setType(CString("SFColor"));
field754.setValue(CString("0 0 1"));
ProtoInterface735.addChild(&field754);

field& field755 =  field();
field755.setName(CString("specularColor"));
field755.setAccessType(CString("initializeOnly"));
field755.setType(CString("SFColor"));
field755.setValue(CString("0 1 0"));
ProtoInterface735.addChild(&field755);

field& field756 =  field();
field756.setName(CString("transparency"));
field756.setAccessType(CString("initializeOnly"));
field756.setType(CString("SFFloat"));
ProtoInterface735.addChild(&field756);

field& field757 =  field();
field757.setName(CString("shininess"));
field757.setAccessType(CString("initializeOnly"));
field757.setType(CString("SFFloat"));
field757.setValue(CString("0.2"));
ProtoInterface735.addChild(&field757);

field& field758 =  field();
field758.setName(CString("q"));
field758.setAccessType(CString("initializeOnly"));
field758.setType(CString("SFVec2f"));
field758.setValue(CString("-0.5 -0.5"));
ProtoInterface735.addChild(&field758);

field& field759 =  field();
field759.setName(CString("t"));
field759.setAccessType(CString("initializeOnly"));
field759.setType(CString("SFVec2f"));
field759.setValue(CString("1 1"));
ProtoInterface735.addChild(&field759);

field& field760 =  field();
field760.setName(CString("s"));
field760.setAccessType(CString("initializeOnly"));
field760.setType(CString("SFFloat"));
ProtoInterface735.addChild(&field760);

field& field761 =  field();
field761.setName(CString("u"));
field761.setAccessType(CString("initializeOnly"));
field761.setType(CString("SFVec2f"));
ProtoInterface735.addChild(&field761);

field& field762 =  field();
field762.setName(CString("ha"));
field762.setAccessType(CString("initializeOnly"));
field762.setType(CString("SFVec3f"));
ProtoInterface735.addChild(&field762);

ProtoDeclare734.addChild(&ProtoInterface735);

ProtoBody& ProtoBody763 =  ProtoBody();
Script& Script764 =  Script();
Script764.setDEF(CString("jb_1"));
Script764.setDirectOutput(true);
field& field765 =  field();
field765.setName(CString("R"));
field765.setAccessType(CString("inputOnly"));
field765.setType(CString("SFTime"));
Script764.addChild(&field765);

field& field766 =  field();
field766.setName(CString("S"));
field766.setAccessType(CString("inputOnly"));
field766.setType(CString("SFTime"));
Script764.addChild(&field766);

field& field767 =  field();
field767.setName(CString("set_od"));
field767.setAccessType(CString("inputOnly"));
field767.setType(CString("SFFloat"));
Script764.addChild(&field767);

field& field768 =  field();
field768.setName(CString("set_fraction"));
field768.setAccessType(CString("inputOnly"));
field768.setType(CString("SFFloat"));
Script764.addChild(&field768);

field& field769 =  field();
field769.setName(CString("R_changed"));
field769.setAccessType(CString("outputOnly"));
field769.setType(CString("SFTime"));
Script764.addChild(&field769);

field& field770 =  field();
field770.setName(CString("U"));
field770.setAccessType(CString("initializeOnly"));
field770.setType(CString("SFNode"));
Script764.addChild(&field770);

field& field771 =  field();
field771.setName(CString("hb"));
field771.setAccessType(CString("initializeOnly"));
field771.setType(CString("SFBool"));
Script764.addChild(&field771);

field& field772 =  field();
field772.setName(CString("ib"));
field772.setAccessType(CString("initializeOnly"));
field772.setType(CString("SFBool"));
Script764.addChild(&field772);

field& field773 =  field();
field773.setName(CString("pd"));
field773.setAccessType(CString("initializeOnly"));
field773.setType(CString("SFBool"));
Script764.addChild(&field773);

field& field774 =  field();
field774.setName(CString("qd"));
field774.setAccessType(CString("initializeOnly"));
field774.setType(CString("SFBool"));
Script764.addChild(&field774);

field& field775 =  field();
field775.setName(CString("rd"));
field775.setAccessType(CString("initializeOnly"));
field775.setType(CString("SFBool"));
Script764.addChild(&field775);

field& field776 =  field();
field776.setName(CString("sd"));
field776.setAccessType(CString("initializeOnly"));
field776.setType(CString("SFBool"));
Script764.addChild(&field776);

field& field777 =  field();
field777.setName(CString("td"));
field777.setAccessType(CString("initializeOnly"));
field777.setType(CString("SFBool"));
Script764.addChild(&field777);

field& field778 =  field();
field778.setName(CString("ud"));
field778.setAccessType(CString("initializeOnly"));
field778.setType(CString("SFBool"));
Script764.addChild(&field778);

field& field779 =  field();
field779.setName(CString("vd"));
field779.setAccessType(CString("initializeOnly"));
field779.setType(CString("SFBool"));
Script764.addChild(&field779);

field& field780 =  field();
field780.setName(CString("wd"));
field780.setAccessType(CString("initializeOnly"));
field780.setType(CString("SFBool"));
Script764.addChild(&field780);

field& field781 =  field();
field781.setName(CString("xd"));
field781.setAccessType(CString("initializeOnly"));
field781.setType(CString("SFBool"));
Script764.addChild(&field781);

field& field782 =  field();
field782.setName(CString("diffuseColor"));
field782.setAccessType(CString("initializeOnly"));
field782.setType(CString("SFColor"));
Script764.addChild(&field782);

field& field783 =  field();
field783.setName(CString("emissiveColor"));
field783.setAccessType(CString("initializeOnly"));
field783.setType(CString("SFColor"));
Script764.addChild(&field783);

field& field784 =  field();
field784.setName(CString("specularColor"));
field784.setAccessType(CString("initializeOnly"));
field784.setType(CString("SFColor"));
Script764.addChild(&field784);

field& field785 =  field();
field785.setName(CString("transparency"));
field785.setAccessType(CString("initializeOnly"));
field785.setType(CString("SFFloat"));
Script764.addChild(&field785);

field& field786 =  field();
field786.setName(CString("shininess"));
field786.setAccessType(CString("initializeOnly"));
field786.setType(CString("SFFloat"));
Script764.addChild(&field786);

field& field787 =  field();
field787.setName(CString("q"));
field787.setAccessType(CString("initializeOnly"));
field787.setType(CString("SFVec2f"));
Script764.addChild(&field787);

field& field788 =  field();
field788.setName(CString("t"));
field788.setAccessType(CString("initializeOnly"));
field788.setType(CString("SFVec2f"));
Script764.addChild(&field788);

field& field789 =  field();
field789.setName(CString("s"));
field789.setAccessType(CString("initializeOnly"));
field789.setType(CString("SFFloat"));
Script764.addChild(&field789);

field& field790 =  field();
field790.setName(CString("u"));
field790.setAccessType(CString("initializeOnly"));
field790.setType(CString("SFVec2f"));
Script764.addChild(&field790);

field& field791 =  field();
field791.setName(CString("yd"));
field791.setAccessType(CString("initializeOnly"));
field791.setType(CString("MFColor"));
field791.setValue(CString("0 0 0"));
Script764.addChild(&field791);

field& field792 =  field();
field792.setName(CString("zd"));
field792.setAccessType(CString("initializeOnly"));
field792.setType(CString("MFColor"));
field792.setValue(CString("0 0 0"));
Script764.addChild(&field792);

field& field793 =  field();
field793.setName(CString("Ad"));
field793.setAccessType(CString("initializeOnly"));
field793.setType(CString("MFColor"));
field793.setValue(CString("0 0 0"));
Script764.addChild(&field793);

field& field794 =  field();
field794.setName(CString("Bd"));
field794.setAccessType(CString("initializeOnly"));
field794.setType(CString("MFFloat"));
field794.setValue(CString("0"));
Script764.addChild(&field794);

field& field795 =  field();
field795.setName(CString("Cd"));
field795.setAccessType(CString("initializeOnly"));
field795.setType(CString("MFFloat"));
field795.setValue(CString("0"));
Script764.addChild(&field795);

field& field796 =  field();
field796.setName(CString("Dd"));
field796.setAccessType(CString("initializeOnly"));
field796.setType(CString("MFVec2f"));
field796.setValue(CString("0 0"));
Script764.addChild(&field796);

field& field797 =  field();
field797.setName(CString("Ed"));
field797.setAccessType(CString("initializeOnly"));
field797.setType(CString("MFVec2f"));
field797.setValue(CString("0 0"));
Script764.addChild(&field797);

field& field798 =  field();
field798.setName(CString("Fd"));
field798.setAccessType(CString("initializeOnly"));
field798.setType(CString("MFFloat"));
field798.setValue(CString("0"));
Script764.addChild(&field798);

field& field799 =  field();
field799.setName(CString("Gd"));
field799.setAccessType(CString("initializeOnly"));
field799.setType(CString("MFVec2f"));
field799.setValue(CString("0 0"));
Script764.addChild(&field799);

field& field800 =  field();
field800.setName(CString("Hd"));
field800.setAccessType(CString("initializeOnly"));
field800.setType(CString("MFColor"));
field800.setValue(CString("0 0 0"));
Script764.addChild(&field800);

field& field801 =  field();
field801.setName(CString("Id"));
field801.setAccessType(CString("initializeOnly"));
field801.setType(CString("MFColor"));
field801.setValue(CString("0 0 0"));
Script764.addChild(&field801);

field& field802 =  field();
field802.setName(CString("Jd"));
field802.setAccessType(CString("initializeOnly"));
field802.setType(CString("MFColor"));
field802.setValue(CString("0 0 0"));
Script764.addChild(&field802);

field& field803 =  field();
field803.setName(CString("Kd"));
field803.setAccessType(CString("initializeOnly"));
field803.setType(CString("MFString"));
Script764.addChild(&field803);

field& field804 =  field();
field804.setName(CString("Ld"));
field804.setAccessType(CString("initializeOnly"));
field804.setType(CString("SFColor"));
Script764.addChild(&field804);

field& field805 =  field();
field805.setName(CString("Md"));
field805.setAccessType(CString("initializeOnly"));
field805.setType(CString("SFColor"));
Script764.addChild(&field805);

field& field806 =  field();
field806.setName(CString("aa"));
field806.setAccessType(CString("initializeOnly"));
field806.setType(CString("SFBool"));
Script764.addChild(&field806);

field& field807 =  field();
field807.setName(CString("lb"));
field807.setAccessType(CString("initializeOnly"));
field807.setType(CString("SFInt32"));
Script764.addChild(&field807);

field& field808 =  field();
field808.setName(CString("mb"));
field808.setAccessType(CString("initializeOnly"));
field808.setType(CString("MFNode"));
Script764.addChild(&field808);

field& field809 =  field();
field809.setName(CString("Nd"));
field809.setAccessType(CString("initializeOnly"));
field809.setType(CString("SFVec2f"));
Script764.addChild(&field809);

field& field810 =  field();
field810.setName(CString("od"));
field810.setAccessType(CString("initializeOnly"));
field810.setType(CString("SFFloat"));
Script764.addChild(&field810);

field& field811 =  field();
field811.setName(CString("Od"));
field811.setAccessType(CString("initializeOnly"));
field811.setType(CString("SFFloat"));
Script764.addChild(&field811);

field& field812 =  field();
field812.setName(CString("Pd"));
field812.setAccessType(CString("initializeOnly"));
field812.setType(CString("SFFloat"));
Script764.addChild(&field812);

field& field813 =  field();
field813.setName(CString("Qd"));
field813.setAccessType(CString("initializeOnly"));
field813.setType(CString("SFFloat"));
Script764.addChild(&field813);

field& field814 =  field();
field814.setName(CString("ea"));
field814.setAccessType(CString("initializeOnly"));
field814.setType(CString("SFTime"));
Script764.addChild(&field814);

field& field815 =  field();
field815.setName(CString("fa"));
field815.setAccessType(CString("initializeOnly"));
field815.setType(CString("SFTime"));
Script764.addChild(&field815);

field& field816 =  field();
field816.setName(CString("Rd"));
field816.setAccessType(CString("initializeOnly"));
field816.setType(CString("SFBool"));
Script764.addChild(&field816);

field& field817 =  field();
field817.setName(CString("Sd"));
field817.setAccessType(CString("initializeOnly"));
field817.setType(CString("SFVec2f"));
field817.setValue(CString("1 1"));
Script764.addChild(&field817);

field& field818 =  field();
field818.setName(CString("Td"));
field818.setAccessType(CString("initializeOnly"));
field818.setType(CString("SFVec2f"));
Script764.addChild(&field818);

field& field819 =  field();
field819.setName(CString("Za"));
field819.setAccessType(CString("initializeOnly"));
field819.setType(CString("SFVec2f"));
Script764.addChild(&field819);

field& field820 =  field();
field820.setName(CString("Ud"));
field820.setAccessType(CString("initializeOnly"));
field820.setType(CString("SFFloat"));
Script764.addChild(&field820);

field& field821 =  field();
field821.setName(CString("Vd"));
field821.setAccessType(CString("initializeOnly"));
field821.setType(CString("SFVec2f"));
Script764.addChild(&field821);

field& field822 =  field();
field822.setName(CString("Wd"));
field822.setAccessType(CString("initializeOnly"));
field822.setType(CString("SFVec2f"));
Script764.addChild(&field822);

field& field823 =  field();
field823.setName(CString("Xd"));
field823.setAccessType(CString("initializeOnly"));
field823.setType(CString("SFVec2f"));
Script764.addChild(&field823);

field& field824 =  field();
field824.setName(CString("Yd"));
field824.setAccessType(CString("initializeOnly"));
field824.setType(CString("SFVec2f"));
Script764.addChild(&field824);

IS& IS825 =  IS();
Connect& connect826 =  Connect();
connect826.setNodeField(CString("R"));
connect826.setProtoField(CString("R"));
IS825.addChild(&connect826);

Connect& connect827 =  Connect();
connect827.setNodeField(CString("S"));
connect827.setProtoField(CString("S"));
IS825.addChild(&connect827);

Connect& connect828 =  Connect();
connect828.setNodeField(CString("set_od"));
connect828.setProtoField(CString("set_od"));
IS825.addChild(&connect828);

Connect& connect829 =  Connect();
connect829.setNodeField(CString("set_fraction"));
connect829.setProtoField(CString("set_fraction"));
IS825.addChild(&connect829);

Connect& connect830 =  Connect();
connect830.setNodeField(CString("R_changed"));
connect830.setProtoField(CString("R_changed"));
IS825.addChild(&connect830);

Connect& connect831 =  Connect();
connect831.setNodeField(CString("U"));
connect831.setProtoField(CString("U"));
IS825.addChild(&connect831);

Connect& connect832 =  Connect();
connect832.setNodeField(CString("hb"));
connect832.setProtoField(CString("hb"));
IS825.addChild(&connect832);

Connect& connect833 =  Connect();
connect833.setNodeField(CString("ib"));
connect833.setProtoField(CString("ib"));
IS825.addChild(&connect833);

Connect& connect834 =  Connect();
connect834.setNodeField(CString("pd"));
connect834.setProtoField(CString("pd"));
IS825.addChild(&connect834);

Connect& connect835 =  Connect();
connect835.setNodeField(CString("qd"));
connect835.setProtoField(CString("qd"));
IS825.addChild(&connect835);

Connect& connect836 =  Connect();
connect836.setNodeField(CString("rd"));
connect836.setProtoField(CString("rd"));
IS825.addChild(&connect836);

Connect& connect837 =  Connect();
connect837.setNodeField(CString("sd"));
connect837.setProtoField(CString("sd"));
IS825.addChild(&connect837);

Connect& connect838 =  Connect();
connect838.setNodeField(CString("td"));
connect838.setProtoField(CString("td"));
IS825.addChild(&connect838);

Connect& connect839 =  Connect();
connect839.setNodeField(CString("ud"));
connect839.setProtoField(CString("ud"));
IS825.addChild(&connect839);

Connect& connect840 =  Connect();
connect840.setNodeField(CString("vd"));
connect840.setProtoField(CString("vd"));
IS825.addChild(&connect840);

Connect& connect841 =  Connect();
connect841.setNodeField(CString("wd"));
connect841.setProtoField(CString("wd"));
IS825.addChild(&connect841);

Connect& connect842 =  Connect();
connect842.setNodeField(CString("xd"));
connect842.setProtoField(CString("xd"));
IS825.addChild(&connect842);

Connect& connect843 =  Connect();
connect843.setNodeField(CString("diffuseColor"));
connect843.setProtoField(CString("diffuseColor"));
IS825.addChild(&connect843);

Connect& connect844 =  Connect();
connect844.setNodeField(CString("emissiveColor"));
connect844.setProtoField(CString("emissiveColor"));
IS825.addChild(&connect844);

Connect& connect845 =  Connect();
connect845.setNodeField(CString("specularColor"));
connect845.setProtoField(CString("specularColor"));
IS825.addChild(&connect845);

Connect& connect846 =  Connect();
connect846.setNodeField(CString("transparency"));
connect846.setProtoField(CString("transparency"));
IS825.addChild(&connect846);

Connect& connect847 =  Connect();
connect847.setNodeField(CString("shininess"));
connect847.setProtoField(CString("shininess"));
IS825.addChild(&connect847);

Connect& connect848 =  Connect();
connect848.setNodeField(CString("q"));
connect848.setProtoField(CString("q"));
IS825.addChild(&connect848);

Connect& connect849 =  Connect();
connect849.setNodeField(CString("t"));
connect849.setProtoField(CString("t"));
IS825.addChild(&connect849);

Connect& connect850 =  Connect();
connect850.setNodeField(CString("s"));
connect850.setProtoField(CString("s"));
IS825.addChild(&connect850);

Connect& connect851 =  Connect();
connect851.setNodeField(CString("u"));
connect851.setProtoField(CString("u"));
IS825.addChild(&connect851);

Script764.addChild(&IS825);


//Script764.setSourceCode(CString("javascript:")+
//_T("function Zd(lb){")+
//_T("Sd.x=lb.t_changed.x;")+
//_T("Sd.y=lb.t_changed.y;")+
//_T("Td.x=lb.q_changed.x;")+
//_T("Td.y=lb.q_changed.y;")+
//_T("Za.x=lb.u_changed.x;")+
//_T("Za.y=lb.u_changed.y;")+
//_T("Ud=lb.s_changed;")+
//_T("var ae,be;")+
//_T("ae=Math.cos(Ud);")+
//_T("be=Math.sin(Ud);")+
//_T("Vd.x=q.x;")+
//_T("Vd.y=q.y;")+
//_T("Yd.x=((-Td.x)+(Sd.x*(Td.x-Vd.x+Za.x)*ae)-(Sd.x*(Td.y-Vd.y+Za.y)*be));")+
//_T("Yd.y=((-Td.y)+(Sd.y*(Td.y-Vd.y+Za.y)*ae)+(Sd.y*(Td.x-Vd.x+Za.x)*be));")+
//_T("Vd.x=-Yd.x;")+
//_T("Vd.y=-Yd.y;")+
//_T("lb.set_q=Vd;")+
//_T("Wd.x=(Td.x-Vd.x+Za.x-((Td.x-Vd.x)*Math.cos(Ud))/Sd.x-((Td.y-Vd.y)*Math.sin(Ud))/Sd.y);")+
//_T("Wd.y=(Td.y-Vd.y+Za.y-((Td.y-Vd.y)*Math.cos(Ud))/Sd.y+((Td.x-Vd.x)*Math.sin(Ud))/Sd.x);")+
//_T("lb.set_u=Wd;")+
//_T("Xd.x=Wd.x-Za.x;")+
//_T("Xd.y=Wd.y-Za.y;")+
//_T("u.x+=Xd.x;")+
//_T("u.y+=Xd.y;")+
//_T("}")+
//_T("function initialize(){")+
//_T("U.w=TRUE;")+
//_T("Rd=FALSE;")+
//_T("aa=FALSE;")+
//_T("od=0.;")+
//_T("}")+
//_T("function R(n){")+
//_T("if(ib&&!hb){")+
//_T("return;")+
//_T("}")+
//_T("if(fa==n){")+
//_T("return;")+
//_T("}")+
//_T("if(aa==TRUE){")+
//_T("ea=n;")+
//_T("return;")+
//_T("}")+
//_T("aa=TRUE;")+
//_T("od=0.;")+
//_T("if(hb==FALSE){")+
//_T("mb.length=1;")+
//_T("mb[0]=U;")+
//_T("}else{")+
//_T("mb=U.A_changed;")+
//_T("}")+
//_T("yd.length=")+
//_T("zd.length=")+
//_T("Ad.length=")+
//_T("Hd.length=")+
//_T("Id.length=")+
//_T("Jd.length=")+
//_T("Bd.length=")+
//_T("Cd.length=")+
//_T("Dd.length=")+
//_T("Ed.length=")+
//_T("Fd.length=")+
//_T("Gd.length=mb.length;")+
//_T("for(lb=0;lb<mb.length;lb++){")+
//_T("if(pd==TRUE){")+
//_T("ce(mb[lb].diffuseColor_changed,yd[lb]);")+
//_T("ce(diffuseColor,Hd[lb]);")+
//_T("if((yd[lb][1]<=Qd)||(yd[lb][2]<=Qd)){")+
//_T("yd[lb][0]=Hd[lb][0];")+
//_T("}else if((Hd[lb][1]<=Qd)||(Hd[lb][2]<=Qd)){")+
//_T("Hd[lb][0]=yd[lb][0];")+
//_T("}")+
//_T("}")+
//_T("if(rd==TRUE){")+
//_T("ce(mb[lb].specularColor_changed,Ad[lb]);")+
//_T("ce(specularColor,Jd[lb]);")+
//_T("if((Ad[lb][1]<=Qd)||(Ad[lb][2]<=Qd)){")+
//_T("Ad[lb][0]=Jd[lb][0];")+
//_T("}else if((Jd[lb][1]<=Qd)||(Jd[lb][2]<=Qd)){")+
//_T("Jd[lb][0]=Ad[lb][0];")+
//_T("}")+
//_T("}")+
//_T("if(qd==TRUE){")+
//_T("ce(mb[lb].emissiveColor_changed,zd[lb]);")+
//_T("ce(emissiveColor,Id[lb]);")+
//_T("if((zd[lb][1]<=Qd)||(zd[lb][2]<=Qd)){")+
//_T("zd[lb][0]=Id[lb][0];")+
//_T("}else if((Id[lb][1]<=Qd)||(Id[lb][2]<=Qd)){")+
//_T("Id[lb][0]=zd[lb][0];")+
//_T("}")+
//_T("}")+
//_T("if(sd==TRUE)Bd[lb]=mb[lb].transparency_changed;")+
//_T("if(td==TRUE)Cd[lb]=mb[lb].shininess_changed;")+
//_T("if(vd==TRUE||wd==TRUE||xd==TRUE){")+
//_T("Kd=mb[lb].v_changed.url;")+
//_T("if(Kd.length>0){")+
//_T("if(Kd[0].length>0){")+
//_T("if(lb==0)Rd=TRUE;")+
//_T("Zd(mb[lb]);")+
//_T("Ed[lb]=mb[lb].t_changed;")+
//_T("Fd[lb]=mb[lb].s_changed;")+
//_T("Gd[lb]=mb[lb].u_changed;")+
//_T("}")+
//_T("}")+
//_T("}")+
//_T("}")+
//_T("R_changed=n;")+
//_T("fa=n;")+
//_T("}")+
//_T("function S(n){")+
//_T("aa=FALSE;")+
//_T("if(ea==n){")+
//_T("R(n);")+
//_T("}")+
//_T("}")+
//_T("function set_od(n){")+
//_T("od=n;")+
//_T("if(od<0.)od=0.;")+
//_T("else if(od>1.)od=1.;")+
//_T("}")+
//_T("function set_fraction(n){")+
//_T("if(ib&&!hb){")+
//_T("return;")+
//_T("}")+
//_T("Pd=od*(1.+Math.sin(2.*Math.PI*n-(Math.PI/2.)))/2.;")+
//_T("Od=od*Math.sin(2.*Math.PI*n);")+
//_T("for(lb=0;lb<mb.length;lb++){")+
//_T("if(pd==TRUE){")+
//_T("Ld[0]=(1.-Pd)*yd[lb][0]+Pd*Hd[lb][0];")+
//_T("Ld[1]=(1.-Pd)*yd[lb][1]+Pd*Hd[lb][1];")+
//_T("Ld[2]=(1.-Pd)*yd[lb][2]+Pd*Hd[lb][2];")+
//_T("de(Ld,Md);")+
//_T("mb[lb].set_diffuseColor=Md;")+
//_T("}")+
//_T("if(rd==TRUE){")+
//_T("Ld[0]=(1.-Pd)*Ad[lb][0]+Pd*Jd[lb][0];")+
//_T("Ld[1]=(1.-Pd)*Ad[lb][1]+Pd*Jd[lb][1];")+
//_T("Ld[2]=(1.-Pd)*Ad[lb][2]+Pd*Jd[lb][2];")+
//_T("de(Ld,Md);")+
//_T("mb[lb].set_specularColor=Md;")+
//_T("}")+
//_T("if(qd==TRUE){")+
//_T("Ld[0]=(1.-Pd)*zd[lb][0]+Pd*Id[lb][0];")+
//_T("Ld[1]=(1.-Pd)*zd[lb][1]+Pd*Id[lb][1];")+
//_T("Ld[2]=(1.-Pd)*zd[lb][2]+Pd*Id[lb][2];")+
//_T("de(Ld,Md);")+
//_T("mb[lb].set_emissiveColor=Md;")+
//_T("}")+
//_T("if(sd==TRUE)mb[lb].set_transparency=(1.-Pd)*Bd[lb]+Pd*transparency;")+
//_T("if(td==TRUE)mb[lb].set_shininess=(1.-Pd)*Cd[lb]+Pd*shininess;")+
//_T("if(Rd==TRUE){")+
//_T("if(vd==TRUE){")+
//_T("Nd.x=(1.-Pd)*Ed[lb].x+Pd*t.x;")+
//_T("Nd.y=(1.-Pd)*Ed[lb].y+Pd*t.y;")+
//_T("mb[lb].set_t=Nd;")+
//_T("}")+
//_T("if(wd==TRUE){")+
//_T("mb[lb].set_s=Fd[lb]+Od*s;")+
//_T("}")+
//_T("if(xd==TRUE){")+
//_T("Nd.x=Gd[lb].x+Od*u.x;")+
//_T("Nd.y=Gd[lb].y+Od*u.y;")+
//_T("mb[lb].set_u=Nd;")+
//_T("}")+
//_T("}")+
//_T("}")+
//_T("}")+
//_T("function ce(ee,fe){")+
//_T("var max,min;")+
//_T("max=(ee[0]>ee[1])?")+
//_T("((ee[0]>ee[2])?ee[0]:ee[2]):")+
//_T("((ee[1]>ee[2])?ee[1]:ee[2]);")+
//_T("min=(ee[0]<ee[1])?")+
//_T("((ee[0]<ee[2])?ee[0]:ee[2]):")+
//_T("((ee[1]<ee[2])?ee[1]:ee[2]);")+
//_T("fe[2]=max;")+
//_T("if(max!=0.)fe[1]=(max-min)/max;")+
//_T("else fe[1]=0.;")+
//_T("if(fe[1]!=0.){")+
//_T("if(ee[0]==max)fe[0]=(ee[1]-ee[2])/(max-min);")+
//_T("else if(ee[1]==max)fe[0]=2.+(ee[2]-ee[0])/(max-min);")+
//_T("else fe[0]=4.+(ee[0]-ee[1])/(max-min);")+
//_T("if(fe[0]<0.)fe[0]+=6.;")+
//_T("fe[0]/=6.;")+
//_T("}else fe[0]=0.;")+
//_T("}")+
//_T("function de(fe,ee){")+
//_T("var ge,he,Za,ie;")+
//_T("var J;")+
//_T("if(fe[0]==1.)fe[0]=0.;")+
//_T("else fe[0]*=6.;")+
//_T("J=Math.floor(fe[0]);")+
//_T("ge=fe[0]-J;")+
//_T("ie=fe[2]*(1.-fe[1]);")+
//_T("he=fe[2]*(1.-(fe[1]*ge));")+
//_T("Za=fe[2]*(1.-(fe[1]*(1.-ge)));")+
//_T("switch(J){")+
//_T("case 0:ee[0]=fe[2];ee[1]=Za;ee[2]=ie;break;")+
//_T("case 1:ee[0]=he;ee[1]=fe[2];ee[2]=ie;break;")+
//_T("case 2:ee[0]=ie;ee[1]=fe[2];ee[2]=Za;break;")+
//_T("case 3:ee[0]=ie;ee[1]=he;ee[2]=fe[2];break;")+
//_T("case 4:ee[0]=Za;ee[1]=ie;ee[2]=fe[2];break;")+
//_T("case 5:ee[0]=fe[2];ee[1]=ie;ee[2]=he;break;")+
//_T("}")+
//_T("}"));
ProtoBody763.addChild(&Script764);

ProtoDeclare734.addChild(&ProtoBody763);

Scene7.addChild(&ProtoDeclare734);

ProtoDeclare& ProtoDeclare852 =  ProtoDeclare();
ProtoDeclare852.setName(CString("je"));
ProtoInterface& ProtoInterface853 =  ProtoInterface();
field& field854 =  field();
field854.setName(CString("set_enabled"));
field854.setAccessType(CString("inputOnly"));
field854.setType(CString("SFBool"));
ProtoInterface853.addChild(&field854);

field& field855 =  field();
field855.setName(CString("isOver"));
field855.setAccessType(CString("outputOnly"));
field855.setType(CString("SFBool"));
ProtoInterface853.addChild(&field855);

field& field856 =  field();
field856.setName(CString("isActive"));
field856.setAccessType(CString("outputOnly"));
field856.setType(CString("SFBool"));
ProtoInterface853.addChild(&field856);

field& field857 =  field();
field857.setName(CString("trackPoint_changed"));
field857.setAccessType(CString("outputOnly"));
field857.setType(CString("SFVec3f"));
ProtoInterface853.addChild(&field857);

field& field858 =  field();
field858.setName(CString("rotation_changed"));
field858.setAccessType(CString("outputOnly"));
field858.setType(CString("SFRotation"));
ProtoInterface853.addChild(&field858);

field& field859 =  field();
field859.setName(CString("oa"));
field859.setAccessType(CString("initializeOnly"));
field859.setType(CString("SFInt32"));
ProtoInterface853.addChild(&field859);

ProtoDeclare852.addChild(&ProtoInterface853);

ProtoBody& ProtoBody860 =  ProtoBody();
SphereSensor& SphereSensor861 =  SphereSensor();
SphereSensor861.setDEF(CString("ke_1"));
SphereSensor861.setEnabled(false);
SphereSensor861.setAutoOffset(false);
IS& IS862 =  IS();
Connect& connect863 =  Connect();
connect863.setNodeField(CString("trackPoint_changed"));
connect863.setProtoField(CString("trackPoint_changed"));
IS862.addChild(&connect863);

Connect& connect864 =  Connect();
connect864.setNodeField(CString("rotation_changed"));
connect864.setProtoField(CString("rotation_changed"));
IS862.addChild(&connect864);

Connect& connect865 =  Connect();
connect865.setNodeField(CString("isActive"));
connect865.setProtoField(CString("isActive"));
IS862.addChild(&connect865);

SphereSensor861.addChild(&IS862);

ProtoBody860.addChild(&SphereSensor861);

Script& Script866 =  Script();
Script866.setDEF(CString("le_1"));
Script866.setDirectOutput(true);
field& field867 =  field();
field867.setName(CString("set_enabled"));
field867.setAccessType(CString("inputOnly"));
field867.setType(CString("SFBool"));
Script866.addChild(&field867);

field& field868 =  field();
field868.setName(CString("enabled_changed"));
field868.setAccessType(CString("outputOnly"));
field868.setType(CString("SFBool"));
Script866.addChild(&field868);

field& field869 =  field();
field869.setName(CString("oa"));
field869.setAccessType(CString("initializeOnly"));
field869.setType(CString("SFInt32"));
Script866.addChild(&field869);

IS& IS870 =  IS();
Connect& connect871 =  Connect();
connect871.setNodeField(CString("set_enabled"));
connect871.setProtoField(CString("set_enabled"));
IS870.addChild(&connect871);

Connect& connect872 =  Connect();
connect872.setNodeField(CString("oa"));
connect872.setProtoField(CString("oa"));
IS870.addChild(&connect872);

Script866.addChild(&IS870);


//Script866.setSourceCode(CString("javascript:")+
//_T("function initialize(){")+
//_T("if(oa>0){")+
//_T("enabled_changed=TRUE;")+
//_T("}")+
//_T("}")+
//_T("function set_enabled(n){")+
//_T("if(n==TRUE){")+
//_T("enabled_changed=TRUE;")+
//_T("oa++;")+
//_T("}else{")+
//_T("enabled_changed=FALSE;")+
//_T("enabled_changed=TRUE;")+
//_T("if(oa>0){")+
//_T("oa--;")+
//_T("}")+
//_T("}")+
//_T("}"));
ProtoBody860.addChild(&Script866);

ROUTE& ROUTE873 =  ROUTE();
ROUTE873.setFromNode(CString("le_1"));
ROUTE873.setFromField(CString("enabled_changed"));
ROUTE873.setToNode(CString("ke_1"));
ROUTE873.setToField(CString("set_enabled"));
ProtoBody860.addChild(&ROUTE873);

ProtoDeclare852.addChild(&ProtoBody860);

Scene7.addChild(&ProtoDeclare852);

ProtoDeclare& ProtoDeclare874 =  ProtoDeclare();
ProtoDeclare874.setName(CString("me"));
ProtoInterface& ProtoInterface875 =  ProtoInterface();
field& field876 =  field();
field876.setName(CString("R"));
field876.setAccessType(CString("inputOnly"));
field876.setType(CString("SFTime"));
ProtoInterface875.addChild(&field876);

field& field877 =  field();
field877.setName(CString("sa"));
field877.setAccessType(CString("inputOnly"));
field877.setType(CString("SFTime"));
ProtoInterface875.addChild(&field877);

field& field878 =  field();
field878.setName(CString("rb"));
field878.setAccessType(CString("inputOnly"));
field878.setType(CString("SFBool"));
ProtoInterface875.addChild(&field878);

field& field879 =  field();
field879.setName(CString("ne"));
field879.setAccessType(CString("inputOnly"));
field879.setType(CString("SFRotation"));
ProtoInterface875.addChild(&field879);

field& field880 =  field();
field880.setName(CString("oe"));
field880.setAccessType(CString("inputOnly"));
field880.setType(CString("SFVec3f"));
ProtoInterface875.addChild(&field880);

field& field881 =  field();
field881.setName(CString("yb_changed"));
field881.setAccessType(CString("outputOnly"));
field881.setType(CString("SFBool"));
ProtoInterface875.addChild(&field881);

field& field882 =  field();
field882.setName(CString("stopTime"));
field882.setAccessType(CString("outputOnly"));
field882.setType(CString("SFTime"));
ProtoInterface875.addChild(&field882);

field& field883 =  field();
field883.setName(CString("pe"));
field883.setAccessType(CString("initializeOnly"));
field883.setType(CString("SFInt32"));
ProtoInterface875.addChild(&field883);

field& field884 =  field();
field884.setName(CString("qe"));
field884.setAccessType(CString("initializeOnly"));
field884.setType(CString("SFVec3f"));
field884.setValue(CString("0 0 1"));
ProtoInterface875.addChild(&field884);

field& field885 =  field();
field885.setName(CString("enabled"));
field885.setAccessType(CString("initializeOnly"));
field885.setType(CString("SFBool"));
field885.setValue(CString("true"));
ProtoInterface875.addChild(&field885);

field& field886 =  field();
field886.setName(CString("re"));
field886.setAccessType(CString("initializeOnly"));
field886.setType(CString("SFNode"));
ProtoInterface875.addChild(&field886);

field& field887 =  field();
field887.setName(CString("center"));
field887.setAccessType(CString("initializeOnly"));
field887.setType(CString("SFVec3f"));
ProtoInterface875.addChild(&field887);

ProtoDeclare874.addChild(&ProtoInterface875);

ProtoBody& ProtoBody888 =  ProtoBody();
Script& Script889 =  Script();
Script889.setDEF(CString("I_2"));
Script889.setDirectOutput(true);
field& field890 =  field();
field890.setName(CString("isActive"));
field890.setAccessType(CString("inputOnly"));
field890.setType(CString("SFBool"));
Script889.addChild(&field890);

field& field891 =  field();
field891.setName(CString("se"));
field891.setAccessType(CString("inputOnly"));
field891.setType(CString("SFRotation"));
Script889.addChild(&field891);

field& field892 =  field();
field892.setName(CString("te"));
field892.setAccessType(CString("inputOnly"));
field892.setType(CString("SFVec3f"));
Script889.addChild(&field892);

field& field893 =  field();
field893.setName(CString("ob"));
field893.setAccessType(CString("inputOnly"));
field893.setType(CString("SFTime"));
Script889.addChild(&field893);

field& field894 =  field();
field894.setName(CString("pb"));
field894.setAccessType(CString("inputOnly"));
field894.setType(CString("SFTime"));
Script889.addChild(&field894);

field& field895 =  field();
field895.setName(CString("yb_changed"));
field895.setAccessType(CString("outputOnly"));
field895.setType(CString("SFBool"));
Script889.addChild(&field895);

field& field896 =  field();
field896.setName(CString("stopTime"));
field896.setAccessType(CString("outputOnly"));
field896.setType(CString("SFTime"));
Script889.addChild(&field896);

field& field897 =  field();
field897.setName(CString("pe"));
field897.setAccessType(CString("initializeOnly"));
field897.setType(CString("SFInt32"));
Script889.addChild(&field897);

field& field898 =  field();
field898.setName(CString("qe"));
field898.setAccessType(CString("initializeOnly"));
field898.setType(CString("SFVec3f"));
Script889.addChild(&field898);

field& field899 =  field();
field899.setName(CString("enabled"));
field899.setAccessType(CString("initializeOnly"));
field899.setType(CString("SFBool"));
Script889.addChild(&field899);

field& field900 =  field();
field900.setName(CString("ue"));
field900.setAccessType(CString("initializeOnly"));
field900.setType(CString("SFNode"));
Script889.addChild(&field900);

field& field901 =  field();
field901.setName(CString("ve"));
field901.setAccessType(CString("initializeOnly"));
field901.setType(CString("SFRotation"));
Script889.addChild(&field901);

IS& IS902 =  IS();
Connect& connect903 =  Connect();
connect903.setNodeField(CString("isActive"));
connect903.setProtoField(CString("rb"));
IS902.addChild(&connect903);

Connect& connect904 =  Connect();
connect904.setNodeField(CString("se"));
connect904.setProtoField(CString("ne"));
IS902.addChild(&connect904);

Connect& connect905 =  Connect();
connect905.setNodeField(CString("te"));
connect905.setProtoField(CString("oe"));
IS902.addChild(&connect905);

Connect& connect906 =  Connect();
connect906.setNodeField(CString("ob"));
connect906.setProtoField(CString("R"));
IS902.addChild(&connect906);

Connect& connect907 =  Connect();
connect907.setNodeField(CString("pb"));
connect907.setProtoField(CString("sa"));
IS902.addChild(&connect907);

Connect& connect908 =  Connect();
connect908.setNodeField(CString("yb_changed"));
connect908.setProtoField(CString("yb_changed"));
IS902.addChild(&connect908);

Connect& connect909 =  Connect();
connect909.setNodeField(CString("stopTime"));
connect909.setProtoField(CString("stopTime"));
IS902.addChild(&connect909);

Connect& connect910 =  Connect();
connect910.setNodeField(CString("pe"));
connect910.setProtoField(CString("pe"));
IS902.addChild(&connect910);

Connect& connect911 =  Connect();
connect911.setNodeField(CString("qe"));
connect911.setProtoField(CString("qe"));
IS902.addChild(&connect911);

Connect& connect912 =  Connect();
connect912.setNodeField(CString("enabled"));
connect912.setProtoField(CString("enabled"));
IS902.addChild(&connect912);

Connect& connect913 =  Connect();
connect913.setNodeField(CString("ue"));
connect913.setProtoField(CString("re"));
IS902.addChild(&connect913);

Script889.addChild(&IS902);


//Script889.setSourceCode(CString("javascript:")+
//_T("function initialize(){")+
//_T("yb_changed=enabled;")+
//_T("}")+
//_T("function ob(n,time){")+
//_T("if(!enabled){")+
//_T("enabled=TRUE;")+
//_T("yb_changed=TRUE;")+
//_T("ve=ue.rotation;")+
//_T("}")+
//_T("}")+
//_T("function pb(n,time){")+
//_T("if(enabled){")+
//_T("enabled=FALSE;")+
//_T("yb_changed=FALSE;")+
//_T("stopTime=time;")+
//_T("}")+
//_T("}")+
//_T("function isActive(n,Za){")+
//_T("ve=ue.rotation;")+
//_T("if(n==TRUE){")+
//_T("yb_changed=TRUE;")+
//_T("}")+
//_T("else{")+
//_T("yb_changed=FALSE;")+
//_T("}")+
//_T("}")+
//_T("function se(n){")+
//_T("if(pe==0){")+
//_T("ue.rotation=n.multiply(ve);")+
//_T("}")+
//_T("}")+
//_T("function te(n){")+
//_T("if(pe==1){")+
//_T("we=new SFRotation(qe,n);")+
//_T("ue.rotation=we.multiply(ve);")+
//_T("}")+
//_T("}"));
ProtoBody888.addChild(&Script889);

ProtoDeclare874.addChild(&ProtoBody888);

Scene7.addChild(&ProtoDeclare874);

ProtoDeclare& ProtoDeclare914 =  ProtoDeclare();
ProtoDeclare914.setName(CString("xe"));
ProtoInterface& ProtoInterface915 =  ProtoInterface();
field& field916 =  field();
field916.setName(CString("R"));
field916.setAccessType(CString("inputOnly"));
field916.setType(CString("SFTime"));
ProtoInterface915.addChild(&field916);

field& field917 =  field();
field917.setName(CString("S"));
field917.setAccessType(CString("inputOnly"));
field917.setType(CString("SFTime"));
ProtoInterface915.addChild(&field917);

field& field918 =  field();
field918.setName(CString("startTime"));
field918.setAccessType(CString("outputOnly"));
field918.setType(CString("SFTime"));
ProtoInterface915.addChild(&field918);

field& field919 =  field();
field919.setName(CString("ye"));
field919.setAccessType(CString("initializeOnly"));
field919.setType(CString("SFNode"));
ProtoInterface915.addChild(&field919);

field& field920 =  field();
field920.setName(CString("ze"));
field920.setAccessType(CString("initializeOnly"));
field920.setType(CString("SFNode"));
ProtoInterface915.addChild(&field920);

field& field921 =  field();
field921.setName(CString("Ae"));
field921.setAccessType(CString("initializeOnly"));
field921.setType(CString("SFNode"));
ProtoInterface915.addChild(&field921);

field& field922 =  field();
field922.setName(CString("Be"));
field922.setAccessType(CString("initializeOnly"));
field922.setType(CString("SFBool"));
ProtoInterface915.addChild(&field922);

field& field923 =  field();
field923.setName(CString("Ce"));
field923.setAccessType(CString("initializeOnly"));
field923.setType(CString("SFInt32"));
field923.setValue(CString("-1"));
ProtoInterface915.addChild(&field923);

field& field924 =  field();
field924.setName(CString("De"));
field924.setAccessType(CString("initializeOnly"));
field924.setType(CString("SFBool"));
ProtoInterface915.addChild(&field924);

ProtoDeclare914.addChild(&ProtoInterface915);

ProtoBody& ProtoBody925 =  ProtoBody();
Script& Script926 =  Script();
Script926.setDirectOutput(true);
field& field927 =  field();
field927.setName(CString("R"));
field927.setAccessType(CString("inputOnly"));
field927.setType(CString("SFTime"));
Script926.addChild(&field927);

field& field928 =  field();
field928.setName(CString("S"));
field928.setAccessType(CString("inputOnly"));
field928.setType(CString("SFTime"));
Script926.addChild(&field928);

field& field929 =  field();
field929.setName(CString("startTime"));
field929.setAccessType(CString("outputOnly"));
field929.setType(CString("SFTime"));
Script926.addChild(&field929);

field& field930 =  field();
field930.setName(CString("Ee"));
field930.setAccessType(CString("initializeOnly"));
field930.setType(CString("SFNode"));
Script926.addChild(&field930);

field& field931 =  field();
field931.setName(CString("Fe"));
field931.setAccessType(CString("initializeOnly"));
field931.setType(CString("SFNode"));
Script926.addChild(&field931);

field& field932 =  field();
field932.setName(CString("U"));
field932.setAccessType(CString("initializeOnly"));
field932.setType(CString("SFNode"));
Script926.addChild(&field932);

field& field933 =  field();
field933.setName(CString("Be"));
field933.setAccessType(CString("initializeOnly"));
field933.setType(CString("SFBool"));
Script926.addChild(&field933);

field& field934 =  field();
field934.setName(CString("Ce"));
field934.setAccessType(CString("initializeOnly"));
field934.setType(CString("SFInt32"));
Script926.addChild(&field934);

field& field935 =  field();
field935.setName(CString("ea"));
field935.setAccessType(CString("initializeOnly"));
field935.setType(CString("SFTime"));
Script926.addChild(&field935);

field& field936 =  field();
field936.setName(CString("De"));
field936.setAccessType(CString("initializeOnly"));
field936.setType(CString("SFBool"));
Script926.addChild(&field936);

IS& IS937 =  IS();
Connect& connect938 =  Connect();
connect938.setNodeField(CString("R"));
connect938.setProtoField(CString("R"));
IS937.addChild(&connect938);

Connect& connect939 =  Connect();
connect939.setNodeField(CString("S"));
connect939.setProtoField(CString("S"));
IS937.addChild(&connect939);

Connect& connect940 =  Connect();
connect940.setNodeField(CString("startTime"));
connect940.setProtoField(CString("startTime"));
IS937.addChild(&connect940);

Connect& connect941 =  Connect();
connect941.setNodeField(CString("Ee"));
connect941.setProtoField(CString("ye"));
IS937.addChild(&connect941);

Connect& connect942 =  Connect();
connect942.setNodeField(CString("Fe"));
connect942.setProtoField(CString("ze"));
IS937.addChild(&connect942);

Connect& connect943 =  Connect();
connect943.setNodeField(CString("U"));
connect943.setProtoField(CString("Ae"));
IS937.addChild(&connect943);

Connect& connect944 =  Connect();
connect944.setNodeField(CString("Be"));
connect944.setProtoField(CString("Be"));
IS937.addChild(&connect944);

Connect& connect945 =  Connect();
connect945.setNodeField(CString("Ce"));
connect945.setProtoField(CString("Ce"));
IS937.addChild(&connect945);

Connect& connect946 =  Connect();
connect946.setNodeField(CString("De"));
connect946.setProtoField(CString("De"));
IS937.addChild(&connect946);

Script926.addChild(&IS937);


//Script926.setSourceCode(CString("javascript:")+
//_T("function R(n,Za){")+
//_T("if(startTime==Za){")+
//_T("return;")+
//_T("}")+
//_T("if(!Be){")+
//_T("if(U.D!=null){")+
//_T("if(U.F!=Ce){")+
//_T("if(!De){")+
//_T("U.D.sa=Za;")+
//_T("}")+
//_T("}")+
//_T("}")+
//_T("U.D=Fe;")+
//_T("U.F=Ce;")+
//_T("Ee.R=Za;")+
//_T("Be=TRUE;")+
//_T("startTime=Za;")+
//_T("}else{")+
//_T("ea=Za;")+
//_T("}")+
//_T("}")+
//_T("function S(n,Za){")+
//_T("Be=FALSE;")+
//_T("if(ea==Za){")+
//_T("R(n,Za);")+
//_T("}")+
//_T("}"));
ProtoBody925.addChild(&Script926);

ProtoDeclare914.addChild(&ProtoBody925);

Scene7.addChild(&ProtoDeclare914);

ProtoDeclare& ProtoDeclare947 =  ProtoDeclare();
ProtoDeclare947.setName(CString("Ge"));
ProtoInterface& ProtoInterface948 =  ProtoInterface();
field& field949 =  field();
field949.setName(CString("R"));
field949.setAccessType(CString("inputOnly"));
field949.setType(CString("SFTime"));
ProtoInterface948.addChild(&field949);

field& field950 =  field();
field950.setName(CString("set_fraction"));
field950.setAccessType(CString("inputOnly"));
field950.setType(CString("SFFloat"));
ProtoInterface948.addChild(&field950);

field& field951 =  field();
field951.setName(CString("He"));
field951.setAccessType(CString("outputOnly"));
field951.setType(CString("SFTime"));
ProtoInterface948.addChild(&field951);

field& field952 =  field();
field952.setName(CString("Ie"));
field952.setAccessType(CString("outputOnly"));
field952.setType(CString("SFTime"));
ProtoInterface948.addChild(&field952);

field& field953 =  field();
field953.setName(CString("Je"));
field953.setAccessType(CString("initializeOnly"));
field953.setType(CString("SFBool"));
field953.setValue(CString("true"));
ProtoInterface948.addChild(&field953);

field& field954 =  field();
field954.setName(CString("Ke"));
field954.setAccessType(CString("initializeOnly"));
field954.setType(CString("SFFloat"));
field954.setValue(CString("5"));
ProtoInterface948.addChild(&field954);

field& field955 =  field();
field955.setName(CString("qe"));
field955.setAccessType(CString("initializeOnly"));
field955.setType(CString("SFVec3f"));
field955.setValue(CString("0 0 1"));
ProtoInterface948.addChild(&field955);

field& field956 =  field();
field956.setName(CString("T"));
field956.setAccessType(CString("initializeOnly"));
field956.setType(CString("SFBool"));
field956.setValue(CString("true"));
ProtoInterface948.addChild(&field956);

field& field957 =  field();
field957.setName(CString("center"));
field957.setAccessType(CString("initializeOnly"));
field957.setType(CString("SFVec3f"));
ProtoInterface948.addChild(&field957);

field& field958 =  field();
field958.setName(CString("U"));
field958.setAccessType(CString("initializeOnly"));
field958.setType(CString("SFNode"));
ProtoInterface948.addChild(&field958);

field& field959 =  field();
field959.setName(CString("Le"));
field959.setAccessType(CString("initializeOnly"));
field959.setType(CString("SFNode"));
ProtoInterface948.addChild(&field959);

ProtoDeclare947.addChild(&ProtoInterface948);

ProtoBody& ProtoBody960 =  ProtoBody();
Script& Script961 =  Script();
Script961.setDirectOutput(true);
field& field962 =  field();
field962.setName(CString("R"));
field962.setAccessType(CString("inputOnly"));
field962.setType(CString("SFTime"));
Script961.addChild(&field962);

field& field963 =  field();
field963.setName(CString("set_fraction"));
field963.setAccessType(CString("inputOnly"));
field963.setType(CString("SFFloat"));
Script961.addChild(&field963);

field& field964 =  field();
field964.setName(CString("He"));
field964.setAccessType(CString("outputOnly"));
field964.setType(CString("SFTime"));
Script961.addChild(&field964);

field& field965 =  field();
field965.setName(CString("Ie"));
field965.setAccessType(CString("outputOnly"));
field965.setType(CString("SFTime"));
Script961.addChild(&field965);

field& field966 =  field();
field966.setName(CString("U"));
field966.setAccessType(CString("initializeOnly"));
field966.setType(CString("SFNode"));
Script961.addChild(&field966);

field& field967 =  field();
field967.setName(CString("Me"));
field967.setAccessType(CString("initializeOnly"));
field967.setType(CString("SFNode"));
Script961.addChild(&field967);

field& field968 =  field();
field968.setName(CString("center"));
field968.setAccessType(CString("initializeOnly"));
field968.setType(CString("SFVec3f"));
Script961.addChild(&field968);

field& field969 =  field();
field969.setName(CString("Je"));
field969.setAccessType(CString("initializeOnly"));
field969.setType(CString("SFBool"));
Script961.addChild(&field969);

field& field970 =  field();
field970.setName(CString("Ke"));
field970.setAccessType(CString("initializeOnly"));
field970.setType(CString("SFFloat"));
Script961.addChild(&field970);

field& field971 =  field();
field971.setName(CString("qe"));
field971.setAccessType(CString("initializeOnly"));
field971.setType(CString("SFVec3f"));
Script961.addChild(&field971);

field& field972 =  field();
field972.setName(CString("Ne"));
field972.setAccessType(CString("initializeOnly"));
field972.setType(CString("SFVec3f"));
field972.setValue(CString("0 1 0"));
Script961.addChild(&field972);

field& field973 =  field();
field973.setName(CString("Oe"));
field973.setAccessType(CString("initializeOnly"));
field973.setType(CString("SFInt32"));
field973.setValue(CString("2"));
Script961.addChild(&field973);

field& field974 =  field();
field974.setName(CString("Pe"));
field974.setAccessType(CString("initializeOnly"));
field974.setType(CString("SFVec3f"));
Script961.addChild(&field974);

field& field975 =  field();
field975.setName(CString("Qe"));
field975.setAccessType(CString("initializeOnly"));
field975.setType(CString("SFRotation"));
Script961.addChild(&field975);

IS& IS976 =  IS();
Connect& connect977 =  Connect();
connect977.setNodeField(CString("R"));
connect977.setProtoField(CString("R"));
IS976.addChild(&connect977);

Connect& connect978 =  Connect();
connect978.setNodeField(CString("set_fraction"));
connect978.setProtoField(CString("set_fraction"));
IS976.addChild(&connect978);

Connect& connect979 =  Connect();
connect979.setNodeField(CString("He"));
connect979.setProtoField(CString("He"));
IS976.addChild(&connect979);

Connect& connect980 =  Connect();
connect980.setNodeField(CString("Ie"));
connect980.setProtoField(CString("Ie"));
IS976.addChild(&connect980);

Connect& connect981 =  Connect();
connect981.setNodeField(CString("U"));
connect981.setProtoField(CString("U"));
IS976.addChild(&connect981);

Connect& connect982 =  Connect();
connect982.setNodeField(CString("Me"));
connect982.setProtoField(CString("Le"));
IS976.addChild(&connect982);

Connect& connect983 =  Connect();
connect983.setNodeField(CString("center"));
connect983.setProtoField(CString("center"));
IS976.addChild(&connect983);

Connect& connect984 =  Connect();
connect984.setNodeField(CString("Je"));
connect984.setProtoField(CString("Je"));
IS976.addChild(&connect984);

Connect& connect985 =  Connect();
connect985.setNodeField(CString("Ke"));
connect985.setProtoField(CString("Ke"));
IS976.addChild(&connect985);

Connect& connect986 =  Connect();
connect986.setNodeField(CString("qe"));
connect986.setProtoField(CString("qe"));
IS976.addChild(&connect986);

Script961.addChild(&IS976);


//Script961.setSourceCode(CString("vrmlscript:")+
//_T("function Re(U,Se){")+
//_T("var Te=new VrmlMatrix();")+
//_T("for(var J=U.C.length-2;J>=0;J--){")+
//_T("Te.setTransform(U.C[J].translation,")+
//_T("U.C[J].rotation,")+
//_T("U.C[J].scale,")+
//_T("U.C[J].scaleOrientation,")+
//_T("U.C[J].center);")+
//_T("Se.multRight(Te);")+
//_T("}")+
//_T("}")+
//_T("function Ue(Ve,Se){")+
//_T("var We=Ve;")+
//_T("while(We.G==FALSE){")+
//_T("Re(We,Se);")+
//_T("We=We.B;")+
//_T("}")+
//_T("}")+
//_T("function Xe()")+
//_T("{")+
//_T("var Se=new VrmlMatrix();")+
//_T("Re(Me,Se);")+
//_T("Ue(Me.B,Se);")+
//_T("var Ye=Me.C[0].center;")+
//_T("return Se.multVecMatrix(Ye);")+
//_T("}")+
//_T("function Ze(Se)")+
//_T("{")+
//_T("Re(Me,Se);")+
//_T("Ue(Me.B,Se);")+
//_T("}")+
//_T("function af()")+
//_T("{")+
//_T("var Se=new VrmlMatrix();")+
//_T("Re(U,Se);")+
//_T("Ue(U.B,Se);")+
//_T("return Se;")+
//_T("}")+
//_T("function R(n,Za)")+
//_T("{")+
//_T("He=Za;")+
//_T("U.C[0].center=center;")+
//_T("Ne=new SFVec3f(0,1,0);")+
//_T("Oe=2;")+
//_T("if(Math.abs(qe.x)>0.5){")+
//_T("Oe=0;")+
//_T("}")+
//_T("else if(Math.abs(qe.y)>0.5){")+
//_T("Oe=1;")+
//_T("Ne=new SFVec3f(0,0,1);")+
//_T("}")+
//_T("}")+
//_T("function set_fraction(n)")+
//_T("{")+
//_T("var bf=new SFVec3f(0,0,0);")+
//_T("if(Je){")+
//_T("bf=new SFVec3f(0.0,0.0,Ke);")+
//_T("}")+
//_T("else{")+
//_T("bf=Xe();")+
//_T("}")+
//_T("var cf=af();")+
//_T("var df=cf.inverse();")+
//_T("var vec=df.multVecMatrix(bf);")+
//_T("vec=vec.subtract(U.C[0].center);")+
//_T("var we=new SFRotation(qe,vec);")+
//_T("if(n<1.0){")+
//_T("we=Qe.slerp(we,n);")+
//_T("}")+
//_T("U.C[0].rotation=we.multiply(U.C[0].rotation);")+
//_T("if(Je){")+
//_T("cf=af();")+
//_T("df=cf.inverse();")+
//_T("var ef=df.multVecMatrix(new SFVec3f(0,1,0));")+
//_T("var ff=new SFVec3f(0,0,0);")+
//_T("var gf=df.multVecMatrix(ff);")+
//_T("ef=ef.subtract(gf);")+
//_T("ef[Oe]=0.0;")+
//_T("we=new SFRotation(Ne,ef);")+
//_T("U.C[0].rotation=we.multiply(U.C[0].rotation);")+
//_T("}")+
//_T("}"));
ProtoBody960.addChild(&Script961);

ProtoDeclare947.addChild(&ProtoBody960);

Scene7.addChild(&ProtoDeclare947);

ProtoDeclare& ProtoDeclare987 =  ProtoDeclare();
ProtoDeclare987.setName(CString("hf"));
ProtoInterface& ProtoInterface988 =  ProtoInterface();
field& field989 =  field();
field989.setName(CString("R"));
field989.setAccessType(CString("inputOnly"));
field989.setType(CString("SFTime"));
ProtoInterface988.addChild(&field989);

field& field990 =  field();
field990.setName(CString("S"));
field990.setAccessType(CString("inputOnly"));
field990.setType(CString("SFTime"));
ProtoInterface988.addChild(&field990);

field& field991 =  field();
field991.setName(CString("set_od"));
field991.setAccessType(CString("inputOnly"));
field991.setType(CString("SFFloat"));
ProtoInterface988.addChild(&field991);

field& field992 =  field();
field992.setName(CString("set_fraction"));
field992.setAccessType(CString("inputOnly"));
field992.setType(CString("SFFloat"));
ProtoInterface988.addChild(&field992);

field& field993 =  field();
field993.setName(CString("jf"));
field993.setAccessType(CString("inputOnly"));
field993.setType(CString("SFFloat"));
ProtoInterface988.addChild(&field993);

field& field994 =  field();
field994.setName(CString("R_changed"));
field994.setAccessType(CString("outputOnly"));
field994.setType(CString("SFTime"));
ProtoInterface988.addChild(&field994);

field& field995 =  field();
field995.setName(CString("translation"));
field995.setAccessType(CString("inputOutput"));
field995.setType(CString("SFVec3f"));
ProtoInterface988.addChild(&field995);

field& field996 =  field();
field996.setName(CString("scale"));
field996.setAccessType(CString("inputOutput"));
field996.setType(CString("SFVec3f"));
field996.setValue(CString("1 1 1"));
ProtoInterface988.addChild(&field996);

field& field997 =  field();
field997.setName(CString("center"));
field997.setAccessType(CString("inputOutput"));
field997.setType(CString("SFVec3f"));
ProtoInterface988.addChild(&field997);

field& field998 =  field();
field998.setName(CString("T"));
field998.setAccessType(CString("inputOutput"));
field998.setType(CString("SFBool"));
field998.setValue(CString("true"));
ProtoInterface988.addChild(&field998);

field& field999 =  field();
field999.setName(CString("rotation"));
field999.setAccessType(CString("inputOutput"));
field999.setType(CString("SFRotation"));
ProtoInterface988.addChild(&field999);

field& field1000 =  field();
field1000.setName(CString("scaleOrientation"));
field1000.setAccessType(CString("inputOutput"));
field1000.setType(CString("SFRotation"));
ProtoInterface988.addChild(&field1000);

field& field1001 =  field();
field1001.setName(CString("children"));
field1001.setAccessType(CString("initializeOnly"));
field1001.setType(CString("MFNode"));
ProtoInterface988.addChild(&field1001);

field& field1002 =  field();
field1002.setName(CString("U"));
field1002.setAccessType(CString("initializeOnly"));
field1002.setType(CString("SFNode"));
ProtoInterface988.addChild(&field1002);

field& field1003 =  field();
field1003.setName(CString("kf"));
field1003.setAccessType(CString("initializeOnly"));
field1003.setType(CString("SFInt32"));
field1003.setValue(CString("8"));
ProtoInterface988.addChild(&field1003);

field& field1004 =  field();
field1004.setName(CString("lf"));
field1004.setAccessType(CString("initializeOnly"));
field1004.setType(CString("SFFloat"));
field1004.setValue(CString("1.5"));
ProtoInterface988.addChild(&field1004);

field& field1005 =  field();
field1005.setName(CString("mf"));
field1005.setAccessType(CString("initializeOnly"));
field1005.setType(CString("SFBool"));
field1005.setValue(CString("true"));
ProtoInterface988.addChild(&field1005);

field& field1006 =  field();
field1006.setName(CString("nf"));
field1006.setAccessType(CString("initializeOnly"));
field1006.setType(CString("SFBool"));
field1006.setValue(CString("true"));
ProtoInterface988.addChild(&field1006);

field& field1007 =  field();
field1007.setName(CString("of"));
field1007.setAccessType(CString("initializeOnly"));
field1007.setType(CString("SFBool"));
field1007.setValue(CString("true"));
ProtoInterface988.addChild(&field1007);

ProtoDeclare987.addChild(&ProtoInterface988);

ProtoBody& ProtoBody1008 =  ProtoBody();
Transform& Transform1009 =  Transform();
Transform1009.setDEF(CString("pf_1"));
IS& IS1010 =  IS();
Connect& connect1011 =  Connect();
connect1011.setNodeField(CString("translation"));
connect1011.setProtoField(CString("translation"));
IS1010.addChild(&connect1011);

Connect& connect1012 =  Connect();
connect1012.setNodeField(CString("rotation"));
connect1012.setProtoField(CString("rotation"));
IS1010.addChild(&connect1012);

Connect& connect1013 =  Connect();
connect1013.setNodeField(CString("scale"));
connect1013.setProtoField(CString("scale"));
IS1010.addChild(&connect1013);

Connect& connect1014 =  Connect();
connect1014.setNodeField(CString("scaleOrientation"));
connect1014.setProtoField(CString("scaleOrientation"));
IS1010.addChild(&connect1014);

Connect& connect1015 =  Connect();
connect1015.setNodeField(CString("center"));
connect1015.setProtoField(CString("center"));
IS1010.addChild(&connect1015);

Connect& connect1016 =  Connect();
connect1016.setNodeField(CString("children"));
connect1016.setProtoField(CString("children"));
IS1010.addChild(&connect1016);

Transform1009.addChild(&IS1010);

ProtoBody1008.addChild(&Transform1009);

PositionInterpolator& PositionInterpolator1017 =  PositionInterpolator();
PositionInterpolator1017.setDEF(CString("qf_1"));
ProtoBody1008.addChild(&PositionInterpolator1017);

Script& Script1018 =  Script();
Script1018.setDEF(CString("rf_1"));
Script1018.setDirectOutput(true);
field& field1019 =  field();
field1019.setName(CString("R"));
field1019.setAccessType(CString("inputOnly"));
field1019.setType(CString("SFTime"));
Script1018.addChild(&field1019);

field& field1020 =  field();
field1020.setName(CString("S"));
field1020.setAccessType(CString("inputOnly"));
field1020.setType(CString("SFTime"));
Script1018.addChild(&field1020);

field& field1021 =  field();
field1021.setName(CString("set_od"));
field1021.setAccessType(CString("inputOnly"));
field1021.setType(CString("SFFloat"));
Script1018.addChild(&field1021);

field& field1022 =  field();
field1022.setName(CString("set_fraction"));
field1022.setAccessType(CString("inputOnly"));
field1022.setType(CString("SFFloat"));
Script1018.addChild(&field1022);

field& field1023 =  field();
field1023.setName(CString("jf"));
field1023.setAccessType(CString("inputOnly"));
field1023.setType(CString("SFFloat"));
Script1018.addChild(&field1023);

field& field1024 =  field();
field1024.setName(CString("set_sf"));
field1024.setAccessType(CString("inputOnly"));
field1024.setType(CString("SFVec3f"));
Script1018.addChild(&field1024);

field& field1025 =  field();
field1025.setName(CString("R_changed"));
field1025.setAccessType(CString("outputOnly"));
field1025.setType(CString("SFTime"));
Script1018.addChild(&field1025);

field& field1026 =  field();
field1026.setName(CString("key_changed"));
field1026.setAccessType(CString("outputOnly"));
field1026.setType(CString("MFFloat"));
Script1018.addChild(&field1026);

field& field1027 =  field();
field1027.setName(CString("keyValue_changed"));
field1027.setAccessType(CString("outputOnly"));
field1027.setType(CString("MFVec3f"));
Script1018.addChild(&field1027);

field& field1028 =  field();
field1028.setName(CString("sf_changed"));
field1028.setAccessType(CString("outputOnly"));
field1028.setType(CString("SFVec3f"));
Script1018.addChild(&field1028);

field& field1029 =  field();
field1029.setName(CString("fraction_changed"));
field1029.setAccessType(CString("outputOnly"));
field1029.setType(CString("SFFloat"));
Script1018.addChild(&field1029);

field& field1030 =  field();
field1030.setName(CString("U"));
field1030.setAccessType(CString("initializeOnly"));
field1030.setType(CString("SFNode"));
Script1018.addChild(&field1030);

field& field1031 =  field();
field1031.setName(CString("kf"));
field1031.setAccessType(CString("initializeOnly"));
field1031.setType(CString("SFInt32"));
Script1018.addChild(&field1031);

field& field1032 =  field();
field1032.setName(CString("lf"));
field1032.setAccessType(CString("initializeOnly"));
field1032.setType(CString("SFFloat"));
Script1018.addChild(&field1032);

field& field1033 =  field();
field1033.setName(CString("mf"));
field1033.setAccessType(CString("initializeOnly"));
field1033.setType(CString("SFBool"));
Script1018.addChild(&field1033);

field& field1034 =  field();
field1034.setName(CString("nf"));
field1034.setAccessType(CString("initializeOnly"));
field1034.setType(CString("SFBool"));
Script1018.addChild(&field1034);

field& field1035 =  field();
field1035.setName(CString("of"));
field1035.setAccessType(CString("initializeOnly"));
field1035.setType(CString("SFBool"));
Script1018.addChild(&field1035);

field& field1036 =  field();
field1036.setName(CString("aa"));
field1036.setAccessType(CString("initializeOnly"));
field1036.setType(CString("SFBool"));
Script1018.addChild(&field1036);

field& field1037 =  field();
field1037.setName(CString("tf"));
field1037.setAccessType(CString("initializeOnly"));
field1037.setType(CString("SFFloat"));
field1037.setValue(CString("1"));
Script1018.addChild(&field1037);

field& field1038 =  field();
field1038.setName(CString("key"));
field1038.setAccessType(CString("initializeOnly"));
field1038.setType(CString("MFFloat"));
field1038.setValue(CString("0"));
Script1018.addChild(&field1038);

field& field1039 =  field();
field1039.setName(CString("keyValue"));
field1039.setAccessType(CString("initializeOnly"));
field1039.setType(CString("MFVec3f"));
field1039.setValue(CString("0 0 0"));
Script1018.addChild(&field1039);

field& field1040 =  field();
field1040.setName(CString("uf"));
field1040.setAccessType(CString("initializeOnly"));
field1040.setType(CString("SFNode"));
Transform& Transform1041 =  Transform();
Transform1041.setUSE(CString("pf_1"));
field1040.addChild(&Transform1041);

Script1018.addChild(&field1040);

field& field1042 =  field();
field1042.setName(CString("vf"));
field1042.setAccessType(CString("initializeOnly"));
field1042.setType(CString("SFVec3f"));
Script1018.addChild(&field1042);

field& field1043 =  field();
field1043.setName(CString("sf"));
field1043.setAccessType(CString("initializeOnly"));
field1043.setType(CString("SFVec3f"));
Script1018.addChild(&field1043);

field& field1044 =  field();
field1044.setName(CString("od"));
field1044.setAccessType(CString("initializeOnly"));
field1044.setType(CString("SFFloat"));
Script1018.addChild(&field1044);

field& field1045 =  field();
field1045.setName(CString("wf"));
field1045.setAccessType(CString("initializeOnly"));
field1045.setType(CString("SFFloat"));
Script1018.addChild(&field1045);

field& field1046 =  field();
field1046.setName(CString("xf"));
field1046.setAccessType(CString("initializeOnly"));
field1046.setType(CString("SFFloat"));
Script1018.addChild(&field1046);

field& field1047 =  field();
field1047.setName(CString("ea"));
field1047.setAccessType(CString("initializeOnly"));
field1047.setType(CString("SFTime"));
Script1018.addChild(&field1047);

field& field1048 =  field();
field1048.setName(CString("fa"));
field1048.setAccessType(CString("initializeOnly"));
field1048.setType(CString("SFTime"));
Script1018.addChild(&field1048);

IS& IS1049 =  IS();
Connect& connect1050 =  Connect();
connect1050.setNodeField(CString("R"));
connect1050.setProtoField(CString("R"));
IS1049.addChild(&connect1050);

Connect& connect1051 =  Connect();
connect1051.setNodeField(CString("S"));
connect1051.setProtoField(CString("S"));
IS1049.addChild(&connect1051);

Connect& connect1052 =  Connect();
connect1052.setNodeField(CString("set_od"));
connect1052.setProtoField(CString("set_od"));
IS1049.addChild(&connect1052);

Connect& connect1053 =  Connect();
connect1053.setNodeField(CString("set_fraction"));
connect1053.setProtoField(CString("set_fraction"));
IS1049.addChild(&connect1053);

Connect& connect1054 =  Connect();
connect1054.setNodeField(CString("jf"));
connect1054.setProtoField(CString("jf"));
IS1049.addChild(&connect1054);

Connect& connect1055 =  Connect();
connect1055.setNodeField(CString("R_changed"));
connect1055.setProtoField(CString("R_changed"));
IS1049.addChild(&connect1055);

Connect& connect1056 =  Connect();
connect1056.setNodeField(CString("U"));
connect1056.setProtoField(CString("U"));
IS1049.addChild(&connect1056);

Connect& connect1057 =  Connect();
connect1057.setNodeField(CString("kf"));
connect1057.setProtoField(CString("kf"));
IS1049.addChild(&connect1057);

Connect& connect1058 =  Connect();
connect1058.setNodeField(CString("lf"));
connect1058.setProtoField(CString("lf"));
IS1049.addChild(&connect1058);

Connect& connect1059 =  Connect();
connect1059.setNodeField(CString("mf"));
connect1059.setProtoField(CString("mf"));
IS1049.addChild(&connect1059);

Connect& connect1060 =  Connect();
connect1060.setNodeField(CString("nf"));
connect1060.setProtoField(CString("nf"));
IS1049.addChild(&connect1060);

Connect& connect1061 =  Connect();
connect1061.setNodeField(CString("of"));
connect1061.setProtoField(CString("of"));
IS1049.addChild(&connect1061);

Script1018.addChild(&IS1049);


//Script1018.setSourceCode(CString("javascript:")+
//_T("function initialize(){")+
//_T("aa=FALSE;")+
//_T("tf=1.;")+
//_T("sf.x=sf.y=sf.z=1.;")+
//_T("key.length=kf;")+
//_T("keyValue.length=kf;")+
//_T("ge=0.0;")+
//_T("g=kf-1.0;")+
//_T("g=1./g;")+
//_T("for(J=0;J<kf;J++){")+
//_T("key[J]=ge;")+
//_T("keyValue[J].x=keyValue[J].y=keyValue[J].z=1.;")+
//_T("if(mf==TRUE){")+
//_T("xf=Math.random();")+
//_T("wf=(1.-xf)+xf*(lf);")+
//_T("keyValue[J].x=wf;")+
//_T("}")+
//_T("if(nf==TRUE){")+
//_T("xf=Math.random();")+
//_T("wf=(1.-xf)+xf*(lf);")+
//_T("keyValue[J].y=wf;")+
//_T("}")+
//_T("if(of==TRUE){")+
//_T("xf=Math.random();")+
//_T("wf=(1.-xf)+xf*(lf);")+
//_T("keyValue[J].z=wf;")+
//_T("}")+
//_T("ge+=g;")+
//_T("}")+
//_T("}")+
//_T("function R(n){")+
//_T("if(fa==n){")+
//_T("return;")+
//_T("}")+
//_T("if(aa==TRUE){")+
//_T("ea=n;")+
//_T("return;")+
//_T("}")+
//_T("aa=TRUE;")+
//_T("vf=uf.scale_changed;")+
//_T("key_changed=key;")+
//_T("keyValue_changed=keyValue;")+
//_T("R_changed=n;")+
//_T("fa=n;")+
//_T("}")+
//_T("function S(n){")+
//_T("uf.set_scale=vf;")+
//_T("aa=FALSE;")+
//_T("if(ea==n){")+
//_T("R(n);")+
//_T("}")+
//_T("}")+
//_T("function set_od(n){")+
//_T("od=n;")+
//_T("if(od<0.)od=0.;")+
//_T("else if(od>1.)od=1.;")+
//_T("}")+
//_T("function set_sf(n){")+
//_T("if(mf==TRUE)sf.x=(1.-od)+od*(n.x);")+
//_T("if(nf==TRUE)sf.y=(1.-od)+od*(n.y);")+
//_T("if(of==TRUE)sf.z=(1.-od)+od*(n.z);")+
//_T("sf_changed=sf;")+
//_T("}")+
//_T("function set_fraction(n){")+
//_T("fraction_changed=n;")+
//_T("}")+
//_T("function jf(n){")+
//_T("if(n>tf){")+
//_T("tf=n;")+
//_T("return;")+
//_T("}")+
//_T("tf=n;")+
//_T("keyValue[0].x=keyValue[kf-1].x;")+
//_T("keyValue[0].y=keyValue[kf-1].y;")+
//_T("keyValue[0].z=keyValue[kf-1].z;")+
//_T("for(J=1;J<kf;J++){")+
//_T("if(mf==TRUE){")+
//_T("xf=Math.random();")+
//_T("wf=(1.-xf)+xf*(lf);")+
//_T("keyValue[J].x=wf;")+
//_T("}")+
//_T("if(nf==TRUE){")+
//_T("xf=Math.random();")+
//_T("wf=(1.-xf)+xf*(lf);")+
//_T("keyValue[J].y=wf;")+
//_T("}")+
//_T("if(of==TRUE){")+
//_T("xf=Math.random();")+
//_T("wf=(1.-xf)+xf*(lf);")+
//_T("keyValue[J].z=wf;")+
//_T("}")+
//_T("}")+
//_T("keyValue_changed=keyValue;")+
//_T("}"));
ProtoBody1008.addChild(&Script1018);

ROUTE& ROUTE1062 =  ROUTE();
ROUTE1062.setFromNode(CString("rf_1"));
ROUTE1062.setFromField(CString("sf_changed"));
ROUTE1062.setToNode(CString("pf_1"));
ROUTE1062.setToField(CString("set_scale"));
ProtoBody1008.addChild(&ROUTE1062);

ROUTE& ROUTE1063 =  ROUTE();
ROUTE1063.setFromNode(CString("rf_1"));
ROUTE1063.setFromField(CString("key_changed"));
ROUTE1063.setToNode(CString("qf_1"));
ROUTE1063.setToField(CString("set_key"));
ProtoBody1008.addChild(&ROUTE1063);

ROUTE& ROUTE1064 =  ROUTE();
ROUTE1064.setFromNode(CString("rf_1"));
ROUTE1064.setFromField(CString("fraction_changed"));
ROUTE1064.setToNode(CString("qf_1"));
ROUTE1064.setToField(CString("set_fraction"));
ProtoBody1008.addChild(&ROUTE1064);

ROUTE& ROUTE1065 =  ROUTE();
ROUTE1065.setFromNode(CString("rf_1"));
ROUTE1065.setFromField(CString("keyValue_changed"));
ROUTE1065.setToNode(CString("qf_1"));
ROUTE1065.setToField(CString("set_keyValue"));
ProtoBody1008.addChild(&ROUTE1065);

ROUTE& ROUTE1066 =  ROUTE();
ROUTE1066.setFromNode(CString("qf_1"));
ROUTE1066.setFromField(CString("value_changed"));
ROUTE1066.setToNode(CString("rf_1"));
ROUTE1066.setToField(CString("set_sf"));
ProtoBody1008.addChild(&ROUTE1066);

ProtoDeclare987.addChild(&ProtoBody1008);

Scene7.addChild(&ProtoDeclare987);

ProtoDeclare& ProtoDeclare1067 =  ProtoDeclare();
ProtoDeclare1067.setName(CString("yf"));
ProtoInterface& ProtoInterface1068 =  ProtoInterface();
field& field1069 =  field();
field1069.setName(CString("set_p"));
field1069.setAccessType(CString("inputOnly"));
field1069.setType(CString("SFBool"));
ProtoInterface1068.addChild(&field1069);

field& field1070 =  field();
field1070.setName(CString("w"));
field1070.setAccessType(CString("inputOnly"));
field1070.setType(CString("SFBool"));
ProtoInterface1068.addChild(&field1070);

field& field1071 =  field();
field1071.setName(CString("point_changed"));
field1071.setAccessType(CString("outputOnly"));
field1071.setType(CString("MFVec3f"));
ProtoInterface1068.addChild(&field1071);

field& field1072 =  field();
field1072.setName(CString("zf_changed"));
field1072.setAccessType(CString("outputOnly"));
field1072.setType(CString("MFInt32"));
ProtoInterface1068.addChild(&field1072);

field& field1073 =  field();
field1073.setName(CString("Sd_changed"));
field1073.setAccessType(CString("outputOnly"));
field1073.setType(CString("MFFloat"));
ProtoInterface1068.addChild(&field1073);

field& field1074 =  field();
field1074.setName(CString("Af_changed"));
field1074.setAccessType(CString("outputOnly"));
field1074.setType(CString("MFVec2f"));
ProtoInterface1068.addChild(&field1074);

field& field1075 =  field();
field1075.setName(CString("Bf_changed"));
field1075.setAccessType(CString("outputOnly"));
field1075.setType(CString("MFInt32"));
ProtoInterface1068.addChild(&field1075);

field& field1076 =  field();
field1076.setName(CString("Cf_changed"));
field1076.setAccessType(CString("outputOnly"));
field1076.setType(CString("SFBool"));
ProtoInterface1068.addChild(&field1076);

field& field1077 =  field();
field1077.setName(CString("p_changed"));
field1077.setAccessType(CString("outputOnly"));
field1077.setType(CString("SFBool"));
ProtoInterface1068.addChild(&field1077);

field& field1078 =  field();
field1078.setName(CString("diffuseColor"));
field1078.setAccessType(CString("inputOutput"));
field1078.setType(CString("SFColor"));
field1078.setValue(CString("0.3 0.5 1"));
ProtoInterface1068.addChild(&field1078);

field& field1079 =  field();
field1079.setName(CString("B"));
field1079.setAccessType(CString("inputOutput"));
field1079.setType(CString("SFNode"));
ProtoInterface1068.addChild(&field1079);

field& field1080 =  field();
field1080.setName(CString("C"));
field1080.setAccessType(CString("inputOutput"));
field1080.setType(CString("MFNode"));
ProtoInterface1068.addChild(&field1080);

field& field1081 =  field();
field1081.setName(CString("D"));
field1081.setAccessType(CString("inputOutput"));
field1081.setType(CString("SFNode"));
ProtoInterface1068.addChild(&field1081);

field& field1082 =  field();
field1082.setName(CString("F"));
field1082.setAccessType(CString("inputOutput"));
field1082.setType(CString("SFInt32"));
field1082.setValue(CString("-1"));
ProtoInterface1068.addChild(&field1082);

field& field1083 =  field();
field1083.setName(CString("G"));
field1083.setAccessType(CString("inputOutput"));
field1083.setType(CString("SFBool"));
ProtoInterface1068.addChild(&field1083);

field& field1084 =  field();
field1084.setName(CString("point"));
field1084.setAccessType(CString("initializeOnly"));
field1084.setType(CString("MFVec3f"));
ProtoInterface1068.addChild(&field1084);

field& field1085 =  field();
field1085.setName(CString("zf"));
field1085.setAccessType(CString("initializeOnly"));
field1085.setType(CString("MFInt32"));
ProtoInterface1068.addChild(&field1085);

field& field1086 =  field();
field1086.setName(CString("Sd"));
field1086.setAccessType(CString("initializeOnly"));
field1086.setType(CString("MFFloat"));
ProtoInterface1068.addChild(&field1086);

field& field1087 =  field();
field1087.setName(CString("Af"));
field1087.setAccessType(CString("initializeOnly"));
field1087.setType(CString("MFVec2f"));
ProtoInterface1068.addChild(&field1087);

field& field1088 =  field();
field1088.setName(CString("Bf"));
field1088.setAccessType(CString("initializeOnly"));
field1088.setType(CString("MFInt32"));
ProtoInterface1068.addChild(&field1088);

field& field1089 =  field();
field1089.setName(CString("Cf"));
field1089.setAccessType(CString("initializeOnly"));
field1089.setType(CString("SFBool"));
ProtoInterface1068.addChild(&field1089);

field& field1090 =  field();
field1090.setName(CString("p"));
field1090.setAccessType(CString("initializeOnly"));
field1090.setType(CString("SFBool"));
field1090.setValue(CString("true"));
ProtoInterface1068.addChild(&field1090);

field& field1091 =  field();
field1091.setName(CString("coord"));
field1091.setAccessType(CString("initializeOnly"));
field1091.setType(CString("MFVec3f"));
ProtoInterface1068.addChild(&field1091);

field& field1092 =  field();
field1092.setName(CString("coordIndex"));
field1092.setAccessType(CString("initializeOnly"));
field1092.setType(CString("MFInt32"));
ProtoInterface1068.addChild(&field1092);

field& field1093 =  field();
field1093.setName(CString("choice"));
field1093.setAccessType(CString("initializeOnly"));
field1093.setType(CString("SFInt32"));
ProtoInterface1068.addChild(&field1093);

field& field1094 =  field();
field1094.setName(CString("Df"));
field1094.setAccessType(CString("initializeOnly"));
field1094.setType(CString("SFInt32"));
field1094.setValue(CString("8"));
ProtoInterface1068.addChild(&field1094);

field& field1095 =  field();
field1095.setName(CString("scale"));
field1095.setAccessType(CString("initializeOnly"));
field1095.setType(CString("SFVec3f"));
field1095.setValue(CString("1 1 1"));
ProtoInterface1068.addChild(&field1095);

ProtoDeclare1067.addChild(&ProtoInterface1068);

ProtoBody& ProtoBody1096 =  ProtoBody();
Switch& Switch1097 =  Switch();
Switch1097.setDEF(CString("Ef_1"));
Switch1097.setWhichChoice(-1);
IS& IS1098 =  IS();
Connect& connect1099 =  Connect();
connect1099.setNodeField(CString("whichChoice"));
connect1099.setProtoField(CString("choice"));
IS1098.addChild(&connect1099);

Switch1097.addChild(&IS1098);

Shape& Shape1100 =  Shape();
Appearance& Appearance1101 =  Appearance();
Material& Material1102 =  Material();
Material1102.setDEF(CString("Ff"));
IS& IS1103 =  IS();
Connect& connect1104 =  Connect();
connect1104.setNodeField(CString("emissiveColor"));
connect1104.setProtoField(CString("diffuseColor"));
IS1103.addChild(&connect1104);

Material1102.addChild(&IS1103);

Appearance1101.addChild(&Material1102);

Shape1100.addChild(&Appearance1101);

IndexedLineSet& IndexedLineSet1105 =  IndexedLineSet();
IndexedLineSet1105.setDEF(CString("Gf_1"));
IS& IS1106 =  IS();
Connect& connect1107 =  Connect();
connect1107.setNodeField(CString("coordIndex"));
connect1107.setProtoField(CString("coordIndex"));
IS1106.addChild(&connect1107);

IndexedLineSet1105.addChildren(&IS1106);

Coordinate& Coordinate1108 =  Coordinate();
Coordinate1108.setDEF(CString("Hf_1"));
IS& IS1109 =  IS();
Connect& connect1110 =  Connect();
connect1110.setNodeField(CString("point"));
connect1110.setProtoField(CString("coord"));
IS1109.addChild(&connect1110);

Coordinate1108.addChild(&IS1109);

IndexedLineSet1105.setCoord(&Coordinate1108);

Shape1100.setGeometry(&IndexedLineSet1105);

Switch1097.addChild(&Shape1100);

ProtoBody1096.addChild(&Switch1097);

Script& Script1111 =  Script();
Script1111.setDEF(CString("If_1"));
Script1111.setDirectOutput(true);
field& field1112 =  field();
field1112.setName(CString("set_p"));
field1112.setAccessType(CString("inputOnly"));
field1112.setType(CString("SFBool"));
Script1111.addChild(&field1112);

field& field1113 =  field();
field1113.setName(CString("w"));
field1113.setAccessType(CString("inputOnly"));
field1113.setType(CString("SFBool"));
Script1111.addChild(&field1113);

field& field1114 =  field();
field1114.setName(CString("p_changed"));
field1114.setAccessType(CString("outputOnly"));
field1114.setType(CString("SFBool"));
Script1111.addChild(&field1114);

field& field1115 =  field();
field1115.setName(CString("point_changed"));
field1115.setAccessType(CString("outputOnly"));
field1115.setType(CString("MFVec3f"));
Script1111.addChild(&field1115);

field& field1116 =  field();
field1116.setName(CString("zf_changed"));
field1116.setAccessType(CString("outputOnly"));
field1116.setType(CString("MFInt32"));
Script1111.addChild(&field1116);

field& field1117 =  field();
field1117.setName(CString("Sd_changed"));
field1117.setAccessType(CString("outputOnly"));
field1117.setType(CString("MFFloat"));
Script1111.addChild(&field1117);

field& field1118 =  field();
field1118.setName(CString("Af_changed"));
field1118.setAccessType(CString("outputOnly"));
field1118.setType(CString("MFVec2f"));
Script1111.addChild(&field1118);

field& field1119 =  field();
field1119.setName(CString("Bf_changed"));
field1119.setAccessType(CString("outputOnly"));
field1119.setType(CString("MFInt32"));
Script1111.addChild(&field1119);

field& field1120 =  field();
field1120.setName(CString("Cf_changed"));
field1120.setAccessType(CString("outputOnly"));
field1120.setType(CString("SFBool"));
Script1111.addChild(&field1120);

field& field1121 =  field();
field1121.setName(CString("coord"));
field1121.setAccessType(CString("outputOnly"));
field1121.setType(CString("MFVec3f"));
Script1111.addChild(&field1121);

field& field1122 =  field();
field1122.setName(CString("coordIndex"));
field1122.setAccessType(CString("outputOnly"));
field1122.setType(CString("MFInt32"));
Script1111.addChild(&field1122);

field& field1123 =  field();
field1123.setName(CString("p"));
field1123.setAccessType(CString("initializeOnly"));
field1123.setType(CString("SFBool"));
Script1111.addChild(&field1123);

field& field1124 =  field();
field1124.setName(CString("point"));
field1124.setAccessType(CString("initializeOnly"));
field1124.setType(CString("MFVec3f"));
Script1111.addChild(&field1124);

field& field1125 =  field();
field1125.setName(CString("zf"));
field1125.setAccessType(CString("initializeOnly"));
field1125.setType(CString("MFInt32"));
Script1111.addChild(&field1125);

field& field1126 =  field();
field1126.setName(CString("Sd"));
field1126.setAccessType(CString("initializeOnly"));
field1126.setType(CString("MFFloat"));
Script1111.addChild(&field1126);

field& field1127 =  field();
field1127.setName(CString("Af"));
field1127.setAccessType(CString("initializeOnly"));
field1127.setType(CString("MFVec2f"));
Script1111.addChild(&field1127);

field& field1128 =  field();
field1128.setName(CString("Bf"));
field1128.setAccessType(CString("initializeOnly"));
field1128.setType(CString("MFInt32"));
Script1111.addChild(&field1128);

field& field1129 =  field();
field1129.setName(CString("Cf"));
field1129.setAccessType(CString("initializeOnly"));
field1129.setType(CString("SFBool"));
Script1111.addChild(&field1129);

field& field1130 =  field();
field1130.setName(CString("Df"));
field1130.setAccessType(CString("initializeOnly"));
field1130.setType(CString("SFInt32"));
Script1111.addChild(&field1130);

field& field1131 =  field();
field1131.setName(CString("ma"));
field1131.setAccessType(CString("initializeOnly"));
field1131.setType(CString("SFNode"));
Switch& Switch1132 =  Switch();
Switch1132.setUSE(CString("Ef_1"));
field1131.addChild(Switch1132);

Script1111.addChild(&field1131);

IS& IS1133 =  IS();
Connect& connect1134 =  Connect();
connect1134.setNodeField(CString("set_p"));
connect1134.setProtoField(CString("set_p"));
IS1133.addChild(&connect1134);

Connect& connect1135 =  Connect();
connect1135.setNodeField(CString("w"));
connect1135.setProtoField(CString("w"));
IS1133.addChild(&connect1135);

Connect& connect1136 =  Connect();
connect1136.setNodeField(CString("p_changed"));
connect1136.setProtoField(CString("p_changed"));
IS1133.addChild(&connect1136);

Connect& connect1137 =  Connect();
connect1137.setNodeField(CString("point_changed"));
connect1137.setProtoField(CString("point_changed"));
IS1133.addChild(&connect1137);

Connect& connect1138 =  Connect();
connect1138.setNodeField(CString("zf_changed"));
connect1138.setProtoField(CString("zf_changed"));
IS1133.addChild(&connect1138);

Connect& connect1139 =  Connect();
connect1139.setNodeField(CString("Sd_changed"));
connect1139.setProtoField(CString("Sd_changed"));
IS1133.addChild(&connect1139);

Connect& connect1140 =  Connect();
connect1140.setNodeField(CString("Af_changed"));
connect1140.setProtoField(CString("Af_changed"));
IS1133.addChild(&connect1140);

Connect& connect1141 =  Connect();
connect1141.setNodeField(CString("Bf_changed"));
connect1141.setProtoField(CString("Bf_changed"));
IS1133.addChild(&connect1141);

Connect& connect1142 =  Connect();
connect1142.setNodeField(CString("Cf_changed"));
connect1142.setProtoField(CString("Cf_changed"));
IS1133.addChild(&connect1142);

Connect& connect1143 =  Connect();
connect1143.setNodeField(CString("p"));
connect1143.setProtoField(CString("p"));
IS1133.addChild(&connect1143);

Connect& connect1144 =  Connect();
connect1144.setNodeField(CString("point"));
connect1144.setProtoField(CString("point"));
IS1133.addChild(&connect1144);

Connect& connect1145 =  Connect();
connect1145.setNodeField(CString("zf"));
connect1145.setProtoField(CString("zf"));
IS1133.addChild(&connect1145);

Connect& connect1146 =  Connect();
connect1146.setNodeField(CString("Sd"));
connect1146.setProtoField(CString("Sd"));
IS1133.addChild(&connect1146);

Connect& connect1147 =  Connect();
connect1147.setNodeField(CString("Af"));
connect1147.setProtoField(CString("Af"));
IS1133.addChild(&connect1147);

Connect& connect1148 =  Connect();
connect1148.setNodeField(CString("Bf"));
connect1148.setProtoField(CString("Bf"));
IS1133.addChild(&connect1148);

Connect& connect1149 =  Connect();
connect1149.setNodeField(CString("Cf"));
connect1149.setProtoField(CString("Cf"));
IS1133.addChild(&connect1149);

Connect& connect1150 =  Connect();
connect1150.setNodeField(CString("Df"));
connect1150.setProtoField(CString("Df"));
IS1133.addChild(&connect1150);

Script1111.addChild(&IS1133);


//Script1111.setSourceCode(CString("javascript:")+
//_T("function Jf(Kf,Lf,")+
//_T("Mf,Nf,Of,Pf,Qf,Rf){")+
//_T("Sf=coord.length;")+
//_T("coord.length+=Df;")+
//_T("for(J=0;J<Df;J++){")+
//_T("var Tf=Kf.multiply(Of[J]);")+
//_T("Tf=Tf.add(Lf.multiply(Pf[J]));")+
//_T("Tf=Tf.add(Mf.multiply(Qf[J]));")+
//_T("Tf=Tf.add(Nf.multiply(Rf[J]));")+
//_T("coord[Sf+J]=Tf;")+
//_T("}")+
//_T("}")+
//_T("function Uf(){")+
//_T("if(point.length==0)return;")+
//_T("var index=0;")+
//_T("var Vf=new SFVec3f();")+
//_T("var Kf=new SFVec3f();")+
//_T("var Lf=new SFVec3f();")+
//_T("var Mf=new SFVec3f();")+
//_T("var Nf=new SFVec3f();")+
//_T("var Wf=new SFVec3f();")+
//_T("var Xf=new SFVec3f();")+
//_T("var Yf=new SFVec3f();")+
//_T("var Zf=new SFVec3f();")+
//_T("var ag=FALSE;")+
//_T("var bg=FALSE;")+
//_T("var cg=FALSE;")+
//_T("var dg=FALSE;")+
//_T("var eg=FALSE;")+
//_T("var fg=FALSE;")+
//_T("if(zf[index]==1){")+
//_T("Vf=point[index];")+
//_T("ag=TRUE;")+
//_T("Xf=point[index];")+
//_T("cg=TRUE;")+
//_T("index++;")+
//_T("}")+
//_T("if(zf[index]==0){")+
//_T("Kf=point[index];")+
//_T("Yf=point[index];")+
//_T("index++;")+
//_T("}")+
//_T("if(zf[index]==2){")+
//_T("Lf=point[index];")+
//_T("dg=TRUE;")+
//_T("Zf=point[index];")+
//_T("fg=TRUE;")+
//_T("index++;")+
//_T("}")+
//_T("var Of=new MFFloat();")+
//_T("var Pf=new MFFloat();")+
//_T("var Qf=new MFFloat();")+
//_T("var Rf=new MFFloat();")+
//_T("Of.length=Pf.length=Qf.length=Rf.length=Df;")+
//_T("Of[0]=1;")+
//_T("Pf[0]=Qf[0]=Rf[0]=0;")+
//_T("for(J=1;J<Df;J++){")+
//_T("gg=(J*1.0)/Df;")+
//_T("Of[J]=(1-gg)*(1-gg)*(1-gg);")+
//_T("Pf[J]=3*gg*(1-gg)*(1-gg);")+
//_T("Qf[J]=3*gg*gg*(1-gg);")+
//_T("Rf[J]=gg*gg*gg;")+
//_T("}")+
//_T("while(index<zf.length){")+
//_T("bg=FALSE;")+
//_T("eg=FALSE;")+
//_T("if(zf[index]==1){")+
//_T("Mf=point[index];")+
//_T("bg=TRUE;")+
//_T("index++;")+
//_T("}")+
//_T("if((index<zf.length)&&(zf[index]==0)){")+
//_T("Nf=point[index];")+
//_T("index++;")+
//_T("}")+
//_T("if((index<zf.length)&&(zf[index]==2)){")+
//_T("Wf=point[index];")+
//_T("eg=TRUE;")+
//_T("index++;")+
//_T("}")+
//_T("if(dg&&bg){")+
//_T("Jf(Kf,Lf,")+
//_T("Mf,Nf,")+
//_T("Of,Pf,Qf,Rf);")+
//_T("}else if(dg){")+
//_T("Jf(Kf,Lf,")+
//_T("Nf,Nf,")+
//_T("Of,Pf,Qf,Rf);")+
//_T("}else if(bg){")+
//_T("Jf(Kf,Kf,")+
//_T("Mf,Nf,")+
//_T("Of,Pf,Qf,Rf);")+
//_T("}else{")+
//_T("coord[coord.length]=Kf;")+
//_T("}")+
//_T("Vf=Mf;")+
//_T("Kf=Nf;")+
//_T("Lf=Wf;")+
//_T("ag=bg;")+
//_T("dg=eg;")+
//_T("}")+
//_T("if(Cf){")+
//_T("if(eg&&cg){")+
//_T("Jf(Nf,Wf,")+
//_T("Xf,Yf,")+
//_T("Of,Pf,Qf,Rf);")+
//_T("}else if(eg){")+
//_T("Jf(Nf,Wf,")+
//_T("Yf,Yf,")+
//_T("Of,Pf,Qf,Rf);")+
//_T("}else if(cg){")+
//_T("Jf(Nf,Nf,")+
//_T("Xf,Yf,")+
//_T("Of,Pf,Qf,Rf);")+
//_T("}else{")+
//_T("coord[coord.length]=Nf;")+
//_T("}")+
//_T("coord[coord.length]=Yf;")+
//_T("}else{")+
//_T("coord[coord.length]=Nf;")+
//_T("}")+
//_T("coordIndex.length=coord.length+1;")+
//_T("for(J=0;J<coord.length;J++){")+
//_T("coordIndex[J]=J;")+
//_T("}")+
//_T("coordIndex[coordIndex.length-1]=-1;")+
//_T("}")+
//_T("function set_p(n){")+
//_T("if(n==TRUE){")+
//_T("ma.whichChoice=0;")+
//_T("}else{")+
//_T("ma.whichChoice=-1;")+
//_T("}")+
//_T("p=n;")+
//_T("p_changed=n;")+
//_T("}")+
//_T("function initialize(){")+
//_T("set_p(p);")+
//_T("Uf();")+
//_T("point_changed=point;")+
//_T("zf_changed=zf;")+
//_T("Sd_changed=Sd;")+
//_T("Af_changed=Af;")+
//_T("Bf_changed=Bf;")+
//_T("Cf_changed=Cf;")+
//_T("}")+
//_T("function w(){")+
//_T("}"));
ProtoBody1096.addChild(&Script1111);

ROUTE& ROUTE1151 =  ROUTE();
ROUTE1151.setFromNode(CString("If_1"));
ROUTE1151.setFromField(CString("coord"));
ROUTE1151.setToNode(CString("Hf_1"));
ROUTE1151.setToField(CString("set_point"));
ProtoBody1096.addChild(&ROUTE1151);

ROUTE& ROUTE1152 =  ROUTE();
ROUTE1152.setFromNode(CString("If_1"));
ROUTE1152.setFromField(CString("coordIndex"));
ROUTE1152.setToNode(CString("Gf_1"));
ROUTE1152.setToField(CString("set_coordIndex"));
ProtoBody1096.addChild(&ROUTE1152);

ProtoDeclare1067.addChild(&ProtoBody1096);

Scene7.addChild(&ProtoDeclare1067);

ProtoDeclare& ProtoDeclare1153 =  ProtoDeclare();
ProtoDeclare1153.setName(CString("hg"));
ProtoInterface& ProtoInterface1154 =  ProtoInterface();
field& field1155 =  field();
field1155.setName(CString("set_position"));
field1155.setAccessType(CString("inputOnly"));
field1155.setType(CString("SFVec3f"));
ProtoInterface1154.addChild(&field1155);

field& field1156 =  field();
field1156.setName(CString("set_orientation"));
field1156.setAccessType(CString("inputOnly"));
field1156.setType(CString("SFRotation"));
ProtoInterface1154.addChild(&field1156);

field& field1157 =  field();
field1157.setName(CString("U"));
field1157.setAccessType(CString("initializeOnly"));
field1157.setType(CString("SFNode"));
ProtoInterface1154.addChild(&field1157);

field& field1158 =  field();
field1158.setName(CString("offset"));
field1158.setAccessType(CString("initializeOnly"));
field1158.setType(CString("SFVec3f"));
ProtoInterface1154.addChild(&field1158);

field& field1159 =  field();
field1159.setName(CString("ig"));
field1159.setAccessType(CString("initializeOnly"));
field1159.setType(CString("SFRotation"));
ProtoInterface1154.addChild(&field1159);

field& field1160 =  field();
field1160.setName(CString("jg"));
field1160.setAccessType(CString("initializeOnly"));
field1160.setType(CString("SFFloat"));
ProtoInterface1154.addChild(&field1160);

field& field1161 =  field();
field1161.setName(CString("center"));
field1161.setAccessType(CString("initializeOnly"));
field1161.setType(CString("SFVec3f"));
ProtoInterface1154.addChild(&field1161);

field& field1162 =  field();
field1162.setName(CString("T"));
field1162.setAccessType(CString("initializeOnly"));
field1162.setType(CString("SFBool"));
field1162.setValue(CString("true"));
ProtoInterface1154.addChild(&field1162);

field& field1163 =  field();
field1163.setName(CString("kg"));
field1163.setAccessType(CString("initializeOnly"));
field1163.setType(CString("SFBool"));
field1163.setValue(CString("true"));
ProtoInterface1154.addChild(&field1163);

ProtoDeclare1153.addChild(&ProtoInterface1154);

ProtoBody& ProtoBody1164 =  ProtoBody();
Script& Script1165 =  Script();
Script1165.setDirectOutput(true);
field& field1166 =  field();
field1166.setName(CString("set_position"));
field1166.setAccessType(CString("inputOnly"));
field1166.setType(CString("SFVec3f"));
Script1165.addChild(&field1166);

field& field1167 =  field();
field1167.setName(CString("set_orientation"));
field1167.setAccessType(CString("inputOnly"));
field1167.setType(CString("SFRotation"));
Script1165.addChild(&field1167);

field& field1168 =  field();
field1168.setName(CString("U"));
field1168.setAccessType(CString("initializeOnly"));
field1168.setType(CString("SFNode"));
Script1165.addChild(&field1168);

field& field1169 =  field();
field1169.setName(CString("offset"));
field1169.setAccessType(CString("initializeOnly"));
field1169.setType(CString("SFVec3f"));
Script1165.addChild(&field1169);

field& field1170 =  field();
field1170.setName(CString("ig"));
field1170.setAccessType(CString("initializeOnly"));
field1170.setType(CString("SFRotation"));
Script1165.addChild(&field1170);

field& field1171 =  field();
field1171.setName(CString("kg"));
field1171.setAccessType(CString("initializeOnly"));
field1171.setType(CString("SFBool"));
Script1165.addChild(&field1171);

field& field1172 =  field();
field1172.setName(CString("lg"));
field1172.setAccessType(CString("initializeOnly"));
field1172.setType(CString("SFVec3f"));
Script1165.addChild(&field1172);

field& field1173 =  field();
field1173.setName(CString("ff"));
field1173.setAccessType(CString("initializeOnly"));
field1173.setType(CString("SFVec3f"));
Script1165.addChild(&field1173);

IS& IS1174 =  IS();
Connect& connect1175 =  Connect();
connect1175.setNodeField(CString("set_position"));
connect1175.setProtoField(CString("set_position"));
IS1174.addChild(&connect1175);

Connect& connect1176 =  Connect();
connect1176.setNodeField(CString("set_orientation"));
connect1176.setProtoField(CString("set_orientation"));
IS1174.addChild(&connect1176);

Connect& connect1177 =  Connect();
connect1177.setNodeField(CString("U"));
connect1177.setProtoField(CString("U"));
IS1174.addChild(&connect1177);

Connect& connect1178 =  Connect();
connect1178.setNodeField(CString("offset"));
connect1178.setProtoField(CString("offset"));
IS1174.addChild(&connect1178);

Connect& connect1179 =  Connect();
connect1179.setNodeField(CString("ig"));
connect1179.setProtoField(CString("ig"));
IS1174.addChild(&connect1179);

Connect& connect1180 =  Connect();
connect1180.setNodeField(CString("kg"));
connect1180.setProtoField(CString("kg"));
IS1174.addChild(&connect1180);

Script1165.addChild(&IS1174);


//Script1165.setSourceCode(CString("javascript:")+
//_T("function Re(U,Se){")+
//_T("var Te=new VrmlMatrix();")+
//_T("for(var J=U.C.length-1;J>=0;J--){")+
//_T("Te.setTransform(U.C[J].translation,")+
//_T("U.C[J].rotation,")+
//_T("U.C[J].scale,")+
//_T("U.C[J].scaleOrientation,")+
//_T("U.C[J].center);")+
//_T("Se.multRight(Te);")+
//_T("}")+
//_T("}")+
//_T("function Ue(Ve,Se){")+
//_T("var We=Ve;")+
//_T("while(We.G==FALSE){")+
//_T("Re(We,Se);")+
//_T("We=We.B;")+
//_T("}")+
//_T("}")+
//_T("function set_orientation(mg)")+
//_T("{")+
//_T("if(!kg){")+
//_T("var ng=new VrmlMatrix();")+
//_T("Ue(U.B,ng);")+
//_T("var og=ng.inverse();")+
//_T("var pg=og.multVecMatrix(lg);")+
//_T("var qg=new SFVec3f();")+
//_T("var rg=new SFRotation();")+
//_T("var sg=new SFVec3f();")+
//_T("og.getTransform(qg,rg,sg);")+
//_T("var tg=mg.multiply(rg);")+
//_T("var ug=ig.multiply(tg);")+
//_T("var vg=ug.multVec(offset);")+
//_T("U.C[0].translation=pg.add(vg);")+
//_T("U.C[0].rotation=ug;")+
//_T("U.C[0].center=ff;")+
//_T("}")+
//_T("}")+
//_T("function set_position(wg)")+
//_T("{")+
//_T("if(kg){")+
//_T("var ng=new VrmlMatrix();")+
//_T("Ue(U.B,ng);")+
//_T("var og=ng.inverse();")+
//_T("var pg=og.multVecMatrix(wg);")+
//_T("xg=new VrmlMatrix();")+
//_T("xg.setTransform(ff,")+
//_T("U.C[0].rotation,")+
//_T("U.C[0].scale,")+
//_T("U.C[0].scaleOrientation,")+
//_T("U.C[0].center);")+
//_T("vg=xg.multVecMatrix(offset);")+
//_T("U.C[0].translation=pg.add(vg);")+
//_T("U.C[0].center=ff;")+
//_T("}else{")+
//_T("lg=wg;")+
//_T("}")+
//_T("}"));
ProtoBody1164.addChild(&Script1165);

ProtoDeclare1153.addChild(&ProtoBody1164);

Scene7.addChild(&ProtoDeclare1153);

ProtoDeclare& ProtoDeclare1181 =  ProtoDeclare();
ProtoDeclare1181.setName(CString("yg"));
ProtoInterface& ProtoInterface1182 =  ProtoInterface();
field& field1183 =  field();
field1183.setName(CString("set_fraction"));
field1183.setAccessType(CString("inputOnly"));
field1183.setType(CString("SFFloat"));
ProtoInterface1182.addChild(&field1183);

field& field1184 =  field();
field1184.setName(CString("R"));
field1184.setAccessType(CString("inputOnly"));
field1184.setType(CString("SFTime"));
ProtoInterface1182.addChild(&field1184);

field& field1185 =  field();
field1185.setName(CString("zg"));
field1185.setAccessType(CString("outputOnly"));
field1185.setType(CString("SFVec3f"));
ProtoInterface1182.addChild(&field1185);

field& field1186 =  field();
field1186.setName(CString("Ag"));
field1186.setAccessType(CString("outputOnly"));
field1186.setType(CString("SFRotation"));
ProtoInterface1182.addChild(&field1186);

field& field1187 =  field();
field1187.setName(CString("Bg"));
field1187.setAccessType(CString("outputOnly"));
field1187.setType(CString("SFVec3f"));
ProtoInterface1182.addChild(&field1187);

field& field1188 =  field();
field1188.setName(CString("Cg"));
field1188.setAccessType(CString("outputOnly"));
field1188.setType(CString("SFRotation"));
ProtoInterface1182.addChild(&field1188);

field& field1189 =  field();
field1189.setName(CString("Dg"));
field1189.setAccessType(CString("outputOnly"));
field1189.setType(CString("SFTime"));
ProtoInterface1182.addChild(&field1189);

field& field1190 =  field();
field1190.setName(CString("Eg"));
field1190.setAccessType(CString("initializeOnly"));
field1190.setType(CString("SFNode"));
ProtoInterface1182.addChild(&field1190);

field& field1191 =  field();
field1191.setName(CString("Fg"));
field1191.setAccessType(CString("initializeOnly"));
field1191.setType(CString("SFBool"));
ProtoInterface1182.addChild(&field1191);

field& field1192 =  field();
field1192.setName(CString("Gg"));
field1192.setAccessType(CString("initializeOnly"));
field1192.setType(CString("SFFloat"));
ProtoInterface1182.addChild(&field1192);

field& field1193 =  field();
field1193.setName(CString("Hg"));
field1193.setAccessType(CString("initializeOnly"));
field1193.setType(CString("SFVec3f"));
field1193.setValue(CString("0 0 1"));
ProtoInterface1182.addChild(&field1193);

field& field1194 =  field();
field1194.setName(CString("reverse"));
field1194.setAccessType(CString("initializeOnly"));
field1194.setType(CString("SFInt32"));
ProtoInterface1182.addChild(&field1194);

field& field1195 =  field();
field1195.setName(CString("Ig"));
field1195.setAccessType(CString("initializeOnly"));
field1195.setType(CString("SFBool"));
ProtoInterface1182.addChild(&field1195);

ProtoDeclare1181.addChild(&ProtoInterface1182);

ProtoBody& ProtoBody1196 =  ProtoBody();
Script& Script1197 =  Script();
Script1197.setDEF(CString("I_3"));
Script1197.setDirectOutput(true);
field& field1198 =  field();
field1198.setName(CString("set_fraction"));
field1198.setAccessType(CString("inputOnly"));
field1198.setType(CString("SFFloat"));
Script1197.addChild(&field1198);

field& field1199 =  field();
field1199.setName(CString("R"));
field1199.setAccessType(CString("inputOnly"));
field1199.setType(CString("SFTime"));
Script1197.addChild(&field1199);

field& field1200 =  field();
field1200.setName(CString("zg"));
field1200.setAccessType(CString("outputOnly"));
field1200.setType(CString("SFVec3f"));
Script1197.addChild(&field1200);

field& field1201 =  field();
field1201.setName(CString("Ag"));
field1201.setAccessType(CString("outputOnly"));
field1201.setType(CString("SFRotation"));
Script1197.addChild(&field1201);

field& field1202 =  field();
field1202.setName(CString("Bg"));
field1202.setAccessType(CString("outputOnly"));
field1202.setType(CString("SFVec3f"));
Script1197.addChild(&field1202);

field& field1203 =  field();
field1203.setName(CString("Cg"));
field1203.setAccessType(CString("outputOnly"));
field1203.setType(CString("SFRotation"));
Script1197.addChild(&field1203);

field& field1204 =  field();
field1204.setName(CString("Dg"));
field1204.setAccessType(CString("outputOnly"));
field1204.setType(CString("SFTime"));
Script1197.addChild(&field1204);

field& field1205 =  field();
field1205.setName(CString("Jg"));
field1205.setAccessType(CString("initializeOnly"));
field1205.setType(CString("SFNode"));
Script1197.addChild(&field1205);

field& field1206 =  field();
field1206.setName(CString("Fg"));
field1206.setAccessType(CString("initializeOnly"));
field1206.setType(CString("SFBool"));
Script1197.addChild(&field1206);

field& field1207 =  field();
field1207.setName(CString("Gg"));
field1207.setAccessType(CString("initializeOnly"));
field1207.setType(CString("SFFloat"));
Script1197.addChild(&field1207);

field& field1208 =  field();
field1208.setName(CString("Hg"));
field1208.setAccessType(CString("initializeOnly"));
field1208.setType(CString("SFVec3f"));
Script1197.addChild(&field1208);

field& field1209 =  field();
field1209.setName(CString("reverse"));
field1209.setAccessType(CString("initializeOnly"));
field1209.setType(CString("SFInt32"));
Script1197.addChild(&field1209);

field& field1210 =  field();
field1210.setName(CString("Ig"));
field1210.setAccessType(CString("initializeOnly"));
field1210.setType(CString("SFBool"));
Script1197.addChild(&field1210);

field& field1211 =  field();
field1211.setName(CString("Kg"));
field1211.setAccessType(CString("initializeOnly"));
field1211.setType(CString("SFBool"));
Script1197.addChild(&field1211);

field& field1212 =  field();
field1212.setName(CString("Lg"));
field1212.setAccessType(CString("initializeOnly"));
field1212.setType(CString("SFFloat"));
Script1197.addChild(&field1212);

field& field1213 =  field();
field1213.setName(CString("Qa"));
field1213.setAccessType(CString("initializeOnly"));
field1213.setType(CString("SFFloat"));
Script1197.addChild(&field1213);

IS& IS1214 =  IS();
Connect& connect1215 =  Connect();
connect1215.setNodeField(CString("set_fraction"));
connect1215.setProtoField(CString("set_fraction"));
IS1214.addChild(&connect1215);

Connect& connect1216 =  Connect();
connect1216.setNodeField(CString("R"));
connect1216.setProtoField(CString("R"));
IS1214.addChild(&connect1216);

Connect& connect1217 =  Connect();
connect1217.setNodeField(CString("zg"));
connect1217.setProtoField(CString("zg"));
IS1214.addChild(&connect1217);

Connect& connect1218 =  Connect();
connect1218.setNodeField(CString("Ag"));
connect1218.setProtoField(CString("Ag"));
IS1214.addChild(&connect1218);

Connect& connect1219 =  Connect();
connect1219.setNodeField(CString("Bg"));
connect1219.setProtoField(CString("Bg"));
IS1214.addChild(&connect1219);

Connect& connect1220 =  Connect();
connect1220.setNodeField(CString("Cg"));
connect1220.setProtoField(CString("Cg"));
IS1214.addChild(&connect1220);

Connect& connect1221 =  Connect();
connect1221.setNodeField(CString("Dg"));
connect1221.setProtoField(CString("Dg"));
IS1214.addChild(&connect1221);

Connect& connect1222 =  Connect();
connect1222.setNodeField(CString("Jg"));
connect1222.setProtoField(CString("Eg"));
IS1214.addChild(&connect1222);

Connect& connect1223 =  Connect();
connect1223.setNodeField(CString("Fg"));
connect1223.setProtoField(CString("Fg"));
IS1214.addChild(&connect1223);

Connect& connect1224 =  Connect();
connect1224.setNodeField(CString("Gg"));
connect1224.setProtoField(CString("Gg"));
IS1214.addChild(&connect1224);

Connect& connect1225 =  Connect();
connect1225.setNodeField(CString("Hg"));
connect1225.setProtoField(CString("Hg"));
IS1214.addChild(&connect1225);

Connect& connect1226 =  Connect();
connect1226.setNodeField(CString("reverse"));
connect1226.setProtoField(CString("reverse"));
IS1214.addChild(&connect1226);

Connect& connect1227 =  Connect();
connect1227.setNodeField(CString("Ig"));
connect1227.setProtoField(CString("Ig"));
IS1214.addChild(&connect1227);

Script1197.addChild(&IS1214);


//Script1197.setSourceCode(CString("javascript:")+
//_T("function Re(U,Se){")+
//_T("var Te=new VrmlMatrix();")+
//_T("for(var J=U.C.length-1;J>=0;J--){")+
//_T("Te.setTransform(U.C[J].translation,")+
//_T("U.C[J].rotation,")+
//_T("U.C[J].scale,")+
//_T("U.C[J].scaleOrientation,")+
//_T("U.C[J].center);")+
//_T("Se.multRight(Te);")+
//_T("}")+
//_T("}")+
//_T("function Ue(Ve,Se){")+
//_T("var We=Ve;")+
//_T("while(We.G==FALSE){")+
//_T("Re(We,Se);")+
//_T("We=We.B;")+
//_T("}")+
//_T("}")+
//_T("function Mg(Se){")+
//_T("Re(Jg,Se);")+
//_T("Ue(Jg.B,Se);")+
//_T("}")+
//_T("function R(n,Za)")+
//_T("{")+
//_T("Dg=Za;")+
//_T("var J=0;")+
//_T("var Ng=0;")+
//_T("while((J<Jg.zf_changed.length)&&(Ng<2)){")+
//_T("if(Jg.zf_changed[J]==0){")+
//_T("Ng=Ng+1;")+
//_T("}")+
//_T("J++;")+
//_T("}")+
//_T("if(Ng<2){")+
//_T("Kg=TRUE;")+
//_T("}")+
//_T("else{")+
//_T("Kg=FALSE;")+
//_T("}")+
//_T("if(Ig==FALSE){")+
//_T("Lg=0;")+
//_T("}else{")+
//_T("Lg=Qa;")+
//_T("}")+
//_T("}")+
//_T("function Og(Pg,Za)")+
//_T("{")+
//_T("Qg=new MFVec3f();")+
//_T("Qg[0]=Pg[0].add((Pg[1].add(Pg[0].negate())).multiply(Za));")+
//_T("Qg[1]=Pg[1].add((Pg[2].add(Pg[1].negate())).multiply(Za));")+
//_T("Qg[2]=Pg[2].add((Pg[3].add(Pg[2].negate())).multiply(Za));")+
//_T("Rg=new MFVec3f();")+
//_T("Rg[0]=Qg[0].add((Qg[1].add(Qg[0].negate())).multiply(Za));")+
//_T("Rg[1]=Qg[1].add((Qg[2].add(Qg[1].negate())).multiply(Za));")+
//_T("Sg=Rg[0].add((Rg[1].add(Rg[0].negate())).multiply(Za));")+
//_T("return Sg;")+
//_T("}")+
//_T("function Tg(index)")+
//_T("{")+
//_T("Pg=new MFVec3f();")+
//_T("Pg[0]=Jg.point_changed[index];")+
//_T("index=(index+1)%Jg.zf_changed.length;")+
//_T("if(Jg.zf_changed[index]==2)")+
//_T("{")+
//_T("Pg[1]=Jg.point_changed[index];")+
//_T("index=(index+1)%Jg.zf_changed.length;")+
//_T("}")+
//_T("else if(Jg.zf_changed[index]==0)")+
//_T("{")+
//_T("Pg[3]=Jg.point_changed[index];")+
//_T("Pg[1]=(Pg[3].subtract(Pg[0])).multiply(1.0/3.0).add(Pg[0]);")+
//_T("Pg[2]=(Pg[3].subtract(Pg[0])).multiply(2.0/3.0).add(Pg[0]);")+
//_T("return Pg;")+
//_T("}")+
//_T("else")+
//_T("{")+
//_T("Pg[1]=Pg[0];")+
//_T("}")+
//_T("Pg[2]=Jg.point_changed[index];")+
//_T("if(Jg.zf_changed[index]==1)")+
//_T("{")+
//_T("index=(index+1)%Jg.zf_changed.length;")+
//_T("}")+
//_T("Pg[3]=Jg.point_changed[index];")+
//_T("return Pg;")+
//_T("}")+
//_T("function Ug(n)")+
//_T("{")+
//_T("var Vg=0;")+
//_T("for(J=0;J<Jg.Sd_changed.length-1;J++){")+
//_T("if((n>=Jg.Sd_changed[J])&&")+
//_T("(n<=Jg.Sd_changed[J+1])){")+
//_T("Vg=J;")+
//_T("break;")+
//_T("}")+
//_T("}")+
//_T("return Vg;")+
//_T("}")+
//_T("function Wg(Za,Vg)")+
//_T("{")+
//_T("Sd=(Za-Jg.Sd_changed[Vg])/(Jg.Sd_changed[Vg+1]-Jg.Sd_changed[Vg]);")+
//_T("return Sd;")+
//_T("}")+
//_T("function Xg(Vg)")+
//_T("{")+
//_T("Yg=0;")+
//_T("Zg=-1;")+
//_T("for(J=0;J<Jg.zf_changed.length;J++){")+
//_T("if(Jg.zf_changed[J]==0){")+
//_T("if(Yg==Vg){")+
//_T("Zg=J;")+
//_T("break;")+
//_T("}")+
//_T("Yg++;")+
//_T("}")+
//_T("}")+
//_T("return Zg;")+
//_T("}")+
//_T("function ah(index,Za)")+
//_T("{")+
//_T("Pg=Tg(index);")+
//_T("bh=new MFVec3f();")+
//_T("bh[0]=Pg[1].add(Pg[0].negate());")+
//_T("bh[1]=Pg[2].add(Pg[1].negate());")+
//_T("bh[2]=Pg[3].add(Pg[2].negate());")+
//_T("ch=new MFVec3f();")+
//_T("ch[0]=bh[0].add((bh[1].add(bh[0].negate())).multiply(Za));")+
//_T("ch[1]=bh[1].add((bh[2].add(bh[1].negate())).multiply(Za));")+
//_T("dh=ch[0].add((ch[1].add(ch[0].negate())).multiply(Za));")+
//_T("eh=dh.length();")+
//_T("if(eh<1.e-5)")+
//_T("{")+
//_T("fh=Og(Pg,Za);")+
//_T("ba=(Za>0.5)?-0.01:0.01;")+
//_T("Yg=0;")+
//_T("while((eh<1.e-5)&&(Yg<10))")+
//_T("{")+
//_T("Yg=Yg+1;")+
//_T("Za=Za+ba;")+
//_T("gh=Og(Pg,Za);")+
//_T("dh=gh.subtract(fh);")+
//_T("eh=dh.length();")+
//_T("}")+
//_T("if(Za>0.5){dh=dh.negate();}")+
//_T("}")+
//_T("return dh;")+
//_T("}")+
//_T("function hh(index,Za,ih)")+
//_T("{")+
//_T("ih=ih+Gg;")+
//_T("if(ih>1.0)")+
//_T("{")+
//_T("if(Jg.Cf_changed==TRUE)")+
//_T("{")+
//_T("ih=ih-1.0;")+
//_T("}")+
//_T("else")+
//_T("{")+
//_T("ih=1.0;")+
//_T("if(Za>=1.0){")+
//_T("return ah(index,Za);")+
//_T("}")+
//_T("}")+
//_T("}")+
//_T("Vg=Ug(ih);")+
//_T("jh=Wg(ih,Vg);")+
//_T("kh=Xg(Vg);")+
//_T("Pg=Tg(index);")+
//_T("fh=Og(Pg,Za);")+
//_T("if(kh!=index)")+
//_T("{")+
//_T("Pg=Tg(kh);")+
//_T("}")+
//_T("gh=Og(Pg,jh);")+
//_T("dh=gh.subtract(fh);")+
//_T("if(dh.length()<1.e-4)")+
//_T("{")+
//_T("return ah(index,Za);")+
//_T("}")+
//_T("return dh;")+
//_T("}")+
//_T("function lh(index,Za,ih)")+
//_T("{")+
//_T("if(Kg){")+
//_T("return new SFVec3f(0,0,0);")+
//_T("}")+
//_T("if(Gg>0.0)")+
//_T("{")+
//_T("return hh(index,Za,ih);")+
//_T("}")+
//_T("else")+
//_T("{")+
//_T("return ah(index,Za);")+
//_T("}")+
//_T("}")+
//_T("function mh()")+
//_T("{")+
//_T("return new SFVec3f(1.0,0.0,0.0);")+
//_T("}")+
//_T("function nh(oh,ph)")+
//_T("{")+
//_T("if(Kg){")+
//_T("return 0.0;")+
//_T("}")+
//_T("if((oh.length()<0.0001)||(ph.length()<0.0001)){")+
//_T("return 0.0;")+
//_T("}")+
//_T("if(Hg.y>0.5){ph.y=0.0;}")+
//_T("oh=oh.normalize();")+
//_T("ph=ph.normalize();")+
//_T("dot=oh.dot(ph);")+
//_T("if(dot<-1.0){dot=-1.0;}")+
//_T("else if(dot>1.0){dot=1.0;}")+
//_T("angle=Math.acos(dot);")+
//_T("qh=oh.cross(ph);")+
//_T("if(qh.dot(Hg)<0.0)")+
//_T("{angle=-angle;}")+
//_T("return angle;")+
//_T("}")+
//_T("function set_fraction(n){")+
//_T("n+=Lg;")+
//_T("if(n>1){")+
//_T("n-=1;")+
//_T("}")+
//_T("Qa=n;")+
//_T("if(reverse!=0){")+
//_T("n=1.0-n;")+
//_T("}")+
//_T("var rh=new VrmlMatrix();")+
//_T("Mg(rh);")+
//_T("sh=new SFVec3f;")+
//_T("th=new SFRotation;")+
//_T("uh=new SFVec3f;")+
//_T("rh.getTransform(sh,th,uh);")+
//_T("if(Kg)")+
//_T("{")+
//_T("var J=0;")+
//_T("while(J<Jg.point_changed.length){")+
//_T("if(Jg.zf_changed[J]==0){")+
//_T("zg=Jg.point_changed[J];")+
//_T("Bg=rh.multVecMatrix(zg);")+
//_T("if(Fg)")+
//_T("{")+
//_T("Ag=new SFRotation(0.0,0.0,0.0,1.0);")+
//_T("Cg=Ag.multiply(th);")+
//_T("}")+
//_T("return;")+
//_T("}")+
//_T("J=J+1;")+
//_T("}")+
//_T("return;")+
//_T("}")+
//_T("if(n<=0.0){")+
//_T("vh=-1;")+
//_T("if(Jg.zf_changed[0]==0){")+
//_T("vh=0;")+
//_T("}else if(Jg.zf_changed[0]==1){")+
//_T("vh=1;")+
//_T("}")+
//_T("zg=Jg.point_changed[vh];")+
//_T("Bg=rh.multVecMatrix(zg);")+
//_T("if(Fg)")+
//_T("{")+
//_T("wh=lh(vh,0.0,n);")+
//_T("xh=mh();")+
//_T("angle=nh(xh,wh);")+
//_T("Ag=new SFRotation(Hg,angle);")+
//_T("Cg=Ag.multiply(th);")+
//_T("}")+
//_T("return;")+
//_T("}")+
//_T("if(n>=1.0){")+
//_T("if(Jg.Cf_changed==FALSE){")+
//_T("yh=Jg.point_changed.length-1;")+
//_T("if(Jg.zf_changed[yh]==0){")+
//_T("zg=Jg.point_changed[yh];")+
//_T("}else if(Jg.zf_changed[yh]==2){")+
//_T("zg=Jg.point_changed[yh-1];")+
//_T("}")+
//_T("}else{")+
//_T("if(Jg.zf_changed[0]==0){")+
//_T("zg=Jg.point_changed[0];")+
//_T("}else if(Jg.zf_changed[0]==1){")+
//_T("zg=Jg.point_changed[1];")+
//_T("}")+
//_T("}")+
//_T("Bg=rh.multVecMatrix(zg);")+
//_T("if(Fg)")+
//_T("{")+
//_T("J=Jg.point_changed.length;")+
//_T("Ng=1;")+
//_T("if(Jg.Cf_changed==FALSE){")+
//_T("Ng=Ng+1;")+
//_T("}")+
//_T("Yg=0;")+
//_T("while((J>=0)&&(Yg<Ng)){")+
//_T("J--;")+
//_T("if(Jg.zf_changed[J]==0){")+
//_T("Yg=Yg+1;")+
//_T("}")+
//_T("}")+
//_T("if(J>=0)")+
//_T("{")+
//_T("wh=lh(J,1.0,n);")+
//_T("xh=mh();")+
//_T("angle=nh(xh,wh);")+
//_T("Ag=new SFRotation(Hg,angle);")+
//_T("Cg=Ag.multiply(th);")+
//_T("}")+
//_T("else")+
//_T("{")+
//_T("Ag=new SFRotation(0.0,0.0,0.0,1.0);")+
//_T("Cg=Ag.multiply(th);")+
//_T("}")+
//_T("}")+
//_T("return;")+
//_T("}")+
//_T("Vg=Ug(n);")+
//_T("Sd=Wg(n,Vg);")+
//_T("zh=-1;")+
//_T("Zg=Xg(Vg);")+
//_T("if(Jg.zf_changed[(Zg+1)%Jg.zf_changed.length]==0){")+
//_T("zh=(Zg+1)%Jg.zf_changed.length;")+
//_T("Ah=Jg.point_changed[Zg].multiply(1-Sd);")+
//_T("Bh=Jg.point_changed[zh].multiply(Sd);")+
//_T("zg=Ah.add(Bh);")+
//_T("Bg=rh.multVecMatrix(zg);")+
//_T("if(Fg)")+
//_T("{")+
//_T("wh=lh(Zg,Sd,n);")+
//_T("xh=mh();")+
//_T("angle=nh(xh,wh);")+
//_T("Ag=new SFRotation(Hg,angle);")+
//_T("Cg=Ag.multiply(th);")+
//_T("}")+
//_T("return;")+
//_T("}")+
//_T("if(Jg.zf_changed[(Zg+2)%Jg.zf_changed.length]==0){")+
//_T("zh=(Zg+2)%Jg.zf_changed.length;")+
//_T("}else{")+
//_T("zh=(Zg+3)%Jg.zf_changed.length;")+
//_T("}")+
//_T("index=Jg.Bf_changed[Vg];")+
//_T("Ch=Jg.Af_changed[index][0];")+
//_T("while(Ch<=Jg.Af_changed[index][0]){")+
//_T("Dh=Jg.Af_changed[index+1][0];")+
//_T("if((Sd>=Ch)&&(Sd<=Dh)){")+
//_T("Eh=(Sd-Ch)/(Dh-Ch);")+
//_T("gg=Jg.Af_changed[index][1]*(1.0-Eh)+")+
//_T("Jg.Af_changed[index+1][1]*Eh;")+
//_T("break;")+
//_T("}")+
//_T("index++;")+
//_T("Ch=Dh;")+
//_T("}")+
//_T("Of=(1-gg)*(1-gg)*(1-gg);")+
//_T("Pf=3*(1-gg)*(1-gg)*gg;")+
//_T("Qf=3*(1-gg)*gg*gg;")+
//_T("Rf=gg*gg*gg;")+
//_T("Fh=(Zg+1)%Jg.point_changed.length;")+
//_T("if(((Zg+3)%Jg.point_changed.length)==zh){")+
//_T("Gh=Jg.point_changed[Zg].multiply(Of);")+
//_T("Ah=Jg.point_changed[Fh].multiply(Pf);")+
//_T("Bh=Jg.point_changed[zh-1].multiply(Qf);")+
//_T("Hh=Jg.point_changed[zh].multiply(Rf);")+
//_T("}else if(Jg.zf_changed[Fh]==2){")+
//_T("Gh=Jg.point_changed[Zg].multiply(Of);")+
//_T("Ah=Jg.point_changed[Fh].multiply(Pf);")+
//_T("Bh=Jg.point_changed[zh].multiply(Qf);")+
//_T("Hh=Jg.point_changed[zh].multiply(Rf);")+
//_T("}else if(Jg.zf_changed[Fh]==1){")+
//_T("Gh=Jg.point_changed[Zg].multiply(Of);")+
//_T("Ah=Jg.point_changed[Zg].multiply(Pf);")+
//_T("Bh=Jg.point_changed[zh-1].multiply(Qf);")+
//_T("Hh=Jg.point_changed[zh].multiply(Rf);")+
//_T("}")+
//_T("zg=Gh.add(Ah).add(Bh).add(Hh);")+
//_T("Bg=rh.multVecMatrix(zg);")+
//_T("if(Fg)")+
//_T("{")+
//_T("wh=lh(Zg,gg,n);")+
//_T("xh=mh();")+
//_T("Ag=new SFRotation(Hg,nh(xh,wh));")+
//_T("Cg=Ag.multiply(th);")+
//_T("}")+
//_T("}")+
//_T("function initialize(){")+
//_T("Jg.w=TRUE;")+
//_T("}"));
ProtoBody1196.addChild(&Script1197);

ProtoDeclare1181.addChild(&ProtoBody1196);

Scene7.addChild(&ProtoDeclare1181);

ProtoDeclare& ProtoDeclare1228 =  ProtoDeclare();
ProtoDeclare1228.setName(CString("Ih"));
ProtoInterface& ProtoInterface1229 =  ProtoInterface();
field& field1230 =  field();
field1230.setName(CString("set_intensity"));
field1230.setAccessType(CString("inputOnly"));
field1230.setType(CString("SFFloat"));
ProtoInterface1229.addChild(&field1230);

field& field1231 =  field();
field1231.setName(CString("set_startTime"));
field1231.setAccessType(CString("inputOnly"));
field1231.setType(CString("SFTime"));
ProtoInterface1229.addChild(&field1231);

field& field1232 =  field();
field1232.setName(CString("set_stopTime"));
field1232.setAccessType(CString("inputOnly"));
field1232.setType(CString("SFTime"));
ProtoInterface1229.addChild(&field1232);

field& field1233 =  field();
field1233.setName(CString("w"));
field1233.setAccessType(CString("inputOnly"));
field1233.setType(CString("SFBool"));
ProtoInterface1229.addChild(&field1233);

field& field1234 =  field();
field1234.setName(CString("intensity_changed"));
field1234.setAccessType(CString("outputOnly"));
field1234.setType(CString("SFFloat"));
ProtoInterface1229.addChild(&field1234);

field& field1235 =  field();
field1235.setName(CString("Jh"));
field1235.setAccessType(CString("outputOnly"));
field1235.setType(CString("SFTime"));
ProtoInterface1229.addChild(&field1235);

field& field1236 =  field();
field1236.setName(CString("pitch"));
field1236.setAccessType(CString("inputOutput"));
field1236.setType(CString("SFFloat"));
field1236.setValue(CString("1"));
ProtoInterface1229.addChild(&field1236);

field& field1237 =  field();
field1237.setName(CString("loop"));
field1237.setAccessType(CString("inputOutput"));
field1237.setType(CString("SFBool"));
ProtoInterface1229.addChild(&field1237);

field& field1238 =  field();
field1238.setName(CString("B"));
field1238.setAccessType(CString("inputOutput"));
field1238.setType(CString("SFNode"));
ProtoInterface1229.addChild(&field1238);

field& field1239 =  field();
field1239.setName(CString("C"));
field1239.setAccessType(CString("inputOutput"));
field1239.setType(CString("MFNode"));
ProtoInterface1229.addChild(&field1239);

field& field1240 =  field();
field1240.setName(CString("url"));
field1240.setAccessType(CString("initializeOnly"));
field1240.setType(CString("MFString"));
ProtoInterface1229.addChild(&field1240);

field& field1241 =  field();
field1241.setName(CString("intensity"));
field1241.setAccessType(CString("initializeOnly"));
field1241.setType(CString("SFFloat"));
field1241.setValue(CString("1"));
ProtoInterface1229.addChild(&field1241);

ProtoDeclare1228.addChild(&ProtoInterface1229);

ProtoBody& ProtoBody1242 =  ProtoBody();
Sound& Sound1243 =  Sound();
Sound1243.setDEF(CString("Kh_1"));
Sound1243.setSpatialize(false);
Sound1243.setMinBack(1000000);
Sound1243.setMinFront(1000000);
Sound1243.setMaxBack(1000000);
Sound1243.setMaxFront(1000000);
IS& IS1244 =  IS();
Connect& connect1245 =  Connect();
connect1245.setNodeField(CString("intensity"));
connect1245.setProtoField(CString("intensity"));
IS1244.addChild(&connect1245);

Sound1243.addChild(&IS1244);

AudioClip& AudioClip1246 =  AudioClip();
AudioClip1246.setDEF(CString("Lh_1"));
IS& IS1247 =  IS();
Connect& connect1248 =  Connect();
connect1248.setNodeField(CString("url"));
connect1248.setProtoField(CString("url"));
IS1247.addChild(&connect1248);

Connect& connect1249 =  Connect();
connect1249.setNodeField(CString("pitch"));
connect1249.setProtoField(CString("pitch"));
IS1247.addChild(&connect1249);

Connect& connect1250 =  Connect();
connect1250.setNodeField(CString("loop"));
connect1250.setProtoField(CString("loop"));
IS1247.addChild(&connect1250);

Connect& connect1251 =  Connect();
connect1251.setNodeField(CString("duration_changed"));
connect1251.setProtoField(CString("Jh"));
IS1247.addChild(&connect1251);

AudioClip1246.addChild(&IS1247);

Sound1243.setSource(AudioClip1246);

ProtoBody1242.addChild(&Sound1243);

Script& Script1252 =  Script();
Script1252.setDEF(CString("Mh_1"));
Script1252.setDirectOutput(true);
field& field1253 =  field();
field1253.setName(CString("set_intensity"));
field1253.setAccessType(CString("inputOnly"));
field1253.setType(CString("SFFloat"));
Script1252.addChild(&field1253);

field& field1254 =  field();
field1254.setName(CString("set_startTime"));
field1254.setAccessType(CString("inputOnly"));
field1254.setType(CString("SFTime"));
Script1252.addChild(&field1254);

field& field1255 =  field();
field1255.setName(CString("set_stopTime"));
field1255.setAccessType(CString("inputOnly"));
field1255.setType(CString("SFTime"));
Script1252.addChild(&field1255);

field& field1256 =  field();
field1256.setName(CString("w"));
field1256.setAccessType(CString("inputOnly"));
field1256.setType(CString("SFBool"));
Script1252.addChild(&field1256);

field& field1257 =  field();
field1257.setName(CString("intensity_changed"));
field1257.setAccessType(CString("outputOnly"));
field1257.setType(CString("SFFloat"));
Script1252.addChild(&field1257);

field& field1258 =  field();
field1258.setName(CString("startTime_changed"));
field1258.setAccessType(CString("outputOnly"));
field1258.setType(CString("SFTime"));
Script1252.addChild(&field1258);

field& field1259 =  field();
field1259.setName(CString("stopTime_changed"));
field1259.setAccessType(CString("outputOnly"));
field1259.setType(CString("SFTime"));
Script1252.addChild(&field1259);

field& field1260 =  field();
field1260.setName(CString("intensity"));
field1260.setAccessType(CString("initializeOnly"));
field1260.setType(CString("SFFloat"));
Script1252.addChild(&field1260);

IS& IS1261 =  IS();
Connect& connect1262 =  Connect();
connect1262.setNodeField(CString("set_intensity"));
connect1262.setProtoField(CString("set_intensity"));
IS1261.addChild(&connect1262);

Connect& connect1263 =  Connect();
connect1263.setNodeField(CString("set_startTime"));
connect1263.setProtoField(CString("set_startTime"));
IS1261.addChild(&connect1263);

Connect& connect1264 =  Connect();
connect1264.setNodeField(CString("set_stopTime"));
connect1264.setProtoField(CString("set_stopTime"));
IS1261.addChild(&connect1264);

Connect& connect1265 =  Connect();
connect1265.setNodeField(CString("w"));
connect1265.setProtoField(CString("w"));
IS1261.addChild(&connect1265);

Connect& connect1266 =  Connect();
connect1266.setNodeField(CString("intensity_changed"));
connect1266.setProtoField(CString("intensity_changed"));
IS1261.addChild(&connect1266);

Connect& connect1267 =  Connect();
connect1267.setNodeField(CString("intensity"));
connect1267.setProtoField(CString("intensity"));
IS1261.addChild(&connect1267);

Script1252.addChild(&IS1261);


//Script1252.setSourceCode(CString("javascript:")+
//_T("function initialize(){")+
//_T("intensity_changed=intensity;")+
//_T("}")+
//_T("function set_intensity(n){")+
//_T("intensity=n;")+
//_T("intensity_changed=n;")+
//_T("}")+
//_T("function set_startTime(n){")+
//_T("startTime_changed=n;")+
//_T("}")+
//_T("function set_stopTime(n){")+
//_T("stopTime_changed=n;")+
//_T("}")+
//_T("function w(){")+
//_T("}"));
ProtoBody1242.addChild(&Script1252);

ROUTE& ROUTE1268 =  ROUTE();
ROUTE1268.setFromNode(CString("Mh_1"));
ROUTE1268.setFromField(CString("startTime_changed"));
ROUTE1268.setToNode(CString("Lh_1"));
ROUTE1268.setToField(CString("set_startTime"));
ProtoBody1242.addChild(&ROUTE1268);

ROUTE& ROUTE1269 =  ROUTE();
ROUTE1269.setFromNode(CString("Mh_1"));
ROUTE1269.setFromField(CString("stopTime_changed"));
ROUTE1269.setToNode(CString("Lh_1"));
ROUTE1269.setToField(CString("set_stopTime"));
ProtoBody1242.addChild(&ROUTE1269);

ROUTE& ROUTE1270 =  ROUTE();
ROUTE1270.setFromNode(CString("Mh_1"));
ROUTE1270.setFromField(CString("intensity_changed"));
ROUTE1270.setToNode(CString("Kh_1"));
ROUTE1270.setToField(CString("set_intensity"));
ProtoBody1242.addChild(&ROUTE1270);

ProtoDeclare1228.addChild(&ProtoBody1242);

Scene7.addChild(&ProtoDeclare1228);

ProtoDeclare& ProtoDeclare1271 =  ProtoDeclare();
ProtoDeclare1271.setName(CString("Nh"));
ProtoInterface& ProtoInterface1272 =  ProtoInterface();
field& field1273 =  field();
field1273.setName(CString("R"));
field1273.setAccessType(CString("inputOnly"));
field1273.setType(CString("SFTime"));
ProtoInterface1272.addChild(&field1273);

field& field1274 =  field();
field1274.setName(CString("S"));
field1274.setAccessType(CString("inputOnly"));
field1274.setType(CString("SFTime"));
ProtoInterface1272.addChild(&field1274);

field& field1275 =  field();
field1275.setName(CString("set_intensity"));
field1275.setAccessType(CString("inputOnly"));
field1275.setType(CString("SFFloat"));
ProtoInterface1272.addChild(&field1275);

field& field1276 =  field();
field1276.setName(CString("set_fraction"));
field1276.setAccessType(CString("inputOnly"));
field1276.setType(CString("SFFloat"));
ProtoInterface1272.addChild(&field1276);

field& field1277 =  field();
field1277.setName(CString("Jh"));
field1277.setAccessType(CString("inputOnly"));
field1277.setType(CString("SFTime"));
ProtoInterface1272.addChild(&field1277);

field& field1278 =  field();
field1278.setName(CString("startTime"));
field1278.setAccessType(CString("outputOnly"));
field1278.setType(CString("SFTime"));
ProtoInterface1272.addChild(&field1278);

field& field1279 =  field();
field1279.setName(CString("stopTime"));
field1279.setAccessType(CString("outputOnly"));
field1279.setType(CString("SFTime"));
ProtoInterface1272.addChild(&field1279);

field& field1280 =  field();
field1280.setName(CString("Oh"));
field1280.setAccessType(CString("initializeOnly"));
field1280.setType(CString("SFNode"));
ProtoInterface1272.addChild(&field1280);

field& field1281 =  field();
field1281.setName(CString("loop"));
field1281.setAccessType(CString("initializeOnly"));
field1281.setType(CString("SFBool"));
ProtoInterface1272.addChild(&field1281);

field& field1282 =  field();
field1282.setName(CString("intensity"));
field1282.setAccessType(CString("initializeOnly"));
field1282.setType(CString("SFFloat"));
field1282.setValue(CString("1"));
ProtoInterface1272.addChild(&field1282);

field& field1283 =  field();
field1283.setName(CString("pitch"));
field1283.setAccessType(CString("initializeOnly"));
field1283.setType(CString("SFFloat"));
field1283.setValue(CString("1"));
ProtoInterface1272.addChild(&field1283);

field& field1284 =  field();
field1284.setName(CString("Qa"));
field1284.setAccessType(CString("initializeOnly"));
field1284.setType(CString("SFFloat"));
ProtoInterface1272.addChild(&field1284);

field& field1285 =  field();
field1285.setName(CString("Ph"));
field1285.setAccessType(CString("initializeOnly"));
field1285.setType(CString("SFBool"));
ProtoInterface1272.addChild(&field1285);

field& field1286 =  field();
field1286.setName(CString("duration"));
field1286.setAccessType(CString("initializeOnly"));
field1286.setType(CString("SFTime"));
ProtoInterface1272.addChild(&field1286);

field& field1287 =  field();
field1287.setName(CString("Qh"));
field1287.setAccessType(CString("initializeOnly"));
field1287.setType(CString("SFBool"));
ProtoInterface1272.addChild(&field1287);

field& field1288 =  field();
field1288.setName(CString("Rh"));
field1288.setAccessType(CString("initializeOnly"));
field1288.setType(CString("SFBool"));
ProtoInterface1272.addChild(&field1288);

ProtoDeclare1271.addChild(&ProtoInterface1272);

ProtoBody& ProtoBody1289 =  ProtoBody();
Script& Script1290 =  Script();
Script1290.setDEF(CString("Sh"));
Script1290.setDirectOutput(true);
field& field1291 =  field();
field1291.setName(CString("R"));
field1291.setAccessType(CString("inputOnly"));
field1291.setType(CString("SFTime"));
Script1290.addChild(&field1291);

field& field1292 =  field();
field1292.setName(CString("S"));
field1292.setAccessType(CString("inputOnly"));
field1292.setType(CString("SFTime"));
Script1290.addChild(&field1292);

field& field1293 =  field();
field1293.setName(CString("set_intensity"));
field1293.setAccessType(CString("inputOnly"));
field1293.setType(CString("SFFloat"));
Script1290.addChild(&field1293);

field& field1294 =  field();
field1294.setName(CString("set_fraction"));
field1294.setAccessType(CString("inputOnly"));
field1294.setType(CString("SFFloat"));
Script1290.addChild(&field1294);

field& field1295 =  field();
field1295.setName(CString("Jh"));
field1295.setAccessType(CString("inputOnly"));
field1295.setType(CString("SFTime"));
Script1290.addChild(&field1295);

field& field1296 =  field();
field1296.setName(CString("startTime"));
field1296.setAccessType(CString("outputOnly"));
field1296.setType(CString("SFTime"));
Script1290.addChild(&field1296);

field& field1297 =  field();
field1297.setName(CString("stopTime"));
field1297.setAccessType(CString("outputOnly"));
field1297.setType(CString("SFTime"));
Script1290.addChild(&field1297);

field& field1298 =  field();
field1298.setName(CString("Oh"));
field1298.setAccessType(CString("initializeOnly"));
field1298.setType(CString("SFNode"));
Script1290.addChild(&field1298);

field& field1299 =  field();
field1299.setName(CString("loop"));
field1299.setAccessType(CString("initializeOnly"));
field1299.setType(CString("SFBool"));
Script1290.addChild(&field1299);

field& field1300 =  field();
field1300.setName(CString("intensity"));
field1300.setAccessType(CString("initializeOnly"));
field1300.setType(CString("SFFloat"));
Script1290.addChild(&field1300);

field& field1301 =  field();
field1301.setName(CString("pitch"));
field1301.setAccessType(CString("initializeOnly"));
field1301.setType(CString("SFFloat"));
Script1290.addChild(&field1301);

field& field1302 =  field();
field1302.setName(CString("duration"));
field1302.setAccessType(CString("initializeOnly"));
field1302.setType(CString("SFTime"));
Script1290.addChild(&field1302);

field& field1303 =  field();
field1303.setName(CString("Qh"));
field1303.setAccessType(CString("initializeOnly"));
field1303.setType(CString("SFBool"));
Script1290.addChild(&field1303);

field& field1304 =  field();
field1304.setName(CString("Rh"));
field1304.setAccessType(CString("initializeOnly"));
field1304.setType(CString("SFBool"));
Script1290.addChild(&field1304);

field& field1305 =  field();
field1305.setName(CString("Th"));
field1305.setAccessType(CString("initializeOnly"));
field1305.setType(CString("SFBool"));
Script1290.addChild(&field1305);

field& field1306 =  field();
field1306.setName(CString("Qa"));
field1306.setAccessType(CString("initializeOnly"));
field1306.setType(CString("SFFloat"));
Script1290.addChild(&field1306);

field& field1307 =  field();
field1307.setName(CString("Ph"));
field1307.setAccessType(CString("initializeOnly"));
field1307.setType(CString("SFBool"));
Script1290.addChild(&field1307);

field& field1308 =  field();
field1308.setName(CString("Uh"));
field1308.setAccessType(CString("initializeOnly"));
field1308.setType(CString("SFBool"));
Script1290.addChild(&field1308);

field& field1309 =  field();
field1309.setName(CString("Vh"));
field1309.setAccessType(CString("initializeOnly"));
field1309.setType(CString("SFTime"));
field1309.setValue(CString("-1"));
Script1290.addChild(&field1309);

field& field1310 =  field();
field1310.setName(CString("ea"));
field1310.setAccessType(CString("initializeOnly"));
field1310.setType(CString("SFTime"));
Script1290.addChild(&field1310);

field& field1311 =  field();
field1311.setName(CString("fa"));
field1311.setAccessType(CString("initializeOnly"));
field1311.setType(CString("SFTime"));
Script1290.addChild(&field1311);

IS& IS1312 =  IS();
Connect& connect1313 =  Connect();
connect1313.setNodeField(CString("R"));
connect1313.setProtoField(CString("R"));
IS1312.addChild(&connect1313);

Connect& connect1314 =  Connect();
connect1314.setNodeField(CString("S"));
connect1314.setProtoField(CString("S"));
IS1312.addChild(&connect1314);

Connect& connect1315 =  Connect();
connect1315.setNodeField(CString("set_intensity"));
connect1315.setProtoField(CString("set_intensity"));
IS1312.addChild(&connect1315);

Connect& connect1316 =  Connect();
connect1316.setNodeField(CString("set_fraction"));
connect1316.setProtoField(CString("set_fraction"));
IS1312.addChild(&connect1316);

Connect& connect1317 =  Connect();
connect1317.setNodeField(CString("Jh"));
connect1317.setProtoField(CString("Jh"));
IS1312.addChild(&connect1317);

Connect& connect1318 =  Connect();
connect1318.setNodeField(CString("startTime"));
connect1318.setProtoField(CString("startTime"));
IS1312.addChild(&connect1318);

Connect& connect1319 =  Connect();
connect1319.setNodeField(CString("stopTime"));
connect1319.setProtoField(CString("stopTime"));
IS1312.addChild(&connect1319);

Connect& connect1320 =  Connect();
connect1320.setNodeField(CString("Oh"));
connect1320.setProtoField(CString("Oh"));
IS1312.addChild(&connect1320);

Connect& connect1321 =  Connect();
connect1321.setNodeField(CString("loop"));
connect1321.setProtoField(CString("loop"));
IS1312.addChild(&connect1321);

Connect& connect1322 =  Connect();
connect1322.setNodeField(CString("intensity"));
connect1322.setProtoField(CString("intensity"));
IS1312.addChild(&connect1322);

Connect& connect1323 =  Connect();
connect1323.setNodeField(CString("pitch"));
connect1323.setProtoField(CString("pitch"));
IS1312.addChild(&connect1323);

Connect& connect1324 =  Connect();
connect1324.setNodeField(CString("duration"));
connect1324.setProtoField(CString("duration"));
IS1312.addChild(&connect1324);

Connect& connect1325 =  Connect();
connect1325.setNodeField(CString("Qh"));
connect1325.setProtoField(CString("Qh"));
IS1312.addChild(&connect1325);

Connect& connect1326 =  Connect();
connect1326.setNodeField(CString("Rh"));
connect1326.setProtoField(CString("Rh"));
IS1312.addChild(&connect1326);

Connect& connect1327 =  Connect();
connect1327.setNodeField(CString("Qa"));
connect1327.setProtoField(CString("Qa"));
IS1312.addChild(&connect1327);

Connect& connect1328 =  Connect();
connect1328.setNodeField(CString("Ph"));
connect1328.setProtoField(CString("Ph"));
IS1312.addChild(&connect1328);

Script1290.addChild(&IS1312);


//Script1290.setSourceCode(CString("javascript:")+
//_T("function initialize(){")+
//_T("if(Qh){")+
//_T("Oh.set_intensity=0;")+
//_T("}else{")+
//_T("Oh.set_intensity=intensity;")+
//_T("}")+
//_T("Oh.loop=loop;")+
//_T("Oh.pitch=pitch;")+
//_T("}")+
//_T("function R(n,time){")+
//_T("if(fa==n){")+
//_T("return;")+
//_T("}")+
//_T("if((Th==TRUE)&&(Vh==-1)){")+
//_T("ea=n;")+
//_T("return;")+
//_T("}")+
//_T("if(Uh==FALSE){")+
//_T("Vh=n;")+
//_T("startTime=n;")+
//_T("Th=TRUE;")+
//_T("return;")+
//_T("}")+
//_T("if(Qh){")+
//_T("Oh.set_intensity=0;")+
//_T("}else{")+
//_T("Oh.set_intensity=intensity;")+
//_T("}")+
//_T("Oh.loop=loop;")+
//_T("Oh.pitch=pitch;")+
//_T("if(Vh>0){")+
//_T("Oh.set_startTime=Vh;")+
//_T("Oh.set_stopTime=Vh-1;")+
//_T("}else{")+
//_T("var Wh=n-(duration/pitch)*Qa;")+
//_T("Oh.set_startTime=Wh;")+
//_T("Oh.set_stopTime=Wh-1;")+
//_T("}")+
//_T("if(Th==FALSE){")+
//_T("startTime=n;")+
//_T("Th=TRUE;")+
//_T("}")+
//_T("Vh=-1;")+
//_T("fa=n;")+
//_T("}")+
//_T("function S(n,time){")+
//_T("if(!Th){")+
//_T("return;")+
//_T("}")+
//_T("if(Ph==FALSE){")+
//_T("Qa=0;")+
//_T("}")+
//_T("if(Qa==1){")+
//_T("Qa=0;")+
//_T("}")+
//_T("Oh.set_stopTime=n;")+
//_T("stopTime=n;")+
//_T("Th=FALSE;")+
//_T("Vh=-1;")+
//_T("if(Qh){")+
//_T("Oh.set_intensity=0;")+
//_T("}else{")+
//_T("Oh.set_intensity=intensity;")+
//_T("}")+
//_T("if(ea==n){")+
//_T("R(n,time);")+
//_T("}")+
//_T("}")+
//_T("function set_intensity(n,time){")+
//_T("if(Qh||Rh){")+
//_T("Oh.set_intensity=n*intensity;")+
//_T("}")+
//_T("}")+
//_T("function set_fraction(n){")+
//_T("Qa=n;")+
//_T("}")+
//_T("function Jh(n,Za){")+
//_T("Uh=TRUE;")+
//_T("if(Vh>0){")+
//_T("R(Za,Za);")+
//_T("}")+
//_T("}"));
ProtoBody1289.addChild(&Script1290);

ProtoDeclare1271.addChild(&ProtoBody1289);

Scene7.addChild(&ProtoDeclare1271);

ProtoDeclare& ProtoDeclare1329 =  ProtoDeclare();
ProtoDeclare1329.setName(CString("Xh"));
ProtoInterface& ProtoInterface1330 =  ProtoInterface();
field& field1331 =  field();
field1331.setName(CString("R"));
field1331.setAccessType(CString("inputOnly"));
field1331.setType(CString("SFTime"));
ProtoInterface1330.addChild(&field1331);

field& field1332 =  field();
field1332.setName(CString("S"));
field1332.setAccessType(CString("inputOnly"));
field1332.setType(CString("SFTime"));
ProtoInterface1330.addChild(&field1332);

field& field1333 =  field();
field1333.setName(CString("R_changed"));
field1333.setAccessType(CString("outputOnly"));
field1333.setType(CString("SFTime"));
ProtoInterface1330.addChild(&field1333);

field& field1334 =  field();
field1334.setName(CString("Yh"));
field1334.setAccessType(CString("outputOnly"));
field1334.setType(CString("SFTime"));
ProtoInterface1330.addChild(&field1334);

ProtoDeclare1329.addChild(&ProtoInterface1330);

ProtoBody& ProtoBody1335 =  ProtoBody();
Script& Script1336 =  Script();
Script1336.setDEF(CString("jb_2"));
Script1336.setDirectOutput(true);
field& field1337 =  field();
field1337.setName(CString("R"));
field1337.setAccessType(CString("inputOnly"));
field1337.setType(CString("SFTime"));
Script1336.addChild(&field1337);

field& field1338 =  field();
field1338.setName(CString("S"));
field1338.setAccessType(CString("inputOnly"));
field1338.setType(CString("SFTime"));
Script1336.addChild(&field1338);

field& field1339 =  field();
field1339.setName(CString("R_changed"));
field1339.setAccessType(CString("outputOnly"));
field1339.setType(CString("SFTime"));
Script1336.addChild(&field1339);

field& field1340 =  field();
field1340.setName(CString("Yh"));
field1340.setAccessType(CString("outputOnly"));
field1340.setType(CString("SFTime"));
Script1336.addChild(&field1340);

field& field1341 =  field();
field1341.setName(CString("aa"));
field1341.setAccessType(CString("initializeOnly"));
field1341.setType(CString("SFBool"));
Script1336.addChild(&field1341);

field& field1342 =  field();
field1342.setName(CString("ea"));
field1342.setAccessType(CString("initializeOnly"));
field1342.setType(CString("SFTime"));
Script1336.addChild(&field1342);

field& field1343 =  field();
field1343.setName(CString("fa"));
field1343.setAccessType(CString("initializeOnly"));
field1343.setType(CString("SFTime"));
Script1336.addChild(&field1343);

IS& IS1344 =  IS();
Connect& connect1345 =  Connect();
connect1345.setNodeField(CString("R"));
connect1345.setProtoField(CString("R"));
IS1344.addChild(&connect1345);

Connect& connect1346 =  Connect();
connect1346.setNodeField(CString("S"));
connect1346.setProtoField(CString("S"));
IS1344.addChild(&connect1346);

Connect& connect1347 =  Connect();
connect1347.setNodeField(CString("R_changed"));
connect1347.setProtoField(CString("R_changed"));
IS1344.addChild(&connect1347);

Connect& connect1348 =  Connect();
connect1348.setNodeField(CString("Yh"));
connect1348.setProtoField(CString("Yh"));
IS1344.addChild(&connect1348);

Script1336.addChild(&IS1344);


//Script1336.setSourceCode(CString("javascript:")+
//_T("function initialize(){")+
//_T("aa=FALSE;")+
//_T("}")+
//_T("function R(n){")+
//_T("if(fa==n){")+
//_T("return;")+
//_T("}")+
//_T("if(aa==TRUE){")+
//_T("ea=n;")+
//_T("return;")+
//_T("}")+
//_T("aa=TRUE;")+
//_T("R_changed=n;")+
//_T("fa=n;")+
//_T("}")+
//_T("function S(n){")+
//_T("Yh=n;")+
//_T("aa=FALSE;")+
//_T("if(ea==n){")+
//_T("R(n);")+
//_T("}")+
//_T("}"));
ProtoBody1335.addChild(&Script1336);

ProtoDeclare1329.addChild(&ProtoBody1335);

Scene7.addChild(&ProtoDeclare1329);

ProtoDeclare& ProtoDeclare1349 =  ProtoDeclare();
ProtoDeclare1349.setName(CString("Zh"));
ProtoInterface& ProtoInterface1350 =  ProtoInterface();
field& field1351 =  field();
field1351.setName(CString("set_p"));
field1351.setAccessType(CString("inputOnly"));
field1351.setType(CString("SFBool"));
ProtoInterface1350.addChild(&field1351);

field& field1352 =  field();
field1352.setName(CString("set_coord"));
field1352.setAccessType(CString("inputOnly"));
field1352.setType(CString("MFVec3f"));
ProtoInterface1350.addChild(&field1352);

field& field1353 =  field();
field1353.setName(CString("set_texCoord"));
field1353.setAccessType(CString("inputOnly"));
field1353.setType(CString("MFVec2f"));
ProtoInterface1350.addChild(&field1353);

field& field1354 =  field();
field1354.setName(CString("set_hd"));
field1354.setAccessType(CString("inputOnly"));
field1354.setType(CString("SFFloat"));
ProtoInterface1350.addChild(&field1354);

field& field1355 =  field();
field1355.setName(CString("set_height"));
field1355.setAccessType(CString("inputOnly"));
field1355.setType(CString("SFFloat"));
ProtoInterface1350.addChild(&field1355);

field& field1356 =  field();
field1356.setName(CString("set_diffuseColor"));
field1356.setAccessType(CString("inputOnly"));
field1356.setType(CString("SFColor"));
ProtoInterface1350.addChild(&field1356);

field& field1357 =  field();
field1357.setName(CString("w"));
field1357.setAccessType(CString("inputOnly"));
field1357.setType(CString("SFBool"));
ProtoInterface1350.addChild(&field1357);

field& field1358 =  field();
field1358.setName(CString("set_v"));
field1358.setAccessType(CString("inputOnly"));
field1358.setType(CString("SFNode"));
ProtoInterface1350.addChild(&field1358);

field& field1359 =  field();
field1359.setName(CString("p_changed"));
field1359.setAccessType(CString("outputOnly"));
field1359.setType(CString("SFBool"));
ProtoInterface1350.addChild(&field1359);

field& field1360 =  field();
field1360.setName(CString("coord_changed"));
field1360.setAccessType(CString("outputOnly"));
field1360.setType(CString("MFVec3f"));
ProtoInterface1350.addChild(&field1360);

field& field1361 =  field();
field1361.setName(CString("texCoord_changed"));
field1361.setAccessType(CString("outputOnly"));
field1361.setType(CString("MFVec2f"));
ProtoInterface1350.addChild(&field1361);

field& field1362 =  field();
field1362.setName(CString("hd_changed"));
field1362.setAccessType(CString("outputOnly"));
field1362.setType(CString("SFFloat"));
ProtoInterface1350.addChild(&field1362);

field& field1363 =  field();
field1363.setName(CString("height_changed"));
field1363.setAccessType(CString("outputOnly"));
field1363.setType(CString("SFFloat"));
ProtoInterface1350.addChild(&field1363);

field& field1364 =  field();
field1364.setName(CString("diffuseColor_changed"));
field1364.setAccessType(CString("outputOnly"));
field1364.setType(CString("SFColor"));
ProtoInterface1350.addChild(&field1364);

field& field1365 =  field();
field1365.setName(CString("v_changed"));
field1365.setAccessType(CString("outputOnly"));
field1365.setType(CString("SFNode"));
ProtoInterface1350.addChild(&field1365);

field& field1366 =  field();
field1366.setName(CString("url"));
field1366.setAccessType(CString("inputOutput"));
field1366.setType(CString("MFString"));
ProtoInterface1350.addChild(&field1366);

field& field1367 =  field();
field1367.setName(CString("transparency"));
field1367.setAccessType(CString("inputOutput"));
field1367.setType(CString("SFFloat"));
ProtoInterface1350.addChild(&field1367);

field& field1368 =  field();
field1368.setName(CString("emissiveColor"));
field1368.setAccessType(CString("inputOutput"));
field1368.setType(CString("SFColor"));
ProtoInterface1350.addChild(&field1368);

field& field1369 =  field();
field1369.setName(CString("specularColor"));
field1369.setAccessType(CString("inputOutput"));
field1369.setType(CString("SFColor"));
ProtoInterface1350.addChild(&field1369);

field& field1370 =  field();
field1370.setName(CString("shininess"));
field1370.setAccessType(CString("inputOutput"));
field1370.setType(CString("SFFloat"));
field1370.setValue(CString("0.2"));
ProtoInterface1350.addChild(&field1370);

field& field1371 =  field();
field1371.setName(CString("q"));
field1371.setAccessType(CString("inputOutput"));
field1371.setType(CString("SFVec2f"));
field1371.setValue(CString("-0.5 -0.5"));
ProtoInterface1350.addChild(&field1371);

field& field1372 =  field();
field1372.setName(CString("s"));
field1372.setAccessType(CString("inputOutput"));
field1372.setType(CString("SFFloat"));
ProtoInterface1350.addChild(&field1372);

field& field1373 =  field();
field1373.setName(CString("t"));
field1373.setAccessType(CString("inputOutput"));
field1373.setType(CString("SFVec2f"));
field1373.setValue(CString("1 1"));
ProtoInterface1350.addChild(&field1373);

field& field1374 =  field();
field1374.setName(CString("u"));
field1374.setAccessType(CString("inputOutput"));
field1374.setType(CString("SFVec2f"));
ProtoInterface1350.addChild(&field1374);

field& field1375 =  field();
field1375.setName(CString("B"));
field1375.setAccessType(CString("inputOutput"));
field1375.setType(CString("SFNode"));
ProtoInterface1350.addChild(&field1375);

field& field1376 =  field();
field1376.setName(CString("C"));
field1376.setAccessType(CString("inputOutput"));
field1376.setType(CString("MFNode"));
ProtoInterface1350.addChild(&field1376);

field& field1377 =  field();
field1377.setName(CString("D"));
field1377.setAccessType(CString("inputOutput"));
field1377.setType(CString("SFNode"));
ProtoInterface1350.addChild(&field1377);

field& field1378 =  field();
field1378.setName(CString("F"));
field1378.setAccessType(CString("inputOutput"));
field1378.setType(CString("SFInt32"));
field1378.setValue(CString("-1"));
ProtoInterface1350.addChild(&field1378);

field& field1379 =  field();
field1379.setName(CString("p"));
field1379.setAccessType(CString("initializeOnly"));
field1379.setType(CString("SFBool"));
field1379.setValue(CString("true"));
ProtoInterface1350.addChild(&field1379);

field& field1380 =  field();
field1380.setName(CString("hd"));
field1380.setAccessType(CString("initializeOnly"));
field1380.setType(CString("SFFloat"));
field1380.setValue(CString("72"));
ProtoInterface1350.addChild(&field1380);

field& field1381 =  field();
field1381.setName(CString("height"));
field1381.setAccessType(CString("initializeOnly"));
field1381.setType(CString("SFFloat"));
field1381.setValue(CString("72"));
ProtoInterface1350.addChild(&field1381);

field& field1382 =  field();
field1382.setName(CString("ai"));
field1382.setAccessType(CString("initializeOnly"));
field1382.setType(CString("MFInt32"));
field1382.setValue(CString("1 1"));
ProtoInterface1350.addChild(&field1382);

field& field1383 =  field();
field1383.setName(CString("bi"));
field1383.setAccessType(CString("initializeOnly"));
field1383.setType(CString("SFInt32"));
field1383.setValue(CString("-1"));
ProtoInterface1350.addChild(&field1383);

field& field1384 =  field();
field1384.setName(CString("Jb"));
field1384.setAccessType(CString("initializeOnly"));
field1384.setType(CString("SFColor"));
ProtoInterface1350.addChild(&field1384);

field& field1385 =  field();
field1385.setName(CString("Kb"));
field1385.setAccessType(CString("initializeOnly"));
field1385.setType(CString("SFColor"));
ProtoInterface1350.addChild(&field1385);

field& field1386 =  field();
field1386.setName(CString("Lb"));
field1386.setAccessType(CString("initializeOnly"));
field1386.setType(CString("SFInt32"));
field1386.setValue(CString("-1"));
ProtoInterface1350.addChild(&field1386);

field& field1387 =  field();
field1387.setName(CString("H"));
field1387.setAccessType(CString("initializeOnly"));
field1387.setType(CString("SFBool"));
field1387.setValue(CString("true"));
ProtoInterface1350.addChild(&field1387);

field& field1388 =  field();
field1388.setName(CString("ci"));
field1388.setAccessType(CString("initializeOnly"));
field1388.setType(CString("SFVec2f"));
field1388.setValue(CString("1 1"));
ProtoInterface1350.addChild(&field1388);

field& field1389 =  field();
field1389.setName(CString("diffuseColor"));
field1389.setAccessType(CString("initializeOnly"));
field1389.setType(CString("SFColor"));
field1389.setValue(CString("1 1 1"));
ProtoInterface1350.addChild(&field1389);

field& field1390 =  field();
field1390.setName(CString("di"));
field1390.setAccessType(CString("initializeOnly"));
field1390.setType(CString("SFBool"));
ProtoInterface1350.addChild(&field1390);

field& field1391 =  field();
field1391.setName(CString("choice"));
field1391.setAccessType(CString("initializeOnly"));
field1391.setType(CString("SFInt32"));
ProtoInterface1350.addChild(&field1391);

field& field1392 =  field();
field1392.setName(CString("ha"));
field1392.setAccessType(CString("initializeOnly"));
field1392.setType(CString("SFVec3f"));
ProtoInterface1350.addChild(&field1392);

field& field1393 =  field();
field1393.setName(CString("coord"));
field1393.setAccessType(CString("initializeOnly"));
field1393.setType(CString("MFVec3f"));
ProtoInterface1350.addChild(&field1393);

field& field1394 =  field();
field1394.setName(CString("texCoord"));
field1394.setAccessType(CString("initializeOnly"));
field1394.setType(CString("MFVec2f"));
ProtoInterface1350.addChild(&field1394);

field& field1395 =  field();
field1395.setName(CString("coordIndex"));
field1395.setAccessType(CString("initializeOnly"));
field1395.setType(CString("MFInt32"));
ProtoInterface1350.addChild(&field1395);

field& field1396 =  field();
field1396.setName(CString("color"));
field1396.setAccessType(CString("initializeOnly"));
field1396.setType(CString("MFColor"));
ProtoInterface1350.addChild(&field1396);

ProtoDeclare1349.addChild(&ProtoInterface1350);

ProtoBody& ProtoBody1397 =  ProtoBody();
Switch& Switch1398 =  Switch();
Switch1398.setDEF(CString("ei_1"));
Switch1398.setWhichChoice(-1);
IS& IS1399 =  IS();
Connect& connect1400 =  Connect();
connect1400.setNodeField(CString("whichChoice"));
connect1400.setProtoField(CString("choice"));
IS1399.addChild(&connect1400);

Switch1398.addChild(&IS1399);

Shape& Shape1401 =  Shape();
Appearance& Appearance1402 =  Appearance();
Appearance1402.setDEF(CString("fi_1"));
Material& Material1403 =  Material();
IS& IS1404 =  IS();
Connect& connect1405 =  Connect();
connect1405.setNodeField(CString("diffuseColor"));
connect1405.setProtoField(CString("diffuseColor"));
IS1404.addChild(&connect1405);

Connect& connect1406 =  Connect();
connect1406.setNodeField(CString("specularColor"));
connect1406.setProtoField(CString("specularColor"));
IS1404.addChild(&connect1406);

Connect& connect1407 =  Connect();
connect1407.setNodeField(CString("emissiveColor"));
connect1407.setProtoField(CString("emissiveColor"));
IS1404.addChild(&connect1407);

Connect& connect1408 =  Connect();
connect1408.setNodeField(CString("shininess"));
connect1408.setProtoField(CString("shininess"));
IS1404.addChild(&connect1408);

Connect& connect1409 =  Connect();
connect1409.setNodeField(CString("transparency"));
connect1409.setProtoField(CString("transparency"));
IS1404.addChild(&connect1409);

Material1403.addChild(&IS1404);

Appearance1402.addChild(&Material1403);

ImageTexture& ImageTexture1410 =  ImageTexture();
ImageTexture1410.setDEF(CString("gi_1"));
IS& IS1411 =  IS();
Connect& connect1412 =  Connect();
connect1412.setNodeField(CString("url"));
connect1412.setProtoField(CString("url"));
IS1411.addChild(&connect1412);

ImageTexture1410.addChild(&IS1411);

Appearance1402.addChild(&ImageTexture1410);

TextureTransform& TextureTransform1413 =  TextureTransform();
TextureTransform1413.setDEF(CString("hi_1"));
IS& IS1414 =  IS();
Connect& connect1415 =  Connect();
connect1415.setNodeField(CString("translation"));
connect1415.setProtoField(CString("u"));
IS1414.addChild(&connect1415);

Connect& connect1416 =  Connect();
connect1416.setNodeField(CString("rotation"));
connect1416.setProtoField(CString("s"));
IS1414.addChild(&connect1416);

Connect& connect1417 =  Connect();
connect1417.setNodeField(CString("scale"));
connect1417.setProtoField(CString("t"));
IS1414.addChild(&connect1417);

Connect& connect1418 =  Connect();
connect1418.setNodeField(CString("center"));
connect1418.setProtoField(CString("q"));
IS1414.addChild(&connect1418);

TextureTransform1413.addChild(&IS1414);

Appearance1402.setTextureTransform(TextureTransform1413);

Shape1401.addChild(&Appearance1402);

IndexedFaceSet& IndexedFaceSet1419 =  IndexedFaceSet();
IndexedFaceSet1419.setDEF(CString("ii_1"));
IndexedFaceSet1419.setSolid(false);
IndexedFaceSet1419.setCreaseAngle(3);
IS& IS1420 =  IS();
Connect& connect1421 =  Connect();
connect1421.setNodeField(CString("coordIndex"));
connect1421.setProtoField(CString("coordIndex"));
IS1420.addChild(&connect1421);

IndexedFaceSet1419.addChild(&IS1420);

TextureCoordinate& TextureCoordinate1422 =  TextureCoordinate();
TextureCoordinate1422.setDEF(CString("ki_1"));
IS& IS1423 =  IS();
Connect& connect1424 =  Connect();
connect1424.setNodeField(CString("point"));
connect1424.setProtoField(CString("texCoord"));
IS1423.addChild(&connect1424);

TextureCoordinate1422.addChild(&IS1423);

IndexedFaceSet1419.setTexCoord(&TextureCoordinate1422);

Coordinate& Coordinate1425 =  Coordinate();
Coordinate1425.setDEF(CString("ji_1"));
IS& IS1426 =  IS();
Connect& connect1427 =  Connect();
connect1427.setNodeField(CString("point"));
connect1427.setProtoField(CString("coord"));
IS1426.addChild(&connect1427);

Coordinate1425.addChild(&IS1426);

IndexedFaceSet1419.setCoord(&Coordinate1425);

Shape1401.setGeometry(&IndexedFaceSet1419);

Switch1398.addChild(&Shape1401);

Shape& Shape1428 =  Shape();
Appearance& Appearance1429 =  Appearance();
Appearance1429.setDEF(CString("li_1"));
ImageTexture& ImageTexture1430 =  ImageTexture();
ImageTexture1430.setUSE(CString("gi_1"));
Appearance1429.addChild(&ImageTexture1430);

TextureTransform& TextureTransform1431 =  TextureTransform();
TextureTransform1431.setUSE(CString("hi_1"));
Appearance1429.setTextureTransform(TextureTransform1431);

Shape1428.addChild(&Appearance1429);

IndexedFaceSet& IndexedFaceSet1432 =  IndexedFaceSet();
IndexedFaceSet1432.setDEF(CString("mi_1"));
IndexedFaceSet1432.setSolid(false);
IndexedFaceSet1432.setCreaseAngle(3);
IS& IS1433 =  IS();
Connect& connect1434 =  Connect();
connect1434.setNodeField(CString("coordIndex"));
connect1434.setProtoField(CString("coordIndex"));
IS1433.addChild(&connect1434);

IndexedFaceSet1432.addChild(&IS1433);

CColor& Color1435 =  CColor();
Color1435.setDEF(CString("oi_1"));
IS& IS1436 =  IS();
Connect& connect1437 =  Connect();
connect1437.setNodeField(CString("color"));
connect1437.setProtoField(CString("color"));
IS1436.addChild(&connect1437);

Color1435.addChild(&IS1436);

IndexedFaceSet1432.setColor(&Color1435);

TextureCoordinate& TextureCoordinate1438 =  TextureCoordinate();
TextureCoordinate1438.setDEF(CString("pi_1"));
IS& IS1439 =  IS();
Connect& connect1440 =  Connect();
connect1440.setNodeField(CString("point"));
connect1440.setProtoField(CString("texCoord"));
IS1439.addChild(&connect1440);

TextureCoordinate1438.addChild(&IS1439);

IndexedFaceSet1432.setTexCoord(&TextureCoordinate1438);

Coordinate& Coordinate1441 =  Coordinate();
Coordinate1441.setDEF(CString("ni_1"));
IS& IS1442 =  IS();
Connect& connect1443 =  Connect();
connect1443.setNodeField(CString("point"));
connect1443.setProtoField(CString("coord"));
IS1442.addChild(&connect1443);

Coordinate1441.addChild(&IS1442);

IndexedFaceSet1432.setCoord(&Coordinate1441);

Shape1428.setGeometry(&IndexedFaceSet1432);

Switch1398.addChild(&Shape1428);

Shape& Shape1444 =  Shape();
Appearance& Appearance1445 =  Appearance();
Appearance1445.setUSE(CString("fi_1"));
Shape1444.addChild(&Appearance1445);

IndexedFaceSet& IndexedFaceSet1446 =  IndexedFaceSet();
IndexedFaceSet1446.setUSE(CString("mi_1"));
Shape1444.setGeometry(&IndexedFaceSet1446);

Switch1398.addChild(&Shape1444);

Shape& Shape1447 =  Shape();
Appearance& Appearance1448 =  Appearance();
Appearance1448.setUSE(CString("li_1"));
Shape1447.addChild(&Appearance1448);

IndexedFaceSet& IndexedFaceSet1449 =  IndexedFaceSet();
IndexedFaceSet1449.setUSE(CString("mi_1"));
Shape1447.setGeometry(&IndexedFaceSet1449);

Switch1398.addChild(&Shape1447);

ProtoBody1397.addChild(&Switch1398);

Script& Script1450 =  Script();
Script1450.setDEF(CString("qi_1"));
Script1450.setDirectOutput(true);
field& field1451 =  field();
field1451.setName(CString("set_p"));
field1451.setAccessType(CString("inputOnly"));
field1451.setType(CString("SFBool"));
Script1450.addChild(&field1451);

field& field1452 =  field();
field1452.setName(CString("set_coord"));
field1452.setAccessType(CString("inputOnly"));
field1452.setType(CString("MFVec3f"));
Script1450.addChild(&field1452);

field& field1453 =  field();
field1453.setName(CString("set_texCoord"));
field1453.setAccessType(CString("inputOnly"));
field1453.setType(CString("MFVec2f"));
Script1450.addChild(&field1453);

field& field1454 =  field();
field1454.setName(CString("set_hd"));
field1454.setAccessType(CString("inputOnly"));
field1454.setType(CString("SFFloat"));
Script1450.addChild(&field1454);

field& field1455 =  field();
field1455.setName(CString("set_height"));
field1455.setAccessType(CString("inputOnly"));
field1455.setType(CString("SFFloat"));
Script1450.addChild(&field1455);

field& field1456 =  field();
field1456.setName(CString("set_diffuseColor"));
field1456.setAccessType(CString("inputOnly"));
field1456.setType(CString("SFColor"));
Script1450.addChild(&field1456);

field& field1457 =  field();
field1457.setName(CString("w"));
field1457.setAccessType(CString("inputOnly"));
field1457.setType(CString("SFBool"));
Script1450.addChild(&field1457);

field& field1458 =  field();
field1458.setName(CString("set_v"));
field1458.setAccessType(CString("inputOnly"));
field1458.setType(CString("SFNode"));
Script1450.addChild(&field1458);

field& field1459 =  field();
field1459.setName(CString("coordIndex"));
field1459.setAccessType(CString("outputOnly"));
field1459.setType(CString("MFInt32"));
Script1450.addChild(&field1459);

field& field1460 =  field();
field1460.setName(CString("p_changed"));
field1460.setAccessType(CString("outputOnly"));
field1460.setType(CString("SFBool"));
Script1450.addChild(&field1460);

field& field1461 =  field();
field1461.setName(CString("coord_changed"));
field1461.setAccessType(CString("outputOnly"));
field1461.setType(CString("MFVec3f"));
Script1450.addChild(&field1461);

field& field1462 =  field();
field1462.setName(CString("texCoord_changed"));
field1462.setAccessType(CString("outputOnly"));
field1462.setType(CString("MFVec2f"));
Script1450.addChild(&field1462);

field& field1463 =  field();
field1463.setName(CString("color_changed"));
field1463.setAccessType(CString("outputOnly"));
field1463.setType(CString("MFColor"));
Script1450.addChild(&field1463);

field& field1464 =  field();
field1464.setName(CString("hd_changed"));
field1464.setAccessType(CString("outputOnly"));
field1464.setType(CString("SFFloat"));
Script1450.addChild(&field1464);

field& field1465 =  field();
field1465.setName(CString("height_changed"));
field1465.setAccessType(CString("outputOnly"));
field1465.setType(CString("SFFloat"));
Script1450.addChild(&field1465);

field& field1466 =  field();
field1466.setName(CString("diffuseColor_changed"));
field1466.setAccessType(CString("outputOnly"));
field1466.setType(CString("SFColor"));
Script1450.addChild(&field1466);

field& field1467 =  field();
field1467.setName(CString("v_changed"));
field1467.setAccessType(CString("outputOnly"));
field1467.setType(CString("SFNode"));
Script1450.addChild(&field1467);

field& field1468 =  field();
field1468.setName(CString("p"));
field1468.setAccessType(CString("initializeOnly"));
field1468.setType(CString("SFBool"));
Script1450.addChild(&field1468);

field& field1469 =  field();
field1469.setName(CString("coord"));
field1469.setAccessType(CString("initializeOnly"));
field1469.setType(CString("MFVec3f"));
Script1450.addChild(&field1469);

field& field1470 =  field();
field1470.setName(CString("texCoord"));
field1470.setAccessType(CString("initializeOnly"));
field1470.setType(CString("MFVec2f"));
Script1450.addChild(&field1470);

field& field1471 =  field();
field1471.setName(CString("color"));
field1471.setAccessType(CString("initializeOnly"));
field1471.setType(CString("MFColor"));
Script1450.addChild(&field1471);

field& field1472 =  field();
field1472.setName(CString("ai"));
field1472.setAccessType(CString("initializeOnly"));
field1472.setType(CString("MFInt32"));
Script1450.addChild(&field1472);

field& field1473 =  field();
field1473.setName(CString("H"));
field1473.setAccessType(CString("initializeOnly"));
field1473.setType(CString("SFBool"));
Script1450.addChild(&field1473);

field& field1474 =  field();
field1474.setName(CString("Jb"));
field1474.setAccessType(CString("initializeOnly"));
field1474.setType(CString("SFColor"));
Script1450.addChild(&field1474);

field& field1475 =  field();
field1475.setName(CString("Kb"));
field1475.setAccessType(CString("initializeOnly"));
field1475.setType(CString("SFColor"));
Script1450.addChild(&field1475);

field& field1476 =  field();
field1476.setName(CString("Lb"));
field1476.setAccessType(CString("initializeOnly"));
field1476.setType(CString("SFInt32"));
Script1450.addChild(&field1476);

field& field1477 =  field();
field1477.setName(CString("hd"));
field1477.setAccessType(CString("initializeOnly"));
field1477.setType(CString("SFFloat"));
Script1450.addChild(&field1477);

field& field1478 =  field();
field1478.setName(CString("height"));
field1478.setAccessType(CString("initializeOnly"));
field1478.setType(CString("SFFloat"));
Script1450.addChild(&field1478);

field& field1479 =  field();
field1479.setName(CString("di"));
field1479.setAccessType(CString("initializeOnly"));
field1479.setType(CString("SFBool"));
Script1450.addChild(&field1479);

field& field1480 =  field();
field1480.setName(CString("diffuseColor"));
field1480.setAccessType(CString("initializeOnly"));
field1480.setType(CString("SFColor"));
Script1450.addChild(&field1480);

field& field1481 =  field();
field1481.setName(CString("ma"));
field1481.setAccessType(CString("initializeOnly"));
field1481.setType(CString("SFNode"));
Switch& Switch1482 =  Switch();
Switch1482.setUSE(CString("ei_1"));
field1481.addChild(Switch1482);

Script1450.addChild(&field1481);

field& field1483 =  field();
field1483.setName(CString("ic"));
field1483.setAccessType(CString("initializeOnly"));
field1483.setType(CString("SFNode"));
Appearance& Appearance1484 =  Appearance();
Appearance1484.setUSE(CString("fi_1"));
field1483.addChild(&Appearance1484);

Script1450.addChild(&field1483);

field& field1485 =  field();
field1485.setName(CString("jc"));
field1485.setAccessType(CString("initializeOnly"));
field1485.setType(CString("SFNode"));
Appearance& Appearance1486 =  Appearance();
Appearance1486.setUSE(CString("li_1"));
field1485.addChild(&Appearance1486);

Script1450.addChild(&field1485);

field& field1487 =  field();
field1487.setName(CString("ci"));
field1487.setAccessType(CString("initializeOnly"));
field1487.setType(CString("SFVec2f"));
Script1450.addChild(&field1487);

IS& IS1488 =  IS();
Connect& connect1489 =  Connect();
connect1489.setNodeField(CString("set_p"));
connect1489.setProtoField(CString("set_p"));
IS1488.addChild(&connect1489);

Connect& connect1490 =  Connect();
connect1490.setNodeField(CString("set_coord"));
connect1490.setProtoField(CString("set_coord"));
IS1488.addChild(&connect1490);

Connect& connect1491 =  Connect();
connect1491.setNodeField(CString("set_texCoord"));
connect1491.setProtoField(CString("set_texCoord"));
IS1488.addChild(&connect1491);

Connect& connect1492 =  Connect();
connect1492.setNodeField(CString("set_hd"));
connect1492.setProtoField(CString("set_hd"));
IS1488.addChild(&connect1492);

Connect& connect1493 =  Connect();
connect1493.setNodeField(CString("set_height"));
connect1493.setProtoField(CString("set_height"));
IS1488.addChild(&connect1493);

Connect& connect1494 =  Connect();
connect1494.setNodeField(CString("set_diffuseColor"));
connect1494.setProtoField(CString("set_diffuseColor"));
IS1488.addChild(&connect1494);

Connect& connect1495 =  Connect();
connect1495.setNodeField(CString("w"));
connect1495.setProtoField(CString("w"));
IS1488.addChild(&connect1495);

Connect& connect1496 =  Connect();
connect1496.setNodeField(CString("set_v"));
connect1496.setProtoField(CString("set_v"));
IS1488.addChild(&connect1496);

Connect& connect1497 =  Connect();
connect1497.setNodeField(CString("p_changed"));
connect1497.setProtoField(CString("p_changed"));
IS1488.addChild(&connect1497);

Connect& connect1498 =  Connect();
connect1498.setNodeField(CString("coord_changed"));
connect1498.setProtoField(CString("coord_changed"));
IS1488.addChild(&connect1498);

Connect& connect1499 =  Connect();
connect1499.setNodeField(CString("texCoord_changed"));
connect1499.setProtoField(CString("texCoord_changed"));
IS1488.addChild(&connect1499);

Connect& connect1500 =  Connect();
connect1500.setNodeField(CString("hd_changed"));
connect1500.setProtoField(CString("hd_changed"));
IS1488.addChild(&connect1500);

Connect& connect1501 =  Connect();
connect1501.setNodeField(CString("height_changed"));
connect1501.setProtoField(CString("height_changed"));
IS1488.addChild(&connect1501);

Connect& connect1502 =  Connect();
connect1502.setNodeField(CString("diffuseColor_changed"));
connect1502.setProtoField(CString("diffuseColor_changed"));
IS1488.addChild(&connect1502);

Connect& connect1503 =  Connect();
connect1503.setNodeField(CString("v_changed"));
connect1503.setProtoField(CString("v_changed"));
IS1488.addChild(&connect1503);

Connect& connect1504 =  Connect();
connect1504.setNodeField(CString("p"));
connect1504.setProtoField(CString("p"));
IS1488.addChild(&connect1504);

Connect& connect1505 =  Connect();
connect1505.setNodeField(CString("ai"));
connect1505.setProtoField(CString("ai"));
IS1488.addChild(&connect1505);

Connect& connect1506 =  Connect();
connect1506.setNodeField(CString("H"));
connect1506.setProtoField(CString("H"));
IS1488.addChild(&connect1506);

Connect& connect1507 =  Connect();
connect1507.setNodeField(CString("Jb"));
connect1507.setProtoField(CString("Jb"));
IS1488.addChild(&connect1507);

Connect& connect1508 =  Connect();
connect1508.setNodeField(CString("Kb"));
connect1508.setProtoField(CString("Kb"));
IS1488.addChild(&connect1508);

Connect& connect1509 =  Connect();
connect1509.setNodeField(CString("Lb"));
connect1509.setProtoField(CString("Lb"));
IS1488.addChild(&connect1509);

Connect& connect1510 =  Connect();
connect1510.setNodeField(CString("hd"));
connect1510.setProtoField(CString("hd"));
IS1488.addChild(&connect1510);

Connect& connect1511 =  Connect();
connect1511.setNodeField(CString("height"));
connect1511.setProtoField(CString("height"));
IS1488.addChild(&connect1511);

Connect& connect1512 =  Connect();
connect1512.setNodeField(CString("di"));
connect1512.setProtoField(CString("di"));
IS1488.addChild(&connect1512);

Connect& connect1513 =  Connect();
connect1513.setNodeField(CString("diffuseColor"));
connect1513.setProtoField(CString("diffuseColor"));
IS1488.addChild(&connect1513);

Connect& connect1514 =  Connect();
connect1514.setNodeField(CString("ci"));
connect1514.setProtoField(CString("ci"));
IS1488.addChild(&connect1514);

Script1450.addChild(&IS1488);


//Script1450.setSourceCode(CString("javascript:")+
//_T("function ld(){")+
//_T("ri=-0.5*hd/72;")+
//_T("si=-ri;")+
//_T("ti=-0.5*height/72;")+
//_T("ui=-ti;")+
//_T("if(di==FALSE){")+
//_T("vi=(si-ri)/ai[0];")+
//_T("wi=(ui-ti)/ai[1];")+
//_T("xi=1/ai[0];")+
//_T("yi=1/ai[1];")+
//_T("coord.length=(ai[0]+1)*(ai[1]+1);")+
//_T("texCoord.length=coord.length;")+
//_T("for(J=0;J<=ai[1];J++){")+
//_T("for(qc=0;qc<=ai[0];qc++){")+
//_T("index=J*(ai[0]+1)+qc;")+
//_T("if(qc==ai[0]){")+
//_T("coord[index].x=si;")+
//_T("}else{")+
//_T("coord[index].x=ri+qc*vi;")+
//_T("}")+
//_T("if(J==ai[1]){")+
//_T("coord[index].y=ui;")+
//_T("}else{")+
//_T("coord[index].y=ti+J*wi;")+
//_T("}")+
//_T("coord[index].z=0;")+
//_T("if(qc==ai[0]){")+
//_T("texCoord[index].x=.5+.5*ci[0];")+
//_T("}else{")+
//_T("texCoord[index].x=.5-.5*ci[0]+qc*xi*ci[0];")+
//_T("}")+
//_T("if(J==ai[1]){")+
//_T("texCoord[index].y=.5+.5*ci[1];")+
//_T("}else{")+
//_T("texCoord[index].y=.5-.5*ci[1]+J*yi*ci[1];")+
//_T("}")+
//_T("}")+
//_T("}")+
//_T("index=0;")+
//_T("for(J=0;J<ai[1];J++){")+
//_T("for(qc=0;qc<ai[0];qc++){")+
//_T("coordIndex[index++]=J*(ai[0]+1)+qc;")+
//_T("coordIndex[index++]=J*(ai[0]+1)+qc+1;")+
//_T("coordIndex[index++]=(J+1)*(ai[0]+1)+qc+1;")+
//_T("coordIndex[index++]=(J+1)*(ai[0]+1)+qc;")+
//_T("coordIndex[index++]=-1;")+
//_T("}")+
//_T("}")+
//_T("}else{")+
//_T("coord.length=1+(ai[0])*(ai[1]);")+
//_T("texCoord.length=1+(ai[0])*(ai[1]);")+
//_T("index=0;")+
//_T("coord[index].x=0;")+
//_T("coord[index].y=0;")+
//_T("coord[index].z=0;")+
//_T("texCoord[index].x=.5;")+
//_T("texCoord[index].y=.5;")+
//_T("zi=new MFVec3f();")+
//_T("zi.length=ai[0];")+
//_T("angle=0;")+
//_T("Ai=2*Math.PI/ai[0];")+
//_T("for(J=0;J<ai[0];J++){")+
//_T("zi[J].x=Math.cos(angle);")+
//_T("zi[J].y=Math.sin(angle);")+
//_T("zi[J].z=0;")+
//_T("angle+=Ai;")+
//_T("}")+
//_T("for(J=0;J<ai[1];J++){")+
//_T("Bi=0.5*hd*(J+1)/(ai[1]*72);")+
//_T("Ci=0.5*height*(J+1)/(ai[1]*72);")+
//_T("Di=0.5*(J+1)/ai[1];")+
//_T("for(qc=0;qc<ai[0];qc++){")+
//_T("index=1+J*(ai[0])+qc;")+
//_T("coord[index].x=zi[qc].x*Bi;")+
//_T("coord[index].y=zi[qc].y*Ci;")+
//_T("texCoord[index].x=0.5+zi[qc].x*Di*ci[0];")+
//_T("texCoord[index].y=0.5+zi[qc].y*Di*ci[1];")+
//_T("coord[index].z=0;")+
//_T("}")+
//_T("}")+
//_T("index=0;")+
//_T("for(J=0;J<ai[1];J++){")+
//_T("if(J==0){")+
//_T("for(qc=0;qc<ai[0];qc++){")+
//_T("coordIndex[index++]=0;")+
//_T("coordIndex[index++]=1+(J*ai[0])+qc;")+
//_T("Ei=(qc+1)%ai[0];")+
//_T("coordIndex[index++]=1+(J*ai[0])+Ei;")+
//_T("coordIndex[index++]=-1;")+
//_T("}")+
//_T("}else{")+
//_T("for(qc=0;qc<ai[0];qc++){")+
//_T("coordIndex[index++]=1+((J-1)*ai[0])+qc;")+
//_T("Ei=(qc+1)%ai[0];")+
//_T("coordIndex[index++]=1+(J*ai[0])+qc;")+
//_T("coordIndex[index++]=1+(J*ai[0])+Ei;")+
//_T("coordIndex[index++]=1+((J-1)*ai[0])+Ei;")+
//_T("coordIndex[index++]=-1;")+
//_T("}")+
//_T("}")+
//_T("}")+
//_T("}")+
//_T("hd_changed=hd;")+
//_T("height_changed=height;")+
//_T("coord_changed=coord;")+
//_T("texCoord_changed=texCoord;")+
//_T("}")+
//_T("function gd(){")+
//_T("if((H==TRUE)&&(Lb==-1))return;")+
//_T("ri=-0.5*hd/72;")+
//_T("si=-ri;")+
//_T("ti=-0.5*height/72;")+
//_T("ui=-ti;")+
//_T("for(id=0;id<coord.length;id++){")+
//_T("if(Lb==0){")+
//_T("fraction=(coord[id].x-ri)/(si-ri);")+
//_T("}else if(Lb==1){")+
//_T("fraction=(coord[id].y-ti)/(ui-ti);")+
//_T("}else if((Lb==2)&&(di==TRUE)){")+
//_T("if(id==0){")+
//_T("fraction=0;")+
//_T("Fi=1;")+
//_T("}else{")+
//_T("fraction=Fi/ai[1];")+
//_T("if((id%ai[0])==0){")+
//_T("Fi++;")+
//_T("}")+
//_T("}")+
//_T("}")+
//_T("jd=new SFColor(0,0,0);")+
//_T("if(Lb==-1){")+
//_T("jd=diffuseColor;")+
//_T("}else{")+
//_T("jd.r=Kb.r*(1-fraction)+")+
//_T("Jb.r*fraction;")+
//_T("jd.g=Kb.g*(1-fraction)+")+
//_T("Jb.g*fraction;")+
//_T("jd.b=Kb.b*(1-fraction)+")+
//_T("Jb.b*fraction;")+
//_T("}")+
//_T("color[id]=jd;")+
//_T("}")+
//_T("color_changed=color;")+
//_T("}")+
//_T("function set_p(n){")+
//_T("if(n==TRUE){")+
//_T("if(H==TRUE){")+
//_T("if(Lb>=0){")+
//_T("ma.whichChoice=2;")+
//_T("}else{")+
//_T("ma.whichChoice=0;")+
//_T("}")+
//_T("}else{")+
//_T("if(Lb>=0){")+
//_T("ma.whichChoice=3;")+
//_T("}else{")+
//_T("ma.whichChoice=1;")+
//_T("}")+
//_T("}")+
//_T("}else{")+
//_T("ma.whichChoice=-1;")+
//_T("}")+
//_T("p=n;")+
//_T("p_changed=n;")+
//_T("}")+
//_T("function initialize(){")+
//_T("ld();")+
//_T("v_changed=ic.texture_changed;")+
//_T("diffuseColor_changed=diffuseColor;")+
//_T("gd();")+
//_T("set_p(p);")+
//_T("}")+
//_T("function set_coord(n){")+
//_T("coord_changed=n;")+
//_T("}")+
//_T("function set_texCoord(n){")+
//_T("texCoord_changed=n;")+
//_T("}")+
//_T("function set_v(n){")+
//_T("ic.set_texture=n;")+
//_T("jc.set_texture=n;")+
//_T("v_changed=n;")+
//_T("}")+
//_T("function set_hd(n){")+
//_T("hd=n;")+
//_T("ld();")+
//_T("}")+
//_T("function set_height(n){")+
//_T("height=n;")+
//_T("ld();")+
//_T("}")+
//_T("function set_diffuseColor(n){")+
//_T("diffuseColor=n;")+
//_T("diffuseColor_changed=n;")+
//_T("gd();")+
//_T("}")+
//_T("function w(){")+
//_T("}"));
ProtoBody1397.addChild(&Script1450);

ROUTE& ROUTE1515 =  ROUTE();
ROUTE1515.setFromNode(CString("qi_1"));
ROUTE1515.setFromField(CString("coord_changed"));
ROUTE1515.setToNode(CString("ji_1"));
ROUTE1515.setToField(CString("set_point"));
ProtoBody1397.addChild(&ROUTE1515);

ROUTE& ROUTE1516 =  ROUTE();
ROUTE1516.setFromNode(CString("qi_1"));
ROUTE1516.setFromField(CString("texCoord_changed"));
ROUTE1516.setToNode(CString("ki_1"));
ROUTE1516.setToField(CString("set_point"));
ProtoBody1397.addChild(&ROUTE1516);

ROUTE& ROUTE1517 =  ROUTE();
ROUTE1517.setFromNode(CString("qi_1"));
ROUTE1517.setFromField(CString("coordIndex"));
ROUTE1517.setToNode(CString("ii_1"));
ROUTE1517.setToField(CString("set_coordIndex"));
ProtoBody1397.addChild(&ROUTE1517);

ROUTE& ROUTE1518 =  ROUTE();
ROUTE1518.setFromNode(CString("qi_1"));
ROUTE1518.setFromField(CString("coord_changed"));
ROUTE1518.setToNode(CString("ni_1"));
ROUTE1518.setToField(CString("set_point"));
ProtoBody1397.addChild(&ROUTE1518);

ROUTE& ROUTE1519 =  ROUTE();
ROUTE1519.setFromNode(CString("qi_1"));
ROUTE1519.setFromField(CString("color_changed"));
ROUTE1519.setToNode(CString("oi_1"));
ROUTE1519.setToField(CString("set_color"));
ProtoBody1397.addChild(&ROUTE1519);

ROUTE& ROUTE1520 =  ROUTE();
ROUTE1520.setFromNode(CString("qi_1"));
ROUTE1520.setFromField(CString("texCoord_changed"));
ROUTE1520.setToNode(CString("pi_1"));
ROUTE1520.setToField(CString("set_point"));
ProtoBody1397.addChild(&ROUTE1520);

ROUTE& ROUTE1521 =  ROUTE();
ROUTE1521.setFromNode(CString("qi_1"));
ROUTE1521.setFromField(CString("coordIndex"));
ROUTE1521.setToNode(CString("mi_1"));
ROUTE1521.setToField(CString("set_coordIndex"));
ProtoBody1397.addChild(&ROUTE1521);

ROUTE& ROUTE1522 =  ROUTE();
ROUTE1522.setFromNode(CString("qi_1"));
ROUTE1522.setFromField(CString("coordIndex"));
ROUTE1522.setToNode(CString("mi_1"));
ROUTE1522.setToField(CString("set_colorIndex"));
ProtoBody1397.addChild(&ROUTE1522);

ProtoDeclare1349.addChild(&ProtoBody1397);

Scene7.addChild(&ProtoDeclare1349);

WorldInfo& WorldInfo1523 =  WorldInfo();
WorldInfo1523.setInfo(new CString[]{CString("Published by Cosmo PageFX V1.0")}, 1);
MetadataSet& MetadataSet1524 =  MetadataSet();
MetadataSet1524.X3DNode::setName(CString("Titania"));
MetadataSet1524.setDEF(CString("Titania"));
MetadataSet1524.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataSet& MetadataSet1525 =  MetadataSet();
MetadataSet1525.X3DNode::setName(CString("NavigationInfo"));
MetadataSet1525.setDEF(CString("NavigationInfo"));
MetadataSet1525.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataString& MetadataString1526 =  MetadataString();
MetadataString1526.X3DNode::setName(CString("type"));
MetadataString1526.setDEF(CString("type"));
MetadataString1526.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataString1526.setValue(new CString[]{CString("EXAMINE")}, 1);
MetadataSet1525.setValue((X3DNode *)&MetadataString1526);

MetadataSet1524.setValue((X3DNode *)&MetadataSet1525);

MetadataSet& MetadataSet1527 =  MetadataSet();
MetadataSet1527.X3DNode::setName(CString("Viewpoint"));
MetadataSet1527.setDEF(CString("Viewpoint"));
MetadataSet1527.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble& MetadataDouble1528 =  MetadataDouble();
MetadataDouble1528.X3DNode::setName(CString("position"));
MetadataDouble1528.setDEF(CString("position"));
MetadataDouble1528.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble1528.setValue(new double[]{0.0,0.0,5.0}, 3);
MetadataSet1527.setValue((X3DNode *)&MetadataDouble1528);

MetadataDouble& MetadataDouble1529 =  MetadataDouble();
MetadataDouble1529.X3DNode::setName(CString("orientation"));
MetadataDouble1529.setDEF(CString("orientation"));
MetadataDouble1529.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble1529.setValue(new double[]{0.0,0.0,1.0,0.0}, 4);
MetadataSet1527.setValue((X3DNode *)&MetadataDouble1529);

MetadataDouble& MetadataDouble1530 =  MetadataDouble();
MetadataDouble1530.X3DNode::setName(CString("centerOfRotation"));
MetadataDouble1530.setDEF(CString("centerOfRotation"));
MetadataDouble1530.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble1530.setValue(new double[]{0.0,0.0,0.0}, 3);
MetadataSet1527.setValue((X3DNode *)&MetadataDouble1530);

MetadataSet1524.setValue((X3DNode *)&MetadataSet1527);

WorldInfo1523.setMetadata(&MetadataSet1524);

Scene7.addChild(&WorldInfo1523);

Group& Group1531 =  Group();
Group1531.setDEF(CString("Gi"));
ProtoInstance& ProtoInstance1532 =  ProtoInstance();
ProtoInstance1532.setName(CString("f"));
ProtoInstance1532.setDEF(CString("Hi"));
Group1531.addChild(&ProtoInstance1532);

Viewpoint& Viewpoint1533 =  Viewpoint();
Viewpoint1533.setDEF(CString("Ii"));
Viewpoint1533.setDescription(CString("Home"));
Viewpoint1533.setPosition(new float[]{0.0,0.0,5.0});
Viewpoint1533.setFieldOfView(0.3519);
Group1531.addChild(&Viewpoint1533);

NavigationInfo& NavigationInfo1534 =  NavigationInfo();
NavigationInfo1534.setDEF(CString("Ji"));
NavigationInfo1534.setType(new CString[]{CString("NONE")}, 1);
Group1531.addChild(&NavigationInfo1534);

Background& Background1535 =  Background();
Background1535.setDEF(CString("Ki"));
Background1535.setSkyColor(new float[]{0.749,0.749,0.749}, 3);
Group1531.addChild(&Background1535);

ProtoInstance& ProtoInstance1536 =  ProtoInstance();
ProtoInstance1536.setName(CString("o"));
ProtoInstance1536.setDEF(CString("Li"));
fieldValue& fieldValue1537 =  fieldValue();
fieldValue1537.setName(CString("G"));
fieldValue1537.setValue(CString("true"));
ProtoInstance1536.addChild(&fieldValue1537);

fieldValue& fieldValue1538 =  fieldValue();
fieldValue1538.setName(CString("children"));
Transform& Transform1539 =  Transform();
Transform1539.setDEF(CString("Mi"));
Transform1539.setTranslation(new float[]{-0.951,0.2225,2.99});
Transform1539.setRotation(new float[]{-0.145494,-0.989359,0.0,0.7418});
Transform& Transform1540 =  Transform();
Transform1540.setDEF(CString("Ni"));
ProtoInstance& ProtoInstance1541 =  ProtoInstance();
ProtoInstance1541.setName(CString("K"));
ProtoInstance1541.setDEF(CString("Oi"));
fieldValue& fieldValue1542 =  fieldValue();
fieldValue1542.setName(CString("B"));
ProtoInstance& ProtoInstance1543 =  ProtoInstance();
ProtoInstance1543.setUSE(CString("Li"));
fieldValue1542.addChild(&ProtoInstance1543);

ProtoInstance1541.addChild(&fieldValue1542);

fieldValue& fieldValue1544 =  fieldValue();
fieldValue1544.setName(CString("C"));
Transform& Transform1545 =  Transform();
Transform1545.setUSE(CString("Mi"));
fieldValue1544.addChild(&Transform1545);

Transform& Transform1546 =  Transform();
Transform1546.setUSE(CString("Ni"));
fieldValue1544.addChild(&Transform1546);

ProtoInstance1541.addChild(&fieldValue1544);

fieldValue& fieldValue1547 =  fieldValue();
fieldValue1547.setName(CString("L"));
fieldValue1547.setValue(CString("1.528"));
ProtoInstance1541.addChild(&fieldValue1547);

fieldValue& fieldValue1548 =  fieldValue();
fieldValue1548.setName(CString("attenuation"));
fieldValue1548.setValue(CString("0.001 0.6545 0"));
ProtoInstance1541.addChild(&fieldValue1548);

Transform1540.addChild(&ProtoInstance1541);

Transform1539.addChild(&Transform1540);

fieldValue1538.addChild(&Transform1539);

Transform& Transform1549 =  Transform();
Transform1549.setDEF(CString("Pi"));
Transform1549.setTranslation(new float[]{-1.271,-0.1785,0.68});
Transform1549.setRotation(new float[]{1.0,0.0,0.0,3.166});
Transform1549.setCenter(new float[]{0.0,0.0,1.94e-8});
ProtoInstance& ProtoInstance1550 =  ProtoInstance();
ProtoInstance1550.setName(CString("Q"));
ProtoInstance1550.setDEF(CString("Qi"));
fieldValue& fieldValue1551 =  fieldValue();
fieldValue1551.setName(CString("center"));
fieldValue1551.setValue(CString("0 0 1.94e-8"));
ProtoInstance1550.addChild(&fieldValue1551);

fieldValue& fieldValue1552 =  fieldValue();
fieldValue1552.setName(CString("U"));
ProtoInstance& ProtoInstance1553 =  ProtoInstance();
ProtoInstance1553.setName(CString("ga"));
ProtoInstance1553.setDEF(CString("Ri"));
fieldValue& fieldValue1554 =  fieldValue();
fieldValue1554.setName(CString("url"));
fieldValue1554.setValue(CString("\"stripe.png\""));
ProtoInstance1553.addChild(&fieldValue1554);

fieldValue& fieldValue1555 =  fieldValue();
fieldValue1555.setName(CString("diffuseColor"));
fieldValue1555.setValue(CString("1 0 1"));
ProtoInstance1553.addChild(&fieldValue1555);

fieldValue& fieldValue1556 =  fieldValue();
fieldValue1556.setName(CString("emissiveColor"));
fieldValue1556.setValue(CString("0 0 0"));
ProtoInstance1553.addChild(&fieldValue1556);

fieldValue& fieldValue1557 =  fieldValue();
fieldValue1557.setName(CString("specularColor"));
fieldValue1557.setValue(CString("0.04 0.16 0.28"));
ProtoInstance1553.addChild(&fieldValue1557);

fieldValue& fieldValue1558 =  fieldValue();
fieldValue1558.setName(CString("shininess"));
fieldValue1558.setValue(CString("0.02"));
ProtoInstance1553.addChild(&fieldValue1558);

fieldValue& fieldValue1559 =  fieldValue();
fieldValue1559.setName(CString("s"));
fieldValue1559.setValue(CString("1.047"));
ProtoInstance1553.addChild(&fieldValue1559);

fieldValue& fieldValue1560 =  fieldValue();
fieldValue1560.setName(CString("t"));
fieldValue1560.setValue(CString("2 2"));
ProtoInstance1553.addChild(&fieldValue1560);

fieldValue& fieldValue1561 =  fieldValue();
fieldValue1561.setName(CString("B"));
ProtoInstance& ProtoInstance1562 =  ProtoInstance();
ProtoInstance1562.setUSE(CString("Li"));
fieldValue1561.addChild(&ProtoInstance1562);

ProtoInstance1553.addChild(&fieldValue1561);

fieldValue& fieldValue1563 =  fieldValue();
fieldValue1563.setName(CString("C"));
Transform& Transform1564 =  Transform();
Transform1564.setUSE(CString("Pi"));
fieldValue1563.addChild(&Transform1564);

ProtoInstance& ProtoInstance1565 =  ProtoInstance();
ProtoInstance1565.setUSE(CString("Qi"));
fieldValue1563.addChild(&ProtoInstance1565);

Transform& Transform1566 =  Transform();
Transform1566.setDEF(CString("Si"));
Transform1566.setScale(new float[]{0.5154,0.6149,0.5154});
ProtoInstance& ProtoInstance1567 =  ProtoInstance();
ProtoInstance1567.setName(CString("na"));
ProtoInstance1567.setDEF(CString("Ti"));
fieldValue& fieldValue1568 =  fieldValue();
fieldValue1568.setName(CString("oa"));
fieldValue1568.setValue(CString("1"));
ProtoInstance1567.addChild(&fieldValue1568);

Transform1566.addChild(&ProtoInstance1567);

ProtoInstance& ProtoInstance1569 =  ProtoInstance();
ProtoInstance1569.setUSE(CString("Ri"));
Transform1566.addChild(&ProtoInstance1569);

ProtoInstance& ProtoInstance1570 =  ProtoInstance();
ProtoInstance1570.setName(CString("ra"));
ProtoInstance1570.setDEF(CString("Ui"));
fieldValue& fieldValue1571 =  fieldValue();
fieldValue1571.setName(CString("cycleInterval"));
fieldValue1571.setValue(CString("3"));
ProtoInstance1570.addChild(&fieldValue1571);

fieldValue& fieldValue1572 =  fieldValue();
fieldValue1572.setName(CString("Da"));
fieldValue1572.setValue(CString("false"));
ProtoInstance1570.addChild(&fieldValue1572);

fieldValue& fieldValue1573 =  fieldValue();
fieldValue1573.setName(CString("Ia"));
fieldValue1573.setValue(CString("true"));
ProtoInstance1570.addChild(&fieldValue1573);

Transform1566.addChild(&ProtoInstance1570);

ProtoInstance& ProtoInstance1574 =  ProtoInstance();
ProtoInstance1574.setName(CString("gb"));
ProtoInstance1574.setDEF(CString("Vi"));
fieldValue& fieldValue1575 =  fieldValue();
fieldValue1575.setName(CString("U"));
ProtoInstance& ProtoInstance1576 =  ProtoInstance();
ProtoInstance1576.setUSE(CString("Ri"));
fieldValue1575.addChild(&ProtoInstance1576);

ProtoInstance1574.addChild(&fieldValue1575);

fieldValue& fieldValue1577 =  fieldValue();
fieldValue1577.setName(CString("direction"));
fieldValue1577.setValue(CString("1"));
ProtoInstance1574.addChild(&fieldValue1577);

Transform1566.addChild(&ProtoInstance1574);

ProtoInstance& ProtoInstance1578 =  ProtoInstance();
ProtoInstance1578.setName(CString("nb"));
ProtoInstance1578.setDEF(CString("Wi"));
Transform1566.addChild(&ProtoInstance1578);

ProtoInstance& ProtoInstance1579 =  ProtoInstance();
ProtoInstance1579.setName(CString("ra"));
ProtoInstance1579.setDEF(CString("Xi"));
fieldValue& fieldValue1580 =  fieldValue();
fieldValue1580.setName(CString("Da"));
fieldValue1580.setValue(CString("false"));
ProtoInstance1579.addChild(&fieldValue1580);

fieldValue& fieldValue1581 =  fieldValue();
fieldValue1581.setName(CString("Ia"));
fieldValue1581.setValue(CString("true"));
ProtoInstance1579.addChild(&fieldValue1581);

Transform1566.addChild(&ProtoInstance1579);

fieldValue1563.addChild(&Transform1566);

ProtoInstance1553.addChild(&fieldValue1563);

fieldValue& fieldValue1582 =  fieldValue();
fieldValue1582.setName(CString("geometry"));
Cone& Cone1583 =  Cone();
Cone1583.setDEF(CString("_1"));
Cone1583.setHeight(1);
Cone1583.setBottomRadius(0.5);
fieldValue1582.addChild(Cone1583);

ProtoInstance1553.addChild(&fieldValue1582);

fieldValue& fieldValue1584 =  fieldValue();
fieldValue1584.setName(CString("ha"));
fieldValue1584.setValue(CString("0 0 0.25"));
ProtoInstance1553.addChild(&fieldValue1584);

fieldValue1552.addChild(&ProtoInstance1553);

ProtoInstance1550.addChild(&fieldValue1552);

fieldValue& fieldValue1585 =  fieldValue();
fieldValue1585.setName(CString("children"));
Transform& Transform1586 =  Transform();
Transform1586.setUSE(CString("Si"));
fieldValue1585.addChild(&Transform1586);

ProtoInstance1550.addChild(&fieldValue1585);

Transform1549.addChild(&ProtoInstance1550);

fieldValue1538.addChild(&Transform1549);

Transform& Transform1587 =  Transform();
Transform1587.setDEF(CString("Yi"));
Transform1587.setTranslation(new float[]{-0.6985,-0.1547,0.7377});
Transform1587.setRotation(new float[]{0.0,0.0,1.0,0.3252});
Transform1587.setCenter(new float[]{0.0,0.0,-1.282e-8});
ProtoInstance& ProtoInstance1588 =  ProtoInstance();
ProtoInstance1588.setName(CString("Q"));
ProtoInstance1588.setDEF(CString("Zi"));
fieldValue& fieldValue1589 =  fieldValue();
fieldValue1589.setName(CString("center"));
fieldValue1589.setValue(CString("0 0 -1.282e-8"));
ProtoInstance1588.addChild(&fieldValue1589);

fieldValue& fieldValue1590 =  fieldValue();
fieldValue1590.setName(CString("U"));
ProtoInstance& ProtoInstance1591 =  ProtoInstance();
ProtoInstance1591.setName(CString("ga"));
ProtoInstance1591.setDEF(CString("aj"));
fieldValue& fieldValue1592 =  fieldValue();
fieldValue1592.setName(CString("url"));
fieldValue1592.setValue(CString("\"globe.jpg\""));
ProtoInstance1591.addChild(&fieldValue1592);

fieldValue& fieldValue1593 =  fieldValue();
fieldValue1593.setName(CString("diffuseColor"));
fieldValue1593.setValue(CString("0.6 0.6 0.6"));
ProtoInstance1591.addChild(&fieldValue1593);

fieldValue& fieldValue1594 =  fieldValue();
fieldValue1594.setName(CString("emissiveColor"));
fieldValue1594.setValue(CString("0.2 0.2 0.12"));
ProtoInstance1591.addChild(&fieldValue1594);

fieldValue& fieldValue1595 =  fieldValue();
fieldValue1595.setName(CString("specularColor"));
fieldValue1595.setValue(CString("0.8 0.8 0.8"));
ProtoInstance1591.addChild(&fieldValue1595);

fieldValue& fieldValue1596 =  fieldValue();
fieldValue1596.setName(CString("shininess"));
fieldValue1596.setValue(CString("0.15"));
ProtoInstance1591.addChild(&fieldValue1596);

fieldValue& fieldValue1597 =  fieldValue();
fieldValue1597.setName(CString("B"));
ProtoInstance& ProtoInstance1598 =  ProtoInstance();
ProtoInstance1598.setUSE(CString("Li"));
fieldValue1597.addChild(&ProtoInstance1598);

ProtoInstance1591.addChild(&fieldValue1597);

fieldValue& fieldValue1599 =  fieldValue();
fieldValue1599.setName(CString("C"));
Transform& Transform1600 =  Transform();
Transform1600.setUSE(CString("Yi"));
fieldValue1599.addChild(&Transform1600);

ProtoInstance& ProtoInstance1601 =  ProtoInstance();
ProtoInstance1601.setUSE(CString("Zi"));
fieldValue1599.addChild(&ProtoInstance1601);

Transform& Transform1602 =  Transform();
Transform1602.setDEF(CString("bj"));
Transform1602.setScale(new float[]{0.4064,0.4064,0.4064});
ProtoInstance& ProtoInstance1603 =  ProtoInstance();
ProtoInstance1603.setUSE(CString("aj"));
Transform1602.addChild(&ProtoInstance1603);

ProtoInstance& ProtoInstance1604 =  ProtoInstance();
ProtoInstance1604.setName(CString("ra"));
ProtoInstance1604.setDEF(CString("cj"));
fieldValue& fieldValue1605 =  fieldValue();
fieldValue1605.setName(CString("cycleInterval"));
fieldValue1605.setValue(CString("6"));
ProtoInstance1604.addChild(&fieldValue1605);

fieldValue& fieldValue1606 =  fieldValue();
fieldValue1606.setName(CString("Da"));
fieldValue1606.setValue(CString("false"));
ProtoInstance1604.addChild(&fieldValue1606);

fieldValue& fieldValue1607 =  fieldValue();
fieldValue1607.setName(CString("Ia"));
fieldValue1607.setValue(CString("true"));
ProtoInstance1604.addChild(&fieldValue1607);

Transform1602.addChild(&ProtoInstance1604);

fieldValue1599.addChild(&Transform1602);

ProtoInstance1591.addChild(&fieldValue1599);

fieldValue& fieldValue1608 =  fieldValue();
fieldValue1608.setName(CString("geometry"));
Sphere& Sphere1609 =  Sphere();
Sphere1609.setDEF(CString("_2"));
Sphere1609.setRadius(0.5);
fieldValue1608.addChild(&Sphere1609);

ProtoInstance1591.addChild(&fieldValue1608);

fieldValue1590.addChild(&ProtoInstance1591);

ProtoInstance1588.addChild(&fieldValue1590);

fieldValue& fieldValue1610 =  fieldValue();
fieldValue1610.setName(CString("children"));
Transform& Transform1611 =  Transform();
Transform1611.setUSE(CString("bj"));
fieldValue1610.addChild(&Transform1611);

ProtoInstance1588.addChild(&fieldValue1610);

fieldValue& fieldValue1612 =  fieldValue();
fieldValue1612.setName(CString("W"));
fieldValue1612.setValue(CString("1"));
ProtoInstance1588.addChild(&fieldValue1612);

Transform1587.addChild(&ProtoInstance1588);

fieldValue1538.addChild(&Transform1587);

Transform& Transform1613 =  Transform();
Transform1613.setDEF(CString("dj"));
Transform1613.setTranslation(new float[]{-0.7941,-0.386,0.7019});
Transform1613.setCenter(new float[]{0.0,0.0,-5.221e-9});
Transform& Transform1614 =  Transform();
Transform1614.setDEF(CString("ej"));
Transform1614.setScale(new float[]{0.0876,0.3115,0.0876});
ProtoInstance& ProtoInstance1615 =  ProtoInstance();
ProtoInstance1615.setName(CString("ga"));
ProtoInstance1615.setDEF(CString("fj"));
fieldValue& fieldValue1616 =  fieldValue();
fieldValue1616.setName(CString("url"));
fieldValue1616.setValue(CString("\"\""));
ProtoInstance1615.addChild(&fieldValue1616);

fieldValue& fieldValue1617 =  fieldValue();
fieldValue1617.setName(CString("diffuseColor"));
fieldValue1617.setValue(CString("0.8 0 0"));
ProtoInstance1615.addChild(&fieldValue1617);

fieldValue& fieldValue1618 =  fieldValue();
fieldValue1618.setName(CString("emissiveColor"));
fieldValue1618.setValue(CString("0.15 0 0"));
ProtoInstance1615.addChild(&fieldValue1618);

fieldValue& fieldValue1619 =  fieldValue();
fieldValue1619.setName(CString("B"));
ProtoInstance& ProtoInstance1620 =  ProtoInstance();
ProtoInstance1620.setUSE(CString("Li"));
fieldValue1619.addChild(&ProtoInstance1620);

ProtoInstance1615.addChild(&fieldValue1619);

fieldValue& fieldValue1621 =  fieldValue();
fieldValue1621.setName(CString("C"));
Transform& Transform1622 =  Transform();
Transform1622.setUSE(CString("dj"));
fieldValue1621.addChild(&Transform1622);

Transform& Transform1623 =  Transform();
Transform1623.setUSE(CString("ej"));
fieldValue1621.addChild(&Transform1623);

ProtoInstance1615.addChild(&fieldValue1621);

fieldValue& fieldValue1624 =  fieldValue();
fieldValue1624.setName(CString("geometry"));
Cylinder& Cylinder1625 =  Cylinder();
Cylinder1625.setDEF(CString("_3"));
Cylinder1625.setHeight(1);
Cylinder1625.setRadius(0.5);
fieldValue1624.addChild(Cylinder1625);

ProtoInstance1615.addChild(&fieldValue1624);

Transform1614.addChild(&ProtoInstance1615);

Transform1613.addChild(&Transform1614);

fieldValue1538.addChild(&Transform1613);

Transform& Transform1626 =  Transform();
Transform1626.setDEF(CString("gj"));
Transform1626.setTranslation(new float[]{-0.5524,-0.4097,0.6894});
Transform1626.setRotation(new float[]{0.0,0.0,1.0,0.7457});
Transform1626.setCenter(new float[]{0.0,0.0,-5.221e-9});
Transform& Transform1627 =  Transform();
Transform1627.setDEF(CString("hj"));
Transform1627.setScale(new float[]{0.0876,0.3115,0.0876});
ProtoInstance& ProtoInstance1628 =  ProtoInstance();
ProtoInstance1628.setName(CString("ga"));
ProtoInstance1628.setDEF(CString("ij"));
fieldValue& fieldValue1629 =  fieldValue();
fieldValue1629.setName(CString("url"));
fieldValue1629.setValue(CString("\"\""));
ProtoInstance1628.addChild(&fieldValue1629);

fieldValue& fieldValue1630 =  fieldValue();
fieldValue1630.setName(CString("diffuseColor"));
fieldValue1630.setValue(CString("1 0 0"));
ProtoInstance1628.addChild(&fieldValue1630);

fieldValue& fieldValue1631 =  fieldValue();
fieldValue1631.setName(CString("emissiveColor"));
fieldValue1631.setValue(CString("0.2 0 0"));
ProtoInstance1628.addChild(&fieldValue1631);

fieldValue& fieldValue1632 =  fieldValue();
fieldValue1632.setName(CString("specularColor"));
fieldValue1632.setValue(CString("0 0 0"));
ProtoInstance1628.addChild(&fieldValue1632);

fieldValue& fieldValue1633 =  fieldValue();
fieldValue1633.setName(CString("shininess"));
fieldValue1633.setValue(CString("0"));
ProtoInstance1628.addChild(&fieldValue1633);

fieldValue& fieldValue1634 =  fieldValue();
fieldValue1634.setName(CString("B"));
ProtoInstance& ProtoInstance1635 =  ProtoInstance();
ProtoInstance1635.setUSE(CString("Li"));
fieldValue1634.addChild(&ProtoInstance1635);

ProtoInstance1628.addChild(&fieldValue1634);

fieldValue& fieldValue1636 =  fieldValue();
fieldValue1636.setName(CString("C"));
Transform& Transform1637 =  Transform();
Transform1637.setUSE(CString("gj"));
fieldValue1636.addChild(&Transform1637);

Transform& Transform1638 =  Transform();
Transform1638.setUSE(CString("hj"));
fieldValue1636.addChild(&Transform1638);

ProtoInstance1628.addChild(&fieldValue1636);

fieldValue& fieldValue1639 =  fieldValue();
fieldValue1639.setName(CString("geometry"));
Cylinder& Cylinder1640 =  Cylinder();
Cylinder1640.setDEF(CString("_4"));
Cylinder1640.setHeight(1);
Cylinder1640.setRadius(0.5);
fieldValue1639.addChild(Cylinder1640);

ProtoInstance1628.addChild(&fieldValue1639);

Transform1627.addChild(&ProtoInstance1628);

Transform1626.addChild(&Transform1627);

fieldValue1538.addChild(&Transform1626);

Transform& Transform1641 =  Transform();
Transform1641.setDEF(CString("jj"));
Transform1641.setTranslation(new float[]{-0.4473,-0.3719,0.6801});
Transform& Transform1642 =  Transform();
Transform1642.setDEF(CString("kj"));
Transform1642.setScale(new float[]{0.9219,0.9219,0.9219});
ProtoInstance& ProtoInstance1643 =  ProtoInstance();
ProtoInstance1643.setName(CString("o"));
ProtoInstance1643.setDEF(CString("lj"));
fieldValue& fieldValue1644 =  fieldValue();
fieldValue1644.setName(CString("B"));
ProtoInstance& ProtoInstance1645 =  ProtoInstance();
ProtoInstance1645.setUSE(CString("Li"));
fieldValue1644.addChild(&ProtoInstance1645);

ProtoInstance1643.addChild(&fieldValue1644);

fieldValue& fieldValue1646 =  fieldValue();
fieldValue1646.setName(CString("C"));
Transform& Transform1647 =  Transform();
Transform1647.setUSE(CString("jj"));
fieldValue1646.addChild(&Transform1647);

Transform& Transform1648 =  Transform();
Transform1648.setUSE(CString("kj"));
fieldValue1646.addChild(&Transform1648);

ProtoInstance1643.addChild(&fieldValue1646);

fieldValue& fieldValue1649 =  fieldValue();
fieldValue1649.setName(CString("children"));
Transform& Transform1650 =  Transform();
Transform1650.setDEF(CString("mj"));
Transform1650.setTranslation(new float[]{0.0,0.0,-0.005423});
Transform& Transform1651 =  Transform();
Transform1651.setDEF(CString("nj"));
Transform1651.setScale(new float[]{0.96,0.96,1.0});
ProtoInstance& ProtoInstance1652 =  ProtoInstance();
ProtoInstance1652.setName(CString("zb"));
ProtoInstance1652.setDEF(CString("oj"));
fieldValue& fieldValue1653 =  fieldValue();
fieldValue1653.setName(CString("url"));
fieldValue1653.setValue(CString("\"\""));
ProtoInstance1652.addChild(&fieldValue1653);

fieldValue& fieldValue1654 =  fieldValue();
fieldValue1654.setName(CString("emissiveColor"));
fieldValue1654.setValue(CString("0.01 0.18 0.1"));
ProtoInstance1652.addChild(&fieldValue1654);

fieldValue& fieldValue1655 =  fieldValue();
fieldValue1655.setName(CString("specularColor"));
fieldValue1655.setValue(CString("0 0 0"));
ProtoInstance1652.addChild(&fieldValue1655);

fieldValue& fieldValue1656 =  fieldValue();
fieldValue1656.setName(CString("shininess"));
fieldValue1656.setValue(CString("0"));
ProtoInstance1652.addChild(&fieldValue1656);

fieldValue& fieldValue1657 =  fieldValue();
fieldValue1657.setName(CString("Cb"));
fieldValue1657.setValue(CString("0.9888"));
ProtoInstance1652.addChild(&fieldValue1657);

fieldValue& fieldValue1658 =  fieldValue();
fieldValue1658.setName(CString("B"));
ProtoInstance& ProtoInstance1659 =  ProtoInstance();
ProtoInstance1659.setUSE(CString("lj"));
fieldValue1658.addChild(&ProtoInstance1659);

ProtoInstance1652.addChild(&fieldValue1658);

fieldValue& fieldValue1660 =  fieldValue();
fieldValue1660.setName(CString("C"));
Transform& Transform1661 =  Transform();
Transform1661.setUSE(CString("mj"));
fieldValue1660.addChild(&Transform1661);

Transform& Transform1662 =  Transform();
Transform1662.setUSE(CString("nj"));
fieldValue1660.addChild(&Transform1662);

ProtoInstance1652.addChild(&fieldValue1660);

fieldValue& fieldValue1663 =  fieldValue();
fieldValue1663.setName(CString("Fb"));
fieldValue1663.setValue(CString("true"));
ProtoInstance1652.addChild(&fieldValue1663);

fieldValue& fieldValue1664 =  fieldValue();
fieldValue1664.setName(CString("Gb"));
fieldValue1664.setValue(CString("false"));
ProtoInstance1652.addChild(&fieldValue1664);

fieldValue& fieldValue1665 =  fieldValue();
fieldValue1665.setName(CString("Hb"));
fieldValue1665.setValue(CString("0.01 0"));
ProtoInstance1652.addChild(&fieldValue1665);

fieldValue& fieldValue1666 =  fieldValue();
fieldValue1666.setName(CString("Ib"));
fieldValue1666.setValue(CString("0.79 0.6"));
ProtoInstance1652.addChild(&fieldValue1666);

fieldValue& fieldValue1667 =  fieldValue();
fieldValue1667.setName(CString("Mb"));
ProtoInstance& ProtoInstance1668 =  ProtoInstance();
ProtoInstance1668.setName(CString("md"));
ProtoInstance1668.setDEF(CString("pj"));
fieldValue& fieldValue1669 =  fieldValue();
fieldValue1669.setName(CString("coord"));
fieldValue1669.setValue(CString("0.37 0 0 0.38 0 0 0.62 0.51 0 0.62 0.11 0 0.61 0.07 0 0.6 0.04 0 0.58 0.02 0 0.55 0.01 0 0.53 0.01 0 0.53 0 0 0.79 0 0 0.79 0.01 0 0.76 0.01 0 0.73 0.02 0 0.71 0.04 0 0.7 0.06 0 0.7 0.54 0 0.71 0.57 0 0.73 0.59 0 0.79 0.59 0 0.79 0.6 0 0.62 0.6 0 0.39 0.13 0 0.18 0.6 0 0.01 0.6 0 0.01 0.59 0 0.04 0.59 0 0.06 0.58 0 0.09 0.56 0 0.09 0.53 0 0.1 0.49 0 0.1 0.11 0 0.09 0.07 0 0.08 0.04 0 0.06 0.02 0 0.03 0.01 0 0.01 0.01 0 0.01 0 0 0.23 0 0 0.23 0.01 0 0.2 0.01 0 0.17 0.02 0 0.15 0.04 0 0.14 0.06 0 0.14 0.51 0"));
ProtoInstance1668.addChild(&fieldValue1669);

fieldValue& fieldValue1670 =  fieldValue();
fieldValue1670.setName(CString("coordIndex"));
fieldValue1670.setValue(CString("30 28 29 -1 38 36 37 -1 36 38 35 -1 35 38 34 -1 34 38 33 -1 33 38 40 -1 33 40 41 -1 33 41 32 -1 32 41 42 -1 32 42 31 -1 31 42 43 -1 31 43 30 -1 40 38 39 -1 10 8 9 -1 8 10 7 -1 7 10 6 -1 6 10 5 -1 5 10 13 -1 5 13 4 -1 4 13 3 -1 3 13 14 -1 3 14 15 -1 3 15 2 -1 2 15 21 -1 13 10 12 -1 12 10 11 -1 21 18 20 -1 18 21 17 -1 17 21 16 -1 16 21 15 -1 20 18 19 -1 26 24 25 -1 24 26 23 -1 23 26 27 -1 23 27 28 -1 23 28 30 -1 23 30 44 -1 44 30 43 -1 23 44 0 -1 23 0 22 -1 22 0 1 -1 22 1 2 -1 22 2 21 -1"));
ProtoInstance1668.addChild(&fieldValue1670);

fieldValue& fieldValue1671 =  fieldValue();
fieldValue1671.setName(CString("mc"));
fieldValue1671.setValue(CString("0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 -1"));
ProtoInstance1668.addChild(&fieldValue1671);

fieldValue1667.addChild(&ProtoInstance1668);

ProtoInstance1652.addChild(&fieldValue1667);

fieldValue& fieldValue1672 =  fieldValue();
fieldValue1672.setName(CString("Ob"));
fieldValue1672.setValue(CString("0.04"));
ProtoInstance1652.addChild(&fieldValue1672);

fieldValue& fieldValue1673 =  fieldValue();
fieldValue1673.setName(CString("Pb"));
fieldValue1673.setValue(CString("0.1389"));
ProtoInstance1652.addChild(&fieldValue1673);

fieldValue& fieldValue1674 =  fieldValue();
fieldValue1674.setName(CString("creaseAngle"));
fieldValue1674.setValue(CString("0"));
ProtoInstance1652.addChild(&fieldValue1674);

fieldValue& fieldValue1675 =  fieldValue();
fieldValue1675.setName(CString("diffuseColor"));
fieldValue1675.setValue(CString("0.03 0.49 0.22"));
ProtoInstance1652.addChild(&fieldValue1675);

Transform1651.addChild(&ProtoInstance1652);

Transform1650.addChild(&Transform1651);

fieldValue1649.addChild(&Transform1650);

ProtoInstance1643.addChild(&fieldValue1649);

fieldValue& fieldValue1676 =  fieldValue();
fieldValue1676.setName(CString("A"));
ProtoInstance& ProtoInstance1677 =  ProtoInstance();
ProtoInstance1677.setUSE(CString("oj"));
fieldValue1676.addChild(&ProtoInstance1677);

ProtoInstance1643.addChild(&fieldValue1676);

Transform1642.addChild(&ProtoInstance1643);

ProtoInstance& ProtoInstance1678 =  ProtoInstance();
ProtoInstance1678.setName(CString("ra"));
ProtoInstance1678.setDEF(CString("qj"));
fieldValue& fieldValue1679 =  fieldValue();
fieldValue1679.setName(CString("cycleInterval"));
fieldValue1679.setValue(CString("4"));
ProtoInstance1678.addChild(&fieldValue1679);

fieldValue& fieldValue1680 =  fieldValue();
fieldValue1680.setName(CString("Ca"));
fieldValue1680.setValue(CString("3"));
ProtoInstance1678.addChild(&fieldValue1680);

fieldValue& fieldValue1681 =  fieldValue();
fieldValue1681.setName(CString("Da"));
fieldValue1681.setValue(CString("false"));
ProtoInstance1678.addChild(&fieldValue1681);

Transform1642.addChild(&ProtoInstance1678);

ProtoInstance& ProtoInstance1682 =  ProtoInstance();
ProtoInstance1682.setName(CString("nd"));
ProtoInstance1682.setDEF(CString("rj"));
fieldValue& fieldValue1683 =  fieldValue();
fieldValue1683.setName(CString("U"));
ProtoInstance& ProtoInstance1684 =  ProtoInstance();
ProtoInstance1684.setUSE(CString("lj"));
fieldValue1683.addChild(&ProtoInstance1684);

ProtoInstance1682.addChild(&fieldValue1683);

fieldValue& fieldValue1685 =  fieldValue();
fieldValue1685.setName(CString("hb"));
fieldValue1685.setValue(CString("true"));
ProtoInstance1682.addChild(&fieldValue1685);

fieldValue& fieldValue1686 =  fieldValue();
fieldValue1686.setName(CString("ib"));
fieldValue1686.setValue(CString("true"));
ProtoInstance1682.addChild(&fieldValue1686);

fieldValue& fieldValue1687 =  fieldValue();
fieldValue1687.setName(CString("pd"));
fieldValue1687.setValue(CString("true"));
ProtoInstance1682.addChild(&fieldValue1687);

fieldValue& fieldValue1688 =  fieldValue();
fieldValue1688.setName(CString("qd"));
fieldValue1688.setValue(CString("true"));
ProtoInstance1682.addChild(&fieldValue1688);

fieldValue& fieldValue1689 =  fieldValue();
fieldValue1689.setName(CString("rd"));
fieldValue1689.setValue(CString("true"));
ProtoInstance1682.addChild(&fieldValue1689);

fieldValue& fieldValue1690 =  fieldValue();
fieldValue1690.setName(CString("sd"));
fieldValue1690.setValue(CString("true"));
ProtoInstance1682.addChild(&fieldValue1690);

fieldValue& fieldValue1691 =  fieldValue();
fieldValue1691.setName(CString("td"));
fieldValue1691.setValue(CString("true"));
ProtoInstance1682.addChild(&fieldValue1691);

fieldValue& fieldValue1692 =  fieldValue();
fieldValue1692.setName(CString("vd"));
fieldValue1692.setValue(CString("true"));
ProtoInstance1682.addChild(&fieldValue1692);

fieldValue& fieldValue1693 =  fieldValue();
fieldValue1693.setName(CString("wd"));
fieldValue1693.setValue(CString("true"));
ProtoInstance1682.addChild(&fieldValue1693);

fieldValue& fieldValue1694 =  fieldValue();
fieldValue1694.setName(CString("xd"));
fieldValue1694.setValue(CString("true"));
ProtoInstance1682.addChild(&fieldValue1694);

fieldValue& fieldValue1695 =  fieldValue();
fieldValue1695.setName(CString("diffuseColor"));
fieldValue1695.setValue(CString("0.76 1 0.76"));
ProtoInstance1682.addChild(&fieldValue1695);

fieldValue& fieldValue1696 =  fieldValue();
fieldValue1696.setName(CString("emissiveColor"));
fieldValue1696.setValue(CString("0.04 0 0.06"));
ProtoInstance1682.addChild(&fieldValue1696);

fieldValue& fieldValue1697 =  fieldValue();
fieldValue1697.setName(CString("specularColor"));
fieldValue1697.setValue(CString("0 0 0"));
ProtoInstance1682.addChild(&fieldValue1697);

fieldValue& fieldValue1698 =  fieldValue();
fieldValue1698.setName(CString("shininess"));
fieldValue1698.setValue(CString("0"));
ProtoInstance1682.addChild(&fieldValue1698);

Transform1642.addChild(&ProtoInstance1682);

Transform1641.addChild(&Transform1642);

fieldValue1538.addChild(&Transform1641);

Transform& Transform1699 =  Transform();
Transform1699.setDEF(CString("sj"));
Transform1699.setTranslation(new float[]{1.264,-0.3495,0.7311});
Transform1699.setCenter(new float[]{1.639e-7,0.2337,-0.007482});
Transform& Transform1700 =  Transform();
Transform1700.setDEF(CString("tj"));
ProtoInstance& ProtoInstance1701 =  ProtoInstance();
ProtoInstance1701.setName(CString("je"));
ProtoInstance1701.setDEF(CString("uj"));
fieldValue& fieldValue1702 =  fieldValue();
fieldValue1702.setName(CString("oa"));
fieldValue1702.setValue(CString("1"));
ProtoInstance1701.addChild(&fieldValue1702);

Transform1700.addChild(&ProtoInstance1701);

ProtoInstance& ProtoInstance1703 =  ProtoInstance();
ProtoInstance1703.setName(CString("na"));
ProtoInstance1703.setDEF(CString("vj"));
fieldValue& fieldValue1704 =  fieldValue();
fieldValue1704.setName(CString("oa"));
fieldValue1704.setValue(CString("1"));
ProtoInstance1703.addChild(&fieldValue1704);

Transform1700.addChild(&ProtoInstance1703);

ProtoInstance& ProtoInstance1705 =  ProtoInstance();
ProtoInstance1705.setName(CString("o"));
ProtoInstance1705.setDEF(CString("wj"));
fieldValue& fieldValue1706 =  fieldValue();
fieldValue1706.setName(CString("B"));
ProtoInstance& ProtoInstance1707 =  ProtoInstance();
ProtoInstance1707.setUSE(CString("Li"));
fieldValue1706.addChild(&ProtoInstance1707);

ProtoInstance1705.addChild(&fieldValue1706);

fieldValue& fieldValue1708 =  fieldValue();
fieldValue1708.setName(CString("C"));
Transform& Transform1709 =  Transform();
Transform1709.setUSE(CString("sj"));
fieldValue1708.addChild(&Transform1709);

Transform& Transform1710 =  Transform();
Transform1710.setUSE(CString("tj"));
fieldValue1708.addChild(&Transform1710);

ProtoInstance1705.addChild(&fieldValue1708);

fieldValue& fieldValue1711 =  fieldValue();
fieldValue1711.setName(CString("children"));
Transform& Transform1712 =  Transform();
Transform1712.setDEF(CString("xj"));
Transform1712.setTranslation(new float[]{-0.3425,0.0,-0.004982});
Transform& Transform1713 =  Transform();
Transform1713.setDEF(CString("yj"));
Transform1713.setScale(new float[]{0.72,0.72,1.0});
ProtoInstance& ProtoInstance1714 =  ProtoInstance();
ProtoInstance1714.setName(CString("zb"));
ProtoInstance1714.setDEF(CString("zj"));
fieldValue& fieldValue1715 =  fieldValue();
fieldValue1715.setName(CString("url"));
fieldValue1715.setValue(CString("\"\""));
ProtoInstance1714.addChild(&fieldValue1715);

fieldValue& fieldValue1716 =  fieldValue();
fieldValue1716.setName(CString("emissiveColor"));
fieldValue1716.setValue(CString("0.1 0.02 0"));
ProtoInstance1714.addChild(&fieldValue1716);

fieldValue& fieldValue1717 =  fieldValue();
fieldValue1717.setName(CString("specularColor"));
fieldValue1717.setValue(CString("0.1 0.1 0.1"));
ProtoInstance1714.addChild(&fieldValue1717);

fieldValue& fieldValue1718 =  fieldValue();
fieldValue1718.setName(CString("shininess"));
fieldValue1718.setValue(CString("0.08"));
ProtoInstance1714.addChild(&fieldValue1718);

fieldValue& fieldValue1719 =  fieldValue();
fieldValue1719.setName(CString("Cb"));
fieldValue1719.setValue(CString("0.4848"));
ProtoInstance1714.addChild(&fieldValue1719);

fieldValue& fieldValue1720 =  fieldValue();
fieldValue1720.setName(CString("B"));
ProtoInstance& ProtoInstance1721 =  ProtoInstance();
ProtoInstance1721.setUSE(CString("wj"));
fieldValue1720.addChild(&ProtoInstance1721);

ProtoInstance1714.addChild(&fieldValue1720);

fieldValue& fieldValue1722 =  fieldValue();
fieldValue1722.setName(CString("C"));
Transform& Transform1723 =  Transform();
Transform1723.setUSE(CString("xj"));
fieldValue1722.addChild(&Transform1723);

Transform& Transform1724 =  Transform();
Transform1724.setUSE(CString("yj"));
fieldValue1722.addChild(&Transform1724);

ProtoInstance1714.addChild(&fieldValue1722);

fieldValue& fieldValue1725 =  fieldValue();
fieldValue1725.setName(CString("Fb"));
fieldValue1725.setValue(CString("true"));
ProtoInstance1714.addChild(&fieldValue1725);

fieldValue& fieldValue1726 =  fieldValue();
fieldValue1726.setName(CString("Gb"));
fieldValue1726.setValue(CString("false"));
ProtoInstance1714.addChild(&fieldValue1726);

fieldValue& fieldValue1727 =  fieldValue();
fieldValue1727.setName(CString("Hb"));
fieldValue1727.setValue(CString("0.03214 -0.006429"));
ProtoInstance1714.addChild(&fieldValue1727);

fieldValue& fieldValue1728 =  fieldValue();
fieldValue1728.setName(CString("Ib"));
fieldValue1728.setValue(CString("0.9193 0.6557"));
ProtoInstance1714.addChild(&fieldValue1728);

fieldValue& fieldValue1729 =  fieldValue();
fieldValue1729.setName(CString("Mb"));
ProtoInstance& ProtoInstance1730 =  ProtoInstance();
ProtoInstance1730.setName(CString("md"));
ProtoInstance1730.setDEF(CString("Aj"));
fieldValue& fieldValue1731 =  fieldValue();
fieldValue1731.setName(CString("coord"));
fieldValue1731.setValue(CString("0.3793 0.07071 0 0.1221 0.07071 0 0.1479 0.1157 0 0.1736 0.1479 0 0.2186 0.1993 0 0.2636 0.2443 0 0.2957 0.2893 0 0.3471 0.3536 0 0.3664 0.4114 0 0.3793 0.4757 0 0.3664 0.54 0 0.3343 0.6043 0 0.315 0.63 0 0.2507 0.6557 0 0.2121 0.6557 0 0.1479 0.6493 0 0.09643 0.6107 0 0.05786 0.5464 0 0.045 0.4629 0 0.1093 0.4564 0 0.1157 0.5143 0 0.135 0.5593 0 0.1671 0.585 0 0.2121 0.5914 0 0.2507 0.585 0 0.2829 0.5593 0 0.3021 0.5271 0 0.315 0.4821 0 0.3021 0.4307 0 0.2829 0.3857 0 0.2636 0.3536 0 0.2379 0.3214 0 0.2057 0.2829 0 0.1671 0.2379 0 0.09643 0.1671 0 0.05786 0.1029 0 0.03857 0.05143 0 0.03214 0 0 0.3793 0 0"));
ProtoInstance1730.addChild(&fieldValue1731);

fieldValue& fieldValue1732 =  fieldValue();
fieldValue1732.setName(CString("coordIndex"));
fieldValue1732.setValue(CString("38 36 37 -1 36 38 1 -1 36 1 35 -1 35 1 34 -1 1 38 0 -1 1 33 34 -1 33 1 2 -1 33 2 3 -1 33 3 32 -1 32 3 4 -1 32 4 31 -1 31 4 5 -1 31 5 30 -1 30 5 6 -1 30 6 29 -1 29 6 28 -1 28 6 7 -1 28 7 27 -1 27 7 12 -1 12 7 11 -1 11 7 10 -1 10 7 8 -1 10 8 9 -1 19 17 18 -1 17 19 16 -1 16 19 20 -1 16 20 15 -1 15 20 21 -1 15 21 22 -1 15 22 14 -1 14 22 23 -1 14 23 24 -1 14 24 13 -1 13 24 25 -1 13 25 12 -1 12 25 26 -1 12 26 27 -1"));
ProtoInstance1730.addChild(&fieldValue1732);

fieldValue& fieldValue1733 =  fieldValue();
fieldValue1733.setName(CString("mc"));
fieldValue1733.setValue(CString("0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 -1"));
ProtoInstance1730.addChild(&fieldValue1733);

fieldValue1729.addChild(&ProtoInstance1730);

ProtoInstance1714.addChild(&fieldValue1729);

fieldValue& fieldValue1734 =  fieldValue();
fieldValue1734.setName(CString("Ob"));
fieldValue1734.setValue(CString("0.04"));
ProtoInstance1714.addChild(&fieldValue1734);

fieldValue& fieldValue1735 =  fieldValue();
fieldValue1735.setName(CString("Pb"));
fieldValue1735.setValue(CString("0.1389"));
ProtoInstance1714.addChild(&fieldValue1735);

fieldValue& fieldValue1736 =  fieldValue();
fieldValue1736.setName(CString("creaseAngle"));
fieldValue1736.setValue(CString("0"));
ProtoInstance1714.addChild(&fieldValue1736);

fieldValue& fieldValue1737 =  fieldValue();
fieldValue1737.setName(CString("diffuseColor"));
fieldValue1737.setValue(CString("0.9 0.15 0"));
ProtoInstance1714.addChild(&fieldValue1737);

Transform1713.addChild(&ProtoInstance1714);

Transform1712.addChild(&Transform1713);

fieldValue1711.addChild(&Transform1712);

Transform& Transform1738 =  Transform();
Transform1738.setDEF(CString("Bj"));
Transform1738.setTranslation(new float[]{-0.07406,0.0,-0.009982});
Transform& Transform1739 =  Transform();
Transform1739.setDEF(CString("Cj"));
Transform1739.setScale(new float[]{0.72,0.72,1.0});
ProtoInstance& ProtoInstance1740 =  ProtoInstance();
ProtoInstance1740.setName(CString("zb"));
ProtoInstance1740.setDEF(CString("Dj"));
fieldValue& fieldValue1741 =  fieldValue();
fieldValue1741.setName(CString("url"));
fieldValue1741.setValue(CString("\"\""));
ProtoInstance1740.addChild(&fieldValue1741);

fieldValue& fieldValue1742 =  fieldValue();
fieldValue1742.setName(CString("emissiveColor"));
fieldValue1742.setValue(CString("0.1 0.02 0"));
ProtoInstance1740.addChild(&fieldValue1742);

fieldValue& fieldValue1743 =  fieldValue();
fieldValue1743.setName(CString("specularColor"));
fieldValue1743.setValue(CString("0.1 0.1 0.1"));
ProtoInstance1740.addChild(&fieldValue1743);

fieldValue& fieldValue1744 =  fieldValue();
fieldValue1744.setName(CString("shininess"));
fieldValue1744.setValue(CString("0.08"));
ProtoInstance1740.addChild(&fieldValue1744);

fieldValue& fieldValue1745 =  fieldValue();
fieldValue1745.setName(CString("Cb"));
fieldValue1745.setValue(CString("0.4848"));
ProtoInstance1740.addChild(&fieldValue1745);

fieldValue& fieldValue1746 =  fieldValue();
fieldValue1746.setName(CString("B"));
ProtoInstance& ProtoInstance1747 =  ProtoInstance();
ProtoInstance1747.setUSE(CString("wj"));
fieldValue1746.addChild(&ProtoInstance1747);

ProtoInstance1740.addChild(&fieldValue1746);

fieldValue& fieldValue1748 =  fieldValue();
fieldValue1748.setName(CString("C"));
Transform& Transform1749 =  Transform();
Transform1749.setUSE(CString("Bj"));
fieldValue1748.addChild(&Transform1749);

Transform& Transform1750 =  Transform();
Transform1750.setUSE(CString("Cj"));
fieldValue1748.addChild(&Transform1750);

ProtoInstance1740.addChild(&fieldValue1748);

fieldValue& fieldValue1751 =  fieldValue();
fieldValue1751.setName(CString("Fb"));
fieldValue1751.setValue(CString("true"));
ProtoInstance1740.addChild(&fieldValue1751);

fieldValue& fieldValue1752 =  fieldValue();
fieldValue1752.setName(CString("Gb"));
fieldValue1752.setValue(CString("false"));
ProtoInstance1740.addChild(&fieldValue1752);

fieldValue& fieldValue1753 =  fieldValue();
fieldValue1753.setName(CString("Hb"));
fieldValue1753.setValue(CString("-0.3407 -0.006429"));
ProtoInstance1740.addChild(&fieldValue1753);

fieldValue& fieldValue1754 =  fieldValue();
fieldValue1754.setName(CString("Ib"));
fieldValue1754.setValue(CString("0.5464 0.6557"));
ProtoInstance1740.addChild(&fieldValue1754);

fieldValue& fieldValue1755 =  fieldValue();
fieldValue1755.setName(CString("Mb"));
ProtoInstance& ProtoInstance1756 =  ProtoInstance();
ProtoInstance1756.setName(CString("md"));
ProtoInstance1756.setDEF(CString("Ej"));
fieldValue& fieldValue1757 =  fieldValue();
fieldValue1757.setName(CString("coord"));
fieldValue1757.setValue(CString("0.06429 0 0 0.135 0 0 0.135 0.09 0 0.06429 0.09 0"));
ProtoInstance1756.addChild(&fieldValue1757);

fieldValue& fieldValue1758 =  fieldValue();
fieldValue1758.setName(CString("coordIndex"));
fieldValue1758.setValue(CString("1 3 0 -1 3 1 2 -1"));
ProtoInstance1756.addChild(&fieldValue1758);

fieldValue& fieldValue1759 =  fieldValue();
fieldValue1759.setName(CString("mc"));
fieldValue1759.setValue(CString("0 1 2 3 -1"));
ProtoInstance1756.addChild(&fieldValue1759);

fieldValue1755.addChild(&ProtoInstance1756);

ProtoInstance1740.addChild(&fieldValue1755);

fieldValue& fieldValue1760 =  fieldValue();
fieldValue1760.setName(CString("Ob"));
fieldValue1760.setValue(CString("0.04"));
ProtoInstance1740.addChild(&fieldValue1760);

fieldValue& fieldValue1761 =  fieldValue();
fieldValue1761.setName(CString("Pb"));
fieldValue1761.setValue(CString("0.1389"));
ProtoInstance1740.addChild(&fieldValue1761);

fieldValue& fieldValue1762 =  fieldValue();
fieldValue1762.setName(CString("creaseAngle"));
fieldValue1762.setValue(CString("0"));
ProtoInstance1740.addChild(&fieldValue1762);

fieldValue& fieldValue1763 =  fieldValue();
fieldValue1763.setName(CString("diffuseColor"));
fieldValue1763.setValue(CString("0.9 0.15 0"));
ProtoInstance1740.addChild(&fieldValue1763);

Transform1739.addChild(&ProtoInstance1740);

Transform1738.addChild(&Transform1739);

fieldValue1711.addChild(&Transform1738);

Transform& Transform1764 =  Transform();
Transform1764.setDEF(CString("Fj"));
Transform1764.setTranslation(new float[]{0.04629,0.0,-0.005});
Transform& Transform1765 =  Transform();
Transform1765.setDEF(CString("Gj"));
Transform1765.setScale(new float[]{0.72,0.72,1.0});
ProtoInstance& ProtoInstance1766 =  ProtoInstance();
ProtoInstance1766.setName(CString("zb"));
ProtoInstance1766.setDEF(CString("Hj"));
fieldValue& fieldValue1767 =  fieldValue();
fieldValue1767.setName(CString("url"));
fieldValue1767.setValue(CString("\"\""));
ProtoInstance1766.addChild(&fieldValue1767);

fieldValue& fieldValue1768 =  fieldValue();
fieldValue1768.setName(CString("emissiveColor"));
fieldValue1768.setValue(CString("0.1 0.02 0"));
ProtoInstance1766.addChild(&fieldValue1768);

fieldValue& fieldValue1769 =  fieldValue();
fieldValue1769.setName(CString("specularColor"));
fieldValue1769.setValue(CString("0.1 0.1 0.1"));
ProtoInstance1766.addChild(&fieldValue1769);

fieldValue& fieldValue1770 =  fieldValue();
fieldValue1770.setName(CString("shininess"));
fieldValue1770.setValue(CString("0.08"));
ProtoInstance1766.addChild(&fieldValue1770);

fieldValue& fieldValue1771 =  fieldValue();
fieldValue1771.setName(CString("Cb"));
fieldValue1771.setValue(CString("0.4848"));
ProtoInstance1766.addChild(&fieldValue1771);

fieldValue& fieldValue1772 =  fieldValue();
fieldValue1772.setName(CString("B"));
ProtoInstance& ProtoInstance1773 =  ProtoInstance();
ProtoInstance1773.setUSE(CString("wj"));
fieldValue1772.addChild(&ProtoInstance1773);

ProtoInstance1766.addChild(&fieldValue1772);

fieldValue& fieldValue1774 =  fieldValue();
fieldValue1774.setName(CString("C"));
Transform& Transform1775 =  Transform();
Transform1775.setUSE(CString("Fj"));
fieldValue1774.addChild(&Transform1775);

Transform& Transform1776 =  Transform();
Transform1776.setUSE(CString("Gj"));
fieldValue1774.addChild(&Transform1776);

ProtoInstance1766.addChild(&fieldValue1774);

fieldValue& fieldValue1777 =  fieldValue();
fieldValue1777.setName(CString("Fb"));
fieldValue1777.setValue(CString("true"));
ProtoInstance1766.addChild(&fieldValue1777);

fieldValue& fieldValue1778 =  fieldValue();
fieldValue1778.setName(CString("Gb"));
fieldValue1778.setValue(CString("false"));
ProtoInstance1766.addChild(&fieldValue1778);

fieldValue& fieldValue1779 =  fieldValue();
fieldValue1779.setName(CString("Hb"));
fieldValue1779.setValue(CString("-0.5079 -0.006429"));
ProtoInstance1766.addChild(&fieldValue1779);

fieldValue& fieldValue1780 =  fieldValue();
fieldValue1780.setName(CString("Ib"));
fieldValue1780.setValue(CString("0.3793 0.6557"));
ProtoInstance1766.addChild(&fieldValue1780);

fieldValue& fieldValue1781 =  fieldValue();
fieldValue1781.setName(CString("Mb"));
ProtoInstance& ProtoInstance1782 =  ProtoInstance();
ProtoInstance1782.setName(CString("md"));
ProtoInstance1782.setDEF(CString("Ij"));
fieldValue& fieldValue1783 =  fieldValue();
fieldValue1783.setName(CString("coord"));
fieldValue1783.setValue(CString("0.09643 0.3986 0 0.1029 0.4564 0 0.1093 0.5079 0 0.1221 0.54 0 0.1414 0.5657 0 0.18 0.5914 0 0.225 0.5914 0 0.2636 0.5657 0 0.2829 0.54 0 0.2957 0.5079 0 0.3021 0.4629 0 0.3086 0.3986 0 0.315 0.3279 0 0.3086 0.2571 0 0.3021 0.1929 0 0.2957 0.1479 0 0.2829 0.1157 0 0.2636 0.09 0 0.225 0.06429 0 0.2057 0.05786 0 0.18 0.06429 0 0.1414 0.09 0 0.1221 0.1157 0 0.1093 0.1479 0 0.1029 0.1929 0 0.09643 0.2571 0 0.03214 0.2443 0 0.03857 0.1736 0 0.05786 0.1157 0 0.07714 0.07071 0 0.1029 0.03857 0 0.135 0.01286 0 0.1671 0 0 0.1993 -0.006429 0 0.2443 0 0 0.2764 0.01929 0 0.3086 0.045 0 0.3343 0.08357 0 0.3536 0.1286 0 0.3664 0.1864 0 0.3729 0.2507 0 0.3793 0.3279 0 0.3729 0.4114 0 0.36 0.4821 0 0.3471 0.54 0 0.3214 0.5914 0 0.3021 0.6171 0 0.27 0.6429 0 0.2379 0.6557 0 0.1607 0.6557 0 0.1286 0.6364 0 0.09643 0.6107 0 0.07071 0.5721 0 0.05143 0.5271 0 0.03857 0.4693 0 0.03214 0.405 0"));
ProtoInstance1782.addChild(&fieldValue1783);

fieldValue& fieldValue1784 =  fieldValue();
fieldValue1784.setName(CString("coordIndex"));
fieldValue1784.setValue(CString("30 25 29 -1 25 30 24 -1 24 30 23 -1 23 30 31 -1 23 31 22 -1 22 31 21 -1 21 31 32 -1 21 32 20 -1 20 32 33 -1 20 33 19 -1 19 33 34 -1 19 34 18 -1 18 34 17 -1 17 34 35 -1 17 35 16 -1 16 35 36 -1 16 36 15 -1 15 36 14 -1 14 36 13 -1 13 36 37 -1 13 37 12 -1 12 37 45 -1 45 37 44 -1 44 37 38 -1 44 38 43 -1 43 38 39 -1 43 39 42 -1 42 39 40 -1 42 40 41 -1 27 55 26 -1 55 27 54 -1 54 27 28 -1 54 28 53 -1 53 28 52 -1 52 28 29 -1 52 29 51 -1 51 29 25 -1 51 25 0 -1 51 0 1 -1 51 1 2 -1 51 2 50 -1 50 2 3 -1 50 3 4 -1 50 4 49 -1 49 4 5 -1 49 5 48 -1 48 5 6 -1 48 6 7 -1 48 7 47 -1 47 7 8 -1 47 8 46 -1 46 8 9 -1 46 9 10 -1 46 10 11 -1 46 11 45 -1 45 11 12 -1"));
ProtoInstance1782.addChild(&fieldValue1784);

fieldValue& fieldValue1785 =  fieldValue();
fieldValue1785.setName(CString("mc"));
fieldValue1785.setValue(CString("0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 -1 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 -1"));
ProtoInstance1782.addChild(&fieldValue1785);

fieldValue1781.addChild(&ProtoInstance1782);

ProtoInstance1766.addChild(&fieldValue1781);

fieldValue& fieldValue1786 =  fieldValue();
fieldValue1786.setName(CString("Ob"));
fieldValue1786.setValue(CString("0.04"));
ProtoInstance1766.addChild(&fieldValue1786);

fieldValue& fieldValue1787 =  fieldValue();
fieldValue1787.setName(CString("Pb"));
fieldValue1787.setValue(CString("0.1389"));
ProtoInstance1766.addChild(&fieldValue1787);

fieldValue& fieldValue1788 =  fieldValue();
fieldValue1788.setName(CString("creaseAngle"));
fieldValue1788.setValue(CString("0"));
ProtoInstance1766.addChild(&fieldValue1788);

fieldValue& fieldValue1789 =  fieldValue();
fieldValue1789.setName(CString("diffuseColor"));
fieldValue1789.setValue(CString("0.9 0.15 0"));
ProtoInstance1766.addChild(&fieldValue1789);

Transform1765.addChild(&ProtoInstance1766);

Transform1764.addChild(&Transform1765);

fieldValue1711.addChild(&Transform1764);

ProtoInstance1705.addChild(&fieldValue1711);

fieldValue& fieldValue1790 =  fieldValue();
fieldValue1790.setName(CString("A"));
ProtoInstance& ProtoInstance1791 =  ProtoInstance();
ProtoInstance1791.setUSE(CString("zj"));
fieldValue1790.addChild(&ProtoInstance1791);

ProtoInstance& ProtoInstance1792 =  ProtoInstance();
ProtoInstance1792.setUSE(CString("Dj"));
fieldValue1790.addChild(&ProtoInstance1792);

ProtoInstance& ProtoInstance1793 =  ProtoInstance();
ProtoInstance1793.setUSE(CString("Hj"));
fieldValue1790.addChild(&ProtoInstance1793);

ProtoInstance1705.addChild(&fieldValue1790);

Transform1700.addChild(&ProtoInstance1705);

ProtoInstance& ProtoInstance1794 =  ProtoInstance();
ProtoInstance1794.setName(CString("me"));
ProtoInstance1794.setDEF(CString("Jj"));
fieldValue& fieldValue1795 =  fieldValue();
fieldValue1795.setName(CString("re"));
Transform& Transform1796 =  Transform();
Transform1796.setUSE(CString("sj"));
fieldValue1795.addChild(&Transform1796);

ProtoInstance1794.addChild(&fieldValue1795);

Transform1700.addChild(&ProtoInstance1794);

ProtoInstance& ProtoInstance1797 =  ProtoInstance();
ProtoInstance1797.setName(CString("xe"));
ProtoInstance1797.setDEF(CString("Kj"));
fieldValue& fieldValue1798 =  fieldValue();
fieldValue1798.setName(CString("ye"));
ProtoInstance& ProtoInstance1799 =  ProtoInstance();
ProtoInstance1799.setUSE(CString("Jj"));
fieldValue1798.addChild(&ProtoInstance1799);

ProtoInstance1797.addChild(&fieldValue1798);

fieldValue& fieldValue1800 =  fieldValue();
fieldValue1800.setName(CString("ze"));
ProtoInstance& ProtoInstance1801 =  ProtoInstance();
ProtoInstance1801.setUSE(CString("Jj"));
fieldValue1800.addChild(&ProtoInstance1801);

ProtoInstance1797.addChild(&fieldValue1800);

fieldValue& fieldValue1802 =  fieldValue();
fieldValue1802.setName(CString("Ae"));
ProtoInstance& ProtoInstance1803 =  ProtoInstance();
ProtoInstance1803.setUSE(CString("wj"));
fieldValue1802.addChild(&ProtoInstance1803);

ProtoInstance1797.addChild(&fieldValue1802);

fieldValue& fieldValue1804 =  fieldValue();
fieldValue1804.setName(CString("Ce"));
fieldValue1804.setValue(CString("86"));
ProtoInstance1797.addChild(&fieldValue1804);

Transform1700.addChild(&ProtoInstance1797);

ProtoInstance& ProtoInstance1805 =  ProtoInstance();
ProtoInstance1805.setName(CString("nb"));
ProtoInstance1805.setDEF(CString("Lj"));
Transform1700.addChild(&ProtoInstance1805);

ProtoInstance& ProtoInstance1806 =  ProtoInstance();
ProtoInstance1806.setName(CString("ra"));
ProtoInstance1806.setDEF(CString("Mj"));
fieldValue& fieldValue1807 =  fieldValue();
fieldValue1807.setName(CString("Da"));
fieldValue1807.setValue(CString("false"));
ProtoInstance1806.addChild(&fieldValue1807);

fieldValue& fieldValue1808 =  fieldValue();
fieldValue1808.setName(CString("Fa"));
fieldValue1808.setValue(CString("0.5"));
ProtoInstance1806.addChild(&fieldValue1808);

Transform1700.addChild(&ProtoInstance1806);

ProtoInstance& ProtoInstance1809 =  ProtoInstance();
ProtoInstance1809.setName(CString("Ge"));
ProtoInstance1809.setDEF(CString("Nj"));
fieldValue& fieldValue1810 =  fieldValue();
fieldValue1810.setName(CString("center"));
fieldValue1810.setValue(CString("1.639e-7 0.2337 -0.007482"));
ProtoInstance1809.addChild(&fieldValue1810);

fieldValue& fieldValue1811 =  fieldValue();
fieldValue1811.setName(CString("U"));
ProtoInstance& ProtoInstance1812 =  ProtoInstance();
ProtoInstance1812.setUSE(CString("wj"));
fieldValue1811.addChild(&ProtoInstance1812);

ProtoInstance1809.addChild(&fieldValue1811);

Transform1700.addChild(&ProtoInstance1809);

ProtoInstance& ProtoInstance1813 =  ProtoInstance();
ProtoInstance1813.setName(CString("xe"));
ProtoInstance1813.setDEF(CString("Oj"));
fieldValue& fieldValue1814 =  fieldValue();
fieldValue1814.setName(CString("ye"));
ProtoInstance& ProtoInstance1815 =  ProtoInstance();
ProtoInstance1815.setUSE(CString("Nj"));
fieldValue1814.addChild(&ProtoInstance1815);

ProtoInstance1813.addChild(&fieldValue1814);

fieldValue& fieldValue1816 =  fieldValue();
fieldValue1816.setName(CString("ze"));
ProtoInstance& ProtoInstance1817 =  ProtoInstance();
ProtoInstance1817.setUSE(CString("Mj"));
fieldValue1816.addChild(&ProtoInstance1817);

ProtoInstance1813.addChild(&fieldValue1816);

fieldValue& fieldValue1818 =  fieldValue();
fieldValue1818.setName(CString("Ae"));
ProtoInstance& ProtoInstance1819 =  ProtoInstance();
ProtoInstance1819.setUSE(CString("wj"));
fieldValue1818.addChild(&ProtoInstance1819);

ProtoInstance1813.addChild(&fieldValue1818);

fieldValue& fieldValue1820 =  fieldValue();
fieldValue1820.setName(CString("Ce"));
fieldValue1820.setValue(CString("90"));
ProtoInstance1813.addChild(&fieldValue1820);

Transform1700.addChild(&ProtoInstance1813);

Transform1699.addChild(&Transform1700);

fieldValue1538.addChild(&Transform1699);

Transform& Transform1821 =  Transform();
Transform1821.setDEF(CString("Pj"));
Transform1821.setTranslation(new float[]{0.3736,-0.7009,0.7521});
Transform1821.setRotation(new float[]{1.0,0.0,0.0,3.13});
Transform1821.setCenter(new float[]{0.253,0.2677,0.0});
ProtoInstance& ProtoInstance1822 =  ProtoInstance();
ProtoInstance1822.setName(CString("hf"));
ProtoInstance1822.setDEF(CString("Qj"));
fieldValue& fieldValue1823 =  fieldValue();
fieldValue1823.setName(CString("center"));
fieldValue1823.setValue(CString("0.253 0.2677 0"));
ProtoInstance1822.addChild(&fieldValue1823);

fieldValue& fieldValue1824 =  fieldValue();
fieldValue1824.setName(CString("children"));
Transform& Transform1825 =  Transform();
Transform1825.setDEF(CString("Rj"));
Transform1825.setScale(new float[]{0.1293,0.7015,0.1824});
ProtoInstance& ProtoInstance1826 =  ProtoInstance();
ProtoInstance1826.setName(CString("ga"));
ProtoInstance1826.setDEF(CString("Sj"));
fieldValue& fieldValue1827 =  fieldValue();
fieldValue1827.setName(CString("url"));
fieldValue1827.setValue(CString("\"\""));
ProtoInstance1826.addChild(&fieldValue1827);

fieldValue& fieldValue1828 =  fieldValue();
fieldValue1828.setName(CString("diffuseColor"));
fieldValue1828.setValue(CString("0.8 0.8 0"));
ProtoInstance1826.addChild(&fieldValue1828);

fieldValue& fieldValue1829 =  fieldValue();
fieldValue1829.setName(CString("emissiveColor"));
fieldValue1829.setValue(CString("0.15 0.15 0"));
ProtoInstance1826.addChild(&fieldValue1829);

fieldValue& fieldValue1830 =  fieldValue();
fieldValue1830.setName(CString("B"));
ProtoInstance& ProtoInstance1831 =  ProtoInstance();
ProtoInstance1831.setUSE(CString("Li"));
fieldValue1830.addChild(&ProtoInstance1831);

ProtoInstance1826.addChild(&fieldValue1830);

fieldValue& fieldValue1832 =  fieldValue();
fieldValue1832.setName(CString("C"));
Transform& Transform1833 =  Transform();
Transform1833.setUSE(CString("Pj"));
fieldValue1832.addChild(&Transform1833);

ProtoInstance& ProtoInstance1834 =  ProtoInstance();
ProtoInstance1834.setUSE(CString("Qj"));
fieldValue1832.addChild(&ProtoInstance1834);

Transform& Transform1835 =  Transform();
Transform1835.setUSE(CString("Rj"));
fieldValue1832.addChild(&Transform1835);

ProtoInstance1826.addChild(&fieldValue1832);

fieldValue& fieldValue1836 =  fieldValue();
fieldValue1836.setName(CString("geometry"));
Cone& Cone1837 =  Cone();
Cone1837.setDEF(CString("_5"));
Cone1837.setHeight(1);
Cone1837.setBottomRadius(0.5);
fieldValue1836.addChild(Cone1837);

ProtoInstance1826.addChild(&fieldValue1836);

fieldValue& fieldValue1838 =  fieldValue();
fieldValue1838.setName(CString("ha"));
fieldValue1838.setValue(CString("0 0 0.25"));
ProtoInstance1826.addChild(&fieldValue1838);

Transform1825.addChild(&ProtoInstance1826);

ProtoInstance& ProtoInstance1839 =  ProtoInstance();
ProtoInstance1839.setName(CString("ra"));
ProtoInstance1839.setDEF(CString("Tj"));
fieldValue& fieldValue1840 =  fieldValue();
fieldValue1840.setName(CString("Da"));
fieldValue1840.setValue(CString("false"));
ProtoInstance1839.addChild(&fieldValue1840);

Transform1825.addChild(&ProtoInstance1839);

fieldValue1824.addChild(&Transform1825);

ProtoInstance1822.addChild(&fieldValue1824);

fieldValue& fieldValue1841 =  fieldValue();
fieldValue1841.setName(CString("U"));
ProtoInstance& ProtoInstance1842 =  ProtoInstance();
ProtoInstance1842.setUSE(CString("Sj"));
fieldValue1841.addChild(&ProtoInstance1842);

ProtoInstance1822.addChild(&fieldValue1841);

fieldValue& fieldValue1843 =  fieldValue();
fieldValue1843.setName(CString("kf"));
fieldValue1843.setValue(CString("17"));
ProtoInstance1822.addChild(&fieldValue1843);

fieldValue& fieldValue1844 =  fieldValue();
fieldValue1844.setName(CString("lf"));
fieldValue1844.setValue(CString("0.6"));
ProtoInstance1822.addChild(&fieldValue1844);

Transform1821.addChild(&ProtoInstance1822);

fieldValue1538.addChild(&Transform1821);

Transform& Transform1845 =  Transform();
Transform1845.setDEF(CString("Uj"));
Transform1845.setTranslation(new float[]{0.5037,-0.3512,0.749});
Transform1845.setRotation(new float[]{0.767059,-0.641566,0.0036798,3.133});
Transform1845.setScaleOrientation(new float[]{0.1555,-0.1734,-0.972498,0.7118});
Transform1845.setCenter(new float[]{0.0,0.0,-2.608e-8});
ProtoInstance& ProtoInstance1846 =  ProtoInstance();
ProtoInstance1846.setName(CString("hf"));
ProtoInstance1846.setDEF(CString("Vj"));
fieldValue& fieldValue1847 =  fieldValue();
fieldValue1847.setName(CString("center"));
fieldValue1847.setValue(CString("0 0 -2.608e-8"));
ProtoInstance1846.addChild(&fieldValue1847);

fieldValue& fieldValue1848 =  fieldValue();
fieldValue1848.setName(CString("children"));
Transform& Transform1849 =  Transform();
Transform1849.setDEF(CString("Wj"));
Transform1849.setScale(new float[]{0.1583,0.4654,0.1583});
ProtoInstance& ProtoInstance1850 =  ProtoInstance();
ProtoInstance1850.setName(CString("ga"));
ProtoInstance1850.setDEF(CString("Xj"));
fieldValue& fieldValue1851 =  fieldValue();
fieldValue1851.setName(CString("url"));
fieldValue1851.setValue(CString("\"\""));
ProtoInstance1850.addChild(&fieldValue1851);

fieldValue& fieldValue1852 =  fieldValue();
fieldValue1852.setName(CString("diffuseColor"));
fieldValue1852.setValue(CString("0.8 0.8 0"));
ProtoInstance1850.addChild(&fieldValue1852);

fieldValue& fieldValue1853 =  fieldValue();
fieldValue1853.setName(CString("emissiveColor"));
fieldValue1853.setValue(CString("0.15 0.15 0"));
ProtoInstance1850.addChild(&fieldValue1853);

fieldValue& fieldValue1854 =  fieldValue();
fieldValue1854.setName(CString("B"));
ProtoInstance& ProtoInstance1855 =  ProtoInstance();
ProtoInstance1855.setUSE(CString("Li"));
fieldValue1854.addChild(&ProtoInstance1855);

ProtoInstance1850.addChild(&fieldValue1854);

fieldValue& fieldValue1856 =  fieldValue();
fieldValue1856.setName(CString("C"));
Transform& Transform1857 =  Transform();
Transform1857.setUSE(CString("Uj"));
fieldValue1856.addChild(&Transform1857);

ProtoInstance& ProtoInstance1858 =  ProtoInstance();
ProtoInstance1858.setUSE(CString("Vj"));
fieldValue1856.addChild(&ProtoInstance1858);

Transform& Transform1859 =  Transform();
Transform1859.setUSE(CString("Wj"));
fieldValue1856.addChild(&Transform1859);

ProtoInstance1850.addChild(&fieldValue1856);

fieldValue& fieldValue1860 =  fieldValue();
fieldValue1860.setName(CString("geometry"));
Cone& Cone1861 =  Cone();
Cone1861.setDEF(CString("_6"));
Cone1861.setHeight(1);
Cone1861.setBottomRadius(0.5);
fieldValue1860.addChild(Cone1861);

ProtoInstance1850.addChild(&fieldValue1860);

fieldValue& fieldValue1862 =  fieldValue();
fieldValue1862.setName(CString("ha"));
fieldValue1862.setValue(CString("0 0 0.25"));
ProtoInstance1850.addChild(&fieldValue1862);

Transform1849.addChild(&ProtoInstance1850);

ProtoInstance& ProtoInstance1863 =  ProtoInstance();
ProtoInstance1863.setName(CString("ra"));
ProtoInstance1863.setDEF(CString("Yj"));
fieldValue& fieldValue1864 =  fieldValue();
fieldValue1864.setName(CString("Da"));
fieldValue1864.setValue(CString("false"));
ProtoInstance1863.addChild(&fieldValue1864);

Transform1849.addChild(&ProtoInstance1863);

fieldValue1848.addChild(&Transform1849);

ProtoInstance1846.addChild(&fieldValue1848);

fieldValue& fieldValue1865 =  fieldValue();
fieldValue1865.setName(CString("U"));
ProtoInstance& ProtoInstance1866 =  ProtoInstance();
ProtoInstance1866.setUSE(CString("Xj"));
fieldValue1865.addChild(&ProtoInstance1866);

ProtoInstance1846.addChild(&fieldValue1865);

fieldValue& fieldValue1867 =  fieldValue();
fieldValue1867.setName(CString("kf"));
fieldValue1867.setValue(CString("4"));
ProtoInstance1846.addChild(&fieldValue1867);

fieldValue& fieldValue1868 =  fieldValue();
fieldValue1868.setName(CString("lf"));
fieldValue1868.setValue(CString("0.5"));
ProtoInstance1846.addChild(&fieldValue1868);

Transform1845.addChild(&ProtoInstance1846);

fieldValue1538.addChild(&Transform1845);

Transform& Transform1869 =  Transform();
Transform1869.setDEF(CString("Zj"));
Transform1869.setTranslation(new float[]{-0.1469,-0.05878,1.385});
Transform1869.setRotation(new float[]{0.97098,-0.144597,-0.190496,4.532});
Transform1869.setCenter(new float[]{0.0,0.0,1.49e-8});
Transform& Transform1870 =  Transform();
Transform1870.setDEF(CString("ak"));
ProtoInstance& ProtoInstance1871 =  ProtoInstance();
ProtoInstance1871.setName(CString("yf"));
ProtoInstance1871.setDEF(CString("bk"));
fieldValue& fieldValue1872 =  fieldValue();
fieldValue1872.setName(CString("B"));
ProtoInstance& ProtoInstance1873 =  ProtoInstance();
ProtoInstance1873.setUSE(CString("Li"));
fieldValue1872.addChild(&ProtoInstance1873);

ProtoInstance1871.addChild(&fieldValue1872);

fieldValue& fieldValue1874 =  fieldValue();
fieldValue1874.setName(CString("C"));
Transform& Transform1875 =  Transform();
Transform1875.setUSE(CString("Zj"));
fieldValue1874.addChild(&Transform1875);

Transform& Transform1876 =  Transform();
Transform1876.setUSE(CString("ak"));
fieldValue1874.addChild(&Transform1876);

ProtoInstance1871.addChild(&fieldValue1874);

fieldValue& fieldValue1877 =  fieldValue();
fieldValue1877.setName(CString("point"));
fieldValue1877.setValue(CString("-0.7965 -0.8007 0 -0.7965 0 0 -0.7965 0.8007 0 -0.4399 1.45 0 0 1.45 0 0.4399 1.45 0 0.7965 0.8007 0 0.7965 0 0 0.7965 -0.8007 0 0.4399 -1.45 0 0 -1.45 0 -0.4399 -1.45 0"));
ProtoInstance1871.addChild(&fieldValue1877);

fieldValue& fieldValue1878 =  fieldValue();
fieldValue1878.setName(CString("zf"));
fieldValue1878.setValue(CString("1 0 2 1 0 2 1 0 2 1 0 2"));
ProtoInstance1871.addChild(&fieldValue1878);

fieldValue& fieldValue1879 =  fieldValue();
fieldValue1879.setName(CString("Sd"));
fieldValue1879.setValue(CString("0 0.25 0.5 0.75 1"));
ProtoInstance1871.addChild(&fieldValue1879);

fieldValue& fieldValue1880 =  fieldValue();
fieldValue1880.setName(CString("Af"));
fieldValue1880.setValue(CString("0 0 0.3311 0.263 0.5893 0.5 0.7889 0.72 1 1 0 0 0.2111 0.28 0.4107 0.5 0.6689 0.737 1 1 0 0 0.3311 0.263 0.5893 0.5 0.7889 0.72 1 1 0 0 0.2111 0.28 0.4107 0.5 0.6689 0.737 1 1"));
ProtoInstance1871.addChild(&fieldValue1880);

fieldValue& fieldValue1881 =  fieldValue();
fieldValue1881.setName(CString("Bf"));
fieldValue1881.setValue(CString("0 5 10 15"));
ProtoInstance1871.addChild(&fieldValue1881);

fieldValue& fieldValue1882 =  fieldValue();
fieldValue1882.setName(CString("Cf"));
fieldValue1882.setValue(CString("true"));
ProtoInstance1871.addChild(&fieldValue1882);

fieldValue& fieldValue1883 =  fieldValue();
fieldValue1883.setName(CString("scale"));
fieldValue1883.setValue(CString("1.593 2.9 1"));
ProtoInstance1871.addChild(&fieldValue1883);

Transform1870.addChild(&ProtoInstance1871);

Transform1869.addChild(&Transform1870);

fieldValue1538.addChild(&Transform1869);

Transform& Transform1884 =  Transform();
Transform1884.setDEF(CString("ck"));
Transform1884.setTranslation(new float[]{0.9488,0.05581,4.768e-7});
Transform1884.setRotation(new float[]{0.0,0.0,1.0,0.1762});
Transform1884.setCenter(new float[]{-1.063,-0.7111,-0.02255});
ProtoInstance& ProtoInstance1885 =  ProtoInstance();
ProtoInstance1885.setName(CString("Q"));
ProtoInstance1885.setDEF(CString("dk"));
fieldValue& fieldValue1886 =  fieldValue();
fieldValue1886.setName(CString("center"));
fieldValue1886.setValue(CString("-1.063 -0.7111 -0.02255"));
ProtoInstance1885.addChild(&fieldValue1886);

fieldValue& fieldValue1887 =  fieldValue();
fieldValue1887.setName(CString("U"));
ProtoInstance& ProtoInstance1888 =  ProtoInstance();
ProtoInstance1888.setName(CString("o"));
ProtoInstance1888.setDEF(CString("ek"));
fieldValue& fieldValue1889 =  fieldValue();
fieldValue1889.setName(CString("B"));
ProtoInstance& ProtoInstance1890 =  ProtoInstance();
ProtoInstance1890.setUSE(CString("Li"));
fieldValue1889.addChild(&ProtoInstance1890);

ProtoInstance1888.addChild(&fieldValue1889);

fieldValue& fieldValue1891 =  fieldValue();
fieldValue1891.setName(CString("C"));
Transform& Transform1892 =  Transform();
Transform1892.setUSE(CString("ck"));
fieldValue1891.addChild(&Transform1892);

ProtoInstance& ProtoInstance1893 =  ProtoInstance();
ProtoInstance1893.setUSE(CString("dk"));
fieldValue1891.addChild(&ProtoInstance1893);

ProtoInstance& ProtoInstance1894 =  ProtoInstance();
ProtoInstance1894.setName(CString("Q"));
ProtoInstance1894.setDEF(CString("rk"));
fieldValue& fieldValue1895 =  fieldValue();
fieldValue1895.setName(CString("center"));
fieldValue1895.setValue(CString("-1.063 -0.7111 -0.02255"));
ProtoInstance1894.addChild(&fieldValue1895);

fieldValue& fieldValue1896 =  fieldValue();
fieldValue1896.setName(CString("U"));
ProtoInstance& ProtoInstance1897 =  ProtoInstance();
ProtoInstance1897.setUSE(CString("ek"));
fieldValue1896.addChild(&ProtoInstance1897);

ProtoInstance1894.addChild(&fieldValue1896);

fieldValue& fieldValue1898 =  fieldValue();
fieldValue1898.setName(CString("children"));
Transform& Transform1899 =  Transform();
Transform1899.setDEF(CString("sk"));
ProtoInstance& ProtoInstance1900 =  ProtoInstance();
ProtoInstance1900.setUSE(CString("ek"));
Transform1899.addChild(&ProtoInstance1900);

ProtoInstance& ProtoInstance1901 =  ProtoInstance();
ProtoInstance1901.setName(CString("ra"));
ProtoInstance1901.setDEF(CString("tk"));
fieldValue& fieldValue1902 =  fieldValue();
fieldValue1902.setName(CString("cycleInterval"));
fieldValue1902.setValue(CString("3"));
ProtoInstance1901.addChild(&fieldValue1902);

fieldValue& fieldValue1903 =  fieldValue();
fieldValue1903.setName(CString("Da"));
fieldValue1903.setValue(CString("false"));
ProtoInstance1901.addChild(&fieldValue1903);

fieldValue& fieldValue1904 =  fieldValue();
fieldValue1904.setName(CString("Ia"));
fieldValue1904.setValue(CString("true"));
ProtoInstance1901.addChild(&fieldValue1904);

Transform1899.addChild(&ProtoInstance1901);

ProtoInstance& ProtoInstance1905 =  ProtoInstance();
ProtoInstance1905.setName(CString("ra"));
ProtoInstance1905.setDEF(CString("uk"));
fieldValue& fieldValue1906 =  fieldValue();
fieldValue1906.setName(CString("Da"));
fieldValue1906.setValue(CString("false"));
ProtoInstance1905.addChild(&fieldValue1906);

fieldValue& fieldValue1907 =  fieldValue();
fieldValue1907.setName(CString("Ia"));
fieldValue1907.setValue(CString("true"));
ProtoInstance1905.addChild(&fieldValue1907);

Transform1899.addChild(&ProtoInstance1905);

ProtoInstance& ProtoInstance1908 =  ProtoInstance();
ProtoInstance1908.setName(CString("ra"));
ProtoInstance1908.setDEF(CString("vk"));
fieldValue& fieldValue1909 =  fieldValue();
fieldValue1909.setName(CString("cycleInterval"));
fieldValue1909.setValue(CString("12"));
ProtoInstance1908.addChild(&fieldValue1909);

fieldValue& fieldValue1910 =  fieldValue();
fieldValue1910.setName(CString("Da"));
fieldValue1910.setValue(CString("false"));
ProtoInstance1908.addChild(&fieldValue1910);

fieldValue& fieldValue1911 =  fieldValue();
fieldValue1911.setName(CString("Ia"));
fieldValue1911.setValue(CString("true"));
ProtoInstance1908.addChild(&fieldValue1911);

Transform1899.addChild(&ProtoInstance1908);

ProtoInstance& ProtoInstance1912 =  ProtoInstance();
ProtoInstance1912.setName(CString("hg"));
ProtoInstance1912.setDEF(CString("wk"));
fieldValue& fieldValue1913 =  fieldValue();
fieldValue1913.setName(CString("U"));
ProtoInstance& ProtoInstance1914 =  ProtoInstance();
ProtoInstance1914.setUSE(CString("ek"));
fieldValue1913.addChild(&ProtoInstance1914);

ProtoInstance1912.addChild(&fieldValue1913);

fieldValue& fieldValue1915 =  fieldValue();
fieldValue1915.setName(CString("offset"));
fieldValue1915.setValue(CString("1.063 0.7111 0.02255"));
ProtoInstance1912.addChild(&fieldValue1915);

fieldValue& fieldValue1916 =  fieldValue();
fieldValue1916.setName(CString("center"));
fieldValue1916.setValue(CString("-1.063 -0.7111 -0.02255"));
ProtoInstance1912.addChild(&fieldValue1916);

fieldValue& fieldValue1917 =  fieldValue();
fieldValue1917.setName(CString("T"));
fieldValue1917.setValue(CString("false"));
ProtoInstance1912.addChild(&fieldValue1917);

Transform1899.addChild(&ProtoInstance1912);

ProtoInstance& ProtoInstance1918 =  ProtoInstance();
ProtoInstance1918.setName(CString("yg"));
ProtoInstance1918.setDEF(CString("xk"));
fieldValue& fieldValue1919 =  fieldValue();
fieldValue1919.setName(CString("Eg"));
ProtoInstance& ProtoInstance1920 =  ProtoInstance();
ProtoInstance1920.setUSE(CString("bk"));
fieldValue1919.addChild(&ProtoInstance1920);

ProtoInstance1918.addChild(&fieldValue1919);

Transform1899.addChild(&ProtoInstance1918);

ProtoInstance& ProtoInstance1921 =  ProtoInstance();
ProtoInstance1921.setName(CString("xe"));
ProtoInstance1921.setDEF(CString("yk"));
fieldValue& fieldValue1922 =  fieldValue();
fieldValue1922.setName(CString("ye"));
ProtoInstance& ProtoInstance1923 =  ProtoInstance();
ProtoInstance1923.setUSE(CString("xk"));
fieldValue1922.addChild(&ProtoInstance1923);

ProtoInstance1921.addChild(&fieldValue1922);

fieldValue& fieldValue1924 =  fieldValue();
fieldValue1924.setName(CString("ze"));
ProtoInstance& ProtoInstance1925 =  ProtoInstance();
ProtoInstance1925.setUSE(CString("vk"));
fieldValue1924.addChild(&ProtoInstance1925);

ProtoInstance1921.addChild(&fieldValue1924);

fieldValue& fieldValue1926 =  fieldValue();
fieldValue1926.setName(CString("Ae"));
ProtoInstance& ProtoInstance1927 =  ProtoInstance();
ProtoInstance1927.setUSE(CString("ek"));
fieldValue1926.addChild(&ProtoInstance1927);

ProtoInstance1921.addChild(&fieldValue1926);

fieldValue& fieldValue1928 =  fieldValue();
fieldValue1928.setName(CString("Ce"));
fieldValue1928.setValue(CString("103"));
ProtoInstance1921.addChild(&fieldValue1928);

Transform1899.addChild(&ProtoInstance1921);

fieldValue1898.addChild(&Transform1899);

ProtoInstance1894.addChild(&fieldValue1898);

fieldValue1891.addChild(&ProtoInstance1894);

Transform& Transform1929 =  Transform();
Transform1929.setUSE(CString("sk"));
fieldValue1891.addChild(&Transform1929);

ProtoInstance1888.addChild(&fieldValue1891);

fieldValue& fieldValue1930 =  fieldValue();
fieldValue1930.setName(CString("children"));
Transform& Transform1931 =  Transform();
Transform1931.setDEF(CString("fk"));
Transform1931.setTranslation(new float[]{-1.064,-0.7111,-0.02});
Transform& Transform1932 =  Transform();
Transform1932.setDEF(CString("gk"));
Transform1932.setScale(new float[]{0.02196,0.2431,0.02196});
ProtoInstance& ProtoInstance1933 =  ProtoInstance();
ProtoInstance1933.setName(CString("ga"));
ProtoInstance1933.setDEF(CString("hk"));
fieldValue& fieldValue1934 =  fieldValue();
fieldValue1934.setName(CString("url"));
fieldValue1934.setValue(CString("\"\""));
ProtoInstance1933.addChild(&fieldValue1934);

fieldValue& fieldValue1935 =  fieldValue();
fieldValue1935.setName(CString("diffuseColor"));
fieldValue1935.setValue(CString("0.38 0.38 0.38"));
ProtoInstance1933.addChild(&fieldValue1935);

fieldValue& fieldValue1936 =  fieldValue();
fieldValue1936.setName(CString("emissiveColor"));
fieldValue1936.setValue(CString("0.18 0.18 0.18"));
ProtoInstance1933.addChild(&fieldValue1936);

fieldValue& fieldValue1937 =  fieldValue();
fieldValue1937.setName(CString("specularColor"));
fieldValue1937.setValue(CString("1 0.86 0.46"));
ProtoInstance1933.addChild(&fieldValue1937);

fieldValue& fieldValue1938 =  fieldValue();
fieldValue1938.setName(CString("shininess"));
fieldValue1938.setValue(CString("0.23"));
ProtoInstance1933.addChild(&fieldValue1938);

fieldValue& fieldValue1939 =  fieldValue();
fieldValue1939.setName(CString("B"));
ProtoInstance& ProtoInstance1940 =  ProtoInstance();
ProtoInstance1940.setUSE(CString("ek"));
fieldValue1939.addChild(&ProtoInstance1940);

ProtoInstance1933.addChild(&fieldValue1939);

fieldValue& fieldValue1941 =  fieldValue();
fieldValue1941.setName(CString("C"));
Transform& Transform1942 =  Transform();
Transform1942.setUSE(CString("fk"));
fieldValue1941.addChild(&Transform1942);

Transform& Transform1943 =  Transform();
Transform1943.setUSE(CString("gk"));
fieldValue1941.addChild(&Transform1943);

ProtoInstance1933.addChild(&fieldValue1941);

fieldValue& fieldValue1944 =  fieldValue();
fieldValue1944.setName(CString("geometry"));
Box& Box1945 =  Box();
Box1945.setDEF(CString("_7"));
Box1945.setSize(new float[]{1.0,1.0,1.0});
fieldValue1944.addChild(&Box1945);

ProtoInstance1933.addChild(&fieldValue1944);

Transform1932.addChild(&ProtoInstance1933);

Transform1931.addChild(&Transform1932);

fieldValue1930.addChild(&Transform1931);

Transform& Transform1946 =  Transform();
Transform1946.setDEF(CString("ik"));
Transform1946.setTranslation(new float[]{-1.063,-0.7072,-0.02});
Transform1946.setRotation(new float[]{0.0,0.0,1.0,4.711});
Transform1946.setScaleOrientation(new float[]{0.0,0.0,-1.0,0.120801});
Transform& Transform1947 =  Transform();
Transform1947.setDEF(CString("jk"));
Transform1947.setScale(new float[]{0.02196,0.2431,0.02196});
ProtoInstance& ProtoInstance1948 =  ProtoInstance();
ProtoInstance1948.setName(CString("ga"));
ProtoInstance1948.setDEF(CString("kk"));
fieldValue& fieldValue1949 =  fieldValue();
fieldValue1949.setName(CString("url"));
fieldValue1949.setValue(CString("\"\""));
ProtoInstance1948.addChild(&fieldValue1949);

fieldValue& fieldValue1950 =  fieldValue();
fieldValue1950.setName(CString("diffuseColor"));
fieldValue1950.setValue(CString("0.38 0.38 0.38"));
ProtoInstance1948.addChild(&fieldValue1950);

fieldValue& fieldValue1951 =  fieldValue();
fieldValue1951.setName(CString("emissiveColor"));
fieldValue1951.setValue(CString("0.18 0.18 0.18"));
ProtoInstance1948.addChild(&fieldValue1951);

fieldValue& fieldValue1952 =  fieldValue();
fieldValue1952.setName(CString("specularColor"));
fieldValue1952.setValue(CString("1 0.86 0.46"));
ProtoInstance1948.addChild(&fieldValue1952);

fieldValue& fieldValue1953 =  fieldValue();
fieldValue1953.setName(CString("shininess"));
fieldValue1953.setValue(CString("0.23"));
ProtoInstance1948.addChild(&fieldValue1953);

fieldValue& fieldValue1954 =  fieldValue();
fieldValue1954.setName(CString("B"));
ProtoInstance& ProtoInstance1955 =  ProtoInstance();
ProtoInstance1955.setUSE(CString("ek"));
fieldValue1954.addChild(&ProtoInstance1955);

ProtoInstance1948.addChild(&fieldValue1954);

fieldValue& fieldValue1956 =  fieldValue();
fieldValue1956.setName(CString("C"));
Transform& Transform1957 =  Transform();
Transform1957.setUSE(CString("ik"));
fieldValue1956.addChild(&Transform1957);

Transform& Transform1958 =  Transform();
Transform1958.setUSE(CString("jk"));
fieldValue1956.addChild(&Transform1958);

ProtoInstance1948.addChild(&fieldValue1956);

fieldValue& fieldValue1959 =  fieldValue();
fieldValue1959.setName(CString("geometry"));
Box& Box1960 =  Box();
Box1960.setDEF(CString("_8"));
Box1960.setSize(new float[]{1.0,1.0,1.0});
fieldValue1959.addChild(&Box1960);

ProtoInstance1948.addChild(&fieldValue1959);

Transform1947.addChild(&ProtoInstance1948);

Transform1946.addChild(&Transform1947);

fieldValue1930.addChild(&Transform1946);

Transform& Transform1961 =  Transform();
Transform1961.setDEF(CString("lk"));
Transform1961.setTranslation(new float[]{-1.065,-0.7075,-0.02255});
Transform1961.setRotation(new float[]{1.0,0.0,0.0,1.571});
Transform& Transform1962 =  Transform();
Transform1962.setDEF(CString("mk"));
Transform1962.setScale(new float[]{0.02196,0.2431,0.02196});
ProtoInstance& ProtoInstance1963 =  ProtoInstance();
ProtoInstance1963.setName(CString("ga"));
ProtoInstance1963.setDEF(CString("nk"));
fieldValue& fieldValue1964 =  fieldValue();
fieldValue1964.setName(CString("url"));
fieldValue1964.setValue(CString("\"\""));
ProtoInstance1963.addChild(&fieldValue1964);

fieldValue& fieldValue1965 =  fieldValue();
fieldValue1965.setName(CString("diffuseColor"));
fieldValue1965.setValue(CString("0.38 0.38 0.38"));
ProtoInstance1963.addChild(&fieldValue1965);

fieldValue& fieldValue1966 =  fieldValue();
fieldValue1966.setName(CString("emissiveColor"));
fieldValue1966.setValue(CString("0.18 0.18 0.18"));
ProtoInstance1963.addChild(&fieldValue1966);

fieldValue& fieldValue1967 =  fieldValue();
fieldValue1967.setName(CString("specularColor"));
fieldValue1967.setValue(CString("1 0.86 0.46"));
ProtoInstance1963.addChild(&fieldValue1967);

fieldValue& fieldValue1968 =  fieldValue();
fieldValue1968.setName(CString("shininess"));
fieldValue1968.setValue(CString("0.23"));
ProtoInstance1963.addChild(&fieldValue1968);

fieldValue& fieldValue1969 =  fieldValue();
fieldValue1969.setName(CString("B"));
ProtoInstance& ProtoInstance1970 =  ProtoInstance();
ProtoInstance1970.setUSE(CString("ek"));
fieldValue1969.addChild(&ProtoInstance1970);

ProtoInstance1963.addChild(&fieldValue1969);

fieldValue& fieldValue1971 =  fieldValue();
fieldValue1971.setName(CString("C"));
Transform& Transform1972 =  Transform();
Transform1972.setUSE(CString("lk"));
fieldValue1971.addChild(&Transform1972);

Transform& Transform1973 =  Transform();
Transform1973.setUSE(CString("mk"));
fieldValue1971.addChild(&Transform1973);

ProtoInstance1963.addChild(&fieldValue1971);

fieldValue& fieldValue1974 =  fieldValue();
fieldValue1974.setName(CString("geometry"));
Box& Box1975 =  Box();
Box1975.setDEF(CString("_9"));
Box1975.setSize(new float[]{1.0,1.0,1.0});
fieldValue1974.addChild(&Box1975);

ProtoInstance1963.addChild(&fieldValue1974);

Transform1962.addChild(&ProtoInstance1963);

Transform1961.addChild(&Transform1962);

fieldValue1930.addChild(&Transform1961);

Transform& Transform1976 =  Transform();
Transform1976.setDEF(CString("ok"));
Transform1976.setTranslation(new float[]{-1.063,-0.7112,-0.02});
Transform& Transform1977 =  Transform();
Transform1977.setDEF(CString("pk"));
Transform1977.setScale(new float[]{0.1604,0.1604,0.1604});
ProtoInstance& ProtoInstance1978 =  ProtoInstance();
ProtoInstance1978.setName(CString("ga"));
ProtoInstance1978.setDEF(CString("qk"));
fieldValue& fieldValue1979 =  fieldValue();
fieldValue1979.setName(CString("url"));
fieldValue1979.setValue(CString("\"\""));
ProtoInstance1978.addChild(&fieldValue1979);

fieldValue& fieldValue1980 =  fieldValue();
fieldValue1980.setName(CString("diffuseColor"));
fieldValue1980.setValue(CString("0.38 0.38 0.38"));
ProtoInstance1978.addChild(&fieldValue1980);

fieldValue& fieldValue1981 =  fieldValue();
fieldValue1981.setName(CString("emissiveColor"));
fieldValue1981.setValue(CString("0.18 0.18 0.18"));
ProtoInstance1978.addChild(&fieldValue1981);

fieldValue& fieldValue1982 =  fieldValue();
fieldValue1982.setName(CString("specularColor"));
fieldValue1982.setValue(CString("1 0.86 0.46"));
ProtoInstance1978.addChild(&fieldValue1982);

fieldValue& fieldValue1983 =  fieldValue();
fieldValue1983.setName(CString("shininess"));
fieldValue1983.setValue(CString("0.23"));
ProtoInstance1978.addChild(&fieldValue1983);

fieldValue& fieldValue1984 =  fieldValue();
fieldValue1984.setName(CString("B"));
ProtoInstance& ProtoInstance1985 =  ProtoInstance();
ProtoInstance1985.setUSE(CString("ek"));
fieldValue1984.addChild(&ProtoInstance1985);

ProtoInstance1978.addChild(&fieldValue1984);

fieldValue& fieldValue1986 =  fieldValue();
fieldValue1986.setName(CString("C"));
Transform& Transform1987 =  Transform();
Transform1987.setUSE(CString("ok"));
fieldValue1986.addChild(&Transform1987);

Transform& Transform1988 =  Transform();
Transform1988.setUSE(CString("pk"));
fieldValue1986.addChild(&Transform1988);

ProtoInstance1978.addChild(&fieldValue1986);

fieldValue& fieldValue1989 =  fieldValue();
fieldValue1989.setName(CString("geometry"));
Sphere& Sphere1990 =  Sphere();
Sphere1990.setDEF(CString("_10"));
Sphere1990.setRadius(0.5);
fieldValue1989.addChild(&Sphere1990);

ProtoInstance1978.addChild(&fieldValue1989);

Transform1977.addChild(&ProtoInstance1978);

Transform1976.addChild(&Transform1977);

fieldValue1930.addChild(&Transform1976);

ProtoInstance1888.addChild(&fieldValue1930);

fieldValue& fieldValue1991 =  fieldValue();
fieldValue1991.setName(CString("A"));
ProtoInstance& ProtoInstance1992 =  ProtoInstance();
ProtoInstance1992.setUSE(CString("hk"));
fieldValue1991.addChild(&ProtoInstance1992);

ProtoInstance& ProtoInstance1993 =  ProtoInstance();
ProtoInstance1993.setUSE(CString("kk"));
fieldValue1991.addChild(&ProtoInstance1993);

ProtoInstance& ProtoInstance1994 =  ProtoInstance();
ProtoInstance1994.setUSE(CString("nk"));
fieldValue1991.addChild(&ProtoInstance1994);

ProtoInstance& ProtoInstance1995 =  ProtoInstance();
ProtoInstance1995.setUSE(CString("qk"));
fieldValue1991.addChild(&ProtoInstance1995);

ProtoInstance1888.addChild(&fieldValue1991);

fieldValue1887.addChild(&ProtoInstance1888);

ProtoInstance1885.addChild(&fieldValue1887);

fieldValue& fieldValue1996 =  fieldValue();
fieldValue1996.setName(CString("children"));
ProtoInstance& ProtoInstance1997 =  ProtoInstance();
ProtoInstance1997.setUSE(CString("rk"));
fieldValue1996.addChild(&ProtoInstance1997);

ProtoInstance1885.addChild(&fieldValue1996);

fieldValue& fieldValue1998 =  fieldValue();
fieldValue1998.setName(CString("W"));
fieldValue1998.setValue(CString("2"));
ProtoInstance1885.addChild(&fieldValue1998);

Transform1884.addChild(&ProtoInstance1885);

fieldValue1538.addChild(&Transform1884);

Transform& Transform1999 =  Transform();
Transform1999.setDEF(CString("zk"));
Transform1999.setTranslation(new float[]{2.022,0.2389,1.5});
Transform1999.setRotation(new float[]{-0.145494,0.989359,0.0,0.7418});
Transform& Transform2000 =  Transform();
Transform2000.setDEF(CString("Ak"));
ProtoInstance& ProtoInstance2001 =  ProtoInstance();
ProtoInstance2001.setName(CString("K"));
ProtoInstance2001.setDEF(CString("Bk"));
fieldValue& fieldValue2002 =  fieldValue();
fieldValue2002.setName(CString("B"));
ProtoInstance& ProtoInstance2003 =  ProtoInstance();
ProtoInstance2003.setUSE(CString("Li"));
fieldValue2002.addChild(&ProtoInstance2003);

ProtoInstance2001.addChild(&fieldValue2002);

fieldValue& fieldValue2004 =  fieldValue();
fieldValue2004.setName(CString("C"));
Transform& Transform2005 =  Transform();
Transform2005.setUSE(CString("zk"));
fieldValue2004.addChild(&Transform2005);

Transform& Transform2006 =  Transform();
Transform2006.setUSE(CString("Ak"));
fieldValue2004.addChild(&Transform2006);

ProtoInstance2001.addChild(&fieldValue2004);

fieldValue& fieldValue2007 =  fieldValue();
fieldValue2007.setName(CString("L"));
fieldValue2007.setValue(CString("1.528"));
ProtoInstance2001.addChild(&fieldValue2007);

fieldValue& fieldValue2008 =  fieldValue();
fieldValue2008.setName(CString("attenuation"));
fieldValue2008.setValue(CString("0.001 0.6545 0"));
ProtoInstance2001.addChild(&fieldValue2008);

Transform2000.addChild(&ProtoInstance2001);

Transform1999.addChild(&Transform2000);

fieldValue1538.addChild(&Transform1999);

Transform& Transform2009 =  Transform();
Transform2009.setDEF(CString("Ck"));
Transform& Transform2010 =  Transform();
Transform2010.setDEF(CString("Dk"));
ProtoInstance& ProtoInstance2011 =  ProtoInstance();
ProtoInstance2011.setName(CString("Ih"));
ProtoInstance2011.setDEF(CString("Ek"));
fieldValue& fieldValue2012 =  fieldValue();
fieldValue2012.setName(CString("B"));
ProtoInstance& ProtoInstance2013 =  ProtoInstance();
ProtoInstance2013.setUSE(CString("Li"));
fieldValue2012.addChild(&ProtoInstance2013);

ProtoInstance2011.addChild(&fieldValue2012);

fieldValue& fieldValue2014 =  fieldValue();
fieldValue2014.setName(CString("C"));
Transform& Transform2015 =  Transform();
Transform2015.setUSE(CString("Ck"));
fieldValue2014.addChild(&Transform2015);

Transform& Transform2016 =  Transform();
Transform2016.setUSE(CString("Dk"));
fieldValue2014.addChild(&Transform2016);

ProtoInstance2011.addChild(&fieldValue2014);

fieldValue& fieldValue2017 =  fieldValue();
fieldValue2017.setName(CString("url"));
fieldValue2017.setValue(CString("\"tonerow3d_16_22.wav\""));
ProtoInstance2011.addChild(&fieldValue2017);

Transform2010.addChild(&ProtoInstance2011);

ProtoInstance& ProtoInstance2018 =  ProtoInstance();
ProtoInstance2018.setName(CString("ra"));
ProtoInstance2018.setDEF(CString("Fk"));
fieldValue& fieldValue2019 =  fieldValue();
fieldValue2019.setName(CString("cycleInterval"));
fieldValue2019.setValue(CString("0.232925"));
ProtoInstance2018.addChild(&fieldValue2019);

fieldValue& fieldValue2020 =  fieldValue();
fieldValue2020.setName(CString("xa"));
fieldValue2020.setValue(CString("0.232925"));
ProtoInstance2018.addChild(&fieldValue2020);

Transform2010.addChild(&ProtoInstance2018);

ProtoInstance& ProtoInstance2021 =  ProtoInstance();
ProtoInstance2021.setName(CString("Nh"));
ProtoInstance2021.setDEF(CString("Gk"));
fieldValue& fieldValue2022 =  fieldValue();
fieldValue2022.setName(CString("Oh"));
ProtoInstance& ProtoInstance2023 =  ProtoInstance();
ProtoInstance2023.setUSE(CString("Ek"));
fieldValue2022.addChild(&ProtoInstance2023);

ProtoInstance2021.addChild(&fieldValue2022);

fieldValue& fieldValue2024 =  fieldValue();
fieldValue2024.setName(CString("intensity"));
fieldValue2024.setValue(CString("0.49"));
ProtoInstance2021.addChild(&fieldValue2024);

fieldValue& fieldValue2025 =  fieldValue();
fieldValue2025.setName(CString("duration"));
fieldValue2025.setValue(CString("0.232925"));
ProtoInstance2021.addChild(&fieldValue2025);

Transform2010.addChild(&ProtoInstance2021);

ProtoInstance& ProtoInstance2026 =  ProtoInstance();
ProtoInstance2026.setName(CString("ra"));
ProtoInstance2026.setDEF(CString("Hk"));
fieldValue& fieldValue2027 =  fieldValue();
fieldValue2027.setName(CString("xa"));
fieldValue2027.setValue(CString("1.268"));
ProtoInstance2026.addChild(&fieldValue2027);

Transform2010.addChild(&ProtoInstance2026);

ProtoInstance& ProtoInstance2028 =  ProtoInstance();
ProtoInstance2028.setName(CString("Xh"));
ProtoInstance2028.setDEF(CString("Ik"));
Transform2010.addChild(&ProtoInstance2028);

ProtoInstance& ProtoInstance2029 =  ProtoInstance();
ProtoInstance2029.setName(CString("ra"));
ProtoInstance2029.setDEF(CString("Jk"));
fieldValue& fieldValue2030 =  fieldValue();
fieldValue2030.setName(CString("cycleInterval"));
fieldValue2030.setValue(CString("0.232925"));
ProtoInstance2029.addChild(&fieldValue2030);

fieldValue& fieldValue2031 =  fieldValue();
fieldValue2031.setName(CString("xa"));
fieldValue2031.setValue(CString("0.232925"));
ProtoInstance2029.addChild(&fieldValue2031);

Transform2010.addChild(&ProtoInstance2029);

ProtoInstance& ProtoInstance2032 =  ProtoInstance();
ProtoInstance2032.setName(CString("Nh"));
ProtoInstance2032.setDEF(CString("Kk"));
fieldValue& fieldValue2033 =  fieldValue();
fieldValue2033.setName(CString("Oh"));
ProtoInstance& ProtoInstance2034 =  ProtoInstance();
ProtoInstance2034.setUSE(CString("Ek"));
fieldValue2033.addChild(&ProtoInstance2034);

ProtoInstance2032.addChild(&fieldValue2033);

fieldValue& fieldValue2035 =  fieldValue();
fieldValue2035.setName(CString("intensity"));
fieldValue2035.setValue(CString("0.3"));
ProtoInstance2032.addChild(&fieldValue2035);

fieldValue& fieldValue2036 =  fieldValue();
fieldValue2036.setName(CString("duration"));
fieldValue2036.setValue(CString("0.232925"));
ProtoInstance2032.addChild(&fieldValue2036);

Transform2010.addChild(&ProtoInstance2032);

ProtoInstance& ProtoInstance2037 =  ProtoInstance();
ProtoInstance2037.setName(CString("ra"));
ProtoInstance2037.setDEF(CString("Lk"));
fieldValue& fieldValue2038 =  fieldValue();
fieldValue2038.setName(CString("xa"));
fieldValue2038.setValue(CString("1.268"));
ProtoInstance2037.addChild(&fieldValue2038);

Transform2010.addChild(&ProtoInstance2037);

ProtoInstance& ProtoInstance2039 =  ProtoInstance();
ProtoInstance2039.setName(CString("Xh"));
ProtoInstance2039.setDEF(CString("Mk"));
Transform2010.addChild(&ProtoInstance2039);

ProtoInstance& ProtoInstance2040 =  ProtoInstance();
ProtoInstance2040.setName(CString("ra"));
ProtoInstance2040.setDEF(CString("Nk"));
fieldValue& fieldValue2041 =  fieldValue();
fieldValue2041.setName(CString("cycleInterval"));
fieldValue2041.setValue(CString("0.232925"));
ProtoInstance2040.addChild(&fieldValue2041);

fieldValue& fieldValue2042 =  fieldValue();
fieldValue2042.setName(CString("xa"));
fieldValue2042.setValue(CString("0.232925"));
ProtoInstance2040.addChild(&fieldValue2042);

Transform2010.addChild(&ProtoInstance2040);

ProtoInstance& ProtoInstance2043 =  ProtoInstance();
ProtoInstance2043.setName(CString("Nh"));
ProtoInstance2043.setDEF(CString("Ok"));
fieldValue& fieldValue2044 =  fieldValue();
fieldValue2044.setName(CString("Oh"));
ProtoInstance& ProtoInstance2045 =  ProtoInstance();
ProtoInstance2045.setUSE(CString("Ek"));
fieldValue2044.addChild(&ProtoInstance2045);

ProtoInstance2043.addChild(&fieldValue2044);

fieldValue& fieldValue2046 =  fieldValue();
fieldValue2046.setName(CString("intensity"));
fieldValue2046.setValue(CString("0.2"));
ProtoInstance2043.addChild(&fieldValue2046);

fieldValue& fieldValue2047 =  fieldValue();
fieldValue2047.setName(CString("duration"));
fieldValue2047.setValue(CString("0.232925"));
ProtoInstance2043.addChild(&fieldValue2047);

Transform2010.addChild(&ProtoInstance2043);

ProtoInstance& ProtoInstance2048 =  ProtoInstance();
ProtoInstance2048.setName(CString("ra"));
ProtoInstance2048.setDEF(CString("Pk"));
fieldValue& fieldValue2049 =  fieldValue();
fieldValue2049.setName(CString("xa"));
fieldValue2049.setValue(CString("1.268"));
ProtoInstance2048.addChild(&fieldValue2049);

Transform2010.addChild(&ProtoInstance2048);

ProtoInstance& ProtoInstance2050 =  ProtoInstance();
ProtoInstance2050.setName(CString("Xh"));
ProtoInstance2050.setDEF(CString("Qk"));
Transform2010.addChild(&ProtoInstance2050);

ProtoInstance& ProtoInstance2051 =  ProtoInstance();
ProtoInstance2051.setName(CString("ra"));
ProtoInstance2051.setDEF(CString("Rk"));
fieldValue& fieldValue2052 =  fieldValue();
fieldValue2052.setName(CString("cycleInterval"));
fieldValue2052.setValue(CString("0.232925"));
ProtoInstance2051.addChild(&fieldValue2052);

fieldValue& fieldValue2053 =  fieldValue();
fieldValue2053.setName(CString("xa"));
fieldValue2053.setValue(CString("0.232925"));
ProtoInstance2051.addChild(&fieldValue2053);

Transform2010.addChild(&ProtoInstance2051);

ProtoInstance& ProtoInstance2054 =  ProtoInstance();
ProtoInstance2054.setName(CString("Nh"));
ProtoInstance2054.setDEF(CString("Sk"));
fieldValue& fieldValue2055 =  fieldValue();
fieldValue2055.setName(CString("Oh"));
ProtoInstance& ProtoInstance2056 =  ProtoInstance();
ProtoInstance2056.setUSE(CString("Ek"));
fieldValue2055.addChild(&ProtoInstance2056);

ProtoInstance2054.addChild(&fieldValue2055);

fieldValue& fieldValue2057 =  fieldValue();
fieldValue2057.setName(CString("intensity"));
fieldValue2057.setValue(CString("0.3"));
ProtoInstance2054.addChild(&fieldValue2057);

fieldValue& fieldValue2058 =  fieldValue();
fieldValue2058.setName(CString("duration"));
fieldValue2058.setValue(CString("0.232925"));
ProtoInstance2054.addChild(&fieldValue2058);

Transform2010.addChild(&ProtoInstance2054);

ProtoInstance& ProtoInstance2059 =  ProtoInstance();
ProtoInstance2059.setName(CString("ra"));
ProtoInstance2059.setDEF(CString("Tk"));
fieldValue& fieldValue2060 =  fieldValue();
fieldValue2060.setName(CString("xa"));
fieldValue2060.setValue(CString("1.268"));
ProtoInstance2059.addChild(&fieldValue2060);

Transform2010.addChild(&ProtoInstance2059);

ProtoInstance& ProtoInstance2061 =  ProtoInstance();
ProtoInstance2061.setName(CString("Xh"));
ProtoInstance2061.setDEF(CString("Uk"));
Transform2010.addChild(&ProtoInstance2061);

ProtoInstance& ProtoInstance2062 =  ProtoInstance();
ProtoInstance2062.setName(CString("ra"));
ProtoInstance2062.setDEF(CString("Vk"));
fieldValue& fieldValue2063 =  fieldValue();
fieldValue2063.setName(CString("cycleInterval"));
fieldValue2063.setValue(CString("0.232925"));
ProtoInstance2062.addChild(&fieldValue2063);

fieldValue& fieldValue2064 =  fieldValue();
fieldValue2064.setName(CString("xa"));
fieldValue2064.setValue(CString("0.232925"));
ProtoInstance2062.addChild(&fieldValue2064);

Transform2010.addChild(&ProtoInstance2062);

ProtoInstance& ProtoInstance2065 =  ProtoInstance();
ProtoInstance2065.setName(CString("Nh"));
ProtoInstance2065.setDEF(CString("Wk"));
fieldValue& fieldValue2066 =  fieldValue();
fieldValue2066.setName(CString("Oh"));
ProtoInstance& ProtoInstance2067 =  ProtoInstance();
ProtoInstance2067.setUSE(CString("Ek"));
fieldValue2066.addChild(&ProtoInstance2067);

ProtoInstance2065.addChild(&fieldValue2066);

fieldValue& fieldValue2068 =  fieldValue();
fieldValue2068.setName(CString("intensity"));
fieldValue2068.setValue(CString("0.49"));
ProtoInstance2065.addChild(&fieldValue2068);

fieldValue& fieldValue2069 =  fieldValue();
fieldValue2069.setName(CString("duration"));
fieldValue2069.setValue(CString("0.232925"));
ProtoInstance2065.addChild(&fieldValue2069);

Transform2010.addChild(&ProtoInstance2065);

ProtoInstance& ProtoInstance2070 =  ProtoInstance();
ProtoInstance2070.setName(CString("ra"));
ProtoInstance2070.setDEF(CString("Xk"));
fieldValue& fieldValue2071 =  fieldValue();
fieldValue2071.setName(CString("xa"));
fieldValue2071.setValue(CString("1.268"));
ProtoInstance2070.addChild(&fieldValue2071);

Transform2010.addChild(&ProtoInstance2070);

ProtoInstance& ProtoInstance2072 =  ProtoInstance();
ProtoInstance2072.setName(CString("Xh"));
ProtoInstance2072.setDEF(CString("Yk"));
Transform2010.addChild(&ProtoInstance2072);

ProtoInstance& ProtoInstance2073 =  ProtoInstance();
ProtoInstance2073.setName(CString("ra"));
ProtoInstance2073.setDEF(CString("Zk"));
fieldValue& fieldValue2074 =  fieldValue();
fieldValue2074.setName(CString("cycleInterval"));
fieldValue2074.setValue(CString("0.232925"));
ProtoInstance2073.addChild(&fieldValue2074);

fieldValue& fieldValue2075 =  fieldValue();
fieldValue2075.setName(CString("xa"));
fieldValue2075.setValue(CString("0.232925"));
ProtoInstance2073.addChild(&fieldValue2075);

Transform2010.addChild(&ProtoInstance2073);

ProtoInstance& ProtoInstance2076 =  ProtoInstance();
ProtoInstance2076.setName(CString("Nh"));
ProtoInstance2076.setDEF(CString("al"));
fieldValue& fieldValue2077 =  fieldValue();
fieldValue2077.setName(CString("Oh"));
ProtoInstance& ProtoInstance2078 =  ProtoInstance();
ProtoInstance2078.setUSE(CString("Ek"));
fieldValue2077.addChild(&ProtoInstance2078);

ProtoInstance2076.addChild(&fieldValue2077);

fieldValue& fieldValue2079 =  fieldValue();
fieldValue2079.setName(CString("intensity"));
fieldValue2079.setValue(CString("0.75"));
ProtoInstance2076.addChild(&fieldValue2079);

fieldValue& fieldValue2080 =  fieldValue();
fieldValue2080.setName(CString("duration"));
fieldValue2080.setValue(CString("0.232925"));
ProtoInstance2076.addChild(&fieldValue2080);

Transform2010.addChild(&ProtoInstance2076);

ProtoInstance& ProtoInstance2081 =  ProtoInstance();
ProtoInstance2081.setName(CString("ra"));
ProtoInstance2081.setDEF(CString("bl"));
fieldValue& fieldValue2082 =  fieldValue();
fieldValue2082.setName(CString("xa"));
fieldValue2082.setValue(CString("1.268"));
ProtoInstance2081.addChild(&fieldValue2082);

Transform2010.addChild(&ProtoInstance2081);

ProtoInstance& ProtoInstance2083 =  ProtoInstance();
ProtoInstance2083.setName(CString("Xh"));
ProtoInstance2083.setDEF(CString("cl"));
Transform2010.addChild(&ProtoInstance2083);

ProtoInstance& ProtoInstance2084 =  ProtoInstance();
ProtoInstance2084.setName(CString("ra"));
ProtoInstance2084.setDEF(CString("dl"));
fieldValue& fieldValue2085 =  fieldValue();
fieldValue2085.setName(CString("cycleInterval"));
fieldValue2085.setValue(CString("0.232925"));
ProtoInstance2084.addChild(&fieldValue2085);

fieldValue& fieldValue2086 =  fieldValue();
fieldValue2086.setName(CString("xa"));
fieldValue2086.setValue(CString("0.232925"));
ProtoInstance2084.addChild(&fieldValue2086);

Transform2010.addChild(&ProtoInstance2084);

ProtoInstance& ProtoInstance2087 =  ProtoInstance();
ProtoInstance2087.setName(CString("Nh"));
ProtoInstance2087.setDEF(CString("el"));
fieldValue& fieldValue2088 =  fieldValue();
fieldValue2088.setName(CString("Oh"));
ProtoInstance& ProtoInstance2089 =  ProtoInstance();
ProtoInstance2089.setUSE(CString("Ek"));
fieldValue2088.addChild(&ProtoInstance2089);

ProtoInstance2087.addChild(&fieldValue2088);

fieldValue& fieldValue2090 =  fieldValue();
fieldValue2090.setName(CString("duration"));
fieldValue2090.setValue(CString("0.232925"));
ProtoInstance2087.addChild(&fieldValue2090);

Transform2010.addChild(&ProtoInstance2087);

ProtoInstance& ProtoInstance2091 =  ProtoInstance();
ProtoInstance2091.setName(CString("ra"));
ProtoInstance2091.setDEF(CString("fl"));
fieldValue& fieldValue2092 =  fieldValue();
fieldValue2092.setName(CString("xa"));
fieldValue2092.setValue(CString("1.268"));
ProtoInstance2091.addChild(&fieldValue2092);

Transform2010.addChild(&ProtoInstance2091);

ProtoInstance& ProtoInstance2093 =  ProtoInstance();
ProtoInstance2093.setName(CString("Xh"));
ProtoInstance2093.setDEF(CString("gl"));
Transform2010.addChild(&ProtoInstance2093);

Transform2009.addChild(&Transform2010);

fieldValue1538.addChild(&Transform2009);

Transform& Transform2094 =  Transform();
Transform2094.setDEF(CString("hl"));
Transform2094.setTranslation(new float[]{-1.192e-7,-0.006944,0.0});
Transform& Transform2095 =  Transform();
Transform2095.setDEF(CString("il"));
Transform2095.setScale(new float[]{4.181,1.778,4.181});
ProtoInstance& ProtoInstance2096 =  ProtoInstance();
ProtoInstance2096.setName(CString("Zh"));
ProtoInstance2096.setDEF(CString("jl"));
fieldValue& fieldValue2097 =  fieldValue();
fieldValue2097.setName(CString("url"));
fieldValue2097.setValue(CString("\"\""));
ProtoInstance2096.addChild(&fieldValue2097);

fieldValue& fieldValue2098 =  fieldValue();
fieldValue2098.setName(CString("emissiveColor"));
fieldValue2098.setValue(CString("0 0.09 0.15"));
ProtoInstance2096.addChild(&fieldValue2098);

fieldValue& fieldValue2099 =  fieldValue();
fieldValue2099.setName(CString("specularColor"));
fieldValue2099.setValue(CString("0.5 0.5 0.5"));
ProtoInstance2096.addChild(&fieldValue2099);

fieldValue& fieldValue2100 =  fieldValue();
fieldValue2100.setName(CString("B"));
ProtoInstance& ProtoInstance2101 =  ProtoInstance();
ProtoInstance2101.setUSE(CString("Li"));
fieldValue2100.addChild(&ProtoInstance2101);

ProtoInstance2096.addChild(&fieldValue2100);

fieldValue& fieldValue2102 =  fieldValue();
fieldValue2102.setName(CString("C"));
Transform& Transform2103 =  Transform();
Transform2103.setUSE(CString("hl"));
fieldValue2102.addChild(&Transform2103);

Transform& Transform2104 =  Transform();
Transform2104.setUSE(CString("il"));
fieldValue2102.addChild(&Transform2104);

ProtoInstance2096.addChild(&fieldValue2102);

fieldValue& fieldValue2105 =  fieldValue();
fieldValue2105.setName(CString("ai"));
fieldValue2105.setValue(CString("4 4"));
ProtoInstance2096.addChild(&fieldValue2105);

fieldValue& fieldValue2106 =  fieldValue();
fieldValue2106.setName(CString("H"));
fieldValue2106.setValue(CString("false"));
ProtoInstance2096.addChild(&fieldValue2106);

fieldValue& fieldValue2107 =  fieldValue();
fieldValue2107.setName(CString("diffuseColor"));
fieldValue2107.setValue(CString("0 0 0"));
ProtoInstance2096.addChild(&fieldValue2107);

fieldValue& fieldValue2108 =  fieldValue();
fieldValue2108.setName(CString("choice"));
fieldValue2108.setValue(CString("1"));
ProtoInstance2096.addChild(&fieldValue2108);

Transform2095.addChild(&ProtoInstance2096);

Transform2094.addChild(&Transform2095);

fieldValue1538.addChild(&Transform2094);

ProtoInstance1536.addChild(&fieldValue1538);

fieldValue& fieldValue2109 =  fieldValue();
fieldValue2109.setName(CString("A"));
ProtoInstance& ProtoInstance2110 =  ProtoInstance();
ProtoInstance2110.setUSE(CString("Oi"));
fieldValue2109.addChild(&ProtoInstance2110);

ProtoInstance& ProtoInstance2111 =  ProtoInstance();
ProtoInstance2111.setUSE(CString("Ri"));
fieldValue2109.addChild(&ProtoInstance2111);

ProtoInstance& ProtoInstance2112 =  ProtoInstance();
ProtoInstance2112.setUSE(CString("aj"));
fieldValue2109.addChild(&ProtoInstance2112);

ProtoInstance& ProtoInstance2113 =  ProtoInstance();
ProtoInstance2113.setUSE(CString("fj"));
fieldValue2109.addChild(&ProtoInstance2113);

ProtoInstance& ProtoInstance2114 =  ProtoInstance();
ProtoInstance2114.setUSE(CString("ij"));
fieldValue2109.addChild(&ProtoInstance2114);

ProtoInstance& ProtoInstance2115 =  ProtoInstance();
ProtoInstance2115.setUSE(CString("lj"));
fieldValue2109.addChild(&ProtoInstance2115);

ProtoInstance& ProtoInstance2116 =  ProtoInstance();
ProtoInstance2116.setUSE(CString("wj"));
fieldValue2109.addChild(&ProtoInstance2116);

ProtoInstance& ProtoInstance2117 =  ProtoInstance();
ProtoInstance2117.setUSE(CString("Sj"));
fieldValue2109.addChild(&ProtoInstance2117);

ProtoInstance& ProtoInstance2118 =  ProtoInstance();
ProtoInstance2118.setUSE(CString("Xj"));
fieldValue2109.addChild(&ProtoInstance2118);

ProtoInstance& ProtoInstance2119 =  ProtoInstance();
ProtoInstance2119.setUSE(CString("bk"));
fieldValue2109.addChild(&ProtoInstance2119);

ProtoInstance& ProtoInstance2120 =  ProtoInstance();
ProtoInstance2120.setUSE(CString("ek"));
fieldValue2109.addChild(&ProtoInstance2120);

ProtoInstance& ProtoInstance2121 =  ProtoInstance();
ProtoInstance2121.setUSE(CString("Bk"));
fieldValue2109.addChild(&ProtoInstance2121);

ProtoInstance& ProtoInstance2122 =  ProtoInstance();
ProtoInstance2122.setUSE(CString("Ek"));
fieldValue2109.addChild(&ProtoInstance2122);

ProtoInstance& ProtoInstance2123 =  ProtoInstance();
ProtoInstance2123.setUSE(CString("jl"));
fieldValue2109.addChild(&ProtoInstance2123);

ProtoInstance1536.addChild(&fieldValue2109);

Group1531.addChild(&ProtoInstance1536);

ProtoInstance& ProtoInstance2124 =  ProtoInstance();
ProtoInstance2124.setName(CString("f"));
ProtoInstance2124.setDEF(CString("kl"));
Group1531.addChild(&ProtoInstance2124);

Scene7.addChild(&Group1531);

ROUTE& ROUTE2125 =  ROUTE();
ROUTE2125.setFromNode(CString("kl"));
ROUTE2125.setFromField(CString("j"));
ROUTE2125.setToNode(CString("Hi"));
ROUTE2125.setToField(CString("h"));
Scene7.addChild(&ROUTE2125);

ROUTE& ROUTE2126 =  ROUTE();
ROUTE2126.setFromNode(CString("Wi"));
ROUTE2126.setFromField(CString("yb_changed"));
ROUTE2126.setToNode(CString("Ti"));
ROUTE2126.setToField(CString("set_enabled"));
Scene7.addChild(&ROUTE2126);

ROUTE& ROUTE2127 =  ROUTE();
ROUTE2127.setFromNode(CString("Vi"));
ROUTE2127.setFromField(CString("R_changed"));
ROUTE2127.setToNode(CString("Ui"));
ROUTE2127.setToField(CString("R"));
Scene7.addChild(&ROUTE2127);

ROUTE& ROUTE2128 =  ROUTE();
ROUTE2128.setFromNode(CString("Hi"));
ROUTE2128.setFromField(CString("i"));
ROUTE2128.setToNode(CString("Vi"));
ROUTE2128.setToField(CString("R"));
Scene7.addChild(&ROUTE2128);

ROUTE& ROUTE2129 =  ROUTE();
ROUTE2129.setFromNode(CString("Ui"));
ROUTE2129.setFromField(CString("stopTime"));
ROUTE2129.setToNode(CString("Vi"));
ROUTE2129.setToField(CString("S"));
Scene7.addChild(&ROUTE2129);

ROUTE& ROUTE2130 =  ROUTE();
ROUTE2130.setFromNode(CString("Ui"));
ROUTE2130.setFromField(CString("fraction"));
ROUTE2130.setToNode(CString("Vi"));
ROUTE2130.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE2130);

ROUTE& ROUTE2131 =  ROUTE();
ROUTE2131.setFromNode(CString("Ti"));
ROUTE2131.setFromField(CString("isOver"));
ROUTE2131.setToNode(CString("Wi"));
ROUTE2131.setToField(CString("qb"));
Scene7.addChild(&ROUTE2131);

ROUTE& ROUTE2132 =  ROUTE();
ROUTE2132.setFromNode(CString("Ti"));
ROUTE2132.setFromField(CString("isActive"));
ROUTE2132.setToNode(CString("Wi"));
ROUTE2132.setToField(CString("rb"));
Scene7.addChild(&ROUTE2132);

ROUTE& ROUTE2133 =  ROUTE();
ROUTE2133.setFromNode(CString("Ti"));
ROUTE2133.setFromField(CString("hitPoint_changed"));
ROUTE2133.setToNode(CString("Wi"));
ROUTE2133.setToField(CString("sb"));
Scene7.addChild(&ROUTE2133);

ROUTE& ROUTE2134 =  ROUTE();
ROUTE2134.setFromNode(CString("Ti"));
ROUTE2134.setFromField(CString("hitTexCoord_changed"));
ROUTE2134.setToNode(CString("Wi"));
ROUTE2134.setToField(CString("tb"));
Scene7.addChild(&ROUTE2134);

ROUTE& ROUTE2135 =  ROUTE();
ROUTE2135.setFromNode(CString("Qi"));
ROUTE2135.setFromField(CString("R_changed"));
ROUTE2135.setToNode(CString("Xi"));
ROUTE2135.setToField(CString("R"));
Scene7.addChild(&ROUTE2135);

ROUTE& ROUTE2136 =  ROUTE();
ROUTE2136.setFromNode(CString("Wi"));
ROUTE2136.setFromField(CString("exitTime"));
ROUTE2136.setToNode(CString("Xi"));
ROUTE2136.setToField(CString("S"));
Scene7.addChild(&ROUTE2136);

ROUTE& ROUTE2137 =  ROUTE();
ROUTE2137.setFromNode(CString("Wi"));
ROUTE2137.setFromField(CString("enterTime"));
ROUTE2137.setToNode(CString("Qi"));
ROUTE2137.setToField(CString("R"));
Scene7.addChild(&ROUTE2137);

ROUTE& ROUTE2138 =  ROUTE();
ROUTE2138.setFromNode(CString("Xi"));
ROUTE2138.setFromField(CString("stopTime"));
ROUTE2138.setToNode(CString("Qi"));
ROUTE2138.setToField(CString("S"));
Scene7.addChild(&ROUTE2138);

ROUTE& ROUTE2139 =  ROUTE();
ROUTE2139.setFromNode(CString("Xi"));
ROUTE2139.setFromField(CString("fraction"));
ROUTE2139.setToNode(CString("Qi"));
ROUTE2139.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE2139);

ROUTE& ROUTE2140 =  ROUTE();
ROUTE2140.setFromNode(CString("Zi"));
ROUTE2140.setFromField(CString("R_changed"));
ROUTE2140.setToNode(CString("cj"));
ROUTE2140.setToField(CString("R"));
Scene7.addChild(&ROUTE2140);

ROUTE& ROUTE2141 =  ROUTE();
ROUTE2141.setFromNode(CString("Hi"));
ROUTE2141.setFromField(CString("i"));
ROUTE2141.setToNode(CString("Zi"));
ROUTE2141.setToField(CString("R"));
Scene7.addChild(&ROUTE2141);

ROUTE& ROUTE2142 =  ROUTE();
ROUTE2142.setFromNode(CString("cj"));
ROUTE2142.setFromField(CString("stopTime"));
ROUTE2142.setToNode(CString("Zi"));
ROUTE2142.setToField(CString("S"));
Scene7.addChild(&ROUTE2142);

ROUTE& ROUTE2143 =  ROUTE();
ROUTE2143.setFromNode(CString("cj"));
ROUTE2143.setFromField(CString("fraction"));
ROUTE2143.setToNode(CString("Zi"));
ROUTE2143.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE2143);

ROUTE& ROUTE2144 =  ROUTE();
ROUTE2144.setFromNode(CString("rj"));
ROUTE2144.setFromField(CString("R_changed"));
ROUTE2144.setToNode(CString("qj"));
ROUTE2144.setToField(CString("R"));
Scene7.addChild(&ROUTE2144);

ROUTE& ROUTE2145 =  ROUTE();
ROUTE2145.setFromNode(CString("Hi"));
ROUTE2145.setFromField(CString("i"));
ROUTE2145.setToNode(CString("rj"));
ROUTE2145.setToField(CString("R"));
Scene7.addChild(&ROUTE2145);

ROUTE& ROUTE2146 =  ROUTE();
ROUTE2146.setFromNode(CString("qj"));
ROUTE2146.setFromField(CString("stopTime"));
ROUTE2146.setToNode(CString("rj"));
ROUTE2146.setToField(CString("S"));
Scene7.addChild(&ROUTE2146);

ROUTE& ROUTE2147 =  ROUTE();
ROUTE2147.setFromNode(CString("qj"));
ROUTE2147.setFromField(CString("va"));
ROUTE2147.setToNode(CString("rj"));
ROUTE2147.setToField(CString("set_od"));
Scene7.addChild(&ROUTE2147);

ROUTE& ROUTE2148 =  ROUTE();
ROUTE2148.setFromNode(CString("qj"));
ROUTE2148.setFromField(CString("fraction"));
ROUTE2148.setToNode(CString("rj"));
ROUTE2148.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE2148);

ROUTE& ROUTE2149 =  ROUTE();
ROUTE2149.setFromNode(CString("Jj"));
ROUTE2149.setFromField(CString("yb_changed"));
ROUTE2149.setToNode(CString("uj"));
ROUTE2149.setToField(CString("set_enabled"));
Scene7.addChild(&ROUTE2149);

ROUTE& ROUTE2150 =  ROUTE();
ROUTE2150.setFromNode(CString("Lj"));
ROUTE2150.setFromField(CString("yb_changed"));
ROUTE2150.setToNode(CString("vj"));
ROUTE2150.setToField(CString("set_enabled"));
Scene7.addChild(&ROUTE2150);

ROUTE& ROUTE2151 =  ROUTE();
ROUTE2151.setFromNode(CString("Lj"));
ROUTE2151.setFromField(CString("vb"));
ROUTE2151.setToNode(CString("Jj"));
ROUTE2151.setToField(CString("sa"));
Scene7.addChild(&ROUTE2151);

ROUTE& ROUTE2152 =  ROUTE();
ROUTE2152.setFromNode(CString("uj"));
ROUTE2152.setFromField(CString("isActive"));
ROUTE2152.setToNode(CString("Jj"));
ROUTE2152.setToField(CString("rb"));
Scene7.addChild(&ROUTE2152);

ROUTE& ROUTE2153 =  ROUTE();
ROUTE2153.setFromNode(CString("uj"));
ROUTE2153.setFromField(CString("rotation_changed"));
ROUTE2153.setToNode(CString("Jj"));
ROUTE2153.setToField(CString("ne"));
Scene7.addChild(&ROUTE2153);

ROUTE& ROUTE2154 =  ROUTE();
ROUTE2154.setFromNode(CString("uj"));
ROUTE2154.setFromField(CString("trackPoint_changed"));
ROUTE2154.setToNode(CString("Jj"));
ROUTE2154.setToField(CString("oe"));
Scene7.addChild(&ROUTE2154);

ROUTE& ROUTE2155 =  ROUTE();
ROUTE2155.setFromNode(CString("Lj"));
ROUTE2155.setFromField(CString("ub"));
ROUTE2155.setToNode(CString("Kj"));
ROUTE2155.setToField(CString("R"));
Scene7.addChild(&ROUTE2155);

ROUTE& ROUTE2156 =  ROUTE();
ROUTE2156.setFromNode(CString("Jj"));
ROUTE2156.setFromField(CString("stopTime"));
ROUTE2156.setToNode(CString("Kj"));
ROUTE2156.setToField(CString("S"));
Scene7.addChild(&ROUTE2156);

ROUTE& ROUTE2157 =  ROUTE();
ROUTE2157.setFromNode(CString("vj"));
ROUTE2157.setFromField(CString("isOver"));
ROUTE2157.setToNode(CString("Lj"));
ROUTE2157.setToField(CString("qb"));
Scene7.addChild(&ROUTE2157);

ROUTE& ROUTE2158 =  ROUTE();
ROUTE2158.setFromNode(CString("vj"));
ROUTE2158.setFromField(CString("isActive"));
ROUTE2158.setToNode(CString("Lj"));
ROUTE2158.setToField(CString("rb"));
Scene7.addChild(&ROUTE2158);

ROUTE& ROUTE2159 =  ROUTE();
ROUTE2159.setFromNode(CString("vj"));
ROUTE2159.setFromField(CString("hitPoint_changed"));
ROUTE2159.setToNode(CString("Lj"));
ROUTE2159.setToField(CString("sb"));
Scene7.addChild(&ROUTE2159);

ROUTE& ROUTE2160 =  ROUTE();
ROUTE2160.setFromNode(CString("vj"));
ROUTE2160.setFromField(CString("hitTexCoord_changed"));
ROUTE2160.setToNode(CString("Lj"));
ROUTE2160.setToField(CString("tb"));
Scene7.addChild(&ROUTE2160);

ROUTE& ROUTE2161 =  ROUTE();
ROUTE2161.setFromNode(CString("Nj"));
ROUTE2161.setFromField(CString("He"));
ROUTE2161.setToNode(CString("Mj"));
ROUTE2161.setToField(CString("R"));
Scene7.addChild(&ROUTE2161);

ROUTE& ROUTE2162 =  ROUTE();
ROUTE2162.setFromNode(CString("Mj"));
ROUTE2162.setFromField(CString("ua"));
ROUTE2162.setToNode(CString("Nj"));
ROUTE2162.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE2162);

ROUTE& ROUTE2163 =  ROUTE();
ROUTE2163.setFromNode(CString("Mj"));
ROUTE2163.setFromField(CString("va"));
ROUTE2163.setToNode(CString("Nj"));
ROUTE2163.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE2163);

ROUTE& ROUTE2164 =  ROUTE();
ROUTE2164.setFromNode(CString("Lj"));
ROUTE2164.setFromField(CString("vb"));
ROUTE2164.setToNode(CString("Oj"));
ROUTE2164.setToField(CString("R"));
Scene7.addChild(&ROUTE2164);

ROUTE& ROUTE2165 =  ROUTE();
ROUTE2165.setFromNode(CString("Mj"));
ROUTE2165.setFromField(CString("stopTime"));
ROUTE2165.setToNode(CString("Oj"));
ROUTE2165.setToField(CString("S"));
Scene7.addChild(&ROUTE2165);

ROUTE& ROUTE2166 =  ROUTE();
ROUTE2166.setFromNode(CString("Nj"));
ROUTE2166.setFromField(CString("Ie"));
ROUTE2166.setToNode(CString("Oj"));
ROUTE2166.setToField(CString("S"));
Scene7.addChild(&ROUTE2166);

ROUTE& ROUTE2167 =  ROUTE();
ROUTE2167.setFromNode(CString("Qj"));
ROUTE2167.setFromField(CString("R_changed"));
ROUTE2167.setToNode(CString("Tj"));
ROUTE2167.setToField(CString("R"));
Scene7.addChild(&ROUTE2167);

ROUTE& ROUTE2168 =  ROUTE();
ROUTE2168.setFromNode(CString("Hi"));
ROUTE2168.setFromField(CString("i"));
ROUTE2168.setToNode(CString("Qj"));
ROUTE2168.setToField(CString("R"));
Scene7.addChild(&ROUTE2168);

ROUTE& ROUTE2169 =  ROUTE();
ROUTE2169.setFromNode(CString("Tj"));
ROUTE2169.setFromField(CString("stopTime"));
ROUTE2169.setToNode(CString("Qj"));
ROUTE2169.setToField(CString("S"));
Scene7.addChild(&ROUTE2169);

ROUTE& ROUTE2170 =  ROUTE();
ROUTE2170.setFromNode(CString("Tj"));
ROUTE2170.setFromField(CString("va"));
ROUTE2170.setToNode(CString("Qj"));
ROUTE2170.setToField(CString("set_od"));
Scene7.addChild(&ROUTE2170);

ROUTE& ROUTE2171 =  ROUTE();
ROUTE2171.setFromNode(CString("Tj"));
ROUTE2171.setFromField(CString("fraction"));
ROUTE2171.setToNode(CString("Qj"));
ROUTE2171.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE2171);

ROUTE& ROUTE2172 =  ROUTE();
ROUTE2172.setFromNode(CString("Tj"));
ROUTE2172.setFromField(CString("fraction"));
ROUTE2172.setToNode(CString("Qj"));
ROUTE2172.setToField(CString("jf"));
Scene7.addChild(&ROUTE2172);

ROUTE& ROUTE2173 =  ROUTE();
ROUTE2173.setFromNode(CString("Vj"));
ROUTE2173.setFromField(CString("R_changed"));
ROUTE2173.setToNode(CString("Yj"));
ROUTE2173.setToField(CString("R"));
Scene7.addChild(&ROUTE2173);

ROUTE& ROUTE2174 =  ROUTE();
ROUTE2174.setFromNode(CString("Hi"));
ROUTE2174.setFromField(CString("i"));
ROUTE2174.setToNode(CString("Vj"));
ROUTE2174.setToField(CString("R"));
Scene7.addChild(&ROUTE2174);

ROUTE& ROUTE2175 =  ROUTE();
ROUTE2175.setFromNode(CString("Yj"));
ROUTE2175.setFromField(CString("stopTime"));
ROUTE2175.setToNode(CString("Vj"));
ROUTE2175.setToField(CString("S"));
Scene7.addChild(&ROUTE2175);

ROUTE& ROUTE2176 =  ROUTE();
ROUTE2176.setFromNode(CString("Yj"));
ROUTE2176.setFromField(CString("va"));
ROUTE2176.setToNode(CString("Vj"));
ROUTE2176.setToField(CString("set_od"));
Scene7.addChild(&ROUTE2176);

ROUTE& ROUTE2177 =  ROUTE();
ROUTE2177.setFromNode(CString("Yj"));
ROUTE2177.setFromField(CString("fraction"));
ROUTE2177.setToNode(CString("Vj"));
ROUTE2177.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE2177);

ROUTE& ROUTE2178 =  ROUTE();
ROUTE2178.setFromNode(CString("Yj"));
ROUTE2178.setFromField(CString("fraction"));
ROUTE2178.setToNode(CString("Vj"));
ROUTE2178.setToField(CString("jf"));
Scene7.addChild(&ROUTE2178);

ROUTE& ROUTE2179 =  ROUTE();
ROUTE2179.setFromNode(CString("dk"));
ROUTE2179.setFromField(CString("R_changed"));
ROUTE2179.setToNode(CString("tk"));
ROUTE2179.setToField(CString("R"));
Scene7.addChild(&ROUTE2179);

ROUTE& ROUTE2180 =  ROUTE();
ROUTE2180.setFromNode(CString("rk"));
ROUTE2180.setFromField(CString("R_changed"));
ROUTE2180.setToNode(CString("uk"));
ROUTE2180.setToField(CString("R"));
Scene7.addChild(&ROUTE2180);

ROUTE& ROUTE2181 =  ROUTE();
ROUTE2181.setFromNode(CString("xk"));
ROUTE2181.setFromField(CString("Dg"));
ROUTE2181.setToNode(CString("vk"));
ROUTE2181.setToField(CString("R"));
Scene7.addChild(&ROUTE2181);

ROUTE& ROUTE2182 =  ROUTE();
ROUTE2182.setFromNode(CString("xk"));
ROUTE2182.setFromField(CString("Bg"));
ROUTE2182.setToNode(CString("wk"));
ROUTE2182.setToField(CString("set_position"));
Scene7.addChild(&ROUTE2182);

ROUTE& ROUTE2183 =  ROUTE();
ROUTE2183.setFromNode(CString("vk"));
ROUTE2183.setFromField(CString("fraction"));
ROUTE2183.setToNode(CString("xk"));
ROUTE2183.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE2183);

ROUTE& ROUTE2184 =  ROUTE();
ROUTE2184.setFromNode(CString("Hi"));
ROUTE2184.setFromField(CString("i"));
ROUTE2184.setToNode(CString("yk"));
ROUTE2184.setToField(CString("R"));
Scene7.addChild(&ROUTE2184);

ROUTE& ROUTE2185 =  ROUTE();
ROUTE2185.setFromNode(CString("vk"));
ROUTE2185.setFromField(CString("stopTime"));
ROUTE2185.setToNode(CString("yk"));
ROUTE2185.setToField(CString("S"));
Scene7.addChild(&ROUTE2185);

ROUTE& ROUTE2186 =  ROUTE();
ROUTE2186.setFromNode(CString("vk"));
ROUTE2186.setFromField(CString("Ba"));
ROUTE2186.setToNode(CString("yk"));
ROUTE2186.setToField(CString("S"));
Scene7.addChild(&ROUTE2186);

ROUTE& ROUTE2187 =  ROUTE();
ROUTE2187.setFromNode(CString("Hi"));
ROUTE2187.setFromField(CString("i"));
ROUTE2187.setToNode(CString("rk"));
ROUTE2187.setToField(CString("R"));
Scene7.addChild(&ROUTE2187);

ROUTE& ROUTE2188 =  ROUTE();
ROUTE2188.setFromNode(CString("uk"));
ROUTE2188.setFromField(CString("stopTime"));
ROUTE2188.setToNode(CString("rk"));
ROUTE2188.setToField(CString("S"));
Scene7.addChild(&ROUTE2188);

ROUTE& ROUTE2189 =  ROUTE();
ROUTE2189.setFromNode(CString("uk"));
ROUTE2189.setFromField(CString("fraction"));
ROUTE2189.setToNode(CString("rk"));
ROUTE2189.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE2189);

ROUTE& ROUTE2190 =  ROUTE();
ROUTE2190.setFromNode(CString("Hi"));
ROUTE2190.setFromField(CString("i"));
ROUTE2190.setToNode(CString("dk"));
ROUTE2190.setToField(CString("R"));
Scene7.addChild(&ROUTE2190);

ROUTE& ROUTE2191 =  ROUTE();
ROUTE2191.setFromNode(CString("tk"));
ROUTE2191.setFromField(CString("stopTime"));
ROUTE2191.setToNode(CString("dk"));
ROUTE2191.setToField(CString("S"));
Scene7.addChild(&ROUTE2191);

ROUTE& ROUTE2192 =  ROUTE();
ROUTE2192.setFromNode(CString("tk"));
ROUTE2192.setFromField(CString("fraction"));
ROUTE2192.setToNode(CString("dk"));
ROUTE2192.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE2192);

ROUTE& ROUTE2193 =  ROUTE();
ROUTE2193.setFromNode(CString("Gk"));
ROUTE2193.setFromField(CString("startTime"));
ROUTE2193.setToNode(CString("Fk"));
ROUTE2193.setToField(CString("R"));
Scene7.addChild(&ROUTE2193);

ROUTE& ROUTE2194 =  ROUTE();
ROUTE2194.setFromNode(CString("vk"));
ROUTE2194.setFromField(CString("Aa"));
ROUTE2194.setToNode(CString("Gk"));
ROUTE2194.setToField(CString("R"));
Scene7.addChild(&ROUTE2194);

ROUTE& ROUTE2195 =  ROUTE();
ROUTE2195.setFromNode(CString("vk"));
ROUTE2195.setFromField(CString("startTime"));
ROUTE2195.setToNode(CString("Gk"));
ROUTE2195.setToField(CString("R"));
Scene7.addChild(&ROUTE2195);

ROUTE& ROUTE2196 =  ROUTE();
ROUTE2196.setFromNode(CString("Fk"));
ROUTE2196.setFromField(CString("stopTime"));
ROUTE2196.setToNode(CString("Gk"));
ROUTE2196.setToField(CString("S"));
Scene7.addChild(&ROUTE2196);

ROUTE& ROUTE2197 =  ROUTE();
ROUTE2197.setFromNode(CString("Fk"));
ROUTE2197.setFromField(CString("va"));
ROUTE2197.setToNode(CString("Gk"));
ROUTE2197.setToField(CString("set_intensity"));
Scene7.addChild(&ROUTE2197);

ROUTE& ROUTE2198 =  ROUTE();
ROUTE2198.setFromNode(CString("Fk"));
ROUTE2198.setFromField(CString("fraction"));
ROUTE2198.setToNode(CString("Gk"));
ROUTE2198.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE2198);

ROUTE& ROUTE2199 =  ROUTE();
ROUTE2199.setFromNode(CString("Ek"));
ROUTE2199.setFromField(CString("Jh"));
ROUTE2199.setToNode(CString("Gk"));
ROUTE2199.setToField(CString("Jh"));
Scene7.addChild(&ROUTE2199);

ROUTE& ROUTE2200 =  ROUTE();
ROUTE2200.setFromNode(CString("Ik"));
ROUTE2200.setFromField(CString("R_changed"));
ROUTE2200.setToNode(CString("Hk"));
ROUTE2200.setToField(CString("R"));
Scene7.addChild(&ROUTE2200);

ROUTE& ROUTE2201 =  ROUTE();
ROUTE2201.setFromNode(CString("Gk"));
ROUTE2201.setFromField(CString("stopTime"));
ROUTE2201.setToNode(CString("Ik"));
ROUTE2201.setToField(CString("R"));
Scene7.addChild(&ROUTE2201);

ROUTE& ROUTE2202 =  ROUTE();
ROUTE2202.setFromNode(CString("Hk"));
ROUTE2202.setFromField(CString("stopTime"));
ROUTE2202.setToNode(CString("Ik"));
ROUTE2202.setToField(CString("S"));
Scene7.addChild(&ROUTE2202);

ROUTE& ROUTE2203 =  ROUTE();
ROUTE2203.setFromNode(CString("Kk"));
ROUTE2203.setFromField(CString("startTime"));
ROUTE2203.setToNode(CString("Jk"));
ROUTE2203.setToField(CString("R"));
Scene7.addChild(&ROUTE2203);

ROUTE& ROUTE2204 =  ROUTE();
ROUTE2204.setFromNode(CString("Hk"));
ROUTE2204.setFromField(CString("stopTime"));
ROUTE2204.setToNode(CString("Kk"));
ROUTE2204.setToField(CString("R"));
Scene7.addChild(&ROUTE2204);

ROUTE& ROUTE2205 =  ROUTE();
ROUTE2205.setFromNode(CString("Jk"));
ROUTE2205.setFromField(CString("stopTime"));
ROUTE2205.setToNode(CString("Kk"));
ROUTE2205.setToField(CString("S"));
Scene7.addChild(&ROUTE2205);

ROUTE& ROUTE2206 =  ROUTE();
ROUTE2206.setFromNode(CString("Jk"));
ROUTE2206.setFromField(CString("va"));
ROUTE2206.setToNode(CString("Kk"));
ROUTE2206.setToField(CString("set_intensity"));
Scene7.addChild(&ROUTE2206);

ROUTE& ROUTE2207 =  ROUTE();
ROUTE2207.setFromNode(CString("Jk"));
ROUTE2207.setFromField(CString("fraction"));
ROUTE2207.setToNode(CString("Kk"));
ROUTE2207.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE2207);

ROUTE& ROUTE2208 =  ROUTE();
ROUTE2208.setFromNode(CString("Ek"));
ROUTE2208.setFromField(CString("Jh"));
ROUTE2208.setToNode(CString("Kk"));
ROUTE2208.setToField(CString("Jh"));
Scene7.addChild(&ROUTE2208);

ROUTE& ROUTE2209 =  ROUTE();
ROUTE2209.setFromNode(CString("Mk"));
ROUTE2209.setFromField(CString("R_changed"));
ROUTE2209.setToNode(CString("Lk"));
ROUTE2209.setToField(CString("R"));
Scene7.addChild(&ROUTE2209);

ROUTE& ROUTE2210 =  ROUTE();
ROUTE2210.setFromNode(CString("Kk"));
ROUTE2210.setFromField(CString("stopTime"));
ROUTE2210.setToNode(CString("Mk"));
ROUTE2210.setToField(CString("R"));
Scene7.addChild(&ROUTE2210);

ROUTE& ROUTE2211 =  ROUTE();
ROUTE2211.setFromNode(CString("Lk"));
ROUTE2211.setFromField(CString("stopTime"));
ROUTE2211.setToNode(CString("Mk"));
ROUTE2211.setToField(CString("S"));
Scene7.addChild(&ROUTE2211);

ROUTE& ROUTE2212 =  ROUTE();
ROUTE2212.setFromNode(CString("Ok"));
ROUTE2212.setFromField(CString("startTime"));
ROUTE2212.setToNode(CString("Nk"));
ROUTE2212.setToField(CString("R"));
Scene7.addChild(&ROUTE2212);

ROUTE& ROUTE2213 =  ROUTE();
ROUTE2213.setFromNode(CString("Lk"));
ROUTE2213.setFromField(CString("stopTime"));
ROUTE2213.setToNode(CString("Ok"));
ROUTE2213.setToField(CString("R"));
Scene7.addChild(&ROUTE2213);

ROUTE& ROUTE2214 =  ROUTE();
ROUTE2214.setFromNode(CString("Nk"));
ROUTE2214.setFromField(CString("stopTime"));
ROUTE2214.setToNode(CString("Ok"));
ROUTE2214.setToField(CString("S"));
Scene7.addChild(&ROUTE2214);

ROUTE& ROUTE2215 =  ROUTE();
ROUTE2215.setFromNode(CString("Nk"));
ROUTE2215.setFromField(CString("va"));
ROUTE2215.setToNode(CString("Ok"));
ROUTE2215.setToField(CString("set_intensity"));
Scene7.addChild(&ROUTE2215);

ROUTE& ROUTE2216 =  ROUTE();
ROUTE2216.setFromNode(CString("Nk"));
ROUTE2216.setFromField(CString("fraction"));
ROUTE2216.setToNode(CString("Ok"));
ROUTE2216.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE2216);

ROUTE& ROUTE2217 =  ROUTE();
ROUTE2217.setFromNode(CString("Ek"));
ROUTE2217.setFromField(CString("Jh"));
ROUTE2217.setToNode(CString("Ok"));
ROUTE2217.setToField(CString("Jh"));
Scene7.addChild(&ROUTE2217);

ROUTE& ROUTE2218 =  ROUTE();
ROUTE2218.setFromNode(CString("Qk"));
ROUTE2218.setFromField(CString("R_changed"));
ROUTE2218.setToNode(CString("Pk"));
ROUTE2218.setToField(CString("R"));
Scene7.addChild(&ROUTE2218);

ROUTE& ROUTE2219 =  ROUTE();
ROUTE2219.setFromNode(CString("Ok"));
ROUTE2219.setFromField(CString("stopTime"));
ROUTE2219.setToNode(CString("Qk"));
ROUTE2219.setToField(CString("R"));
Scene7.addChild(&ROUTE2219);

ROUTE& ROUTE2220 =  ROUTE();
ROUTE2220.setFromNode(CString("Pk"));
ROUTE2220.setFromField(CString("stopTime"));
ROUTE2220.setToNode(CString("Qk"));
ROUTE2220.setToField(CString("S"));
Scene7.addChild(&ROUTE2220);

ROUTE& ROUTE2221 =  ROUTE();
ROUTE2221.setFromNode(CString("Sk"));
ROUTE2221.setFromField(CString("startTime"));
ROUTE2221.setToNode(CString("Rk"));
ROUTE2221.setToField(CString("R"));
Scene7.addChild(&ROUTE2221);

ROUTE& ROUTE2222 =  ROUTE();
ROUTE2222.setFromNode(CString("Pk"));
ROUTE2222.setFromField(CString("stopTime"));
ROUTE2222.setToNode(CString("Sk"));
ROUTE2222.setToField(CString("R"));
Scene7.addChild(&ROUTE2222);

ROUTE& ROUTE2223 =  ROUTE();
ROUTE2223.setFromNode(CString("Rk"));
ROUTE2223.setFromField(CString("stopTime"));
ROUTE2223.setToNode(CString("Sk"));
ROUTE2223.setToField(CString("S"));
Scene7.addChild(&ROUTE2223);

ROUTE& ROUTE2224 =  ROUTE();
ROUTE2224.setFromNode(CString("Rk"));
ROUTE2224.setFromField(CString("va"));
ROUTE2224.setToNode(CString("Sk"));
ROUTE2224.setToField(CString("set_intensity"));
Scene7.addChild(&ROUTE2224);

ROUTE& ROUTE2225 =  ROUTE();
ROUTE2225.setFromNode(CString("Rk"));
ROUTE2225.setFromField(CString("fraction"));
ROUTE2225.setToNode(CString("Sk"));
ROUTE2225.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE2225);

ROUTE& ROUTE2226 =  ROUTE();
ROUTE2226.setFromNode(CString("Ek"));
ROUTE2226.setFromField(CString("Jh"));
ROUTE2226.setToNode(CString("Sk"));
ROUTE2226.setToField(CString("Jh"));
Scene7.addChild(&ROUTE2226);

ROUTE& ROUTE2227 =  ROUTE();
ROUTE2227.setFromNode(CString("Uk"));
ROUTE2227.setFromField(CString("R_changed"));
ROUTE2227.setToNode(CString("Tk"));
ROUTE2227.setToField(CString("R"));
Scene7.addChild(&ROUTE2227);

ROUTE& ROUTE2228 =  ROUTE();
ROUTE2228.setFromNode(CString("Sk"));
ROUTE2228.setFromField(CString("stopTime"));
ROUTE2228.setToNode(CString("Uk"));
ROUTE2228.setToField(CString("R"));
Scene7.addChild(&ROUTE2228);

ROUTE& ROUTE2229 =  ROUTE();
ROUTE2229.setFromNode(CString("Tk"));
ROUTE2229.setFromField(CString("stopTime"));
ROUTE2229.setToNode(CString("Uk"));
ROUTE2229.setToField(CString("S"));
Scene7.addChild(&ROUTE2229);

ROUTE& ROUTE2230 =  ROUTE();
ROUTE2230.setFromNode(CString("Wk"));
ROUTE2230.setFromField(CString("startTime"));
ROUTE2230.setToNode(CString("Vk"));
ROUTE2230.setToField(CString("R"));
Scene7.addChild(&ROUTE2230);

ROUTE& ROUTE2231 =  ROUTE();
ROUTE2231.setFromNode(CString("Tk"));
ROUTE2231.setFromField(CString("stopTime"));
ROUTE2231.setToNode(CString("Wk"));
ROUTE2231.setToField(CString("R"));
Scene7.addChild(&ROUTE2231);

ROUTE& ROUTE2232 =  ROUTE();
ROUTE2232.setFromNode(CString("Vk"));
ROUTE2232.setFromField(CString("stopTime"));
ROUTE2232.setToNode(CString("Wk"));
ROUTE2232.setToField(CString("S"));
Scene7.addChild(&ROUTE2232);

ROUTE& ROUTE2233 =  ROUTE();
ROUTE2233.setFromNode(CString("Vk"));
ROUTE2233.setFromField(CString("va"));
ROUTE2233.setToNode(CString("Wk"));
ROUTE2233.setToField(CString("set_intensity"));
Scene7.addChild(&ROUTE2233);

ROUTE& ROUTE2234 =  ROUTE();
ROUTE2234.setFromNode(CString("Vk"));
ROUTE2234.setFromField(CString("fraction"));
ROUTE2234.setToNode(CString("Wk"));
ROUTE2234.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE2234);

ROUTE& ROUTE2235 =  ROUTE();
ROUTE2235.setFromNode(CString("Ek"));
ROUTE2235.setFromField(CString("Jh"));
ROUTE2235.setToNode(CString("Wk"));
ROUTE2235.setToField(CString("Jh"));
Scene7.addChild(&ROUTE2235);

ROUTE& ROUTE2236 =  ROUTE();
ROUTE2236.setFromNode(CString("Yk"));
ROUTE2236.setFromField(CString("R_changed"));
ROUTE2236.setToNode(CString("Xk"));
ROUTE2236.setToField(CString("R"));
Scene7.addChild(&ROUTE2236);

ROUTE& ROUTE2237 =  ROUTE();
ROUTE2237.setFromNode(CString("Wk"));
ROUTE2237.setFromField(CString("stopTime"));
ROUTE2237.setToNode(CString("Yk"));
ROUTE2237.setToField(CString("R"));
Scene7.addChild(&ROUTE2237);

ROUTE& ROUTE2238 =  ROUTE();
ROUTE2238.setFromNode(CString("Xk"));
ROUTE2238.setFromField(CString("stopTime"));
ROUTE2238.setToNode(CString("Yk"));
ROUTE2238.setToField(CString("S"));
Scene7.addChild(&ROUTE2238);

ROUTE& ROUTE2239 =  ROUTE();
ROUTE2239.setFromNode(CString("al"));
ROUTE2239.setFromField(CString("startTime"));
ROUTE2239.setToNode(CString("Zk"));
ROUTE2239.setToField(CString("R"));
Scene7.addChild(&ROUTE2239);

ROUTE& ROUTE2240 =  ROUTE();
ROUTE2240.setFromNode(CString("Xk"));
ROUTE2240.setFromField(CString("stopTime"));
ROUTE2240.setToNode(CString("al"));
ROUTE2240.setToField(CString("R"));
Scene7.addChild(&ROUTE2240);

ROUTE& ROUTE2241 =  ROUTE();
ROUTE2241.setFromNode(CString("Zk"));
ROUTE2241.setFromField(CString("stopTime"));
ROUTE2241.setToNode(CString("al"));
ROUTE2241.setToField(CString("S"));
Scene7.addChild(&ROUTE2241);

ROUTE& ROUTE2242 =  ROUTE();
ROUTE2242.setFromNode(CString("Zk"));
ROUTE2242.setFromField(CString("va"));
ROUTE2242.setToNode(CString("al"));
ROUTE2242.setToField(CString("set_intensity"));
Scene7.addChild(&ROUTE2242);

ROUTE& ROUTE2243 =  ROUTE();
ROUTE2243.setFromNode(CString("Zk"));
ROUTE2243.setFromField(CString("fraction"));
ROUTE2243.setToNode(CString("al"));
ROUTE2243.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE2243);

ROUTE& ROUTE2244 =  ROUTE();
ROUTE2244.setFromNode(CString("Ek"));
ROUTE2244.setFromField(CString("Jh"));
ROUTE2244.setToNode(CString("al"));
ROUTE2244.setToField(CString("Jh"));
Scene7.addChild(&ROUTE2244);

ROUTE& ROUTE2245 =  ROUTE();
ROUTE2245.setFromNode(CString("cl"));
ROUTE2245.setFromField(CString("R_changed"));
ROUTE2245.setToNode(CString("bl"));
ROUTE2245.setToField(CString("R"));
Scene7.addChild(&ROUTE2245);

ROUTE& ROUTE2246 =  ROUTE();
ROUTE2246.setFromNode(CString("al"));
ROUTE2246.setFromField(CString("stopTime"));
ROUTE2246.setToNode(CString("cl"));
ROUTE2246.setToField(CString("R"));
Scene7.addChild(&ROUTE2246);

ROUTE& ROUTE2247 =  ROUTE();
ROUTE2247.setFromNode(CString("bl"));
ROUTE2247.setFromField(CString("stopTime"));
ROUTE2247.setToNode(CString("cl"));
ROUTE2247.setToField(CString("S"));
Scene7.addChild(&ROUTE2247);

ROUTE& ROUTE2248 =  ROUTE();
ROUTE2248.setFromNode(CString("el"));
ROUTE2248.setFromField(CString("startTime"));
ROUTE2248.setToNode(CString("dl"));
ROUTE2248.setToField(CString("R"));
Scene7.addChild(&ROUTE2248);

ROUTE& ROUTE2249 =  ROUTE();
ROUTE2249.setFromNode(CString("bl"));
ROUTE2249.setFromField(CString("stopTime"));
ROUTE2249.setToNode(CString("el"));
ROUTE2249.setToField(CString("R"));
Scene7.addChild(&ROUTE2249);

ROUTE& ROUTE2250 =  ROUTE();
ROUTE2250.setFromNode(CString("dl"));
ROUTE2250.setFromField(CString("stopTime"));
ROUTE2250.setToNode(CString("el"));
ROUTE2250.setToField(CString("S"));
Scene7.addChild(&ROUTE2250);

ROUTE& ROUTE2251 =  ROUTE();
ROUTE2251.setFromNode(CString("dl"));
ROUTE2251.setFromField(CString("va"));
ROUTE2251.setToNode(CString("el"));
ROUTE2251.setToField(CString("set_intensity"));
Scene7.addChild(&ROUTE2251);

ROUTE& ROUTE2252 =  ROUTE();
ROUTE2252.setFromNode(CString("dl"));
ROUTE2252.setFromField(CString("fraction"));
ROUTE2252.setToNode(CString("el"));
ROUTE2252.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE2252);

ROUTE& ROUTE2253 =  ROUTE();
ROUTE2253.setFromNode(CString("Ek"));
ROUTE2253.setFromField(CString("Jh"));
ROUTE2253.setToNode(CString("el"));
ROUTE2253.setToField(CString("Jh"));
Scene7.addChild(&ROUTE2253);

ROUTE& ROUTE2254 =  ROUTE();
ROUTE2254.setFromNode(CString("gl"));
ROUTE2254.setFromField(CString("R_changed"));
ROUTE2254.setToNode(CString("fl"));
ROUTE2254.setToField(CString("R"));
Scene7.addChild(&ROUTE2254);

ROUTE& ROUTE2255 =  ROUTE();
ROUTE2255.setFromNode(CString("el"));
ROUTE2255.setFromField(CString("stopTime"));
ROUTE2255.setToNode(CString("gl"));
ROUTE2255.setToField(CString("R"));
Scene7.addChild(&ROUTE2255);

ROUTE& ROUTE2256 =  ROUTE();
ROUTE2256.setFromNode(CString("fl"));
ROUTE2256.setFromField(CString("stopTime"));
ROUTE2256.setToNode(CString("gl"));
ROUTE2256.setToField(CString("S"));
Scene7.addChild(&ROUTE2256);

ROUTE& ROUTE2257 =  ROUTE();
ROUTE2257.setFromNode(CString("Hi"));
ROUTE2257.setFromField(CString("j"));
ROUTE2257.setToNode(CString("kl"));
ROUTE2257.setToField(CString("h"));
Scene7.addChild(&ROUTE2257);

X3D0.setScene(&Scene7);

//}
