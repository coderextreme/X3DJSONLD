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
var WorldInfo = require('./x3d.mjs');
var MetadataSet = require('./x3d.mjs');
var MetadataString = require('./x3d.mjs');
var MFString = require('./x3d.mjs');
var MetadataDouble = require('./x3d.mjs');
var MFDouble = require('./x3d.mjs');
var Viewpoint = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var SFRotation = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var NavigationInfo = require('./x3d.mjs');
var TimeSensor = require('./x3d.mjs');
var SFTime = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var Script = require('./x3d.mjs');
var field = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var PositionInterpolator = require('./x3d.mjs');
var MFFloat = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
var OrientationInterpolator = require('./x3d.mjs');
var MFRotation = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
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
              content : new SFString("Thu, 08 Oct 2015 11:03:48 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V2.0.0, http://titania.create3000.de")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("file:///home/holger/Projekte/Library/Examples/Misc/torusbreath2.x3d")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Mon, 03 Oct 2016 12:49:26 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new WorldInfo({
              title : new SFString("torusbreath2"),
              metadata : new MFNode([
                new MetadataSet({
                  name : new SFString("Titania"),
                  DEF : new SFString("Titania"),
                  reference : new SFString("http://titania.create3000.de"),
                  value : new SFNode(
                    new MetadataSet({
                      name : new SFString("NavigationInfo"),
                      DEF : new SFString("NavigationInfo"),
                      reference : new SFString("http://titania.create3000.de"),
                      value : new SFNode(
                        new MetadataString({
                          name : new SFString("type"),
                          DEF : new SFString("type"),
                          reference : new SFString("http://titania.create3000.de"),
                          value : new MFString(["EXAMINE"])}))})),
                  value : new SFNode(
                    new MetadataSet({
                      name : new SFString("Viewpoint"),
                      DEF : new SFString("Viewpoint"),
                      reference : new SFString("http://titania.create3000.de"),
                      value : new SFNode(
                        new MetadataDouble({
                          name : new SFString("position"),
                          DEF : new SFString("position"),
                          reference : new SFString("http://titania.create3000.de"),
                          value : new MFDouble([1,162,268])})),
                      value : new SFNode(
                        new MetadataDouble({
                          name : new SFString("orientation"),
                          DEF : new SFString("orientation"),
                          reference : new SFString("http://titania.create3000.de"),
                          value : new MFDouble([-1,0,0,0.573000073432922])})),
                      value : new SFNode(
                        new MetadataDouble({
                          name : new SFString("centerOfRotation"),
                          DEF : new SFString("centerOfRotation"),
                          reference : new SFString("http://titania.create3000.de"),
                          value : new MFDouble([0,0,0])}))})),
                  value : new SFNode(
                    new MetadataSet({
                      name : new SFString("Selection"),
                      DEF : new SFString("Selection"),
                      reference : new SFString("http://titania.create3000.de"),
                      value : new SFNode(
                        new MetadataSet({
                          name : new SFString("children"),
                          DEF : new SFString("children"),
                          reference : new SFString("http://titania.create3000.de")})),
                      value : new SFNode(
                        new MetadataSet({
                          name : new SFString("previous"),
                          DEF : new SFString("previous"),
                          reference : new SFString("http://titania.create3000.de")}))}))})])}),

            new Viewpoint({
              DEF : new SFString("entry"),
              description : new SFString("entry"),
              position : new SFVec3f([1,162,268]),
              orientation : new SFRotation([-1,0,0,0.573]),
              fieldOfView : new SFFloat(0.785)}),

            new NavigationInfo({
              type : ["EXAMINE"],
              DEF : new SFString("Examine"),
              speed : new SFFloat(5)}),

            new TimeSensor({
              DEF : new SFString("TimeSensor01-TIMER"),
              cycleInterval : new SFTime(1.33),
              loop : new SFBool(true),
              startTime : new SFTime(1)}),

            new Script({
              DEF : new SFString("TimeSensor01-SCRIPT"),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFFLOAT,
                  name : new SFString("fractionIn"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFFLOAT,
                  name : new SFString("fractionOut"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),
              ]),vrmlscript:

    , function fractionIn(i) {

    fractionOut = 0.4 * i;

  })}),

            new Viewpoint({
              DEF : new SFString("closeup"),
              description : new SFString("closeup"),
              position : new SFVec3f([0,190,0.0000103]),
              orientation : new SFRotation([-0.76193400937255,-0.457961005633378,-0.457961005633378,1.84]),
              fieldOfView : new SFFloat(0.785)}),

            new Viewpoint({
              DEF : new SFString("sideview"),
              description : new SFString("sideview"),
              position : new SFVec3f([0,-60,0]),
              orientation : new SFRotation([0.258013964510698,-0.931051871935686,0.258013964510698,1.64]),
              fieldOfView : new SFFloat(0.785)}),

            new Transform({
              DEF : new SFString("Torus01"),
              translation : new SFVec3f([0,14.5827,0]),
              rotation : new SFRotation([-0.707106781186548,0,-0.707106781186548,3.14]),
              scale : new SFVec3f([1.65058,1,1.65058]),
              children : new MFNode([
                new TimeSensor({
                  DEF : new SFString("Torus01-TIMER"),
                  cycleInterval : new SFTime(3.33)}),

                new PositionInterpolator({
                  DEF : new SFString("Torus01-POS-INTERP"),
                  key : new MFFloat([0,0.01,0.02,0.03,0.04,0.05,0.06,0.07,0.08,0.09,0.1,0.11,0.12,0.13,0.14,0.15,0.16,0.17,0.18,0.19,0.2,0.21,0.22,0.23,0.24,0.25,0.26,0.27,0.28,0.29,0.3,0.31,0.32,0.33,0.34,0.35,0.36,0.37,0.38,0.39,0.4]),
                  keyValue : new MFVec3f([0,0,0,0,3.8,0,0,7.2,0,0,10.2,0,0,12.8,0,0,15,0,0,16.8,0,0,18.2,0,0,19.2,0,0,19.8,0,0,20,0,0,19.6,0,0,18.6,0,0,16.9,0,0,14.9,0,0,12.5,0,0,9.92,0,0,7.26,0,0,4.64,0,0,2.18,0,0,0,0,0,-2.18,0,0,-4.64,0,0,-7.26,0,0,-9.92,0,0,-12.5,0,0,-14.9,0,0,-16.9,0,0,-18.6,0,0,-19.6,0,0,-20,0,0,-19.8,0,0,-19.2,0,0,-18.2,0,0,-16.8,0,0,-15,0,0,-12.8,0,0,-10.2,0,0,-7.2,0,0,-3.8,0,0,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Torus01-ROT-INTERP"),
                  key : new MFFloat([0,0.04,0.05,0.06,0.08,0.09,0.11,0.12,0.13,0.14,0.16,0.17,0.18,0.19,0.2,0.25,0.26,0.28,0.29,0.32,0.33,0.34,0.35,0.36,0.37,0.38,0.39,0.4]),
                  keyValue : new MFRotation([-0.707106781186548,0,-0.707106781186548,3.14,-0.707106781186548,0,-0.707106781186548,3.14,0.707106781186548,0,0.707106781186548,3.14,-0.707106781186548,0,-0.707106781186548,3.14,-0.707106781186548,0,-0.707106781186548,3.14,0.707106781186548,0,0.707106781186548,3.14,0.707106781186548,0,0.707106781186548,3.14,-0.707106781186548,0,-0.707106781186548,3.14,0.707106781186548,0,0.707106781186548,3.14,-0.707106781186548,0,-0.707106781186548,3.14,-0.707106781186548,0,-0.707106781186548,3.14,0.707106781186548,0,0.707106781186548,3.14,-0.707106781186548,0,-0.707106781186548,3.14,-0.707106781186548,0,-0.707106781186548,3.14,0.707106781186548,0,0.707106781186548,3.14,0.707106781186548,0,0.707106781186548,3.14,-0.707106781186548,0,-0.707106781186548,3.14,-0.707106781186548,0,-0.707106781186548,3.14,0.707106781186548,0,0.707106781186548,3.14,0.707106781186548,0,0.707106781186548,3.14,-0.707106781186548,0,-0.707106781186548,3.14,0.707106781186548,0,0.707106781186548,3.14,-0.707106781186548,0,-0.707106781186548,3.14,0.707106781186548,0,0.707106781186548,3.14,0.707106781186548,0,0.707106781186548,3.14,-0.707106781186548,0,-0.707106781186548,3.14,-0.707106781186548,0,-0.707106781186548,3.14,0.707106781186548,0,0.707106781186548,3.14])}),

                new PositionInterpolator({
                  DEF : new SFString("Torus01-SCALE-INTERP"),
                  key : new MFFloat([0,0.01,0.02,0.03,0.04,0.05,0.06,0.07,0.08,0.09,0.1,0.11,0.12,0.13,0.14,0.15,0.16,0.17,0.18,0.19,0.2,0.21,0.22,0.23,0.24,0.25,0.26,0.27,0.28,0.29,0.3,0.31,0.32,0.33,0.34,0.35,0.36,0.37,0.38,0.39,0.4]),
                  keyValue : new MFVec3f([1,1,1,1.02,1,1.02,1.04,1,1.04,1.07,1,1.07,1.1,1,1.1,1.13,1,1.13,1.17,1,1.17,1.21,1,1.21,1.25,1,1.25,1.29,1,1.29,1.34,1,1.34,1.4,1,1.4,1.47,1,1.47,1.55,1,1.55,1.64,1,1.64,1.72,1,1.72,1.8,1,1.8,1.88,1,1.88,1.93,1,1.93,1.97,1,1.97,1.98,1,1.98,1.97,1,1.97,1.93,1,1.93,1.87,1,1.87,1.8,1,1.8,1.72,1,1.72,1.63,1,1.63,1.54,1,1.54,1.46,1,1.46,1.39,1,1.39,1.33,1,1.33,1.28,1,1.28,1.24,1,1.24,1.2,1,1.2,1.16,1,1.16,1.13,1,1.13,1.09,1,1.09,1.07,1,1.07,1.04,1,1.04,1.02,1,1.02,1,1,1])}),

                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({
                          diffuseColor : new SFColor([0.4,0.522,0.702]),
                          emissiveColor : new SFColor([0.04,0.0522,0.0702]),
                          shininess : new SFFloat(0.4)}))})),
                  geometry : new SFNode(
                    new IndexedFaceSet({
                      DEF : new SFString("Torus01-FACES"),
                      coordIndex : new MFInt32([0,5,4,-1,0,1,5,-1,1,6,5,-1,1,2,6,-1,2,7,6,-1,2,3,7,-1,3,4,7,-1,3,0,4,-1,4,9,8,-1,4,5,9,-1,5,10,9,-1,5,6,10,-1,6,11,10,-1,6,7,11,-1,7,8,11,-1,7,4,8,-1,8,13,12,-1,8,9,13,-1,9,14,13,-1,9,10,14,-1,10,15,14,-1,10,11,15,-1,11,12,15,-1,11,8,12,-1,12,1,0,-1,12,13,1,-1,13,2,1,-1,13,14,2,-1,14,3,2,-1,14,15,3,-1,15,0,3,-1,15,12,0,-1]),
                      coord : new SFNode(
                        new Coordinate({
                          DEF : new SFString("Torus01-COORD"),
                          point : new MFVec3f([80,0,0,60,20,0,40,0,0,60,-20,0,0,0,80,0,20,60,0,0,40,0,-20,60,-80,0,0,-60,20,0,-40,0,0,-60,-20,0,0.0000105,0,-80,0,20,-60,0,0,-40,0,-20,-60])}))}))})])}),

            new Transform({
              DEF : new SFString("Torus02"),
              translation : new SFVec3f([0.964,-14.5827,-0.482]),
              rotation : new SFRotation([0,1,0,1.57]),
              scale : new SFVec3f([0.73762,1,0.73762]),
              children : new MFNode([
                new TimeSensor({
                  DEF : new SFString("Torus02-TIMER"),
                  cycleInterval : new SFTime(3.33)}),

                new PositionInterpolator({
                  DEF : new SFString("Torus02-POS-INTERP"),
                  key : new MFFloat([0,0.01,0.02,0.03,0.04,0.05,0.06,0.07,0.08,0.09,0.1,0.11,0.12,0.13,0.14,0.15,0.16,0.17,0.18,0.19,0.2,0.21,0.22,0.23,0.24,0.25,0.26,0.27,0.28,0.29,0.3,0.31,0.32,0.33,0.34,0.35,0.36,0.37,0.38,0.39,0.4]),
                  keyValue : new MFVec3f([0.964,0,-0.482,0.964,-3.8,-0.482,0.964,-7.2,-0.482,0.964,-10.2,-0.482,0.964,-12.8,-0.482,0.964,-15,-0.482,0.964,-16.8,-0.482,0.964,-18.2,-0.482,0.964,-19.2,-0.482,0.964,-19.8,-0.482,0.964,-20,-0.482,0.964,-19.6,-0.482,0.964,-18.6,-0.482,0.964,-16.9,-0.482,0.964,-14.9,-0.482,0.964,-12.5,-0.482,0.964,-9.92,-0.482,0.964,-7.26,-0.482,0.964,-4.64,-0.482,0.964,-2.18,-0.482,0.964,0,-0.482,0.964,2.18,-0.482,0.964,4.64,-0.482,0.964,7.26,-0.482,0.964,9.92,-0.482,0.964,12.5,-0.482,0.964,14.9,-0.482,0.964,16.9,-0.482,0.964,18.6,-0.482,0.964,19.6,-0.482,0.964,20,-0.482,0.964,19.8,-0.482,0.964,19.2,-0.482,0.964,18.2,-0.482,0.964,16.8,-0.482,0.964,15,-0.482,0.964,12.8,-0.482,0.964,10.2,-0.482,0.964,7.2,-0.482,0.964,3.8,-0.482,0.964,0,-0.482])}),

                new PositionInterpolator({
                  DEF : new SFString("Torus02-SCALE-INTERP"),
                  key : new MFFloat([0,0.01,0.02,0.03,0.04,0.05,0.06,0.07,0.08,0.09,0.1,0.11,0.12,0.13,0.14,0.15,0.16,0.17,0.18,0.19,0.2,0.21,0.22,0.23,0.24,0.25,0.26,0.27,0.28,0.29,0.3,0.31,0.32,0.33,0.34,0.35,0.36,0.37,0.38,0.39,0.4]),
                  keyValue : new MFVec3f([1,1,1,0.979,1,0.979,0.959,1,0.959,0.939,1,0.939,0.92,1,0.92,0.901,1,0.901,0.882,1,0.882,0.864,1,0.864,0.847,1,0.847,0.83,1,0.83,0.813,1,0.813,0.796,1,0.796,0.777,1,0.777,0.759,1,0.759,0.74,1,0.74,0.722,1,0.722,0.706,1,0.706,0.693,1,0.693,0.682,1,0.682,0.675,1,0.675,0.672,1,0.672,0.674,1,0.674,0.68,1,0.68,0.69,1,0.69,0.703,1,0.703,0.718,1,0.718,0.734,1,0.734,0.752,1,0.752,0.771,1,0.771,0.789,1,0.789,0.806,1,0.806,0.823,1,0.823,0.841,1,0.841,0.86,1,0.86,0.879,1,0.879,0.899,1,0.899,0.919,1,0.919,0.94,1,0.94,0.962,1,0.962,0.985,1,0.985,1.01,1,1.01])}),

                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({
                          diffuseColor : new SFColor([0.4,0.522,0.702]),
                          emissiveColor : new SFColor([0.04,0.0522,0.0702]),
                          shininess : new SFFloat(0.4)}))})),
                  geometry : new SFNode(
                    new IndexedFaceSet({
                      DEF : new SFString("Torus02-FACES"),
                      coordIndex : new MFInt32([0,5,4,-1,0,1,5,-1,1,6,5,-1,1,2,6,-1,2,7,6,-1,2,3,7,-1,3,4,7,-1,3,0,4,-1,4,9,8,-1,4,5,9,-1,5,10,9,-1,5,6,10,-1,6,11,10,-1,6,7,11,-1,7,8,11,-1,7,4,8,-1,8,13,12,-1,8,9,13,-1,9,14,13,-1,9,10,14,-1,10,15,14,-1,10,11,15,-1,11,12,15,-1,11,8,12,-1,12,1,0,-1,12,13,1,-1,13,2,1,-1,13,14,2,-1,14,3,2,-1,14,15,3,-1,15,0,3,-1,15,12,0,-1]),
                      coord : new SFNode(
                        new Coordinate({
                          DEF : new SFString("Torus02-COORD"),
                          point : new MFVec3f([120,0,0,100,20,0,80,0,0,100,-20,0,0,0,120,0,20,100,0,0,80,0,-20,100,-120,0,-0.0000105,-100,20,0,-80,0,0,-100,-20,0,0.0000157,0,-120,0.0000131,20,-100,0.0000105,0,-80,0.0000131,-20,-100])}))}))})])}),

            new Transform({
              DEF : new SFString("Sphere01"),
              rotation : new SFRotation([0,1,0,1.57]),
              scale : new SFVec3f([1.02793,0.729241,1.02793]),
              scaleOrientation : new SFRotation([0,-1,0,0.227]),
              children : new MFNode([
                new TimeSensor({
                  DEF : new SFString("Sphere01-TIMER"),
                  cycleInterval : new SFTime(3.33)}),

                new PositionInterpolator({
                  DEF : new SFString("Sphere01-SCALE-INTERP"),
                  key : new MFFloat([0,0.01,0.02,0.03,0.04,0.05,0.06,0.07,0.08,0.09,0.1,0.11,0.12,0.13,0.14,0.15,0.16,0.17,0.18,0.19,0.2,0.21,0.22,0.23,0.24,0.25,0.26,0.27,0.28,0.29,0.3,0.31,0.32,0.33,0.34,0.35,0.36,0.37,0.38,0.39,0.4]),
                  keyValue : new MFVec3f([1,0.725,1,0.964,0.752,0.964,0.933,0.775,0.933,0.907,0.795,0.907,0.886,0.812,0.886,0.871,0.824,0.871,0.86,0.833,0.86,0.855,0.839,0.855,0.855,0.841,0.855,0.86,0.839,0.86,0.87,0.833,0.87,0.89,0.82,0.89,0.925,0.798,0.925,0.97,0.768,0.97,1.02,0.734,1.02,1.08,0.698,1.08,1.13,0.662,1.13,1.18,0.63,1.18,1.22,0.604,1.22,1.24,0.586,1.24,1.25,0.579,1.25,1.24,0.584,1.24,1.22,0.601,1.22,1.18,0.626,1.18,1.13,0.656,1.13,1.08,0.69,1.08,1.03,0.725,1.03,0.981,0.758,0.981,0.937,0.787,0.937,0.902,0.809,0.902,0.882,0.822,0.882,0.872,0.827,0.872,0.866,0.83,0.866,0.866,0.828,0.866,0.87,0.824,0.87,0.879,0.816,0.879,0.894,0.805,0.894,0.913,0.79,0.913,0.937,0.772,0.937,0.965,0.75,0.965,0.999,0.725,0.999])}),

                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({
                          diffuseColor : new SFColor([0.882,0.345,0.78])}))})),
                  geometry : new SFNode(
                    new IndexedFaceSet({
                      DEF : new SFString("Sphere01-FACES"),
                      coordIndex : new MFInt32([1,0,2,-1,2,0,3,-1,3,0,4,-1,4,0,5,-1,5,0,6,-1,6,0,7,-1,7,0,8,-1,8,0,9,-1,9,0,10,-1,10,0,11,-1,11,0,12,-1,12,0,1,-1,13,1,14,-1,14,1,2,-1,14,2,15,-1,15,2,3,-1,15,3,16,-1,16,3,4,-1,16,4,17,-1,17,4,5,-1,17,5,18,-1,18,5,6,-1,18,6,19,-1,19,6,7,-1,19,7,20,-1,20,7,8,-1,20,8,21,-1,21,8,9,-1,21,9,22,-1,22,9,10,-1,22,10,23,-1,23,10,11,-1,23,11,24,-1,24,11,12,-1,24,12,13,-1,13,12,1,-1,25,13,26,-1,26,13,14,-1,26,14,27,-1,27,14,15,-1,27,15,28,-1,28,15,16,-1,28,16,29,-1,29,16,17,-1,29,17,30,-1,30,17,18,-1,30,18,31,-1,31,18,19,-1,31,19,32,-1,32,19,20,-1,32,20,33,-1,33,20,21,-1,33,21,34,-1,34,21,22,-1,34,22,35,-1,35,22,23,-1,35,23,36,-1,36,23,24,-1,36,24,25,-1,25,24,13,-1,37,25,38,-1,38,25,26,-1,38,26,39,-1,39,26,27,-1,39,27,40,-1,40,27,28,-1,40,28,41,-1,41,28,29,-1,41,29,42,-1,42,29,30,-1,42,30,43,-1,43,30,31,-1,43,31,44,-1,44,31,32,-1,44,32,45,-1,45,32,33,-1,45,33,46,-1,46,33,34,-1,46,34,47,-1,47,34,35,-1,47,35,48,-1,48,35,36,-1,48,36,37,-1,37,36,25,-1,49,37,50,-1,50,37,38,-1,50,38,51,-1,51,38,39,-1,51,39,52,-1,52,39,40,-1,52,40,53,-1,53,40,41,-1,53,41,54,-1,54,41,42,-1,54,42,55,-1,55,42,43,-1,55,43,56,-1,56,43,44,-1,56,44,57,-1,57,44,45,-1,57,45,58,-1,58,45,46,-1,58,46,59,-1,59,46,47,-1,59,47,60,-1,60,47,48,-1,60,48,49,-1,49,48,37,-1,50,61,49,-1,51,61,50,-1,52,61,51,-1,53,61,52,-1,54,61,53,-1,55,61,54,-1,56,61,55,-1,57,61,56,-1,58,61,57,-1,59,61,58,-1,60,61,59,-1,49,61,60,-1]),
                      coord : new SFNode(
                        new Coordinate({
                          DEF : new SFString("Sphere01-COORD"),
                          point : new MFVec3f([0,140,0,70,121,0,60.6,121,-35,35,121,-60.6,0,121,-70,-35,121,-60.6,-60.6,121,-35,-70,121,0,-60.6,121,35,-35,121,60.6,0,121,70,35,121,60.6,60.6,121,35,121,70,0,105,70,-60.6,60.6,70,-105,0,70,-121,-60.6,70,-105,-105,70,-60.6,-121,70,0.0000106,-105,70,60.6,-60.6,70,105,0.0000159,70,121,60.6,70,105,105,70,60.6,140,0,0,121,0,-70,70,0,-121,0,0,-140,-70,0,-121,-121,0,-70,-140,0,0.0000122,-121,0,70,-70,0,121,0.0000184,0,140,70,0,121,121,0,70,121,-70,0,105,-70,-60.6,60.6,-70,-105,0,-70,-121,-60.6,-70,-105,-105,-70,-60.6,-121,-70,0.0000106,-105,-70,60.6,-60.6,-70,105,0.0000159,-70,121,60.6,-70,105,105,-70,60.6,70,-121,0,60.6,-121,-35,35,-121,-60.6,0,-121,-70,-35,-121,-60.6,-60.6,-121,-35,-70,-121,0,-60.6,-121,35,-35,-121,60.6,0,-121,70,35,-121,60.6,60.6,-121,35,0,-140,0])}))}))})])}),

            new ROUTE({
              fromNode : new SFString("Torus01-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Torus01-POS-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Torus01-POS-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Torus01"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("TimeSensor01-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("TimeSensor01-SCRIPT"),
              toField : new SFString("fractionIn")}),

            new ROUTE({
              fromNode : new SFString("TimeSensor01-SCRIPT"),
              fromField : new SFString("fractionOut"),
              toNode : new SFString("Torus01-POS-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Torus01-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Torus01-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Torus01-ROT-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Torus01"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("TimeSensor01-SCRIPT"),
              fromField : new SFString("fractionOut"),
              toNode : new SFString("Torus01-ROT-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Torus01-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Torus01-SCALE-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Torus01-SCALE-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Torus01"),
              toField : new SFString("set_scale")}),

            new ROUTE({
              fromNode : new SFString("TimeSensor01-SCRIPT"),
              fromField : new SFString("fractionOut"),
              toNode : new SFString("Torus01-SCALE-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Torus02-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Torus02-POS-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Torus02-POS-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Torus02"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("TimeSensor01-SCRIPT"),
              fromField : new SFString("fractionOut"),
              toNode : new SFString("Torus02-POS-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Torus02-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Torus02-SCALE-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Torus02-SCALE-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Torus02"),
              toField : new SFString("set_scale")}),

            new ROUTE({
              fromNode : new SFString("TimeSensor01-SCRIPT"),
              fromField : new SFString("fractionOut"),
              toNode : new SFString("Torus02-SCALE-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Sphere01-TIMER"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Sphere01-SCALE-INTERP"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Sphere01-SCALE-INTERP"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Sphere01"),
              toField : new SFString("set_scale")}),

            new ROUTE({
              fromNode : new SFString("TimeSensor01-SCRIPT"),
              fromField : new SFString("fractionOut"),
              toNode : new SFString("Sphere01-SCALE-INTERP"),
              toField : new SFString("set_fraction")})])}))});
console.log(X3D0.toXMLNode());