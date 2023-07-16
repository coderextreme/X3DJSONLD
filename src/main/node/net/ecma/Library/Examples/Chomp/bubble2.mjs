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
var Group = require('./x3d.mjs');
var TimeSensor = require('./x3d.mjs');
var SFTime = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var Billboard = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var SFRotation = require('./x3d.mjs');
var PositionInterpolator = require('./x3d.mjs');
var MFFloat = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var IndexedFaceSet = require('./x3d.mjs');
var MFInt32 = require('./x3d.mjs');
var Coordinate = require('./x3d.mjs');
var ROUTE = require('./x3d.mjs');
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
              content : new SFString("Mon, 09 Nov 2015 13:19:33 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V1.2.1, http://titania.create3000.de")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Mon, 09 Nov 2015 13:19:33 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new Group({
              children : new MFNode([
                new Group({
                  children : new MFNode([
                    new TimeSensor({
                      DEF : new SFString("TimeSensor_bubble02-TIMER"),
                      cycleInterval : new SFTime(2.133),
                      loop : new SFBool(true),
                      startTime : new SFTime(1)}),

                    new Transform({
                      DEF : new SFString("Billboard_bubble02-ROOT"),
                      children : new MFNode([
                        new TimeSensor({
                          DEF : new SFString("Billboard_bubble02-TIMER"),
                          cycleInterval : new SFTime(2.133)}),

                        new Billboard({
                          DEF : new SFString("Billboard_bubble02"),
                          axisOfRotation : new SFVec3f([0,0,0]),
                          children : new MFNode([
                            new Transform({
                              DEF : new SFString("Bubble02-ROOT"),
                              translation : new SFVec3f([-0.1568,7.22,0]),
                              rotation : new SFRotation([0.9506,-0.2195,-0.2195,1.621]),
                              scale : new SFVec3f([0.4926,0.4926,0.4926]),
                              scaleOrientation : new SFRotation([-0.0215597,0.997188,-0.0717691,0.6209]),
                              children : new MFNode([
                                new PositionInterpolator({
                                  DEF : new SFString("Bubble02-POS-INTERP"),
                                  key : new MFFloat([0,0.09375,0.1875,0.2813,0.375,0.5,0.5001,0.6562,0.75,0.8437,0.9375,1]),
                                  keyValue : new MFVec3f([-0.1568,7.22,0,0.4111,8.834,0,0.2528,10.36,0,0.06727,11.92,0,0.6111,13.64,0,0.5617,15.34,0,0.4965,0.7224,0,0.4236,2.017,0,-0.3717,3.521,0,0.375,4.881,0,0.2019,6.257,0,-0.1568,7.22,0])}),

                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          diffuseColor : new SFColor([0.4549,0.6667,0.7882]),
                                          shininess : new SFFloat(0.25)}))})),
                                  geometry : new SFNode(
                                    new IndexedFaceSet({
                                      DEF : new SFString("Bubble02-FACES"),
                                      creaseAngle : new SFFloat(3),
                                      coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,1,-1]),
                                      coord : new SFNode(
                                        new Coordinate({
                                          DEF : new SFString("Bubble02-COORD"),
                                          point : new MFVec3f([0,0.6564,0,0,0.3282,-0.5685,-0.4923,0.3282,-0.2842,-0.4923,0.3282,0.2842,0,0.3282,0.5685,0.4923,0.3282,0.2842,0.4923,0.3282,-0.2842])}))}))})])})])})])})])})])}),

            new ROUTE({
              fromNode : new SFString("Billboard_bubble02-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Bubble02-POS-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("TimeSensor_bubble02-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Bubble02-POS-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Bubble02-POS-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Bubble02-ROOT"),
              toField : new SFString("set_translation")})])}))});
console.log(X3D0.toXMLNode());
