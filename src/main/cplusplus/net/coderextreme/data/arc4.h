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
meta2.setContent(CString("arc4.x3d"));
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
Viewpoint8.setPosition(new float[]{0.0,0.0,5.0});
Viewpoint8.setDescription(CString("Only Viewpoint"));
Scene7.addChild(&Viewpoint8);

Background& Background9 =  Background();
Background9.setSkyColor(new float[]{0.4,0.4,0.4}, 3);
Scene7.addChild(&Background9);

Transform& Transform10 =  Transform();
Transform10.setDEF(CString("DECLpoint_G1_node"));
Shape& Shape11 =  Shape();
Sphere& Sphere12 =  Sphere();
Sphere12.setRadius(0.1);
Shape11.setGeometry(&Sphere12);

Appearance& Appearance13 =  Appearance();
Material& Material14 =  Material();
Material14.setDiffuseColor(new float[]{1.0,0.0,0.0});
Appearance13.addChild(&Material14);

Shape11.addChild(&Appearance13);

Transform10.addChild(&Shape11);

PositionInterpolator& PositionInterpolator15 =  PositionInterpolator();
PositionInterpolator15.setDEF(CString("DECLpoint_G1_PI1"));
PositionInterpolator15.setKey(new float[]{0.0,1.0}, 2);
PositionInterpolator15.setKeyValue(new float[]{0.0,0.0,0.0,0.0,5.0,0.0}, 6);
Transform10.addChild(&PositionInterpolator15);

Script& Script16 =  Script();
Script16.setDEF(CString("DECLpoint_G1_MB1"));
field& field17 =  field();
field17.setName(CString("translation"));
field17.setAccessType(CString("inputOutput"));
field17.setType(CString("SFVec3f"));
field17.setValue(CString("0 0 0"));
Script16.addChild(&field17);

field& field18 =  field();
field18.setName(CString("old"));
field18.setAccessType(CString("inputOutput"));
field18.setType(CString("SFVec3f"));
field18.setValue(CString("0 0 0"));
Script16.addChild(&field18);

field& field19 =  field();
field19.setName(CString("set_location"));
field19.setAccessType(CString("inputOnly"));
field19.setType(CString("SFTime"));
Script16.addChild(&field19);

field& field20 =  field();
field20.setName(CString("keyValue"));
field20.setAccessType(CString("inputOutput"));
field20.setType(CString("MFVec3f"));
field20.setValue(CString("0 0 0 0 5 0"));
Script16.addChild(&field20);


//Script16.setSourceCode(CString("ecmascript:")+
//_T("		function set_location(value) {")+
//_T("                    old = translation;")+
//_T("		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);")+
//_T("                    keyValue = new MFVec3f([old, translation]);")+
//_T("		    // Browser.println(keyValue);")+
//_T("		}"));
Transform10.addChild(&Script16);

TimeSensor& TimeSensor21 =  TimeSensor();
TimeSensor21.setDEF(CString("DECLpoint_G1_CL1"));
TimeSensor21.setCycleInterval(3);
TimeSensor21.setLoop(true);
Transform10.addChild(&TimeSensor21);

ROUTE& ROUTE22 =  ROUTE();
ROUTE22.setFromNode(CString("DECLpoint_G1_CL1"));
ROUTE22.setFromField(CString("cycleTime"));
ROUTE22.setToNode(CString("DECLpoint_G1_MB1"));
ROUTE22.setToField(CString("set_location"));
Transform10.addChild(&ROUTE22);

ROUTE& ROUTE23 =  ROUTE();
ROUTE23.setFromNode(CString("DECLpoint_G1_CL1"));
ROUTE23.setFromField(CString("fraction_changed"));
ROUTE23.setToNode(CString("DECLpoint_G1_PI1"));
ROUTE23.setToField(CString("set_fraction"));
Transform10.addChild(&ROUTE23);

ROUTE& ROUTE24 =  ROUTE();
ROUTE24.setFromNode(CString("DECLpoint_G1_MB1"));
ROUTE24.setFromField(CString("keyValue"));
ROUTE24.setToNode(CString("DECLpoint_G1_PI1"));
ROUTE24.setToField(CString("keyValue"));
Transform10.addChild(&ROUTE24);

ROUTE& ROUTE25 =  ROUTE();
ROUTE25.setFromNode(CString("DECLpoint_G1_PI1"));
ROUTE25.setFromField(CString("value_changed"));
ROUTE25.setToNode(CString("DECLpoint_G1_node"));
ROUTE25.setToField(CString("set_translation"));
Transform10.addChild(&ROUTE25);

Scene7.addChild(&Transform10);

Transform& Transform26 =  Transform();
Transform26.setDEF(CString("DECLpoint_G2_node"));
Shape& Shape27 =  Shape();
Sphere& Sphere28 =  Sphere();
Sphere28.setRadius(0.1);
Shape27.setGeometry(&Sphere28);

Appearance& Appearance29 =  Appearance();
Material& Material30 =  Material();
Material30.setDiffuseColor(new float[]{1.0,0.0,0.0});
Appearance29.addChild(&Material30);

Shape27.addChild(&Appearance29);

Transform26.addChild(&Shape27);

PositionInterpolator& PositionInterpolator31 =  PositionInterpolator();
PositionInterpolator31.setDEF(CString("DECLpoint_G2_PI1"));
PositionInterpolator31.setKey(new float[]{0.0,1.0}, 2);
PositionInterpolator31.setKeyValue(new float[]{0.0,0.0,0.0,0.0,5.0,0.0}, 6);
Transform26.addChild(&PositionInterpolator31);

Script& Script32 =  Script();
Script32.setDEF(CString("DECLpoint_G2_MB1"));
field& field33 =  field();
field33.setName(CString("translation"));
field33.setAccessType(CString("inputOutput"));
field33.setType(CString("SFVec3f"));
field33.setValue(CString("0 0 0"));
Script32.addChild(&field33);

field& field34 =  field();
field34.setName(CString("old"));
field34.setAccessType(CString("inputOutput"));
field34.setType(CString("SFVec3f"));
field34.setValue(CString("0 0 0"));
Script32.addChild(&field34);

field& field35 =  field();
field35.setName(CString("set_location"));
field35.setAccessType(CString("inputOnly"));
field35.setType(CString("SFTime"));
Script32.addChild(&field35);

field& field36 =  field();
field36.setName(CString("keyValue"));
field36.setAccessType(CString("inputOutput"));
field36.setType(CString("MFVec3f"));
field36.setValue(CString("0 0 0 0 5 0"));
Script32.addChild(&field36);


//Script32.setSourceCode(CString("ecmascript:")+
//_T("		function set_location(value) {")+
//_T("                    old = translation;")+
//_T("		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);")+
//_T("                    keyValue = new MFVec3f([old, translation]);")+
//_T("		    // Browser.println(keyValue);")+
//_T("		}"));
Transform26.addChild(&Script32);

TimeSensor& TimeSensor37 =  TimeSensor();
TimeSensor37.setDEF(CString("DECLpoint_G2_CL1"));
TimeSensor37.setCycleInterval(3);
TimeSensor37.setLoop(true);
Transform26.addChild(&TimeSensor37);

ROUTE& ROUTE38 =  ROUTE();
ROUTE38.setFromNode(CString("DECLpoint_G2_CL1"));
ROUTE38.setFromField(CString("cycleTime"));
ROUTE38.setToNode(CString("DECLpoint_G2_MB1"));
ROUTE38.setToField(CString("set_location"));
Transform26.addChild(&ROUTE38);

ROUTE& ROUTE39 =  ROUTE();
ROUTE39.setFromNode(CString("DECLpoint_G2_CL1"));
ROUTE39.setFromField(CString("fraction_changed"));
ROUTE39.setToNode(CString("DECLpoint_G2_PI1"));
ROUTE39.setToField(CString("set_fraction"));
Transform26.addChild(&ROUTE39);

ROUTE& ROUTE40 =  ROUTE();
ROUTE40.setFromNode(CString("DECLpoint_G2_MB1"));
ROUTE40.setFromField(CString("keyValue"));
ROUTE40.setToNode(CString("DECLpoint_G2_PI1"));
ROUTE40.setToField(CString("keyValue"));
Transform26.addChild(&ROUTE40);

ROUTE& ROUTE41 =  ROUTE();
ROUTE41.setFromNode(CString("DECLpoint_G2_PI1"));
ROUTE41.setFromField(CString("value_changed"));
ROUTE41.setToNode(CString("DECLpoint_G2_node"));
ROUTE41.setToField(CString("set_translation"));
Transform26.addChild(&ROUTE41);

Scene7.addChild(&Transform26);

Group& Group42 =  Group();
Transform& Transform43 =  Transform();
Transform43.setDEF(CString("DECLx3dconnector_connector1_trans"));
Transform& Transform44 =  Transform();
Transform44.setDEF(CString("DECLx3dconnector_connector1_rotscale"));
Shape& Shape45 =  Shape();
Appearance& Appearance46 =  Appearance();
Material& Material47 =  Material();
Material47.setDiffuseColor(new float[]{0.2,0.7,0.7});
Material47.setTransparency(0.5);
Appearance46.addChild(&Material47);

Shape45.addChild(&Appearance46);

Cylinder& Cylinder48 =  Cylinder();
Cylinder48.setRadius(0.05);
Shape45.setGeometry(&Cylinder48);

Transform44.addChild(&Shape45);

Transform43.addChild(&Transform44);

Group42.addChild(&Transform43);

Script& Script49 =  Script();
Script49.setDEF(CString("DECLx3dconnector_connector1_S1"));
field& field50 =  field();
field50.setName(CString("startnode"));
field50.setAccessType(CString("initializeOnly"));
field50.setType(CString("SFNode"));
Script49.addChild(&field50);

field& field51 =  field();
field51.setName(CString("endnode"));
field51.setAccessType(CString("initializeOnly"));
field51.setType(CString("SFNode"));
Script49.addChild(&field51);

field& field52 =  field();
field52.setName(CString("position"));
field52.setAccessType(CString("inputOutput"));
field52.setType(CString("SFNode"));
Transform& Transform53 =  Transform();
Transform53.setUSE(CString("DECLx3dconnector_connector1_trans"));
field52.addChild(&Transform53);

Script49.addChild(&field52);

field& field54 =  field();
field54.setName(CString("rotscale"));
field54.setAccessType(CString("inputOutput"));
field54.setType(CString("SFNode"));
Transform& Transform55 =  Transform();
Transform55.setUSE(CString("DECLx3dconnector_connector1_rotscale"));
field54.addChild(&Transform55);

Script49.addChild(&field54);

field& field56 =  field();
field56.setName(CString("set_startpoint"));
field56.setAccessType(CString("inputOnly"));
field56.setType(CString("SFVec3f"));
Script49.addChild(&field56);

field& field57 =  field();
field57.setName(CString("set_endpoint"));
field57.setAccessType(CString("inputOnly"));
field57.setType(CString("SFVec3f"));
Script49.addChild(&field57);


//Script49.setSourceCode(CString("ecmascript:")+
//_T("        function recompute(startpoint,endpoint){")+
//_T("	    if (typeof endpoint === 'undefined') {")+
//_T("		    if (typeof Quaternion !== 'undefined') {")+
//_T("			    return {")+
//_T("				    scale : new SFVec3f(1.0,1.0,1.0),")+
//_T("				    translation : new SFVec3f(1.0,1.0,1.0),")+
//_T("			    	    rotation : new Quaternion.rotateFromTo(new SFVec3f(0.0,1.0,0.0), 1.0)")+
//_T("			    };")+
//_T("	    	    } else if (typeof SFRotation !== 'undefined') {")+
//_T("			    return {")+
//_T("				    scale : new SFVec3f(1.0,1.0,1.0),")+
//_T("				    translation : new SFVec3f(1.0,1.0,1.0),")+
//_T("			    	    rotation : new SFRotation(new SFVec3f(0.0,1.0,0.0),1.0)")+
//_T("			    };")+
//_T("	    	    } else {")+
//_T("			    return {")+
//_T("				    scale : new SFVec3f(1.0,1.0,1.0),")+
//_T("				    translation : new SFVec3f(1.0,1.0,1.0)")+
//_T("			    };")+
//_T("		    }")+
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
//_T("	      position.translation = trafo.translation;")+
//_T("	      rotscale.rotation = trafo.rotation;")+
//_T("	      rotscale.scale = trafo.scale;")+
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
Group42.addChild(&Script49);

Scene7.addChild(&Group42);

ROUTE& ROUTE58 =  ROUTE();
ROUTE58.setFromNode(CString("DECLpoint_G1_node"));
ROUTE58.setFromField(CString("translation_changed"));
ROUTE58.setToNode(CString("DECLx3dconnector_connector1_S1"));
ROUTE58.setToField(CString("set_startpoint"));
Scene7.addChild(&ROUTE58);

ROUTE& ROUTE59 =  ROUTE();
ROUTE59.setFromNode(CString("DECLpoint_G2_node"));
ROUTE59.setFromField(CString("translation_changed"));
ROUTE59.setToNode(CString("DECLx3dconnector_connector1_S1"));
ROUTE59.setToField(CString("set_endpoint"));
Scene7.addChild(&ROUTE59);

X3D0.setScene(&Scene7);

//}
