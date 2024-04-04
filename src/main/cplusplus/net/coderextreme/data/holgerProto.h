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
meta2.setContent(CString("x3dconnectorProto.x3d"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(CString("creator"));
meta3.setContent(CString("Lost, Doug Sanden I think"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("created"));
meta4.setContent(CString("Unknown"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("modified"));
meta5.setContent(CString("Sat, 30 Dec 2023 10:14:10 GMT"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("generator"));
meta6.setContent(CString("manual"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("generator"));
meta7.setContent(CString("x3d-tidy V1.0.118, https://www.npmjs.com/package/x3d-tidy"));
head1.addMeta(&meta7);

X3D0.setHead(&head1);

Scene& Scene8 =  Scene();
ProtoDeclare& ProtoDeclare9 =  ProtoDeclare();
ProtoDeclare9.setName(CString("x3dconnector"));
ProtoInterface& ProtoInterface10 =  ProtoInterface();
field& field11 =  field();
field11.setAccessType(CString("initializeOnly"));
field11.setType(CString("SFNode"));
field11.setName(CString("startnode"));
ProtoInterface10.addChild(&field11);

field& field12 =  field();
field12.setAccessType(CString("initializeOnly"));
field12.setType(CString("SFNode"));
field12.setName(CString("endnode"));
ProtoInterface10.addChild(&field12);

field& field13 =  field();
field13.setAccessType(CString("initializeOnly"));
field13.setType(CString("SFNode"));
field13.setName(CString("transnode"));
ProtoInterface10.addChild(&field13);

field& field14 =  field();
field14.setAccessType(CString("initializeOnly"));
field14.setType(CString("SFNode"));
field14.setName(CString("rotscalenode"));
ProtoInterface10.addChild(&field14);

field& field15 =  field();
field15.setAccessType(CString("inputOnly"));
field15.setType(CString("SFVec3f"));
field15.setName(CString("set_startpoint"));
ProtoInterface10.addChild(&field15);

field& field16 =  field();
field16.setAccessType(CString("inputOnly"));
field16.setType(CString("SFVec3f"));
field16.setName(CString("set_endpoint"));
ProtoInterface10.addChild(&field16);

ProtoDeclare9.addChild(&ProtoInterface10);

ProtoBody& ProtoBody17 =  ProtoBody();
Script& Script18 =  Script();
Script18.setDEF(CString("S1"));
Script18.setDirectOutput(true);
field& field19 =  field();
field19.setAccessType(CString("initializeOnly"));
field19.setType(CString("SFNode"));
field19.setName(CString("startnode"));
Script18.addChild(&field19);

field& field20 =  field();
field20.setAccessType(CString("initializeOnly"));
field20.setType(CString("SFNode"));
field20.setName(CString("endnode"));
Script18.addChild(&field20);

field& field21 =  field();
field21.setAccessType(CString("initializeOnly"));
field21.setType(CString("SFNode"));
field21.setName(CString("transnode"));
Script18.addChild(&field21);

field& field22 =  field();
field22.setAccessType(CString("initializeOnly"));
field22.setType(CString("SFNode"));
field22.setName(CString("rotscalenode"));
Script18.addChild(&field22);

field& field23 =  field();
field23.setAccessType(CString("inputOnly"));
field23.setType(CString("SFVec3f"));
field23.setName(CString("set_startpoint"));
Script18.addChild(&field23);

field& field24 =  field();
field24.setAccessType(CString("inputOnly"));
field24.setType(CString("SFVec3f"));
field24.setName(CString("set_endpoint"));
Script18.addChild(&field24);


//Script18.setSourceCode(CString("ecmascript:")+
//_T("        function recompute(startpoint,endpoint){")+
//_T("	    if (typeof endpoint === 'undefined') {")+
//_T("		return;")+
//_T("	    }")+
//_T("            var dif = endpoint.subtract(startpoint);")+
//_T("            var dist = dif.length()*0.5;")+
//_T("            var dif2 = dif.multiply(0.5);")+
//_T("            var norm = dif.normalize();")+
//_T("            var transl = startpoint.add(dif2);")+
//_T("	    if (typeof Quaternion !== 'undefined') {")+
//_T("		    return {")+
//_T("			    scale : new SFVec3f(1.0,dist,1.0),")+
//_T("			    translation : transl,")+
//_T("			    rotation : new Quaternion.rotateFromTo(new SFVec3f(0.0,1.0,0.0), norm)")+
//_T("		    };")+
//_T("	    } else {")+
//_T("		    return {")+
//_T("			    scale : new SFVec3f(1.0,dist,1.0),")+
//_T("			    translation : transl,")+
//_T("			    rotation : new SFRotation(new SFVec3f(0.0,1.0,0.0),norm)")+
//_T("		    };")+
//_T("	    }")+
//_T("	}")+
//_T("	function recompute_and_route(startpoint, endpoint) {")+
//_T("	      var trafo = recompute(startpoint, endpoint);")+
//_T("	      if (trafo) {")+
//_T("		      transnode.translation = trafo.translation;")+
//_T("		      rotscalenode.rotation = trafo.rotation;")+
//_T("		      rotscalenode.scale = trafo.scale;")+
//_T("	      }")+
//_T("	}")+
//_T("        function initialize(){")+
//_T("            recompute_and_route(startnode.translation,endnode.translation);")+
//_T("        }")+
//_T("        function set_startpoint(val,t){")+
//_T("            recompute_and_route(val,endnode.translation);")+
//_T("        }")+
//_T("        function set_endpoint(val,t){")+
//_T("            recompute_and_route(startnode.translation,val);")+
//_T("        }"));
IS& IS25 =  IS();
Connect& connect26 =  Connect();
connect26.setNodeField(CString("startnode"));
connect26.setProtoField(CString("startnode"));
IS25.addChild(&connect26);

Connect& connect27 =  Connect();
connect27.setNodeField(CString("endnode"));
connect27.setProtoField(CString("endnode"));
IS25.addChild(&connect27);

Connect& connect28 =  Connect();
connect28.setNodeField(CString("transnode"));
connect28.setProtoField(CString("transnode"));
IS25.addChild(&connect28);

Connect& connect29 =  Connect();
connect29.setNodeField(CString("rotscalenode"));
connect29.setProtoField(CString("rotscalenode"));
IS25.addChild(&connect29);

Connect& connect30 =  Connect();
connect30.setNodeField(CString("set_startpoint"));
connect30.setProtoField(CString("set_startpoint"));
IS25.addChild(&connect30);

Connect& connect31 =  Connect();
connect31.setNodeField(CString("set_endpoint"));
connect31.setProtoField(CString("set_endpoint"));
IS25.addChild(&connect31);

Script18.addChild(&IS25);

ProtoBody17.addChild(&Script18);

ProtoDeclare9.addChild(&ProtoBody17);

Scene8.addChild(&ProtoDeclare9);

WorldInfo& WorldInfo32 =  WorldInfo();
WorldInfo32.setTitle(CString("Connector Proto"));
Scene8.addChild(&WorldInfo32);

Viewpoint& Viewpoint33 =  Viewpoint();
Viewpoint33.setDescription(CString("Only Viewpoint"));
Viewpoint33.setPosition(new float[3]{0.0,0.0,5.0});
Scene8.addChild(&Viewpoint33);

Background& Background34 =  Background();
Background34.setSkyColor(new float[3]{0.4,0.4,0.4}, 3);
Scene8.addChild(&Background34);

Transform& Transform35 =  Transform();
Transform35.setDEF(CString("G1"));
Shape& Shape36 =  Shape();
Appearance& Appearance37 =  Appearance();
Material& Material38 =  Material();
Material38.setDiffuseColor(new float[3]{0.7,0.2,0.2});
Appearance37.addChild(&Material38);

Shape36.addChild(&Appearance37);

Sphere& Sphere39 =  Sphere();
Sphere39.setRadius(0.1);
Shape36.setGeometry(&Sphere39);

Transform35.addChild(&Shape36);

PlaneSensor& PlaneSensor40 =  PlaneSensor();
PlaneSensor40.setDEF(CString("PS1"));
PlaneSensor40.setDescription(CString("Grab to move"));
Transform35.addChild(&PlaneSensor40);

Scene8.addChild(&Transform35);

Transform& Transform41 =  Transform();
Transform41.setDEF(CString("G2"));
Transform41.setTranslation(new float[3]{1.0,-1.0,0.01});
Shape& Shape42 =  Shape();
Appearance& Appearance43 =  Appearance();
Material& Material44 =  Material();
Material44.setDiffuseColor(new float[3]{0.2,0.7,0.2});
Appearance43.addChild(&Material44);

Shape42.addChild(&Appearance43);

Sphere& Sphere45 =  Sphere();
Sphere45.setRadius(0.1);
Shape42.setGeometry(&Sphere45);

Transform41.addChild(&Shape42);

PlaneSensor& PlaneSensor46 =  PlaneSensor();
PlaneSensor46.setDEF(CString("PS2"));
PlaneSensor46.setDescription(CString("Grab to move"));
PlaneSensor46.setOffset(new float[3]{1.0,-1.0,0.01});
Transform41.addChild(&PlaneSensor46);

Scene8.addChild(&Transform41);

Transform& Transform47 =  Transform();
Transform47.setDEF(CString("G3"));
Transform47.setTranslation(new float[3]{1.0,1.0,0.01});
Shape& Shape48 =  Shape();
Appearance& Appearance49 =  Appearance();
Material& Material50 =  Material();
Material50.setDiffuseColor(new float[3]{0.2,0.7,0.2});
Appearance49.addChild(&Material50);

Shape48.addChild(&Appearance49);

Sphere& Sphere51 =  Sphere();
Sphere51.setRadius(0.1);
Shape48.setGeometry(&Sphere51);

Transform47.addChild(&Shape48);

PlaneSensor& PlaneSensor52 =  PlaneSensor();
PlaneSensor52.setDEF(CString("PS3"));
PlaneSensor52.setDescription(CString("Grab to move"));
PlaneSensor52.setOffset(new float[3]{1.0,1.0,0.01});
Transform47.addChild(&PlaneSensor52);

Scene8.addChild(&Transform47);

Transform& Transform53 =  Transform();
Transform53.setDEF(CString("G4"));
Transform53.setTranslation(new float[3]{-1.0,1.0,0.01});
Shape& Shape54 =  Shape();
Appearance& Appearance55 =  Appearance();
Material& Material56 =  Material();
Material56.setDiffuseColor(new float[3]{0.2,0.7,0.2});
Appearance55.addChild(&Material56);

Shape54.addChild(&Appearance55);

Sphere& Sphere57 =  Sphere();
Sphere57.setRadius(0.1);
Shape54.setGeometry(&Sphere57);

Transform53.addChild(&Shape54);

PlaneSensor& PlaneSensor58 =  PlaneSensor();
PlaneSensor58.setDEF(CString("PS4"));
PlaneSensor58.setDescription(CString("Grab to move"));
PlaneSensor58.setOffset(new float[3]{-1.0,1.0,0.01});
Transform53.addChild(&PlaneSensor58);

Scene8.addChild(&Transform53);

Transform& Transform59 =  Transform();
Transform59.setDEF(CString("transC1"));
Transform& Transform60 =  Transform();
Transform60.setDEF(CString("rotscaleC1"));
Shape& Shape61 =  Shape();
Appearance& Appearance62 =  Appearance();
Material& Material63 =  Material();
Material63.setDiffuseColor(new float[3]{0.2,0.7,0.7});
Material63.setTransparency(0.5);
Appearance62.addChild(&Material63);

Shape61.addChild(&Appearance62);

Cylinder& Cylinder64 =  Cylinder();
Cylinder64.setRadius(0.05);
Shape61.setGeometry(&Cylinder64);

Transform60.addChild(&Shape61);

Transform59.addChild(&Transform60);

Scene8.addChild(&Transform59);

Transform& Transform65 =  Transform();
Transform65.setDEF(CString("transC2"));
Transform& Transform66 =  Transform();
Transform66.setDEF(CString("rotscaleC2"));
Shape& Shape67 =  Shape();
Appearance& Appearance68 =  Appearance();
Material& Material69 =  Material();
Material69.setDiffuseColor(new float[3]{0.2,0.7,0.7});
Material69.setTransparency(0.5);
Appearance68.addChild(&Material69);

Shape67.addChild(&Appearance68);

Cylinder& Cylinder70 =  Cylinder();
Cylinder70.setRadius(0.05);
Shape67.setGeometry(&Cylinder70);

Transform66.addChild(&Shape67);

Transform65.addChild(&Transform66);

Scene8.addChild(&Transform65);

Transform& Transform71 =  Transform();
Transform71.setDEF(CString("transC3"));
Transform& Transform72 =  Transform();
Transform72.setDEF(CString("rotscaleC3"));
Shape& Shape73 =  Shape();
Appearance& Appearance74 =  Appearance();
Material& Material75 =  Material();
Material75.setDiffuseColor(new float[3]{0.2,0.7,0.7});
Material75.setTransparency(0.5);
Appearance74.addChild(&Material75);

Shape73.addChild(&Appearance74);

Cylinder& Cylinder76 =  Cylinder();
Cylinder76.setRadius(0.05);
Shape73.setGeometry(&Cylinder76);

Transform72.addChild(&Shape73);

Transform71.addChild(&Transform72);

Scene8.addChild(&Transform71);

ProtoInstance& ProtoInstance77 =  ProtoInstance();
ProtoInstance77.setDEF(CString("connector1"));
ProtoInstance77.setName(CString("x3dconnector"));
fieldValue& fieldValue78 =  fieldValue();
fieldValue78.setName(CString("startnode"));
Transform& Transform79 =  Transform();
Transform79.setUSE(CString("G1"));
fieldValue78.addChild(&Transform79);

ProtoInstance77.addChild(&fieldValue78);

fieldValue& fieldValue80 =  fieldValue();
fieldValue80.setName(CString("endnode"));
Transform& Transform81 =  Transform();
Transform81.setUSE(CString("G2"));
fieldValue80.addChild(&Transform81);

ProtoInstance77.addChild(&fieldValue80);

fieldValue& fieldValue82 =  fieldValue();
fieldValue82.setName(CString("transnode"));
Transform& Transform83 =  Transform();
Transform83.setUSE(CString("transC1"));
fieldValue82.addChild(&Transform83);

ProtoInstance77.addChild(&fieldValue82);

fieldValue& fieldValue84 =  fieldValue();
fieldValue84.setName(CString("rotscalenode"));
Transform& Transform85 =  Transform();
Transform85.setUSE(CString("rotscaleC1"));
fieldValue84.addChild(&Transform85);

ProtoInstance77.addChild(&fieldValue84);

Scene8.addChild(&ProtoInstance77);

ProtoInstance& ProtoInstance86 =  ProtoInstance();
ProtoInstance86.setDEF(CString("connector2"));
ProtoInstance86.setName(CString("x3dconnector"));
fieldValue& fieldValue87 =  fieldValue();
fieldValue87.setName(CString("startnode"));
Transform& Transform88 =  Transform();
Transform88.setUSE(CString("G1"));
fieldValue87.addChild(&Transform88);

ProtoInstance86.addChild(&fieldValue87);

fieldValue& fieldValue89 =  fieldValue();
fieldValue89.setName(CString("endnode"));
Transform& Transform90 =  Transform();
Transform90.setUSE(CString("G3"));
fieldValue89.addChild(&Transform90);

ProtoInstance86.addChild(&fieldValue89);

fieldValue& fieldValue91 =  fieldValue();
fieldValue91.setName(CString("transnode"));
Transform& Transform92 =  Transform();
Transform92.setUSE(CString("transC2"));
fieldValue91.addChild(&Transform92);

ProtoInstance86.addChild(&fieldValue91);

fieldValue& fieldValue93 =  fieldValue();
fieldValue93.setName(CString("rotscalenode"));
Transform& Transform94 =  Transform();
Transform94.setUSE(CString("rotscaleC2"));
fieldValue93.addChild(&Transform94);

ProtoInstance86.addChild(&fieldValue93);

Scene8.addChild(&ProtoInstance86);

ProtoInstance& ProtoInstance95 =  ProtoInstance();
ProtoInstance95.setDEF(CString("connector3"));
ProtoInstance95.setName(CString("x3dconnector"));
fieldValue& fieldValue96 =  fieldValue();
fieldValue96.setName(CString("startnode"));
Transform& Transform97 =  Transform();
Transform97.setUSE(CString("G1"));
fieldValue96.addChild(&Transform97);

ProtoInstance95.addChild(&fieldValue96);

fieldValue& fieldValue98 =  fieldValue();
fieldValue98.setName(CString("endnode"));
Transform& Transform99 =  Transform();
Transform99.setUSE(CString("G4"));
fieldValue98.addChild(&Transform99);

ProtoInstance95.addChild(&fieldValue98);

fieldValue& fieldValue100 =  fieldValue();
fieldValue100.setName(CString("transnode"));
Transform& Transform101 =  Transform();
Transform101.setUSE(CString("transC3"));
fieldValue100.addChild(&Transform101);

ProtoInstance95.addChild(&fieldValue100);

fieldValue& fieldValue102 =  fieldValue();
fieldValue102.setName(CString("rotscalenode"));
Transform& Transform103 =  Transform();
Transform103.setUSE(CString("rotscaleC3"));
fieldValue102.addChild(&Transform103);

ProtoInstance95.addChild(&fieldValue102);

Scene8.addChild(&ProtoInstance95);

ROUTE& ROUTE104 =  ROUTE();
ROUTE104.setFromNode(CString("PS1"));
ROUTE104.setFromField(CString("translation_changed"));
ROUTE104.setToNode(CString("G1"));
ROUTE104.setToField(CString("translation"));
Scene8.addChild(&ROUTE104);

ROUTE& ROUTE105 =  ROUTE();
ROUTE105.setFromNode(CString("PS2"));
ROUTE105.setFromField(CString("translation_changed"));
ROUTE105.setToNode(CString("G2"));
ROUTE105.setToField(CString("translation"));
Scene8.addChild(&ROUTE105);

ROUTE& ROUTE106 =  ROUTE();
ROUTE106.setFromNode(CString("PS3"));
ROUTE106.setFromField(CString("translation_changed"));
ROUTE106.setToNode(CString("G3"));
ROUTE106.setToField(CString("translation"));
Scene8.addChild(&ROUTE106);

ROUTE& ROUTE107 =  ROUTE();
ROUTE107.setFromNode(CString("PS4"));
ROUTE107.setFromField(CString("translation_changed"));
ROUTE107.setToNode(CString("G4"));
ROUTE107.setToField(CString("translation"));
Scene8.addChild(&ROUTE107);

ROUTE& ROUTE108 =  ROUTE();
ROUTE108.setFromNode(CString("G1"));
ROUTE108.setFromField(CString("translation"));
ROUTE108.setToNode(CString("connector1"));
ROUTE108.setToField(CString("set_startpoint"));
Scene8.addChild(&ROUTE108);

ROUTE& ROUTE109 =  ROUTE();
ROUTE109.setFromNode(CString("G2"));
ROUTE109.setFromField(CString("translation"));
ROUTE109.setToNode(CString("connector1"));
ROUTE109.setToField(CString("set_endpoint"));
Scene8.addChild(&ROUTE109);

ROUTE& ROUTE110 =  ROUTE();
ROUTE110.setFromNode(CString("G1"));
ROUTE110.setFromField(CString("translation"));
ROUTE110.setToNode(CString("connector2"));
ROUTE110.setToField(CString("set_startpoint"));
Scene8.addChild(&ROUTE110);

ROUTE& ROUTE111 =  ROUTE();
ROUTE111.setFromNode(CString("G3"));
ROUTE111.setFromField(CString("translation"));
ROUTE111.setToNode(CString("connector2"));
ROUTE111.setToField(CString("set_endpoint"));
Scene8.addChild(&ROUTE111);

ROUTE& ROUTE112 =  ROUTE();
ROUTE112.setFromNode(CString("G1"));
ROUTE112.setFromField(CString("translation"));
ROUTE112.setToNode(CString("connector3"));
ROUTE112.setToField(CString("set_startpoint"));
Scene8.addChild(&ROUTE112);

ROUTE& ROUTE113 =  ROUTE();
ROUTE113.setFromNode(CString("G4"));
ROUTE113.setFromField(CString("translation"));
ROUTE113.setToNode(CString("connector3"));
ROUTE113.setToField(CString("set_endpoint"));
Scene8.addChild(&ROUTE113);

X3D0.setScene(&Scene8);

//}
