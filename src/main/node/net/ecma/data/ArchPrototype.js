'use strict';
var X3D = require('./x3d.js');
try {
	var fs = require('fs');
} catch (e) {
console.log("Problems loading fs. On browser?",e);
}
var SFString = require('./x3d.js');
var SFNode = require('./x3d.js');
var head = require('./x3d.js');
var MFNode = require('./x3d.js');
var meta = require('./x3d.js');
var Scene = require('./x3d.js');
var ProtoDeclare = require('./x3d.js');
var ProtoInterface = require('./x3d.js');
var field = require('./x3d.js');
var ProtoBody = require('./x3d.js');
var Transform = require('./x3d.js');
var Shape = require('./x3d.js');
var IndexedFaceSet = require('./x3d.js');
var SFBool = require('./x3d.js');
var Coordinate = require('./x3d.js');
var Appearance = require('./x3d.js');
var Material = require('./x3d.js');
var IS = require('./x3d.js');
var connect = require('./x3d.js');
var Script = require('./x3d.js');
var MFString = require('./x3d.js');
var ROUTE = require('./x3d.js');
var ProtoInstance = require('./x3d.js');
var fieldValue = require('./x3d.js');
var Inline = require('./x3d.js');
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("3.3"),
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
              content : new SFString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")}),

            new meta({
              name : new SFString("license"),
              content : new SFString("../license.html")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new ProtoDeclare({
              name : new SFString("ArchPrototype"),
              appinfo : new SFString("Create an arch. Can modify general parameters: clearSpanWidth, riseHeight, depth, topAbutmentHeight, pierWidth, pierHeight. - Possibility to create shapes related to an arch: ArchHalf; IntradosOnly; ArchFilled; ArchHalfFilled; Lintel. See the reference file ArchModelingDiagrams.pdf to find further information. See also ArchPrototypeScript_more_readable.js.js."),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  /*COLOR OF ARCH*/
                  /*INPUT PARAMETERS*/
                  /*General parameters: measures in meters*/
                  /*Parameters to create to create shapes related to arch: put true to apply*/
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFCOLOR,
                      name : new SFString("diffuseColor"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      appinfo : new SFString("color of arch"),
                      value : new SFString("0.2 0.8 0.8")}),

                    new field({
                      type : field.TYPE_SFCOLOR,
                      name : new SFString("emissiveColor"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      appinfo : new SFString("color of arch"),
                      value : new SFString("0.2 0.8 0.8")}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("clearSpanWidth"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      appinfo : new SFString("clearSpanWidth: clearSpanWidth must be double of riseHeight to obtain an half circumference"),
                      value : new SFString("4")}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("riseHeight"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      appinfo : new SFString("riseHeight: riseHeight must be half of clearSpanWidth to obtain an half circumference"),
                      value : new SFString("2")}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("depth"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      appinfo : new SFString("depth"),
                      value : new SFString("3")}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("topAbutmentHeight"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      appinfo : new SFString("topAbutmentHeight:topAbutmentHeight=0 means no topAbutment"),
                      value : new SFString("0.5")}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("pierWidth"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      appinfo : new SFString("pierWidth:pierWidtht=0 means no pierWidth"),
                      value : new SFString("0.5")}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("pierHeight"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      appinfo : new SFString("pierHeight: pierHeight=0 means no pierHeight"),
                      value : new SFString("1")}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("archHalf"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      appinfo : new SFString("archHalf: can modify also clearSpanWidth, riseHeight, depth, pierWidth, pierHeight, topAbutmentHeight, archHalfExtensionWidth at purpose, clearSpanWidth measure refers to a full arc, consider clearSpanWidth/2 for the archHalf width"),
                      value : new SFString("false")}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("archHalfExtensionWidth"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      appinfo : new SFString("archHalfExtensionWidth: measure in meters, use only if archHalf=true, it is the width of the etension of the abutment of the archHalf. See the reference file ArchModelingDiagrams.pdf to find further information."),
                      value : new SFString("0")}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("onlyIntrados"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      appinfo : new SFString("onlyIntrados: note it is a flat curved surface, can modify also clearSpanWidth, riseHeight, depth at purpose, if needed apply archHalf=true."),
                      value : new SFString("false")}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("archFilled"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      appinfo : new SFString("archFilled: note it is an half cylinder, can modify also clearSpanWidth, riseHeight, depth at purpose."),
                      value : new SFString("false")}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("archHalfFilled"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      appinfo : new SFString("archHalfFilled: note it is a quarter cylinder, can modify also clearSpanWidth, riseHeight, depth at purpose, clearSpanWidth measure refers to a full arc, consider clearSpanWidth/2 for the archHalfFilled width."),
                      value : new SFString("false")}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("lintel"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      appinfo : new SFString("lintel: no arc is rendered, but a lintel: topAbutmentHeight on pierHeight, total height is pierHeight + topAbutmentHeight, if needed apply archHalf=true."),
                      value : new SFString("false")})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  /*First node determines node type of this prototype*/
                  /*IndexedFaceset creates arch*/
                  children : new MFNode([
                    new Transform({
                      DEF : new SFString("ArchTransform"),
                      children : new MFNode([
                        new Shape({
                          DEF : new SFString("Arch"),
                          /*note that convex='false' (meaning concave geometry) is crucial for this IFS of a geometric chord to render properly*/
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              DEF : new SFString("ArchIndex"),
                              convex : new SFBool(false),
                              solid : new SFBool(false),
                              coord : new SFNode(
                                new Coordinate({
                                  DEF : new SFString("ArchChord")}))})),
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  DEF : new SFString("MaterialNode"),
                                  IS : new SFNode(
                                    new IS({
                                      connect : new MFNode([
                                        new connect({
                                          nodeField : new SFString("emissiveColor"),
                                          protoField : new SFString("emissiveColor")}),

                                        new connect({
                                          nodeField : new SFString("diffuseColor"),
                                          protoField : new SFString("diffuseColor")})])}))}))}))})])}),
                  /*Subsequent nodes do not render, but still must be a valid X3D subgraph*/
                  /*This embedded Script provides the X3D author with additional visibility and control over prototype inputs and outputs*/

                    new Script({
                      DEF : new SFString("ArchPrototypeScript"),
                      url : new MFString(["../node/ArchPrototypeScript.js","https://coderextreme.net/X3DJSONLD/src/main/node/ArchPrototypeScript.js"]),
                      /*INPUT PARAMETERS*/
                      /*General parameters*/
                      /*Parameters to create to create shapes related to arch: put true to apply*/
                      /*OUTPUT PARAMETERS*/
                      field : new MFNode([
                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("clearSpanWidth"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          appinfo : new SFString("user or default input for clearSpanWidth parameter")}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("riseHeight"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          appinfo : new SFString("user or default input for riseHeight parameter")}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("depth"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          appinfo : new SFString("user or default input for depth parameter")}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("topAbutmentHeight"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          appinfo : new SFString("user or default input for topAbutmentHeight parameter")}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("pierWidth"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          appinfo : new SFString("user or default input for pierWidth parameter")}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("pierHeight"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          appinfo : new SFString("user or default input for pierHeight parameter")}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("archHalf"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          appinfo : new SFString("user or default input for archHalf parameter")}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("archHalfExtensionWidth"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          appinfo : new SFString("user or default input for archHalfExtensionWidth parameter")}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("onlyIntrados"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          appinfo : new SFString("user or default input for onlyIntrados parameter")}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("archFilled"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          appinfo : new SFString("user or default input for archFilled parameter")}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("archHalfFilled"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          appinfo : new SFString("user or default input for archHalfFilled parameter")}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("lintel"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          appinfo : new SFString("user or default input for lintel parameter")}),

                        new field({
                          type : field.TYPE_SFVEC3F,
                          name : new SFString("computedScale"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY),
                          appinfo : new SFString("computedScale: modify scale field - NOTE it is not used to modify the whole arch, but to modify clearSpanWidth, riseHeight, depth. It does not affect topAbutmentHeight, pierWidth, pierHeight, archHalfExtensionWidth")}),

                        new field({
                          type : field.TYPE_MFVEC3F,
                          name : new SFString("pointOut"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY),
                          appinfo : new SFString("send computed points to the Coordinate node")}),

                        new field({
                          type : field.TYPE_MFINT32,
                          name : new SFString("indexOut"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY),
                          appinfo : new SFString("send computed indices to the IndexedFaceSet node")}),
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
                              nodeField : new SFString("pierWidth"),
                              protoField : new SFString("pierWidth")}),

                            new connect({
                              nodeField : new SFString("topAbutmentHeight"),
                              protoField : new SFString("topAbutmentHeight")}),

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
                      fromField : new SFString("computedScale"),
                      fromNode : new SFString("ArchPrototypeScript"),
                      toField : new SFString("scale"),
                      toNode : new SFString("ArchTransform")}),

                    new ROUTE({
                      fromField : new SFString("pointOut"),
                      fromNode : new SFString("ArchPrototypeScript"),
                      toField : new SFString("point"),
                      toNode : new SFString("ArchChord")}),

                    new ROUTE({
                      fromField : new SFString("indexOut"),
                      fromNode : new SFString("ArchPrototypeScript"),
                      toField : new SFString("set_coordIndex"),
                      toNode : new SFString("ArchIndex")})])}))}),

            new ProtoInstance({
              name : new SFString("ArchPrototype"),
              DEF : new SFString("ArchInstance"),
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
          /*Add any ROUTEs here that connect ProtoInstance to/from prior nodes in Scene (and outside of ProtoDeclare)*/

            new Inline({
              DEF : new SFString("CoordinateAxes"),
              url : new MFString(["../data/CoordinateAxes.x3d"])})])}))});
console.log(X3D0.toXMLNode());
