#ifndef WIN32
#define WINAPI
#define AFX_EXT_CLASS
#define EXPORT32
#define WINGDIAPI
#define APIENTRY
#endif
#define FALSE false
#define TRUE true
#define BOOL bool
#define False false
#define True true
#include "C:/Users/jcarl/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
#include "C:/Users/jcarl/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
#include "C:/Users/jcarl/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
#include "C:/Users/jcarl/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
int main(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(CString("Immersive"));
X3D0.setVersion(CString("4.0"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(CString("title"));
meta2.setContent(CString("arc1.x3d"));
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
meta5.setContent(CString("https://coderextreme.net/X3DJSONLD/src/main/data/arc1.x3d"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("description"));
meta6.setContent(CString("a generic proto to connect two objects"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
Viewpoint& Viewpoint8 =  Viewpoint();
Viewpoint8.setPosition(new float[]{0,0,5});
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
Material20.setDiffuseColor(new float[]{1,0,0});
Appearance19.addChild(&Material20);

Shape17.addChild(&Appearance19);

Transform14.addChild(&Shape17);

PositionInterpolator& PositionInterpolator21 =  PositionInterpolator();
PositionInterpolator21.setDEF(CString("PI1"));
PositionInterpolator21.setKey(new float[]{0,1}, 2);
PositionInterpolator21.setKeyValue(new float[]{0,0,0,0,5,0}, 6);
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


Script22.setSourceCode(CString("ecmascript:")+
_T("               function set_location(value) {")+
_T("                    old = translation;")+
_T("                    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);")+
_T("                    keyValue = new MFVec3f([old, translation]);")+
_T("               }"));
Transform14.addChild(&Script22);

TimeSensor& TimeSensor27 =  TimeSensor();
TimeSensor27.setDEF(CString("CL1"));
TimeSensor27.setCycleInterval(3);
TimeSensor27.setLoop(True);
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

ROUTE& ROUTE32 =  ROUTE();
ROUTE32.setFromNode(CString("MB1"));
ROUTE32.setFromField(CString("translation_changed"));
ROUTE32.setToNode(CString("node"));
ROUTE32.setToField(CString("set_translation"));
Transform14.addChild(&ROUTE32);

ProtoBody13.addChild(&Transform14);

ProtoDeclare10.addChild(&ProtoBody13);

Scene7.addChild(&ProtoDeclare10);

Transform& Transform33 =  Transform();
Transform33.setDEF(CString("G1"));
ProtoInstance& ProtoInstance34 =  ProtoInstance();
ProtoInstance34.setName(CString("point"));
Transform33.addChild(&ProtoInstance34);

Scene7.addChild(&Transform33);

Transform& Transform35 =  Transform();
Transform35.setDEF(CString("G2"));
ProtoInstance& ProtoInstance36 =  ProtoInstance();
ProtoInstance36.setName(CString("point"));
Transform35.addChild(&ProtoInstance36);

Scene7.addChild(&Transform35);

Transform& Transform37 =  Transform();
Transform37.setDEF(CString("transC1"));
Transform& Transform38 =  Transform();
Transform38.setDEF(CString("rotscaleC1"));
Shape& Shape39 =  Shape();
Appearance& Appearance40 =  Appearance();
Material& Material41 =  Material();
Material41.setDiffuseColor(new float[]{0.2,0.7,0.7});
Material41.setTransparency(0.5);
Appearance40.addChild(&Material41);

Shape39.addChild(&Appearance40);

Cylinder& Cylinder42 =  Cylinder();
Cylinder42.setRadius(0.05);
Shape39.setGeometry(&Cylinder42);

Transform38.addChild(&Shape39);

Transform37.addChild(&Transform38);

Scene7.addChild(&Transform37);

ProtoDeclare& ProtoDeclare43 =  ProtoDeclare();
ProtoDeclare43.setName(CString("x3dconnector"));
ProtoInterface& ProtoInterface44 =  ProtoInterface();
field& field45 =  field();
field45.setName(CString("startnode"));
field45.setAccessType(CString("initializeOnly"));
field45.setType(CString("SFNode"));
ProtoInterface44.addChild(&field45);

field& field46 =  field();
field46.setName(CString("endnode"));
field46.setAccessType(CString("initializeOnly"));
field46.setType(CString("SFNode"));
ProtoInterface44.addChild(&field46);

field& field47 =  field();
field47.setName(CString("transnode"));
field47.setAccessType(CString("inputOutput"));
field47.setType(CString("SFNode"));
ProtoInterface44.addChild(&field47);

field& field48 =  field();
field48.setName(CString("rotscalenode"));
field48.setAccessType(CString("inputOutput"));
field48.setType(CString("SFNode"));
ProtoInterface44.addChild(&field48);

field& field49 =  field();
field49.setName(CString("set_startpoint"));
field49.setAccessType(CString("inputOnly"));
field49.setType(CString("SFVec3f"));
ProtoInterface44.addChild(&field49);

field& field50 =  field();
field50.setName(CString("set_endpoint"));
field50.setAccessType(CString("inputOnly"));
field50.setType(CString("SFVec3f"));
ProtoInterface44.addChild(&field50);

ProtoDeclare43.addChild(&ProtoInterface44);

ProtoBody& ProtoBody51 =  ProtoBody();
Script& Script52 =  Script();
Script52.setDEF(CString("S1"));
field& field53 =  field();
field53.setName(CString("startnode"));
field53.setAccessType(CString("initializeOnly"));
field53.setType(CString("SFNode"));
Script52.addChild(&field53);

field& field54 =  field();
field54.setName(CString("endnode"));
field54.setAccessType(CString("initializeOnly"));
field54.setType(CString("SFNode"));
Script52.addChild(&field54);

field& field55 =  field();
field55.setName(CString("transnode"));
field55.setAccessType(CString("initializeOnly"));
field55.setType(CString("SFNode"));
Script52.addChild(&field55);

field& field56 =  field();
field56.setName(CString("rotscalenode"));
field56.setAccessType(CString("initializeOnly"));
field56.setType(CString("SFNode"));
Script52.addChild(&field56);

field& field57 =  field();
field57.setName(CString("set_startpoint"));
field57.setAccessType(CString("inputOnly"));
field57.setType(CString("SFVec3f"));
Script52.addChild(&field57);

field& field58 =  field();
field58.setName(CString("set_endpoint"));
field58.setAccessType(CString("inputOnly"));
field58.setType(CString("SFVec3f"));
Script52.addChild(&field58);

IS& IS59 =  IS();
Connect& connect60 =  Connect();
connect60.setNodeField(CString("startnode"));
connect60.setProtoField(CString("startnode"));
IS59.addChild(&connect60);

Connect& connect61 =  Connect();
connect61.setNodeField(CString("endnode"));
connect61.setProtoField(CString("endnode"));
IS59.addChild(&connect61);

Connect& connect62 =  Connect();
connect62.setNodeField(CString("transnode"));
connect62.setProtoField(CString("transnode"));
IS59.addChild(&connect62);

Connect& connect63 =  Connect();
connect63.setNodeField(CString("rotscalenode"));
connect63.setProtoField(CString("rotscalenode"));
IS59.addChild(&connect63);

Connect& connect64 =  Connect();
connect64.setNodeField(CString("set_startpoint"));
connect64.setProtoField(CString("set_startpoint"));
IS59.addChild(&connect64);

Connect& connect65 =  Connect();
connect65.setNodeField(CString("set_endpoint"));
connect65.setProtoField(CString("set_endpoint"));
IS59.addChild(&connect65);

Script52.addChild(&IS59);


Script52.setSourceCode(CString("ecmascript:")+
_T("        function recompute(startpoint,endpoint){")+
_T("	    if (typeof endpoint === 'undefined') {")+
_T("		return;")+
_T("	    }")+
_T("            var dif = endpoint.subtract(startpoint);")+
_T("            var dist = dif.length()*0.5;")+
_T("            var dif2 = dif.multiply(0.5);")+
_T("            var norm = dif.normalize();")+
_T("            var transl = startpoint.add(dif2);")+
_T("	    if (typeof Quaternion !== 'undefined') {")+
_T("		    return {")+
_T("			    scale : new SFVec3f(1.0,dist,1.0),")+
_T("			    translation : transl,")+
_T("			    rotation : new Quaternion.rotateFromTo(new SFVec3f(0.0,1.0,0.0), norm)")+
_T("		    };")+
_T("	    } else {")+
_T("		    return {")+
_T("			    scale : new SFVec3f(1.0,dist,1.0),")+
_T("			    translation : transl,")+
_T("			    rotation : new SFRotation(new SFVec3f(0.0,1.0,0.0),norm)")+
_T("		    };")+
_T("	    }")+
_T("	}")+
_T("	function recompute_and_route(startpoint, endpoint) {")+
_T("	      var trafo = recompute(startpoint, endpoint);")+
_T("	      if (trafo) {")+
_T("		      transnode.translation = trafo.translation;")+
_T("		      rotscalenode.rotation = trafo.rotation;")+
_T("		      rotscalenode.scale = trafo.scale;")+
_T("	      }")+
_T("	}")+
_T("        function initialize(){")+
_T("            recompute_and_route(startnode.translation,endnode.translation);")+
_T("        }")+
_T("        function set_startpoint(val,t){")+
_T("            recompute_and_route(val,endnode.translation);")+
_T("        }")+
_T("        function set_endpoint(val,t){")+
_T("            recompute_and_route(startnode.translation,val);")+
_T("        }"));
ProtoBody51.addChild(&Script52);

ProtoDeclare43.addChild(&ProtoBody51);

Scene7.addChild(&ProtoDeclare43);

ProtoInstance& ProtoInstance66 =  ProtoInstance();
ProtoInstance66.setName(CString("x3dconnector"));
ProtoInstance66.setDEF(CString("connector1"));
fieldValue& fieldValue67 =  fieldValue();
fieldValue67.setName(CString("startnode"));
Transform& Transform68 =  Transform();
Transform68.setUSE(CString("G1"));
fieldValue67.addChild(&Transform68);

ProtoInstance66.addChild(&fieldValue67);

fieldValue& fieldValue69 =  fieldValue();
fieldValue69.setName(CString("endnode"));
Transform& Transform70 =  Transform();
Transform70.setUSE(CString("G2"));
fieldValue69.addChild(&Transform70);

ProtoInstance66.addChild(&fieldValue69);

fieldValue& fieldValue71 =  fieldValue();
fieldValue71.setName(CString("transnode"));
Transform& Transform72 =  Transform();
Transform72.setUSE(CString("transC1"));
fieldValue71.addChild(&Transform72);

ProtoInstance66.addChild(&fieldValue71);

fieldValue& fieldValue73 =  fieldValue();
fieldValue73.setName(CString("rotscalenode"));
Transform& Transform74 =  Transform();
Transform74.setUSE(CString("rotscaleC1"));
fieldValue73.addChild(&Transform74);

ProtoInstance66.addChild(&fieldValue73);

fieldValue& fieldValue75 =  fieldValue();
fieldValue75.setName(CString("set_startpoint"));
ProtoInstance66.addChild(&fieldValue75);

fieldValue& fieldValue76 =  fieldValue();
fieldValue76.setName(CString("set_endpoint"));
ProtoInstance66.addChild(&fieldValue76);

Scene7.addChild(&ProtoInstance66);

ROUTE& ROUTE77 =  ROUTE();
ROUTE77.setFromNode(CString("G1"));
ROUTE77.setFromField(CString("translation_changed"));
ROUTE77.setToNode(CString("connector1"));
ROUTE77.setToField(CString("set_startpoint"));
Scene7.addChild(&ROUTE77);

ROUTE& ROUTE78 =  ROUTE();
ROUTE78.setFromNode(CString("G2"));
ROUTE78.setFromField(CString("translation_changed"));
ROUTE78.setToNode(CString("connector1"));
ROUTE78.setToField(CString("set_endpoint"));
Scene7.addChild(&ROUTE78);

X3D0.setScene(&Scene7);

}
