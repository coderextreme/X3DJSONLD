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
var MetadataBoolean = require('./x3d.mjs');
var MFBool = require('./x3d.mjs');
var MetadataString = require('./x3d.mjs');
var MFString = require('./x3d.mjs');
var MetadataDouble = require('./x3d.mjs');
var MFDouble = require('./x3d.mjs');
var MetadataInteger = require('./x3d.mjs');
var MFInt32 = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var NurbsCurve = require('./x3d.mjs');
var CoordinateDouble = require('./x3d.mjs');
var MFVec3d = require('./x3d.mjs');
var X3D0 =  new X3D({

      profile : new SFString("Interchange"),
      version : new SFString("3.3"),
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
              content : new SFString("Thu, 03 Oct 2019 10:45:27 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V4.5.12, http://titania.create3000.de")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("file:///home/holger/Projekte/Library/Tests/Components/NURBS/Circle.x3d")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Thu, 03 Oct 2019 10:45:57 GMT")})])})),
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
                          value : new MFBool([false])})),
                      value : new SFNode(
                        new MetadataSet({
                          name : new SFString("nodes"),
                          DEF : new SFString("nodes"),
                          reference : new SFString("http://titania.create3000.de")}))})),
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
                                  value : new MFDouble([-0.704047462871212,0.695566762376517,0.143192350010952,0.568941727555854])})),
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
              DEF : new SFString("Circle"),
              children : new MFNode([
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({
                          emissiveColor : new SFColor([1,1,1])}))})),
                  geometry : new SFNode(
                    new NurbsCurve({
                      knot : new MFDouble([0,0,0,0.25,0.25,0.5,0.5,0.75,0.75,1,1,1]),
                      weight : new MFDouble([1,0.7071,1,0.7071,1,0.7071,1,0.7071,1]),
                      controlPoint : new SFNode(
                        new CoordinateDouble({
                          point : new MFVec3d([1,0,0,0.7071,-0.7071,0,0,-1,0,-0.7071,-0.7071,0,-1,0,0,-0.7071,0.7071,0,0,1,0,0.7071,0.7071,0,1,0,0])}))}))})])})])}))});
console.log(X3D0.toXMLNode());
