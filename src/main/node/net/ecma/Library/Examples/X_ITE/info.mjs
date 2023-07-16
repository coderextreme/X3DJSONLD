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
var ExternProtoDeclare = require('./x3d.mjs');
var MFString = require('./x3d.mjs');
var field = require('./x3d.mjs');
var WorldInfo = require('./x3d.mjs');
var MetadataSet = require('./x3d.mjs');
var MetadataString = require('./x3d.mjs');
var MetadataDouble = require('./x3d.mjs');
var MFDouble = require('./x3d.mjs');
var MetadataInteger = require('./x3d.mjs');
var MFInt32 = require('./x3d.mjs');
var MetadataBoolean = require('./x3d.mjs');
var MFBool = require('./x3d.mjs');
var Anchor = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var Text = require('./x3d.mjs');
var FontStyle = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var NavigationInfo = require('./x3d.mjs');
var LayerSet = require('./x3d.mjs');
var LayoutLayer = require('./x3d.mjs');
var Layout = require('./x3d.mjs');
var Rectangle2D = require('./x3d.mjs');
var SFVec2f = require('./x3d.mjs');
var LayoutGroup = require('./x3d.mjs');
var MFFloat = require('./x3d.mjs');
var Switch = require('./x3d.mjs');
var SFInt32 = require('./x3d.mjs');
var ImageTexture = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var ProtoInstance = require('./x3d.mjs');
var fieldValue = require('./x3d.mjs');
var Inline = require('./x3d.mjs');
var Script = require('./x3d.mjs');
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
              content : new SFString("Fri, 05 Sep 2014 01:58:48 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V3.0.4, http://titania.create3000.de")}),

            new meta({
              name : new SFString("icon"),
              content : new SFString("../../ui/icons/icon-bw.svg")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("file:///home/holger/Projekte/Library/Examples/X-ITE/info.x3d")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Tue, 29 Aug 2017 13:44:31 GMT")}),

            new meta({
              name : new SFString("title"),
              content : new SFString("about:info")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new ExternProtoDeclare({
              name : new SFString("Rotor"),
              url : new MFString(["library/Rotor.x3dv"]),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("enabled"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("cycleInterval"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFVEC3F,
                  name : new SFString("axis"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFFLOAT,
                  name : new SFString("angle"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("loop"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("startTime"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("pauseTime"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("resumeTime"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("stopTime"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("isActive"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("cycleTime"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFROTATION,
                  name : new SFString("rotation_changed"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)})])}),

            new WorldInfo({
              title : new SFString("info"),
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
                          value : new MFDouble([-0.00152639835141599,-0.028887877240777,9.99995899200439])})),
                      value : new SFNode(
                        new MetadataDouble({
                          name : new SFString("orientation"),
                          DEF : new SFString("orientation"),
                          reference : new SFString("http://titania.create3000.de"),
                          value : new MFDouble([0.992968316036784,-0.052313354198032,-0.106194332803706,0.0029296877328307])})),
                      value : new SFNode(
                        new MetadataDouble({
                          name : new SFString("centerOfRotation"),
                          DEF : new SFString("centerOfRotation"),
                          reference : new SFString("http://titania.create3000.de"),
                          value : new MFDouble([0,0,0])}))})),
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
                          value : new MFBool([false])})),
                      value : new SFNode(
                        new MetadataSet({
                          name : new SFString("nodes"),
                          DEF : new SFString("nodes"),
                          reference : new SFString("http://titania.create3000.de"),
                          anchor : new SFNode(
                            new Anchor({
                              DEF : new SFString("_1"),
                              description : new SFString("http://titania.create3000.de"),
                              url : new MFString(["http://create3000.de/"]),
                              children : new MFNode([
                                new Transform({
                                  DEF : new SFString("Support"),
                                  translation : new SFVec3f([-0.421689,0.1,1]),
                                  children : new MFNode([
                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              diffuseColor : new SFColor([0,0,0])}))})),
                                      geometry : new SFNode(
                                        new Text({
                                          string : new MFString([", ","For additional support please visithttp://create3000.de."]),
                                          fontStyle : new SFNode(
                                            new FontStyle({
                                              family : new MFString([", ","PTN57F.ttfsans"]),
                                              style : new SFString("NORMAL"),
                                              size : new SFFloat(0.04),
                                              spacing : new SFFloat(1.2)}))}))})])})])}))}))})),
                  value : new SFNode(
                    new MetadataSet({
                      name : new SFString("LayerSet"),
                      DEF : new SFString("LayerSet"),
                      reference : new SFString("http://titania.create3000.de"),
                      value : new SFNode(
                        new MetadataInteger({
                          name : new SFString("activeLayer"),
                          DEF : new SFString("activeLayer"),
                          reference : new SFString("http://titania.create3000.de"),
                          value : new MFInt32([-1])}))}))})])}),

            new NavigationInfo({
              type : ["NONE"]}),
          layerSet : new SFNode(
            new LayerSet({
              DEF : new SFString("about:info"),
              order : new MFInt32([1]),
              layers : new SFNode(
                new LayoutLayer({
                  layout : new SFNode(
                    new Layout({})),
                  children : new MFNode([
                    new Transform({
                      DEF : new SFString("Background"),
                      translation : new SFVec3f([0,0,-1]),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  diffuseColor : new SFColor([0,0,0])}))})),
                          geometry : new SFNode(
                            new Rectangle2D({
                              size : new SFVec2f([1,1])}))})])}),

                    new LayoutGroup({
                      DEF : new SFString("SupportBox"),
                      layout : new SFNode(
                        new Layout({
                          align : new MFString([", ","CENTERTOP"]),
                          offset : new MFFloat([0,-0.32]),
                          size : new MFFloat([1,0.19]),
                          scaleMode : new MFString(["FRACTION"])})),
                      children : new MFNode([
                        new Shape({
                          DEF : new SFString("HorizontalGrey"),
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  diffuseColor : new SFColor([0.760784,0.760784,0.760784])}))})),
                          geometry : new SFNode(
                            new Rectangle2D({
                              size : new SFVec2f([1,1])}))})])}),

                    new LayoutGroup({
                      DEF : new SFString("Page_1"),
                      layout : new SFNode(
                        new Layout({
                          scaleMode : new MFString([", ","STRETCHNONE"])})),
                      children : new MFNode([
                        new Transform({
                          scale : new SFVec3f([1.01,1,1]),
                          children : new MFNode([
                            new Switch({
                              DEF : new SFString("Image"),
                              whichChoice : new SFInt32(1),
                              children : new MFNode([
                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      texture : new SFNode(
                                        new ImageTexture({
                                          url : new MFString(["info.png"]),
                                          repeatS : new SFBool(false),
                                          repeatT : new SFBool(false)}))})),
                                  geometry : new SFNode(
                                    new Rectangle2D({
                                      size : new SFVec2f([1,1])}))})])}),

                            new Transform({
                              DEF : new SFString("VerticalGrey"),
                              translation : new SFVec3f([0.34,0.245,0]),
                              scale : new SFVec3f([0.2,0.51,1]),
                              children : new MFNode([
                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          diffuseColor : new SFColor([0.247059,0.247059,0.247059])}))})),
                                  geometry : new SFNode(
                                    new Rectangle2D({
                                      size : new SFVec2f([1,1])}))})])}),

                            new Transform({
                              DEF : new SFString("VerticalYellow"),
                              translation : new SFVec3f([0.34,-0.255,0]),
                              scale : new SFVec3f([0.2,0.49,1]),
                              children : new MFNode([
                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          diffuseColor : new SFColor([1,0.890196,0.176471])}))})),
                                  geometry : new SFNode(
                                    new Rectangle2D({
                                      size : new SFVec2f([1,1])}))})])}),

                            new LayoutGroup({
                              DEF : new SFString("Content"),
                              layout : new SFNode(
                                new Layout({
                                  size : new MFFloat([0.1,1]),
                                  scaleMode : new MFString([", ","STRETCHSTRETCH"])})),
                              children : new MFNode([
                                new Transform({
                                  DEF : new SFString("RotatingLogo"),
                                  translation : new SFVec3f([-0.480889,0.469111,1]),
                                  scale : new SFVec3f([0.022,0.022,0.022]),
                                  children : new MFNode([
                                    new ProtoInstance({
                                      name : new SFString("Rotor"),
                                      DEF : new SFString("LogoRotor"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("cycleInterval"),
                                          value : new SFString("10")}),

                                        new fieldValue({
                                          name : new SFString("axis"),
                                          value : new SFString("0 0 -1")}),

                                        new fieldValue({
                                          name : new SFString("loop"),
                                          value : new SFString("true")})])}),

                                    new Transform({
                                      DEF : new SFString("Logo"),
                                      center : new SFVec3f([5.6,-5.9,0]),
                                      children : new MFNode([
                                        new Inline({
                                          url : new MFString(["library/logo.x3dv"])})])})])}),

                                new Transform({
                                  DEF : new SFString("Titania_1"),
                                  translation : new SFVec3f([-0.219,0.3611,1]),
                                  children : new MFNode([
                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              diffuseColor : new SFColor([1,1,1])}))})),
                                      geometry : new SFNode(
                                        new Text({
                                          DEF : new SFString("BrowserNameText"),
                                          string : new MFString(["Titania"]),
                                          fontStyle : new SFNode(
                                            new FontStyle({
                                              family : new MFString([", ","PTN77F.ttfsans"]),
                                              style : new SFString("BOLD"),
                                              size : new SFFloat(0.12)}))}))})])}),

                                new Transform({
                                  DEF : new SFString("X3D-Browser"),
                                  translation : new SFVec3f([-0.216884,0.26855,1]),
                                  children : new MFNode([
                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              diffuseColor : new SFColor([1,1,1])}))})),
                                      geometry : new SFNode(
                                        new Text({
                                          string : new MFString(["X3D Browser"]),
                                          fontStyle : new SFNode(
                                            new FontStyle({
                                              family : new MFString([", ","PTN57F.ttfsans"]),
                                              style : new SFString("BOLD"),
                                              size : new SFFloat(0.08)}))}))})])}),

                                new Transform({
                                  DEF : new SFString("StayInteractive"),
                                  translation : new SFVec3f([-0.213525,0.219,1]),
                                  children : new MFNode([
                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              diffuseColor : new SFColor([1,1,1])}))})),
                                      geometry : new SFNode(
                                        new Text({
                                          string : new MFString(["Something special, something more!"]),
                                          length : new MFFloat([0.408361]),
                                          fontStyle : new SFNode(
                                            new FontStyle({
                                              family : new MFString([", ","PTN57F.ttfsans"]),
                                              style : new SFString("BOLD"),
                                              size : new SFFloat(0.03)}))}))})])}),

                                new Anchor({
                                  USE : new SFString("_1")}),

                                new Transform({
                                  DEF : new SFString("License"),
                                  translation : new SFVec3f([0.262,0.267,1]),
                                  children : new MFNode([
                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              diffuseColor : new SFColor([0,0,0])}))})),
                                      geometry : new SFNode(
                                        new Text({
                                          string : new MFString(["GNU GPL v3"]),
                                          fontStyle : new SFNode(
                                            new FontStyle({
                                              family : new MFString([", ","PTN77F.ttfsans"]),
                                              style : new SFString("BOLD"),
                                              size : new SFFloat(0.03)}))}))})])}),

                                new Transform({
                                  DEF : new SFString("Copyright"),
                                  translation : new SFVec3f([0.262,0.217,1]),
                                  children : new MFNode([
                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              diffuseColor : new SFColor([0,0,0])}))})),
                                      geometry : new SFNode(
                                        new Text({
                                          string : new MFString(["© 2010 - 2014"]),
                                          length : new MFFloat([0.15]),
                                          fontStyle : new SFNode(
                                            new FontStyle({
                                              family : new MFString([", ","PTN77F.ttfsans"]),
                                              style : new SFString("BOLD"),
                                              size : new SFFloat(0.03)}))}))})])}),

                                new Transform({
                                  DEF : new SFString("VersionNumber"),
                                  translation : new SFVec3f([-0.438782,-0.385263,1]),
                                  children : new MFNode([
                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              diffuseColor : new SFColor([1,1,1])}))})),
                                      geometry : new SFNode(
                                        new Text({
                                          DEF : new SFString("VersionNumberText"),
                                          string : new MFString(["3.0.4"]),
                                          maxExtent : new SFFloat(0.65),
                                          fontStyle : new SFNode(
                                            new FontStyle({
                                              family : new MFString([", ","PTN77F.ttfsans"]),
                                              style : new SFString("BOLD"),
                                              size : new SFFloat(0.34)}))}))}),

                                    new Script({
                                      DEF : new SFString("VersionNumberScript"),
                                      field : new MFNode([
                                        new field({
                                          type : field.TYPE_SFNODE,
                                          name : new SFString("browser"),
                                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                                          children : new MFNode([
                                            new Text({
                                              USE : new SFString("BrowserNameText")})])}),

                                        new field({
                                          type : field.TYPE_SFNODE,
                                          name : new SFString("version"),
                                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                                          children : new MFNode([
                                            new Text({
                                              USE : new SFString("VersionNumberText")})])}),
                                      ]),vrmlscript:
, function initialize ()
{
	browser .string = new MFString (Browser .name);
	version .string = new MFString (Browser .version);
})})])})])})])})])})])}))})]),

            new Script({
              DEF : new SFString("EnterWorld"),
              
ecmascript:eval (0
, function initialize ()
{
	Browser .setBrowserOption ('Dashboard', false);
})}),

            new ROUTE({
              fromNode : new SFString("LogoRotor"),
              fromField : new SFString("rotation_changed"),
              toNode : new SFString("Logo"),
              toField : new SFString("set_rotation")})}))});
console.log(X3D0.toXMLNode());
