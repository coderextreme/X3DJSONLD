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
var Transform = require('./x3d.mjs');
var VisibilitySensor = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var ProtoInstance = require('./x3d.mjs');
var Inline = require('./x3d.mjs');
var TouchSensor = require('./x3d.mjs');
var Switch = require('./x3d.mjs');
var SFInt32 = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var ImageTexture = require('./x3d.mjs');
var IndexedFaceSet = require('./x3d.mjs');
var MFInt32 = require('./x3d.mjs');
var TextureCoordinate = require('./x3d.mjs');
var MFVec2f = require('./x3d.mjs');
var Coordinate = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var Text = require('./x3d.mjs');
var MFFloat = require('./x3d.mjs');
var FontStyle = require('./x3d.mjs');
var fieldValue = require('./x3d.mjs');
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
              content : new SFString("Thu, 23 Apr 2015 06:06:59 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V0.7.8, http://titania.create3000.de")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Thu, 23 Apr 2015 06:06:59 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new ExternProtoDeclare({
              name : new SFString("Int"),
              url : new MFString(["Int_proto.x3d"]),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("startTime"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFINT32,
                  name : new SFString("value_changed"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFINT32,
                  name : new SFString("keyValue"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)})])}),

            new ExternProtoDeclare({
              name : new SFString("BoolSwitch"),
              url : new MFString(["BoolSwitch_proto.x3d"]),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("isActive"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFINT32,
                  name : new SFString("wichChoice_changed"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)})])}),

            new ExternProtoDeclare({
              name : new SFString("Switcher"),
              url : new MFString(["Switcher_proto.x3d"]),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFINT32,
                  name : new SFString("minValue"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFINT32,
                  name : new SFString("maxValue"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("prev"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("next"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFINT32,
                  name : new SFString("offset"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFINT32,
                  name : new SFString("whichChoice_changed"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)})])}),

            new WorldInfo({
              info : new MFString([", ","Created in TitaniaPackaged by CosmoPackage"])}),

            new Transform({
              DEF : new SFString("Content"),
              children : new MFNode([
                new Transform({
                  DEF : new SFString("vs"),
                  children : new MFNode([
                    new VisibilitySensor({
                      DEF : new SFString("_1"),
                      size : new SFVec3f([0.36,0.12,0.003]),
                      center : new SFVec3f([0,0,-0.298])})])}),

                new Transform({
                  DEF : new SFString("Int"),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("Int"),
                      DEF : new SFString("_2")})])}),

                new Transform({
                  DEF : new SFString("Else-bg"),
                  children : new MFNode([
                    new Inline({
                      url : new MFString(["else-bg.x3d"]),
                      bboxSize : new SFVec3f([0.360011,0.120031,0.00224701]),
                      bboxCenter : new SFVec3f([3.7998e-7,-4.65661e-7,-0.298867])})])}),

                new Transform({
                  DEF : new SFString("Next"),
                  children : new MFNode([
                    new TouchSensor({
                      DEF : new SFString("_3")}),

                    new Switch({
                      DEF : new SFString("_4"),
                      whichChoice : new SFInt32(2),
                      children : new MFNode([
                        new Transform({}),

                        new Transform({
                          translation : new SFVec3f([0.156605,-0.0463719,-0.296069]),
                          scale : new SFVec3f([0.0205224,0.0205224,0.205224]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  texture : new SFNode(
                                    new ImageTexture({
                                      url : new MFString(["focus.gif"])}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  coordIndex : new MFInt32([0,1,2,3,-1]),
                                  texCoord : new SFNode(
                                    new TextureCoordinate({
                                      point : new MFVec2f([0,0,1,0,1,1,0,1])})),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0])}))}))})])}),

                        new Transform({
                          DEF : new SFString("BoolSwitch"),
                          children : new MFNode([
                            new ProtoInstance({
                              name : new SFString("BoolSwitch"),
                              DEF : new SFString("_5")})])})])}),

                    new Transform({
                      DEF : new SFString("next"),
                      translation : new SFVec3f([0.163886,-0.0464349,-0.296962]),
                      scale : new SFVec3f([0.0112658,0.0112657,0.112661]),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  ambientIntensity : new SFFloat(0),
                                  diffuseColor : new SFColor([0,0,0]),
                                  shininess : new SFFloat(0)}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              coordIndex : new MFInt32([2,1,0,-1,3,4,5,-1]),
                              coord : new SFNode(
                                new Coordinate({
                                  point : new MFVec3f([-0.5,-0.5,0,-0.5,0.5,0,0.5,0,0,-0.489453,0,0,-1.48945,0.5,0,-1.48945,-0.5,0])}))}))})])})])}),

                new Transform({
                  DEF : new SFString("txt"),
                  children : new MFNode([
                    new Switch({
                      DEF : new SFString("_6"),
                      whichChoice : new SFInt32(0),
                      children : new MFNode([
                        new Transform({
                          DEF : new SFString("t1"),
                          translation : new SFVec3f([-0.125224,0.0301585,-0.296962]),
                          scale : new SFVec3f([0.00272371,0.00272434,0.00272354]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      ambientIntensity : new SFFloat(0),
                                      diffuseColor : new SFColor([0,0,0]),
                                      shininess : new SFFloat(0)}))})),
                              geometry : new SFNode(
                                new Text({
                                  string : new MFString([", ","Kino, Filme, Stars. Und was gibt's neues?, ","Wenn du nah genug an einem Filmplakat, ","bist, bekommst du noch mehr Info., ","Das neueste Filmchen kannst du dir hiergleich um die Ecke anschauen, aber ..."]),
                                  length : new MFFloat([0]),
                                  fontStyle : new SFNode(
                                    new FontStyle({
                                      family : new MFString(["SANS"]),
                                      size : new SFFloat(6)}))}))})])}),

                        new Transform({
                          DEF : new SFString("t2"),
                          translation : new SFVec3f([-0.125224,0.0301585,-0.296962]),
                          scale : new SFVec3f([0.00272371,0.00272434,0.00272354]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      ambientIntensity : new SFFloat(0),
                                      diffuseColor : new SFColor([0,0,0]),
                                      shininess : new SFFloat(0)}))})),
                              geometry : new SFNode(
                                new Text({
                                  string : new MFString([", ","warte ab bis der Film da ist, dass kann,, ","noch einen Moment dauern. Klick doch, ","mal auf ein Filmplakat., ","Du kannst überall herumlaufen und Dichumschauen. Ich kann Dir erklären ..."]),
                                  length : new MFFloat([0]),
                                  fontStyle : new SFNode(
                                    new FontStyle({
                                      family : new MFString(["SANS"]),
                                      size : new SFFloat(6)}))}))})])}),

                        new Transform({
                          DEF : new SFString("t3"),
                          translation : new SFVec3f([-0.125213,0.0301585,-0.296962]),
                          scale : new SFVec3f([0.00267326,0.00272434,0.00272354]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      ambientIntensity : new SFFloat(0),
                                      diffuseColor : new SFColor([0,0,0]),
                                      shininess : new SFFloat(0)}))})),
                              geometry : new SFNode(
                                new Text({
                                  string : new MFString([", ","... wie das geht: Klicke einfach mit Deiner, ","Maus in die Mitte des Bildes und ziehe, ","mit gedrückt gehaltener Maustaste, ","in die Richtung, in die Du laufen möchtestoder benutze die Pfeiltasten."]),
                                  length : new MFFloat([0]),
                                  fontStyle : new SFNode(
                                    new FontStyle({
                                      family : new MFString(["SANS"]),
                                      size : new SFFloat(6)}))}))})])}),

                        new Transform({
                          DEF : new SFString("Switcher"),
                          children : new MFNode([
                            new ProtoInstance({
                              name : new SFString("Switcher"),
                              DEF : new SFString("_7"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("maxValue"),
                                  value : new SFString("2")})])})])})])})])})])}),

            new ROUTE({
              fromNode : new SFString("_1"),
              fromField : new SFString("enterTime"),
              toNode : new SFString("_2"),
              toField : new SFString("startTime")}),

            new ROUTE({
              fromNode : new SFString("_3"),
              fromField : new SFString("isOver"),
              toNode : new SFString("_5"),
              toField : new SFString("isActive")}),

            new ROUTE({
              fromNode : new SFString("_5"),
              fromField : new SFString("wichChoice_changed"),
              toNode : new SFString("_4"),
              toField : new SFString("set_whichChoice")}),

            new ROUTE({
              fromNode : new SFString("_3"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("_7"),
              toField : new SFString("set_next")}),

            new ROUTE({
              fromNode : new SFString("_2"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("_7"),
              toField : new SFString("set_offset")}),

            new ROUTE({
              fromNode : new SFString("_2"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("_6"),
              toField : new SFString("set_whichChoice")}),

            new ROUTE({
              fromNode : new SFString("_7"),
              fromField : new SFString("whichChoice_changed"),
              toNode : new SFString("_6"),
              toField : new SFString("set_whichChoice")})])}))});
console.log(X3D0.toXMLNode());
