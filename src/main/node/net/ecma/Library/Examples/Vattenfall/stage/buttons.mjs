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
var Group = require('./x3d.mjs');
var TimeSensor = require('./x3d.mjs');
var SFTime = require('./x3d.mjs');
var PositionInterpolator = require('./x3d.mjs');
var MFFloat = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
var ScalarInterpolator = require('./x3d.mjs');
var ProtoInstance = require('./x3d.mjs');
var fieldValue = require('./x3d.mjs');
var Inline = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var Sound = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var AudioClip = require('./x3d.mjs');
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
              content : new SFString("Sat, 25 Apr 2015 12:38:25 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V0.7.8, http://titania.create3000.de")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Sat, 25 Apr 2015 12:38:25 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new ExternProtoDeclare({
              name : new SFString("CheckBox"),
              url : new MFString(["CheckBox_proto.x3d"]),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("enabled"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("on"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("touchTime"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("isActive"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFINT32,
                  name : new SFString("whichChoice"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_MFNODE,
                  name : new SFString("choice"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)})])}),

            new ExternProtoDeclare({
              name : new SFString("Button"),
              url : new MFString(["Button_proto.x3d"]),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("enabled"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("isActive"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("isOver"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("isOut"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFVEC3F,
                  name : new SFString("hitNormal_changed"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFVEC3F,
                  name : new SFString("hitPoint_changed"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFVEC2F,
                  name : new SFString("hitTexCoord_changed"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("touchTime"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("downTime"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("overTime"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("outTime"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFINT32,
                  name : new SFString("whichChoice"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_MFNODE,
                  name : new SFString("choice"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)})])}),

            new ExternProtoDeclare({
              name : new SFString("RadioButton"),
              url : new MFString(["RadioButton_proto.x3d"]),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("enabled"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("touchTime"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFINT32,
                  name : new SFString("whichChoice"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_MFNODE,
                  name : new SFString("choice"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)})])}),

            new ExternProtoDeclare({
              name : new SFString("Delay"),
              url : new MFString(["Delay_proto.x3d"]),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("cycleInterval"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

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
                  name : new SFString("exitTime"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)})])}),

            new ExternProtoDeclare({
              name : new SFString("Random"),
              url : new MFString(["Random_proto.x3d"]),
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
                  type : field.TYPE_SFINT32,
                  name : new SFString("numValues"),
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
                  type : field.TYPE_SFINT32,
                  name : new SFString("whichChoice_changed"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFFLOAT,
                  name : new SFString("fraction_changed"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)})])}),

            new ExternProtoDeclare({
              name : new SFString("RandomDelay"),
              url : new MFString(["RandomDelay_proto.x3d"]),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("minInterval"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("maxInterval"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

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
                  name : new SFString("exitTime"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)})])}),

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

            new WorldInfo({
              info : new MFString([", ","Created in TitaniaPackaged by Titania"])}),

            new Transform({
              DEF : new SFString("cams"),
              children : new MFNode([
                new Group({
                  children : new MFNode([
                    new Group({
                      DEF : new SFString("open-cams"),
                      children : new MFNode([
                        new TimeSensor({
                          DEF : new SFString("Time_1"),
                          stopTime : new SFTime(1)})])}),

                    new PositionInterpolator({
                      DEF : new SFString("cambuttonTranslationInterp_1"),
                      key : new MFFloat([0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]),
                      keyValue : new MFVec3f([0,0,0,-0.0627401,0,0,-0.12548,0,0,-0.162883,0,0,-0.17485,0,0,-0.179504,0,0,-0.178839,0,0,-0.17485,0,0,-0.169531,0,0,-0.164877,0,0,-0.162883,0,0])}),

                    new ScalarInterpolator({
                      DEF : new SFString("fadebgTransparencyInterp"),
                      key : new MFFloat([0,0.08,0.12]),
                      keyValue : new MFFloat([1,1,0.5])}),

                    new PositionInterpolator({
                      DEF : new SFString("cam-menuTranslationInterp_1"),
                      key : new MFFloat([0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]),
                      keyValue : new MFVec3f([0.25,0,0,0.180548,0,0,0.106415,0,0,0.041645,0,0,0.000286184,0,0,-0.0170551,0,0,-0.0219106,0,0,-0.0184424,0,0,-0.0108122,0,0,-0.00318206,0,0,0.000286184,0,0])})])}),

                new Group({
                  children : new MFNode([
                    new Group({
                      DEF : new SFString("close-cams"),
                      children : new MFNode([
                        new TimeSensor({
                          DEF : new SFString("Time_2"),
                          cycleInterval : new SFTime(0.7),
                          stopTime : new SFTime(1)})])}),

                    new PositionInterpolator({
                      DEF : new SFString("cambuttonTranslationInterp_2"),
                      key : new MFFloat([0,0.142857,0.285714,0.428572,0.571429,0.714286,1]),
                      keyValue : new MFVec3f([-0.162883,0,0,-0.133642,0,0,-0.103577,0,0,-0.0739234,0,0,-0.0459178,0,0,-0.0207953,0,0,0,0,0])}),

                    new PositionInterpolator({
                      DEF : new SFString("cam-menuTranslationInterp_2"),
                      key : new MFFloat([0,0.142857,0.285714,0.428571,0.571429,0.714286,0.857143,1]),
                      keyValue : new MFVec3f([0.000286184,0,0,0.0359596,0,0,0.071633,0,0,0.107306,0,0,0.14298,0,0,0.178653,0,0,0.214327,0,0,0.25,0,0])})])}),

                new Transform({
                  DEF : new SFString("button"),
                  children : new MFNode([
                    new Transform({
                      DEF : new SFString("CheckBox"),
                      children : new MFNode([
                        new ProtoInstance({
                          name : new SFString("CheckBox"),
                          DEF : new SFString("_1"),
                          fieldValue : new MFNode([
                            new fieldValue({
                              name : new SFString("choice"),
                              children : new MFNode([
                                new ProtoInstance({
                                  name : new SFString("Button"),
                                  DEF : new SFString("OffButton_1"),
                                  fieldValue : new MFNode([
                                    new fieldValue({
                                      name : new SFString("choice"),
                                      children : new MFNode([
                                        new Inline({
                                          DEF : new SFString("_2"),
                                          url : new MFString(["camButton.x3d"]),
                                          bboxSize : new SFVec3f([0.0500588,0.020502,0]),
                                          bboxCenter : new SFVec3f([0.119113,0.113344,-0.299736])})])})])}),

                                new ProtoInstance({
                                  name : new SFString("Button"),
                                  DEF : new SFString("OnButton_1"),
                                  fieldValue : new MFNode([
                                    new fieldValue({
                                      name : new SFString("choice"),
                                      children : new MFNode([
                                        new Inline({
                                          USE : new SFString("_2")})])})])})])})])})])})])}),

                new Transform({
                  DEF : new SFString("menu_1"),
                  translation : new SFVec3f([0.25,0,0]),
                  children : new MFNode([
                    new Inline({
                      url : new MFString(["aminLabel.x3d"]),
                      bboxSize : new SFVec3f([0.0310576,0.0203932,0]),
                      bboxCenter : new SFVec3f([0.0201922,0.114095,-0.299906])}),

                    new Inline({
                      url : new MFString(["viewLabel.x3d"]),
                      bboxSize : new SFVec3f([0.0255517,0.0203932,0]),
                      bboxCenter : new SFVec3f([0.0936732,0.114095,-0.299906])}),

                    new Transform({
                      DEF : new SFString("RadioButton_1"),
                      children : new MFNode([
                        new ProtoInstance({
                          name : new SFString("RadioButton"),
                          DEF : new SFString("_3"),
                          fieldValue : new MFNode([
                            new fieldValue({
                              name : new SFString("whichChoice"),
                              value : new SFString("-1")}),

                            new fieldValue({
                              name : new SFString("choice"),
                              children : new MFNode([
                                new ProtoInstance({
                                  name : new SFString("CheckBox"),
                                  DEF : new SFString("_4"),
                                  fieldValue : new MFNode([
                                    new fieldValue({
                                      name : new SFString("choice"),
                                      children : new MFNode([
                                        new ProtoInstance({
                                          name : new SFString("Button"),
                                          DEF : new SFString("OffButton_2"),
                                          fieldValue : new MFNode([
                                            new fieldValue({
                                              name : new SFString("choice"),
                                              children : new MFNode([
                                                new Inline({
                                                  DEF : new SFString("_5"),
                                                  url : new MFString(["a1.x3d"]),
                                                  bboxSize : new SFVec3f([0.0150586,0.0203932,0]),
                                                  bboxCenter : new SFVec3f([0.0200617,0.113587,-0.299906])})])})])}),

                                        new Inline({
                                          DEF : new SFString("_6"),
                                          url : new MFString(["a1on.x3d"]),
                                          bboxSize : new SFVec3f([0.0150586,0.0203932,0]),
                                          bboxCenter : new SFVec3f([0.0200617,0.113587,-0.299906])})])})])}),

                                new ProtoInstance({
                                  name : new SFString("CheckBox"),
                                  DEF : new SFString("_7"),
                                  fieldValue : new MFNode([
                                    new fieldValue({
                                      name : new SFString("choice"),
                                      children : new MFNode([
                                        new ProtoInstance({
                                          name : new SFString("Button"),
                                          DEF : new SFString("OffButton_3"),
                                          fieldValue : new MFNode([
                                            new fieldValue({
                                              name : new SFString("choice"),
                                              children : new MFNode([
                                                new Inline({
                                                  DEF : new SFString("_8"),
                                                  url : new MFString(["a2.x3d"]),
                                                  bboxSize : new SFVec3f([0.0150589,0.0203932,0]),
                                                  bboxCenter : new SFVec3f([0.0351205,0.113587,-0.299906])})])})])}),

                                        new Inline({
                                          DEF : new SFString("_9"),
                                          url : new MFString(["a2on.x3d"]),
                                          bboxSize : new SFVec3f([0.0150589,0.0203932,0]),
                                          bboxCenter : new SFVec3f([0.0351205,0.113587,-0.299906])})])})])}),

                                new ProtoInstance({
                                  name : new SFString("CheckBox"),
                                  DEF : new SFString("_10"),
                                  fieldValue : new MFNode([
                                    new fieldValue({
                                      name : new SFString("choice"),
                                      children : new MFNode([
                                        new ProtoInstance({
                                          name : new SFString("Button"),
                                          DEF : new SFString("OffButton_4"),
                                          fieldValue : new MFNode([
                                            new fieldValue({
                                              name : new SFString("choice"),
                                              children : new MFNode([
                                                new Inline({
                                                  DEF : new SFString("_11"),
                                                  url : new MFString(["a3.x3d"]),
                                                  bboxSize : new SFVec3f([0.0150589,0.0203932,0]),
                                                  bboxCenter : new SFVec3f([0.0501794,0.113587,-0.299906])})])})])}),

                                        new Inline({
                                          DEF : new SFString("_12"),
                                          url : new MFString(["a3on.x3d"]),
                                          bboxSize : new SFVec3f([0.0150589,0.0203932,0]),
                                          bboxCenter : new SFVec3f([0.0501794,0.113587,-0.299906])})])})])}),

                                new ProtoInstance({
                                  name : new SFString("CheckBox"),
                                  DEF : new SFString("_13"),
                                  fieldValue : new MFNode([
                                    new fieldValue({
                                      name : new SFString("choice"),
                                      children : new MFNode([
                                        new ProtoInstance({
                                          name : new SFString("Button"),
                                          DEF : new SFString("OffButton_5"),
                                          fieldValue : new MFNode([
                                            new fieldValue({
                                              name : new SFString("choice"),
                                              children : new MFNode([
                                                new Inline({
                                                  DEF : new SFString("_14"),
                                                  url : new MFString(["c1.x3d"]),
                                                  bboxSize : new SFVec3f([2,0.6,2]),
                                                  bboxCenter : new SFVec3f([0,-0.2,0])})])})])}),

                                        new Inline({
                                          DEF : new SFString("_15"),
                                          url : new MFString(["c1on.x3d"]),
                                          bboxSize : new SFVec3f([2,0.6,2]),
                                          bboxCenter : new SFVec3f([0,-0.2,0])})])})])}),

                                new ProtoInstance({
                                  name : new SFString("CheckBox"),
                                  DEF : new SFString("_16"),
                                  fieldValue : new MFNode([
                                    new fieldValue({
                                      name : new SFString("choice"),
                                      children : new MFNode([
                                        new ProtoInstance({
                                          name : new SFString("Button"),
                                          DEF : new SFString("OffButton_6"),
                                          fieldValue : new MFNode([
                                            new fieldValue({
                                              name : new SFString("choice"),
                                              children : new MFNode([
                                                new Inline({
                                                  DEF : new SFString("_17"),
                                                  url : new MFString(["c2.x3d"]),
                                                  bboxSize : new SFVec3f([2,0.6,2]),
                                                  bboxCenter : new SFVec3f([0,-0.2,0])})])})])}),

                                        new Inline({
                                          DEF : new SFString("_18"),
                                          url : new MFString(["c2on.x3d"]),
                                          bboxSize : new SFVec3f([2,0.6,2]),
                                          bboxCenter : new SFVec3f([0,-0.2,0])})])})])}),

                                new ProtoInstance({
                                  name : new SFString("CheckBox"),
                                  DEF : new SFString("_19"),
                                  fieldValue : new MFNode([
                                    new fieldValue({
                                      name : new SFString("choice"),
                                      children : new MFNode([
                                        new ProtoInstance({
                                          name : new SFString("Button"),
                                          DEF : new SFString("OffButton_7"),
                                          fieldValue : new MFNode([
                                            new fieldValue({
                                              name : new SFString("choice"),
                                              children : new MFNode([
                                                new Inline({
                                                  DEF : new SFString("_20"),
                                                  url : new MFString(["c3.x3d"]),
                                                  bboxSize : new SFVec3f([2,0.6,2]),
                                                  bboxCenter : new SFVec3f([0,-0.2,0])})])})])}),

                                        new Inline({
                                          DEF : new SFString("_21"),
                                          url : new MFString(["c3on.x3d"]),
                                          bboxSize : new SFVec3f([2,0.6,2]),
                                          bboxCenter : new SFVec3f([0,-0.2,0])})])})])}),

                                new ProtoInstance({
                                  name : new SFString("CheckBox"),
                                  DEF : new SFString("_22"),
                                  fieldValue : new MFNode([
                                    new fieldValue({
                                      name : new SFString("choice"),
                                      children : new MFNode([
                                        new ProtoInstance({
                                          name : new SFString("Button"),
                                          DEF : new SFString("OffButton_8"),
                                          fieldValue : new MFNode([
                                            new fieldValue({
                                              name : new SFString("choice"),
                                              children : new MFNode([
                                                new Inline({
                                                  DEF : new SFString("_23"),
                                                  url : new MFString(["c4.x3d"]),
                                                  bboxSize : new SFVec3f([2,0.6,2]),
                                                  bboxCenter : new SFVec3f([0,-0.2,0])})])})])}),

                                        new Inline({
                                          DEF : new SFString("_24"),
                                          url : new MFString(["c4on.x3d"]),
                                          bboxSize : new SFVec3f([2,0.6,2]),
                                          bboxCenter : new SFVec3f([0,-0.2,0])})])})])})])})])})])})])}),

                new Transform({
                  DEF : new SFString("Delay_1"),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("Delay"),
                      DEF : new SFString("_25"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("cycleInterval"),
                          value : new SFString("60")}),

                        new fieldValue({
                          name : new SFString("startTime"),
                          value : new SFString("1")})])})])}),

                new Transform({
                  DEF : new SFString("Random_1"),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("Random"),
                      DEF : new SFString("_26"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("maxValue"),
                          value : new SFString("6")}),

                        new fieldValue({
                          name : new SFString("numValues"),
                          value : new SFString("7")})])})])}),

                new Transform({
                  DEF : new SFString("RandomDelay"),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("RandomDelay"),
                      DEF : new SFString("_27"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("minInterval"),
                          value : new SFString("10")}),

                        new fieldValue({
                          name : new SFString("maxInterval"),
                          value : new SFString("40")}),

                        new fieldValue({
                          name : new SFString("stopTime"),
                          value : new SFString("1")})])})])})])}),

            new Transform({
              DEF : new SFString("movs"),
              children : new MFNode([
                new Group({
                  children : new MFNode([
                    new Group({
                      DEF : new SFString("mov-open"),
                      children : new MFNode([
                        new TimeSensor({
                          DEF : new SFString("Time_3"),
                          stopTime : new SFTime(1)})])}),

                    new PositionInterpolator({
                      DEF : new SFString("moviesTranslationInterp_1"),
                      key : new MFFloat([0,0.1,0.2,0.3,0.4,0.5,0.6,0.733333,0.866667,1]),
                      keyValue : new MFVec3f([0,0,0,0,-0.0350546,0,0,-0.0723312,0,0,-0.109608,0,0,-0.144662,0,0,-0.175273,0,0,-0.199217,0,0,-0.210897,0,0,-0.204801,0,0,-0.198704,0])}),

                    new PositionInterpolator({
                      DEF : new SFString("buttonTranslationInterp_1"),
                      key : new MFFloat([0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]),
                      keyValue : new MFVec3f([0,0,0,0,-0.0553082,0,0,-0.114345,0,0,-0.165925,0,0,-0.198861,0,0,-0.212671,0,0,-0.216538,0,0,-0.213776,0,0,-0.207699,0,0,-0.201623,0,0,-0.198861,0])})])}),

                new Group({
                  children : new MFNode([
                    new Group({
                      DEF : new SFString("mov-close"),
                      children : new MFNode([
                        new TimeSensor({
                          DEF : new SFString("Time_4"),
                          cycleInterval : new SFTime(0.5),
                          stopTime : new SFTime(1)})])}),

                    new PositionInterpolator({
                      DEF : new SFString("moviesTranslationInterp_2"),
                      key : new MFFloat([0,0.2,0.4,0.6,0.8,0.99999,1]),
                      keyValue : new MFVec3f([0,-0.198704,0,0,-0.149028,0,0,-0.099352,0,0,-0.049676,0,0,0,0,0,0,0,0,0,0])}),

                    new PositionInterpolator({
                      DEF : new SFString("buttonTranslationInterp_2"),
                      key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                      keyValue : new MFVec3f([0,-0.198861,0,0,-0.159089,0,0,-0.119317,0,0,-0.0795444,0,0,-0.0397722,0,0,0,0])})])}),

                new Transform({
                  DEF : new SFString("CheckBox_1"),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("CheckBox"),
                      DEF : new SFString("_28"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("choice"),
                          children : new MFNode([
                            new ProtoInstance({
                              name : new SFString("Button"),
                              DEF : new SFString("OffButton_9"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("choice"),
                                  children : new MFNode([
                                    new Inline({
                                      DEF : new SFString("_29"),
                                      url : new MFString(["movButton.x3d"]),
                                      bboxSize : new SFVec3f([0.0497668,0.020502,0]),
                                      bboxCenter : new SFVec3f([0.192424,0.113851,-0.299736])})])})])}),

                            new ProtoInstance({
                              name : new SFString("Button"),
                              DEF : new SFString("OnButton_2"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("choice"),
                                  children : new MFNode([
                                    new Inline({
                                      USE : new SFString("_29")})])})])})])})])})])}),

                new Transform({
                  DEF : new SFString("menu_2"),
                  children : new MFNode([
                    new Inline({
                      url : new MFString(["m.x3d"]),
                      bboxSize : new SFVec3f([0.0495934,0.0223366,0]),
                      bboxCenter : new SFVec3f([0.192385,0.311653,-0.299671])}),

                    new Transform({
                      DEF : new SFString("RadioButton"),
                      children : new MFNode([
                        new ProtoInstance({
                          name : new SFString("RadioButton"),
                          DEF : new SFString("_30"),
                          fieldValue : new MFNode([
                            new fieldValue({
                              name : new SFString("whichChoice"),
                              value : new SFString("-1")}),

                            new fieldValue({
                              name : new SFString("choice"),
                              children : new MFNode([
                                new ProtoInstance({
                                  name : new SFString("CheckBox"),
                                  DEF : new SFString("_31"),
                                  fieldValue : new MFNode([
                                    new fieldValue({
                                      name : new SFString("choice"),
                                      children : new MFNode([
                                        new ProtoInstance({
                                          name : new SFString("Button"),
                                          DEF : new SFString("_32"),
                                          fieldValue : new MFNode([
                                            new fieldValue({
                                              name : new SFString("choice"),
                                              children : new MFNode([
                                                new Inline({
                                                  DEF : new SFString("_33"),
                                                  url : new MFString(["m1.x3d"]),
                                                  bboxSize : new SFVec3f([0.0495934,0.0298137,0]),
                                                  bboxCenter : new SFVec3f([0.192385,0.285578,-0.299671])})])})])}),

                                        new Inline({
                                          DEF : new SFString("_34"),
                                          url : new MFString(["m1on.x3d"]),
                                          bboxSize : new SFVec3f([0.0495934,0.0298137,0]),
                                          bboxCenter : new SFVec3f([0.192385,0.285578,-0.299671])})])})])}),

                                new ProtoInstance({
                                  name : new SFString("CheckBox"),
                                  DEF : new SFString("_35"),
                                  fieldValue : new MFNode([
                                    new fieldValue({
                                      name : new SFString("choice"),
                                      children : new MFNode([
                                        new ProtoInstance({
                                          name : new SFString("Button"),
                                          DEF : new SFString("_36"),
                                          fieldValue : new MFNode([
                                            new fieldValue({
                                              name : new SFString("choice"),
                                              children : new MFNode([
                                                new Inline({
                                                  DEF : new SFString("_37"),
                                                  url : new MFString(["m2.x3d"]),
                                                  bboxSize : new SFVec3f([0.0495934,0.0291023,0]),
                                                  bboxCenter : new SFVec3f([0.192385,0.25612,-0.299671])})])})])}),

                                        new Inline({
                                          DEF : new SFString("_38"),
                                          url : new MFString(["m2on.x3d"]),
                                          bboxSize : new SFVec3f([0.0495934,0.0291023,0]),
                                          bboxCenter : new SFVec3f([0.192385,0.25612,-0.299671])})])})])}),

                                new ProtoInstance({
                                  name : new SFString("CheckBox"),
                                  DEF : new SFString("_39"),
                                  fieldValue : new MFNode([
                                    new fieldValue({
                                      name : new SFString("choice"),
                                      children : new MFNode([
                                        new ProtoInstance({
                                          name : new SFString("Button"),
                                          DEF : new SFString("_40"),
                                          fieldValue : new MFNode([
                                            new fieldValue({
                                              name : new SFString("choice"),
                                              children : new MFNode([
                                                new Inline({
                                                  DEF : new SFString("_41"),
                                                  url : new MFString(["m3.x3d"]),
                                                  bboxSize : new SFVec3f([0.0495934,0.0291023,0]),
                                                  bboxCenter : new SFVec3f([0.192385,0.227018,-0.299671])})])})])}),

                                        new Inline({
                                          DEF : new SFString("_42"),
                                          url : new MFString(["m3on.x3d"]),
                                          bboxSize : new SFVec3f([0.0495934,0.0291023,0]),
                                          bboxCenter : new SFVec3f([0.192385,0.227018,-0.299671])})])})])}),

                                new ProtoInstance({
                                  name : new SFString("CheckBox"),
                                  DEF : new SFString("_43"),
                                  fieldValue : new MFNode([
                                    new fieldValue({
                                      name : new SFString("choice"),
                                      children : new MFNode([
                                        new ProtoInstance({
                                          name : new SFString("Button"),
                                          DEF : new SFString("_44"),
                                          fieldValue : new MFNode([
                                            new fieldValue({
                                              name : new SFString("choice"),
                                              children : new MFNode([
                                                new Inline({
                                                  DEF : new SFString("_45"),
                                                  url : new MFString(["m4.x3d"]),
                                                  bboxSize : new SFVec3f([0.0495934,0.0296559,0]),
                                                  bboxCenter : new SFVec3f([0.192385,0.197639,-0.299671])})])})])}),

                                        new Inline({
                                          DEF : new SFString("_46"),
                                          url : new MFString(["m4on.x3d"]),
                                          bboxSize : new SFVec3f([0.0495934,0.0296559,0]),
                                          bboxCenter : new SFVec3f([0.192385,0.197639,-0.299671])})])})])}),

                                new ProtoInstance({
                                  name : new SFString("CheckBox"),
                                  DEF : new SFString("_47"),
                                  fieldValue : new MFNode([
                                    new fieldValue({
                                      name : new SFString("choice"),
                                      children : new MFNode([
                                        new ProtoInstance({
                                          name : new SFString("Button"),
                                          DEF : new SFString("_48"),
                                          fieldValue : new MFNode([
                                            new fieldValue({
                                              name : new SFString("choice"),
                                              children : new MFNode([
                                                new Inline({
                                                  DEF : new SFString("_49"),
                                                  url : new MFString(["m5.x3d"]),
                                                  bboxSize : new SFVec3f([0.0495934,0.0291813,0]),
                                                  bboxCenter : new SFVec3f([0.192385,0.16822,-0.299671])})])})])}),

                                        new Inline({
                                          DEF : new SFString("_50"),
                                          url : new MFString(["m5on.x3d"]),
                                          bboxSize : new SFVec3f([0.0495934,0.0291813,0]),
                                          bboxCenter : new SFVec3f([0.192385,0.16822,-0.299671])})])})])}),

                                new ProtoInstance({
                                  name : new SFString("CheckBox"),
                                  DEF : new SFString("_51"),
                                  fieldValue : new MFNode([
                                    new fieldValue({
                                      name : new SFString("choice"),
                                      children : new MFNode([
                                        new ProtoInstance({
                                          name : new SFString("Button"),
                                          DEF : new SFString("_52"),
                                          fieldValue : new MFNode([
                                            new fieldValue({
                                              name : new SFString("choice"),
                                              children : new MFNode([
                                                new Inline({
                                                  DEF : new SFString("_53"),
                                                  url : new MFString(["m6.x3d"]),
                                                  bboxSize : new SFVec3f([0.0495934,0.0291811,0]),
                                                  bboxCenter : new SFVec3f([0.192385,0.139039,-0.299671])})])})])}),

                                        new Inline({
                                          DEF : new SFString("_54"),
                                          url : new MFString(["m6on.x3d"]),
                                          bboxSize : new SFVec3f([0.0495934,0.0291811,0]),
                                          bboxCenter : new SFVec3f([0.192385,0.139039,-0.299671])})])})])})])})])})])})])}),

                new Transform({
                  DEF : new SFString("Delay"),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("Delay"),
                      DEF : new SFString("_55"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("cycleInterval"),
                          value : new SFString("600")})])})])}),

                new Transform({
                  DEF : new SFString("Random"),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("Random"),
                      DEF : new SFString("_56"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("maxValue"),
                          value : new SFString("5")}),

                        new fieldValue({
                          name : new SFString("numValues"),
                          value : new SFString("6")})])})])})])}),

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
                          DEF : new SFString("_57")}),

                        new ProtoInstance({
                          name : new SFString("Bool"),
                          DEF : new SFString("_58")}),

                        new ProtoInstance({
                          name : new SFString("Bool"),
                          DEF : new SFString("_59")}),

                        new ProtoInstance({
                          name : new SFString("Bool"),
                          DEF : new SFString("_60")}),

                        new ProtoInstance({
                          name : new SFString("Bool"),
                          DEF : new SFString("_61")}),

                        new ProtoInstance({
                          name : new SFString("Bool"),
                          DEF : new SFString("_62")}),

                        new ProtoInstance({
                          name : new SFString("Bool"),
                          DEF : new SFString("_63")}),

                        new ProtoInstance({
                          name : new SFString("Int"),
                          DEF : new SFString("_64")})])})])})])}),

            new Sound({
              DEF : new SFString("open"),
              minBack : new SFFloat(3),
              minFront : new SFFloat(3),
              maxBack : new SFFloat(30),
              maxFront : new SFFloat(30),
              source : new SFNode(
                new AudioClip({
                  DEF : new SFString("open_1"),
                  description : new SFString("open"),
                  url : new MFString([", ","open.aiffopen.wav"])}))}),

            new Sound({
              DEF : new SFString("close"),
              minBack : new SFFloat(3),
              minFront : new SFFloat(3),
              maxBack : new SFFloat(30),
              maxFront : new SFFloat(30),
              source : new SFNode(
                new AudioClip({
                  DEF : new SFString("close_1"),
                  description : new SFString("close"),
                  url : new MFString([", ","close.aiffclose.wav"])}))}),

            new Sound({
              DEF : new SFString("ok"),
              intensity : new SFFloat(0.5),
              minBack : new SFFloat(3),
              minFront : new SFFloat(3),
              maxBack : new SFFloat(30),
              maxFront : new SFFloat(30),
              source : new SFNode(
                new AudioClip({
                  DEF : new SFString("ok_1"),
                  description : new SFString("ok"),
                  url : new MFString([", ","ok.aiffok.wav"])}))}),

            new ProtoInstance({
              name : new SFString("Delay"),
              DEF : new SFString("MovieDelay"),
              fieldValue : new MFNode([
                new fieldValue({
                  name : new SFString("cycleInterval"),
                  value : new SFString("300")}),

                new fieldValue({
                  name : new SFString("startTime"),
                  value : new SFString("1")})])}),

            new ProtoInstance({
              name : new SFString("Random"),
              DEF : new SFString("MovieRandom"),
              fieldValue : new MFNode([
                new fieldValue({
                  name : new SFString("maxValue"),
                  value : new SFString("5")})])}),

            new ROUTE({
              fromNode : new SFString("MovieDelay"),
              fromField : new SFString("exitTime"),
              toNode : new SFString("MovieDelay"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("MovieDelay"),
              fromField : new SFString("exitTime"),
              toNode : new SFString("MovieRandom"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("MovieRandom"),
              fromField : new SFString("whichChoice_changed"),
              toNode : new SFString("_30"),
              toField : new SFString("set_whichChoice")}),

            new ROUTE({
              fromNode : new SFString("_30"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("MovieDelay"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("OffButton_1"),
              fromField : new SFString("downTime"),
              toNode : new SFString("Time_1"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("Time_1"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("cambuttonTranslationInterp_1"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Time_1"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("fadebgTransparencyInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Time_1"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("cam-menuTranslationInterp_1"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("OnButton_1"),
              fromField : new SFString("downTime"),
              toNode : new SFString("Time_2"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("Time_2"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("cambuttonTranslationInterp_2"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Time_2"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("cam-menuTranslationInterp_2"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("OffButton_1"),
              fromField : new SFString("downTime"),
              toNode : new SFString("_1"),
              toField : new SFString("set_touchTime")}),

            new ROUTE({
              fromNode : new SFString("OnButton_1"),
              fromField : new SFString("downTime"),
              toNode : new SFString("_1"),
              toField : new SFString("set_touchTime")}),

            new ROUTE({
              fromNode : new SFString("cambuttonTranslationInterp_1"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("button"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("cambuttonTranslationInterp_2"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("button"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("OffButton_2"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("_4"),
              toField : new SFString("set_touchTime")}),

            new ROUTE({
              fromNode : new SFString("OffButton_3"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("_7"),
              toField : new SFString("set_touchTime")}),

            new ROUTE({
              fromNode : new SFString("OffButton_4"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("_10"),
              toField : new SFString("set_touchTime")}),

            new ROUTE({
              fromNode : new SFString("OffButton_5"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("_13"),
              toField : new SFString("set_touchTime")}),

            new ROUTE({
              fromNode : new SFString("OffButton_6"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("_16"),
              toField : new SFString("set_touchTime")}),

            new ROUTE({
              fromNode : new SFString("OffButton_7"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("_19"),
              toField : new SFString("set_touchTime")}),

            new ROUTE({
              fromNode : new SFString("OffButton_8"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("_22"),
              toField : new SFString("set_touchTime")}),

            new ROUTE({
              fromNode : new SFString("_26"),
              fromField : new SFString("whichChoice_changed"),
              toNode : new SFString("_3"),
              toField : new SFString("set_whichChoice")}),

            new ROUTE({
              fromNode : new SFString("cam-menuTranslationInterp_1"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("menu_1"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("cam-menuTranslationInterp_2"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("menu_1"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("_3"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("_25"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("_30"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("_25"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("_25"),
              fromField : new SFString("exitTime"),
              toNode : new SFString("_26"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("_27"),
              fromField : new SFString("exitTime"),
              toNode : new SFString("_26"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("_25"),
              fromField : new SFString("exitTime"),
              toNode : new SFString("_27"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("_27"),
              fromField : new SFString("exitTime"),
              toNode : new SFString("_27"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("_25"),
              fromField : new SFString("startTime_changed"),
              toNode : new SFString("_27"),
              toField : new SFString("set_stopTime")}),

            new ROUTE({
              fromNode : new SFString("OffButton_9"),
              fromField : new SFString("downTime"),
              toNode : new SFString("Time_3"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("Time_3"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("moviesTranslationInterp_1"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Time_3"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("buttonTranslationInterp_1"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("OnButton_2"),
              fromField : new SFString("downTime"),
              toNode : new SFString("Time_4"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("Time_4"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("moviesTranslationInterp_2"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Time_4"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("buttonTranslationInterp_2"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("OffButton_9"),
              fromField : new SFString("downTime"),
              toNode : new SFString("_28"),
              toField : new SFString("set_touchTime")}),

            new ROUTE({
              fromNode : new SFString("OnButton_2"),
              fromField : new SFString("downTime"),
              toNode : new SFString("_28"),
              toField : new SFString("set_touchTime")}),

            new ROUTE({
              fromNode : new SFString("buttonTranslationInterp_1"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("CheckBox_1"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("buttonTranslationInterp_2"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("CheckBox_1"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("_32"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("_31"),
              toField : new SFString("set_touchTime")}),

            new ROUTE({
              fromNode : new SFString("_36"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("_35"),
              toField : new SFString("set_touchTime")}),

            new ROUTE({
              fromNode : new SFString("_40"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("_39"),
              toField : new SFString("set_touchTime")}),

            new ROUTE({
              fromNode : new SFString("_44"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("_43"),
              toField : new SFString("set_touchTime")}),

            new ROUTE({
              fromNode : new SFString("_48"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("_47"),
              toField : new SFString("set_touchTime")}),

            new ROUTE({
              fromNode : new SFString("_52"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("_51"),
              toField : new SFString("set_touchTime")}),

            new ROUTE({
              fromNode : new SFString("_56"),
              fromField : new SFString("whichChoice_changed"),
              toNode : new SFString("_30"),
              toField : new SFString("set_whichChoice")}),

            new ROUTE({
              fromNode : new SFString("moviesTranslationInterp_1"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("menu_2"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("moviesTranslationInterp_2"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("menu_2"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("_25"),
              fromField : new SFString("startTime_changed"),
              toNode : new SFString("_55"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("_55"),
              fromField : new SFString("exitTime"),
              toNode : new SFString("_55"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("_55"),
              fromField : new SFString("exitTime"),
              toNode : new SFString("_56"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("_4"),
              fromField : new SFString("isActive"),
              toNode : new SFString("_57"),
              toField : new SFString("set_value")}),

            new ROUTE({
              fromNode : new SFString("_7"),
              fromField : new SFString("isActive"),
              toNode : new SFString("_58"),
              toField : new SFString("set_value")}),

            new ROUTE({
              fromNode : new SFString("_10"),
              fromField : new SFString("isActive"),
              toNode : new SFString("_59"),
              toField : new SFString("set_value")}),

            new ROUTE({
              fromNode : new SFString("_13"),
              fromField : new SFString("isActive"),
              toNode : new SFString("_60"),
              toField : new SFString("set_value")}),

            new ROUTE({
              fromNode : new SFString("_16"),
              fromField : new SFString("isActive"),
              toNode : new SFString("_61"),
              toField : new SFString("set_value")}),

            new ROUTE({
              fromNode : new SFString("_19"),
              fromField : new SFString("isActive"),
              toNode : new SFString("_62"),
              toField : new SFString("set_value")}),

            new ROUTE({
              fromNode : new SFString("_22"),
              fromField : new SFString("isActive"),
              toNode : new SFString("_63"),
              toField : new SFString("set_value")}),

            new ROUTE({
              fromNode : new SFString("_30"),
              fromField : new SFString("whichChoice_changed"),
              toNode : new SFString("_64"),
              toField : new SFString("set_value")}),

            new ROUTE({
              fromNode : new SFString("OffButton_1"),
              fromField : new SFString("downTime"),
              toNode : new SFString("open_1"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("OffButton_9"),
              fromField : new SFString("downTime"),
              toNode : new SFString("open_1"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("OnButton_1"),
              fromField : new SFString("downTime"),
              toNode : new SFString("close_1"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("OnButton_2"),
              fromField : new SFString("downTime"),
              toNode : new SFString("close_1"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("_3"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("ok_1"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("_30"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("ok_1"),
              toField : new SFString("set_startTime")})])}))});
console.log(X3D0.toXMLNode());
