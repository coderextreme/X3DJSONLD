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
var component = require('./x3d.mjs');
var SFInt32 = require('./x3d.mjs');
var MFNode = require('./x3d.mjs');
var meta = require('./x3d.mjs');
var Scene = require('./x3d.mjs');
var GeoViewpoint = require('./x3d.mjs');
var SFVec3d = require('./x3d.mjs');
var SFRotation = require('./x3d.mjs');
var Background = require('./x3d.mjs');
var MFString = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Sphere = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var TimeSensor = require('./x3d.mjs');
var SFTime = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var GeoPositionInterpolator = require('./x3d.mjs');
var MFFloat = require('./x3d.mjs');
var MFVec3d = require('./x3d.mjs');
var Script = require('./x3d.mjs');
var field = require('./x3d.mjs');
var ROUTE = require('./x3d.mjs');
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("3.3"),
      head : new SFNode(
        new head({
          component : new SFNode(
            new component({
              name : new SFString("Geospatial"),
              level : new SFInt32(1)})),
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("geobubbles.x3d")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("John Carlson")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("manual")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://coderextreme.net/X3DJSONLD/src/main/personal/geobubbles.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("geo bubbles")})])})),
      Scene : new SFNode(
        new Scene({
          /*Viewpoint DEF='Tour' position='0 0 4' orientation='1 0 0 0' description='Tour Views'/*/
          /*PositionInterpolator DEF='TourPosition' key='0 1' keyValue='-0.5 -0.5 4 -0.5 0.5 4'/*/
          children : new MFNode([
            new GeoViewpoint({
              DEF : new SFString("Tour"),
              position : new SFVec3d([0,0,4]),
              orientation : new SFRotation([1,0,0,0]),
              description : new SFString("Tour Views")}),

            new Background({
              backUrl : new MFString(["../resources/images/BK.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/BK.png"]),
              bottomUrl : new MFString(["../resources/images/BT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/BT.png"]),
              frontUrl : new MFString(["../resources/images/FR.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/FR.png"]),
              leftUrl : new MFString(["../resources/images/LF.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/LF.png"]),
              rightUrl : new MFString(["../resources/images/RT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/RT.png"]),
              topUrl : new MFString(["../resources/images/TP.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/TP.png"])}),

            new Transform({
              child : new SFNode(
                new Shape({
                  geometry : new SFNode(
                    new Sphere({})),
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({
                          diffuseColor : new SFColor([0.7,0.7,0.7]),
                          specularColor : new SFColor([0.5,0.5,0.5])}))}))}))}),

            new TimeSensor({
              DEF : new SFString("TourTime"),
              cycleInterval : new SFTime(5),
              loop : new SFBool(true)}),

            new GeoPositionInterpolator({
              DEF : new SFString("TourPosition"),
              key : new MFFloat([0,1]),
              keyValue : new MFVec3d([0.0015708,0,4,0,0.0015708,4])}),

            new Script({
              DEF : new SFString("RandomTourTime"),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("set_cycle"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFFLOAT,
                  name : new SFString("val"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                  value : new SFString("0")}),

                new field({
                  type : field.TYPE_MFVEC3D,
                  name : new SFString("positions"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                  value : new SFString("0.0015708 0 4 0 0.0015708 4")}),

                new field({
                  type : field.TYPE_MFVEC3D,
                  name : new SFString("position"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                  value : new SFString("0.0015708 0 4 0 0.0015708 4")}),
              ]),
ecmascript:eval (0

               , function set_cycle(value) {
                        var cartesianMult = -150;  // -150 if cartesian, 1 if geo
                        var ov = val;
			// Browser.print('old '+ov);
                        do {
                                val = Math.floor(Math.random()*2);
                                var vc = val;
                                positions[vc] = new SFVec3d(Math.round(Math.random()*2)*0.0015708*cartesianMult, Math.round(Math.random()*2)*0.0015708*cartesianMult, 4);
                        } while ( positions[ov][0] === positions[vc][0] && positions[ov][1] === positions[vc][1] && positions[ov][2] === positions[vc][2]);
			// Browser.println(positions[ov]);
			// Browser.println(positions[vc]);
                        position = new MFVec3d();
                        position[0] = new SFVec3d(positions[ov][0],positions[ov][1],positions[ov][2]);
                        position[1] = new SFVec3d(positions[vc][0],positions[vc][1],positions[vc][2]);
               })}),

            new ROUTE({
              fromNode : new SFString("TourTime"),
              fromField : new SFString("cycleTime"),
              toNode : new SFString("RandomTourTime"),
              toField : new SFString("set_cycle")}),

            new ROUTE({
              fromNode : new SFString("RandomTourTime"),
              fromField : new SFString("position"),
              toNode : new SFString("TourPosition"),
              toField : new SFString("keyValue")}),

            new ROUTE({
              fromNode : new SFString("TourTime"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("TourPosition"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("TourPosition"),
              fromField : new SFString("geovalue_changed"),
              toNode : new SFString("Tour"),
              toField : new SFString("set_position")})])}))});
console.log(X3D0.toXMLNode());
