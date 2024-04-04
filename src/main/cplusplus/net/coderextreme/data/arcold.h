//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
//int main(int argc, char ** argv) 
//{
X3D& X3D0 =  X3D();
X3D0.setProfile(CString("Immersive"));
X3D0.setVersion(CString("3.3"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(CString("title"));
meta2.setContent(CString("arcold.x3d"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(CString("creator"));
meta3.setContent(CString("John Carlson"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("generator"));
meta4.setContent(CString("manual"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("identifier"));
meta5.setContent(CString("https://coderextreme.net/X3DJSONLD/src/main/data/arc.x3d"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("description"));
meta6.setContent(CString("an attempt to implement an arc in a graph"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
Viewpoint& Viewpoint8 =  Viewpoint();
Viewpoint8.setPosition(new float[3]{0.0,0.0,5.0});
Viewpoint8.setDescription(CString("a moving graph"));
Scene7.addChild(&Viewpoint8);

Background& Background9 =  Background();
Background9.setSkyColor(new float[3]{0.4,0.4,0.4}, 3);
Scene7.addChild(&Background9);

Transform& Transform10 =  Transform();
Transform10.setDEF(CString("trans1"));
Transform& Transform11 =  Transform();
Transform11.setDEF(CString("rotscale1"));
Shape& Shape12 =  Shape();
Appearance& Appearance13 =  Appearance();
Material& Material14 =  Material();
Material14.setDiffuseColor(new float[3]{0.2,0.7,0.7});
Appearance13.addChild(&Material14);

Shape12.addChild(&Appearance13);

Cylinder& Cylinder15 =  Cylinder();
Cylinder15.setRadius(0.1);
Shape12.setGeometry(&Cylinder15);

Transform11.addChild(&Shape12);

Transform10.addChild(&Transform11);

Scene7.addChild(&Transform10);

Transform& Transform16 =  Transform();
Transform16.setDEF(CString("trans2"));
Transform& Transform17 =  Transform();
Transform17.setDEF(CString("rotscale2"));
Shape& Shape18 =  Shape();
Appearance& Appearance19 =  Appearance();
Material& Material20 =  Material();
Material20.setDiffuseColor(new float[3]{0.2,0.7,0.7});
Appearance19.addChild(&Material20);

Shape18.addChild(&Appearance19);

Cylinder& Cylinder21 =  Cylinder();
Cylinder21.setRadius(0.1);
Shape18.setGeometry(&Cylinder21);

Transform17.addChild(&Shape18);

Transform16.addChild(&Transform17);

Scene7.addChild(&Transform16);

Transform& Transform22 =  Transform();
Transform22.setDEF(CString("trans3"));
Transform& Transform23 =  Transform();
Transform23.setDEF(CString("rotscale3"));
Shape& Shape24 =  Shape();
Appearance& Appearance25 =  Appearance();
Material& Material26 =  Material();
Material26.setDiffuseColor(new float[3]{0.2,0.7,0.7});
Appearance25.addChild(&Material26);

Shape24.addChild(&Appearance25);

Cylinder& Cylinder27 =  Cylinder();
Cylinder27.setRadius(0.1);
Shape24.setGeometry(&Cylinder27);

Transform23.addChild(&Shape24);

Transform22.addChild(&Transform23);

Scene7.addChild(&Transform22);

ProtoDeclare& ProtoDeclare28 =  ProtoDeclare();
ProtoDeclare28.setName(CString("point"));
ProtoInterface& ProtoInterface29 =  ProtoInterface();
field& field30 =  field();
field30.setName(CString("translation"));
field30.setAccessType(CString("inputOutput"));
field30.setType(CString("SFVec3f"));
field30.setValue(CString("0 0 0"));
ProtoInterface29.addChild(&field30);

ProtoDeclare28.addChild(&ProtoInterface29);

ProtoBody& ProtoBody31 =  ProtoBody();
Transform& Transform32 =  Transform();
Transform32.setDEF(CString("node"));
IS& IS33 =  IS();
Connect& connect34 =  Connect();
connect34.setNodeField(CString("translation"));
connect34.setProtoField(CString("translation"));
IS33.addChild(&connect34);

Transform32.addChild(&IS33);

Shape& Shape35 =  Shape();
Sphere& Sphere36 =  Sphere();
Sphere36.setRadius(0.1);
Shape35.setGeometry(&Sphere36);

Appearance& Appearance37 =  Appearance();
Material& Material38 =  Material();
Material38.setDiffuseColor(new float[3]{1.0,0.0,0.0});
Appearance37.addChild(&Material38);

Shape35.addChild(&Appearance37);

Transform32.addChild(&Shape35);

PositionInterpolator& PositionInterpolator39 =  PositionInterpolator();
PositionInterpolator39.setDEF(CString("PI1"));
PositionInterpolator39.setKey(new float[2]{0.0,1.0}, 2);
PositionInterpolator39.setKeyValue(new float[6]{0.0,0.0,0.0,0.0,5.0,0.0}, 6);
Transform32.addChild(&PositionInterpolator39);

Script& Script40 =  Script();
Script40.setDEF(CString("MB1"));
field& field41 =  field();
field41.setName(CString("translation"));
field41.setAccessType(CString("inputOutput"));
field41.setType(CString("SFVec3f"));
field41.setValue(CString("50 50 0"));
Script40.addChild(&field41);

field& field42 =  field();
field42.setName(CString("old"));
field42.setAccessType(CString("inputOutput"));
field42.setType(CString("SFVec3f"));
field42.setValue(CString("0 0 0"));
Script40.addChild(&field42);

field& field43 =  field();
field43.setName(CString("set_location"));
field43.setAccessType(CString("inputOnly"));
field43.setType(CString("SFTime"));
Script40.addChild(&field43);

field& field44 =  field();
field44.setName(CString("keyValue"));
field44.setAccessType(CString("outputOnly"));
field44.setType(CString("MFVec3f"));
Script40.addChild(&field44);


//Script40.setSourceCode(CString("ecmascript:")+
//_T("		function set_location(value) {")+
//_T("                    old = translation;")+
//_T("		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);")+
//_T("                    keyValue = new MFVec3f([old, translation]);")+
//_T("		    // Browser.println(translation);")+
//_T("		}"));
Transform32.addChild(&Script40);

TimeSensor& TimeSensor45 =  TimeSensor();
TimeSensor45.setDEF(CString("CL1"));
TimeSensor45.setCycleInterval(3);
TimeSensor45.setLoop(true);
Transform32.addChild(&TimeSensor45);

ROUTE& ROUTE46 =  ROUTE();
ROUTE46.setFromNode(CString("CL1"));
ROUTE46.setFromField(CString("cycleTime"));
ROUTE46.setToNode(CString("MB1"));
ROUTE46.setToField(CString("set_location"));
Transform32.addChild(&ROUTE46);

ROUTE& ROUTE47 =  ROUTE();
ROUTE47.setFromNode(CString("CL1"));
ROUTE47.setFromField(CString("fraction_changed"));
ROUTE47.setToNode(CString("PI1"));
ROUTE47.setToField(CString("set_fraction"));
Transform32.addChild(&ROUTE47);

ROUTE& ROUTE48 =  ROUTE();
ROUTE48.setFromNode(CString("MB1"));
ROUTE48.setFromField(CString("keyValue"));
ROUTE48.setToNode(CString("PI1"));
ROUTE48.setToField(CString("keyValue"));
Transform32.addChild(&ROUTE48);

ROUTE& ROUTE49 =  ROUTE();
ROUTE49.setFromNode(CString("PI1"));
ROUTE49.setFromField(CString("value_changed"));
ROUTE49.setToNode(CString("node"));
ROUTE49.setToField(CString("set_translation"));
Transform32.addChild(&ROUTE49);

ProtoBody31.addChild(&Transform32);

ProtoDeclare28.addChild(&ProtoBody31);

Scene7.addChild(&ProtoDeclare28);

//from doug sanden
ProtoDeclare& ProtoDeclare50 =  ProtoDeclare();
ProtoDeclare50.setName(CString("x3dconnector"));
ProtoInterface& ProtoInterface51 =  ProtoInterface();
field& field52 =  field();
field52.setName(CString("startnode"));
field52.setAccessType(CString("inputOutput"));
field52.setType(CString("SFNode"));
ProtoInterface51.addChild(&field52);

field& field53 =  field();
field53.setName(CString("endnode"));
field53.setAccessType(CString("inputOutput"));
field53.setType(CString("SFNode"));
ProtoInterface51.addChild(&field53);

field& field54 =  field();
field54.setName(CString("transnode"));
field54.setAccessType(CString("inputOutput"));
field54.setType(CString("SFNode"));
ProtoInterface51.addChild(&field54);

field& field55 =  field();
field55.setName(CString("rotscalenode"));
field55.setAccessType(CString("inputOutput"));
field55.setType(CString("SFNode"));
ProtoInterface51.addChild(&field55);

field& field56 =  field();
field56.setName(CString("set_startpoint"));
field56.setAccessType(CString("inputOnly"));
field56.setType(CString("SFVec3f"));
ProtoInterface51.addChild(&field56);

field& field57 =  field();
field57.setName(CString("set_endpoint"));
field57.setAccessType(CString("inputOnly"));
field57.setType(CString("SFVec3f"));
ProtoInterface51.addChild(&field57);

ProtoDeclare50.addChild(&ProtoInterface51);

ProtoBody& ProtoBody58 =  ProtoBody();
Script& Script59 =  Script();
Script59.setDEF(CString("S1"));
field& field60 =  field();
field60.setName(CString("startnode"));
field60.setAccessType(CString("inputOutput"));
field60.setType(CString("SFNode"));
Script59.addChild(&field60);

field& field61 =  field();
field61.setName(CString("endnode"));
field61.setAccessType(CString("inputOutput"));
field61.setType(CString("SFNode"));
Script59.addChild(&field61);

field& field62 =  field();
field62.setName(CString("transnode"));
field62.setAccessType(CString("inputOutput"));
field62.setType(CString("SFNode"));
Script59.addChild(&field62);

field& field63 =  field();
field63.setName(CString("rotscalenode"));
field63.setAccessType(CString("inputOutput"));
field63.setType(CString("SFNode"));
Script59.addChild(&field63);

field& field64 =  field();
field64.setName(CString("set_startpoint"));
field64.setAccessType(CString("inputOnly"));
field64.setType(CString("SFVec3f"));
Script59.addChild(&field64);

field& field65 =  field();
field65.setName(CString("set_endpoint"));
field65.setAccessType(CString("inputOnly"));
field65.setType(CString("SFVec3f"));
Script59.addChild(&field65);

IS& IS66 =  IS();
Connect& connect67 =  Connect();
connect67.setNodeField(CString("startnode"));
connect67.setProtoField(CString("startnode"));
IS66.addChild(&connect67);

Connect& connect68 =  Connect();
connect68.setNodeField(CString("endnode"));
connect68.setProtoField(CString("endnode"));
IS66.addChild(&connect68);

Connect& connect69 =  Connect();
connect69.setNodeField(CString("transnode"));
connect69.setProtoField(CString("transnode"));
IS66.addChild(&connect69);

Connect& connect70 =  Connect();
connect70.setNodeField(CString("rotscalenode"));
connect70.setProtoField(CString("rotscalenode"));
IS66.addChild(&connect70);

Connect& connect71 =  Connect();
connect71.setNodeField(CString("set_startpoint"));
connect71.setProtoField(CString("set_startpoint"));
IS66.addChild(&connect71);

Connect& connect72 =  Connect();
connect72.setNodeField(CString("set_endpoint"));
connect72.setProtoField(CString("set_endpoint"));
IS66.addChild(&connect72);

Script59.addChild(&IS66);


//Script59.setSourceCode(CString("ecmascript:")+
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
//_T("		var trafo = recompute(startpoint, endpoint);")+
//_T("		if (typeof trafo !== 'undefined') {")+
//_T("			transnode.translation = trafo.translation;")+
//_T("			rotscalenode.rotation = trafo.rotation;")+
//_T("			rotscalenode.scale = trafo.scale;")+
//_T("		} else {")+
//_T("			Browser.print(\"recompute returned undefined\");")+
//_T("		}")+
//_T("	}")+
//_T("        function initialize(){")+
//_T("            recompute_and_route(startnode.translation,endnode.translation);")+
//_T("        }")+
//_T("        function set_startpoint(val,t){")+
//_T("            recompute_and_route(val || startnode.translation,endnode.translation);")+
//_T("        }")+
//_T("        function set_endpoint(val,t){")+
//_T("            recompute_and_route(startnode.translation,val || endnode.translation);")+
//_T("        }"));
ProtoBody58.addChild(&Script59);

ProtoDeclare50.addChild(&ProtoBody58);

Scene7.addChild(&ProtoDeclare50);

ProtoInstance& ProtoInstance73 =  ProtoInstance();
ProtoInstance73.setName(CString("point"));
ProtoInstance73.setDEF(CString("G1"));
Scene7.addChild(&ProtoInstance73);

ProtoInstance& ProtoInstance74 =  ProtoInstance();
ProtoInstance74.setName(CString("point"));
ProtoInstance74.setDEF(CString("G2"));
Scene7.addChild(&ProtoInstance74);

ProtoInstance& ProtoInstance75 =  ProtoInstance();
ProtoInstance75.setName(CString("point"));
ProtoInstance75.setDEF(CString("G3"));
Scene7.addChild(&ProtoInstance75);

ProtoInstance& ProtoInstance76 =  ProtoInstance();
ProtoInstance76.setName(CString("point"));
ProtoInstance76.setDEF(CString("G4"));
Scene7.addChild(&ProtoInstance76);

ProtoInstance& ProtoInstance77 =  ProtoInstance();
ProtoInstance77.setName(CString("x3dconnector"));
ProtoInstance77.setDEF(CString("connector1"));
fieldValue& fieldValue78 =  fieldValue();
fieldValue78.setName(CString("startnode"));
ProtoInstance& ProtoInstance79 =  ProtoInstance();
ProtoInstance79.setUSE(CString("G1"));
fieldValue78.addChild(&ProtoInstance79);

ProtoInstance77.addChild(&fieldValue78);

fieldValue& fieldValue80 =  fieldValue();
fieldValue80.setName(CString("endnode"));
ProtoInstance& ProtoInstance81 =  ProtoInstance();
ProtoInstance81.setUSE(CString("G2"));
fieldValue80.addChild(&ProtoInstance81);

ProtoInstance77.addChild(&fieldValue80);

fieldValue& fieldValue82 =  fieldValue();
fieldValue82.setName(CString("transnode"));
Transform& Transform83 =  Transform();
Transform83.setUSE(CString("trans1"));
fieldValue82.addChild(&Transform83);

ProtoInstance77.addChild(&fieldValue82);

fieldValue& fieldValue84 =  fieldValue();
fieldValue84.setName(CString("rotscalenode"));
Transform& Transform85 =  Transform();
Transform85.setUSE(CString("rotscale1"));
fieldValue84.addChild(&Transform85);

ProtoInstance77.addChild(&fieldValue84);

Scene7.addChild(&ProtoInstance77);

ProtoInstance& ProtoInstance86 =  ProtoInstance();
ProtoInstance86.setName(CString("x3dconnector"));
ProtoInstance86.setDEF(CString("connector2"));
fieldValue& fieldValue87 =  fieldValue();
fieldValue87.setName(CString("startnode"));
ProtoInstance& ProtoInstance88 =  ProtoInstance();
ProtoInstance88.setUSE(CString("G1"));
fieldValue87.addChild(&ProtoInstance88);

ProtoInstance86.addChild(&fieldValue87);

fieldValue& fieldValue89 =  fieldValue();
fieldValue89.setName(CString("endnode"));
ProtoInstance& ProtoInstance90 =  ProtoInstance();
ProtoInstance90.setUSE(CString("G3"));
fieldValue89.addChild(&ProtoInstance90);

ProtoInstance86.addChild(&fieldValue89);

fieldValue& fieldValue91 =  fieldValue();
fieldValue91.setName(CString("transnode"));
Transform& Transform92 =  Transform();
Transform92.setUSE(CString("trans2"));
fieldValue91.addChild(&Transform92);

ProtoInstance86.addChild(&fieldValue91);

fieldValue& fieldValue93 =  fieldValue();
fieldValue93.setName(CString("rotscalenode"));
Transform& Transform94 =  Transform();
Transform94.setUSE(CString("rotscale2"));
fieldValue93.addChild(&Transform94);

ProtoInstance86.addChild(&fieldValue93);

Scene7.addChild(&ProtoInstance86);

ProtoInstance& ProtoInstance95 =  ProtoInstance();
ProtoInstance95.setName(CString("x3dconnector"));
ProtoInstance95.setDEF(CString("connector3"));
fieldValue& fieldValue96 =  fieldValue();
fieldValue96.setName(CString("startnode"));
ProtoInstance& ProtoInstance97 =  ProtoInstance();
ProtoInstance97.setUSE(CString("G1"));
fieldValue96.addChild(&ProtoInstance97);

ProtoInstance95.addChild(&fieldValue96);

fieldValue& fieldValue98 =  fieldValue();
fieldValue98.setName(CString("endnode"));
ProtoInstance& ProtoInstance99 =  ProtoInstance();
ProtoInstance99.setUSE(CString("G4"));
fieldValue98.addChild(&ProtoInstance99);

ProtoInstance95.addChild(&fieldValue98);

fieldValue& fieldValue100 =  fieldValue();
fieldValue100.setName(CString("transnode"));
Transform& Transform101 =  Transform();
Transform101.setUSE(CString("trans3"));
fieldValue100.addChild(&Transform101);

ProtoInstance95.addChild(&fieldValue100);

fieldValue& fieldValue102 =  fieldValue();
fieldValue102.setName(CString("rotscalenode"));
Transform& Transform103 =  Transform();
Transform103.setUSE(CString("rotscale3"));
fieldValue102.addChild(&Transform103);

ProtoInstance95.addChild(&fieldValue102);

Scene7.addChild(&ProtoInstance95);

ROUTE& ROUTE104 =  ROUTE();
ROUTE104.setFromNode(CString("G1"));
ROUTE104.setFromField(CString("translation_changed"));
ROUTE104.setToNode(CString("connector1"));
ROUTE104.setToField(CString("set_startpoint"));
Scene7.addChild(&ROUTE104);

ROUTE& ROUTE105 =  ROUTE();
ROUTE105.setFromNode(CString("G2"));
ROUTE105.setFromField(CString("translation_changed"));
ROUTE105.setToNode(CString("connector1"));
ROUTE105.setToField(CString("set_endpoint"));
Scene7.addChild(&ROUTE105);

ROUTE& ROUTE106 =  ROUTE();
ROUTE106.setFromNode(CString("G1"));
ROUTE106.setFromField(CString("translation_changed"));
ROUTE106.setToNode(CString("connector2"));
ROUTE106.setToField(CString("set_startpoint"));
Scene7.addChild(&ROUTE106);

ROUTE& ROUTE107 =  ROUTE();
ROUTE107.setFromNode(CString("G3"));
ROUTE107.setFromField(CString("translation_changed"));
ROUTE107.setToNode(CString("connector2"));
ROUTE107.setToField(CString("set_endpoint"));
Scene7.addChild(&ROUTE107);

ROUTE& ROUTE108 =  ROUTE();
ROUTE108.setFromNode(CString("G1"));
ROUTE108.setFromField(CString("translation_changed"));
ROUTE108.setToNode(CString("connector3"));
ROUTE108.setToField(CString("set_startpoint"));
Scene7.addChild(&ROUTE108);

ROUTE& ROUTE109 =  ROUTE();
ROUTE109.setFromNode(CString("G4"));
ROUTE109.setFromField(CString("translation_changed"));
ROUTE109.setToNode(CString("connector3"));
ROUTE109.setToField(CString("set_endpoint"));
Scene7.addChild(&ROUTE109);

X3D0.setScene(&Scene7);

//}
