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
var ProtoDeclare = require('./x3d.mjs');
var ProtoInterface = require('./x3d.mjs');
var field = require('./x3d.mjs');
var ProtoBody = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var IS = require('./x3d.mjs');
var connect = require('./x3d.mjs');
var IndexedFaceSet = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var Coordinate = require('./x3d.mjs');
var Script = require('./x3d.mjs');
var MFString = require('./x3d.mjs');
var ROUTE = require('./x3d.mjs');
var ProtoInstance = require('./x3d.mjs');
var fieldValue = require('./x3d.mjs');
var Inline = require('./x3d.mjs');
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("4.0"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("ArchPrototype.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("Create an arch. Can modify general parameters: clearSpanWidth, riseHeight, depth, topAbutmentHeight, pierWidth, pierHeight. See the reference file ArchModelingDiagrams.pdf to find further information. See also ArchPrototypeScript_more_readable.js.")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("Possibility to create shapes related to arch: ArchHalf; IntradosOnly; ArchFilled; ArchHalfFilled; Lintel. See the reference file ArchModelingDiagrams.pdf to find further information.")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Michele Foti, Don Brutzman")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("15 December 2014")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("27 November 2015")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("ArchModelingDiagrams.pdf")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("https://en.wikipedia.org/wiki/Arch")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("http://X3dGraphics.com/examples/X3dForAdvancedModeling/Buildings/ArchPrototype.x3d")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new ProtoDeclare({
              name : new SFString("ArchPrototype"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFCOLOR,
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      name : new SFString("diffuseColor"),
                      value : new SFString("0.2 0.8 0.8")}),

                    new field({
                      type : field.TYPE_SFCOLOR,
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      name : new SFString("emissiveColor"),
                      value : new SFString("0.2 0.8 0.8")}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      name : new SFString("clearSpanWidth"),
                      value : new SFString("4")}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      name : new SFString("riseHeight"),
                      value : new SFString("2")}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      name : new SFString("depth"),
                      value : new SFString("3")}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      name : new SFString("topAbutmentHeight"),
                      value : new SFString("0.5")}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      name : new SFString("pierWidth"),
                      value : new SFString("0.5")}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      name : new SFString("pierHeight"),
                      value : new SFString("1")}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      name : new SFString("archHalf")}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      name : new SFString("archHalfExtensionWidth")}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      name : new SFString("onlyIntrados")}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      name : new SFString("archFilled")}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      name : new SFString("archHalfFilled")}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      name : new SFString("lintel")})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Transform({
                      DEF : new SFString("ArchTransform"),
                      child : new SFNode(
                        new Shape({
                          DEF : new SFString("Arch"),
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  DEF : new SFString("MaterialNode"),
                                  IS : new SFNode(
                                    new IS({
                                      connect : new MFNode([
                                        new connect({
                                          nodeField : new SFString("diffuseColor"),
                                          protoField : new SFString("diffuseColor")}),

                                        new connect({
                                          nodeField : new SFString("emissiveColor"),
                                          protoField : new SFString("emissiveColor")})])}))}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              DEF : new SFString("ArchIndex"),
                              solid : new SFBool(false),
                              convex : new SFBool(false),
                              coord : new SFNode(
                                new Coordinate({
                                  DEF : new SFString("ArchChord")}))}))}))}),

                    new Script({
                      DEF : new SFString("ArchPrototypeScript"),
                      url : new MFString(["../node/ArchPrototypeScript.js","https://coderextreme.net/X3DJSONLD/src/main/node/ArchPrototypeScript.js"]),
                      field : new MFNode([
                        new field({
                          type : field.TYPE_SFFLOAT,
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          name : new SFString("clearSpanWidth")}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          name : new SFString("riseHeight")}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          name : new SFString("depth")}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          name : new SFString("topAbutmentHeight")}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          name : new SFString("pierWidth")}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          name : new SFString("pierHeight")}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          name : new SFString("archHalf")}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          name : new SFString("archHalfExtensionWidth")}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          name : new SFString("onlyIntrados")}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          name : new SFString("archFilled")}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          name : new SFString("archHalfFilled")}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          name : new SFString("lintel")}),

                        new field({
                          type : field.TYPE_SFVEC3F,
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY),
                          name : new SFString("computedScale")}),

                        new field({
                          type : field.TYPE_MFVEC3F,
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY),
                          name : new SFString("pointOut")}),

                        new field({
                          type : field.TYPE_MFINT32,
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY),
                          name : new SFString("indexOut")}),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("clearSpanWidth"),
                              protoField : new SFString("clearSpanWidth")}),

                            new connect({
                              nodeField : new SFString("riseHeight"),
                              protoField : new SFString("riseHeight")}),

                            new connect({
                              nodeField : new SFString("depth"),
                              protoField : new SFString("depth")}),

                            new connect({
                              nodeField : new SFString("topAbutmentHeight"),
                              protoField : new SFString("topAbutmentHeight")}),

                            new connect({
                              nodeField : new SFString("pierWidth"),
                              protoField : new SFString("pierWidth")}),

                            new connect({
                              nodeField : new SFString("pierHeight"),
                              protoField : new SFString("pierHeight")}),

                            new connect({
                              nodeField : new SFString("archHalf"),
                              protoField : new SFString("archHalf")}),

                            new connect({
                              nodeField : new SFString("archHalfExtensionWidth"),
                              protoField : new SFString("archHalfExtensionWidth")}),

                            new connect({
                              nodeField : new SFString("onlyIntrados"),
                              protoField : new SFString("onlyIntrados")}),

                            new connect({
                              nodeField : new SFString("archFilled"),
                              protoField : new SFString("archFilled")}),

                            new connect({
                              nodeField : new SFString("archHalfFilled"),
                              protoField : new SFString("archHalfFilled")}),

                            new connect({
                              nodeField : new SFString("lintel"),
                              protoField : new SFString("lintel")})])})])}),

                    new ROUTE({
                      fromNode : new SFString("ArchPrototypeScript"),
                      fromField : new SFString("computedScale"),
                      toNode : new SFString("ArchTransform"),
                      toField : new SFString("scale")}),

                    new ROUTE({
                      fromNode : new SFString("ArchPrototypeScript"),
                      fromField : new SFString("pointOut"),
                      toNode : new SFString("ArchChord"),
                      toField : new SFString("point")}),

                    new ROUTE({
                      fromNode : new SFString("ArchPrototypeScript"),
                      fromField : new SFString("indexOut"),
                      toNode : new SFString("ArchIndex"),
                      toField : new SFString("set_coordIndex")})])}))}),

            new ProtoInstance({
              DEF : new SFString("ArchInstance"),
              name : new SFString("ArchPrototype"),
              fieldValue : new MFNode([
                new fieldValue({
                  name : new SFString("diffuseColor"),
                  value : new SFString("0.5 0.3 0.6")}),

                new fieldValue({
                  name : new SFString("emissiveColor"),
                  value : new SFString("0.5 0.3 0.6")}),

                new fieldValue({
                  name : new SFString("clearSpanWidth"),
                  value : new SFString("5")}),

                new fieldValue({
                  name : new SFString("riseHeight"),
                  value : new SFString("2.5")}),

                new fieldValue({
                  name : new SFString("depth"),
                  value : new SFString("2")}),

                new fieldValue({
                  name : new SFString("topAbutmentHeight"),
                  value : new SFString("0.6")}),

                new fieldValue({
                  name : new SFString("pierWidth"),
                  value : new SFString("1")}),

                new fieldValue({
                  name : new SFString("pierHeight"),
                  value : new SFString("2")})])}),

            new Inline({
              DEF : new SFString("CoordinateAxes"),
              global : new SFBool(true),
              url : new MFString(["../data/CoordinateAxes.x3d"])})])}))});
console.log(X3D0.toXMLNode());
