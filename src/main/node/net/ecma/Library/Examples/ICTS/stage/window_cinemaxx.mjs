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
var TouchSensor = require('./x3d.mjs');
var Inline = require('./x3d.mjs');
var PlaneSensor = require('./x3d.mjs');
var SFVec2f = require('./x3d.mjs');
var ProtoInstance = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var IndexedFaceSet = require('./x3d.mjs');
var MFInt32 = require('./x3d.mjs');
var Coordinate = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
var Script = require('./x3d.mjs');
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
              content : new SFString("Thu, 23 Apr 2015 06:07:18 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V0.7.8, http://titania.create3000.de")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Thu, 23 Apr 2015 06:07:18 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
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
              name : new SFString("isOver"),
              url : new MFString(["isOver_proto.x3d"]),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("set_isOver"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFVEC3F,
                  name : new SFString("set_hitPoint"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("isOver_changed"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)})])}),

            new ExternProtoDeclare({
              name : new SFString("True"),
              url : new MFString(["True_proto.x3d"]),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("set_SFBool"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("startTime"),
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

            new ExternProtoDeclare({
              name : new SFString("Gate"),
              url : new MFString(["Gate_proto.x3d"]),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("offset"),
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
                  name : new SFString("enterTime"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("exitTime"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)})])}),

            new ExternProtoDeclare({
              name : new SFString("Not"),
              url : new MFString(["Not_proto.x3d"]),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("set_SFBool"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("value_changed"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)})])}),

            new WorldInfo({
              info : new MFString([", ","Created in TitaniaPackaged by CosmoPackage"])}),

            new Transform({
              bboxSize : new SFVec3f([1.288,0.8863,0.060779]),
              bboxCenter : new SFVec3f([5.06639e-7,-2.23517e-7,-0.320511])}),

            new Transform({
              DEF : new SFString("Window"),
              children : new MFNode([
                new Switch({
                  DEF : new SFString("_1"),
                  whichChoice : new SFInt32(1),
                  children : new MFNode([
                    new Transform({
                      children : new MFNode([
                        new TouchSensor({
                          DEF : new SFString("_2")}),

                        new Inline({
                          url : new MFString(["else.x3d"]),
                          bboxSize : new SFVec3f([0.0412831,0.0412831,0]),
                          bboxCenter : new SFVec3f([-0.240425,-0.171864,-0.297753])})])}),

                    new Transform({
                      DEF : new SFString("on_1"),
                      children : new MFNode([
                        new Transform({
                          DEF : new SFString("Zoom"),
                          children : new MFNode([
                            new PlaneSensor({
                              DEF : new SFString("_3"),
                              minPosition : new SFVec2f([-0.17,0]),
                              maxPosition : new SFVec2f([0.1488,0])}),

                            new TouchSensor({
                              DEF : new SFString("_4")}),

                            new Transform({
                              DEF : new SFString("button_1"),
                              translation : new SFVec3f([-0.0746069,-0.133511,0]),
                              center : new SFVec3f([-0.183921,-0.0639503,-0.296896]),
                              children : new MFNode([
                                new Transform({
                                  DEF : new SFString("Zoom-Button"),
                                  children : new MFNode([
                                    new Inline({
                                      url : new MFString(["zoom-button.gif.x3d"]),
                                      bboxSize : new SFVec3f([0.0111772,0.0107642,0]),
                                      bboxCenter : new SFVec3f([0.18564,-0.0653136,-0.29764])})])}),

                                new Transform({
                                  DEF : new SFString("help_1"),
                                  children : new MFNode([
                                    new Switch({
                                      DEF : new SFString("_5"),
                                      whichChoice : new SFInt32(1),
                                      children : new MFNode([
                                        new Transform({
                                          DEF : new SFString("isOver_1"),
                                          children : new MFNode([
                                            new Switch({
                                              DEF : new SFString("_6"),
                                              whichChoice : new SFInt32(1),
                                              children : new MFNode([
                                                new Transform({}),

                                                new Transform({
                                                  DEF : new SFString("on_2"),
                                                  translation : new SFVec3f([0.185434,-0.0657812,-0.303274]),
                                                  children : new MFNode([
                                                    new Transform({
                                                      DEF : new SFString("Zoom_1"),
                                                      children : new MFNode([
                                                        new Inline({
                                                          url : new MFString(["zoom.x3d"]),
                                                          bboxSize : new SFVec3f([0.000743108,0.000743108,0]),
                                                          bboxCenter : new SFVec3f([0,0,0.00636301])})])})])}),

                                                new Transform({
                                                  DEF : new SFString("BoolSwitch_1"),
                                                  children : new MFNode([
                                                    new ProtoInstance({
                                                      name : new SFString("BoolSwitch"),
                                                      DEF : new SFString("_7")})])})])})])}),

                                        new Transform({})])})])})])}),

                            new Transform({
                              DEF : new SFString("mouse_1"),
                              children : new MFNode([
                                new Switch({
                                  DEF : new SFString("_8"),
                                  whichChoice : new SFInt32(0),
                                  children : new MFNode([
                                    new Transform({}),

                                    new Transform({
                                      DEF : new SFString("on_3"),
                                      translation : new SFVec3f([-0.07,0.06,-0.30099]),
                                      children : new MFNode([
                                        new Transform({
                                          USE : new SFString("Zoom_1")})])}),

                                    new Transform({
                                      DEF : new SFString("BoolSwitch_2"),
                                      children : new MFNode([
                                        new ProtoInstance({
                                          name : new SFString("BoolSwitch"),
                                          DEF : new SFString("_9")})])})])})])})])}),

                        new Transform({
                          DEF : new SFString("Move_1"),
                          children : new MFNode([
                            new PlaneSensor({
                              DEF : new SFString("_10"),
                              offset : new SFVec3f([-0.0746069,-0.133511,0]),
                              minPosition : new SFVec2f([-0.0825515,-0.133799]),
                              maxPosition : new SFVec2f([0.0756775,0.134533])}),

                            new TouchSensor({
                              DEF : new SFString("_11")}),

                            new Transform({
                              DEF : new SFString("button_2"),
                              translation : new SFVec3f([-0.0746069,-0.133511,0]),
                              center : new SFVec3f([-0.183921,-0.0639503,-0.296896]),
                              children : new MFNode([
                                new Transform({
                                  DEF : new SFString("Content"),
                                  children : new MFNode([
                                    new Inline({
                                      url : new MFString(["cinemaxx.x3d"]),
                                      bboxSize : new SFVec3f([0.360011,0.120031,0.00349]),
                                      bboxCenter : new SFVec3f([3.7998e-7,-4.65661e-7,-0.298245])})])}),

                                new Transform({
                                  DEF : new SFString("Rahmen"),
                                  children : new MFNode([
                                    new Switch({
                                      DEF : new SFString("_12"),
                                      whichChoice : new SFInt32(0),
                                      children : new MFNode([
                                        new Transform({
                                          DEF : new SFString("mouseOut"),
                                          children : new MFNode([
                                            new TouchSensor({
                                              DEF : new SFString("_13")}),

                                            new Transform({
                                              DEF : new SFString("isOver_2"),
                                              children : new MFNode([
                                                new ProtoInstance({
                                                  name : new SFString("isOver"),
                                                  DEF : new SFString("_14")})])}),

                                            new Transform({
                                              DEF : new SFString("True"),
                                              children : new MFNode([
                                                new ProtoInstance({
                                                  name : new SFString("True"),
                                                  DEF : new SFString("_15")})])}),

                                            new Transform({
                                              DEF : new SFString("fg"),
                                              translation : new SFVec3f([0.0756268,0.159199,-0.290121]),
                                              scale : new SFVec3f([1.11103,1.2214,1]),
                                              children : new MFNode([
                                                new Shape({
                                                  geometry : new SFNode(
                                                    new IndexedFaceSet({
                                                      coordIndex : new MFInt32([1,0,3,2,-1]),
                                                      coord : new SFNode(
                                                        new Coordinate({
                                                          point : new MFVec3f([-0.230846,-0.066663,0,-0.230846,-0.193214,0,0.101703,-0.193214,0,0.101703,-0.066663,0])}))}))})])})])}),

                                        new Transform({
                                          DEF : new SFString("mouseOver"),
                                          children : new MFNode([
                                            new Transform({
                                              DEF : new SFString("bg"),
                                              translation : new SFVec3f([0.0819281,0.195895,-0.310268]),
                                              scale : new SFVec3f([1.30637,1.49261,1.06768]),
                                              children : new MFNode([
                                                new Shape({
                                                  geometry : new SFNode(
                                                    new IndexedFaceSet({
                                                      coordIndex : new MFInt32([1,0,3,2,-1]),
                                                      coord : new SFNode(
                                                        new Coordinate({
                                                          point : new MFVec3f([-0.230846,-0.066663,0,-0.230846,-0.193214,0,0.101703,-0.193214,0,0.101703,-0.066663,0])}))}))})])}),

                                            new Inline({
                                              url : new MFString(["border.x3d"]),
                                              bboxSize : new SFVec3f([0.37516,0.141366,0.0000585616]),
                                              bboxCenter : new SFVec3f([0.00364155,-6.55651e-7,-0.299961])}),

                                            new Transform({
                                              DEF : new SFString("Close_1"),
                                              children : new MFNode([
                                                new TouchSensor({
                                                  DEF : new SFString("_16")}),

                                                new Transform({
                                                  DEF : new SFString("isOver"),
                                                  children : new MFNode([
                                                    new ProtoInstance({
                                                      name : new SFString("isOver"),
                                                      DEF : new SFString("_17")})])}),

                                                new Transform({
                                                  DEF : new SFString("Close-Button"),
                                                  children : new MFNode([
                                                    new Inline({
                                                      url : new MFString(["close-button.x3d"]),
                                                      bboxSize : new SFVec3f([0.0111772,0.0107642,0]),
                                                      bboxCenter : new SFVec3f([0.18564,0.0653424,-0.29764])})])}),

                                                new Transform({
                                                  DEF : new SFString("help"),
                                                  children : new MFNode([
                                                    new Switch({
                                                      DEF : new SFString("_18"),
                                                      whichChoice : new SFInt32(1),
                                                      children : new MFNode([
                                                        new Transform({}),

                                                        new Transform({
                                                          DEF : new SFString("Close"),
                                                          children : new MFNode([
                                                            new Inline({
                                                              url : new MFString(["close.x3d"]),
                                                              bboxSize : new SFVec3f([0.0162762,0.0162762,0]),
                                                              bboxCenter : new SFVec3f([0.183659,0.0636474,-0.296069])})])}),

                                                        new Transform({
                                                          DEF : new SFString("BoolSwitch_3"),
                                                          children : new MFNode([
                                                            new ProtoInstance({
                                                              name : new SFString("BoolSwitch"),
                                                              DEF : new SFString("_19")})])})])})])})])})])}),

                                        new Transform({
                                          DEF : new SFString("Switcher"),
                                          children : new MFNode([
                                            new ProtoInstance({
                                              name : new SFString("Switcher"),
                                              DEF : new SFString("_20")})])})])})])})])}),

                            new Transform({
                              DEF : new SFString("mouse"),
                              children : new MFNode([
                                new Switch({
                                  DEF : new SFString("_21"),
                                  whichChoice : new SFInt32(-1),
                                  children : new MFNode([
                                    new Transform({}),

                                    new Transform({
                                      DEF : new SFString("on_4"),
                                      children : new MFNode([
                                        new Transform({
                                          DEF : new SFString("Move"),
                                          children : new MFNode([
                                            new Inline({
                                              url : new MFString(["move.x3d"]),
                                              bboxSize : new SFVec3f([0.0313628,0.0313628,0]),
                                              bboxCenter : new SFVec3f([0,0,0.005])})])})])}),

                                    new Transform({
                                      DEF : new SFString("BoolSwitch_4"),
                                      children : new MFNode([
                                        new ProtoInstance({
                                          name : new SFString("BoolSwitch"),
                                          DEF : new SFString("_22")})])})])})])})])}),

                        new Transform({
                          DEF : new SFString("_Script"),
                          children : new MFNode([
                            new Script({
                              DEF : new SFString("_scale"),
                              field : new MFNode([
                                new field({
                                  type : field.TYPE_SFVEC3F,
                                  name : new SFString("scale_changed"),
                                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                                new field({
                                  type : field.TYPE_SFVEC2F,
                                  name : new SFString("minPosition_changed"),
                                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                                new field({
                                  type : field.TYPE_SFVEC2F,
                                  name : new SFString("maxPosition_changed"),
                                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                                new field({
                                  type : field.TYPE_SFVEC3F,
                                  name : new SFString("set_translation"),
                                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                                new field({
                                  type : field.TYPE_SFBOOL,
                                  name : new SFString("isActive"),
                                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                                new field({
                                  type : field.TYPE_SFVEC2F,
                                  name : new SFString("minPosition"),
                                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                                  value : new SFString("-0.0825515 -0.133799")}),

                                new field({
                                  type : field.TYPE_SFVEC2F,
                                  name : new SFString("maxPosition"),
                                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                                  value : new SFString("0.0756775 0.134533")}),

                                new field({
                                  type : field.TYPE_SFVEC2F,
                                  name : new SFString("size"),
                                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                                  value : new SFString("0.3748 0.1414")}),
                              ]),vrmlscript:
, function initialize()
{
	minPosition_changed = minPosition;
	maxPosition_changed = maxPosition;
}

, function set_translation(value, time)
{
	scale_changed = new SFVec3f(
		1 + value.x * 2.75,
		1 + value.x * 2.75,
		1
	);
}

, function isActive(value, time)
{
	if (!value) {
		maxPosition_changed = new SFVec2f(
			maxPosition.x+ size.x - (size.x * scale_changed.x),
			maxPosition.y + size.y - (size.y * scale_changed.y)
		);
	}
})})])})])}),

                    new Transform({
                      DEF : new SFString("BoolSwitch"),
                      children : new MFNode([
                        new ProtoInstance({
                          name : new SFString("BoolSwitch"),
                          DEF : new SFString("_23")})])}),

                    new Transform({
                      DEF : new SFString("Gate"),
                      children : new MFNode([
                        new ProtoInstance({
                          name : new SFString("Gate"),
                          DEF : new SFString("_24"),
                          fieldValue : new MFNode([
                            new fieldValue({
                              name : new SFString("offset"),
                              value : new SFString("true")})])})])}),

                    new Transform({
                      DEF : new SFString("OutTrue"),
                      children : new MFNode([
                        new ProtoInstance({
                          name : new SFString("True"),
                          DEF : new SFString("_25")})])})])})])}),

            new Transform({
              DEF : new SFString("Hide"),
              children : new MFNode([
                new Switch({
                  DEF : new SFString("_26"),
                  whichChoice : new SFInt32(0),
                  children : new MFNode([
                    new Transform({}),

                    new Transform({
                      children : new MFNode([
                        new TouchSensor({
                          DEF : new SFString("_27")}),

                        new Transform({
                          DEF : new SFString("Not"),
                          children : new MFNode([
                            new ProtoInstance({
                              name : new SFString("Not"),
                              DEF : new SFString("_28")})])}),

                        new Transform({
                          DEF : new SFString("on"),
                          translation : new SFVec3f([0.250093,0.910024,-0.3509]),
                          scale : new SFVec3f([3.87311,7.0035,1.06768]),
                          children : new MFNode([
                            new Shape({
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  coordIndex : new MFInt32([1,0,3,2,-1]),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([-0.230846,-0.066663,0,-0.230846,-0.193214,0,0.101703,-0.193214,0,0.101703,-0.066663,0])}))}))})])})])})])})])}),

            new ROUTE({
              fromNode : new SFString("_4"),
              fromField : new SFString("isOver"),
              toNode : new SFString("_7"),
              toField : new SFString("isActive")}),

            new ROUTE({
              fromNode : new SFString("_7"),
              fromField : new SFString("wichChoice_changed"),
              toNode : new SFString("_6"),
              toField : new SFString("set_whichChoice")}),

            new ROUTE({
              fromNode : new SFString("_9"),
              fromField : new SFString("wichChoice_changed"),
              toNode : new SFString("_5"),
              toField : new SFString("set_whichChoice")}),

            new ROUTE({
              fromNode : new SFString("button_2"),
              fromField : new SFString("translation_changed"),
              toNode : new SFString("button_1"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("button_2"),
              fromField : new SFString("scale_changed"),
              toNode : new SFString("button_1"),
              toField : new SFString("set_scale")}),

            new ROUTE({
              fromNode : new SFString("button_2"),
              fromField : new SFString("center_changed"),
              toNode : new SFString("button_1"),
              toField : new SFString("set_center")}),

            new ROUTE({
              fromNode : new SFString("_3"),
              fromField : new SFString("trackPoint_changed"),
              toNode : new SFString("on_3"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("_3"),
              fromField : new SFString("isActive"),
              toNode : new SFString("_9"),
              toField : new SFString("isActive")}),

            new ROUTE({
              fromNode : new SFString("_9"),
              fromField : new SFString("wichChoice_changed"),
              toNode : new SFString("_8"),
              toField : new SFString("set_whichChoice")}),

            new ROUTE({
              fromNode : new SFString("_scale"),
              fromField : new SFString("minPosition_changed"),
              toNode : new SFString("_10"),
              toField : new SFString("set_minPosition")}),

            new ROUTE({
              fromNode : new SFString("_scale"),
              fromField : new SFString("maxPosition_changed"),
              toNode : new SFString("_10"),
              toField : new SFString("set_maxPosition")}),

            new ROUTE({
              fromNode : new SFString("button_2"),
              fromField : new SFString("translation_changed"),
              toNode : new SFString("_10"),
              toField : new SFString("set_offset")}),

            new ROUTE({
              fromNode : new SFString("_13"),
              fromField : new SFString("isOver"),
              toNode : new SFString("_14"),
              toField : new SFString("set_isOver")}),

            new ROUTE({
              fromNode : new SFString("_13"),
              fromField : new SFString("hitPoint_changed"),
              toNode : new SFString("_14"),
              toField : new SFString("set_hitPoint")}),

            new ROUTE({
              fromNode : new SFString("_14"),
              fromField : new SFString("isOver_changed"),
              toNode : new SFString("_15"),
              toField : new SFString("set_SFBool")}),

            new ROUTE({
              fromNode : new SFString("_16"),
              fromField : new SFString("isOver"),
              toNode : new SFString("_17"),
              toField : new SFString("set_isOver")}),

            new ROUTE({
              fromNode : new SFString("_16"),
              fromField : new SFString("hitPoint_changed"),
              toNode : new SFString("_17"),
              toField : new SFString("set_hitPoint")}),

            new ROUTE({
              fromNode : new SFString("_16"),
              fromField : new SFString("isActive"),
              toNode : new SFString("_19"),
              toField : new SFString("isActive")}),

            new ROUTE({
              fromNode : new SFString("_17"),
              fromField : new SFString("isOver_changed"),
              toNode : new SFString("_19"),
              toField : new SFString("isActive")}),

            new ROUTE({
              fromNode : new SFString("_19"),
              fromField : new SFString("wichChoice_changed"),
              toNode : new SFString("_18"),
              toField : new SFString("set_whichChoice")}),

            new ROUTE({
              fromNode : new SFString("_16"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("_20"),
              toField : new SFString("set_next")}),

            new ROUTE({
              fromNode : new SFString("_15"),
              fromField : new SFString("startTime"),
              toNode : new SFString("_20"),
              toField : new SFString("set_next")}),

            new ROUTE({
              fromNode : new SFString("_25"),
              fromField : new SFString("startTime"),
              toNode : new SFString("_20"),
              toField : new SFString("set_next")}),

            new ROUTE({
              fromNode : new SFString("_20"),
              fromField : new SFString("whichChoice_changed"),
              toNode : new SFString("_12"),
              toField : new SFString("set_whichChoice")}),

            new ROUTE({
              fromNode : new SFString("_10"),
              fromField : new SFString("translation_changed"),
              toNode : new SFString("button_2"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("_scale"),
              fromField : new SFString("scale_changed"),
              toNode : new SFString("button_2"),
              toField : new SFString("set_scale")}),

            new ROUTE({
              fromNode : new SFString("_10"),
              fromField : new SFString("trackPoint_changed"),
              toNode : new SFString("on_4"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("_10"),
              fromField : new SFString("isActive"),
              toNode : new SFString("_22"),
              toField : new SFString("isActive")}),

            new ROUTE({
              fromNode : new SFString("_22"),
              fromField : new SFString("wichChoice_changed"),
              toNode : new SFString("_21"),
              toField : new SFString("set_whichChoice")}),

            new ROUTE({
              fromNode : new SFString("_3"),
              fromField : new SFString("translation_changed"),
              toNode : new SFString("_scale"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("_3"),
              fromField : new SFString("isActive"),
              toNode : new SFString("_scale"),
              toField : new SFString("isActive")}),

            new ROUTE({
              fromNode : new SFString("_24"),
              fromField : new SFString("isActive"),
              toNode : new SFString("_23"),
              toField : new SFString("isActive")}),

            new ROUTE({
              fromNode : new SFString("_24"),
              fromField : new SFString("isActive"),
              toNode : new SFString("_24"),
              toField : new SFString("set_offset")}),

            new ROUTE({
              fromNode : new SFString("_16"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("_24"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("_2"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("_24"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("_27"),
              fromField : new SFString("isOver"),
              toNode : new SFString("_25"),
              toField : new SFString("set_SFBool")}),

            new ROUTE({
              fromNode : new SFString("_23"),
              fromField : new SFString("wichChoice_changed"),
              toNode : new SFString("_1"),
              toField : new SFString("set_whichChoice")}),

            new ROUTE({
              fromNode : new SFString("_28"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("_27"),
              toField : new SFString("set_enabled")}),

            new ROUTE({
              fromNode : new SFString("_11"),
              fromField : new SFString("isOver"),
              toNode : new SFString("_28"),
              toField : new SFString("set_SFBool")}),

            new ROUTE({
              fromNode : new SFString("_20"),
              fromField : new SFString("whichChoice_changed"),
              toNode : new SFString("_26"),
              toField : new SFString("set_whichChoice")})])}))});
console.log(X3D0.toXMLNode());
