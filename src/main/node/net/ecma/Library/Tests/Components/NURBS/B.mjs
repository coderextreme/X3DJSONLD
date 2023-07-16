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
var MetadataBoolean = require('./x3d.mjs');
var MFBool = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var NurbsSweptSurface = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var NurbsCurve2D = require('./x3d.mjs');
var SFInt32 = require('./x3d.mjs');
var MFVec2d = require('./x3d.mjs');
var NurbsCurve = require('./x3d.mjs');
var CoordinateDouble = require('./x3d.mjs');
var MFVec3d = require('./x3d.mjs');
var MetadataString = require('./x3d.mjs');
var MFString = require('./x3d.mjs');
var MetadataDouble = require('./x3d.mjs');
var MFDouble = require('./x3d.mjs');
var MetadataInteger = require('./x3d.mjs');
var MFInt32 = require('./x3d.mjs');
var Background = require('./x3d.mjs');
var MFColor = require('./x3d.mjs');
var Viewpoint = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var SFRotation = require('./x3d.mjs');
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
              content : new SFString("Tue, 15 Jan 2019 13:46:11 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V4.3.9, http://titania.create3000.de")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("file:///home/holger/Projekte/Library/Tests/Components/NURBS/B.x3d")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Tue, 15 Jan 2019 16:39:19 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new WorldInfo({
              metadata : new MFNode([
                new MetadataSet({
                  name : new SFString("Titania"),
                  DEF : new SFString("Titania"),
                  reference : new SFString("http://titania.create3000.de"),
                  value : new SFNode(
                    new MetadataSet({
                      name : new SFString("AngleGrid"),
                      DEF : new SFString("AngleGrid"),
                      reference : new SFString("http://titania.create3000.de"),
                      value : new SFNode(
                        new MetadataBoolean({
                          name : new SFString("enabled"),
                          DEF : new SFString("enabled"),
                          reference : new SFString("http://titania.create3000.de"),
                          value : new MFBool([false])}))})),
                  value : new SFNode(
                    new MetadataSet({
                      name : new SFString("Grid"),
                      DEF : new SFString("Grid"),
                      reference : new SFString("http://titania.create3000.de"),
                      value : new SFNode(
                        new MetadataBoolean({
                          name : new SFString("enabled"),
                          DEF : new SFString("enabled_1"),
                          reference : new SFString("http://titania.create3000.de"),
                          value : new MFBool([true])}))})),
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
                          transform : new SFNode(
                            new Transform({
                              DEF : new SFString("B"),
                              children : new MFNode([
                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          DEF : new SFString("Rococo2"),
                                          ambientIntensity : new SFFloat(0.216064),
                                          diffuseColor : new SFColor([0.864256,0.833788,0.330482]),
                                          specularColor : new SFColor([0.0955906,0.0940254,0.0681705]),
                                          shininess : new SFFloat(0.078125)}))})),
                                  geometry : new SFNode(
                                    new NurbsSweptSurface({
                                      ccw : new SFBool(false),
                                      crossSectionCurve : new SFNode(
                                        new NurbsCurve2D({
                                          tessellation : new SFInt32(40),
                                          closed : new SFBool(true),
                                          controlPoint : new MFVec2d([-0.5,-0.5,0.5,-0.5,0.5,0.5,-0.5,0.5,-0.5,-0.5])})),
                                      trajectoryCurve : new SFNode(
                                        new NurbsCurve({
                                          closed : new SFBool(true),
                                          tessellation : new SFInt32(120),
                                          order : new SFInt32(4),
                                          controlPoint : new SFNode(
                                            new CoordinateDouble({
                                              DEF : new SFString("_2"),
                                              point : new MFVec3d([0,0,0,10,0,0,10,3,0,2,5,0,10,7,0,10,10,0,0,10,0,0,0,0])}))}))}))})])}))}))})),
                  value : new SFNode(
                    new MetadataSet({
                      name : new SFString("BrowserPanel"),
                      DEF : new SFString("BrowserPanel"),
                      reference : new SFString("http://titania.create3000.de"),
                      value : new SFNode(
                        new MetadataString({
                          name : new SFString("type"),
                          DEF : new SFString("type_3"),
                          reference : new SFString("http://titania.create3000.de"),
                          value : new MFString([", ","TOP_VIEW, ","MAIN_VIEW, ","PERSPECTIVE_VIEWFRONT_VIEW"])})),
                      value : new SFNode(
                        new MetadataSet({
                          name : new SFString("viewpoints"),
                          DEF : new SFString("viewpoints"),
                          reference : new SFString("http://titania.create3000.de"),
                          value : new SFNode(
                            new MetadataSet({
                              name : new SFString("PerspectiveViewpoint"),
                              DEF : new SFString("PerspectiveViewpoint"),
                              reference : new SFString("http://titania.create3000.de"),
                              value : new SFNode(
                                new MetadataDouble({
                                  name : new SFString("position"),
                                  DEF : new SFString("position_4"),
                                  reference : new SFString("http://titania.create3000.de"),
                                  value : new MFDouble([19.5040483474731,17.2748856544495,32.6013174057007])})),
                              value : new SFNode(
                                new MetadataDouble({
                                  name : new SFString("orientation"),
                                  DEF : new SFString("orientation_5"),
                                  reference : new SFString("http://titania.create3000.de"),
                                  value : new MFDouble([-0.704047459582387,0.695566763588041,0.143192360296371,0.568941728510567])})),
                              value : new SFNode(
                                new MetadataDouble({
                                  name : new SFString("centerOfRotation"),
                                  DEF : new SFString("centerOfRotation_6"),
                                  reference : new SFString("http://titania.create3000.de"),
                                  value : new MFDouble([8.5771920979023,5.2475825548172,6.84993648529053])})),
                              value : new SFNode(
                                new MetadataDouble({
                                  name : new SFString("fieldOfViewScale"),
                                  DEF : new SFString("fieldOfViewScale"),
                                  reference : new SFString("http://titania.create3000.de"),
                                  value : new MFDouble([1])}))})),
                          value : new SFNode(
                            new MetadataSet({
                              name : new SFString("TopViewpoint"),
                              DEF : new SFString("TopViewpoint"),
                              reference : new SFString("http://titania.create3000.de"),
                              value : new SFNode(
                                new MetadataDouble({
                                  name : new SFString("position"),
                                  DEF : new SFString("position_7"),
                                  reference : new SFString("http://titania.create3000.de"),
                                  value : new MFDouble([8.57719230651855,27.859375,6.84993648529053])})),
                              value : new SFNode(
                                new MetadataDouble({
                                  name : new SFString("orientation"),
                                  DEF : new SFString("orientation_8"),
                                  reference : new SFString("http://titania.create3000.de"),
                                  value : new MFDouble([1,0,0,4.71238898038469])})),
                              value : new SFNode(
                                new MetadataDouble({
                                  name : new SFString("centerOfRotation"),
                                  DEF : new SFString("centerOfRotation_9"),
                                  reference : new SFString("http://titania.create3000.de"),
                                  value : new MFDouble([8.5771920979023,5.2475825548172,6.84993648529053])})),
                              value : new SFNode(
                                new MetadataDouble({
                                  name : new SFString("fieldOfViewScale"),
                                  DEF : new SFString("fieldOfViewScale_10"),
                                  reference : new SFString("http://titania.create3000.de"),
                                  value : new MFDouble([2.64867162704468])}))})),
                          value : new SFNode(
                            new MetadataSet({
                              name : new SFString("FrontViewpoint"),
                              DEF : new SFString("FrontViewpoint"),
                              reference : new SFString("http://titania.create3000.de"),
                              value : new SFNode(
                                new MetadataDouble({
                                  name : new SFString("position"),
                                  DEF : new SFString("position_11"),
                                  reference : new SFString("http://titania.create3000.de"),
                                  value : new MFDouble([8.57719230651855,5.24758243560791,29.4609375])})),
                              value : new SFNode(
                                new MetadataDouble({
                                  name : new SFString("orientation"),
                                  DEF : new SFString("orientation_12"),
                                  reference : new SFString("http://titania.create3000.de"),
                                  value : new MFDouble([0,0,1,0])})),
                              value : new SFNode(
                                new MetadataDouble({
                                  name : new SFString("centerOfRotation"),
                                  DEF : new SFString("centerOfRotation_13"),
                                  reference : new SFString("http://titania.create3000.de"),
                                  value : new MFDouble([8.5771920979023,5.2475825548172,6.84993648529053])})),
                              value : new SFNode(
                                new MetadataDouble({
                                  name : new SFString("fieldOfViewScale"),
                                  DEF : new SFString("fieldOfViewScale_14"),
                                  reference : new SFString("http://titania.create3000.de"),
                                  value : new MFDouble([2.64867162704468])}))}))}))})),
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
                          value : new MFInt32([0])}))}))})])}),

            new Background({
              DEF : new SFString("White"),
              skyColor : new MFColor([1,1,1])}),

            new Viewpoint({
              position : new SFVec3f([16.7099,10.2735,13.6999]),
              orientation : new SFRotation([-0.359808403403336,0.923568512592993,0.132510812340385,0.758872814422469]),
              centerOfRotation : new SFVec3f([5.03567,4.99999,0])}),

            new Transform({
              USE : new SFString("B")})])}))});
console.log(X3D0.toXMLNode());
