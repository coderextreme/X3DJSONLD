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
var WorldInfo = require('./x3d.mjs');
var MetadataSet = require('./x3d.mjs');
var MetadataInteger = require('./x3d.mjs');
var MFInt32 = require('./x3d.mjs');
var MetadataBoolean = require('./x3d.mjs');
var MFBool = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var NurbsCurve = require('./x3d.mjs');
var Coordinate = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
var Viewpoint = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var TimeSensor = require('./x3d.mjs');
var SFTime = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var NurbsPositionInterpolator = require('./x3d.mjs');
var MFDouble = require('./x3d.mjs');
var NurbsOrientationInterpolator = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var SFRotation = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var Cone = require('./x3d.mjs');
var ROUTE = require('./x3d.mjs');
var X3D0 =  new X3D({

      profile : new SFString("Full"),
      version : new SFString("3.0"),
      head : new SFNode(
        new head({
          component : new SFNode(
            new component({
              name : new SFString("NURBS"),
              level : new SFInt32(1)})),
          meta : new MFNode([
            new meta({
              name : new SFString("comment"),
              content : new SFString("World of Titania")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("26 February 2003")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Charles Adams")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("Example of animating a ball along a NurbsCurve.")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V4.3.10, http://titania.create3000.de")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("file:///home/holger/Projekte/Library/Tests/Components/NURBS/NurbsPositionInterpolator.x3d")}),

            new meta({
              name : new SFString("license"),
              content : new SFString("../license.html")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Wed, 16 Jan 2019 16:29:52 GMT")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("http://edocs.nps.edu/npspubs/scholarly/theses/2003/Jun/03Jun_Adams.pdf")}),

            new meta({
              name : new SFString("subject"),
              content : new SFString("NURBS Position Interpolator")}),

            new meta({
              name : new SFString("title"),
              content : new SFString("NurbsPositionInterpolatorExample.x3d")}),

            new meta({
              name : new SFString("warning"),
              content : new SFString("under development, needs to be upgraded to final version of X3D NURBS nodes")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new WorldInfo({
              title : new SFString("NurbsPositionInterpolatorExample"),
              metadata : new MFNode([
                new MetadataSet({
                  name : new SFString("Titania"),
                  DEF : new SFString("Titania"),
                  reference : new SFString("http://titania.create3000.de"),
                  value : new SFNode(
                    new MetadataSet({
                      name : new SFString("Page"),
                      DEF : new SFString("Page"),
                      reference : new SFString("http://titania.create3000.de"),
                      value : new SFNode(
                        new MetadataInteger({
                          name : new SFString("activeView"),
                          DEF : new SFString("activeView"),
                          reference : new SFString("http://titania.create3000.de"),
                          value : new MFInt32([1])})),
                      value : new SFNode(
                        new MetadataInteger({
                          name : new SFString("multiView"),
                          DEF : new SFString("multiView"),
                          reference : new SFString("http://titania.create3000.de"),
                          value : new MFInt32([0])}))})),
                  value : new SFNode(
                    new MetadataSet({
                      name : new SFString("Selection"),
                      DEF : new SFString("Selection"),
                      reference : new SFString("http://titania.create3000.de"),
                      value : new SFNode(
                        new MetadataBoolean({
                          name : new SFString("selectGeometry"),
                          DEF : new SFString("selectGeometry"),
                          reference : new SFString("http://titania.create3000.de"),
                          value : new MFBool([true])})),
                      value : new SFNode(
                        new MetadataSet({
                          name : new SFString("nodes"),
                          DEF : new SFString("nodes"),
                          reference : new SFString("http://titania.create3000.de"),
                          shape : new SFNode(
                            new Shape({
                              DEF : new SFString("_1"),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      emissiveColor : new SFColor([1,1,1])}))})),
                              geometry : new SFNode(
                                new NurbsCurve({
                                  DEF : new SFString("nc"),
                                  tessellation : new SFInt32(30),
                                  order : new SFInt32(4),
                                  controlPoint : new SFNode(
                                    new Coordinate({
                                      DEF : new SFString("_2"),
                                      point : new MFVec3f([4,6,0,7,12,0,11,6,0,15,2,0,20,6,0])}))}))}))}))}))})])}),

            new Viewpoint({
              description : new SFString("NurbsPositionInterpolator path"),
              position : new SFVec3f([11,4.6,18])}),

            new TimeSensor({
              DEF : new SFString("ts"),
              cycleInterval : new SFTime(4),
              loop : new SFBool(true)}),

            new NurbsPositionInterpolator({
              DEF : new SFString("npi"),
              order : new SFInt32(4),
              knot : new MFDouble([0,0.25,0.5,0.75,1]),
              controlPoint : new SFNode(
                new Coordinate({
                  DEF : new SFString("_3"),
                  point : new MFVec3f([4,6,0,7,12,0,11,6,0,15,2,0,20,6,0])}))}),

            new NurbsOrientationInterpolator({
              DEF : new SFString("_4"),
              order : new SFInt32(4),
              knot : new MFDouble([0,0.25,0.5,0.75,1]),
              controlPoint : new SFNode(
                new Coordinate({
                  USE : new SFString("_3")}))}),

            new Transform({
              DEF : new SFString("_5"),
              translation : new SFVec3f([12.6002,4.57153,0]),
              rotation : new SFRotation([0.68202330039387,0.731330443588842,0,1.57048490427067]),
              children : new MFNode([
                new Transform({
                  DEF : new SFString("Cone"),
                  rotation : new SFRotation([0.999999999993254,0.00000367320512848233,4.15024534058304e-19,1.5707963267949]),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              DEF : new SFString("Rococo28"),
                              ambientIntensity : new SFFloat(0.226102),
                              diffuseColor : new SFColor([0.279645,0.904409,0.511589]),
                              specularColor : new SFColor([0.0955906,0.0955906,0.0955906]),
                              shininess : new SFFloat(0.078125)}))})),
                      geometry : new SFNode(
                        new Cone({}))})])})])}),

            new Shape({
              USE : new SFString("_1")}),

            new ROUTE({
              fromNode : new SFString("ts"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("npi"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("npi"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("_5"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("ts"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("_4"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("_4"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("_5"),
              toField : new SFString("set_rotation")})])}))});
console.log(X3D0.toXMLNode());
