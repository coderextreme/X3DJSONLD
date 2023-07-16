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
var NurbsSwungSurface = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var NurbsCurve2D = require('./x3d.mjs');
var SFInt32 = require('./x3d.mjs');
var MFVec2d = require('./x3d.mjs');
var MetadataString = require('./x3d.mjs');
var MFString = require('./x3d.mjs');
var MetadataDouble = require('./x3d.mjs');
var MFDouble = require('./x3d.mjs');
var MetadataInteger = require('./x3d.mjs');
var MFInt32 = require('./x3d.mjs');
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
              content : new SFString("Tue, 15 Jan 2019 12:51:59 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V4.3.10, http://titania.create3000.de")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("file:///home/holger/Projekte/Library/Tests/Components/NURBS/NurbsSwungSurface.x3d")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Wed, 16 Jan 2019 13:59:25 GMT")})])})),
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
                              DEF : new SFString("NurbsSwungSurface"),
                              children : new MFNode([
                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({}))})),
                                  geometry : new SFNode(
                                    new NurbsSwungSurface({
                                      ccw : new SFBool(false),
                                      trajectoryCurve : new SFNode(
                                        new NurbsCurve2D({
                                          tessellation : new SFInt32(50),
                                          closed : new SFBool(true),
                                          order : new SFInt32(4),
                                          controlPoint : new MFVec2d([0,0,1,0,1,1,0,1,0,0])})),
                                      trajectoryCurve : new SFNode(
                                        new NurbsCurve2D({
                                          tessellation : new SFInt32(50),
                                          closed : new SFBool(true),
                                          order : new SFInt32(4),
                                          controlPoint : new MFVec2d([0,0,1,0,1,1,0,1,0,0])}))}))})])}))}))})),
                  value : new SFNode(
                    new MetadataSet({
                      name : new SFString("BrowserPanel"),
                      DEF : new SFString("BrowserPanel"),
                      reference : new SFString("http://titania.create3000.de"),
                      value : new SFNode(
                        new MetadataString({
                          name : new SFString("type"),
                          DEF : new SFString("type_2"),
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
                                  DEF : new SFString("position_3"),
                                  reference : new SFString("http://titania.create3000.de"),
                                  value : new MFDouble([5.87788534164429,6.46984958648682,13.8524446487427])})),
                              value : new SFNode(
                                new MetadataDouble({
                                  name : new SFString("orientation"),
                                  DEF : new SFString("orientation_4"),
                                  reference : new SFString("http://titania.create3000.de"),
                                  value : new MFDouble([-0.704047459582387,0.695566763588041,0.143192360296371,0.568941728510567])})),
                              value : new SFNode(
                                new MetadataDouble({
                                  name : new SFString("centerOfRotation"),
                                  DEF : new SFString("centerOfRotation_5"),
                                  reference : new SFString("http://titania.create3000.de"),
                                  value : new MFDouble([0,0,0])})),
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
                                  DEF : new SFString("position_6"),
                                  reference : new SFString("http://titania.create3000.de"),
                                  value : new MFDouble([0,10000,0])})),
                              value : new SFNode(
                                new MetadataDouble({
                                  name : new SFString("orientation"),
                                  DEF : new SFString("orientation_7"),
                                  reference : new SFString("http://titania.create3000.de"),
                                  value : new MFDouble([1,0,0,4.71238898038469])})),
                              value : new SFNode(
                                new MetadataDouble({
                                  name : new SFString("centerOfRotation"),
                                  DEF : new SFString("centerOfRotation_8"),
                                  reference : new SFString("http://titania.create3000.de"),
                                  value : new MFDouble([-0.0320612526145463,0,0.0937320149966475])})),
                              value : new SFNode(
                                new MetadataDouble({
                                  name : new SFString("fieldOfViewScale"),
                                  DEF : new SFString("fieldOfViewScale_9"),
                                  reference : new SFString("http://titania.create3000.de"),
                                  value : new MFDouble([1.21023944190259])}))})),
                          value : new SFNode(
                            new MetadataSet({
                              name : new SFString("FrontViewpoint"),
                              DEF : new SFString("FrontViewpoint"),
                              reference : new SFString("http://titania.create3000.de"),
                              value : new SFNode(
                                new MetadataDouble({
                                  name : new SFString("position"),
                                  DEF : new SFString("position_10"),
                                  reference : new SFString("http://titania.create3000.de"),
                                  value : new MFDouble([0,0,10000])})),
                              value : new SFNode(
                                new MetadataDouble({
                                  name : new SFString("orientation"),
                                  DEF : new SFString("orientation_11"),
                                  reference : new SFString("http://titania.create3000.de"),
                                  value : new MFDouble([0,0,1,0])})),
                              value : new SFNode(
                                new MetadataDouble({
                                  name : new SFString("centerOfRotation"),
                                  DEF : new SFString("centerOfRotation_12"),
                                  reference : new SFString("http://titania.create3000.de"),
                                  value : new MFDouble([-0.00884759203065143,0.0177734813359099,0])})),
                              value : new SFNode(
                                new MetadataDouble({
                                  name : new SFString("fieldOfViewScale"),
                                  DEF : new SFString("fieldOfViewScale_13"),
                                  reference : new SFString("http://titania.create3000.de"),
                                  value : new MFDouble([1.212467484375])}))}))}))})),
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

            new Transform({
              USE : new SFString("NurbsSwungSurface")})])}))});
console.log(X3D0.toXMLNode());
