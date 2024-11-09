#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Full";
X3D0.version = "3.3";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "comment";
meta2.content = "World of Titania";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "created";
meta3.content = "Thu, 08 Oct 2015 12:22:24 GMT";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Holger Seelig";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "generator";
meta5.content = "Titania V1.1.1, http://titania.create3000.de";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "modified";
meta6.content = "Thu, 08 Oct 2015 12:22:24 GMT";
head1.meta[4] = meta6;

head = head1;

ProtoDeclare ProtoDeclare8 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Shape99" ><ProtoInterface><field name="orientation_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="position_changed" accessType="outputOnly" type="SFVec3f"></field>
</ProtoInterface>
<ProtoBody><Extrusion DEF="EXT" creaseAngle="1" crossSection="0.1 0.1 0.1 -0.1 -0.1 -0.1 -0.1 0.1 0.1 0.1"></Extrusion>
<TimeSensor DEF="TIMER" loop="true"></TimeSensor>
<CoordinateInterpolator DEF="INTERP" key="0 0.1 0.2 0.3 0.4 0.5 0.6 0.7 0.8 0.9 1" keyValue="0 0 0 0.1 0.1 0.1 0.2 0.2 0.2 0.3 0.3 0.3 0.4 0.4 0.4 0.5 0.5 0.5 0.6 0.6 0.6 0.7 0.7 0.7 0.8 0.8 0.8 0.9 0.9 0.9 1 1 1"></CoordinateInterpolator>
<Script DEF="SHAPE_SCRIPT" directOutput="true"><field name="orientation_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="position_changed" accessType="outputOnly" type="SFVec3f"></field>
<field name="set_time" accessType="inputOnly" type="SFTime"></field>
<field name="set_spine" accessType="inputOnly" type="MFVec3f"></field>
<field name="ext" accessType="initializeOnly" type="SFNode"><Extrusion USE="EXT"></Extrusion>
</field>
<field name="interp" accessType="initializeOnly" type="SFNode"><CoordinateInterpolator USE="INTERP"></CoordinateInterpolator>
</field>
<field name="index" accessType="initializeOnly" type="MFInt32"></field>
<field name="coord" accessType="initializeOnly" type="MFVec3f"></field>
<field name="coord_a" accessType="initializeOnly" type="MFVec3f"></field>
<field name="scale" accessType="initializeOnly" type="MFVec2f"></field>
<field name="coeff" accessType="initializeOnly" type="MFVec3f" value="1 1 0 -3 0.74326 1.11184 5 -0.12904 -0.1692 -7 -0.8068 -0.6271 -11 -0.28189 -0.17907 -15 -0.06295 0.04387"></field>
<field name="N" accessType="initializeOnly" type="SFInt32" value="128"></field>
<field name="n" accessType="initializeOnly" type="SFInt32" value="4"></field>
<field name="r" accessType="initializeOnly" type="SFFloat" value="0.3"></field>
<field name="cs" accessType="initializeOnly" type="MFVec2f"></field>
<field name="delay" accessType="initializeOnly" type="SFFloat"></field>
<field name="t0" accessType="initializeOnly" type="SFTime"></field>
<field name="isCosmo" accessType="initializeOnly" type="SFBool" value="true"></field>
<field name="position" accessType="initializeOnly" type="SFVec3f" value="0 0 10"></field>
<field name="orientation" accessType="initializeOnly" type="SFRotation"></field>
<field name="dir0" accessType="initializeOnly" type="SFVec3f" value="0 0 -1"></field>
<field name="up0" accessType="initializeOnly" type="SFVec3f" value="0 1 0"></field>
<field name="up" accessType="initializeOnly" type="SFVec3f" value="0 0 1"></field>
<field name="look_at" accessType="initializeOnly" type="SFVec3f"></field>
<field name="y0" accessType="initializeOnly" type="SFFloat"></field>
<field name="z0" accessType="initializeOnly" type="SFFloat"></field>
<field name="variable" accessType="initializeOnly" type="SFInt32" value="3"></field>
<field name="Nkeys" accessType="initializeOnly" type="SFInt32" value="17"></field>
<IS><connect nodeField="orientation_changed" protoField="orientation_changed"></connect>
<connect nodeField="position_changed" protoField="position_changed"></connect>
</IS>
<![CDATA[javascript:

      // makes camera orientation from 
      // camera position, look_at point and up-vector

      function getOrientation(pos, look, up){
	  var dir = look.subtract(pos).normalize();
	  var rot0 = new SFRotation(dir0,dir);
	  var up1 = rot0.multVec(up0);
	  var axis = dir.normalize();
	  var up_n = up.subtract(dir.multiply(dir.dot(up)));
	  var rot1 = new SFRotation(up1,up_n);
	  var rot2;  
	  // disagreement between browsers
	  if(isCosmo) { 
	      rot2 = rot0.multiply(rot1); // Cosmo
	  } else {  // WorldView ?
	      rot2 = rot1.multiply(rot0);  // WorldView
	  }
	  return rot2;
      }

       function makeVector1(t, c){
	   ro = 2;
	   c.x = ro*Math.cos(t);
	   c.y = ro*Math.sin(t);
	   c.z = 0;
       }

        function makeVector(t, c){
          var i;
	  c.x = c.y = c.z = 0;
          for(i=0; i < coeff.length; i++){
	      cosfi = Math.cos(coeff[i][0]*t);
	      sinfi = Math.sin(coeff[i][0]*t);
	      c.x += coeff[i][1]*cosfi-coeff[i][2]*sinfi;
	      c.y += coeff[i][2]*cosfi+coeff[i][1]*sinfi;
          }
	  c.z = -Math.sin(2*t+delay);
        }

        function makeVector2(t, c){
          var i;
	  c.x = c.y = c.z = 0;
          for(i=0; i < coeff.length; i++){
	      if(i != variable){
		  cosfi = Math.cos(coeff[i][0]*t);
		  sinfi = Math.sin(coeff[i][0]*t);
		  c.x += coeff[i][1]*cosfi-coeff[i][2]*sinfi;
		  c.y += coeff[i][2]*cosfi+coeff[i][1]*sinfi;
	      }
          }
	  c.z = -Math.sin(2*t+delay);
        }

        function initialize(time){

	    if(Browser.getName().indexOf("Cosmo") != -1){
		isCosmo = true;
	    } else {
		isCosmo = false;
	    }
          y0 = coeff[variable].y;
          z0 = coeff[variable].z;

          index = new MFInt32();
          coord = new MFVec3f();
          coord_a = new MFVec3f();
          scale = new MFVec2f();
          var i;

          for(i = 0; i <=N/2; i++){

            t = i/N*Math.PI*2-0.2;
            coord[i] = new SFVec3f(0,0,0);
            makeVector2(t,coord[i]);
	    var s = (Math.cos(4*t+4)+1.5)/2;
	    scale[i] = new SFVec2f(s,s);
          }
	  
	  var keys = new MFFloat();
	  
          for( j = 0; j < Nkeys; j++){

	      dt = j*Math.PI*2/(Nkeys-1);
	      keys[j] = j/(Nkeys-1);
	      cosfi = Math.cos(dt);
	      sinfi = Math.sin(dt);
	      
	      coeff[variable].y = y0*cosfi + z0*sinfi;
	      coeff[variable].z = -y0*sinfi + z0*cosfi;

	      cv2 = coeff[variable][2];
	      cv1 = coeff[variable][1];
	      cv0 = coeff[variable][0];
	      var offset = j*(N/2+1);

	      for(i = 0; i <= N/2; i++){
		  t = i/N*Math.PI*2-0.2;
		  
		  cosfic = Math.cos(cv0*t);
		  sinfic = Math.sin(cv0*t);
		  coord_a[i+offset] = new SFVec3f(coord[i].x + cv1*cosfic-cv2*sinfic,
		                                coord[i].y + cv2*cosfic+cv1*sinfic,
		                                -Math.sin(2*t+dt));
	      }            
	  }
	  interp.set_key = keys;
	  interp.set_keyValue = coord_a;

          ext.set_spine = coord;
          ext.set_scale = scale;
          cs = new MFVec2f();
          for(i =0; i <= n; i++){
            fi = i*2*Math.PI/n+0.3;
            cs[i] = new SFVec2f(r*Math.cos(fi), -r*Math.sin(fi));
          }
          ext.set_crossSection = cs;           
	  trace('initialize');
        }

       function init(){
          for(i = 0; i <=N; i++){
            t = i/N*Math.PI*2;
            makeVector(t,coord[i]);
          }        
          ext.set_spine = coord;
       }

       function set_time(val){
	   if(t0 == 0){
	       t0 = val;
	   }
	   dt = val - t0;
	   /*
	   var fi = Math.PI*2*dt*0.005;
	   var delta_fi = 0.1;
	   var height = (Math.cos(4*fi+4)+1.5)/2+0.1;

	   makeVector(fi + delta_fi,look_at);
	   makeVector(fi,position);
	   position.z += height;
	   look_at.z += height-0.2;

	   position_changed = position;
	   orientation_changed = getOrientation(position, look_at, up); 
	   */
           //delay = 2*Math.PI*dt*0.05;
           // delay = 2*Math.PI*dt*0.025; // for 0
           delay = dt*0.1; // for 1
	   interp.set_fraction = delay - Math.floor(delay);
       }

       function set_spine(value){
	   //trace(value[0]);
       }]]></Script>
<ROUTE fromNode="TIMER" fromField="time" toNode="SHAPE_SCRIPT" toField="set_time"></ROUTE>
<ROUTE fromNode="INTERP" fromField="value_changed" toNode="EXT" toField="set_spine"></ROUTE>
<ROUTE fromNode="INTERP" fromField="value_changed" toNode="SHAPE_SCRIPT" toField="set_spine"></ROUTE>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare8.name = "Shape99";
ProtoInterface ProtoInterface9 = createNode("ProtoInterface");
field field10 = createNode("field");
field10.name = "orientation_changed";
field10.accessType = "outputOnly";
field10.type = "SFRotation";
ProtoInterface9.field = new MFNode();

ProtoInterface9.field[0] = field10;

field field11 = createNode("field");
field11.name = "position_changed";
field11.accessType = "outputOnly";
field11.type = "SFVec3f";
ProtoInterface9.field[1] = field11;

ProtoDeclare8.protoInterface = ProtoInterface9;

ProtoBody ProtoBody12 = createNode("ProtoBody");
Extrusion Extrusion13 = createNode("Extrusion");
Extrusion13.DEF = "EXT";
Extrusion13.creaseAngle = 1;
Extrusion13.crossSection = new MFVec2f(new float[0.1,0.1,0.1,-0.1,-0.1,-0.1,-0.1,0.1,0.1,0.1]);
ProtoBody12.children = new MFNode();

ProtoBody12.children[0] = Extrusion13;

TimeSensor TimeSensor14 = createNode("TimeSensor");
TimeSensor14.DEF = "TIMER";
TimeSensor14.loop = True;
ProtoBody12.children[1] = TimeSensor14;

CoordinateInterpolator CoordinateInterpolator15 = createNode("CoordinateInterpolator");
CoordinateInterpolator15.DEF = "INTERP";
CoordinateInterpolator15.key = new MFFloat(new float[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]);
CoordinateInterpolator15.keyValue = new MFVec3f(new float[0,0,0,0.1,0.1,0.1,0.2,0.2,0.2,0.3,0.3,0.3,0.4,0.4,0.4,0.5,0.5,0.5,0.6,0.6,0.6,0.7,0.7,0.7,0.8,0.8,0.8,0.9,0.9,0.9,1,1,1]);
ProtoBody12.children[2] = CoordinateInterpolator15;

Script Script16 = createNode("Script");
Script16.DEF = "SHAPE_SCRIPT";
Script16.directOutput = True;
field field17 = createNode("field");
field17.name = "orientation_changed";
field17.accessType = "outputOnly";
field17.type = "SFRotation";
Script16.field = new MFNode();

Script16.field[0] = field17;

field field18 = createNode("field");
field18.name = "position_changed";
field18.accessType = "outputOnly";
field18.type = "SFVec3f";
Script16.field[1] = field18;

field field19 = createNode("field");
field19.name = "set_time";
field19.accessType = "inputOnly";
field19.type = "SFTime";
Script16.field[2] = field19;

field field20 = createNode("field");
field20.name = "set_spine";
field20.accessType = "inputOnly";
field20.type = "MFVec3f";
Script16.field[3] = field20;

field field21 = createNode("field");
field21.name = "ext";
field21.accessType = "initializeOnly";
field21.type = "SFNode";
Extrusion Extrusion22 = createNode("Extrusion");
Extrusion22.USE = "EXT";
field21.children = new MFNode();

field21.children[0] = Extrusion22;

Script16.field[4] = field21;

field field23 = createNode("field");
field23.name = "interp";
field23.accessType = "initializeOnly";
field23.type = "SFNode";
CoordinateInterpolator CoordinateInterpolator24 = createNode("CoordinateInterpolator");
CoordinateInterpolator24.USE = "INTERP";
field23.children = new MFNode();

field23.children[0] = CoordinateInterpolator24;

Script16.field[5] = field23;

field field25 = createNode("field");
field25.name = "index";
field25.accessType = "initializeOnly";
field25.type = "MFInt32";
Script16.field[6] = field25;

field field26 = createNode("field");
field26.name = "coord";
field26.accessType = "initializeOnly";
field26.type = "MFVec3f";
Script16.field[7] = field26;

field field27 = createNode("field");
field27.name = "coord_a";
field27.accessType = "initializeOnly";
field27.type = "MFVec3f";
Script16.field[8] = field27;

field field28 = createNode("field");
field28.name = "scale";
field28.accessType = "initializeOnly";
field28.type = "MFVec2f";
Script16.field[9] = field28;

field field29 = createNode("field");
field29.name = "coeff";
field29.accessType = "initializeOnly";
field29.type = "MFVec3f";
field29.value = "1 1 0 -3 0.74326 1.11184 5 -0.12904 -0.1692 -7 -0.8068 -0.6271 -11 -0.28189 -0.17907 -15 -0.06295 0.04387";
Script16.field[10] = field29;

field field30 = createNode("field");
field30.name = "N";
field30.accessType = "initializeOnly";
field30.type = "SFInt32";
field30.value = "128";
Script16.field[11] = field30;

field field31 = createNode("field");
field31.name = "n";
field31.accessType = "initializeOnly";
field31.type = "SFInt32";
field31.value = "4";
Script16.field[12] = field31;

field field32 = createNode("field");
field32.name = "r";
field32.accessType = "initializeOnly";
field32.type = "SFFloat";
field32.value = "0.3";
Script16.field[13] = field32;

field field33 = createNode("field");
field33.name = "cs";
field33.accessType = "initializeOnly";
field33.type = "MFVec2f";
Script16.field[14] = field33;

field field34 = createNode("field");
field34.name = "delay";
field34.accessType = "initializeOnly";
field34.type = "SFFloat";
Script16.field[15] = field34;

field field35 = createNode("field");
field35.name = "t0";
field35.accessType = "initializeOnly";
field35.type = "SFTime";
Script16.field[16] = field35;

field field36 = createNode("field");
field36.name = "isCosmo";
field36.accessType = "initializeOnly";
field36.type = "SFBool";
field36.value = "true";
Script16.field[17] = field36;

field field37 = createNode("field");
field37.name = "position";
field37.accessType = "initializeOnly";
field37.type = "SFVec3f";
field37.value = "0 0 10";
Script16.field[18] = field37;

field field38 = createNode("field");
field38.name = "orientation";
field38.accessType = "initializeOnly";
field38.type = "SFRotation";
Script16.field[19] = field38;

field field39 = createNode("field");
field39.name = "dir0";
field39.accessType = "initializeOnly";
field39.type = "SFVec3f";
field39.value = "0 0 -1";
Script16.field[20] = field39;

field field40 = createNode("field");
field40.name = "up0";
field40.accessType = "initializeOnly";
field40.type = "SFVec3f";
field40.value = "0 1 0";
Script16.field[21] = field40;

field field41 = createNode("field");
field41.name = "up";
field41.accessType = "initializeOnly";
field41.type = "SFVec3f";
field41.value = "0 0 1";
Script16.field[22] = field41;

field field42 = createNode("field");
field42.name = "look_at";
field42.accessType = "initializeOnly";
field42.type = "SFVec3f";
Script16.field[23] = field42;

field field43 = createNode("field");
field43.name = "y0";
field43.accessType = "initializeOnly";
field43.type = "SFFloat";
Script16.field[24] = field43;

field field44 = createNode("field");
field44.name = "z0";
field44.accessType = "initializeOnly";
field44.type = "SFFloat";
Script16.field[25] = field44;

field field45 = createNode("field");
field45.name = "variable";
field45.accessType = "initializeOnly";
field45.type = "SFInt32";
field45.value = "3";
Script16.field[26] = field45;

field field46 = createNode("field");
field46.name = "Nkeys";
field46.accessType = "initializeOnly";
field46.type = "SFInt32";
field46.value = "17";
Script16.field[27] = field46;

IS IS47 = createNode("IS");
connect connect48 = createNode("connect");
connect48.nodeField = "orientation_changed";
connect48.protoField = "orientation_changed";
IS47.connect = new MFNode();

IS47.connect[0] = connect48;

connect connect49 = createNode("connect");
connect49.nodeField = "position_changed";
connect49.protoField = "position_changed";
IS47.connect[1] = connect49;

Script16.iS = IS47;


Script16.setSourceCode(`javascript:\n"+
"\n"+
"      // makes camera orientation from \n"+
"      // camera position, look_at point and up-vector\n"+
"\n"+
"      function getOrientation(pos, look, up){\n"+
"	  var dir = look.subtract(pos).normalize();\n"+
"	  var rot0 = new SFRotation(dir0,dir);\n"+
"	  var up1 = rot0.multVec(up0);\n"+
"	  var axis = dir.normalize();\n"+
"	  var up_n = up.subtract(dir.multiply(dir.dot(up)));\n"+
"	  var rot1 = new SFRotation(up1,up_n);\n"+
"	  var rot2;  \n"+
"	  // disagreement between browsers\n"+
"	  if(isCosmo) { \n"+
"	      rot2 = rot0.multiply(rot1); // Cosmo\n"+
"	  } else {  // WorldView ?\n"+
"	      rot2 = rot1.multiply(rot0);  // WorldView\n"+
"	  }\n"+
"	  return rot2;\n"+
"      }\n"+
"\n"+
"       function makeVector1(t, c){\n"+
"	   ro = 2;\n"+
"	   c.x = ro*Math.cos(t);\n"+
"	   c.y = ro*Math.sin(t);\n"+
"	   c.z = 0;\n"+
"       }\n"+
"\n"+
"        function makeVector(t, c){\n"+
"          var i;\n"+
"	  c.x = c.y = c.z = 0;\n"+
"          for(i=0; i < coeff.length; i++){\n"+
"	      cosfi = Math.cos(coeff[i][0]*t);\n"+
"	      sinfi = Math.sin(coeff[i][0]*t);\n"+
"	      c.x += coeff[i][1]*cosfi-coeff[i][2]*sinfi;\n"+
"	      c.y += coeff[i][2]*cosfi+coeff[i][1]*sinfi;\n"+
"          }\n"+
"	  c.z = -Math.sin(2*t+delay);\n"+
"        }\n"+
"\n"+
"        function makeVector2(t, c){\n"+
"          var i;\n"+
"	  c.x = c.y = c.z = 0;\n"+
"          for(i=0; i < coeff.length; i++){\n"+
"	      if(i != variable){\n"+
"		  cosfi = Math.cos(coeff[i][0]*t);\n"+
"		  sinfi = Math.sin(coeff[i][0]*t);\n"+
"		  c.x += coeff[i][1]*cosfi-coeff[i][2]*sinfi;\n"+
"		  c.y += coeff[i][2]*cosfi+coeff[i][1]*sinfi;\n"+
"	      }\n"+
"          }\n"+
"	  c.z = -Math.sin(2*t+delay);\n"+
"        }\n"+
"\n"+
"        function initialize(time){\n"+
"\n"+
"	    if(Browser.getName().indexOf(\"Cosmo\") != -1){\n"+
"		isCosmo = true;\n"+
"	    } else {\n"+
"		isCosmo = false;\n"+
"	    }\n"+
"          y0 = coeff[variable].y;\n"+
"          z0 = coeff[variable].z;\n"+
"\n"+
"          index = new MFInt32();\n"+
"          coord = new MFVec3f();\n"+
"          coord_a = new MFVec3f();\n"+
"          scale = new MFVec2f();\n"+
"          var i;\n"+
"\n"+
"          for(i = 0; i <=N/2; i++){\n"+
"\n"+
"            t = i/N*Math.PI*2-0.2;\n"+
"            coord[i] = new SFVec3f(0,0,0);\n"+
"            makeVector2(t,coord[i]);\n"+
"	    var s = (Math.cos(4*t+4)+1.5)/2;\n"+
"	    scale[i] = new SFVec2f(s,s);\n"+
"          }\n"+
"	  \n"+
"	  var keys = new MFFloat();\n"+
"	  \n"+
"          for( j = 0; j < Nkeys; j++){\n"+
"\n"+
"	      dt = j*Math.PI*2/(Nkeys-1);\n"+
"	      keys[j] = j/(Nkeys-1);\n"+
"	      cosfi = Math.cos(dt);\n"+
"	      sinfi = Math.sin(dt);\n"+
"	      \n"+
"	      coeff[variable].y = y0*cosfi + z0*sinfi;\n"+
"	      coeff[variable].z = -y0*sinfi + z0*cosfi;\n"+
"\n"+
"	      cv2 = coeff[variable][2];\n"+
"	      cv1 = coeff[variable][1];\n"+
"	      cv0 = coeff[variable][0];\n"+
"	      var offset = j*(N/2+1);\n"+
"\n"+
"	      for(i = 0; i <= N/2; i++){\n"+
"		  t = i/N*Math.PI*2-0.2;\n"+
"		  \n"+
"		  cosfic = Math.cos(cv0*t);\n"+
"		  sinfic = Math.sin(cv0*t);\n"+
"		  coord_a[i+offset] = new SFVec3f(coord[i].x + cv1*cosfic-cv2*sinfic,\n"+
"		                                coord[i].y + cv2*cosfic+cv1*sinfic,\n"+
"		                                -Math.sin(2*t+dt));\n"+
"	      }            \n"+
"	  }\n"+
"	  interp.set_key = keys;\n"+
"	  interp.set_keyValue = coord_a;\n"+
"\n"+
"          ext.set_spine = coord;\n"+
"          ext.set_scale = scale;\n"+
"          cs = new MFVec2f();\n"+
"          for(i =0; i <= n; i++){\n"+
"            fi = i*2*Math.PI/n+0.3;\n"+
"            cs[i] = new SFVec2f(r*Math.cos(fi), -r*Math.sin(fi));\n"+
"          }\n"+
"          ext.set_crossSection = cs;           \n"+
"	  trace('initialize');\n"+
"        }\n"+
"\n"+
"       function init(){\n"+
"          for(i = 0; i <=N; i++){\n"+
"            t = i/N*Math.PI*2;\n"+
"            makeVector(t,coord[i]);\n"+
"          }        \n"+
"          ext.set_spine = coord;\n"+
"       }\n"+
"\n"+
"       function set_time(val){\n"+
"	   if(t0 == 0){\n"+
"	       t0 = val;\n"+
"	   }\n"+
"	   dt = val - t0;\n"+
"	   /*\n"+
"	   var fi = Math.PI*2*dt*0.005;\n"+
"	   var delta_fi = 0.1;\n"+
"	   var height = (Math.cos(4*fi+4)+1.5)/2+0.1;\n"+
"\n"+
"	   makeVector(fi + delta_fi,look_at);\n"+
"	   makeVector(fi,position);\n"+
"	   position.z += height;\n"+
"	   look_at.z += height-0.2;\n"+
"\n"+
"	   position_changed = position;\n"+
"	   orientation_changed = getOrientation(position, look_at, up); \n"+
"	   */\n"+
"           //delay = 2*Math.PI*dt*0.05;\n"+
"           // delay = 2*Math.PI*dt*0.025; // for 0\n"+
"           delay = dt*0.1; // for 1\n"+
"	   interp.set_fraction = delay - Math.floor(delay);\n"+
"       }\n"+
"\n"+
"       function set_spine(value){\n"+
"	   //trace(value[0]);\n"+
"       }`)
ProtoBody12.children[3] = Script16;

ROUTE ROUTE50 = createNode("ROUTE");
ROUTE50.fromNode = "TIMER";
ROUTE50.fromField = "time";
ROUTE50.toNode = "SHAPE_SCRIPT";
ROUTE50.toField = "set_time";
ProtoBody12.children[4] = ROUTE50;

ROUTE ROUTE51 = createNode("ROUTE");
ROUTE51.fromNode = "INTERP";
ROUTE51.fromField = "value_changed";
ROUTE51.toNode = "EXT";
ROUTE51.toField = "set_spine";
ProtoBody12.children[5] = ROUTE51;

ROUTE ROUTE52 = createNode("ROUTE");
ROUTE52.fromNode = "INTERP";
ROUTE52.fromField = "value_changed";
ROUTE52.toNode = "SHAPE_SCRIPT";
ROUTE52.toField = "set_spine";
ProtoBody12.children[6] = ROUTE52;

ProtoDeclare8.protoBody = ProtoBody12;

children = new MFNode();

children[0] = ProtoDeclare8;

ProtoDeclare ProtoDeclare53 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Axes" ><ProtoBody><Group><Transform DEF="Y" translation="0 0.2 0"><Shape><Appearance containerField="appearance"><Material containerField="material" diffuseColor="1 1 0" specularColor="1 1 0"></Material>
</Appearance>
<Cylinder height="0.4" radius="0.05"></Cylinder>
</Shape>
</Transform>
<Transform rotation="0 0 -1 1.5708"><Transform USE="Y"></Transform>
</Transform>
<Transform rotation="1 0 0 1.5708"><Transform USE="Y"></Transform>
</Transform>
</Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare53.name = "Axes";
ProtoBody ProtoBody54 = createNode("ProtoBody");
Group Group55 = createNode("Group");
Transform Transform56 = createNode("Transform");
Transform56.DEF = "Y";
Transform56.translation = new SFVec3f(new float[0,0.2,0]);
Shape Shape57 = createNode("Shape");
Appearance Appearance58 = createNode("Appearance");
Material Material59 = createNode("Material");
Material59.diffuseColor = new SFColor(new float[1,1,0]);
Material59.specularColor = new SFColor(new float[1,1,0]);
Appearance58.material = Material59;

Shape57.appearance = Appearance58;

Cylinder Cylinder60 = createNode("Cylinder");
Cylinder60.height = 0.4;
Cylinder60.radius = 0.05;
Shape57.geometry = Cylinder60;

Transform56.child = new undefined();

Transform56.child[0] = Shape57;

Group55.children = new MFNode();

Group55.children[0] = Transform56;

Transform Transform61 = createNode("Transform");
Transform61.rotation = new SFRotation(new float[0,0,-1,1.5708]);
Transform Transform62 = createNode("Transform");
Transform62.USE = "Y";
Transform61.children = new MFNode();

Transform61.children[0] = Transform62;

Group55.children[1] = Transform61;

Transform Transform63 = createNode("Transform");
Transform63.rotation = new SFRotation(new float[1,0,0,1.5708]);
Transform Transform64 = createNode("Transform");
Transform64.USE = "Y";
Transform63.children = new MFNode();

Transform63.children[0] = Transform64;

Group55.children[2] = Transform63;

ProtoBody54.children = new MFNode();

ProtoBody54.children[0] = Group55;

ProtoDeclare53.protoBody = ProtoBody54;

children[1] = ProtoDeclare53;

ProtoDeclare ProtoDeclare65 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="IndexedPolySet" ><ProtoInterface><field name="coordIndex" accessType="initializeOnly" type="MFInt32"></field>
<field name="coord" accessType="initializeOnly" type="SFNode"><Coordinate DEF="_1"></Coordinate>
</field>
<field name="scale" accessType="initializeOnly" type="SFFloat" value="0.9"></field>
</ProtoInterface>
<ProtoBody><IndexedFaceSet DEF="IFS" solid="false"><Coordinate></Coordinate>
</IndexedFaceSet>
<Script DEF="IndexedPolySet"><field name="coordIndex" accessType="initializeOnly" type="MFInt32"></field>
<field name="coord" accessType="initializeOnly" type="SFNode"></field>
<field name="ifs" accessType="initializeOnly" type="SFNode"><IndexedFaceSet USE="IFS"></IndexedFaceSet>
</field>
<field name="ci" accessType="initializeOnly" type="MFInt32"></field>
<field name="vertex" accessType="initializeOnly" type="MFVec3f"></field>
<field name="scale" accessType="initializeOnly" type="SFFloat"></field>
<IS><connect nodeField="coordIndex" protoField="coordIndex"></connect>
<connect nodeField="coord" protoField="coord"></connect>
<connect nodeField="scale" protoField="scale"></connect>
</IS>
<![CDATA[javascript:

	function initialize(){

	    var fcount = 0;
	    var vcount = 0;
	    var ci_count = 0;
	    var fv = new MFVec3f();
	    var center = new SFVec3f(0,0,0);

	    for(i = 0; i < coordIndex.length; i++){
		if(coordIndex[i] != -1){

		    fv[fcount++] = coord.point[coordIndex[i]];

		} else { // new face 

		    center.x = center.y = center.z = 0;
		    for( j = 0; j < fcount; j++){
			center.x += fv[j].x;
			center.y += fv[j].y;
			center.z += fv[j].z;
		    }
		    center.x /= fcount;
		    center.y /= fcount;
		    center.z /= fcount;

		    for( j = 0; j < fcount; j++){			
			vertex[vcount] = new SFVec3f(
			         center.x+(fv[j].x-center.x)*scale,
			         center.y+(fv[j].y-center.y)*scale,
			         center.z+(fv[j].z-center.z)*scale);
			ci[ci_count++] = vcount;
			//trace(vertex[vcount]);
			vcount++;
		    }
		    ci[ci_count++] = -1;
		    fcount = 0;
		}
	    }
	    ifs.coord.set_point = vertex;
	    ifs.set_coordIndex = ci;	    
	}]]></Script>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare65.name = "IndexedPolySet";
ProtoInterface ProtoInterface66 = createNode("ProtoInterface");
field field67 = createNode("field");
field67.name = "coordIndex";
field67.accessType = "initializeOnly";
field67.type = "MFInt32";
ProtoInterface66.field = new MFNode();

ProtoInterface66.field[0] = field67;

field field68 = createNode("field");
field68.name = "coord";
field68.accessType = "initializeOnly";
field68.type = "SFNode";
Coordinate Coordinate69 = createNode("Coordinate");
Coordinate69.DEF = "_1";
field68.children = new MFNode();

field68.children[0] = Coordinate69;

ProtoInterface66.field[1] = field68;

field field70 = createNode("field");
field70.name = "scale";
field70.accessType = "initializeOnly";
field70.type = "SFFloat";
field70.value = "0.9";
ProtoInterface66.field[2] = field70;

ProtoDeclare65.protoInterface = ProtoInterface66;

ProtoBody ProtoBody71 = createNode("ProtoBody");
IndexedFaceSet IndexedFaceSet72 = createNode("IndexedFaceSet");
IndexedFaceSet72.DEF = "IFS";
IndexedFaceSet72.solid = False;
Coordinate Coordinate73 = createNode("Coordinate");
IndexedFaceSet72.coord = Coordinate73;

ProtoBody71.children = new MFNode();

ProtoBody71.children[0] = IndexedFaceSet72;

Script Script74 = createNode("Script");
Script74.DEF = "IndexedPolySet";
field field75 = createNode("field");
field75.name = "coordIndex";
field75.accessType = "initializeOnly";
field75.type = "MFInt32";
Script74.field = new MFNode();

Script74.field[0] = field75;

field field76 = createNode("field");
field76.name = "coord";
field76.accessType = "initializeOnly";
field76.type = "SFNode";
Script74.field[1] = field76;

field field77 = createNode("field");
field77.name = "ifs";
field77.accessType = "initializeOnly";
field77.type = "SFNode";
IndexedFaceSet IndexedFaceSet78 = createNode("IndexedFaceSet");
IndexedFaceSet78.USE = "IFS";
field77.children = new MFNode();

field77.children[0] = IndexedFaceSet78;

Script74.field[2] = field77;

field field79 = createNode("field");
field79.name = "ci";
field79.accessType = "initializeOnly";
field79.type = "MFInt32";
Script74.field[3] = field79;

field field80 = createNode("field");
field80.name = "vertex";
field80.accessType = "initializeOnly";
field80.type = "MFVec3f";
Script74.field[4] = field80;

field field81 = createNode("field");
field81.name = "scale";
field81.accessType = "initializeOnly";
field81.type = "SFFloat";
Script74.field[5] = field81;

IS IS82 = createNode("IS");
connect connect83 = createNode("connect");
connect83.nodeField = "coordIndex";
connect83.protoField = "coordIndex";
IS82.connect = new MFNode();

IS82.connect[0] = connect83;

connect connect84 = createNode("connect");
connect84.nodeField = "coord";
connect84.protoField = "coord";
IS82.connect[1] = connect84;

connect connect85 = createNode("connect");
connect85.nodeField = "scale";
connect85.protoField = "scale";
IS82.connect[2] = connect85;

Script74.iS = IS82;


Script74.setSourceCode(`javascript:\n"+
"\n"+
"	function initialize(){\n"+
"\n"+
"	    var fcount = 0;\n"+
"	    var vcount = 0;\n"+
"	    var ci_count = 0;\n"+
"	    var fv = new MFVec3f();\n"+
"	    var center = new SFVec3f(0,0,0);\n"+
"\n"+
"	    for(i = 0; i < coordIndex.length; i++){\n"+
"		if(coordIndex[i] != -1){\n"+
"\n"+
"		    fv[fcount++] = coord.point[coordIndex[i]];\n"+
"\n"+
"		} else { // new face \n"+
"\n"+
"		    center.x = center.y = center.z = 0;\n"+
"		    for( j = 0; j < fcount; j++){\n"+
"			center.x += fv[j].x;\n"+
"			center.y += fv[j].y;\n"+
"			center.z += fv[j].z;\n"+
"		    }\n"+
"		    center.x /= fcount;\n"+
"		    center.y /= fcount;\n"+
"		    center.z /= fcount;\n"+
"\n"+
"		    for( j = 0; j < fcount; j++){			\n"+
"			vertex[vcount] = new SFVec3f(\n"+
"			         center.x+(fv[j].x-center.x)*scale,\n"+
"			         center.y+(fv[j].y-center.y)*scale,\n"+
"			         center.z+(fv[j].z-center.z)*scale);\n"+
"			ci[ci_count++] = vcount;\n"+
"			//trace(vertex[vcount]);\n"+
"			vcount++;\n"+
"		    }\n"+
"		    ci[ci_count++] = -1;\n"+
"		    fcount = 0;\n"+
"		}\n"+
"	    }\n"+
"	    ifs.coord.set_point = vertex;\n"+
"	    ifs.set_coordIndex = ci;	    \n"+
"	}`)
ProtoBody71.children[1] = Script74;

ProtoDeclare65.protoBody = ProtoBody71;

children[2] = ProtoDeclare65;

ProtoDeclare ProtoDeclare86 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="IFS" ><ProtoBody><ProtoInstance name="IndexedPolySet"><fieldValue name="coordIndex" value="21 22 2 1 -1 22 23 3 2 -1 23 24 4 3 -1 24 25 5 4 -1 25 26 6 5 -1 26 27 7 6 -1 27 28 8 7 -1 28 29 9 8 -1 29 30 10 9 -1 30 31 11 10 -1 31 32 12 11 -1 32 33 13 12 -1 33 34 14 13 -1 34 35 15 14 -1 35 36 16 15 -1 36 37 17 16 -1 37 38 18 17 -1 38 39 19 18 -1 39 40 20 19 -1 42 43 23 22 -1 43 44 24 23 -1 44 45 25 24 -1 45 46 26 25 -1 46 47 27 26 -1 47 48 28 27 -1 48 49 29 28 -1 49 50 30 29 -1 50 51 31 30 -1 51 52 32 31 -1 52 53 33 32 -1 53 54 34 33 -1 54 55 35 34 -1 55 56 36 35 -1 56 57 37 36 -1 57 58 38 37 -1 58 59 39 38 -1 59 60 40 39 -1 60 61 41 40 -1 63 64 44 43 -1 64 65 45 44 -1 65 66 46 45 -1 66 67 47 46 -1 67 68 48 47 -1 68 69 49 48 -1 69 70 50 49 -1 70 71 51 50 -1 71 72 52 51 -1 72 73 53 52 -1 73 74 54 53 -1 74 75 55 54 -1 75 76 56 55 -1 76 77 57 56 -1 77 78 58 57 -1 78 79 59 58 -1 79 80 60 59 -1 80 81 61 60 -1 81 82 62 61 -1 84 85 65 64 -1 85 86 66 65 -1 86 87 67 66 -1 87 88 68 67 -1 88 89 69 68 -1 89 90 70 69 -1 90 91 71 70 -1 91 92 72 71 -1 92 93 73 72 -1 93 94 74 73 -1 94 95 75 74 -1 95 96 76 75 -1 96 97 77 76 -1 97 98 78 77 -1 98 99 79 78 -1 99 100 80 79 -1 100 101 81 80 -1 101 102 82 81 -1 102 103 83 82 -1 105 106 86 85 -1 106 107 87 86 -1 107 108 88 87 -1 108 109 89 88 -1 109 110 90 89 -1 110 111 91 90 -1 111 112 92 91 -1 112 113 93 92 -1 113 114 94 93 -1 114 115 95 94 -1 115 116 96 95 -1 116 117 97 96 -1 117 118 98 97 -1 118 119 99 98 -1 119 120 100 99 -1 120 121 101 100 -1 121 122 102 101 -1 122 123 103 102 -1 123 124 104 103 -1 126 127 107 106 -1 127 128 108 107 -1 128 129 109 108 -1 129 130 110 109 -1 130 131 111 110 -1 131 132 112 111 -1 132 133 113 112 -1 133 134 114 113 -1 134 135 115 114 -1 135 136 116 115 -1 136 137 117 116 -1 137 138 118 117 -1 138 139 119 118 -1 139 140 120 119 -1 140 141 121 120 -1 141 142 122 121 -1 142 143 123 122 -1 143 144 124 123 -1 144 145 125 124 -1 147 148 128 127 -1 148 149 129 128 -1 149 150 130 129 -1 150 151 131 130 -1 151 152 132 131 -1 152 153 133 132 -1 153 154 134 133 -1 154 155 135 134 -1 155 156 136 135 -1 156 157 137 136 -1 157 158 138 137 -1 158 159 139 138 -1 159 160 140 139 -1 160 161 141 140 -1 161 162 142 141 -1 162 163 143 142 -1 163 164 144 143 -1 164 165 145 144 -1 165 166 146 145 -1 168 169 149 148 -1 169 170 150 149 -1 170 171 151 150 -1 171 172 152 151 -1 172 173 153 152 -1 173 174 154 153 -1 174 175 155 154 -1 175 176 156 155 -1 176 177 157 156 -1 177 178 158 157 -1 178 179 159 158 -1 179 180 160 159 -1 180 181 161 160 -1 181 182 162 161 -1 182 183 163 162 -1 183 184 164 163 -1 184 185 165 164 -1 185 186 166 165 -1 186 187 167 166 -1 189 190 170 169 -1 190 191 171 170 -1 191 192 172 171 -1 192 193 173 172 -1 193 194 174 173 -1 194 195 175 174 -1 195 196 176 175 -1 196 197 177 176 -1 197 198 178 177 -1 198 199 179 178 -1 199 200 180 179 -1 200 201 181 180 -1 201 202 182 181 -1 202 203 183 182 -1 203 204 184 183 -1 204 205 185 184 -1 205 206 186 185 -1 206 207 187 186 -1 207 208 188 187 -1 210 211 191 190 -1 211 212 192 191 -1 212 213 193 192 -1 213 214 194 193 -1 214 215 195 194 -1 215 216 196 195 -1 216 217 197 196 -1 217 218 198 197 -1 218 219 199 198 -1 219 220 200 199 -1 220 221 201 200 -1 221 222 202 201 -1 222 223 203 202 -1 223 224 204 203 -1 224 225 205 204 -1 225 226 206 205 -1 226 227 207 206 -1 227 228 208 207 -1 228 229 209 208 -1 231 232 212 211 -1 232 233 213 212 -1 233 234 214 213 -1 234 235 215 214 -1 235 236 216 215 -1 236 237 217 216 -1 237 238 218 217 -1 238 239 219 218 -1 239 240 220 219 -1 240 241 221 220 -1 241 242 222 221 -1 242 243 223 222 -1 243 244 224 223 -1 244 245 225 224 -1 245 246 226 225 -1 246 247 227 226 -1 247 248 228 227 -1 248 249 229 228 -1 249 250 230 229 -1 252 253 233 232 -1 253 254 234 233 -1 254 255 235 234 -1 255 256 236 235 -1 256 257 237 236 -1 257 258 238 237 -1 258 259 239 238 -1 259 260 240 239 -1 260 261 241 240 -1 261 262 242 241 -1 262 263 243 242 -1 263 264 244 243 -1 264 265 245 244 -1 265 266 246 245 -1 266 267 247 246 -1 267 268 248 247 -1 268 269 249 248 -1 269 270 250 249 -1 270 271 251 250 -1 273 274 254 253 -1 274 275 255 254 -1 275 276 256 255 -1 276 277 257 256 -1 277 278 258 257 -1 278 279 259 258 -1 279 280 260 259 -1 280 281 261 260 -1 281 282 262 261 -1 282 283 263 262 -1 283 284 264 263 -1 284 285 265 264 -1 285 286 266 265 -1 286 287 267 266 -1 287 288 268 267 -1 288 289 269 268 -1 289 290 270 269 -1 290 291 271 270 -1 291 292 272 271 -1 294 295 275 274 -1 295 296 276 275 -1 296 297 277 276 -1 297 298 278 277 -1 298 299 279 278 -1 299 300 280 279 -1 300 301 281 280 -1 301 302 282 281 -1 302 303 283 282 -1 303 304 284 283 -1 304 305 285 284 -1 305 306 286 285 -1 306 307 287 286 -1 307 308 288 287 -1 308 309 289 288 -1 309 310 290 289 -1 310 311 291 290 -1 311 312 292 291 -1 312 313 293 292 -1 315 316 296 295 -1 316 317 297 296 -1 317 318 298 297 -1 318 319 299 298 -1 319 320 300 299 -1 320 321 301 300 -1 321 322 302 301 -1 322 323 303 302 -1 323 324 304 303 -1 324 325 305 304 -1 325 326 306 305 -1 326 327 307 306 -1 327 328 308 307 -1 328 329 309 308 -1 329 330 310 309 -1 330 331 311 310 -1 331 332 312 311 -1 332 333 313 312 -1 333 334 314 313 -1 336 337 317 316 -1 337 338 318 317 -1 338 339 319 318 -1 339 340 320 319 -1 340 341 321 320 -1 341 342 322 321 -1 342 343 323 322 -1 343 344 324 323 -1 344 345 325 324 -1 345 346 326 325 -1 346 347 327 326 -1 347 348 328 327 -1 348 349 329 328 -1 349 350 330 329 -1 350 351 331 330 -1 351 352 332 331 -1 352 353 333 332 -1 353 354 334 333 -1 354 355 335 334 -1 357 358 338 337 -1 358 359 339 338 -1 359 360 340 339 -1 360 361 341 340 -1 361 362 342 341 -1 362 363 343 342 -1 363 364 344 343 -1 364 365 345 344 -1 365 366 346 345 -1 366 367 347 346 -1 367 368 348 347 -1 368 369 349 348 -1 369 370 350 349 -1 370 371 351 350 -1 371 372 352 351 -1 372 373 353 352 -1 373 374 354 353 -1 374 375 355 354 -1 375 376 356 355 -1 378 379 359 358 -1 379 380 360 359 -1 380 381 361 360 -1 381 382 362 361 -1 382 383 363 362 -1 383 384 364 363 -1 384 385 365 364 -1 385 386 366 365 -1 386 387 367 366 -1 387 388 368 367 -1 388 389 369 368 -1 389 390 370 369 -1 390 391 371 370 -1 391 392 372 371 -1 392 393 373 372 -1 393 394 374 373 -1 394 395 375 374 -1 395 396 376 375 -1 396 397 377 376 -1 399 400 380 379 -1 400 401 381 380 -1 401 402 382 381 -1 402 403 383 382 -1 403 404 384 383 -1 404 405 385 384 -1 405 406 386 385 -1 406 407 387 386 -1 407 408 388 387 -1 408 409 389 388 -1 409 410 390 389 -1 410 411 391 390 -1 411 412 392 391 -1 412 413 393 392 -1 413 414 394 393 -1 414 415 395 394 -1 415 416 396 395 -1 416 417 397 396 -1 417 418 398 397 -1 0 1 401 400 -1 1 2 402 401 -1 2 3 403 402 -1 3 4 404 403 -1 4 5 405 404 -1 5 6 406 405 -1 6 7 407 406 -1 7 8 408 407 -1 8 9 409 408 -1 9 10 410 409 -1 10 11 411 410 -1 11 12 412 411 -1 12 13 413 412 -1 13 14 414 413 -1 14 15 415 414 -1 15 16 416 415 -1 16 17 417 416 -1 17 18 418 417 -1 18 19 419 418 -1"></fieldValue>
<fieldValue name="coord"><Coordinate point="1.66533e-16 -1.38778e-16 -6.44218 0.764842 -1.38778e-16 -5.79796 1.49225 0.236349 -5.15374 2.11102 0.685912 -4.50952 2.56058 1.30468 -3.86531 2.79693 2.03209 -3.22109 2.79693 2.79693 -2.57687 2.56058 3.52434 -1.93265 2.11102 4.14311 -1.28844 1.49225 4.59267 -0.644218 0.764842 4.82902 -3.55271e-15 4.44089e-16 4.82902 0.644218 -0.727408 4.59267 1.28844 -1.34618 4.14311 1.93265 -1.79574 3.52434 2.57687 -2.03209 2.79693 3.22109 -2.03209 2.03209 3.86531 -1.79574 1.30468 4.50952 -1.34618 0.685912 5.15374 -0.727408 0.236349 5.79796 -3.33067e-16 -6.10623e-16 6.44218 1.66533e-16 -1.38778e-16 -6.44218 0.727408 0.236349 -5.79796 1.34618 0.685912 -5.15374 1.79574 1.30468 -4.50952 2.03209 2.03209 -3.86531 2.03209 2.79693 -3.22109 1.79574 3.52434 -2.57687 1.34618 4.14311 -1.93265 0.727408 4.59267 -1.28844 4.44089e-16 4.82902 -0.644218 -0.764842 4.82902 -3.55271e-15 -1.49225 4.59267 0.644218 -2.11102 4.14311 1.28844 -2.56058 3.52434 1.93265 -2.79693 2.79693 2.57687 -2.79693 2.03209 3.22109 -2.56058 1.30468 3.86531 -2.11102 0.685912 4.50952 -1.49225 0.236349 5.15374 -0.764842 -6.10623e-16 5.79796 -1.11022e-15 -6.10623e-16 6.44218 1.66533e-16 -1.38778e-16 -6.44218 0.61877 0.449563 -5.79796 1.06833 1.06833 -5.15374 1.30468 1.79574 -4.50952 1.30468 2.56058 -3.86531 1.06833 3.28799 -3.22109 0.61877 3.90676 -2.57687 4.44089e-16 4.35633 -1.93265 -0.727408 4.59267 -1.28844 -1.49225 4.59267 -0.644218 -2.21966 4.35633 -3.55271e-15 -2.83843 3.90676 0.644218 -3.28799 3.28799 1.28844 -3.52434 2.56058 1.93265 -3.52434 1.79574 2.57687 -3.28799 1.06833 3.22109 -2.83843 0.449563 3.86531 -2.21966 1.05471e-15 4.50952 -1.49225 -0.236349 5.15374 -0.727408 -0.236349 5.79796 -1.11022e-15 8.88178e-16 6.44218 1.66533e-16 -1.38778e-16 -6.44218 0.449563 0.61877 -5.79796 0.685912 1.34618 -5.15374 0.685912 2.11102 -4.50952 0.449563 2.83843 -3.86531 3.33067e-16 3.4572 -3.22109 -0.61877 3.90676 -2.57687 -1.34618 4.14311 -1.93265 -2.11102 4.14311 -1.28844 -2.83843 3.90676 -0.644218 -3.4572 3.4572 -3.55271e-15 -3.90676 2.83843 0.644218 -4.14311 2.11102 1.28844 -4.14311 1.34618 1.93265 -3.90676 0.61877 2.57687 -3.4572 6.66134e-16 3.22109 -2.83843 -0.449563 3.86531 -2.11102 -0.685912 4.50952 -1.34618 -0.685912 5.15374 -0.61877 -0.449563 5.79796 -7.77156e-16 3.88578e-16 6.44218 1.66533e-16 -1.38778e-16 -6.44218 0.236349 0.727408 -5.79796 0.236349 1.49225 -5.15374 3.60822e-16 2.21966 -4.50952 -0.449563 2.83843 -3.86531 -1.06833 3.28799 -3.22109 -1.79574 3.52434 -2.57687 -2.56058 3.52434 -1.93265 -3.28799 3.28799 -1.28844 -3.90676 2.83843 -0.644218 -4.35633 2.21966 -3.55271e-15 -4.59267 1.49225 0.644218 -4.59267 0.727408 1.28844 -4.35633 1.44329e-15 1.93265 -3.90676 -0.61877 2.57687 -3.28799 -1.06833 3.22109 -2.56058 -1.30468 3.86531 -1.79574 -1.30468 4.50952 -1.06833 -1.06833 5.15374 -0.449563 -0.61877 5.79796 -9.99201e-16 1.22125e-15 6.44218 1.66533e-16 -1.38778e-16 -6.44218 2.13367e-16 0.764842 -5.79796 -0.236349 1.49225 -5.15374 -0.685912 2.11102 -4.50952 -1.30468 2.56058 -3.86531 -2.03209 2.79693 -3.22109 -2.79693 2.79693 -2.57687 -3.52434 2.56058 -1.93265 -4.14311 2.11102 -1.28844 -4.59267 1.49225 -0.644218 -4.82902 0.764842 -3.55271e-15 -4.82902 1.33227e-15 0.644218 -4.59267 -0.727408 1.28844 -4.14311 -1.34618 1.93265 -3.52434 -1.79574 2.57687 -2.79693 -2.03209 3.22109 -2.03209 -2.03209 3.86531 -1.30468 -1.79574 4.50952 -0.685912 -1.34618 5.15374 -0.236349 -0.727408 5.79796 -5.55112e-16 7.77156e-16 6.44218 1.66533e-16 -1.38778e-16 -6.44218 -0.236349 0.727408 -5.79796 -0.685912 1.34618 -5.15374 -1.30468 1.79574 -4.50952 -2.03209 2.03209 -3.86531 -2.79693 2.03209 -3.22109 -3.52434 1.79574 -2.57687 -4.14311 1.34618 -1.93265 -4.59267 0.727408 -1.28844 -4.82902 6.66134e-16 -0.644218 -4.82902 -0.764842 -3.55271e-15 -4.59267 -1.49225 0.644218 -4.14311 -2.11102 1.28844 -3.52434 -2.56058 1.93265 -2.79693 -2.79693 2.57687 -2.03209 -2.79693 3.22109 -1.30468 -2.56058 3.86531 -0.685912 -2.11102 4.50952 -0.236349 -1.49225 5.15374 -5.55112e-16 -0.764842 5.79796 -5.08278e-16 -2.22045e-16 6.44218 1.66533e-16 -1.38778e-16 -6.44218 -0.449563 0.61877 -5.79796 -1.06833 1.06833 -5.15374 -1.79574 1.30468 -4.50952 -2.56058 1.30468 -3.86531 -3.28799 1.06833 -3.22109 -3.90676 0.61877 -2.57687 -4.35633 5.55112e-16 -1.93265 -4.59267 -0.727408 -1.28844 -4.59267 -1.49225 -0.644218 -4.35633 -2.21966 -3.55271e-15 -3.90676 -2.83843 0.644218 -3.28799 -3.28799 1.28844 -2.56058 -3.52434 1.93265 -1.79574 -3.52434 2.57687 -1.06833 -3.28799 3.22109 -0.449563 -2.83843 3.86531 -9.99201e-16 -2.21966 4.50952 0.236349 -1.49225 5.15374 0.236349 -0.727408 5.79796 -8.04912e-16 3.33067e-16 6.44218 1.66533e-16 -1.38778e-16 -6.44218 -0.61877 0.449563 -5.79796 -1.34618 0.685912 -5.15374 -2.11102 0.685912 -4.50952 -2.83843 0.449563 -3.86531 -3.4572 5.55112e-16 -3.22109 -3.90676 -0.61877 -2.57687 -4.14311 -1.34618 -1.93265 -4.14311 -2.11102 -1.28844 -3.90676 -2.83843 -0.644218 -3.4572 -3.4572 -3.55271e-15 -2.83843 -3.90676 0.644218 -2.11102 -4.14311 1.28844 -1.34618 -4.14311 1.93265 -0.61877 -3.90676 2.57687 -7.77156e-16 -3.4572 3.22109 0.449563 -2.83843 3.86531 0.685912 -2.11102 4.50952 0.685912 -1.34618 5.15374 0.449563 -0.61877 5.79796 -6.66134e-16 2.22045e-16 6.44218 1.66533e-16 -1.38778e-16 -6.44218 -0.727408 0.236349 -5.79796 -1.49225 0.236349 -5.15374 -2.21966 4.44089e-16 -4.50952 -2.83843 -0.449563 -3.86531 -3.28799 -1.06833 -3.22109 -3.52434 -1.79574 -2.57687 -3.52434 -2.56058 -1.93265 -3.28799 -3.28799 -1.28844 -2.83843 -3.90676 -0.644218 -2.21966 -4.35633 -3.55271e-15 -1.49225 -4.59267 0.644218 -0.727408 -4.59267 1.28844 -1.11022e-15 -4.35633 1.93265 0.61877 -3.90676 2.57687 1.06833 -3.28799 3.22109 1.30468 -2.56058 3.86531 1.30468 -1.79574 4.50952 1.06833 -1.06833 5.15374 0.61877 -0.449563 5.79796 -6.66134e-16 6.10623e-16 6.44218 1.66533e-16 -1.38778e-16 -6.44218 -0.764842 -4.51117e-17 -5.79796 -1.49225 -0.236349 -5.15374 -2.11102 -0.685912 -4.50952 -2.56058 -1.30468 -3.86531 -2.79693 -2.03209 -3.22109 -2.79693 -2.79693 -2.57687 -2.56058 -3.52434 -1.93265 -2.11102 -4.14311 -1.28844 -1.49225 -4.59267 -0.644218 -0.764842 -4.82902 -3.55271e-15 -1.11022e-15 -4.82902 0.644218 0.727408 -4.59267 1.28844 1.34618 -4.14311 1.93265 1.79574 -3.52434 2.57687 2.03209 -2.79693 3.22109 2.03209 -2.03209 3.86531 1.79574 -1.30468 4.50952 1.34618 -0.685912 5.15374 0.727408 -0.236349 5.79796 -8.88178e-16 1.30451e-15 6.44218 1.66533e-16 -1.38778e-16 -6.44218 -0.727408 -0.236349 -5.79796 -1.34618 -0.685912 -5.15374 -1.79574 -1.30468 -4.50952 -2.03209 -2.03209 -3.86531 -2.03209 -2.79693 -3.22109 -1.79574 -3.52434 -2.57687 -1.34618 -4.14311 -1.93265 -0.727408 -4.59267 -1.28844 -7.77156e-16 -4.82902 -0.644218 0.764842 -4.82902 -3.55271e-15 1.49225 -4.59267 0.644218 2.11102 -4.14311 1.28844 2.56058 -3.52434 1.93265 2.79693 -2.79693 2.57687 2.79693 -2.03209 3.22109 2.56058 -1.30468 3.86531 2.11102 -0.685912 4.50952 1.49225 -0.236349 5.15374 0.764842 1.30451e-15 5.79796 -4.44089e-16 1.39818e-15 6.44218 1.66533e-16 -1.38778e-16 -6.44218 -0.61877 -0.449563 -5.79796 -1.06833 -1.06833 -5.15374 -1.30468 -1.79574 -4.50952 -1.30468 -2.56058 -3.86531 -1.06833 -3.28799 -3.22109 -0.61877 -3.90676 -2.57687 -6.66134e-16 -4.35633 -1.93265 0.727408 -4.59267 -1.28844 1.49225 -4.59267 -0.644218 2.21966 -4.35633 -3.55271e-15 2.83843 -3.90676 0.644218 3.28799 -3.28799 1.28844 3.52434 -2.56058 1.93265 3.52434 -1.79574 2.57687 3.28799 -1.06833 3.22109 2.83843 -0.449563 3.86531 2.21966 -2.77556e-16 4.50952 1.49225 0.236349 5.15374 0.727408 0.236349 5.79796 -4.44089e-16 3.05311e-16 6.44218 1.66533e-16 -1.38778e-16 -6.44218 -0.449563 -0.61877 -5.79796 -0.685912 -1.34618 -5.15374 -0.685912 -2.11102 -4.50952 -0.449563 -2.83843 -3.86531 -4.44089e-16 -3.4572 -3.22109 0.61877 -3.90676 -2.57687 1.34618 -4.14311 -1.93265 2.11102 -4.14311 -1.28844 2.83843 -3.90676 -0.644218 3.4572 -3.4572 -3.55271e-15 3.90676 -2.83843 0.644218 4.14311 -2.11102 1.28844 4.14311 -1.34618 1.93265 3.90676 -0.61877 2.57687 3.4572 -6.66134e-16 3.22109 2.83843 0.449563 3.86531 2.11102 0.685912 4.50952 1.34618 0.685912 5.15374 0.61877 0.449563 5.79796 -3.33067e-16 1.11022e-16 6.44218 1.66533e-16 -1.38778e-16 -6.44218 -0.236349 -0.727408 -5.79796 -0.236349 -1.49225 -5.15374 -2.77556e-16 -2.21966 -4.50952 0.449563 -2.83843 -3.86531 1.06833 -3.28799 -3.22109 1.79574 -3.52434 -2.57687 2.56058 -3.52434 -1.93265 3.28799 -3.28799 -1.28844 3.90676 -2.83843 -0.644218 4.35633 -2.21966 -3.55271e-15 4.59267 -1.49225 0.644218 4.59267 -0.727408 1.28844 4.35633 -5.55112e-16 1.93265 3.90676 0.61877 2.57687 3.28799 1.06833 3.22109 2.56058 1.30468 3.86531 1.79574 1.30468 4.50952 1.06833 1.06833 5.15374 0.449563 0.61877 5.79796 -6.10623e-16 1.11022e-16 6.44218 1.66533e-16 -1.38778e-16 -6.44218 2.60342e-17 -0.764842 -5.79796 0.236349 -1.49225 -5.15374 0.685912 -2.11102 -4.50952 1.30468 -2.56058 -3.86531 2.03209 -2.79693 -3.22109 2.79693 -2.79693 -2.57687 3.52434 -2.56058 -1.93265 4.14311 -2.11102 -1.28844 4.59267 -1.49225 -0.644218 4.82902 -0.764842 -3.55271e-15 4.82902 -1.11022e-15 0.644218 4.59267 0.727408 1.28844 4.14311 1.34618 1.93265 3.52434 1.79574 2.57687 2.79693 2.03209 3.22109 2.03209 2.03209 3.86531 1.30468 1.79574 4.50952 0.685912 1.34618 5.15374 0.236349 0.727408 5.79796 -1.58207e-15 -2.22045e-16 6.44218 1.66533e-16 -1.38778e-16 -6.44218 0.236349 -0.727408 -5.79796 0.685912 -1.34618 -5.15374 1.30468 -1.79574 -4.50952 2.03209 -2.03209 -3.86531 2.79693 -2.03209 -3.22109 3.52434 -1.79574 -2.57687 4.14311 -1.34618 -1.93265 4.59267 -0.727408 -1.28844 4.82902 -5.55112e-16 -0.644218 4.82902 0.764842 -3.55271e-15 4.59267 1.49225 0.644218 4.14311 2.11102 1.28844 3.52434 2.56058 1.93265 2.79693 2.79693 2.57687 2.03209 2.79693 3.22109 1.30468 2.56058 3.86531 0.685912 2.11102 4.50952 0.236349 1.49225 5.15374 -1.58207e-15 0.764842 5.79796 -1.72257e-15 8.88178e-16 6.44218 1.66533e-16 -1.38778e-16 -6.44218 0.449563 -0.61877 -5.79796 1.06833 -1.06833 -5.15374 1.79574 -1.30468 -4.50952 2.56058 -1.30468 -3.86531 3.28799 -1.06833 -3.22109 3.90676 -0.61877 -2.57687 4.35633 -5.55112e-16 -1.93265 4.59267 0.727408 -1.28844 4.59267 1.49225 -0.644218 4.35633 2.21966 -3.55271e-15 3.90676 2.83843 0.644218 3.28799 3.28799 1.28844 2.56058 3.52434 1.93265 1.79574 3.52434 2.57687 1.06833 3.28799 3.22109 0.449563 2.83843 3.86531 2.77556e-16 2.21966 4.50952 -0.236349 1.49225 5.15374 -0.236349 0.727408 5.79796 -1.66533e-16 5.55112e-16 6.44218 1.66533e-16 -1.38778e-16 -6.44218 0.61877 -0.449563 -5.79796 1.34618 -0.685912 -5.15374 2.11102 -0.685912 -4.50952 2.83843 -0.449563 -3.86531 3.4572 -4.996e-16 -3.22109 3.90676 0.61877 -2.57687 4.14311 1.34618 -1.93265 4.14311 2.11102 -1.28844 3.90676 2.83843 -0.644218 3.4572 3.4572 -3.55271e-15 2.83843 3.90676 0.644218 2.11102 4.14311 1.28844 1.34618 4.14311 1.93265 0.61877 3.90676 2.57687 -3.33067e-16 3.4572 3.22109 -0.449563 2.83843 3.86531 -0.685912 2.11102 4.50952 -0.685912 1.34618 5.15374 -0.449563 0.61877 5.79796 -8.88178e-16 6.66134e-16 6.44218 1.66533e-16 -1.38778e-16 -6.44218 0.727408 -0.236349 -5.79796 1.49225 -0.236349 -5.15374 2.21966 -3.05311e-16 -4.50952 2.83843 0.449563 -3.86531 3.28799 1.06833 -3.22109 3.52434 1.79574 -2.57687 3.52434 2.56058 -1.93265 3.28799 3.28799 -1.28844 2.83843 3.90676 -0.644218 2.21966 4.35633 -3.55271e-15 1.49225 4.59267 0.644218 0.727408 4.59267 1.28844 4.44089e-16 4.35633 1.93265 -0.61877 3.90676 2.57687 -1.06833 3.28799 3.22109 -1.30468 2.56058 3.86531 -1.30468 1.79574 4.50952 -1.06833 1.06833 5.15374 -0.61877 0.449563 5.79796 -4.44089e-16 1.66533e-16 6.44218"></Coordinate>
</fieldValue>
<fieldValue name="scale" value="0.7"></fieldValue>
</ProtoInstance>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare86.name = "IFS";
ProtoBody ProtoBody87 = createNode("ProtoBody");
ProtoInstance ProtoInstance88 = createNode("ProtoInstance");
ProtoInstance88.name = "IndexedPolySet";
fieldValue fieldValue89 = createNode("fieldValue");
fieldValue89.name = "coordIndex";
fieldValue89.value = "21 22 2 1 -1 22 23 3 2 -1 23 24 4 3 -1 24 25 5 4 -1 25 26 6 5 -1 26 27 7 6 -1 27 28 8 7 -1 28 29 9 8 -1 29 30 10 9 -1 30 31 11 10 -1 31 32 12 11 -1 32 33 13 12 -1 33 34 14 13 -1 34 35 15 14 -1 35 36 16 15 -1 36 37 17 16 -1 37 38 18 17 -1 38 39 19 18 -1 39 40 20 19 -1 42 43 23 22 -1 43 44 24 23 -1 44 45 25 24 -1 45 46 26 25 -1 46 47 27 26 -1 47 48 28 27 -1 48 49 29 28 -1 49 50 30 29 -1 50 51 31 30 -1 51 52 32 31 -1 52 53 33 32 -1 53 54 34 33 -1 54 55 35 34 -1 55 56 36 35 -1 56 57 37 36 -1 57 58 38 37 -1 58 59 39 38 -1 59 60 40 39 -1 60 61 41 40 -1 63 64 44 43 -1 64 65 45 44 -1 65 66 46 45 -1 66 67 47 46 -1 67 68 48 47 -1 68 69 49 48 -1 69 70 50 49 -1 70 71 51 50 -1 71 72 52 51 -1 72 73 53 52 -1 73 74 54 53 -1 74 75 55 54 -1 75 76 56 55 -1 76 77 57 56 -1 77 78 58 57 -1 78 79 59 58 -1 79 80 60 59 -1 80 81 61 60 -1 81 82 62 61 -1 84 85 65 64 -1 85 86 66 65 -1 86 87 67 66 -1 87 88 68 67 -1 88 89 69 68 -1 89 90 70 69 -1 90 91 71 70 -1 91 92 72 71 -1 92 93 73 72 -1 93 94 74 73 -1 94 95 75 74 -1 95 96 76 75 -1 96 97 77 76 -1 97 98 78 77 -1 98 99 79 78 -1 99 100 80 79 -1 100 101 81 80 -1 101 102 82 81 -1 102 103 83 82 -1 105 106 86 85 -1 106 107 87 86 -1 107 108 88 87 -1 108 109 89 88 -1 109 110 90 89 -1 110 111 91 90 -1 111 112 92 91 -1 112 113 93 92 -1 113 114 94 93 -1 114 115 95 94 -1 115 116 96 95 -1 116 117 97 96 -1 117 118 98 97 -1 118 119 99 98 -1 119 120 100 99 -1 120 121 101 100 -1 121 122 102 101 -1 122 123 103 102 -1 123 124 104 103 -1 126 127 107 106 -1 127 128 108 107 -1 128 129 109 108 -1 129 130 110 109 -1 130 131 111 110 -1 131 132 112 111 -1 132 133 113 112 -1 133 134 114 113 -1 134 135 115 114 -1 135 136 116 115 -1 136 137 117 116 -1 137 138 118 117 -1 138 139 119 118 -1 139 140 120 119 -1 140 141 121 120 -1 141 142 122 121 -1 142 143 123 122 -1 143 144 124 123 -1 144 145 125 124 -1 147 148 128 127 -1 148 149 129 128 -1 149 150 130 129 -1 150 151 131 130 -1 151 152 132 131 -1 152 153 133 132 -1 153 154 134 133 -1 154 155 135 134 -1 155 156 136 135 -1 156 157 137 136 -1 157 158 138 137 -1 158 159 139 138 -1 159 160 140 139 -1 160 161 141 140 -1 161 162 142 141 -1 162 163 143 142 -1 163 164 144 143 -1 164 165 145 144 -1 165 166 146 145 -1 168 169 149 148 -1 169 170 150 149 -1 170 171 151 150 -1 171 172 152 151 -1 172 173 153 152 -1 173 174 154 153 -1 174 175 155 154 -1 175 176 156 155 -1 176 177 157 156 -1 177 178 158 157 -1 178 179 159 158 -1 179 180 160 159 -1 180 181 161 160 -1 181 182 162 161 -1 182 183 163 162 -1 183 184 164 163 -1 184 185 165 164 -1 185 186 166 165 -1 186 187 167 166 -1 189 190 170 169 -1 190 191 171 170 -1 191 192 172 171 -1 192 193 173 172 -1 193 194 174 173 -1 194 195 175 174 -1 195 196 176 175 -1 196 197 177 176 -1 197 198 178 177 -1 198 199 179 178 -1 199 200 180 179 -1 200 201 181 180 -1 201 202 182 181 -1 202 203 183 182 -1 203 204 184 183 -1 204 205 185 184 -1 205 206 186 185 -1 206 207 187 186 -1 207 208 188 187 -1 210 211 191 190 -1 211 212 192 191 -1 212 213 193 192 -1 213 214 194 193 -1 214 215 195 194 -1 215 216 196 195 -1 216 217 197 196 -1 217 218 198 197 -1 218 219 199 198 -1 219 220 200 199 -1 220 221 201 200 -1 221 222 202 201 -1 222 223 203 202 -1 223 224 204 203 -1 224 225 205 204 -1 225 226 206 205 -1 226 227 207 206 -1 227 228 208 207 -1 228 229 209 208 -1 231 232 212 211 -1 232 233 213 212 -1 233 234 214 213 -1 234 235 215 214 -1 235 236 216 215 -1 236 237 217 216 -1 237 238 218 217 -1 238 239 219 218 -1 239 240 220 219 -1 240 241 221 220 -1 241 242 222 221 -1 242 243 223 222 -1 243 244 224 223 -1 244 245 225 224 -1 245 246 226 225 -1 246 247 227 226 -1 247 248 228 227 -1 248 249 229 228 -1 249 250 230 229 -1 252 253 233 232 -1 253 254 234 233 -1 254 255 235 234 -1 255 256 236 235 -1 256 257 237 236 -1 257 258 238 237 -1 258 259 239 238 -1 259 260 240 239 -1 260 261 241 240 -1 261 262 242 241 -1 262 263 243 242 -1 263 264 244 243 -1 264 265 245 244 -1 265 266 246 245 -1 266 267 247 246 -1 267 268 248 247 -1 268 269 249 248 -1 269 270 250 249 -1 270 271 251 250 -1 273 274 254 253 -1 274 275 255 254 -1 275 276 256 255 -1 276 277 257 256 -1 277 278 258 257 -1 278 279 259 258 -1 279 280 260 259 -1 280 281 261 260 -1 281 282 262 261 -1 282 283 263 262 -1 283 284 264 263 -1 284 285 265 264 -1 285 286 266 265 -1 286 287 267 266 -1 287 288 268 267 -1 288 289 269 268 -1 289 290 270 269 -1 290 291 271 270 -1 291 292 272 271 -1 294 295 275 274 -1 295 296 276 275 -1 296 297 277 276 -1 297 298 278 277 -1 298 299 279 278 -1 299 300 280 279 -1 300 301 281 280 -1 301 302 282 281 -1 302 303 283 282 -1 303 304 284 283 -1 304 305 285 284 -1 305 306 286 285 -1 306 307 287 286 -1 307 308 288 287 -1 308 309 289 288 -1 309 310 290 289 -1 310 311 291 290 -1 311 312 292 291 -1 312 313 293 292 -1 315 316 296 295 -1 316 317 297 296 -1 317 318 298 297 -1 318 319 299 298 -1 319 320 300 299 -1 320 321 301 300 -1 321 322 302 301 -1 322 323 303 302 -1 323 324 304 303 -1 324 325 305 304 -1 325 326 306 305 -1 326 327 307 306 -1 327 328 308 307 -1 328 329 309 308 -1 329 330 310 309 -1 330 331 311 310 -1 331 332 312 311 -1 332 333 313 312 -1 333 334 314 313 -1 336 337 317 316 -1 337 338 318 317 -1 338 339 319 318 -1 339 340 320 319 -1 340 341 321 320 -1 341 342 322 321 -1 342 343 323 322 -1 343 344 324 323 -1 344 345 325 324 -1 345 346 326 325 -1 346 347 327 326 -1 347 348 328 327 -1 348 349 329 328 -1 349 350 330 329 -1 350 351 331 330 -1 351 352 332 331 -1 352 353 333 332 -1 353 354 334 333 -1 354 355 335 334 -1 357 358 338 337 -1 358 359 339 338 -1 359 360 340 339 -1 360 361 341 340 -1 361 362 342 341 -1 362 363 343 342 -1 363 364 344 343 -1 364 365 345 344 -1 365 366 346 345 -1 366 367 347 346 -1 367 368 348 347 -1 368 369 349 348 -1 369 370 350 349 -1 370 371 351 350 -1 371 372 352 351 -1 372 373 353 352 -1 373 374 354 353 -1 374 375 355 354 -1 375 376 356 355 -1 378 379 359 358 -1 379 380 360 359 -1 380 381 361 360 -1 381 382 362 361 -1 382 383 363 362 -1 383 384 364 363 -1 384 385 365 364 -1 385 386 366 365 -1 386 387 367 366 -1 387 388 368 367 -1 388 389 369 368 -1 389 390 370 369 -1 390 391 371 370 -1 391 392 372 371 -1 392 393 373 372 -1 393 394 374 373 -1 394 395 375 374 -1 395 396 376 375 -1 396 397 377 376 -1 399 400 380 379 -1 400 401 381 380 -1 401 402 382 381 -1 402 403 383 382 -1 403 404 384 383 -1 404 405 385 384 -1 405 406 386 385 -1 406 407 387 386 -1 407 408 388 387 -1 408 409 389 388 -1 409 410 390 389 -1 410 411 391 390 -1 411 412 392 391 -1 412 413 393 392 -1 413 414 394 393 -1 414 415 395 394 -1 415 416 396 395 -1 416 417 397 396 -1 417 418 398 397 -1 0 1 401 400 -1 1 2 402 401 -1 2 3 403 402 -1 3 4 404 403 -1 4 5 405 404 -1 5 6 406 405 -1 6 7 407 406 -1 7 8 408 407 -1 8 9 409 408 -1 9 10 410 409 -1 10 11 411 410 -1 11 12 412 411 -1 12 13 413 412 -1 13 14 414 413 -1 14 15 415 414 -1 15 16 416 415 -1 16 17 417 416 -1 17 18 418 417 -1 18 19 419 418 -1";
ProtoInstance88.fieldValue = new MFNode();

ProtoInstance88.fieldValue[0] = fieldValue89;

fieldValue fieldValue90 = createNode("fieldValue");
fieldValue90.name = "coord";
Coordinate Coordinate91 = createNode("Coordinate");
Coordinate91.point = new MFVec3f(new float[1.66533e-16,-1.38778e-16,-6.44218,0.764842,-1.38778e-16,-5.79796,1.49225,0.236349,-5.15374,2.11102,0.685912,-4.50952,2.56058,1.30468,-3.86531,2.79693,2.03209,-3.22109,2.79693,2.79693,-2.57687,2.56058,3.52434,-1.93265,2.11102,4.14311,-1.28844,1.49225,4.59267,-0.644218,0.764842,4.82902,-3.55271e-15,4.44089e-16,4.82902,0.644218,-0.727408,4.59267,1.28844,-1.34618,4.14311,1.93265,-1.79574,3.52434,2.57687,-2.03209,2.79693,3.22109,-2.03209,2.03209,3.86531,-1.79574,1.30468,4.50952,-1.34618,0.685912,5.15374,-0.727408,0.236349,5.79796,-3.33067e-16,-6.10623e-16,6.44218,1.66533e-16,-1.38778e-16,-6.44218,0.727408,0.236349,-5.79796,1.34618,0.685912,-5.15374,1.79574,1.30468,-4.50952,2.03209,2.03209,-3.86531,2.03209,2.79693,-3.22109,1.79574,3.52434,-2.57687,1.34618,4.14311,-1.93265,0.727408,4.59267,-1.28844,4.44089e-16,4.82902,-0.644218,-0.764842,4.82902,-3.55271e-15,-1.49225,4.59267,0.644218,-2.11102,4.14311,1.28844,-2.56058,3.52434,1.93265,-2.79693,2.79693,2.57687,-2.79693,2.03209,3.22109,-2.56058,1.30468,3.86531,-2.11102,0.685912,4.50952,-1.49225,0.236349,5.15374,-0.764842,-6.10623e-16,5.79796,-1.11022e-15,-6.10623e-16,6.44218,1.66533e-16,-1.38778e-16,-6.44218,0.61877,0.449563,-5.79796,1.06833,1.06833,-5.15374,1.30468,1.79574,-4.50952,1.30468,2.56058,-3.86531,1.06833,3.28799,-3.22109,0.61877,3.90676,-2.57687,4.44089e-16,4.35633,-1.93265,-0.727408,4.59267,-1.28844,-1.49225,4.59267,-0.644218,-2.21966,4.35633,-3.55271e-15,-2.83843,3.90676,0.644218,-3.28799,3.28799,1.28844,-3.52434,2.56058,1.93265,-3.52434,1.79574,2.57687,-3.28799,1.06833,3.22109,-2.83843,0.449563,3.86531,-2.21966,1.05471e-15,4.50952,-1.49225,-0.236349,5.15374,-0.727408,-0.236349,5.79796,-1.11022e-15,8.88178e-16,6.44218,1.66533e-16,-1.38778e-16,-6.44218,0.449563,0.61877,-5.79796,0.685912,1.34618,-5.15374,0.685912,2.11102,-4.50952,0.449563,2.83843,-3.86531,3.33067e-16,3.4572,-3.22109,-0.61877,3.90676,-2.57687,-1.34618,4.14311,-1.93265,-2.11102,4.14311,-1.28844,-2.83843,3.90676,-0.644218,-3.4572,3.4572,-3.55271e-15,-3.90676,2.83843,0.644218,-4.14311,2.11102,1.28844,-4.14311,1.34618,1.93265,-3.90676,0.61877,2.57687,-3.4572,6.66134e-16,3.22109,-2.83843,-0.449563,3.86531,-2.11102,-0.685912,4.50952,-1.34618,-0.685912,5.15374,-0.61877,-0.449563,5.79796,-7.77156e-16,3.88578e-16,6.44218,1.66533e-16,-1.38778e-16,-6.44218,0.236349,0.727408,-5.79796,0.236349,1.49225,-5.15374,3.60822e-16,2.21966,-4.50952,-0.449563,2.83843,-3.86531,-1.06833,3.28799,-3.22109,-1.79574,3.52434,-2.57687,-2.56058,3.52434,-1.93265,-3.28799,3.28799,-1.28844,-3.90676,2.83843,-0.644218,-4.35633,2.21966,-3.55271e-15,-4.59267,1.49225,0.644218,-4.59267,0.727408,1.28844,-4.35633,1.44329e-15,1.93265,-3.90676,-0.61877,2.57687,-3.28799,-1.06833,3.22109,-2.56058,-1.30468,3.86531,-1.79574,-1.30468,4.50952,-1.06833,-1.06833,5.15374,-0.449563,-0.61877,5.79796,-9.99201e-16,1.22125e-15,6.44218,1.66533e-16,-1.38778e-16,-6.44218,2.13367e-16,0.764842,-5.79796,-0.236349,1.49225,-5.15374,-0.685912,2.11102,-4.50952,-1.30468,2.56058,-3.86531,-2.03209,2.79693,-3.22109,-2.79693,2.79693,-2.57687,-3.52434,2.56058,-1.93265,-4.14311,2.11102,-1.28844,-4.59267,1.49225,-0.644218,-4.82902,0.764842,-3.55271e-15,-4.82902,1.33227e-15,0.644218,-4.59267,-0.727408,1.28844,-4.14311,-1.34618,1.93265,-3.52434,-1.79574,2.57687,-2.79693,-2.03209,3.22109,-2.03209,-2.03209,3.86531,-1.30468,-1.79574,4.50952,-0.685912,-1.34618,5.15374,-0.236349,-0.727408,5.79796,-5.55112e-16,7.77156e-16,6.44218,1.66533e-16,-1.38778e-16,-6.44218,-0.236349,0.727408,-5.79796,-0.685912,1.34618,-5.15374,-1.30468,1.79574,-4.50952,-2.03209,2.03209,-3.86531,-2.79693,2.03209,-3.22109,-3.52434,1.79574,-2.57687,-4.14311,1.34618,-1.93265,-4.59267,0.727408,-1.28844,-4.82902,6.66134e-16,-0.644218,-4.82902,-0.764842,-3.55271e-15,-4.59267,-1.49225,0.644218,-4.14311,-2.11102,1.28844,-3.52434,-2.56058,1.93265,-2.79693,-2.79693,2.57687,-2.03209,-2.79693,3.22109,-1.30468,-2.56058,3.86531,-0.685912,-2.11102,4.50952,-0.236349,-1.49225,5.15374,-5.55112e-16,-0.764842,5.79796,-5.08278e-16,-2.22045e-16,6.44218,1.66533e-16,-1.38778e-16,-6.44218,-0.449563,0.61877,-5.79796,-1.06833,1.06833,-5.15374,-1.79574,1.30468,-4.50952,-2.56058,1.30468,-3.86531,-3.28799,1.06833,-3.22109,-3.90676,0.61877,-2.57687,-4.35633,5.55112e-16,-1.93265,-4.59267,-0.727408,-1.28844,-4.59267,-1.49225,-0.644218,-4.35633,-2.21966,-3.55271e-15,-3.90676,-2.83843,0.644218,-3.28799,-3.28799,1.28844,-2.56058,-3.52434,1.93265,-1.79574,-3.52434,2.57687,-1.06833,-3.28799,3.22109,-0.449563,-2.83843,3.86531,-9.99201e-16,-2.21966,4.50952,0.236349,-1.49225,5.15374,0.236349,-0.727408,5.79796,-8.04912e-16,3.33067e-16,6.44218,1.66533e-16,-1.38778e-16,-6.44218,-0.61877,0.449563,-5.79796,-1.34618,0.685912,-5.15374,-2.11102,0.685912,-4.50952,-2.83843,0.449563,-3.86531,-3.4572,5.55112e-16,-3.22109,-3.90676,-0.61877,-2.57687,-4.14311,-1.34618,-1.93265,-4.14311,-2.11102,-1.28844,-3.90676,-2.83843,-0.644218,-3.4572,-3.4572,-3.55271e-15,-2.83843,-3.90676,0.644218,-2.11102,-4.14311,1.28844,-1.34618,-4.14311,1.93265,-0.61877,-3.90676,2.57687,-7.77156e-16,-3.4572,3.22109,0.449563,-2.83843,3.86531,0.685912,-2.11102,4.50952,0.685912,-1.34618,5.15374,0.449563,-0.61877,5.79796,-6.66134e-16,2.22045e-16,6.44218,1.66533e-16,-1.38778e-16,-6.44218,-0.727408,0.236349,-5.79796,-1.49225,0.236349,-5.15374,-2.21966,4.44089e-16,-4.50952,-2.83843,-0.449563,-3.86531,-3.28799,-1.06833,-3.22109,-3.52434,-1.79574,-2.57687,-3.52434,-2.56058,-1.93265,-3.28799,-3.28799,-1.28844,-2.83843,-3.90676,-0.644218,-2.21966,-4.35633,-3.55271e-15,-1.49225,-4.59267,0.644218,-0.727408,-4.59267,1.28844,-1.11022e-15,-4.35633,1.93265,0.61877,-3.90676,2.57687,1.06833,-3.28799,3.22109,1.30468,-2.56058,3.86531,1.30468,-1.79574,4.50952,1.06833,-1.06833,5.15374,0.61877,-0.449563,5.79796,-6.66134e-16,6.10623e-16,6.44218,1.66533e-16,-1.38778e-16,-6.44218,-0.764842,-4.51117e-17,-5.79796,-1.49225,-0.236349,-5.15374,-2.11102,-0.685912,-4.50952,-2.56058,-1.30468,-3.86531,-2.79693,-2.03209,-3.22109,-2.79693,-2.79693,-2.57687,-2.56058,-3.52434,-1.93265,-2.11102,-4.14311,-1.28844,-1.49225,-4.59267,-0.644218,-0.764842,-4.82902,-3.55271e-15,-1.11022e-15,-4.82902,0.644218,0.727408,-4.59267,1.28844,1.34618,-4.14311,1.93265,1.79574,-3.52434,2.57687,2.03209,-2.79693,3.22109,2.03209,-2.03209,3.86531,1.79574,-1.30468,4.50952,1.34618,-0.685912,5.15374,0.727408,-0.236349,5.79796,-8.88178e-16,1.30451e-15,6.44218,1.66533e-16,-1.38778e-16,-6.44218,-0.727408,-0.236349,-5.79796,-1.34618,-0.685912,-5.15374,-1.79574,-1.30468,-4.50952,-2.03209,-2.03209,-3.86531,-2.03209,-2.79693,-3.22109,-1.79574,-3.52434,-2.57687,-1.34618,-4.14311,-1.93265,-0.727408,-4.59267,-1.28844,-7.77156e-16,-4.82902,-0.644218,0.764842,-4.82902,-3.55271e-15,1.49225,-4.59267,0.644218,2.11102,-4.14311,1.28844,2.56058,-3.52434,1.93265,2.79693,-2.79693,2.57687,2.79693,-2.03209,3.22109,2.56058,-1.30468,3.86531,2.11102,-0.685912,4.50952,1.49225,-0.236349,5.15374,0.764842,1.30451e-15,5.79796,-4.44089e-16,1.39818e-15,6.44218,1.66533e-16,-1.38778e-16,-6.44218,-0.61877,-0.449563,-5.79796,-1.06833,-1.06833,-5.15374,-1.30468,-1.79574,-4.50952,-1.30468,-2.56058,-3.86531,-1.06833,-3.28799,-3.22109,-0.61877,-3.90676,-2.57687,-6.66134e-16,-4.35633,-1.93265,0.727408,-4.59267,-1.28844,1.49225,-4.59267,-0.644218,2.21966,-4.35633,-3.55271e-15,2.83843,-3.90676,0.644218,3.28799,-3.28799,1.28844,3.52434,-2.56058,1.93265,3.52434,-1.79574,2.57687,3.28799,-1.06833,3.22109,2.83843,-0.449563,3.86531,2.21966,-2.77556e-16,4.50952,1.49225,0.236349,5.15374,0.727408,0.236349,5.79796,-4.44089e-16,3.05311e-16,6.44218,1.66533e-16,-1.38778e-16,-6.44218,-0.449563,-0.61877,-5.79796,-0.685912,-1.34618,-5.15374,-0.685912,-2.11102,-4.50952,-0.449563,-2.83843,-3.86531,-4.44089e-16,-3.4572,-3.22109,0.61877,-3.90676,-2.57687,1.34618,-4.14311,-1.93265,2.11102,-4.14311,-1.28844,2.83843,-3.90676,-0.644218,3.4572,-3.4572,-3.55271e-15,3.90676,-2.83843,0.644218,4.14311,-2.11102,1.28844,4.14311,-1.34618,1.93265,3.90676,-0.61877,2.57687,3.4572,-6.66134e-16,3.22109,2.83843,0.449563,3.86531,2.11102,0.685912,4.50952,1.34618,0.685912,5.15374,0.61877,0.449563,5.79796,-3.33067e-16,1.11022e-16,6.44218,1.66533e-16,-1.38778e-16,-6.44218,-0.236349,-0.727408,-5.79796,-0.236349,-1.49225,-5.15374,-2.77556e-16,-2.21966,-4.50952,0.449563,-2.83843,-3.86531,1.06833,-3.28799,-3.22109,1.79574,-3.52434,-2.57687,2.56058,-3.52434,-1.93265,3.28799,-3.28799,-1.28844,3.90676,-2.83843,-0.644218,4.35633,-2.21966,-3.55271e-15,4.59267,-1.49225,0.644218,4.59267,-0.727408,1.28844,4.35633,-5.55112e-16,1.93265,3.90676,0.61877,2.57687,3.28799,1.06833,3.22109,2.56058,1.30468,3.86531,1.79574,1.30468,4.50952,1.06833,1.06833,5.15374,0.449563,0.61877,5.79796,-6.10623e-16,1.11022e-16,6.44218,1.66533e-16,-1.38778e-16,-6.44218,2.60342e-17,-0.764842,-5.79796,0.236349,-1.49225,-5.15374,0.685912,-2.11102,-4.50952,1.30468,-2.56058,-3.86531,2.03209,-2.79693,-3.22109,2.79693,-2.79693,-2.57687,3.52434,-2.56058,-1.93265,4.14311,-2.11102,-1.28844,4.59267,-1.49225,-0.644218,4.82902,-0.764842,-3.55271e-15,4.82902,-1.11022e-15,0.644218,4.59267,0.727408,1.28844,4.14311,1.34618,1.93265,3.52434,1.79574,2.57687,2.79693,2.03209,3.22109,2.03209,2.03209,3.86531,1.30468,1.79574,4.50952,0.685912,1.34618,5.15374,0.236349,0.727408,5.79796,-1.58207e-15,-2.22045e-16,6.44218,1.66533e-16,-1.38778e-16,-6.44218,0.236349,-0.727408,-5.79796,0.685912,-1.34618,-5.15374,1.30468,-1.79574,-4.50952,2.03209,-2.03209,-3.86531,2.79693,-2.03209,-3.22109,3.52434,-1.79574,-2.57687,4.14311,-1.34618,-1.93265,4.59267,-0.727408,-1.28844,4.82902,-5.55112e-16,-0.644218,4.82902,0.764842,-3.55271e-15,4.59267,1.49225,0.644218,4.14311,2.11102,1.28844,3.52434,2.56058,1.93265,2.79693,2.79693,2.57687,2.03209,2.79693,3.22109,1.30468,2.56058,3.86531,0.685912,2.11102,4.50952,0.236349,1.49225,5.15374,-1.58207e-15,0.764842,5.79796,-1.72257e-15,8.88178e-16,6.44218,1.66533e-16,-1.38778e-16,-6.44218,0.449563,-0.61877,-5.79796,1.06833,-1.06833,-5.15374,1.79574,-1.30468,-4.50952,2.56058,-1.30468,-3.86531,3.28799,-1.06833,-3.22109,3.90676,-0.61877,-2.57687,4.35633,-5.55112e-16,-1.93265,4.59267,0.727408,-1.28844,4.59267,1.49225,-0.644218,4.35633,2.21966,-3.55271e-15,3.90676,2.83843,0.644218,3.28799,3.28799,1.28844,2.56058,3.52434,1.93265,1.79574,3.52434,2.57687,1.06833,3.28799,3.22109,0.449563,2.83843,3.86531,2.77556e-16,2.21966,4.50952,-0.236349,1.49225,5.15374,-0.236349,0.727408,5.79796,-1.66533e-16,5.55112e-16,6.44218,1.66533e-16,-1.38778e-16,-6.44218,0.61877,-0.449563,-5.79796,1.34618,-0.685912,-5.15374,2.11102,-0.685912,-4.50952,2.83843,-0.449563,-3.86531,3.4572,-4.996e-16,-3.22109,3.90676,0.61877,-2.57687,4.14311,1.34618,-1.93265,4.14311,2.11102,-1.28844,3.90676,2.83843,-0.644218,3.4572,3.4572,-3.55271e-15,2.83843,3.90676,0.644218,2.11102,4.14311,1.28844,1.34618,4.14311,1.93265,0.61877,3.90676,2.57687,-3.33067e-16,3.4572,3.22109,-0.449563,2.83843,3.86531,-0.685912,2.11102,4.50952,-0.685912,1.34618,5.15374,-0.449563,0.61877,5.79796,-8.88178e-16,6.66134e-16,6.44218,1.66533e-16,-1.38778e-16,-6.44218,0.727408,-0.236349,-5.79796,1.49225,-0.236349,-5.15374,2.21966,-3.05311e-16,-4.50952,2.83843,0.449563,-3.86531,3.28799,1.06833,-3.22109,3.52434,1.79574,-2.57687,3.52434,2.56058,-1.93265,3.28799,3.28799,-1.28844,2.83843,3.90676,-0.644218,2.21966,4.35633,-3.55271e-15,1.49225,4.59267,0.644218,0.727408,4.59267,1.28844,4.44089e-16,4.35633,1.93265,-0.61877,3.90676,2.57687,-1.06833,3.28799,3.22109,-1.30468,2.56058,3.86531,-1.30468,1.79574,4.50952,-1.06833,1.06833,5.15374,-0.61877,0.449563,5.79796,-4.44089e-16,1.66533e-16,6.44218]);
fieldValue90.children = new MFNode();

fieldValue90.children[0] = Coordinate91;

ProtoInstance88.fieldValue[1] = fieldValue90;

fieldValue fieldValue92 = createNode("fieldValue");
fieldValue92.name = "scale";
fieldValue92.value = "0.7";
ProtoInstance88.fieldValue[2] = fieldValue92;

ProtoBody87.children = new MFNode();

ProtoBody87.children[0] = ProtoInstance88;

ProtoDeclare86.protoBody = ProtoBody87;

children[3] = ProtoDeclare86;

Viewpoint Viewpoint93 = createNode("Viewpoint");
Viewpoint93.description = "front";
children[4] = Viewpoint93;

Viewpoint Viewpoint94 = createNode("Viewpoint");
Viewpoint94.DEF = "RIGHT_1";
Viewpoint94.description = "right_front";
Viewpoint94.position = new SFVec3f(new float[7,0,7]);
Viewpoint94.orientation = new SFRotation(new float[0,1,0,0.785]);
children[5] = Viewpoint94;

Viewpoint Viewpoint95 = createNode("Viewpoint");
Viewpoint95.DEF = "RIGHT_2";
Viewpoint95.description = "right";
Viewpoint95.position = new SFVec3f(new float[10,0,0]);
Viewpoint95.orientation = new SFRotation(new float[0,1,0,1.57]);
children[6] = Viewpoint95;

Viewpoint Viewpoint96 = createNode("Viewpoint");
Viewpoint96.DEF = "RIGHT";
Viewpoint96.description = "right_back";
Viewpoint96.position = new SFVec3f(new float[7,0,-7]);
Viewpoint96.orientation = new SFRotation(new float[0,1,0,2.356]);
children[7] = Viewpoint96;

Viewpoint Viewpoint97 = createNode("Viewpoint");
Viewpoint97.description = "back";
Viewpoint97.position = new SFVec3f(new float[0,0,-10]);
Viewpoint97.orientation = new SFRotation(new float[0,1,0,3.1415]);
children[8] = Viewpoint97;

Viewpoint Viewpoint98 = createNode("Viewpoint");
Viewpoint98.DEF = "LEFT";
Viewpoint98.description = "left";
Viewpoint98.position = new SFVec3f(new float[-10,0,0]);
Viewpoint98.orientation = new SFRotation(new float[0,-1,0,1.57]);
children[9] = Viewpoint98;

Viewpoint Viewpoint99 = createNode("Viewpoint");
Viewpoint99.DEF = "BOTTOM";
Viewpoint99.description = "bottom";
Viewpoint99.position = new SFVec3f(new float[0,-10,0]);
Viewpoint99.orientation = new SFRotation(new float[1,0,0,1.57]);
children[10] = Viewpoint99;

NavigationInfo NavigationInfo100 = createNode("NavigationInfo");
NavigationInfo100.type = new MFString(new java.lang.String["EXAMINE"]);
children[11] = NavigationInfo100;

Transform Transform101 = createNode("Transform");
Transform101.DEF = "SHAPE";
Shape Shape102 = createNode("Shape");
Shape102.DEF = "PART";
Appearance Appearance103 = createNode("Appearance");
Appearance103.DEF = "APPEARANCE";
Material Material104 = createNode("Material");
Material104.diffuseColor = new SFColor(new float[1,1,1]);
Material104.specularColor = new SFColor(new float[1,1,0]);
Appearance103.material = Material104;

ImageTexture ImageTexture105 = createNode("ImageTexture");
ImageTexture105.url = new MFString(new java.lang.String["http://bulatov.org/vrml/siggraph99/texture11.jpg"]);
Appearance103.texture = ImageTexture105;

TextureTransform TextureTransform106 = createNode("TextureTransform");
TextureTransform106.DEF = "TTRANS";
TextureTransform106.translation = new SFVec2f(new float[0,-24.9558]);
TextureTransform106.rotation = 1.57;
Appearance103.textureTransform = TextureTransform106;

Shape102.appearance = Appearance103;

ProtoInstance ProtoInstance107 = createNode("ProtoInstance");
ProtoInstance107.name = "Shape99";
ProtoInstance107.DEF = "SHAPE99";
Shape102.geometry = ProtoInstance107;

Transform101.child = new undefined();

Transform101.child[0] = Shape102;

Transform Transform108 = createNode("Transform");
Transform108.rotation = new SFRotation(new float[0,0,1,3.1415]);
Shape Shape109 = createNode("Shape");
Shape109.USE = "PART";
Transform108.child = new undefined();

Transform108.child[0] = Shape109;

Transform101.children[1] = Transform108;

Viewpoint Viewpoint110 = createNode("Viewpoint");
Viewpoint110.DEF = "MOVING_VIEW";
Viewpoint110.description = "moving";
Transform101.children[2] = Viewpoint110;

children[12] = Transform101;

Transform Transform111 = createNode("Transform");
Transform111.rotation = new SFRotation(new float[1,0,0,1.5708]);
Shape Shape112 = createNode("Shape");
Appearance Appearance113 = createNode("Appearance");
Appearance113.USE = "APPEARANCE";
Shape112.appearance = Appearance113;

Transform111.child = new undefined();

Transform111.child[0] = Shape112;

children[13] = Transform111;

ProximitySensor ProximitySensor114 = createNode("ProximitySensor");
ProximitySensor114.DEF = "PROXI";
ProximitySensor114.size = new SFVec3f(new float[1000,1000,1000]);
children[14] = ProximitySensor114;

Script Script115 = createNode("Script");
Script115.DEF = "PROXI_SCRIPT";
field field116 = createNode("field");
field116.name = "set_orientation";
field116.accessType = "inputOnly";
field116.type = "SFRotation";
Script115.field = new MFNode();

Script115.field[0] = field116;

field field117 = createNode("field");
field117.name = "set_position";
field117.accessType = "inputOnly";
field117.type = "SFVec3f";
Script115.field[1] = field117;


Script115.setSourceCode(`javascript:\n"+
"    function set_position(v){\n"+
"	//trace('pos: ' + v);\n"+
"    }\n"+
"    function set_orientation(v){\n"+
"	//trace('orient: '+ v);\n"+
"    }`)
children[15] = Script115;

TimeSensor TimeSensor118 = createNode("TimeSensor");
TimeSensor118.DEF = "TIMER_1";
TimeSensor118.loop = True;
children[16] = TimeSensor118;

Script Script119 = createNode("Script");
Script119.DEF = "VIEWPOINT_SCRIPT";
Script119.directOutput = True;
field field120 = createNode("field");
field120.name = "set_time";
field120.accessType = "inputOnly";
field120.type = "SFTime";
Script119.field = new MFNode();

Script119.field[0] = field120;

field field121 = createNode("field");
field121.name = "set_bound";
field121.accessType = "inputOnly";
field121.type = "SFBool";
Script119.field[1] = field121;

field field122 = createNode("field");
field122.name = "viewpoint";
field122.accessType = "initializeOnly";
field122.type = "SFNode";
Viewpoint Viewpoint123 = createNode("Viewpoint");
Viewpoint123.USE = "MOVING_VIEW";
field122.children = new MFNode();

field122.children[0] = Viewpoint123;

Script119.field[2] = field122;

field field124 = createNode("field");
field124.name = "t0";
field124.accessType = "initializeOnly";
field124.type = "SFTime";
Script119.field[3] = field124;

field field125 = createNode("field");
field125.name = "position";
field125.accessType = "initializeOnly";
field125.type = "SFVec3f";
field125.value = "0 0 10";
Script119.field[4] = field125;

field field126 = createNode("field");
field126.name = "orientation";
field126.accessType = "initializeOnly";
field126.type = "SFRotation";
Script119.field[5] = field126;

field field127 = createNode("field");
field127.name = "dir0";
field127.accessType = "initializeOnly";
field127.type = "SFVec3f";
field127.value = "0 0 -1";
Script119.field[6] = field127;

field field128 = createNode("field");
field128.name = "up0";
field128.accessType = "initializeOnly";
field128.type = "SFVec3f";
field128.value = "0 1 0";
Script119.field[7] = field128;

field field129 = createNode("field");
field129.name = "direction";
field129.accessType = "initializeOnly";
field129.type = "SFVec3f";
field129.value = "0 0 -1";
Script119.field[8] = field129;

field field130 = createNode("field");
field130.name = "look_at";
field130.accessType = "initializeOnly";
field130.type = "SFVec3f";
Script119.field[9] = field130;

field field131 = createNode("field");
field131.name = "up";
field131.accessType = "initializeOnly";
field131.type = "SFVec3f";
Script119.field[10] = field131;

field field132 = createNode("field");
field132.name = "isActive";
field132.accessType = "initializeOnly";
field132.type = "SFBool";
Script119.field[11] = field132;

field field133 = createNode("field");
field133.name = "isCosmo";
field133.accessType = "initializeOnly";
field133.type = "SFBool";
field133.value = "true";
Script119.field[12] = field133;


Script119.setSourceCode(`javascript:\n"+
"\n"+
"\n"+
"  function set_time(val,time){\n"+
"      if(t0 == 0){\n"+
"	  t0 = time;\n"+
"      }\n"+
"    dt = val - t0;\n"+
"    delay = 0.1; height = 0.3;\n"+
"    look_at = getPosition(dt);\n"+
"    position = getPosition(dt-delay);\n"+
"    position.z += height;\n"+
"    up.x = 0; up.y = 0; up.z = 1;\n"+
"\n"+
"    viewpoint.set_position = position;\n"+
"    var rot = getOrientation(position, look_at, up);\n"+
"    viewpoint.set_orientation = rot;    \n"+
"  }\n"+
"\n"+
"  function set_bound(val, time){\n"+
"    trace('set_bound(' + val + ') ');\n"+
"    isActive = val;\n"+
"    t0 = time;\n"+
"  }`)
children[17] = Script119;

Script Script134 = createNode("Script");
Script134.DEF = "MAIN";
Script134.directOutput = True;
field field135 = createNode("field");
field135.name = "set_time";
field135.accessType = "inputOnly";
field135.type = "SFTime";
Script134.field = new MFNode();

Script134.field[0] = field135;

field field136 = createNode("field");
field136.name = "ttrans";
field136.accessType = "initializeOnly";
field136.type = "SFNode";
TextureTransform TextureTransform137 = createNode("TextureTransform");
TextureTransform137.USE = "TTRANS";
field136.children = new MFNode();

field136.children[0] = TextureTransform137;

Script134.field[1] = field136;

field field138 = createNode("field");
field138.name = "t0";
field138.accessType = "initializeOnly";
field138.type = "SFTime";
field138.value = "1444306820.66995";
Script134.field[2] = field138;

field field139 = createNode("field");
field139.name = "shape";
field139.accessType = "initializeOnly";
field139.type = "SFNode";
Transform Transform140 = createNode("Transform");
Transform140.USE = "SHAPE";
field139.children = new MFNode();

field139.children[0] = Transform140;

Script134.field[3] = field139;

field field141 = createNode("field");
field141.name = "rotation";
field141.accessType = "initializeOnly";
field141.type = "SFRotation";
Script134.field[4] = field141;


Script134.setSourceCode(`javascript:\n"+
"  function set_time(val){\n"+
"    if(t0 == 0){\n"+
"      t0 = val;\n"+
"    }\n"+
"    dt = val - t0;\n"+
"    var fi = -dt*0.2-0.2;\n"+
"    ttrans.set_translation = new SFVec2f(0,fi);\n"+
"    //rotation.angle = -Math.PI*fi;\n"+
"    //shape.set_rotation = rotation;\n"+
"  }`)
children[18] = Script134;

Transform Transform142 = createNode("Transform");
Transform142.DEF = "TR1";
Transform142.rotation = new SFRotation(new float[0,1,0,0.395706]);
Transform Transform143 = createNode("Transform");
Transform143.DEF = "TR2";
Transform143.translation = new SFVec3f(new float[0,0,10]);
Transform143.rotation = new SFRotation(new float[1,0,0,5.3245]);
Transform143.scale = new SFVec3f(new float[6,6,5]);
Shape Shape144 = createNode("Shape");
Appearance Appearance145 = createNode("Appearance");
Appearance145.DEF = "APP";
Material Material146 = createNode("Material");
Material146.diffuseColor = new SFColor(new float[0.3,0.5,0.9]);
Material146.specularColor = new SFColor(new float[0.7,0.7,0.3]);
Appearance145.material = Material146;

Shape144.appearance = Appearance145;

ProtoInstance ProtoInstance147 = createNode("ProtoInstance");
ProtoInstance147.name = "IFS";
Shape144.geometry = ProtoInstance147;

Transform143.child = new undefined();

Transform143.child[0] = Shape144;

Transform142.children = new MFNode();

Transform142.children[0] = Transform143;

children[19] = Transform142;

TimeSensor TimeSensor148 = createNode("TimeSensor");
TimeSensor148.DEF = "TIMER_R1";
TimeSensor148.cycleInterval = 60;
TimeSensor148.loop = True;
children[20] = TimeSensor148;

TimeSensor TimeSensor149 = createNode("TimeSensor");
TimeSensor149.DEF = "TIMER_R2";
TimeSensor149.cycleInterval = 67;
TimeSensor149.loop = True;
children[21] = TimeSensor149;

OrientationInterpolator OrientationInterpolator150 = createNode("OrientationInterpolator");
OrientationInterpolator150.DEF = "BACKGROUND_INTERP1";
OrientationInterpolator150.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator150.keyValue = new MFRotation(new float[0,0,1,0,0,1,0,3.1415,0,0,1,0]);
children[22] = OrientationInterpolator150;

OrientationInterpolator OrientationInterpolator151 = createNode("OrientationInterpolator");
OrientationInterpolator151.DEF = "BACKGROUND_INTERP2";
OrientationInterpolator151.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator151.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,3.1415,0,0,1,0]);
children[23] = OrientationInterpolator151;

ROUTE ROUTE152 = createNode("ROUTE");
ROUTE152.fromNode = "PROXI";
ROUTE152.fromField = "position_changed";
ROUTE152.toNode = "PROXI_SCRIPT";
ROUTE152.toField = "set_position";
children[24] = ROUTE152;

ROUTE ROUTE153 = createNode("ROUTE");
ROUTE153.fromNode = "PROXI";
ROUTE153.fromField = "orientation_changed";
ROUTE153.toNode = "PROXI_SCRIPT";
ROUTE153.toField = "set_orientation";
children[25] = ROUTE153;

ROUTE ROUTE154 = createNode("ROUTE");
ROUTE154.fromNode = "SHAPE99";
ROUTE154.fromField = "position_changed";
ROUTE154.toNode = "MOVING_VIEW";
ROUTE154.toField = "set_position";
children[26] = ROUTE154;

ROUTE ROUTE155 = createNode("ROUTE");
ROUTE155.fromNode = "SHAPE99";
ROUTE155.fromField = "orientation_changed";
ROUTE155.toNode = "MOVING_VIEW";
ROUTE155.toField = "set_orientation";
children[27] = ROUTE155;

ROUTE ROUTE156 = createNode("ROUTE");
ROUTE156.fromNode = "TIMER_1";
ROUTE156.fromField = "time";
ROUTE156.toNode = "MAIN";
ROUTE156.toField = "set_time";
children[28] = ROUTE156;

ROUTE ROUTE157 = createNode("ROUTE");
ROUTE157.fromNode = "TIMER_R1";
ROUTE157.fromField = "fraction_changed";
ROUTE157.toNode = "BACKGROUND_INTERP1";
ROUTE157.toField = "set_fraction";
children[29] = ROUTE157;

ROUTE ROUTE158 = createNode("ROUTE");
ROUTE158.fromNode = "TIMER_R2";
ROUTE158.fromField = "fraction_changed";
ROUTE158.toNode = "BACKGROUND_INTERP2";
ROUTE158.toField = "set_fraction";
children[30] = ROUTE158;

ROUTE ROUTE159 = createNode("ROUTE");
ROUTE159.fromNode = "BACKGROUND_INTERP1";
ROUTE159.fromField = "value_changed";
ROUTE159.toNode = "TR1";
ROUTE159.toField = "set_rotation";
children[31] = ROUTE159;

ROUTE ROUTE160 = createNode("ROUTE");
ROUTE160.fromNode = "BACKGROUND_INTERP2";
ROUTE160.fromField = "value_changed";
ROUTE160.toNode = "TR2";
ROUTE160.toField = "set_rotation";
children[32] = ROUTE160;

}
