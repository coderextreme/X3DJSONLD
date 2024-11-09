#define False false
#define True true
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
int main(int argc, char ** argv) {
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
meta3.setContent(CString("Thu, 08 Oct 2015 12:22:24 GMT"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("creator"));
meta4.setContent(CString("Holger Seelig"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("generator"));
meta5.setContent(CString("Titania V1.1.1, http://titania.create3000.de"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("modified"));
meta6.setContent(CString("Thu, 08 Oct 2015 12:22:24 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
ProtoDeclare& ProtoDeclare8 =  ProtoDeclare();
ProtoDeclare8.setName(CString("Shape99"));
ProtoInterface& ProtoInterface9 =  ProtoInterface();
field& field10 =  field();
field10.setName(CString("orientation_changed"));
field10.setAccessType(CString("outputOnly"));
field10.setType(CString("SFRotation"));
ProtoInterface9.addChild(&field10);

field& field11 =  field();
field11.setName(CString("position_changed"));
field11.setAccessType(CString("outputOnly"));
field11.setType(CString("SFVec3f"));
ProtoInterface9.addChild(&field11);

ProtoDeclare8.addChild(&ProtoInterface9);

ProtoBody& ProtoBody12 =  ProtoBody();
Extrusion& Extrusion13 =  Extrusion();
Extrusion13.setDEF(CString("EXT"));
Extrusion13.setCreaseAngle(1);
Extrusion13.setCrossSection(new float[]{0.1,0.1,0.1,-0.1,-0.1,-0.1,-0.1,0.1,0.1,0.1}, 10);
ProtoBody12.addChild(&Extrusion13);

TimeSensor& TimeSensor14 =  TimeSensor();
TimeSensor14.setDEF(CString("TIMER"));
TimeSensor14.setLoop(True);
ProtoBody12.addChild(&TimeSensor14);

CoordinateInterpolator& CoordinateInterpolator15 =  CoordinateInterpolator();
CoordinateInterpolator15.setDEF(CString("INTERP"));
CoordinateInterpolator15.setKey(new float[]{0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1}, 11);
CoordinateInterpolator15.setKeyValue(new float[]{0,0,0,0.1,0.1,0.1,0.2,0.2,0.2,0.3,0.3,0.3,0.4,0.4,0.4,0.5,0.5,0.5,0.6,0.6,0.6,0.7,0.7,0.7,0.8,0.8,0.8,0.9,0.9,0.9,1,1,1}, 33);
ProtoBody12.addChild(&CoordinateInterpolator15);

Script& Script16 =  Script();
Script16.setDEF(CString("SHAPE_SCRIPT"));
Script16.setDirectOutput(True);
field& field17 =  field();
field17.setName(CString("orientation_changed"));
field17.setAccessType(CString("outputOnly"));
field17.setType(CString("SFRotation"));
Script16.addChild(&field17);

field& field18 =  field();
field18.setName(CString("position_changed"));
field18.setAccessType(CString("outputOnly"));
field18.setType(CString("SFVec3f"));
Script16.addChild(&field18);

field& field19 =  field();
field19.setName(CString("set_time"));
field19.setAccessType(CString("inputOnly"));
field19.setType(CString("SFTime"));
Script16.addChild(&field19);

field& field20 =  field();
field20.setName(CString("set_spine"));
field20.setAccessType(CString("inputOnly"));
field20.setType(CString("MFVec3f"));
Script16.addChild(&field20);

field& field21 =  field();
field21.setName(CString("ext"));
field21.setAccessType(CString("initializeOnly"));
field21.setType(CString("SFNode"));
Extrusion& Extrusion22 =  Extrusion();
Extrusion22.setUSE(CString("EXT"));
field21.addChild(&Extrusion22);

Script16.addChild(&field21);

field& field23 =  field();
field23.setName(CString("interp"));
field23.setAccessType(CString("initializeOnly"));
field23.setType(CString("SFNode"));
CoordinateInterpolator& CoordinateInterpolator24 =  CoordinateInterpolator();
CoordinateInterpolator24.setUSE(CString("INTERP"));
field23.addChild(&CoordinateInterpolator24);

Script16.addChild(&field23);

field& field25 =  field();
field25.setName(CString("index"));
field25.setAccessType(CString("initializeOnly"));
field25.setType(CString("MFInt32"));
Script16.addChild(&field25);

field& field26 =  field();
field26.setName(CString("coord"));
field26.setAccessType(CString("initializeOnly"));
field26.setType(CString("MFVec3f"));
Script16.addChild(&field26);

field& field27 =  field();
field27.setName(CString("coord_a"));
field27.setAccessType(CString("initializeOnly"));
field27.setType(CString("MFVec3f"));
Script16.addChild(&field27);

field& field28 =  field();
field28.setName(CString("scale"));
field28.setAccessType(CString("initializeOnly"));
field28.setType(CString("MFVec2f"));
Script16.addChild(&field28);

field& field29 =  field();
field29.setName(CString("coeff"));
field29.setAccessType(CString("initializeOnly"));
field29.setType(CString("MFVec3f"));
field29.setValue(CString("1 1 0 -3 0.74326 1.11184 5 -0.12904 -0.1692 -7 -0.8068 -0.6271 -11 -0.28189 -0.17907 -15 -0.06295 0.04387"));
Script16.addChild(&field29);

field& field30 =  field();
field30.setName(CString("N"));
field30.setAccessType(CString("initializeOnly"));
field30.setType(CString("SFInt32"));
field30.setValue(CString("128"));
Script16.addChild(&field30);

field& field31 =  field();
field31.setName(CString("n"));
field31.setAccessType(CString("initializeOnly"));
field31.setType(CString("SFInt32"));
field31.setValue(CString("4"));
Script16.addChild(&field31);

field& field32 =  field();
field32.setName(CString("r"));
field32.setAccessType(CString("initializeOnly"));
field32.setType(CString("SFFloat"));
field32.setValue(CString("0.3"));
Script16.addChild(&field32);

field& field33 =  field();
field33.setName(CString("cs"));
field33.setAccessType(CString("initializeOnly"));
field33.setType(CString("MFVec2f"));
Script16.addChild(&field33);

field& field34 =  field();
field34.setName(CString("delay"));
field34.setAccessType(CString("initializeOnly"));
field34.setType(CString("SFFloat"));
Script16.addChild(&field34);

field& field35 =  field();
field35.setName(CString("t0"));
field35.setAccessType(CString("initializeOnly"));
field35.setType(CString("SFTime"));
Script16.addChild(&field35);

field& field36 =  field();
field36.setName(CString("isCosmo"));
field36.setAccessType(CString("initializeOnly"));
field36.setType(CString("SFBool"));
field36.setValue(CString("true"));
Script16.addChild(&field36);

field& field37 =  field();
field37.setName(CString("position"));
field37.setAccessType(CString("initializeOnly"));
field37.setType(CString("SFVec3f"));
field37.setValue(CString("0 0 10"));
Script16.addChild(&field37);

field& field38 =  field();
field38.setName(CString("orientation"));
field38.setAccessType(CString("initializeOnly"));
field38.setType(CString("SFRotation"));
Script16.addChild(&field38);

field& field39 =  field();
field39.setName(CString("dir0"));
field39.setAccessType(CString("initializeOnly"));
field39.setType(CString("SFVec3f"));
field39.setValue(CString("0 0 -1"));
Script16.addChild(&field39);

field& field40 =  field();
field40.setName(CString("up0"));
field40.setAccessType(CString("initializeOnly"));
field40.setType(CString("SFVec3f"));
field40.setValue(CString("0 1 0"));
Script16.addChild(&field40);

field& field41 =  field();
field41.setName(CString("up"));
field41.setAccessType(CString("initializeOnly"));
field41.setType(CString("SFVec3f"));
field41.setValue(CString("0 0 1"));
Script16.addChild(&field41);

field& field42 =  field();
field42.setName(CString("look_at"));
field42.setAccessType(CString("initializeOnly"));
field42.setType(CString("SFVec3f"));
Script16.addChild(&field42);

field& field43 =  field();
field43.setName(CString("y0"));
field43.setAccessType(CString("initializeOnly"));
field43.setType(CString("SFFloat"));
Script16.addChild(&field43);

field& field44 =  field();
field44.setName(CString("z0"));
field44.setAccessType(CString("initializeOnly"));
field44.setType(CString("SFFloat"));
Script16.addChild(&field44);

field& field45 =  field();
field45.setName(CString("variable"));
field45.setAccessType(CString("initializeOnly"));
field45.setType(CString("SFInt32"));
field45.setValue(CString("3"));
Script16.addChild(&field45);

field& field46 =  field();
field46.setName(CString("Nkeys"));
field46.setAccessType(CString("initializeOnly"));
field46.setType(CString("SFInt32"));
field46.setValue(CString("17"));
Script16.addChild(&field46);

IS& IS47 =  IS();
Connect& connect48 =  Connect();
connect48.setNodeField(CString("orientation_changed"));
connect48.setProtoField(CString("orientation_changed"));
IS47.addChild(&connect48);

Connect& connect49 =  Connect();
connect49.setNodeField(CString("position_changed"));
connect49.setProtoField(CString("position_changed"));
IS47.addChild(&connect49);

Script16.addChild(&IS47);


Script16.setSourceCode(CString("javascript:")+
_T("      // makes camera orientation from ")+
_T("      // camera position, look_at point and up-vector")+
_T("      function getOrientation(pos, look, up){")+
_T("	  var dir = look.subtract(pos).normalize();")+
_T("	  var rot0 = new SFRotation(dir0,dir);")+
_T("	  var up1 = rot0.multVec(up0);")+
_T("	  var axis = dir.normalize();")+
_T("	  var up_n = up.subtract(dir.multiply(dir.dot(up)));")+
_T("	  var rot1 = new SFRotation(up1,up_n);")+
_T("	  var rot2;  ")+
_T("	  // disagreement between browsers")+
_T("	  if(isCosmo) { ")+
_T("	      rot2 = rot0.multiply(rot1); // Cosmo")+
_T("	  } else {  // WorldView ?")+
_T("	      rot2 = rot1.multiply(rot0);  // WorldView")+
_T("	  }")+
_T("	  return rot2;")+
_T("      }")+
_T("       function makeVector1(t, c){")+
_T("	   ro = 2;")+
_T("	   c.x = ro*Math.cos(t);")+
_T("	   c.y = ro*Math.sin(t);")+
_T("	   c.z = 0;")+
_T("       }")+
_T("        function makeVector(t, c){")+
_T("          var i;")+
_T("	  c.x = c.y = c.z = 0;")+
_T("          for(i=0; i < coeff.length; i++){")+
_T("	      cosfi = Math.cos(coeff[i][0]*t);")+
_T("	      sinfi = Math.sin(coeff[i][0]*t);")+
_T("	      c.x += coeff[i][1]*cosfi-coeff[i][2]*sinfi;")+
_T("	      c.y += coeff[i][2]*cosfi+coeff[i][1]*sinfi;")+
_T("          }")+
_T("	  c.z = -Math.sin(2*t+delay);")+
_T("        }")+
_T("        function makeVector2(t, c){")+
_T("          var i;")+
_T("	  c.x = c.y = c.z = 0;")+
_T("          for(i=0; i < coeff.length; i++){")+
_T("	      if(i != variable){")+
_T("		  cosfi = Math.cos(coeff[i][0]*t);")+
_T("		  sinfi = Math.sin(coeff[i][0]*t);")+
_T("		  c.x += coeff[i][1]*cosfi-coeff[i][2]*sinfi;")+
_T("		  c.y += coeff[i][2]*cosfi+coeff[i][1]*sinfi;")+
_T("	      }")+
_T("          }")+
_T("	  c.z = -Math.sin(2*t+delay);")+
_T("        }")+
_T("        function initialize(time){")+
_T("	    if(Browser.getName().indexOf(\"Cosmo\") != -1){")+
_T("		isCosmo = true;")+
_T("	    } else {")+
_T("		isCosmo = false;")+
_T("	    }")+
_T("          y0 = coeff[variable].y;")+
_T("          z0 = coeff[variable].z;")+
_T("          index = new MFInt32();")+
_T("          coord = new MFVec3f();")+
_T("          coord_a = new MFVec3f();")+
_T("          scale = new MFVec2f();")+
_T("          var i;")+
_T("          for(i = 0; i <=N/2; i++){")+
_T("            t = i/N*Math.PI*2-0.2;")+
_T("            coord[i] = new SFVec3f(0,0,0);")+
_T("            makeVector2(t,coord[i]);")+
_T("	    var s = (Math.cos(4*t+4)+1.5)/2;")+
_T("	    scale[i] = new SFVec2f(s,s);")+
_T("          }")+
_T("	  ")+
_T("	  var keys = new MFFloat();")+
_T("	  ")+
_T("          for( j = 0; j < Nkeys; j++){")+
_T("	      dt = j*Math.PI*2/(Nkeys-1);")+
_T("	      keys[j] = j/(Nkeys-1);")+
_T("	      cosfi = Math.cos(dt);")+
_T("	      sinfi = Math.sin(dt);")+
_T("	      ")+
_T("	      coeff[variable].y = y0*cosfi + z0*sinfi;")+
_T("	      coeff[variable].z = -y0*sinfi + z0*cosfi;")+
_T("	      cv2 = coeff[variable][2];")+
_T("	      cv1 = coeff[variable][1];")+
_T("	      cv0 = coeff[variable][0];")+
_T("	      var offset = j*(N/2+1);")+
_T("	      for(i = 0; i <= N/2; i++){")+
_T("		  t = i/N*Math.PI*2-0.2;")+
_T("		  ")+
_T("		  cosfic = Math.cos(cv0*t);")+
_T("		  sinfic = Math.sin(cv0*t);")+
_T("		  coord_a[i+offset] = new SFVec3f(coord[i].x + cv1*cosfic-cv2*sinfic,")+
_T("		                                coord[i].y + cv2*cosfic+cv1*sinfic,")+
_T("		                                -Math.sin(2*t+dt));")+
_T("	      }            ")+
_T("	  }")+
_T("	  interp.set_key = keys;")+
_T("	  interp.set_keyValue = coord_a;")+
_T("          ext.set_spine = coord;")+
_T("          ext.set_scale = scale;")+
_T("          cs = new MFVec2f();")+
_T("          for(i =0; i <= n; i++){")+
_T("            fi = i*2*Math.PI/n+0.3;")+
_T("            cs[i] = new SFVec2f(r*Math.cos(fi), -r*Math.sin(fi));")+
_T("          }")+
_T("          ext.set_crossSection = cs;           ")+
_T("	  trace('initialize');")+
_T("        }")+
_T("       function init(){")+
_T("          for(i = 0; i <=N; i++){")+
_T("            t = i/N*Math.PI*2;")+
_T("            makeVector(t,coord[i]);")+
_T("          }        ")+
_T("          ext.set_spine = coord;")+
_T("       }")+
_T("       function set_time(val){")+
_T("	   if(t0 == 0){")+
_T("	       t0 = val;")+
_T("	   }")+
_T("	   dt = val - t0;")+
_T("	   /*")+
_T("	   var fi = Math.PI*2*dt*0.005;")+
_T("	   var delta_fi = 0.1;")+
_T("	   var height = (Math.cos(4*fi+4)+1.5)/2+0.1;")+
_T("	   makeVector(fi + delta_fi,look_at);")+
_T("	   makeVector(fi,position);")+
_T("	   position.z += height;")+
_T("	   look_at.z += height-0.2;")+
_T("	   position_changed = position;")+
_T("	   orientation_changed = getOrientation(position, look_at, up); ")+
_T("	   */")+
_T("           //delay = 2*Math.PI*dt*0.05;")+
_T("           // delay = 2*Math.PI*dt*0.025; // for 0")+
_T("           delay = dt*0.1; // for 1")+
_T("	   interp.set_fraction = delay - Math.floor(delay);")+
_T("       }")+
_T("       function set_spine(value){")+
_T("	   //trace(value[0]);")+
_T("       }"));
ProtoBody12.addChild(&Script16);

ROUTE& ROUTE50 =  ROUTE();
ROUTE50.setFromNode(CString("TIMER"));
ROUTE50.setFromField(CString("time"));
ROUTE50.setToNode(CString("SHAPE_SCRIPT"));
ROUTE50.setToField(CString("set_time"));
ProtoBody12.addChild(&ROUTE50);

ROUTE& ROUTE51 =  ROUTE();
ROUTE51.setFromNode(CString("INTERP"));
ROUTE51.setFromField(CString("value_changed"));
ROUTE51.setToNode(CString("EXT"));
ROUTE51.setToField(CString("set_spine"));
ProtoBody12.addChild(&ROUTE51);

ROUTE& ROUTE52 =  ROUTE();
ROUTE52.setFromNode(CString("INTERP"));
ROUTE52.setFromField(CString("value_changed"));
ROUTE52.setToNode(CString("SHAPE_SCRIPT"));
ROUTE52.setToField(CString("set_spine"));
ProtoBody12.addChild(&ROUTE52);

ProtoDeclare8.addChild(&ProtoBody12);

Scene7.addChild(&ProtoDeclare8);

ProtoDeclare& ProtoDeclare53 =  ProtoDeclare();
ProtoDeclare53.setName(CString("Axes"));
ProtoBody& ProtoBody54 =  ProtoBody();
Group& Group55 =  Group();
Transform& Transform56 =  Transform();
Transform56.setDEF(CString("Y"));
Transform56.setTranslation(new float[]{0,0.2,0});
Shape& Shape57 =  Shape();
Appearance& Appearance58 =  Appearance();
Material& Material59 =  Material();
Material59.setDiffuseColor(new float[]{1,1,0});
Material59.setSpecularColor(new float[]{1,1,0});
Appearance58.addChild(&Material59);

Shape57.addChild(&Appearance58);

Cylinder& Cylinder60 =  Cylinder();
Cylinder60.setHeight(0.4);
Cylinder60.setRadius(0.05);
Shape57.setGeometry(&Cylinder60);

Transform56.addChild(&Shape57);

Group55.addChild(&Transform56);

Transform& Transform61 =  Transform();
Transform61.setRotation(new float[]{0,0,-1,1.5708});
Transform& Transform62 =  Transform();
Transform62.setUSE(CString("Y"));
Transform61.addChild(&Transform62);

Group55.addChild(&Transform61);

Transform& Transform63 =  Transform();
Transform63.setRotation(new float[]{1,0,0,1.5708});
Transform& Transform64 =  Transform();
Transform64.setUSE(CString("Y"));
Transform63.addChild(&Transform64);

Group55.addChild(&Transform63);

ProtoBody54.addChild(&Group55);

ProtoDeclare53.addChild(&ProtoBody54);

Scene7.addChild(&ProtoDeclare53);

ProtoDeclare& ProtoDeclare65 =  ProtoDeclare();
ProtoDeclare65.setName(CString("IndexedPolySet"));
ProtoInterface& ProtoInterface66 =  ProtoInterface();
field& field67 =  field();
field67.setName(CString("coordIndex"));
field67.setAccessType(CString("initializeOnly"));
field67.setType(CString("MFInt32"));
ProtoInterface66.addChild(&field67);

field& field68 =  field();
field68.setName(CString("coord"));
field68.setAccessType(CString("initializeOnly"));
field68.setType(CString("SFNode"));
Coordinate& Coordinate69 =  Coordinate();
Coordinate69.setDEF(CString("_1"));
field68.addChild(&Coordinate69);

ProtoInterface66.addChild(&field68);

field& field70 =  field();
field70.setName(CString("scale"));
field70.setAccessType(CString("initializeOnly"));
field70.setType(CString("SFFloat"));
field70.setValue(CString("0.9"));
ProtoInterface66.addChild(&field70);

ProtoDeclare65.addChild(&ProtoInterface66);

ProtoBody& ProtoBody71 =  ProtoBody();
IndexedFaceSet& IndexedFaceSet72 =  IndexedFaceSet();
IndexedFaceSet72.setDEF(CString("IFS"));
IndexedFaceSet72.setSolid(False);
Coordinate& Coordinate73 =  Coordinate();
IndexedFaceSet72.setCoord(&Coordinate73);

ProtoBody71.addChild(&IndexedFaceSet72);

Script& Script74 =  Script();
Script74.setDEF(CString("IndexedPolySet"));
field& field75 =  field();
field75.setName(CString("coordIndex"));
field75.setAccessType(CString("initializeOnly"));
field75.setType(CString("MFInt32"));
Script74.addChild(&field75);

field& field76 =  field();
field76.setName(CString("coord"));
field76.setAccessType(CString("initializeOnly"));
field76.setType(CString("SFNode"));
Script74.addChild(&field76);

field& field77 =  field();
field77.setName(CString("ifs"));
field77.setAccessType(CString("initializeOnly"));
field77.setType(CString("SFNode"));
IndexedFaceSet& IndexedFaceSet78 =  IndexedFaceSet();
IndexedFaceSet78.setUSE(CString("IFS"));
field77.addChild(IndexedFaceSet78);

Script74.addChild(&field77);

field& field79 =  field();
field79.setName(CString("ci"));
field79.setAccessType(CString("initializeOnly"));
field79.setType(CString("MFInt32"));
Script74.addChild(&field79);

field& field80 =  field();
field80.setName(CString("vertex"));
field80.setAccessType(CString("initializeOnly"));
field80.setType(CString("MFVec3f"));
Script74.addChild(&field80);

field& field81 =  field();
field81.setName(CString("scale"));
field81.setAccessType(CString("initializeOnly"));
field81.setType(CString("SFFloat"));
Script74.addChild(&field81);

IS& IS82 =  IS();
Connect& connect83 =  Connect();
connect83.setNodeField(CString("coordIndex"));
connect83.setProtoField(CString("coordIndex"));
IS82.addChild(&connect83);

Connect& connect84 =  Connect();
connect84.setNodeField(CString("coord"));
connect84.setProtoField(CString("coord"));
IS82.addChild(&connect84);

Connect& connect85 =  Connect();
connect85.setNodeField(CString("scale"));
connect85.setProtoField(CString("scale"));
IS82.addChild(&connect85);

Script74.addChild(&IS82);


Script74.setSourceCode(CString("javascript:")+
_T("	function initialize(){")+
_T("	    var fcount = 0;")+
_T("	    var vcount = 0;")+
_T("	    var ci_count = 0;")+
_T("	    var fv = new MFVec3f();")+
_T("	    var center = new SFVec3f(0,0,0);")+
_T("	    for(i = 0; i < coordIndex.length; i++){")+
_T("		if(coordIndex[i] != -1){")+
_T("		    fv[fcount++] = coord.point[coordIndex[i]];")+
_T("		} else { // new face ")+
_T("		    center.x = center.y = center.z = 0;")+
_T("		    for( j = 0; j < fcount; j++){")+
_T("			center.x += fv[j].x;")+
_T("			center.y += fv[j].y;")+
_T("			center.z += fv[j].z;")+
_T("		    }")+
_T("		    center.x /= fcount;")+
_T("		    center.y /= fcount;")+
_T("		    center.z /= fcount;")+
_T("		    for( j = 0; j < fcount; j++){			")+
_T("			vertex[vcount] = new SFVec3f(")+
_T("			         center.x+(fv[j].x-center.x)*scale,")+
_T("			         center.y+(fv[j].y-center.y)*scale,")+
_T("			         center.z+(fv[j].z-center.z)*scale);")+
_T("			ci[ci_count++] = vcount;")+
_T("			//trace(vertex[vcount]);")+
_T("			vcount++;")+
_T("		    }")+
_T("		    ci[ci_count++] = -1;")+
_T("		    fcount = 0;")+
_T("		}")+
_T("	    }")+
_T("	    ifs.coord.set_point = vertex;")+
_T("	    ifs.set_coordIndex = ci;	    ")+
_T("	}"));
ProtoBody71.addChild(&Script74);

ProtoDeclare65.addChild(&ProtoBody71);

Scene7.addChild(&ProtoDeclare65);

ProtoDeclare& ProtoDeclare86 =  ProtoDeclare();
ProtoDeclare86.setName(CString("IFS"));
ProtoBody& ProtoBody87 =  ProtoBody();
ProtoInstance& ProtoInstance88 =  ProtoInstance();
ProtoInstance88.setName(CString("IndexedPolySet"));
fieldValue& fieldValue89 =  fieldValue();
fieldValue89.setName(CString("coordIndex"));
fieldValue89.setValue(CString("21 22 2 1 -1 22 23 3 2 -1 23 24 4 3 -1 24 25 5 4 -1 25 26 6 5 -1 26 27 7 6 -1 27 28 8 7 -1 28 29 9 8 -1 29 30 10 9 -1 30 31 11 10 -1 31 32 12 11 -1 32 33 13 12 -1 33 34 14 13 -1 34 35 15 14 -1 35 36 16 15 -1 36 37 17 16 -1 37 38 18 17 -1 38 39 19 18 -1 39 40 20 19 -1 42 43 23 22 -1 43 44 24 23 -1 44 45 25 24 -1 45 46 26 25 -1 46 47 27 26 -1 47 48 28 27 -1 48 49 29 28 -1 49 50 30 29 -1 50 51 31 30 -1 51 52 32 31 -1 52 53 33 32 -1 53 54 34 33 -1 54 55 35 34 -1 55 56 36 35 -1 56 57 37 36 -1 57 58 38 37 -1 58 59 39 38 -1 59 60 40 39 -1 60 61 41 40 -1 63 64 44 43 -1 64 65 45 44 -1 65 66 46 45 -1 66 67 47 46 -1 67 68 48 47 -1 68 69 49 48 -1 69 70 50 49 -1 70 71 51 50 -1 71 72 52 51 -1 72 73 53 52 -1 73 74 54 53 -1 74 75 55 54 -1 75 76 56 55 -1 76 77 57 56 -1 77 78 58 57 -1 78 79 59 58 -1 79 80 60 59 -1 80 81 61 60 -1 81 82 62 61 -1 84 85 65 64 -1 85 86 66 65 -1 86 87 67 66 -1 87 88 68 67 -1 88 89 69 68 -1 89 90 70 69 -1 90 91 71 70 -1 91 92 72 71 -1 92 93 73 72 -1 93 94 74 73 -1 94 95 75 74 -1 95 96 76 75 -1 96 97 77 76 -1 97 98 78 77 -1 98 99 79 78 -1 99 100 80 79 -1 100 101 81 80 -1 101 102 82 81 -1 102 103 83 82 -1 105 106 86 85 -1 106 107 87 86 -1 107 108 88 87 -1 108 109 89 88 -1 109 110 90 89 -1 110 111 91 90 -1 111 112 92 91 -1 112 113 93 92 -1 113 114 94 93 -1 114 115 95 94 -1 115 116 96 95 -1 116 117 97 96 -1 117 118 98 97 -1 118 119 99 98 -1 119 120 100 99 -1 120 121 101 100 -1 121 122 102 101 -1 122 123 103 102 -1 123 124 104 103 -1 126 127 107 106 -1 127 128 108 107 -1 128 129 109 108 -1 129 130 110 109 -1 130 131 111 110 -1 131 132 112 111 -1 132 133 113 112 -1 133 134 114 113 -1 134 135 115 114 -1 135 136 116 115 -1 136 137 117 116 -1 137 138 118 117 -1 138 139 119 118 -1 139 140 120 119 -1 140 141 121 120 -1 141 142 122 121 -1 142 143 123 122 -1 143 144 124 123 -1 144 145 125 124 -1 147 148 128 127 -1 148 149 129 128 -1 149 150 130 129 -1 150 151 131 130 -1 151 152 132 131 -1 152 153 133 132 -1 153 154 134 133 -1 154 155 135 134 -1 155 156 136 135 -1 156 157 137 136 -1 157 158 138 137 -1 158 159 139 138 -1 159 160 140 139 -1 160 161 141 140 -1 161 162 142 141 -1 162 163 143 142 -1 163 164 144 143 -1 164 165 145 144 -1 165 166 146 145 -1 168 169 149 148 -1 169 170 150 149 -1 170 171 151 150 -1 171 172 152 151 -1 172 173 153 152 -1 173 174 154 153 -1 174 175 155 154 -1 175 176 156 155 -1 176 177 157 156 -1 177 178 158 157 -1 178 179 159 158 -1 179 180 160 159 -1 180 181 161 160 -1 181 182 162 161 -1 182 183 163 162 -1 183 184 164 163 -1 184 185 165 164 -1 185 186 166 165 -1 186 187 167 166 -1 189 190 170 169 -1 190 191 171 170 -1 191 192 172 171 -1 192 193 173 172 -1 193 194 174 173 -1 194 195 175 174 -1 195 196 176 175 -1 196 197 177 176 -1 197 198 178 177 -1 198 199 179 178 -1 199 200 180 179 -1 200 201 181 180 -1 201 202 182 181 -1 202 203 183 182 -1 203 204 184 183 -1 204 205 185 184 -1 205 206 186 185 -1 206 207 187 186 -1 207 208 188 187 -1 210 211 191 190 -1 211 212 192 191 -1 212 213 193 192 -1 213 214 194 193 -1 214 215 195 194 -1 215 216 196 195 -1 216 217 197 196 -1 217 218 198 197 -1 218 219 199 198 -1 219 220 200 199 -1 220 221 201 200 -1 221 222 202 201 -1 222 223 203 202 -1 223 224 204 203 -1 224 225 205 204 -1 225 226 206 205 -1 226 227 207 206 -1 227 228 208 207 -1 228 229 209 208 -1 231 232 212 211 -1 232 233 213 212 -1 233 234 214 213 -1 234 235 215 214 -1 235 236 216 215 -1 236 237 217 216 -1 237 238 218 217 -1 238 239 219 218 -1 239 240 220 219 -1 240 241 221 220 -1 241 242 222 221 -1 242 243 223 222 -1 243 244 224 223 -1 244 245 225 224 -1 245 246 226 225 -1 246 247 227 226 -1 247 248 228 227 -1 248 249 229 228 -1 249 250 230 229 -1 252 253 233 232 -1 253 254 234 233 -1 254 255 235 234 -1 255 256 236 235 -1 256 257 237 236 -1 257 258 238 237 -1 258 259 239 238 -1 259 260 240 239 -1 260 261 241 240 -1 261 262 242 241 -1 262 263 243 242 -1 263 264 244 243 -1 264 265 245 244 -1 265 266 246 245 -1 266 267 247 246 -1 267 268 248 247 -1 268 269 249 248 -1 269 270 250 249 -1 270 271 251 250 -1 273 274 254 253 -1 274 275 255 254 -1 275 276 256 255 -1 276 277 257 256 -1 277 278 258 257 -1 278 279 259 258 -1 279 280 260 259 -1 280 281 261 260 -1 281 282 262 261 -1 282 283 263 262 -1 283 284 264 263 -1 284 285 265 264 -1 285 286 266 265 -1 286 287 267 266 -1 287 288 268 267 -1 288 289 269 268 -1 289 290 270 269 -1 290 291 271 270 -1 291 292 272 271 -1 294 295 275 274 -1 295 296 276 275 -1 296 297 277 276 -1 297 298 278 277 -1 298 299 279 278 -1 299 300 280 279 -1 300 301 281 280 -1 301 302 282 281 -1 302 303 283 282 -1 303 304 284 283 -1 304 305 285 284 -1 305 306 286 285 -1 306 307 287 286 -1 307 308 288 287 -1 308 309 289 288 -1 309 310 290 289 -1 310 311 291 290 -1 311 312 292 291 -1 312 313 293 292 -1 315 316 296 295 -1 316 317 297 296 -1 317 318 298 297 -1 318 319 299 298 -1 319 320 300 299 -1 320 321 301 300 -1 321 322 302 301 -1 322 323 303 302 -1 323 324 304 303 -1 324 325 305 304 -1 325 326 306 305 -1 326 327 307 306 -1 327 328 308 307 -1 328 329 309 308 -1 329 330 310 309 -1 330 331 311 310 -1 331 332 312 311 -1 332 333 313 312 -1 333 334 314 313 -1 336 337 317 316 -1 337 338 318 317 -1 338 339 319 318 -1 339 340 320 319 -1 340 341 321 320 -1 341 342 322 321 -1 342 343 323 322 -1 343 344 324 323 -1 344 345 325 324 -1 345 346 326 325 -1 346 347 327 326 -1 347 348 328 327 -1 348 349 329 328 -1 349 350 330 329 -1 350 351 331 330 -1 351 352 332 331 -1 352 353 333 332 -1 353 354 334 333 -1 354 355 335 334 -1 357 358 338 337 -1 358 359 339 338 -1 359 360 340 339 -1 360 361 341 340 -1 361 362 342 341 -1 362 363 343 342 -1 363 364 344 343 -1 364 365 345 344 -1 365 366 346 345 -1 366 367 347 346 -1 367 368 348 347 -1 368 369 349 348 -1 369 370 350 349 -1 370 371 351 350 -1 371 372 352 351 -1 372 373 353 352 -1 373 374 354 353 -1 374 375 355 354 -1 375 376 356 355 -1 378 379 359 358 -1 379 380 360 359 -1 380 381 361 360 -1 381 382 362 361 -1 382 383 363 362 -1 383 384 364 363 -1 384 385 365 364 -1 385 386 366 365 -1 386 387 367 366 -1 387 388 368 367 -1 388 389 369 368 -1 389 390 370 369 -1 390 391 371 370 -1 391 392 372 371 -1 392 393 373 372 -1 393 394 374 373 -1 394 395 375 374 -1 395 396 376 375 -1 396 397 377 376 -1 399 400 380 379 -1 400 401 381 380 -1 401 402 382 381 -1 402 403 383 382 -1 403 404 384 383 -1 404 405 385 384 -1 405 406 386 385 -1 406 407 387 386 -1 407 408 388 387 -1 408 409 389 388 -1 409 410 390 389 -1 410 411 391 390 -1 411 412 392 391 -1 412 413 393 392 -1 413 414 394 393 -1 414 415 395 394 -1 415 416 396 395 -1 416 417 397 396 -1 417 418 398 397 -1 0 1 401 400 -1 1 2 402 401 -1 2 3 403 402 -1 3 4 404 403 -1 4 5 405 404 -1 5 6 406 405 -1 6 7 407 406 -1 7 8 408 407 -1 8 9 409 408 -1 9 10 410 409 -1 10 11 411 410 -1 11 12 412 411 -1 12 13 413 412 -1 13 14 414 413 -1 14 15 415 414 -1 15 16 416 415 -1 16 17 417 416 -1 17 18 418 417 -1 18 19 419 418 -1"));
ProtoInstance88.addChild(&fieldValue89);

fieldValue& fieldValue90 =  fieldValue();
fieldValue90.setName(CString("coord"));
Coordinate& Coordinate91 =  Coordinate();
Coordinate91.setPoint(new float[]{1.66533e-16,-1.38778e-16,-6.44218,0.764842,-1.38778e-16,-5.79796,1.49225,0.236349,-5.15374,2.11102,0.685912,-4.50952,2.56058,1.30468,-3.86531,2.79693,2.03209,-3.22109,2.79693,2.79693,-2.57687,2.56058,3.52434,-1.93265,2.11102,4.14311,-1.28844,1.49225,4.59267,-0.644218,0.764842,4.82902,-3.55271e-15,4.44089e-16,4.82902,0.644218,-0.727408,4.59267,1.28844,-1.34618,4.14311,1.93265,-1.79574,3.52434,2.57687,-2.03209,2.79693,3.22109,-2.03209,2.03209,3.86531,-1.79574,1.30468,4.50952,-1.34618,0.685912,5.15374,-0.727408,0.236349,5.79796,-3.33067e-16,-6.10623e-16,6.44218,1.66533e-16,-1.38778e-16,-6.44218,0.727408,0.236349,-5.79796,1.34618,0.685912,-5.15374,1.79574,1.30468,-4.50952,2.03209,2.03209,-3.86531,2.03209,2.79693,-3.22109,1.79574,3.52434,-2.57687,1.34618,4.14311,-1.93265,0.727408,4.59267,-1.28844,4.44089e-16,4.82902,-0.644218,-0.764842,4.82902,-3.55271e-15,-1.49225,4.59267,0.644218,-2.11102,4.14311,1.28844,-2.56058,3.52434,1.93265,-2.79693,2.79693,2.57687,-2.79693,2.03209,3.22109,-2.56058,1.30468,3.86531,-2.11102,0.685912,4.50952,-1.49225,0.236349,5.15374,-0.764842,-6.10623e-16,5.79796,-1.11022e-15,-6.10623e-16,6.44218,1.66533e-16,-1.38778e-16,-6.44218,0.61877,0.449563,-5.79796,1.06833,1.06833,-5.15374,1.30468,1.79574,-4.50952,1.30468,2.56058,-3.86531,1.06833,3.28799,-3.22109,0.61877,3.90676,-2.57687,4.44089e-16,4.35633,-1.93265,-0.727408,4.59267,-1.28844,-1.49225,4.59267,-0.644218,-2.21966,4.35633,-3.55271e-15,-2.83843,3.90676,0.644218,-3.28799,3.28799,1.28844,-3.52434,2.56058,1.93265,-3.52434,1.79574,2.57687,-3.28799,1.06833,3.22109,-2.83843,0.449563,3.86531,-2.21966,1.05471e-15,4.50952,-1.49225,-0.236349,5.15374,-0.727408,-0.236349,5.79796,-1.11022e-15,8.88178e-16,6.44218,1.66533e-16,-1.38778e-16,-6.44218,0.449563,0.61877,-5.79796,0.685912,1.34618,-5.15374,0.685912,2.11102,-4.50952,0.449563,2.83843,-3.86531,3.33067e-16,3.4572,-3.22109,-0.61877,3.90676,-2.57687,-1.34618,4.14311,-1.93265,-2.11102,4.14311,-1.28844,-2.83843,3.90676,-0.644218,-3.4572,3.4572,-3.55271e-15,-3.90676,2.83843,0.644218,-4.14311,2.11102,1.28844,-4.14311,1.34618,1.93265,-3.90676,0.61877,2.57687,-3.4572,6.66134e-16,3.22109,-2.83843,-0.449563,3.86531,-2.11102,-0.685912,4.50952,-1.34618,-0.685912,5.15374,-0.61877,-0.449563,5.79796,-7.77156e-16,3.88578e-16,6.44218,1.66533e-16,-1.38778e-16,-6.44218,0.236349,0.727408,-5.79796,0.236349,1.49225,-5.15374,3.60822e-16,2.21966,-4.50952,-0.449563,2.83843,-3.86531,-1.06833,3.28799,-3.22109,-1.79574,3.52434,-2.57687,-2.56058,3.52434,-1.93265,-3.28799,3.28799,-1.28844,-3.90676,2.83843,-0.644218,-4.35633,2.21966,-3.55271e-15,-4.59267,1.49225,0.644218,-4.59267,0.727408,1.28844,-4.35633,1.44329e-15,1.93265,-3.90676,-0.61877,2.57687,-3.28799,-1.06833,3.22109,-2.56058,-1.30468,3.86531,-1.79574,-1.30468,4.50952,-1.06833,-1.06833,5.15374,-0.449563,-0.61877,5.79796,-9.99201e-16,1.22125e-15,6.44218,1.66533e-16,-1.38778e-16,-6.44218,2.13367e-16,0.764842,-5.79796,-0.236349,1.49225,-5.15374,-0.685912,2.11102,-4.50952,-1.30468,2.56058,-3.86531,-2.03209,2.79693,-3.22109,-2.79693,2.79693,-2.57687,-3.52434,2.56058,-1.93265,-4.14311,2.11102,-1.28844,-4.59267,1.49225,-0.644218,-4.82902,0.764842,-3.55271e-15,-4.82902,1.33227e-15,0.644218,-4.59267,-0.727408,1.28844,-4.14311,-1.34618,1.93265,-3.52434,-1.79574,2.57687,-2.79693,-2.03209,3.22109,-2.03209,-2.03209,3.86531,-1.30468,-1.79574,4.50952,-0.685912,-1.34618,5.15374,-0.236349,-0.727408,5.79796,-5.55112e-16,7.77156e-16,6.44218,1.66533e-16,-1.38778e-16,-6.44218,-0.236349,0.727408,-5.79796,-0.685912,1.34618,-5.15374,-1.30468,1.79574,-4.50952,-2.03209,2.03209,-3.86531,-2.79693,2.03209,-3.22109,-3.52434,1.79574,-2.57687,-4.14311,1.34618,-1.93265,-4.59267,0.727408,-1.28844,-4.82902,6.66134e-16,-0.644218,-4.82902,-0.764842,-3.55271e-15,-4.59267,-1.49225,0.644218,-4.14311,-2.11102,1.28844,-3.52434,-2.56058,1.93265,-2.79693,-2.79693,2.57687,-2.03209,-2.79693,3.22109,-1.30468,-2.56058,3.86531,-0.685912,-2.11102,4.50952,-0.236349,-1.49225,5.15374,-5.55112e-16,-0.764842,5.79796,-5.08278e-16,-2.22045e-16,6.44218,1.66533e-16,-1.38778e-16,-6.44218,-0.449563,0.61877,-5.79796,-1.06833,1.06833,-5.15374,-1.79574,1.30468,-4.50952,-2.56058,1.30468,-3.86531,-3.28799,1.06833,-3.22109,-3.90676,0.61877,-2.57687,-4.35633,5.55112e-16,-1.93265,-4.59267,-0.727408,-1.28844,-4.59267,-1.49225,-0.644218,-4.35633,-2.21966,-3.55271e-15,-3.90676,-2.83843,0.644218,-3.28799,-3.28799,1.28844,-2.56058,-3.52434,1.93265,-1.79574,-3.52434,2.57687,-1.06833,-3.28799,3.22109,-0.449563,-2.83843,3.86531,-9.99201e-16,-2.21966,4.50952,0.236349,-1.49225,5.15374,0.236349,-0.727408,5.79796,-8.04912e-16,3.33067e-16,6.44218,1.66533e-16,-1.38778e-16,-6.44218,-0.61877,0.449563,-5.79796,-1.34618,0.685912,-5.15374,-2.11102,0.685912,-4.50952,-2.83843,0.449563,-3.86531,-3.4572,5.55112e-16,-3.22109,-3.90676,-0.61877,-2.57687,-4.14311,-1.34618,-1.93265,-4.14311,-2.11102,-1.28844,-3.90676,-2.83843,-0.644218,-3.4572,-3.4572,-3.55271e-15,-2.83843,-3.90676,0.644218,-2.11102,-4.14311,1.28844,-1.34618,-4.14311,1.93265,-0.61877,-3.90676,2.57687,-7.77156e-16,-3.4572,3.22109,0.449563,-2.83843,3.86531,0.685912,-2.11102,4.50952,0.685912,-1.34618,5.15374,0.449563,-0.61877,5.79796,-6.66134e-16,2.22045e-16,6.44218,1.66533e-16,-1.38778e-16,-6.44218,-0.727408,0.236349,-5.79796,-1.49225,0.236349,-5.15374,-2.21966,4.44089e-16,-4.50952,-2.83843,-0.449563,-3.86531,-3.28799,-1.06833,-3.22109,-3.52434,-1.79574,-2.57687,-3.52434,-2.56058,-1.93265,-3.28799,-3.28799,-1.28844,-2.83843,-3.90676,-0.644218,-2.21966,-4.35633,-3.55271e-15,-1.49225,-4.59267,0.644218,-0.727408,-4.59267,1.28844,-1.11022e-15,-4.35633,1.93265,0.61877,-3.90676,2.57687,1.06833,-3.28799,3.22109,1.30468,-2.56058,3.86531,1.30468,-1.79574,4.50952,1.06833,-1.06833,5.15374,0.61877,-0.449563,5.79796,-6.66134e-16,6.10623e-16,6.44218,1.66533e-16,-1.38778e-16,-6.44218,-0.764842,-4.51117e-17,-5.79796,-1.49225,-0.236349,-5.15374,-2.11102,-0.685912,-4.50952,-2.56058,-1.30468,-3.86531,-2.79693,-2.03209,-3.22109,-2.79693,-2.79693,-2.57687,-2.56058,-3.52434,-1.93265,-2.11102,-4.14311,-1.28844,-1.49225,-4.59267,-0.644218,-0.764842,-4.82902,-3.55271e-15,-1.11022e-15,-4.82902,0.644218,0.727408,-4.59267,1.28844,1.34618,-4.14311,1.93265,1.79574,-3.52434,2.57687,2.03209,-2.79693,3.22109,2.03209,-2.03209,3.86531,1.79574,-1.30468,4.50952,1.34618,-0.685912,5.15374,0.727408,-0.236349,5.79796,-8.88178e-16,1.30451e-15,6.44218,1.66533e-16,-1.38778e-16,-6.44218,-0.727408,-0.236349,-5.79796,-1.34618,-0.685912,-5.15374,-1.79574,-1.30468,-4.50952,-2.03209,-2.03209,-3.86531,-2.03209,-2.79693,-3.22109,-1.79574,-3.52434,-2.57687,-1.34618,-4.14311,-1.93265,-0.727408,-4.59267,-1.28844,-7.77156e-16,-4.82902,-0.644218,0.764842,-4.82902,-3.55271e-15,1.49225,-4.59267,0.644218,2.11102,-4.14311,1.28844,2.56058,-3.52434,1.93265,2.79693,-2.79693,2.57687,2.79693,-2.03209,3.22109,2.56058,-1.30468,3.86531,2.11102,-0.685912,4.50952,1.49225,-0.236349,5.15374,0.764842,1.30451e-15,5.79796,-4.44089e-16,1.39818e-15,6.44218,1.66533e-16,-1.38778e-16,-6.44218,-0.61877,-0.449563,-5.79796,-1.06833,-1.06833,-5.15374,-1.30468,-1.79574,-4.50952,-1.30468,-2.56058,-3.86531,-1.06833,-3.28799,-3.22109,-0.61877,-3.90676,-2.57687,-6.66134e-16,-4.35633,-1.93265,0.727408,-4.59267,-1.28844,1.49225,-4.59267,-0.644218,2.21966,-4.35633,-3.55271e-15,2.83843,-3.90676,0.644218,3.28799,-3.28799,1.28844,3.52434,-2.56058,1.93265,3.52434,-1.79574,2.57687,3.28799,-1.06833,3.22109,2.83843,-0.449563,3.86531,2.21966,-2.77556e-16,4.50952,1.49225,0.236349,5.15374,0.727408,0.236349,5.79796,-4.44089e-16,3.05311e-16,6.44218,1.66533e-16,-1.38778e-16,-6.44218,-0.449563,-0.61877,-5.79796,-0.685912,-1.34618,-5.15374,-0.685912,-2.11102,-4.50952,-0.449563,-2.83843,-3.86531,-4.44089e-16,-3.4572,-3.22109,0.61877,-3.90676,-2.57687,1.34618,-4.14311,-1.93265,2.11102,-4.14311,-1.28844,2.83843,-3.90676,-0.644218,3.4572,-3.4572,-3.55271e-15,3.90676,-2.83843,0.644218,4.14311,-2.11102,1.28844,4.14311,-1.34618,1.93265,3.90676,-0.61877,2.57687,3.4572,-6.66134e-16,3.22109,2.83843,0.449563,3.86531,2.11102,0.685912,4.50952,1.34618,0.685912,5.15374,0.61877,0.449563,5.79796,-3.33067e-16,1.11022e-16,6.44218,1.66533e-16,-1.38778e-16,-6.44218,-0.236349,-0.727408,-5.79796,-0.236349,-1.49225,-5.15374,-2.77556e-16,-2.21966,-4.50952,0.449563,-2.83843,-3.86531,1.06833,-3.28799,-3.22109,1.79574,-3.52434,-2.57687,2.56058,-3.52434,-1.93265,3.28799,-3.28799,-1.28844,3.90676,-2.83843,-0.644218,4.35633,-2.21966,-3.55271e-15,4.59267,-1.49225,0.644218,4.59267,-0.727408,1.28844,4.35633,-5.55112e-16,1.93265,3.90676,0.61877,2.57687,3.28799,1.06833,3.22109,2.56058,1.30468,3.86531,1.79574,1.30468,4.50952,1.06833,1.06833,5.15374,0.449563,0.61877,5.79796,-6.10623e-16,1.11022e-16,6.44218,1.66533e-16,-1.38778e-16,-6.44218,2.60342e-17,-0.764842,-5.79796,0.236349,-1.49225,-5.15374,0.685912,-2.11102,-4.50952,1.30468,-2.56058,-3.86531,2.03209,-2.79693,-3.22109,2.79693,-2.79693,-2.57687,3.52434,-2.56058,-1.93265,4.14311,-2.11102,-1.28844,4.59267,-1.49225,-0.644218,4.82902,-0.764842,-3.55271e-15,4.82902,-1.11022e-15,0.644218,4.59267,0.727408,1.28844,4.14311,1.34618,1.93265,3.52434,1.79574,2.57687,2.79693,2.03209,3.22109,2.03209,2.03209,3.86531,1.30468,1.79574,4.50952,0.685912,1.34618,5.15374,0.236349,0.727408,5.79796,-1.58207e-15,-2.22045e-16,6.44218,1.66533e-16,-1.38778e-16,-6.44218,0.236349,-0.727408,-5.79796,0.685912,-1.34618,-5.15374,1.30468,-1.79574,-4.50952,2.03209,-2.03209,-3.86531,2.79693,-2.03209,-3.22109,3.52434,-1.79574,-2.57687,4.14311,-1.34618,-1.93265,4.59267,-0.727408,-1.28844,4.82902,-5.55112e-16,-0.644218,4.82902,0.764842,-3.55271e-15,4.59267,1.49225,0.644218,4.14311,2.11102,1.28844,3.52434,2.56058,1.93265,2.79693,2.79693,2.57687,2.03209,2.79693,3.22109,1.30468,2.56058,3.86531,0.685912,2.11102,4.50952,0.236349,1.49225,5.15374,-1.58207e-15,0.764842,5.79796,-1.72257e-15,8.88178e-16,6.44218,1.66533e-16,-1.38778e-16,-6.44218,0.449563,-0.61877,-5.79796,1.06833,-1.06833,-5.15374,1.79574,-1.30468,-4.50952,2.56058,-1.30468,-3.86531,3.28799,-1.06833,-3.22109,3.90676,-0.61877,-2.57687,4.35633,-5.55112e-16,-1.93265,4.59267,0.727408,-1.28844,4.59267,1.49225,-0.644218,4.35633,2.21966,-3.55271e-15,3.90676,2.83843,0.644218,3.28799,3.28799,1.28844,2.56058,3.52434,1.93265,1.79574,3.52434,2.57687,1.06833,3.28799,3.22109,0.449563,2.83843,3.86531,2.77556e-16,2.21966,4.50952,-0.236349,1.49225,5.15374,-0.236349,0.727408,5.79796,-1.66533e-16,5.55112e-16,6.44218,1.66533e-16,-1.38778e-16,-6.44218,0.61877,-0.449563,-5.79796,1.34618,-0.685912,-5.15374,2.11102,-0.685912,-4.50952,2.83843,-0.449563,-3.86531,3.4572,-4.996e-16,-3.22109,3.90676,0.61877,-2.57687,4.14311,1.34618,-1.93265,4.14311,2.11102,-1.28844,3.90676,2.83843,-0.644218,3.4572,3.4572,-3.55271e-15,2.83843,3.90676,0.644218,2.11102,4.14311,1.28844,1.34618,4.14311,1.93265,0.61877,3.90676,2.57687,-3.33067e-16,3.4572,3.22109,-0.449563,2.83843,3.86531,-0.685912,2.11102,4.50952,-0.685912,1.34618,5.15374,-0.449563,0.61877,5.79796,-8.88178e-16,6.66134e-16,6.44218,1.66533e-16,-1.38778e-16,-6.44218,0.727408,-0.236349,-5.79796,1.49225,-0.236349,-5.15374,2.21966,-3.05311e-16,-4.50952,2.83843,0.449563,-3.86531,3.28799,1.06833,-3.22109,3.52434,1.79574,-2.57687,3.52434,2.56058,-1.93265,3.28799,3.28799,-1.28844,2.83843,3.90676,-0.644218,2.21966,4.35633,-3.55271e-15,1.49225,4.59267,0.644218,0.727408,4.59267,1.28844,4.44089e-16,4.35633,1.93265,-0.61877,3.90676,2.57687,-1.06833,3.28799,3.22109,-1.30468,2.56058,3.86531,-1.30468,1.79574,4.50952,-1.06833,1.06833,5.15374,-0.61877,0.449563,5.79796,-4.44089e-16,1.66533e-16,6.44218}, 1260);
fieldValue90.addChild(&Coordinate91);

ProtoInstance88.addChild(&fieldValue90);

fieldValue& fieldValue92 =  fieldValue();
fieldValue92.setName(CString("scale"));
fieldValue92.setValue(CString("0.7"));
ProtoInstance88.addChild(&fieldValue92);

ProtoBody87.addChild(&ProtoInstance88);

ProtoDeclare86.addChild(&ProtoBody87);

Scene7.addChild(&ProtoDeclare86);

Viewpoint& Viewpoint93 =  Viewpoint();
Viewpoint93.setDescription(CString("front"));
Scene7.addChild(&Viewpoint93);

Viewpoint& Viewpoint94 =  Viewpoint();
Viewpoint94.setDEF(CString("RIGHT_1"));
Viewpoint94.setDescription(CString("right_front"));
Viewpoint94.setPosition(new float[]{7,0,7});
Viewpoint94.setOrientation(new float[]{0,1,0,0.785});
Scene7.addChild(&Viewpoint94);

Viewpoint& Viewpoint95 =  Viewpoint();
Viewpoint95.setDEF(CString("RIGHT_2"));
Viewpoint95.setDescription(CString("right"));
Viewpoint95.setPosition(new float[]{10,0,0});
Viewpoint95.setOrientation(new float[]{0,1,0,1.57});
Scene7.addChild(&Viewpoint95);

Viewpoint& Viewpoint96 =  Viewpoint();
Viewpoint96.setDEF(CString("RIGHT"));
Viewpoint96.setDescription(CString("right_back"));
Viewpoint96.setPosition(new float[]{7,0,-7});
Viewpoint96.setOrientation(new float[]{0,1,0,2.356});
Scene7.addChild(&Viewpoint96);

Viewpoint& Viewpoint97 =  Viewpoint();
Viewpoint97.setDescription(CString("back"));
Viewpoint97.setPosition(new float[]{0,0,-10});
Viewpoint97.setOrientation(new float[]{0,1,0,3.1415});
Scene7.addChild(&Viewpoint97);

Viewpoint& Viewpoint98 =  Viewpoint();
Viewpoint98.setDEF(CString("LEFT"));
Viewpoint98.setDescription(CString("left"));
Viewpoint98.setPosition(new float[]{-10,0,0});
Viewpoint98.setOrientation(new float[]{0,-1,0,1.57});
Scene7.addChild(&Viewpoint98);

Viewpoint& Viewpoint99 =  Viewpoint();
Viewpoint99.setDEF(CString("BOTTOM"));
Viewpoint99.setDescription(CString("bottom"));
Viewpoint99.setPosition(new float[]{0,-10,0});
Viewpoint99.setOrientation(new float[]{1,0,0,1.57});
Scene7.addChild(&Viewpoint99);

NavigationInfo& NavigationInfo100 =  NavigationInfo();
NavigationInfo100.setType(new CString[]{CString("EXAMINE")}, 1);
Scene7.addChild(&NavigationInfo100);

Transform& Transform101 =  Transform();
Transform101.setDEF(CString("SHAPE"));
Shape& Shape102 =  Shape();
Shape102.setDEF(CString("PART"));
Appearance& Appearance103 =  Appearance();
Appearance103.setDEF(CString("APPEARANCE"));
Material& Material104 =  Material();
Material104.setDiffuseColor(new float[]{1,1,1});
Material104.setSpecularColor(new float[]{1,1,0});
Appearance103.addChild(&Material104);

ImageTexture& ImageTexture105 =  ImageTexture();
ImageTexture105.setUrl(new CString[]{CString("http://bulatov.org/vrml/siggraph99/texture11.jpg")}, 1);
Appearance103.addChild(&ImageTexture105);

TextureTransform& TextureTransform106 =  TextureTransform();
TextureTransform106.setDEF(CString("TTRANS"));
TextureTransform106.setTranslation(new float[]{0,-24.9558});
TextureTransform106.setRotation(1.57);
Appearance103.setTextureTransform(TextureTransform106);

Shape102.addChild(&Appearance103);

ProtoInstance& ProtoInstance107 =  ProtoInstance();
ProtoInstance107.setName(CString("Shape99"));
ProtoInstance107.setDEF(CString("SHAPE99"));
Shape102.setGeometry(&ProtoInstance107);

Transform101.addChild(&Shape102);

Transform& Transform108 =  Transform();
Transform108.setRotation(new float[]{0,0,1,3.1415});
Shape& Shape109 =  Shape();
Shape109.setUSE(CString("PART"));
Transform108.addChild(&Shape109);

Transform101.addChild(&Transform108);

Viewpoint& Viewpoint110 =  Viewpoint();
Viewpoint110.setDEF(CString("MOVING_VIEW"));
Viewpoint110.setDescription(CString("moving"));
Transform101.addChild(&Viewpoint110);

Scene7.addChild(&Transform101);

Transform& Transform111 =  Transform();
Transform111.setRotation(new float[]{1,0,0,1.5708});
Shape& Shape112 =  Shape();
Appearance& Appearance113 =  Appearance();
Appearance113.setUSE(CString("APPEARANCE"));
Shape112.addChild(&Appearance113);

Transform111.addChild(&Shape112);

Scene7.addChild(&Transform111);

ProximitySensor& ProximitySensor114 =  ProximitySensor();
ProximitySensor114.setDEF(CString("PROXI"));
ProximitySensor114.setSize(new float[]{1000,1000,1000});
Scene7.addChild(&ProximitySensor114);

Script& Script115 =  Script();
Script115.setDEF(CString("PROXI_SCRIPT"));
field& field116 =  field();
field116.setName(CString("set_orientation"));
field116.setAccessType(CString("inputOnly"));
field116.setType(CString("SFRotation"));
Script115.addChild(&field116);

field& field117 =  field();
field117.setName(CString("set_position"));
field117.setAccessType(CString("inputOnly"));
field117.setType(CString("SFVec3f"));
Script115.addChild(&field117);


Script115.setSourceCode(CString("javascript:")+
_T("    function set_position(v){")+
_T("	//trace('pos: ' + v);")+
_T("    }")+
_T("    function set_orientation(v){")+
_T("	//trace('orient: '+ v);")+
_T("    }"));
Scene7.addChild(&Script115);

TimeSensor& TimeSensor118 =  TimeSensor();
TimeSensor118.setDEF(CString("TIMER_1"));
TimeSensor118.setLoop(True);
Scene7.addChild(&TimeSensor118);

Script& Script119 =  Script();
Script119.setDEF(CString("VIEWPOINT_SCRIPT"));
Script119.setDirectOutput(True);
field& field120 =  field();
field120.setName(CString("set_time"));
field120.setAccessType(CString("inputOnly"));
field120.setType(CString("SFTime"));
Script119.addChild(&field120);

field& field121 =  field();
field121.setName(CString("set_bound"));
field121.setAccessType(CString("inputOnly"));
field121.setType(CString("SFBool"));
Script119.addChild(&field121);

field& field122 =  field();
field122.setName(CString("viewpoint"));
field122.setAccessType(CString("initializeOnly"));
field122.setType(CString("SFNode"));
Viewpoint& Viewpoint123 =  Viewpoint();
Viewpoint123.setUSE(CString("MOVING_VIEW"));
field122.addChild(&Viewpoint123);

Script119.addChild(&field122);

field& field124 =  field();
field124.setName(CString("t0"));
field124.setAccessType(CString("initializeOnly"));
field124.setType(CString("SFTime"));
Script119.addChild(&field124);

field& field125 =  field();
field125.setName(CString("position"));
field125.setAccessType(CString("initializeOnly"));
field125.setType(CString("SFVec3f"));
field125.setValue(CString("0 0 10"));
Script119.addChild(&field125);

field& field126 =  field();
field126.setName(CString("orientation"));
field126.setAccessType(CString("initializeOnly"));
field126.setType(CString("SFRotation"));
Script119.addChild(&field126);

field& field127 =  field();
field127.setName(CString("dir0"));
field127.setAccessType(CString("initializeOnly"));
field127.setType(CString("SFVec3f"));
field127.setValue(CString("0 0 -1"));
Script119.addChild(&field127);

field& field128 =  field();
field128.setName(CString("up0"));
field128.setAccessType(CString("initializeOnly"));
field128.setType(CString("SFVec3f"));
field128.setValue(CString("0 1 0"));
Script119.addChild(&field128);

field& field129 =  field();
field129.setName(CString("direction"));
field129.setAccessType(CString("initializeOnly"));
field129.setType(CString("SFVec3f"));
field129.setValue(CString("0 0 -1"));
Script119.addChild(&field129);

field& field130 =  field();
field130.setName(CString("look_at"));
field130.setAccessType(CString("initializeOnly"));
field130.setType(CString("SFVec3f"));
Script119.addChild(&field130);

field& field131 =  field();
field131.setName(CString("up"));
field131.setAccessType(CString("initializeOnly"));
field131.setType(CString("SFVec3f"));
Script119.addChild(&field131);

field& field132 =  field();
field132.setName(CString("isActive"));
field132.setAccessType(CString("initializeOnly"));
field132.setType(CString("SFBool"));
Script119.addChild(&field132);

field& field133 =  field();
field133.setName(CString("isCosmo"));
field133.setAccessType(CString("initializeOnly"));
field133.setType(CString("SFBool"));
field133.setValue(CString("true"));
Script119.addChild(&field133);


Script119.setSourceCode(CString("javascript:")+
_T("  function set_time(val,time){")+
_T("      if(t0 == 0){")+
_T("	  t0 = time;")+
_T("      }")+
_T("    dt = val - t0;")+
_T("    delay = 0.1; height = 0.3;")+
_T("    look_at = getPosition(dt);")+
_T("    position = getPosition(dt-delay);")+
_T("    position.z += height;")+
_T("    up.x = 0; up.y = 0; up.z = 1;")+
_T("    viewpoint.set_position = position;")+
_T("    var rot = getOrientation(position, look_at, up);")+
_T("    viewpoint.set_orientation = rot;    ")+
_T("  }")+
_T("  function set_bound(val, time){")+
_T("    trace('set_bound(' + val + ') ');")+
_T("    isActive = val;")+
_T("    t0 = time;")+
_T("  }"));
Scene7.addChild(&Script119);

Script& Script134 =  Script();
Script134.setDEF(CString("MAIN"));
Script134.setDirectOutput(True);
field& field135 =  field();
field135.setName(CString("set_time"));
field135.setAccessType(CString("inputOnly"));
field135.setType(CString("SFTime"));
Script134.addChild(&field135);

field& field136 =  field();
field136.setName(CString("ttrans"));
field136.setAccessType(CString("initializeOnly"));
field136.setType(CString("SFNode"));
TextureTransform& TextureTransform137 =  TextureTransform();
TextureTransform137.setUSE(CString("TTRANS"));
field136.addChild(TextureTransform137);

Script134.addChild(&field136);

field& field138 =  field();
field138.setName(CString("t0"));
field138.setAccessType(CString("initializeOnly"));
field138.setType(CString("SFTime"));
field138.setValue(CString("1444306820.66995"));
Script134.addChild(&field138);

field& field139 =  field();
field139.setName(CString("shape"));
field139.setAccessType(CString("initializeOnly"));
field139.setType(CString("SFNode"));
Transform& Transform140 =  Transform();
Transform140.setUSE(CString("SHAPE"));
field139.addChild(&Transform140);

Script134.addChild(&field139);

field& field141 =  field();
field141.setName(CString("rotation"));
field141.setAccessType(CString("initializeOnly"));
field141.setType(CString("SFRotation"));
Script134.addChild(&field141);


Script134.setSourceCode(CString("javascript:")+
_T("  function set_time(val){")+
_T("    if(t0 == 0){")+
_T("      t0 = val;")+
_T("    }")+
_T("    dt = val - t0;")+
_T("    var fi = -dt*0.2-0.2;")+
_T("    ttrans.set_translation = new SFVec2f(0,fi);")+
_T("    //rotation.angle = -Math.PI*fi;")+
_T("    //shape.set_rotation = rotation;")+
_T("  }"));
Scene7.addChild(&Script134);

Transform& Transform142 =  Transform();
Transform142.setDEF(CString("TR1"));
Transform142.setRotation(new float[]{0,1,0,0.395706});
Transform& Transform143 =  Transform();
Transform143.setDEF(CString("TR2"));
Transform143.setTranslation(new float[]{0,0,10});
Transform143.setRotation(new float[]{1,0,0,5.3245});
Transform143.setScale(new float[]{6,6,5});
Shape& Shape144 =  Shape();
Appearance& Appearance145 =  Appearance();
Appearance145.setDEF(CString("APP"));
Material& Material146 =  Material();
Material146.setDiffuseColor(new float[]{0.3,0.5,0.9});
Material146.setSpecularColor(new float[]{0.7,0.7,0.3});
Appearance145.addChild(&Material146);

Shape144.addChild(&Appearance145);

ProtoInstance& ProtoInstance147 =  ProtoInstance();
ProtoInstance147.setName(CString("IFS"));
Shape144.setGeometry(&ProtoInstance147);

Transform143.addChild(&Shape144);

Transform142.addChild(&Transform143);

Scene7.addChild(&Transform142);

TimeSensor& TimeSensor148 =  TimeSensor();
TimeSensor148.setDEF(CString("TIMER_R1"));
TimeSensor148.setCycleInterval(60);
TimeSensor148.setLoop(True);
Scene7.addChild(&TimeSensor148);

TimeSensor& TimeSensor149 =  TimeSensor();
TimeSensor149.setDEF(CString("TIMER_R2"));
TimeSensor149.setCycleInterval(67);
TimeSensor149.setLoop(True);
Scene7.addChild(&TimeSensor149);

OrientationInterpolator& OrientationInterpolator150 =  OrientationInterpolator();
OrientationInterpolator150.setDEF(CString("BACKGROUND_INTERP1"));
OrientationInterpolator150.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator150.setKeyValue(new float[]{0,0,1,0,0,1,0,3.1415,0,0,1,0}, 12);
Scene7.addChild(&OrientationInterpolator150);

OrientationInterpolator& OrientationInterpolator151 =  OrientationInterpolator();
OrientationInterpolator151.setDEF(CString("BACKGROUND_INTERP2"));
OrientationInterpolator151.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator151.setKeyValue(new float[]{0,0,1,0,1,0,0,3.1415,0,0,1,0}, 12);
Scene7.addChild(&OrientationInterpolator151);

ROUTE& ROUTE152 =  ROUTE();
ROUTE152.setFromNode(CString("PROXI"));
ROUTE152.setFromField(CString("position_changed"));
ROUTE152.setToNode(CString("PROXI_SCRIPT"));
ROUTE152.setToField(CString("set_position"));
Scene7.addChild(&ROUTE152);

ROUTE& ROUTE153 =  ROUTE();
ROUTE153.setFromNode(CString("PROXI"));
ROUTE153.setFromField(CString("orientation_changed"));
ROUTE153.setToNode(CString("PROXI_SCRIPT"));
ROUTE153.setToField(CString("set_orientation"));
Scene7.addChild(&ROUTE153);

ROUTE& ROUTE154 =  ROUTE();
ROUTE154.setFromNode(CString("SHAPE99"));
ROUTE154.setFromField(CString("position_changed"));
ROUTE154.setToNode(CString("MOVING_VIEW"));
ROUTE154.setToField(CString("set_position"));
Scene7.addChild(&ROUTE154);

ROUTE& ROUTE155 =  ROUTE();
ROUTE155.setFromNode(CString("SHAPE99"));
ROUTE155.setFromField(CString("orientation_changed"));
ROUTE155.setToNode(CString("MOVING_VIEW"));
ROUTE155.setToField(CString("set_orientation"));
Scene7.addChild(&ROUTE155);

ROUTE& ROUTE156 =  ROUTE();
ROUTE156.setFromNode(CString("TIMER_1"));
ROUTE156.setFromField(CString("time"));
ROUTE156.setToNode(CString("MAIN"));
ROUTE156.setToField(CString("set_time"));
Scene7.addChild(&ROUTE156);

ROUTE& ROUTE157 =  ROUTE();
ROUTE157.setFromNode(CString("TIMER_R1"));
ROUTE157.setFromField(CString("fraction_changed"));
ROUTE157.setToNode(CString("BACKGROUND_INTERP1"));
ROUTE157.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE157);

ROUTE& ROUTE158 =  ROUTE();
ROUTE158.setFromNode(CString("TIMER_R2"));
ROUTE158.setFromField(CString("fraction_changed"));
ROUTE158.setToNode(CString("BACKGROUND_INTERP2"));
ROUTE158.setToField(CString("set_fraction"));
Scene7.addChild(&ROUTE158);

ROUTE& ROUTE159 =  ROUTE();
ROUTE159.setFromNode(CString("BACKGROUND_INTERP1"));
ROUTE159.setFromField(CString("value_changed"));
ROUTE159.setToNode(CString("TR1"));
ROUTE159.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE159);

ROUTE& ROUTE160 =  ROUTE();
ROUTE160.setFromNode(CString("BACKGROUND_INTERP2"));
ROUTE160.setFromField(CString("value_changed"));
ROUTE160.setToNode(CString("TR2"));
ROUTE160.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE160);

X3D0.setScene(&Scene7);

}
