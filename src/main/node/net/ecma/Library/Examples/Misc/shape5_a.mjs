'use strict';
var X3D = require('./x3d.mjs');
try {
	var fs = require('fs');
} catch (e) {
console.log("Problems loading fs. On browser?",e);
}
var SFString = require('./x3d.mjs');
var SFNode = require('./x3d.mjs');
var head = require('./x3d.mjs');
var MFNode = require('./x3d.mjs');
var meta = require('./x3d.mjs');
var Scene = require('./x3d.mjs');
var ProtoDeclare = require('./x3d.mjs');
var ProtoInterface = require('./x3d.mjs');
var field = require('./x3d.mjs');
var ProtoBody = require('./x3d.mjs');
var Extrusion = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var MFVec2f = require('./x3d.mjs');
var TimeSensor = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var CoordinateInterpolator = require('./x3d.mjs');
var MFFloat = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
var Script = require('./x3d.mjs');
var IS = require('./x3d.mjs');
var connect = require('./x3d.mjs');
var ROUTE = require('./x3d.mjs');
var Group = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var Cylinder = require('./x3d.mjs');
var SFRotation = require('./x3d.mjs');
var Coordinate = require('./x3d.mjs');
var IndexedFaceSet = require('./x3d.mjs');
var ProtoInstance = require('./x3d.mjs');
var fieldValue = require('./x3d.mjs');
var Viewpoint = require('./x3d.mjs');
var NavigationInfo = require('./x3d.mjs');
var ImageTexture = require('./x3d.mjs');
var MFString = require('./x3d.mjs');
var TextureTransform = require('./x3d.mjs');
var SFVec2f = require('./x3d.mjs');
var ProximitySensor = require('./x3d.mjs');
var SFTime = require('./x3d.mjs');
var OrientationInterpolator = require('./x3d.mjs');
var MFRotation = require('./x3d.mjs');
var X3D0 =  new X3D({

      profile : new SFString("Full"),
      version : new SFString("3.3"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("comment"),
              content : new SFString("World of Titania")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("Thu, 08 Oct 2015 12:22:24 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V1.1.1, http://titania.create3000.de")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Thu, 08 Oct 2015 12:22:24 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new ProtoDeclare({
              name : new SFString("Shape99"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("orientation_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("position_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Extrusion({
                      DEF : new SFString("EXT"),
                      creaseAngle : new SFFloat(1),
                      crossSection : new MFVec2f([0.1,0.1,0.1,-0.1,-0.1,-0.1,-0.1,0.1,0.1,0.1])}),

                    new TimeSensor({
                      DEF : new SFString("TIMER"),
                      loop : new SFBool(true)}),

                    new CoordinateInterpolator({
                      DEF : new SFString("INTERP"),
                      key : new MFFloat([0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]),
                      keyValue : new MFVec3f([0,0,0,0.1,0.1,0.1,0.2,0.2,0.2,0.3,0.3,0.3,0.4,0.4,0.4,0.5,0.5,0.5,0.6,0.6,0.6,0.7,0.7,0.7,0.8,0.8,0.8,0.9,0.9,0.9,1,1,1])}),

                    new Script({
                      DEF : new SFString("SHAPE_SCRIPT"),
                      directOutput : new SFBool(true),
                      field : new MFNode([
                        new field({
                          type : field.TYPE_SFROTATION,
                          name : new SFString("orientation_changed"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_SFVEC3F,
                          name : new SFString("position_changed"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("set_time"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_MFVEC3F,
                          name : new SFString("set_spine"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFNODE,
                          name : new SFString("ext"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          children : new MFNode([
                            new Extrusion({
                              USE : new SFString("EXT")})])}),

                        new field({
                          type : field.TYPE_SFNODE,
                          name : new SFString("interp"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          children : new MFNode([
                            new CoordinateInterpolator({
                              USE : new SFString("INTERP")})])}),

                        new field({
                          type : field.TYPE_MFINT32,
                          name : new SFString("index"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_MFVEC3F,
                          name : new SFString("coord"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_MFVEC3F,
                          name : new SFString("coord_a"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_MFVEC2F,
                          name : new SFString("scale"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_MFVEC3F,
                          name : new SFString("coeff"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          value : new SFString("1 1 0 -3 0.74326 1.11184 5 -0.12904 -0.1692 -7 -0.8068 -0.6271 -11 -0.28189 -0.17907 -15 -0.06295 0.04387")}),

                        new field({
                          type : field.TYPE_SFINT32,
                          name : new SFString("N"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          value : new SFString("128")}),

                        new field({
                          type : field.TYPE_SFINT32,
                          name : new SFString("n"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          value : new SFString("4")}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("r"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          value : new SFString("0.3")}),

                        new field({
                          type : field.TYPE_MFVEC2F,
                          name : new SFString("cs"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("delay"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("t0"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("isCosmo"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          value : new SFString("true")}),

                        new field({
                          type : field.TYPE_SFVEC3F,
                          name : new SFString("position"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          value : new SFString("0 0 10")}),

                        new field({
                          type : field.TYPE_SFROTATION,
                          name : new SFString("orientation"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFVEC3F,
                          name : new SFString("dir0"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          value : new SFString("0 0 -1")}),

                        new field({
                          type : field.TYPE_SFVEC3F,
                          name : new SFString("up0"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          value : new SFString("0 1 0")}),

                        new field({
                          type : field.TYPE_SFVEC3F,
                          name : new SFString("up"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          value : new SFString("0 0 1")}),

                        new field({
                          type : field.TYPE_SFVEC3F,
                          name : new SFString("look_at"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("y0"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("z0"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFINT32,
                          name : new SFString("variable"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          value : new SFString("3")}),

                        new field({
                          type : field.TYPE_SFINT32,
                          name : new SFString("Nkeys"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          value : new SFString("17")}),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("orientation_changed"),
                              protoField : new SFString("orientation_changed")}),

                            new connect({
                              nodeField : new SFString("position_changed"),
                              protoField : new SFString("position_changed")})])})]),
                      javascript:

      // makes camera orientation from 
      // camera position, look_at point and up-vector

      , function getOrientation(pos, look, up){
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

       , function makeVector1(t, c){
	   ro = 2;
	   c.x = ro*Math.cos(t);
	   c.y = ro*Math.sin(t);
	   c.z = 0;
       }

        , function makeVector(t, c){
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

        , function makeVector2(t, c){
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

        , function initialize(time){

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

       , function init(){
          for(i = 0; i <=N; i++){
            t = i/N*Math.PI*2;
            makeVector(t,coord[i]);
          }        
          ext.set_spine = coord;
       }

       , function set_time(val){
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

       , function set_spine(value){
	   //trace(value[0]);
       })}),

                    new ROUTE({
                      fromNode : new SFString("TIMER"),
                      fromField : new SFString("time"),
                      toNode : new SFString("SHAPE_SCRIPT"),
                      toField : new SFString("set_time")}),

                    new ROUTE({
                      fromNode : new SFString("INTERP"),
                      fromField : new SFString("value_changed"),
                      toNode : new SFString("EXT"),
                      toField : new SFString("set_spine")}),

                    new ROUTE({
                      fromNode : new SFString("INTERP"),
                      fromField : new SFString("value_changed"),
                      toNode : new SFString("SHAPE_SCRIPT"),
                      toField : new SFString("set_spine")})])}))}),

            new ProtoDeclare({
              name : new SFString("Axes"),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Group({
                      children : new MFNode([
                        new Transform({
                          DEF : new SFString("Y"),
                          translation : new SFVec3f([0,0.2,0]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      diffuseColor : new SFColor([1,1,0]),
                                      specularColor : new SFColor([1,1,0])}))})),
                              geometry : new SFNode(
                                new Cylinder({
                                  height : new SFFloat(0.4),
                                  radius : new SFFloat(0.05)}))})])}),

                        new Transform({
                          rotation : new SFRotation([0,0,-1,1.5708]),
                          children : new MFNode([
                            new Transform({
                              USE : new SFString("Y")})])}),

                        new Transform({
                          rotation : new SFRotation([1,0,0,1.5708]),
                          children : new MFNode([
                            new Transform({
                              USE : new SFString("Y")})])})])})])}))}),

            new ProtoDeclare({
              name : new SFString("IndexedPolySet"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_MFINT32,
                      name : new SFString("coordIndex"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                    new field({
                      type : field.TYPE_SFNODE,
                      name : new SFString("coord"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      children : new MFNode([
                        new Coordinate({
                          DEF : new SFString("_1")})])}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("scale"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("0.9")})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new IndexedFaceSet({
                      DEF : new SFString("IFS"),
                      solid : new SFBool(false),
                      coord : new SFNode(
                        new Coordinate({}))}),

                    new Script({
                      DEF : new SFString("IndexedPolySet"),
                      field : new MFNode([
                        new field({
                          type : field.TYPE_MFINT32,
                          name : new SFString("coordIndex"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFNODE,
                          name : new SFString("coord"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFNODE,
                          name : new SFString("ifs"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          children : new MFNode([
                            new IndexedFaceSet({
                              USE : new SFString("IFS")})])}),

                        new field({
                          type : field.TYPE_MFINT32,
                          name : new SFString("ci"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_MFVEC3F,
                          name : new SFString("vertex"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("scale"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("coordIndex"),
                              protoField : new SFString("coordIndex")}),

                            new connect({
                              nodeField : new SFString("coord"),
                              protoField : new SFString("coord")}),

                            new connect({
                              nodeField : new SFString("scale"),
                              protoField : new SFString("scale")})])})]),
                      javascript:

	, function initialize(){

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
	})})])}))}),

            new ProtoDeclare({
              name : new SFString("IFS"),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("IndexedPolySet"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("coordIndex"),
                          value : new SFString("21 22 2 1 -1 22 23 3 2 -1 23 24 4 3 -1 24 25 5 4 -1 25 26 6 5 -1 26 27 7 6 -1 27 28 8 7 -1 28 29 9 8 -1 29 30 10 9 -1 30 31 11 10 -1 31 32 12 11 -1 32 33 13 12 -1 33 34 14 13 -1 34 35 15 14 -1 35 36 16 15 -1 36 37 17 16 -1 37 38 18 17 -1 38 39 19 18 -1 39 40 20 19 -1 42 43 23 22 -1 43 44 24 23 -1 44 45 25 24 -1 45 46 26 25 -1 46 47 27 26 -1 47 48 28 27 -1 48 49 29 28 -1 49 50 30 29 -1 50 51 31 30 -1 51 52 32 31 -1 52 53 33 32 -1 53 54 34 33 -1 54 55 35 34 -1 55 56 36 35 -1 56 57 37 36 -1 57 58 38 37 -1 58 59 39 38 -1 59 60 40 39 -1 60 61 41 40 -1 63 64 44 43 -1 64 65 45 44 -1 65 66 46 45 -1 66 67 47 46 -1 67 68 48 47 -1 68 69 49 48 -1 69 70 50 49 -1 70 71 51 50 -1 71 72 52 51 -1 72 73 53 52 -1 73 74 54 53 -1 74 75 55 54 -1 75 76 56 55 -1 76 77 57 56 -1 77 78 58 57 -1 78 79 59 58 -1 79 80 60 59 -1 80 81 61 60 -1 81 82 62 61 -1 84 85 65 64 -1 85 86 66 65 -1 86 87 67 66 -1 87 88 68 67 -1 88 89 69 68 -1 89 90 70 69 -1 90 91 71 70 -1 91 92 72 71 -1 92 93 73 72 -1 93 94 74 73 -1 94 95 75 74 -1 95 96 76 75 -1 96 97 77 76 -1 97 98 78 77 -1 98 99 79 78 -1 99 100 80 79 -1 100 101 81 80 -1 101 102 82 81 -1 102 103 83 82 -1 105 106 86 85 -1 106 107 87 86 -1 107 108 88 87 -1 108 109 89 88 -1 109 110 90 89 -1 110 111 91 90 -1 111 112 92 91 -1 112 113 93 92 -1 113 114 94 93 -1 114 115 95 94 -1 115 116 96 95 -1 116 117 97 96 -1 117 118 98 97 -1 118 119 99 98 -1 119 120 100 99 -1 120 121 101 100 -1 121 122 102 101 -1 122 123 103 102 -1 123 124 104 103 -1 126 127 107 106 -1 127 128 108 107 -1 128 129 109 108 -1 129 130 110 109 -1 130 131 111 110 -1 131 132 112 111 -1 132 133 113 112 -1 133 134 114 113 -1 134 135 115 114 -1 135 136 116 115 -1 136 137 117 116 -1 137 138 118 117 -1 138 139 119 118 -1 139 140 120 119 -1 140 141 121 120 -1 141 142 122 121 -1 142 143 123 122 -1 143 144 124 123 -1 144 145 125 124 -1 147 148 128 127 -1 148 149 129 128 -1 149 150 130 129 -1 150 151 131 130 -1 151 152 132 131 -1 152 153 133 132 -1 153 154 134 133 -1 154 155 135 134 -1 155 156 136 135 -1 156 157 137 136 -1 157 158 138 137 -1 158 159 139 138 -1 159 160 140 139 -1 160 161 141 140 -1 161 162 142 141 -1 162 163 143 142 -1 163 164 144 143 -1 164 165 145 144 -1 165 166 146 145 -1 168 169 149 148 -1 169 170 150 149 -1 170 171 151 150 -1 171 172 152 151 -1 172 173 153 152 -1 173 174 154 153 -1 174 175 155 154 -1 175 176 156 155 -1 176 177 157 156 -1 177 178 158 157 -1 178 179 159 158 -1 179 180 160 159 -1 180 181 161 160 -1 181 182 162 161 -1 182 183 163 162 -1 183 184 164 163 -1 184 185 165 164 -1 185 186 166 165 -1 186 187 167 166 -1 189 190 170 169 -1 190 191 171 170 -1 191 192 172 171 -1 192 193 173 172 -1 193 194 174 173 -1 194 195 175 174 -1 195 196 176 175 -1 196 197 177 176 -1 197 198 178 177 -1 198 199 179 178 -1 199 200 180 179 -1 200 201 181 180 -1 201 202 182 181 -1 202 203 183 182 -1 203 204 184 183 -1 204 205 185 184 -1 205 206 186 185 -1 206 207 187 186 -1 207 208 188 187 -1 210 211 191 190 -1 211 212 192 191 -1 212 213 193 192 -1 213 214 194 193 -1 214 215 195 194 -1 215 216 196 195 -1 216 217 197 196 -1 217 218 198 197 -1 218 219 199 198 -1 219 220 200 199 -1 220 221 201 200 -1 221 222 202 201 -1 222 223 203 202 -1 223 224 204 203 -1 224 225 205 204 -1 225 226 206 205 -1 226 227 207 206 -1 227 228 208 207 -1 228 229 209 208 -1 231 232 212 211 -1 232 233 213 212 -1 233 234 214 213 -1 234 235 215 214 -1 235 236 216 215 -1 236 237 217 216 -1 237 238 218 217 -1 238 239 219 218 -1 239 240 220 219 -1 240 241 221 220 -1 241 242 222 221 -1 242 243 223 222 -1 243 244 224 223 -1 244 245 225 224 -1 245 246 226 225 -1 246 247 227 226 -1 247 248 228 227 -1 248 249 229 228 -1 249 250 230 229 -1 252 253 233 232 -1 253 254 234 233 -1 254 255 235 234 -1 255 256 236 235 -1 256 257 237 236 -1 257 258 238 237 -1 258 259 239 238 -1 259 260 240 239 -1 260 261 241 240 -1 261 262 242 241 -1 262 263 243 242 -1 263 264 244 243 -1 264 265 245 244 -1 265 266 246 245 -1 266 267 247 246 -1 267 268 248 247 -1 268 269 249 248 -1 269 270 250 249 -1 270 271 251 250 -1 273 274 254 253 -1 274 275 255 254 -1 275 276 256 255 -1 276 277 257 256 -1 277 278 258 257 -1 278 279 259 258 -1 279 280 260 259 -1 280 281 261 260 -1 281 282 262 261 -1 282 283 263 262 -1 283 284 264 263 -1 284 285 265 264 -1 285 286 266 265 -1 286 287 267 266 -1 287 288 268 267 -1 288 289 269 268 -1 289 290 270 269 -1 290 291 271 270 -1 291 292 272 271 -1 294 295 275 274 -1 295 296 276 275 -1 296 297 277 276 -1 297 298 278 277 -1 298 299 279 278 -1 299 300 280 279 -1 300 301 281 280 -1 301 302 282 281 -1 302 303 283 282 -1 303 304 284 283 -1 304 305 285 284 -1 305 306 286 285 -1 306 307 287 286 -1 307 308 288 287 -1 308 309 289 288 -1 309 310 290 289 -1 310 311 291 290 -1 311 312 292 291 -1 312 313 293 292 -1 315 316 296 295 -1 316 317 297 296 -1 317 318 298 297 -1 318 319 299 298 -1 319 320 300 299 -1 320 321 301 300 -1 321 322 302 301 -1 322 323 303 302 -1 323 324 304 303 -1 324 325 305 304 -1 325 326 306 305 -1 326 327 307 306 -1 327 328 308 307 -1 328 329 309 308 -1 329 330 310 309 -1 330 331 311 310 -1 331 332 312 311 -1 332 333 313 312 -1 333 334 314 313 -1 336 337 317 316 -1 337 338 318 317 -1 338 339 319 318 -1 339 340 320 319 -1 340 341 321 320 -1 341 342 322 321 -1 342 343 323 322 -1 343 344 324 323 -1 344 345 325 324 -1 345 346 326 325 -1 346 347 327 326 -1 347 348 328 327 -1 348 349 329 328 -1 349 350 330 329 -1 350 351 331 330 -1 351 352 332 331 -1 352 353 333 332 -1 353 354 334 333 -1 354 355 335 334 -1 357 358 338 337 -1 358 359 339 338 -1 359 360 340 339 -1 360 361 341 340 -1 361 362 342 341 -1 362 363 343 342 -1 363 364 344 343 -1 364 365 345 344 -1 365 366 346 345 -1 366 367 347 346 -1 367 368 348 347 -1 368 369 349 348 -1 369 370 350 349 -1 370 371 351 350 -1 371 372 352 351 -1 372 373 353 352 -1 373 374 354 353 -1 374 375 355 354 -1 375 376 356 355 -1 378 379 359 358 -1 379 380 360 359 -1 380 381 361 360 -1 381 382 362 361 -1 382 383 363 362 -1 383 384 364 363 -1 384 385 365 364 -1 385 386 366 365 -1 386 387 367 366 -1 387 388 368 367 -1 388 389 369 368 -1 389 390 370 369 -1 390 391 371 370 -1 391 392 372 371 -1 392 393 373 372 -1 393 394 374 373 -1 394 395 375 374 -1 395 396 376 375 -1 396 397 377 376 -1 399 400 380 379 -1 400 401 381 380 -1 401 402 382 381 -1 402 403 383 382 -1 403 404 384 383 -1 404 405 385 384 -1 405 406 386 385 -1 406 407 387 386 -1 407 408 388 387 -1 408 409 389 388 -1 409 410 390 389 -1 410 411 391 390 -1 411 412 392 391 -1 412 413 393 392 -1 413 414 394 393 -1 414 415 395 394 -1 415 416 396 395 -1 416 417 397 396 -1 417 418 398 397 -1 0 1 401 400 -1 1 2 402 401 -1 2 3 403 402 -1 3 4 404 403 -1 4 5 405 404 -1 5 6 406 405 -1 6 7 407 406 -1 7 8 408 407 -1 8 9 409 408 -1 9 10 410 409 -1 10 11 411 410 -1 11 12 412 411 -1 12 13 413 412 -1 13 14 414 413 -1 14 15 415 414 -1 15 16 416 415 -1 16 17 417 416 -1 17 18 418 417 -1 18 19 419 418 -1")}),

                        new fieldValue({
                          name : new SFString("coord"),
                          children : new MFNode([
                            new Coordinate({
                              point : new MFVec3f([1.66533e-16,-1.38778e-16,-6.44218,0.764842,-1.38778e-16,-5.79796,1.49225,0.236349,-5.15374,2.11102,0.685912,-4.50952,2.56058,1.30468,-3.86531,2.79693,2.03209,-3.22109,2.79693,2.79693,-2.57687,2.56058,3.52434,-1.93265,2.11102,4.14311,-1.28844,1.49225,4.59267,-0.644218,0.764842,4.82902,-3.55271e-15,4.44089e-16,4.82902,0.644218,-0.727408,4.59267,1.28844,-1.34618,4.14311,1.93265,-1.79574,3.52434,2.57687,-2.03209,2.79693,3.22109,-2.03209,2.03209,3.86531,-1.79574,1.30468,4.50952,-1.34618,0.685912,5.15374,-0.727408,0.236349,5.79796,-3.33067e-16,-6.10623e-16,6.44218,1.66533e-16,-1.38778e-16,-6.44218,0.727408,0.236349,-5.79796,1.34618,0.685912,-5.15374,1.79574,1.30468,-4.50952,2.03209,2.03209,-3.86531,2.03209,2.79693,-3.22109,1.79574,3.52434,-2.57687,1.34618,4.14311,-1.93265,0.727408,4.59267,-1.28844,4.44089e-16,4.82902,-0.644218,-0.764842,4.82902,-3.55271e-15,-1.49225,4.59267,0.644218,-2.11102,4.14311,1.28844,-2.56058,3.52434,1.93265,-2.79693,2.79693,2.57687,-2.79693,2.03209,3.22109,-2.56058,1.30468,3.86531,-2.11102,0.685912,4.50952,-1.49225,0.236349,5.15374,-0.764842,-6.10623e-16,5.79796,-1.11022e-15,-6.10623e-16,6.44218,1.66533e-16,-1.38778e-16,-6.44218,0.61877,0.449563,-5.79796,1.06833,1.06833,-5.15374,1.30468,1.79574,-4.50952,1.30468,2.56058,-3.86531,1.06833,3.28799,-3.22109,0.61877,3.90676,-2.57687,4.44089e-16,4.35633,-1.93265,-0.727408,4.59267,-1.28844,-1.49225,4.59267,-0.644218,-2.21966,4.35633,-3.55271e-15,-2.83843,3.90676,0.644218,-3.28799,3.28799,1.28844,-3.52434,2.56058,1.93265,-3.52434,1.79574,2.57687,-3.28799,1.06833,3.22109,-2.83843,0.449563,3.86531,-2.21966,1.05471e-15,4.50952,-1.49225,-0.236349,5.15374,-0.727408,-0.236349,5.79796,-1.11022e-15,8.88178e-16,6.44218,1.66533e-16,-1.38778e-16,-6.44218,0.449563,0.61877,-5.79796,0.685912,1.34618,-5.15374,0.685912,2.11102,-4.50952,0.449563,2.83843,-3.86531,3.33067e-16,3.4572,-3.22109,-0.61877,3.90676,-2.57687,-1.34618,4.14311,-1.93265,-2.11102,4.14311,-1.28844,-2.83843,3.90676,-0.644218,-3.4572,3.4572,-3.55271e-15,-3.90676,2.83843,0.644218,-4.14311,2.11102,1.28844,-4.14311,1.34618,1.93265,-3.90676,0.61877,2.57687,-3.4572,6.66134e-16,3.22109,-2.83843,-0.449563,3.86531,-2.11102,-0.685912,4.50952,-1.34618,-0.685912,5.15374,-0.61877,-0.449563,5.79796,-7.77156e-16,3.88578e-16,6.44218,1.66533e-16,-1.38778e-16,-6.44218,0.236349,0.727408,-5.79796,0.236349,1.49225,-5.15374,3.60822e-16,2.21966,-4.50952,-0.449563,2.83843,-3.86531,-1.06833,3.28799,-3.22109,-1.79574,3.52434,-2.57687,-2.56058,3.52434,-1.93265,-3.28799,3.28799,-1.28844,-3.90676,2.83843,-0.644218,-4.35633,2.21966,-3.55271e-15,-4.59267,1.49225,0.644218,-4.59267,0.727408,1.28844,-4.35633,1.44329e-15,1.93265,-3.90676,-0.61877,2.57687,-3.28799,-1.06833,3.22109,-2.56058,-1.30468,3.86531,-1.79574,-1.30468,4.50952,-1.06833,-1.06833,5.15374,-0.449563,-0.61877,5.79796,-9.99201e-16,1.22125e-15,6.44218,1.66533e-16,-1.38778e-16,-6.44218,2.13367e-16,0.764842,-5.79796,-0.236349,1.49225,-5.15374,-0.685912,2.11102,-4.50952,-1.30468,2.56058,-3.86531,-2.03209,2.79693,-3.22109,-2.79693,2.79693,-2.57687,-3.52434,2.56058,-1.93265,-4.14311,2.11102,-1.28844,-4.59267,1.49225,-0.644218,-4.82902,0.764842,-3.55271e-15,-4.82902,1.33227e-15,0.644218,-4.59267,-0.727408,1.28844,-4.14311,-1.34618,1.93265,-3.52434,-1.79574,2.57687,-2.79693,-2.03209,3.22109,-2.03209,-2.03209,3.86531,-1.30468,-1.79574,4.50952,-0.685912,-1.34618,5.15374,-0.236349,-0.727408,5.79796,-5.55112e-16,7.77156e-16,6.44218,1.66533e-16,-1.38778e-16,-6.44218,-0.236349,0.727408,-5.79796,-0.685912,1.34618,-5.15374,-1.30468,1.79574,-4.50952,-2.03209,2.03209,-3.86531,-2.79693,2.03209,-3.22109,-3.52434,1.79574,-2.57687,-4.14311,1.34618,-1.93265,-4.59267,0.727408,-1.28844,-4.82902,6.66134e-16,-0.644218,-4.82902,-0.764842,-3.55271e-15,-4.59267,-1.49225,0.644218,-4.14311,-2.11102,1.28844,-3.52434,-2.56058,1.93265,-2.79693,-2.79693,2.57687,-2.03209,-2.79693,3.22109,-1.30468,-2.56058,3.86531,-0.685912,-2.11102,4.50952,-0.236349,-1.49225,5.15374,-5.55112e-16,-0.764842,5.79796,-5.08278e-16,-2.22045e-16,6.44218,1.66533e-16,-1.38778e-16,-6.44218,-0.449563,0.61877,-5.79796,-1.06833,1.06833,-5.15374,-1.79574,1.30468,-4.50952,-2.56058,1.30468,-3.86531,-3.28799,1.06833,-3.22109,-3.90676,0.61877,-2.57687,-4.35633,5.55112e-16,-1.93265,-4.59267,-0.727408,-1.28844,-4.59267,-1.49225,-0.644218,-4.35633,-2.21966,-3.55271e-15,-3.90676,-2.83843,0.644218,-3.28799,-3.28799,1.28844,-2.56058,-3.52434,1.93265,-1.79574,-3.52434,2.57687,-1.06833,-3.28799,3.22109,-0.449563,-2.83843,3.86531,-9.99201e-16,-2.21966,4.50952,0.236349,-1.49225,5.15374,0.236349,-0.727408,5.79796,-8.04912e-16,3.33067e-16,6.44218,1.66533e-16,-1.38778e-16,-6.44218,-0.61877,0.449563,-5.79796,-1.34618,0.685912,-5.15374,-2.11102,0.685912,-4.50952,-2.83843,0.449563,-3.86531,-3.4572,5.55112e-16,-3.22109,-3.90676,-0.61877,-2.57687,-4.14311,-1.34618,-1.93265,-4.14311,-2.11102,-1.28844,-3.90676,-2.83843,-0.644218,-3.4572,-3.4572,-3.55271e-15,-2.83843,-3.90676,0.644218,-2.11102,-4.14311,1.28844,-1.34618,-4.14311,1.93265,-0.61877,-3.90676,2.57687,-7.77156e-16,-3.4572,3.22109,0.449563,-2.83843,3.86531,0.685912,-2.11102,4.50952,0.685912,-1.34618,5.15374,0.449563,-0.61877,5.79796,-6.66134e-16,2.22045e-16,6.44218,1.66533e-16,-1.38778e-16,-6.44218,-0.727408,0.236349,-5.79796,-1.49225,0.236349,-5.15374,-2.21966,4.44089e-16,-4.50952,-2.83843,-0.449563,-3.86531,-3.28799,-1.06833,-3.22109,-3.52434,-1.79574,-2.57687,-3.52434,-2.56058,-1.93265,-3.28799,-3.28799,-1.28844,-2.83843,-3.90676,-0.644218,-2.21966,-4.35633,-3.55271e-15,-1.49225,-4.59267,0.644218,-0.727408,-4.59267,1.28844,-1.11022e-15,-4.35633,1.93265,0.61877,-3.90676,2.57687,1.06833,-3.28799,3.22109,1.30468,-2.56058,3.86531,1.30468,-1.79574,4.50952,1.06833,-1.06833,5.15374,0.61877,-0.449563,5.79796,-6.66134e-16,6.10623e-16,6.44218,1.66533e-16,-1.38778e-16,-6.44218,-0.764842,-4.51117e-17,-5.79796,-1.49225,-0.236349,-5.15374,-2.11102,-0.685912,-4.50952,-2.56058,-1.30468,-3.86531,-2.79693,-2.03209,-3.22109,-2.79693,-2.79693,-2.57687,-2.56058,-3.52434,-1.93265,-2.11102,-4.14311,-1.28844,-1.49225,-4.59267,-0.644218,-0.764842,-4.82902,-3.55271e-15,-1.11022e-15,-4.82902,0.644218,0.727408,-4.59267,1.28844,1.34618,-4.14311,1.93265,1.79574,-3.52434,2.57687,2.03209,-2.79693,3.22109,2.03209,-2.03209,3.86531,1.79574,-1.30468,4.50952,1.34618,-0.685912,5.15374,0.727408,-0.236349,5.79796,-8.88178e-16,1.30451e-15,6.44218,1.66533e-16,-1.38778e-16,-6.44218,-0.727408,-0.236349,-5.79796,-1.34618,-0.685912,-5.15374,-1.79574,-1.30468,-4.50952,-2.03209,-2.03209,-3.86531,-2.03209,-2.79693,-3.22109,-1.79574,-3.52434,-2.57687,-1.34618,-4.14311,-1.93265,-0.727408,-4.59267,-1.28844,-7.77156e-16,-4.82902,-0.644218,0.764842,-4.82902,-3.55271e-15,1.49225,-4.59267,0.644218,2.11102,-4.14311,1.28844,2.56058,-3.52434,1.93265,2.79693,-2.79693,2.57687,2.79693,-2.03209,3.22109,2.56058,-1.30468,3.86531,2.11102,-0.685912,4.50952,1.49225,-0.236349,5.15374,0.764842,1.30451e-15,5.79796,-4.44089e-16,1.39818e-15,6.44218,1.66533e-16,-1.38778e-16,-6.44218,-0.61877,-0.449563,-5.79796,-1.06833,-1.06833,-5.15374,-1.30468,-1.79574,-4.50952,-1.30468,-2.56058,-3.86531,-1.06833,-3.28799,-3.22109,-0.61877,-3.90676,-2.57687,-6.66134e-16,-4.35633,-1.93265,0.727408,-4.59267,-1.28844,1.49225,-4.59267,-0.644218,2.21966,-4.35633,-3.55271e-15,2.83843,-3.90676,0.644218,3.28799,-3.28799,1.28844,3.52434,-2.56058,1.93265,3.52434,-1.79574,2.57687,3.28799,-1.06833,3.22109,2.83843,-0.449563,3.86531,2.21966,-2.77556e-16,4.50952,1.49225,0.236349,5.15374,0.727408,0.236349,5.79796,-4.44089e-16,3.05311e-16,6.44218,1.66533e-16,-1.38778e-16,-6.44218,-0.449563,-0.61877,-5.79796,-0.685912,-1.34618,-5.15374,-0.685912,-2.11102,-4.50952,-0.449563,-2.83843,-3.86531,-4.44089e-16,-3.4572,-3.22109,0.61877,-3.90676,-2.57687,1.34618,-4.14311,-1.93265,2.11102,-4.14311,-1.28844,2.83843,-3.90676,-0.644218,3.4572,-3.4572,-3.55271e-15,3.90676,-2.83843,0.644218,4.14311,-2.11102,1.28844,4.14311,-1.34618,1.93265,3.90676,-0.61877,2.57687,3.4572,-6.66134e-16,3.22109,2.83843,0.449563,3.86531,2.11102,0.685912,4.50952,1.34618,0.685912,5.15374,0.61877,0.449563,5.79796,-3.33067e-16,1.11022e-16,6.44218,1.66533e-16,-1.38778e-16,-6.44218,-0.236349,-0.727408,-5.79796,-0.236349,-1.49225,-5.15374,-2.77556e-16,-2.21966,-4.50952,0.449563,-2.83843,-3.86531,1.06833,-3.28799,-3.22109,1.79574,-3.52434,-2.57687,2.56058,-3.52434,-1.93265,3.28799,-3.28799,-1.28844,3.90676,-2.83843,-0.644218,4.35633,-2.21966,-3.55271e-15,4.59267,-1.49225,0.644218,4.59267,-0.727408,1.28844,4.35633,-5.55112e-16,1.93265,3.90676,0.61877,2.57687,3.28799,1.06833,3.22109,2.56058,1.30468,3.86531,1.79574,1.30468,4.50952,1.06833,1.06833,5.15374,0.449563,0.61877,5.79796,-6.10623e-16,1.11022e-16,6.44218,1.66533e-16,-1.38778e-16,-6.44218,2.60342e-17,-0.764842,-5.79796,0.236349,-1.49225,-5.15374,0.685912,-2.11102,-4.50952,1.30468,-2.56058,-3.86531,2.03209,-2.79693,-3.22109,2.79693,-2.79693,-2.57687,3.52434,-2.56058,-1.93265,4.14311,-2.11102,-1.28844,4.59267,-1.49225,-0.644218,4.82902,-0.764842,-3.55271e-15,4.82902,-1.11022e-15,0.644218,4.59267,0.727408,1.28844,4.14311,1.34618,1.93265,3.52434,1.79574,2.57687,2.79693,2.03209,3.22109,2.03209,2.03209,3.86531,1.30468,1.79574,4.50952,0.685912,1.34618,5.15374,0.236349,0.727408,5.79796,-1.58207e-15,-2.22045e-16,6.44218,1.66533e-16,-1.38778e-16,-6.44218,0.236349,-0.727408,-5.79796,0.685912,-1.34618,-5.15374,1.30468,-1.79574,-4.50952,2.03209,-2.03209,-3.86531,2.79693,-2.03209,-3.22109,3.52434,-1.79574,-2.57687,4.14311,-1.34618,-1.93265,4.59267,-0.727408,-1.28844,4.82902,-5.55112e-16,-0.644218,4.82902,0.764842,-3.55271e-15,4.59267,1.49225,0.644218,4.14311,2.11102,1.28844,3.52434,2.56058,1.93265,2.79693,2.79693,2.57687,2.03209,2.79693,3.22109,1.30468,2.56058,3.86531,0.685912,2.11102,4.50952,0.236349,1.49225,5.15374,-1.58207e-15,0.764842,5.79796,-1.72257e-15,8.88178e-16,6.44218,1.66533e-16,-1.38778e-16,-6.44218,0.449563,-0.61877,-5.79796,1.06833,-1.06833,-5.15374,1.79574,-1.30468,-4.50952,2.56058,-1.30468,-3.86531,3.28799,-1.06833,-3.22109,3.90676,-0.61877,-2.57687,4.35633,-5.55112e-16,-1.93265,4.59267,0.727408,-1.28844,4.59267,1.49225,-0.644218,4.35633,2.21966,-3.55271e-15,3.90676,2.83843,0.644218,3.28799,3.28799,1.28844,2.56058,3.52434,1.93265,1.79574,3.52434,2.57687,1.06833,3.28799,3.22109,0.449563,2.83843,3.86531,2.77556e-16,2.21966,4.50952,-0.236349,1.49225,5.15374,-0.236349,0.727408,5.79796,-1.66533e-16,5.55112e-16,6.44218,1.66533e-16,-1.38778e-16,-6.44218,0.61877,-0.449563,-5.79796,1.34618,-0.685912,-5.15374,2.11102,-0.685912,-4.50952,2.83843,-0.449563,-3.86531,3.4572,-4.996e-16,-3.22109,3.90676,0.61877,-2.57687,4.14311,1.34618,-1.93265,4.14311,2.11102,-1.28844,3.90676,2.83843,-0.644218,3.4572,3.4572,-3.55271e-15,2.83843,3.90676,0.644218,2.11102,4.14311,1.28844,1.34618,4.14311,1.93265,0.61877,3.90676,2.57687,-3.33067e-16,3.4572,3.22109,-0.449563,2.83843,3.86531,-0.685912,2.11102,4.50952,-0.685912,1.34618,5.15374,-0.449563,0.61877,5.79796,-8.88178e-16,6.66134e-16,6.44218,1.66533e-16,-1.38778e-16,-6.44218,0.727408,-0.236349,-5.79796,1.49225,-0.236349,-5.15374,2.21966,-3.05311e-16,-4.50952,2.83843,0.449563,-3.86531,3.28799,1.06833,-3.22109,3.52434,1.79574,-2.57687,3.52434,2.56058,-1.93265,3.28799,3.28799,-1.28844,2.83843,3.90676,-0.644218,2.21966,4.35633,-3.55271e-15,1.49225,4.59267,0.644218,0.727408,4.59267,1.28844,4.44089e-16,4.35633,1.93265,-0.61877,3.90676,2.57687,-1.06833,3.28799,3.22109,-1.30468,2.56058,3.86531,-1.30468,1.79574,4.50952,-1.06833,1.06833,5.15374,-0.61877,0.449563,5.79796,-4.44089e-16,1.66533e-16,6.44218])})])}),

                        new fieldValue({
                          name : new SFString("scale"),
                          value : new SFString("0.7")})])})])}))}),

            new Viewpoint({
              description : new SFString("front")}),

            new Viewpoint({
              DEF : new SFString("RIGHT_1"),
              description : new SFString("right_front"),
              position : new SFVec3f([7,0,7]),
              orientation : new SFRotation([0,1,0,0.785])}),

            new Viewpoint({
              DEF : new SFString("RIGHT_2"),
              description : new SFString("right"),
              position : new SFVec3f([10,0,0]),
              orientation : new SFRotation([0,1,0,1.57])}),

            new Viewpoint({
              DEF : new SFString("RIGHT"),
              description : new SFString("right_back"),
              position : new SFVec3f([7,0,-7]),
              orientation : new SFRotation([0,1,0,2.356])}),

            new Viewpoint({
              description : new SFString("back"),
              position : new SFVec3f([0,0,-10]),
              orientation : new SFRotation([0,1,0,3.1415])}),

            new Viewpoint({
              DEF : new SFString("LEFT"),
              description : new SFString("left"),
              position : new SFVec3f([-10,0,0]),
              orientation : new SFRotation([0,-1,0,1.57])}),

            new Viewpoint({
              DEF : new SFString("BOTTOM"),
              description : new SFString("bottom"),
              position : new SFVec3f([0,-10,0]),
              orientation : new SFRotation([1,0,0,1.57])}),

            new NavigationInfo({
              type : ["EXAMINE"]}),

            new Transform({
              DEF : new SFString("SHAPE"),
              children : new MFNode([
                new Shape({
                  DEF : new SFString("PART"),
                  appearance : new SFNode(
                    new Appearance({
                      DEF : new SFString("APPEARANCE"),
                      material : new SFNode(
                        new Material({
                          diffuseColor : new SFColor([1,1,1]),
                          specularColor : new SFColor([1,1,0])})),
                      texture : new SFNode(
                        new ImageTexture({
                          url : new MFString(["http://bulatov.org/vrml/siggraph99/texture11.jpg"])})),
                      textureTransform : new SFNode(
                        new TextureTransform({
                          DEF : new SFString("TTRANS"),
                          translation : new SFVec2f([0,-24.9558]),
                          rotation : new SFFloat(1.57)}))})),
                  geometry : new SFNode(
                    new ProtoInstance({
                      name : new SFString("Shape99"),
                      DEF : new SFString("SHAPE99")}))}),

                new Transform({
                  rotation : new SFRotation([0,0,1,3.1415]),
                  children : new MFNode([
                    new Shape({
                      USE : new SFString("PART")})])}),

                new Viewpoint({
                  DEF : new SFString("MOVING_VIEW"),
                  description : new SFString("moving")})])}),

            new Transform({
              rotation : new SFRotation([1,0,0,1.5708]),
              children : new MFNode([
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      USE : new SFString("APPEARANCE")}))})])}),

            new ProximitySensor({
              DEF : new SFString("PROXI"),
              size : new SFVec3f([1000,1000,1000])}),

            new Script({
              DEF : new SFString("PROXI_SCRIPT"),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFROTATION,
                  name : new SFString("set_orientation"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFVEC3F,
                  name : new SFString("set_position"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),
              ]),javascript:
    , function set_position(v){
	//trace('pos: ' + v);
    }
    , function set_orientation(v){
	//trace('orient: '+ v);
    })}),

            new TimeSensor({
              DEF : new SFString("TIMER_1"),
              loop : new SFBool(true)}),

            new Script({
              DEF : new SFString("VIEWPOINT_SCRIPT"),
              directOutput : new SFBool(true),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("set_time"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("set_bound"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFNODE,
                  name : new SFString("viewpoint"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                  children : new MFNode([
                    new Viewpoint({
                      USE : new SFString("MOVING_VIEW")})])}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("t0"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                new field({
                  type : field.TYPE_SFVEC3F,
                  name : new SFString("position"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                  value : new SFString("0 0 10")}),

                new field({
                  type : field.TYPE_SFROTATION,
                  name : new SFString("orientation"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                new field({
                  type : field.TYPE_SFVEC3F,
                  name : new SFString("dir0"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                  value : new SFString("0 0 -1")}),

                new field({
                  type : field.TYPE_SFVEC3F,
                  name : new SFString("up0"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                  value : new SFString("0 1 0")}),

                new field({
                  type : field.TYPE_SFVEC3F,
                  name : new SFString("direction"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                  value : new SFString("0 0 -1")}),

                new field({
                  type : field.TYPE_SFVEC3F,
                  name : new SFString("look_at"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                new field({
                  type : field.TYPE_SFVEC3F,
                  name : new SFString("up"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("isActive"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("isCosmo"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                  value : new SFString("true")}),
              ]),javascript:


  , function set_time(val,time){
      if(t0 == 0){
	  t0 = time;
      }
    dt = val - t0;
    delay = 0.1; height = 0.3;
    look_at = getPosition(dt);
    position = getPosition(dt-delay);
    position.z += height;
    up.x = 0; up.y = 0; up.z = 1;

    viewpoint.set_position = position;
    var rot = getOrientation(position, look_at, up);
    viewpoint.set_orientation = rot;    
  }

  , function set_bound(val, time){
    trace('set_bound(' + val + ') ');
    isActive = val;
    t0 = time;
  })}),

            new Script({
              DEF : new SFString("MAIN"),
              directOutput : new SFBool(true),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("set_time"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFNODE,
                  name : new SFString("ttrans"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                  children : new MFNode([
                    new TextureTransform({
                      USE : new SFString("TTRANS")})])}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("t0"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                  value : new SFString("1444306820.66995")}),

                new field({
                  type : field.TYPE_SFNODE,
                  name : new SFString("shape"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                  children : new MFNode([
                    new Transform({
                      USE : new SFString("SHAPE")})])}),

                new field({
                  type : field.TYPE_SFROTATION,
                  name : new SFString("rotation"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),
              ]),javascript:
  , function set_time(val){
    if(t0 == 0){
      t0 = val;
    }
    dt = val - t0;
    var fi = -dt*0.2-0.2;
    ttrans.set_translation = new SFVec2f(0,fi);
    //rotation.angle = -Math.PI*fi;
    //shape.set_rotation = rotation;
  })}),

            new Transform({
              DEF : new SFString("TR1"),
              rotation : new SFRotation([0,1,0,0.395706]),
              children : new MFNode([
                new Transform({
                  DEF : new SFString("TR2"),
                  translation : new SFVec3f([0,0,10]),
                  rotation : new SFRotation([1,0,0,5.3245]),
                  scale : new SFVec3f([6,6,5]),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          DEF : new SFString("APP"),
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([0.3,0.5,0.9]),
                              specularColor : new SFColor([0.7,0.7,0.3])}))})),
                      geometry : new SFNode(
                        new ProtoInstance({
                          name : new SFString("IFS")}))})])})])}),

            new TimeSensor({
              DEF : new SFString("TIMER_R1"),
              cycleInterval : new SFTime(60),
              loop : new SFBool(true)}),

            new TimeSensor({
              DEF : new SFString("TIMER_R2"),
              cycleInterval : new SFTime(67),
              loop : new SFBool(true)}),

            new OrientationInterpolator({
              DEF : new SFString("BACKGROUND_INTERP1"),
              key : new MFFloat([0,0.5,1]),
              keyValue : new MFRotation([0,0,1,0,0,1,0,3.1415,0,0,1,0])}),

            new OrientationInterpolator({
              DEF : new SFString("BACKGROUND_INTERP2"),
              key : new MFFloat([0,0.5,1]),
              keyValue : new MFRotation([0,0,1,0,1,0,0,3.1415,0,0,1,0])}),

            new ROUTE({
              fromNode : new SFString("PROXI"),
              fromField : new SFString("position_changed"),
              toNode : new SFString("PROXI_SCRIPT"),
              toField : new SFString("set_position")}),

            new ROUTE({
              fromNode : new SFString("PROXI"),
              fromField : new SFString("orientation_changed"),
              toNode : new SFString("PROXI_SCRIPT"),
              toField : new SFString("set_orientation")}),

            new ROUTE({
              fromNode : new SFString("SHAPE99"),
              fromField : new SFString("position_changed"),
              toNode : new SFString("MOVING_VIEW"),
              toField : new SFString("set_position")}),

            new ROUTE({
              fromNode : new SFString("SHAPE99"),
              fromField : new SFString("orientation_changed"),
              toNode : new SFString("MOVING_VIEW"),
              toField : new SFString("set_orientation")}),

            new ROUTE({
              fromNode : new SFString("TIMER_1"),
              fromField : new SFString("time"),
              toNode : new SFString("MAIN"),
              toField : new SFString("set_time")}),

            new ROUTE({
              fromNode : new SFString("TIMER_R1"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("BACKGROUND_INTERP1"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("TIMER_R2"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("BACKGROUND_INTERP2"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("BACKGROUND_INTERP1"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("TR1"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("BACKGROUND_INTERP2"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("TR2"),
              toField : new SFString("set_rotation")})])}))});
console.log(X3D0.toXMLNode());