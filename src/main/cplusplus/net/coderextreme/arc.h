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
meta2.setContent(CString("arc.x3d"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(CString("creator"));
meta3.setContent(CString("Lost, Doug Sanden I think"));
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
meta6.setContent(CString("a generic proto to connect two objects"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
Viewpoint& Viewpoint8 =  Viewpoint();
Viewpoint8.setPosition(new float[]{0.0,0.0,5.0});
Viewpoint8.setDescription(CString("Only Viewpoint"));
Scene7.addChild(&Viewpoint8);

Background& Background9 =  Background();
Background9.setSkyColor(new float[]{0.4,0.4,0.4}, 3);
Scene7.addChild(&Background9);

ProtoDeclare& ProtoDeclare10 =  ProtoDeclare();
ProtoDeclare10.setName(CString("point"));
ProtoInterface& ProtoInterface11 =  ProtoInterface();
field& field12 =  field();
field12.setName(CString("translation"));
field12.setAccessType(CString("inputOutput"));
field12.setType(CString("SFVec3f"));
field12.setValue(CString("0 0 0"));
ProtoInterface11.addChild(&field12);

ProtoDeclare10.addChild(&ProtoInterface11);

ProtoBody& ProtoBody13 =  ProtoBody();
Transform& Transform14 =  Transform();
Transform14.setDEF(CString("node"));
IS& IS15 =  IS();
Connect& connect16 =  Connect();
connect16.setNodeField(CString("translation"));
connect16.setProtoField(CString("translation"));
IS15.addChild(&connect16);

Transform14.addChild(&IS15);

Shape& Shape17 =  Shape();
Sphere& Sphere18 =  Sphere();
Sphere18.setRadius(0.1);
Shape17.setGeometry(&Sphere18);

Appearance& Appearance19 =  Appearance();
Material& Material20 =  Material();
Material20.setDiffuseColor(new float[]{1.0,0.0,0.0});
Appearance19.addChild(&Material20);

Shape17.addChild(&Appearance19);

Transform14.addChild(&Shape17);

PositionInterpolator& PositionInterpolator21 =  PositionInterpolator();
PositionInterpolator21.setDEF(CString("PI1"));
PositionInterpolator21.setKey(new float[]{0.0,1.0}, 2);
PositionInterpolator21.setKeyValue(new float[]{0.0,0.0,0.0,0.0,5.0,0.0}, 6);
Transform14.addChild(&PositionInterpolator21);

Script& Script22 =  Script();
Script22.setDEF(CString("MB1"));
field& field23 =  field();
field23.setName(CString("translation"));
field23.setAccessType(CString("inputOutput"));
field23.setType(CString("SFVec3f"));
field23.setValue(CString("50 50 0"));
Script22.addChild(&field23);

field& field24 =  field();
field24.setName(CString("old"));
field24.setAccessType(CString("inputOutput"));
field24.setType(CString("SFVec3f"));
field24.setValue(CString("0 0 0"));
Script22.addChild(&field24);

field& field25 =  field();
field25.setName(CString("set_location"));
field25.setAccessType(CString("inputOnly"));
field25.setType(CString("SFTime"));
Script22.addChild(&field25);

field& field26 =  field();
field26.setName(CString("keyValue"));
field26.setAccessType(CString("inputOutput"));
field26.setType(CString("MFVec3f"));
field26.setValue(CString("0 0 0 0 5 0"));
Script22.addChild(&field26);


//Script22.setSourceCode(CString("ecmascript:")+
//_T("		function set_location(value) {")+
//_T("                    old = translation;")+
//_T("		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);")+
//_T("                    keyValue = new MFVec3f([old, translation]);")+
//_T("		    // Browser.println(keyValue);")+
//_T("		}"));
Transform14.addChild(&Script22);

TimeSensor& TimeSensor27 =  TimeSensor();
TimeSensor27.setDEF(CString("CL1"));
TimeSensor27.setCycleInterval(3);
TimeSensor27.setLoop(true);
Transform14.addChild(&TimeSensor27);

ROUTE& ROUTE28 =  ROUTE();
ROUTE28.setFromNode(CString("CL1"));
ROUTE28.setFromField(CString("cycleTime"));
ROUTE28.setToNode(CString("MB1"));
ROUTE28.setToField(CString("set_location"));
Transform14.addChild(&ROUTE28);

ROUTE& ROUTE29 =  ROUTE();
ROUTE29.setFromNode(CString("CL1"));
ROUTE29.setFromField(CString("fraction_changed"));
ROUTE29.setToNode(CString("PI1"));
ROUTE29.setToField(CString("set_fraction"));
Transform14.addChild(&ROUTE29);

ROUTE& ROUTE30 =  ROUTE();
ROUTE30.setFromNode(CString("MB1"));
ROUTE30.setFromField(CString("keyValue"));
ROUTE30.setToNode(CString("PI1"));
ROUTE30.setToField(CString("keyValue"));
Transform14.addChild(&ROUTE30);

ROUTE& ROUTE31 =  ROUTE();
ROUTE31.setFromNode(CString("PI1"));
ROUTE31.setFromField(CString("value_changed"));
ROUTE31.setToNode(CString("node"));
ROUTE31.setToField(CString("set_translation"));
Transform14.addChild(&ROUTE31);

ProtoBody13.addChild(&Transform14);

ProtoDeclare10.addChild(&ProtoBody13);

Scene7.addChild(&ProtoDeclare10);

ProtoDeclare& ProtoDeclare32 =  ProtoDeclare();
ProtoDeclare32.setName(CString("x3dconnector"));
ProtoInterface& ProtoInterface33 =  ProtoInterface();
field& field34 =  field();
field34.setName(CString("startnode"));
field34.setAccessType(CString("initializeOnly"));
field34.setType(CString("SFNode"));
ProtoInterface33.addChild(&field34);

field& field35 =  field();
field35.setName(CString("endnode"));
field35.setAccessType(CString("initializeOnly"));
field35.setType(CString("SFNode"));
ProtoInterface33.addChild(&field35);

field& field36 =  field();
field36.setName(CString("set_startpoint"));
field36.setAccessType(CString("inputOnly"));
field36.setType(CString("SFVec3f"));
ProtoInterface33.addChild(&field36);

field& field37 =  field();
field37.setName(CString("set_endpoint"));
field37.setAccessType(CString("inputOnly"));
field37.setType(CString("SFVec3f"));
ProtoInterface33.addChild(&field37);

ProtoDeclare32.addChild(&ProtoInterface33);

ProtoBody& ProtoBody38 =  ProtoBody();
Group& Group39 =  Group();
Transform& Transform40 =  Transform();
Transform40.setDEF(CString("trans"));
Transform& Transform41 =  Transform();
Transform41.setDEF(CString("rotscale"));
Shape& Shape42 =  Shape();
Appearance& Appearance43 =  Appearance();
Material& Material44 =  Material();
Material44.setDiffuseColor(new float[]{0.2,0.7,0.7});
Material44.setTransparency(0.5);
Appearance43.addChild(&Material44);

Shape42.addChild(&Appearance43);

Cylinder& Cylinder45 =  Cylinder();
Cylinder45.setRadius(0.05);
Shape42.setGeometry(&Cylinder45);

Transform41.addChild(&Shape42);

Transform40.addChild(&Transform41);

Group39.addChild(&Transform40);

Script& Script46 =  Script();
Script46.setDEF(CString("S1"));
field& field47 =  field();
field47.setName(CString("startnode"));
field47.setAccessType(CString("initializeOnly"));
field47.setType(CString("SFNode"));
Script46.addChild(&field47);

field& field48 =  field();
field48.setName(CString("endnode"));
field48.setAccessType(CString("initializeOnly"));
field48.setType(CString("SFNode"));
Script46.addChild(&field48);

field& field49 =  field();
field49.setName(CString("position"));
field49.setAccessType(CString("inputOutput"));
field49.setType(CString("SFNode"));
Transform& Transform50 =  Transform();
Transform50.setUSE(CString("trans"));
field49.addChild(&Transform50);

Script46.addChild(&field49);

field& field51 =  field();
field51.setName(CString("rotscale"));
field51.setAccessType(CString("inputOutput"));
field51.setType(CString("SFNode"));
Transform& Transform52 =  Transform();
Transform52.setUSE(CString("rotscale"));
field51.addChild(&Transform52);

Script46.addChild(&field51);

field& field53 =  field();
field53.setName(CString("set_startpoint"));
field53.setAccessType(CString("inputOnly"));
field53.setType(CString("SFVec3f"));
Script46.addChild(&field53);

field& field54 =  field();
field54.setName(CString("set_endpoint"));
field54.setAccessType(CString("inputOnly"));
field54.setType(CString("SFVec3f"));
Script46.addChild(&field54);

IS& IS55 =  IS();
Connect& connect56 =  Connect();
connect56.setNodeField(CString("startnode"));
connect56.setProtoField(CString("startnode"));
IS55.addChild(&connect56);

Connect& connect57 =  Connect();
connect57.setNodeField(CString("endnode"));
connect57.setProtoField(CString("endnode"));
IS55.addChild(&connect57);

Connect& connect58 =  Connect();
connect58.setNodeField(CString("set_startpoint"));
connect58.setProtoField(CString("set_startpoint"));
IS55.addChild(&connect58);

Connect& connect59 =  Connect();
connect59.setNodeField(CString("set_endpoint"));
connect59.setProtoField(CString("set_endpoint"));
IS55.addChild(&connect59);

Script46.addChild(&IS55);


//Script46.setSourceCode(CString("ecmascript:")+
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
//_T("	    } else if (typeof SFRotation !== 'undefined') {")+
//_T("		    return {")+
//_T("			    scale : new SFVec3f(1.0,dist,1.0),")+
//_T("			    translation : transl,")+
//_T("			    rotation : new SFRotation(new SFVec3f(0.0,1.0,0.0),norm)")+
//_T("		    };")+
//_T("	    } else {")+
//_T("		    return {")+
//_T("			    scale : new SFVec3f(1.0,dist,1.0),")+
//_T("			    translation : transl")+
//_T("		    };")+
//_T("	    }")+
//_T("	}")+
//_T("	function recompute_and_route(startpoint, endpoint) {")+
//_T("	      var trafo = recompute(startpoint, endpoint);")+
//_T("	      if (trafo) {")+
//_T("		      position.translation = trafo.translation;")+
//_T("		      rotscale.rotation = trafo.rotation;")+
//_T("		      rotscale.scale = trafo.scale;")+
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
Group39.addChild(&Script46);

ProtoBody38.addChild(&Group39);

ProtoDeclare32.addChild(&ProtoBody38);

Scene7.addChild(&ProtoDeclare32);

ProtoInstance& ProtoInstance60 =  ProtoInstance();
ProtoInstance60.setName(CString("point"));
ProtoInstance60.setDEF(CString("G1"));
Scene7.addChild(&ProtoInstance60);

ProtoInstance& ProtoInstance61 =  ProtoInstance();
ProtoInstance61.setName(CString("point"));
ProtoInstance61.setDEF(CString("G2"));
Scene7.addChild(&ProtoInstance61);

ProtoInstance& ProtoInstance62 =  ProtoInstance();
ProtoInstance62.setName(CString("point"));
ProtoInstance62.setDEF(CString("G3"));
Scene7.addChild(&ProtoInstance62);

ProtoInstance& ProtoInstance63 =  ProtoInstance();
ProtoInstance63.setName(CString("point"));
ProtoInstance63.setDEF(CString("G4"));
Scene7.addChild(&ProtoInstance63);

ProtoInstance& ProtoInstance64 =  ProtoInstance();
ProtoInstance64.setName(CString("x3dconnector"));
ProtoInstance64.setDEF(CString("connector1"));
fieldValue& fieldValue65 =  fieldValue();
fieldValue65.setName(CString("startnode"));
ProtoInstance& ProtoInstance66 =  ProtoInstance();
ProtoInstance66.setUSE(CString("G1"));
fieldValue65.addChild(&ProtoInstance66);

ProtoInstance64.addChild(&fieldValue65);

fieldValue& fieldValue67 =  fieldValue();
fieldValue67.setName(CString("endnode"));
ProtoInstance& ProtoInstance68 =  ProtoInstance();
ProtoInstance68.setUSE(CString("G2"));
fieldValue67.addChild(&ProtoInstance68);

ProtoInstance64.addChild(&fieldValue67);

fieldValue& fieldValue69 =  fieldValue();
fieldValue69.setName(CString("set_startpoint"));
ProtoInstance64.addChild(&fieldValue69);

fieldValue& fieldValue70 =  fieldValue();
fieldValue70.setName(CString("set_endpoint"));
ProtoInstance64.addChild(&fieldValue70);

Scene7.addChild(&ProtoInstance64);

ProtoInstance& ProtoInstance71 =  ProtoInstance();
ProtoInstance71.setName(CString("x3dconnector"));
ProtoInstance71.setDEF(CString("connector2"));
fieldValue& fieldValue72 =  fieldValue();
fieldValue72.setName(CString("startnode"));
ProtoInstance& ProtoInstance73 =  ProtoInstance();
ProtoInstance73.setUSE(CString("G1"));
fieldValue72.addChild(&ProtoInstance73);

ProtoInstance71.addChild(&fieldValue72);

fieldValue& fieldValue74 =  fieldValue();
fieldValue74.setName(CString("endnode"));
ProtoInstance& ProtoInstance75 =  ProtoInstance();
ProtoInstance75.setUSE(CString("G3"));
fieldValue74.addChild(&ProtoInstance75);

ProtoInstance71.addChild(&fieldValue74);

fieldValue& fieldValue76 =  fieldValue();
fieldValue76.setName(CString("set_startpoint"));
ProtoInstance71.addChild(&fieldValue76);

fieldValue& fieldValue77 =  fieldValue();
fieldValue77.setName(CString("set_endpoint"));
ProtoInstance71.addChild(&fieldValue77);

Scene7.addChild(&ProtoInstance71);

ProtoInstance& ProtoInstance78 =  ProtoInstance();
ProtoInstance78.setName(CString("x3dconnector"));
ProtoInstance78.setDEF(CString("connector3"));
fieldValue& fieldValue79 =  fieldValue();
fieldValue79.setName(CString("startnode"));
ProtoInstance& ProtoInstance80 =  ProtoInstance();
ProtoInstance80.setUSE(CString("G1"));
fieldValue79.addChild(&ProtoInstance80);

ProtoInstance78.addChild(&fieldValue79);

fieldValue& fieldValue81 =  fieldValue();
fieldValue81.setName(CString("endnode"));
ProtoInstance& ProtoInstance82 =  ProtoInstance();
ProtoInstance82.setUSE(CString("G4"));
fieldValue81.addChild(&ProtoInstance82);

ProtoInstance78.addChild(&fieldValue81);

fieldValue& fieldValue83 =  fieldValue();
fieldValue83.setName(CString("set_startpoint"));
ProtoInstance78.addChild(&fieldValue83);

fieldValue& fieldValue84 =  fieldValue();
fieldValue84.setName(CString("set_endpoint"));
ProtoInstance78.addChild(&fieldValue84);

Scene7.addChild(&ProtoInstance78);

ROUTE& ROUTE85 =  ROUTE();
ROUTE85.setFromNode(CString("G1"));
ROUTE85.setFromField(CString("translation"));
ROUTE85.setToNode(CString("connector1"));
ROUTE85.setToField(CString("set_startpoint"));
Scene7.addChild(&ROUTE85);

ROUTE& ROUTE86 =  ROUTE();
ROUTE86.setFromNode(CString("G2"));
ROUTE86.setFromField(CString("translation"));
ROUTE86.setToNode(CString("connector1"));
ROUTE86.setToField(CString("set_endpoint"));
Scene7.addChild(&ROUTE86);

ROUTE& ROUTE87 =  ROUTE();
ROUTE87.setFromNode(CString("G1"));
ROUTE87.setFromField(CString("translation"));
ROUTE87.setToNode(CString("connector2"));
ROUTE87.setToField(CString("set_startpoint"));
Scene7.addChild(&ROUTE87);

ROUTE& ROUTE88 =  ROUTE();
ROUTE88.setFromNode(CString("G3"));
ROUTE88.setFromField(CString("translation"));
ROUTE88.setToNode(CString("connector2"));
ROUTE88.setToField(CString("set_endpoint"));
Scene7.addChild(&ROUTE88);

ROUTE& ROUTE89 =  ROUTE();
ROUTE89.setFromNode(CString("G1"));
ROUTE89.setFromField(CString("translation"));
ROUTE89.setToNode(CString("connector3"));
ROUTE89.setToField(CString("set_startpoint"));
Scene7.addChild(&ROUTE89);

ROUTE& ROUTE90 =  ROUTE();
ROUTE90.setFromNode(CString("G4"));
ROUTE90.setFromField(CString("translation"));
ROUTE90.setToNode(CString("connector3"));
ROUTE90.setToField(CString("set_endpoint"));
Scene7.addChild(&ROUTE90);

X3D0.setScene(&Scene7);

//}
