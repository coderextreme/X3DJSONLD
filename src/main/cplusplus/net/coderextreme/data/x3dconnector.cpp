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
meta2.setContent(CString("x3dconnector.x3d"));
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
meta5.setContent(CString("https://coderextreme.net/X3DJSONLD/src/main/data/x3dconnectorProto.x3d"));
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
Shape& Shape11 =  Shape();
Appearance& Appearance12 =  Appearance();
Material& Material13 =  Material();
Material13.setDiffuseColor(new float[]{0.7,0.2,0.2});
Appearance12.addChild(&Material13);

Shape11.addChild(&Appearance12);

Sphere& Sphere14 =  Sphere();
Sphere14.setRadius(0.1);
Shape11.setGeometry(&Sphere14);

Transform10.addChild(&Shape11);

PlaneSensor& PlaneSensor15 =  PlaneSensor();
PlaneSensor15.setDescription(CString("Grab to move"));
PlaneSensor15.setDEF(CString("PS1"));
Transform10.addChild(&PlaneSensor15);

ROUTE& ROUTE16 =  ROUTE();
ROUTE16.setFromNode(CString("PS1"));
ROUTE16.setFromField(CString("translation_changed"));
ROUTE16.setToNode(CString("G1"));
ROUTE16.setToField(CString("set_translation"));
Transform10.addChild(&ROUTE16);

Scene7.addChild(&Transform10);

Transform& Transform17 =  Transform();
Transform17.setDEF(CString("G2"));
Transform17.setTranslation(new float[]{1,-1,0.01});
Shape& Shape18 =  Shape();
Appearance& Appearance19 =  Appearance();
Material& Material20 =  Material();
Material20.setDiffuseColor(new float[]{0.2,0.7,0.2});
Appearance19.addChild(&Material20);

Shape18.addChild(&Appearance19);

Sphere& Sphere21 =  Sphere();
Sphere21.setRadius(0.1);
Shape18.setGeometry(&Sphere21);

Transform17.addChild(&Shape18);

PlaneSensor& PlaneSensor22 =  PlaneSensor();
PlaneSensor22.setDescription(CString("Grab to move"));
PlaneSensor22.setOffset(new float[]{1,-1,0.01});
PlaneSensor22.setDEF(CString("PS2"));
Transform17.addChild(&PlaneSensor22);

ROUTE& ROUTE23 =  ROUTE();
ROUTE23.setFromNode(CString("PS2"));
ROUTE23.setFromField(CString("translation_changed"));
ROUTE23.setToNode(CString("G2"));
ROUTE23.setToField(CString("set_translation"));
Transform17.addChild(&ROUTE23);

Scene7.addChild(&Transform17);

Transform& Transform24 =  Transform();
Transform24.setDEF(CString("transC1"));
Transform& Transform25 =  Transform();
Transform25.setDEF(CString("rotscaleC1"));
Shape& Shape26 =  Shape();
Appearance& Appearance27 =  Appearance();
Material& Material28 =  Material();
Material28.setDiffuseColor(new float[]{0.2,0.7,0.7});
Material28.setTransparency(0.5);
Appearance27.addChild(&Material28);

Shape26.addChild(&Appearance27);

Cylinder& Cylinder29 =  Cylinder();
Cylinder29.setRadius(0.05);
Shape26.setGeometry(&Cylinder29);

Transform25.addChild(&Shape26);

Transform24.addChild(&Transform25);

Scene7.addChild(&Transform24);

ProtoDeclare& ProtoDeclare30 =  ProtoDeclare();
ProtoDeclare30.setName(CString("x3dconnector"));
ProtoInterface& ProtoInterface31 =  ProtoInterface();
field& field32 =  field();
field32.setName(CString("startnode"));
field32.setAccessType(CString("initializeOnly"));
field32.setType(CString("SFNode"));
ProtoInterface31.addChild(&field32);

field& field33 =  field();
field33.setName(CString("endnode"));
field33.setAccessType(CString("initializeOnly"));
field33.setType(CString("SFNode"));
ProtoInterface31.addChild(&field33);

field& field34 =  field();
field34.setName(CString("transnode"));
field34.setAccessType(CString("initializeOnly"));
field34.setType(CString("SFNode"));
ProtoInterface31.addChild(&field34);

field& field35 =  field();
field35.setName(CString("rotscalenode"));
field35.setAccessType(CString("initializeOnly"));
field35.setType(CString("SFNode"));
ProtoInterface31.addChild(&field35);

field& field36 =  field();
field36.setName(CString("set_startpoint"));
field36.setAccessType(CString("inputOnly"));
field36.setType(CString("SFVec3f"));
ProtoInterface31.addChild(&field36);

field& field37 =  field();
field37.setName(CString("set_endpoint"));
field37.setAccessType(CString("inputOnly"));
field37.setType(CString("SFVec3f"));
ProtoInterface31.addChild(&field37);

ProtoDeclare30.addChild(&ProtoInterface31);

ProtoBody& ProtoBody38 =  ProtoBody();
Script& Script39 =  Script();
Script39.setDEF(CString("S1"));
field& field40 =  field();
field40.setName(CString("startnode"));
field40.setAccessType(CString("initializeOnly"));
field40.setType(CString("SFNode"));
Script39.addChild(&field40);

field& field41 =  field();
field41.setName(CString("endnode"));
field41.setAccessType(CString("initializeOnly"));
field41.setType(CString("SFNode"));
Script39.addChild(&field41);

field& field42 =  field();
field42.setName(CString("transnode"));
field42.setAccessType(CString("initializeOnly"));
field42.setType(CString("SFNode"));
Script39.addChild(&field42);

field& field43 =  field();
field43.setName(CString("rotscalenode"));
field43.setAccessType(CString("initializeOnly"));
field43.setType(CString("SFNode"));
Script39.addChild(&field43);

field& field44 =  field();
field44.setName(CString("set_startpoint"));
field44.setAccessType(CString("inputOnly"));
field44.setType(CString("SFVec3f"));
Script39.addChild(&field44);

field& field45 =  field();
field45.setName(CString("set_endpoint"));
field45.setAccessType(CString("inputOnly"));
field45.setType(CString("SFVec3f"));
Script39.addChild(&field45);

IS& IS46 =  IS();
Connect& connect47 =  Connect();
connect47.setNodeField(CString("startnode"));
connect47.setProtoField(CString("startnode"));
IS46.addChild(&connect47);

Connect& connect48 =  Connect();
connect48.setNodeField(CString("endnode"));
connect48.setProtoField(CString("endnode"));
IS46.addChild(&connect48);

Connect& connect49 =  Connect();
connect49.setNodeField(CString("transnode"));
connect49.setProtoField(CString("transnode"));
IS46.addChild(&connect49);

Connect& connect50 =  Connect();
connect50.setNodeField(CString("rotscalenode"));
connect50.setProtoField(CString("rotscalenode"));
IS46.addChild(&connect50);

Connect& connect51 =  Connect();
connect51.setNodeField(CString("set_startpoint"));
connect51.setProtoField(CString("set_startpoint"));
IS46.addChild(&connect51);

Connect& connect52 =  Connect();
connect52.setNodeField(CString("set_endpoint"));
connect52.setProtoField(CString("set_endpoint"));
IS46.addChild(&connect52);

Script39.addChild(&IS46);


Script39.setSourceCode(CString("ecmascript:")+
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
ProtoBody38.addChild(&Script39);

ProtoDeclare30.addChild(&ProtoBody38);

Scene7.addChild(&ProtoDeclare30);

ProtoInstance& ProtoInstance53 =  ProtoInstance();
ProtoInstance53.setName(CString("x3dconnector"));
ProtoInstance53.setDEF(CString("connector1"));
fieldValue& fieldValue54 =  fieldValue();
fieldValue54.setName(CString("startnode"));
Transform& Transform55 =  Transform();
Transform55.setUSE(CString("G1"));
fieldValue54.addChild(&Transform55);

ProtoInstance53.addChild(&fieldValue54);

fieldValue& fieldValue56 =  fieldValue();
fieldValue56.setName(CString("endnode"));
Transform& Transform57 =  Transform();
Transform57.setUSE(CString("G2"));
fieldValue56.addChild(&Transform57);

ProtoInstance53.addChild(&fieldValue56);

fieldValue& fieldValue58 =  fieldValue();
fieldValue58.setName(CString("transnode"));
Transform& Transform59 =  Transform();
Transform59.setUSE(CString("transC1"));
fieldValue58.addChild(&Transform59);

ProtoInstance53.addChild(&fieldValue58);

fieldValue& fieldValue60 =  fieldValue();
fieldValue60.setName(CString("rotscalenode"));
Transform& Transform61 =  Transform();
Transform61.setUSE(CString("rotscaleC1"));
fieldValue60.addChild(&Transform61);

ProtoInstance53.addChild(&fieldValue60);

//<fieldValue name='set_startpoint'> </fieldValue> <fieldValue name='set_endpoint'> </fieldValue>
Scene7.addChild(&ProtoInstance53);

ROUTE& ROUTE62 =  ROUTE();
ROUTE62.setFromNode(CString("G1"));
ROUTE62.setFromField(CString("translation_changed"));
ROUTE62.setToNode(CString("connector1"));
ROUTE62.setToField(CString("set_startpoint"));
Scene7.addChild(&ROUTE62);

ROUTE& ROUTE63 =  ROUTE();
ROUTE63.setFromNode(CString("G2"));
ROUTE63.setFromField(CString("translation_changed"));
ROUTE63.setToNode(CString("connector1"));
ROUTE63.setToField(CString("set_endpoint"));
Scene7.addChild(&ROUTE63);

X3D0.setScene(&Scene7);

}
