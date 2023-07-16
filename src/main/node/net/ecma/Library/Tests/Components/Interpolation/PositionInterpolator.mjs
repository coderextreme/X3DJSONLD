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
var Transform = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var Group = require('./x3d.mjs');
var MetadataSet = require('./x3d.mjs');
var MetadataInteger = require('./x3d.mjs');
var MFInt32 = require('./x3d.mjs');
var TimeSensor = require('./x3d.mjs');
var SFTime = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var PositionInterpolator = require('./x3d.mjs');
var MFFloat = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
var MetadataDouble = require('./x3d.mjs');
var MFDouble = require('./x3d.mjs');
var MetadataString = require('./x3d.mjs');
var MFString = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var Box = require('./x3d.mjs');
var Viewpoint = require('./x3d.mjs');
var Script = require('./x3d.mjs');
var field = require('./x3d.mjs');
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
              content : new SFString("Tue, 15 Sep 2015 04:33:10 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V1.1.0, http://titania.create3000.de")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Tue, 15 Sep 2015 06:41:44 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new Transform({
              DEF : new SFString("Box_1"),
              translation : new SFVec3f([4.06141,0,0]),
              children : new MFNode([
                new Group({
                  DEF : new SFString("Anim"),
                  metadata : new MFNode([
                    new MetadataSet({
                      name : new SFString("Animation"),
                      value : new SFNode(
                        new MetadataInteger({
                          name : new SFString("duration"),
                          value : new MFInt32([60])})),
                      value : new SFNode(
                        new MetadataInteger({
                          name : new SFString("framesPerSecond"),
                          value : new MFInt32([10])}))}),
                  children : new MFNode([
                    new TimeSensor({
                      DEF : new SFString("_1"),
                      cycleInterval : new SFTime(6),
                      loop : new SFBool(true),
                      startTime : new SFTime(1442299303.32247),
                      stopTime : new SFTime(1442299303.3224)}),

                    new PositionInterpolator({
                      DEF : new SFString("BoxTranslationInterpolator"),
                      key : new MFFloat([0,0.0166667,0.0333333,0.05,0.0666667,0.0833333,0.1,0.116667,0.133333,0.15,0.166667,0.183333,0.2,0.216667,0.233333,0.25,0.266667,0.283333,0.3,0.316667,0.333333,0.35,0.366667,0.383333,0.4,0.416667,0.433333,0.45,0.466667,0.483333,0.5,0.516667,0.533333,0.55,0.566667,0.583333,0.6,0.616667,0.633333,0.65,0.666667,0.683333,0.7,0.716667,0.733333,0.75,0.766667,0.783333,0.8,0.816667,0.833333,0.85,0.866667,0.883333,0.9,0.916667,0.933333,0.95,0.966667,0.983333,1]),
                      keyValue : new MFVec3f([-4.40427,0,0,-4.39688,0,0,-4.37505,0,0,-4.33927,0,0,-4.29005,0,0,-4.22787,0,0,-4.15324,0,0,-4.06666,0,0,-3.96862,0,0,-3.85962,0,0,-3.74017,0,0,-3.61075,0,0,-3.47187,0,0,-3.32403,0,0,-3.16771,0,0,-3.00343,0,0,-2.83168,0,0,-2.65295,0,0,-2.46775,0,0,-2.27657,0,0,-2.07991,0,0,-1.87827,0,0,-1.67215,0,0,-1.46205,0,0,-1.24846,0,0,-1.03187,0,0,-0.812804,0,0,-0.591741,0,0,-0.369183,0,0,-0.14563,0,0,0.0784221,0,0,0.302474,0,0,0.526027,0,0,0.748585,0,0,0.969648,0,0,1.18872,0,0,1.4053,0,0,1.61889,0,0,1.829,0,0,2.03512,0,0,2.23676,0,0,2.43341,0,0,2.62459,0,0,2.80979,0,0,2.98852,0,0,3.16027,0,0,3.32456,0,0,3.48087,0,0,3.62872,0,0,3.7676,0,0,3.89701,0,0,4.01647,0,0,4.12546,0,0,4.2235,0,0,4.31009,0,0,4.38471,0,0,4.44689,0,0,4.49612,0,0,4.5319,0,0,4.55373,0,0,4.56112,0,0]),
                      metadata : new MFNode([
                        new MetadataSet({
                          name : new SFString("Interpolator"),
                          value : new SFNode(
                            new MetadataInteger({
                              name : new SFString("key"),
                              value : new MFInt32([0,60])})),
                          value : new SFNode(
                            new MetadataDouble({
                              name : new SFString("keyValue"),
                              value : new MFDouble([-4.40427207946777,0,0,4.56111621856689,0,0])})),
                          value : new SFNode(
                            new MetadataString({
                              name : new SFString("keyType"),
                              value : new MFString([", ","SPLINESPLINE"])}))})])})])}),

                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({}))})),
                  geometry : new SFNode(
                    new Box({}))})])}),

            new Viewpoint({}),

            new Script({
              DEF : new SFString("_2"),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFVEC3F,
                  name : new SFString("set_translation"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),
              ]),javascript:

var x = 0;

, function set_translation (value)
{
	if (value .x < x)
		print (x, " : ", value .x);
	
	x = value .x;
})}),

            new ROUTE({
              fromNode : new SFString("_1"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("BoxTranslationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("BoxTranslationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Box_1"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("Box_1"),
              fromField : new SFString("translation_changed"),
              toNode : new SFString("_2"),
              toField : new SFString("set_translation")})])}))});
console.log(X3D0.toXMLNode());
