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
meta2.setContent(CString("arc2.x3d"));
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

Transform& Transform10 =  Transform();
Transform10.setDEF(CString("G1"));
Transform& Transform11 =  Transform();
Transform11.setDEF(CString("DECLpoint_INSTANCE_node"));
Shape& Shape12 =  Shape();
Sphere& Sphere13 =  Sphere();
Sphere13.setRadius(0.1);
Shape12.setGeometry(&Sphere13);

Appearance& Appearance14 =  Appearance();
Material& Material15 =  Material();
Material15.setDiffuseColor(new float[]{1,0,0});
Appearance14.addChild(&Material15);

Shape12.addChild(&Appearance14);

Transform11.addChild(&Shape12);

PositionInterpolator& PositionInterpolator16 =  PositionInterpolator();
PositionInterpolator16.setDEF(CString("DECLpoint_INSTANCE_PI1"));
PositionInterpolator16.setKey(new float[]{0,1}, 2);
PositionInterpolator16.setKeyValue(new float[]{0,0,0,0,5,0}, 6);
Transform11.addChild(&PositionInterpolator16);

Script& Script17 =  Script();
Script17.setDEF(CString("DECLpoint_INSTANCE_MB1"));
field& field18 =  field();
field18.setName(CString("translation"));
field18.setAccessType(CString("inputOutput"));
field18.setType(CString("SFVec3f"));
field18.setValue(CString("0 0 0"));
Script17.addChild(&field18);

field& field19 =  field();
field19.setName(CString("old"));
field19.setAccessType(CString("inputOutput"));
field19.setType(CString("SFVec3f"));
field19.setValue(CString("0 0 0"));
Script17.addChild(&field19);

field& field20 =  field();
field20.setName(CString("set_location"));
field20.setAccessType(CString("inputOnly"));
field20.setType(CString("SFTime"));
Script17.addChild(&field20);

field& field21 =  field();
field21.setName(CString("keyValue"));
field21.setAccessType(CString("inputOutput"));
field21.setType(CString("MFVec3f"));
field21.setValue(CString("0 0 0 0 5 0"));
Script17.addChild(&field21);


Script17.setSourceCode(CString("ecmascript:")+
_T("               function set_location(value) {")+
_T("                    old = translation;")+
_T("                    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);")+
_T("                    keyValue = new MFVec3f(old, translation);")+
_T("               }"));
Transform11.addChild(&Script17);

TimeSensor& TimeSensor22 =  TimeSensor();
TimeSensor22.setDEF(CString("DECLpoint_INSTANCE_CL1"));
TimeSensor22.setCycleInterval(3);
TimeSensor22.setLoop(True);
Transform11.addChild(&TimeSensor22);

ROUTE& ROUTE23 =  ROUTE();
ROUTE23.setFromNode(CString("DECLpoint_INSTANCE_CL1"));
ROUTE23.setFromField(CString("cycleTime"));
ROUTE23.setToNode(CString("DECLpoint_INSTANCE_MB1"));
ROUTE23.setToField(CString("set_location"));
Transform11.addChild(&ROUTE23);

ROUTE& ROUTE24 =  ROUTE();
ROUTE24.setFromNode(CString("DECLpoint_INSTANCE_CL1"));
ROUTE24.setFromField(CString("fraction_changed"));
ROUTE24.setToNode(CString("DECLpoint_INSTANCE_PI1"));
ROUTE24.setToField(CString("set_fraction"));
Transform11.addChild(&ROUTE24);

ROUTE& ROUTE25 =  ROUTE();
ROUTE25.setFromNode(CString("DECLpoint_INSTANCE_MB1"));
ROUTE25.setFromField(CString("keyValue"));
ROUTE25.setToNode(CString("DECLpoint_INSTANCE_PI1"));
ROUTE25.setToField(CString("keyValue"));
Transform11.addChild(&ROUTE25);

ROUTE& ROUTE26 =  ROUTE();
ROUTE26.setFromNode(CString("DECLpoint_INSTANCE_PI1"));
ROUTE26.setFromField(CString("value_changed"));
ROUTE26.setToNode(CString("DECLpoint_INSTANCE_node"));
ROUTE26.setToField(CString("set_translation"));
Transform11.addChild(&ROUTE26);

ROUTE& ROUTE27 =  ROUTE();
ROUTE27.setFromNode(CString("DECLpoint_INSTANCE_MB1"));
ROUTE27.setFromField(CString("translation_changed"));
ROUTE27.setToNode(CString("DECLpoint_INSTANCE_node"));
ROUTE27.setToField(CString("set_translation"));
Transform11.addChild(&ROUTE27);

Transform10.addChild(&Transform11);

Scene7.addChild(&Transform10);

Transform& Transform28 =  Transform();
Transform28.setDEF(CString("G2"));
Transform& Transform29 =  Transform();
Transform29.setDEF(CString("DECLpoint_INSTANCE1000_node"));
Shape& Shape30 =  Shape();
Sphere& Sphere31 =  Sphere();
Sphere31.setRadius(0.1);
Shape30.setGeometry(&Sphere31);

Appearance& Appearance32 =  Appearance();
Material& Material33 =  Material();
Material33.setDiffuseColor(new float[]{1,0,0});
Appearance32.addChild(&Material33);

Shape30.addChild(&Appearance32);

Transform29.addChild(&Shape30);

PositionInterpolator& PositionInterpolator34 =  PositionInterpolator();
PositionInterpolator34.setDEF(CString("DECLpoint_INSTANCE1000_PI1"));
PositionInterpolator34.setKey(new float[]{0,1}, 2);
PositionInterpolator34.setKeyValue(new float[]{0,0,0,0,5,0}, 6);
Transform29.addChild(&PositionInterpolator34);

Script& Script35 =  Script();
Script35.setDEF(CString("DECLpoint_INSTANCE1000_MB1"));
field& field36 =  field();
field36.setName(CString("translation"));
field36.setAccessType(CString("inputOutput"));
field36.setType(CString("SFVec3f"));
field36.setValue(CString("0 0 0"));
Script35.addChild(&field36);

field& field37 =  field();
field37.setName(CString("old"));
field37.setAccessType(CString("inputOutput"));
field37.setType(CString("SFVec3f"));
field37.setValue(CString("0 0 0"));
Script35.addChild(&field37);

field& field38 =  field();
field38.setName(CString("set_location"));
field38.setAccessType(CString("inputOnly"));
field38.setType(CString("SFTime"));
Script35.addChild(&field38);

field& field39 =  field();
field39.setName(CString("keyValue"));
field39.setAccessType(CString("inputOutput"));
field39.setType(CString("MFVec3f"));
field39.setValue(CString("0 0 0 0 5 0"));
Script35.addChild(&field39);


Script35.setSourceCode(CString("ecmascript:")+
_T("               function set_location(value) {")+
_T("                    old = translation;")+
_T("                    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);")+
_T("                    keyValue = new MFVec3f(old, translation);")+
_T("               }"));
Transform29.addChild(&Script35);

TimeSensor& TimeSensor40 =  TimeSensor();
TimeSensor40.setDEF(CString("DECLpoint_INSTANCE1000_CL1"));
TimeSensor40.setCycleInterval(3);
TimeSensor40.setLoop(True);
Transform29.addChild(&TimeSensor40);

ROUTE& ROUTE41 =  ROUTE();
ROUTE41.setFromNode(CString("DECLpoint_INSTANCE1000_CL1"));
ROUTE41.setFromField(CString("cycleTime"));
ROUTE41.setToNode(CString("DECLpoint_INSTANCE1000_MB1"));
ROUTE41.setToField(CString("set_location"));
Transform29.addChild(&ROUTE41);

ROUTE& ROUTE42 =  ROUTE();
ROUTE42.setFromNode(CString("DECLpoint_INSTANCE1000_CL1"));
ROUTE42.setFromField(CString("fraction_changed"));
ROUTE42.setToNode(CString("DECLpoint_INSTANCE1000_PI1"));
ROUTE42.setToField(CString("set_fraction"));
Transform29.addChild(&ROUTE42);

ROUTE& ROUTE43 =  ROUTE();
ROUTE43.setFromNode(CString("DECLpoint_INSTANCE1000_MB1"));
ROUTE43.setFromField(CString("keyValue"));
ROUTE43.setToNode(CString("DECLpoint_INSTANCE1000_PI1"));
ROUTE43.setToField(CString("keyValue"));
Transform29.addChild(&ROUTE43);

ROUTE& ROUTE44 =  ROUTE();
ROUTE44.setFromNode(CString("DECLpoint_INSTANCE1000_PI1"));
ROUTE44.setFromField(CString("value_changed"));
ROUTE44.setToNode(CString("DECLpoint_INSTANCE1000_node"));
ROUTE44.setToField(CString("set_translation"));
Transform29.addChild(&ROUTE44);

ROUTE& ROUTE45 =  ROUTE();
ROUTE45.setFromNode(CString("DECLpoint_INSTANCE1000_MB1"));
ROUTE45.setFromField(CString("translation_changed"));
ROUTE45.setToNode(CString("DECLpoint_INSTANCE1000_node"));
ROUTE45.setToField(CString("set_translation"));
Transform29.addChild(&ROUTE45);

Transform28.addChild(&Transform29);

Scene7.addChild(&Transform28);

Transform& Transform46 =  Transform();
Transform46.setDEF(CString("transC1"));
Transform& Transform47 =  Transform();
Transform47.setDEF(CString("rotscaleC1"));
Shape& Shape48 =  Shape();
Appearance& Appearance49 =  Appearance();
Material& Material50 =  Material();
Material50.setDiffuseColor(new float[]{0.2,0.7,0.7});
Material50.setTransparency(0.5);
Appearance49.addChild(&Material50);

Shape48.addChild(&Appearance49);

Cylinder& Cylinder51 =  Cylinder();
Cylinder51.setRadius(0.05);
Shape48.setGeometry(&Cylinder51);

Transform47.addChild(&Shape48);

Transform46.addChild(&Transform47);

Scene7.addChild(&Transform46);

Script& Script52 =  Script();
Script52.setDEF(CString("DECLx3dconnector_connector1_S1"));
field& field53 =  field();
field53.setName(CString("startnode"));
field53.setAccessType(CString("initializeOnly"));
field53.setType(CString("SFNode"));
Transform& Transform54 =  Transform();
Transform54.setUSE(CString("G1"));
field53.addChild(&Transform54);

Script52.addChild(&field53);

field& field55 =  field();
field55.setName(CString("endnode"));
field55.setAccessType(CString("initializeOnly"));
field55.setType(CString("SFNode"));
Transform& Transform56 =  Transform();
Transform56.setUSE(CString("G2"));
field55.addChild(&Transform56);

Script52.addChild(&field55);

field& field57 =  field();
field57.setName(CString("transC1"));
field57.setAccessType(CString("initializeOnly"));
field57.setType(CString("SFNode"));
Transform& Transform58 =  Transform();
Transform58.setUSE(CString("transC1"));
field57.addChild(&Transform58);

Script52.addChild(&field57);

field& field59 =  field();
field59.setName(CString("rotscaleC1"));
field59.setAccessType(CString("initializeOnly"));
field59.setType(CString("SFNode"));
Transform& Transform60 =  Transform();
Transform60.setUSE(CString("rotscaleC1"));
field59.addChild(&Transform60);

Script52.addChild(&field59);

field& field61 =  field();
field61.setName(CString("set_startpoint"));
field61.setAccessType(CString("inputOnly"));
field61.setType(CString("SFVec3f"));
Script52.addChild(&field61);

field& field62 =  field();
field62.setName(CString("set_endpoint"));
field62.setAccessType(CString("inputOnly"));
field62.setType(CString("SFVec3f"));
Script52.addChild(&field62);


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
_T("	      transC1.translation = trafo.translation;")+
_T("	      rotscaleC1.rotation = trafo.rotation;")+
_T("	      rotscaleC1.scale = trafo.scale;")+
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
Scene7.addChild(&Script52);

ROUTE& ROUTE63 =  ROUTE();
ROUTE63.setFromNode(CString("G1"));
ROUTE63.setFromField(CString("translation_changed"));
ROUTE63.setToNode(CString("DECLx3dconnector_connector1_S1"));
ROUTE63.setToField(CString("set_startpoint"));
Scene7.addChild(&ROUTE63);

ROUTE& ROUTE64 =  ROUTE();
ROUTE64.setFromNode(CString("G2"));
ROUTE64.setFromField(CString("translation_changed"));
ROUTE64.setToNode(CString("DECLx3dconnector_connector1_S1"));
ROUTE64.setToField(CString("set_endpoint"));
Scene7.addChild(&ROUTE64);

X3D0.setScene(&Scene7);

}
