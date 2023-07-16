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
var SFVec3f = require('./x3d.mjs');
var Switch = require('./x3d.mjs');
var SFInt32 = require('./x3d.mjs');
var Inline = require('./x3d.mjs');
var ProximitySensor = require('./x3d.mjs');
var Collision = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var Viewpoint = require('./x3d.mjs');
var ProtoInstance = require('./x3d.mjs');
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
              content : new SFString("Sat, 25 Apr 2015 12:38:24 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V0.7.8, http://titania.create3000.de")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Sat, 25 Apr 2015 12:38:24 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new ExternProtoDeclare({
              name : new SFString("World"),
              url : new MFString(["World_proto.x3d"]),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("enabled"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("startTime"),
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
                  name : new SFString("enterTime"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("exitTime"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_MFNODE,
                  name : new SFString("interface"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_MFNODE,
                  name : new SFString("children"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)})])}),

            new ExternProtoDeclare({
              name : new SFString("Bool"),
              url : new MFString(["Bool_proto.x3d"]),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("value"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("startTime"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("bool"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)})])}),

            new ExternProtoDeclare({
              name : new SFString("Int"),
              url : new MFString(["Int_proto.x3d"]),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFINT32,
                  name : new SFString("value"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("startTime"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFINT32,
                  name : new SFString("int"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)})])}),

            new ExternProtoDeclare({
              name : new SFString("Import"),
              url : new MFString(["Import_proto.x3d"]),
              field : new MFNode([
                new field({
                  type : field.TYPE_MFSTRING,
                  name : new SFString("url"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("startTime"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("isActive"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("exitTime"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_MFNODE,
                  name : new SFString("parameter"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_MFNODE,
                  name : new SFString("children"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)})])}),

            new ExternProtoDeclare({
              name : new SFString("Scene"),
              url : new MFString(["Scene_proto.x3d"]),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("enabled"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("startTime"),
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
                  name : new SFString("enterTime"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("exitTime"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_MFNODE,
                  name : new SFString("interface"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)})])}),

            new WorldInfo({
              info : new MFString([", ","Created in CosmoWorldsPackaged by CosmoPackage"])}),

            new Transform({
              DEF : new SFString("HUD_1"),
              children : new MFNode([
                new Transform({
                  DEF : new SFString("ps_handle"),
                  scale : new SFVec3f([1000.87,1000.87,1000.87]),
                  children : new MFNode([
                    new Switch({
                      whichChoice : new SFInt32(1),
                      children : new MFNode([
                        new Transform({}),

                        new Inline({
                          url : new MFString(["cube.x3d"]),
                          bboxSize : new SFVec3f([1,1,1])})])})])}),

                new Transform({
                  DEF : new SFString("ProximitySensor"),
                  children : new MFNode([
                    new ProximitySensor({
                      DEF : new SFString("_1"),
                      size : new SFVec3f([1000.87,1000.87,1000.87])})])}),

                new Transform({
                  DEF : new SFString("HUD"),
                  children : new MFNode([
                    new Collision({
                      enabled : new SFBool(false),
                      proxy : new SFNode(
                        new Transform({
                          DEF : new SFString("HUDObj"),
                          children : new MFNode([
                            new Viewpoint({
                              DEF : new SFString("HUDVP1"),
                              position : new SFVec3f([0,0,0])}),

                            new Transform({
                              DEF : new SFString("World"),
                              children : new MFNode([
                                new ProtoInstance({
                                  name : new SFString("World"),
                                  fieldValue : new MFNode([
                                    new fieldValue({
                                      name : new SFString("interface"),
                                      children : new MFNode([
                                        new ProtoInstance({
                                          name : new SFString("Bool"),
                                          DEF : new SFString("_2")}),

                                        new ProtoInstance({
                                          name : new SFString("Bool"),
                                          DEF : new SFString("_3")}),

                                        new ProtoInstance({
                                          name : new SFString("Bool"),
                                          DEF : new SFString("_4")}),

                                        new ProtoInstance({
                                          name : new SFString("Bool"),
                                          DEF : new SFString("_5")}),

                                        new ProtoInstance({
                                          name : new SFString("Bool"),
                                          DEF : new SFString("_6")}),

                                        new ProtoInstance({
                                          name : new SFString("Bool"),
                                          DEF : new SFString("_7")}),

                                        new ProtoInstance({
                                          name : new SFString("Bool"),
                                          DEF : new SFString("_8")}),

                                        new ProtoInstance({
                                          name : new SFString("Int"),
                                          DEF : new SFString("_9")})])}),

                                    new fieldValue({
                                      name : new SFString("children"),
                                      children : new MFNode([
                                        new ProtoInstance({
                                          name : new SFString("Import"),
                                          DEF : new SFString("_10"),
                                          fieldValue : new MFNode([
                                            new fieldValue({
                                              name : new SFString("url"),
                                              value : new SFString("\", \" \"buttons.x3dfile:/net/usr/customer/mbm/projects/veag-presentation/vrml/medienfassade/hud/buttons.x3d\"")}),

                                            new fieldValue({
                                              name : new SFString("startTime"),
                                              value : new SFString("1")})])})])})])})])})])}))})])})])}),

            new Transform({
              DEF : new SFString("Scene"),
              children : new MFNode([
                new ProtoInstance({
                  name : new SFString("Scene"),
                  fieldValue : new MFNode([
                    new fieldValue({
                      name : new SFString("interface"),
                      children : new MFNode([
                        new ProtoInstance({
                          name : new SFString("Bool"),
                          DEF : new SFString("_11")}),

                        new ProtoInstance({
                          name : new SFString("Bool"),
                          DEF : new SFString("_12")}),

                        new ProtoInstance({
                          name : new SFString("Bool"),
                          DEF : new SFString("_13")}),

                        new ProtoInstance({
                          name : new SFString("Bool"),
                          DEF : new SFString("_14")}),

                        new ProtoInstance({
                          name : new SFString("Bool"),
                          DEF : new SFString("_15")}),

                        new ProtoInstance({
                          name : new SFString("Bool"),
                          DEF : new SFString("_16")}),

                        new ProtoInstance({
                          name : new SFString("Bool"),
                          DEF : new SFString("_17")}),

                        new ProtoInstance({
                          name : new SFString("Int"),
                          DEF : new SFString("_18")})])})])})])}),

            new ROUTE({
              fromNode : new SFString("ps_handle"),
              fromField : new SFString("translation_changed"),
              toNode : new SFString("_1"),
              toField : new SFString("set_center")}),

            new ROUTE({
              fromNode : new SFString("ps_handle"),
              fromField : new SFString("scale_changed"),
              toNode : new SFString("_1"),
              toField : new SFString("set_size")}),

            new ROUTE({
              fromNode : new SFString("_1"),
              fromField : new SFString("position_changed"),
              toNode : new SFString("HUDObj"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("_1"),
              fromField : new SFString("orientation_changed"),
              toNode : new SFString("HUDObj"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("_2"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("_11"),
              toField : new SFString("set_value")}),

            new ROUTE({
              fromNode : new SFString("_3"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("_12"),
              toField : new SFString("set_value")}),

            new ROUTE({
              fromNode : new SFString("_4"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("_13"),
              toField : new SFString("set_value")}),

            new ROUTE({
              fromNode : new SFString("_5"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("_14"),
              toField : new SFString("set_value")}),

            new ROUTE({
              fromNode : new SFString("_6"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("_15"),
              toField : new SFString("set_value")}),

            new ROUTE({
              fromNode : new SFString("_7"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("_16"),
              toField : new SFString("set_value")}),

            new ROUTE({
              fromNode : new SFString("_8"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("_17"),
              toField : new SFString("set_value")}),

            new ROUTE({
              fromNode : new SFString("_9"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("_18"),
              toField : new SFString("set_value")})])}))});
console.log(X3D0.toXMLNode());
