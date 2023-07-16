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
var Transform = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var ProtoInstance = require('./x3d.mjs');
var fieldValue = require('./x3d.mjs');
var Inline = require('./x3d.mjs');
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
              content : new SFString("Thu, 05 Nov 2015 03:28:57 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V1.2.0, http://titania.create3000.de")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Thu, 05 Nov 2015 03:28:57 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new ExternProtoDeclare({
              name : new SFString("Bonus"),
              url : new MFString(["Bonus_proto__2.x3d"]),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("startTime"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("enterTime"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_MFFLOAT,
                  name : new SFString("range"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                new field({
                  type : field.TYPE_SFVEC3F,
                  name : new SFString("size"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_MFNODE,
                  name : new SFString("level2"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_MFNODE,
                  name : new SFString("level1"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_MFNODE,
                  name : new SFString("level0"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)})])}),

            new Transform({
              DEF : new SFString("Bonus"),
              children : new MFNode([
                new Transform({
                  DEF : new SFString("Yellow"),
                  children : new MFNode([
                    new Transform({
                      DEF : new SFString("Wache-rechts-Yellow1"),
                      translation : new SFVec3f([56.7031,4.58303,66.4808]),
                      children : new MFNode([
                        new ProtoInstance({
                          name : new SFString("Bonus"),
                          fieldValue : new MFNode([
                            new fieldValue({
                              name : new SFString("level2"),
                              children : new MFNode([
                                new Inline({
                                  DEF : new SFString("_1"),
                                  url : new MFString(["bonus-yellow-level2.x3d"])})])}),

                            new fieldValue({
                              name : new SFString("level1"),
                              children : new MFNode([
                                new Inline({
                                  DEF : new SFString("_2"),
                                  url : new MFString(["bonus-yellow-level1.x3d"])})])}),

                            new fieldValue({
                              name : new SFString("level0"),
                              children : new MFNode([
                                new Inline({
                                  DEF : new SFString("_3"),
                                  url : new MFString(["bonus-yellow-level0.x3d"])})])})])})])}),

                    new Transform({
                      DEF : new SFString("Wache-rechts-Yellow2"),
                      translation : new SFVec3f([56.7892,4.53746,70.5596]),
                      children : new MFNode([
                        new ProtoInstance({
                          name : new SFString("Bonus"),
                          fieldValue : new MFNode([
                            new fieldValue({
                              name : new SFString("level2"),
                              children : new MFNode([
                                new Inline({
                                  USE : new SFString("_1")})])}),

                            new fieldValue({
                              name : new SFString("level1"),
                              children : new MFNode([
                                new Inline({
                                  USE : new SFString("_2")})])}),

                            new fieldValue({
                              name : new SFString("level0"),
                              children : new MFNode([
                                new Inline({
                                  USE : new SFString("_3")})])})])})])}),

                    new Transform({
                      DEF : new SFString("Felsgang-Yellow3"),
                      translation : new SFVec3f([115.71,42.3592,-0.817799]),
                      children : new MFNode([
                        new ProtoInstance({
                          name : new SFString("Bonus"),
                          fieldValue : new MFNode([
                            new fieldValue({
                              name : new SFString("level2"),
                              children : new MFNode([
                                new Inline({
                                  USE : new SFString("_1")})])}),

                            new fieldValue({
                              name : new SFString("level1"),
                              children : new MFNode([
                                new Inline({
                                  USE : new SFString("_2")})])}),

                            new fieldValue({
                              name : new SFString("level0"),
                              children : new MFNode([
                                new Inline({
                                  USE : new SFString("_3")})])})])})])}),

                    new Transform({
                      DEF : new SFString("Ausgang-oben-Yellow4"),
                      translation : new SFVec3f([30.196,31.6091,-37.0206]),
                      children : new MFNode([
                        new ProtoInstance({
                          name : new SFString("Bonus"),
                          fieldValue : new MFNode([
                            new fieldValue({
                              name : new SFString("level2"),
                              children : new MFNode([
                                new Inline({
                                  USE : new SFString("_1")})])}),

                            new fieldValue({
                              name : new SFString("level1"),
                              children : new MFNode([
                                new Inline({
                                  USE : new SFString("_2")})])}),

                            new fieldValue({
                              name : new SFString("level0"),
                              children : new MFNode([
                                new Inline({
                                  USE : new SFString("_3")})])})])})])}),

                    new Transform({
                      DEF : new SFString("Ausgang-oben-Yellow5"),
                      translation : new SFVec3f([-27.9319,31.6091,-36.9089]),
                      children : new MFNode([
                        new ProtoInstance({
                          name : new SFString("Bonus"),
                          fieldValue : new MFNode([
                            new fieldValue({
                              name : new SFString("level2"),
                              children : new MFNode([
                                new Inline({
                                  USE : new SFString("_1")})])}),

                            new fieldValue({
                              name : new SFString("level1"),
                              children : new MFNode([
                                new Inline({
                                  USE : new SFString("_2")})])}),

                            new fieldValue({
                              name : new SFString("level0"),
                              children : new MFNode([
                                new Inline({
                                  USE : new SFString("_3")})])})])})])}),

                    new Transform({
                      DEF : new SFString("Ausgang-oben-Yellow6"),
                      translation : new SFVec3f([-25.9477,31.6091,-36.9089]),
                      children : new MFNode([
                        new ProtoInstance({
                          name : new SFString("Bonus"),
                          fieldValue : new MFNode([
                            new fieldValue({
                              name : new SFString("level2"),
                              children : new MFNode([
                                new Inline({
                                  USE : new SFString("_1")})])}),

                            new fieldValue({
                              name : new SFString("level1"),
                              children : new MFNode([
                                new Inline({
                                  USE : new SFString("_2")})])}),

                            new fieldValue({
                              name : new SFString("level0"),
                              children : new MFNode([
                                new Inline({
                                  USE : new SFString("_3")})])})])})])}),

                    new Transform({
                      DEF : new SFString("Ausgang-oben-Yellow7"),
                      translation : new SFVec3f([28.1998,31.6091,-37.0206]),
                      children : new MFNode([
                        new ProtoInstance({
                          name : new SFString("Bonus"),
                          fieldValue : new MFNode([
                            new fieldValue({
                              name : new SFString("level2"),
                              children : new MFNode([
                                new Inline({
                                  USE : new SFString("_1")})])}),

                            new fieldValue({
                              name : new SFString("level1"),
                              children : new MFNode([
                                new Inline({
                                  USE : new SFString("_2")})])}),

                            new fieldValue({
                              name : new SFString("level0"),
                              children : new MFNode([
                                new Inline({
                                  USE : new SFString("_3")})])})])})])}),

                    new Transform({
                      DEF : new SFString("Eingang1-Yellow8"),
                      translation : new SFVec3f([3.62108,1.89283,68.9743]),
                      children : new MFNode([
                        new ProtoInstance({
                          name : new SFString("Bonus"),
                          fieldValue : new MFNode([
                            new fieldValue({
                              name : new SFString("level2"),
                              children : new MFNode([
                                new Inline({
                                  USE : new SFString("_1")})])}),

                            new fieldValue({
                              name : new SFString("level1"),
                              children : new MFNode([
                                new Inline({
                                  USE : new SFString("_2")})])}),

                            new fieldValue({
                              name : new SFString("level0"),
                              children : new MFNode([
                                new Inline({
                                  USE : new SFString("_3")})])})])})])}),

                    new Transform({
                      DEF : new SFString("Eingang2-Yellow9"),
                      translation : new SFVec3f([9.97336,1.5,57.0006]),
                      children : new MFNode([
                        new ProtoInstance({
                          name : new SFString("Bonus"),
                          fieldValue : new MFNode([
                            new fieldValue({
                              name : new SFString("level2"),
                              children : new MFNode([
                                new Inline({
                                  USE : new SFString("_1")})])}),

                            new fieldValue({
                              name : new SFString("level1"),
                              children : new MFNode([
                                new Inline({
                                  USE : new SFString("_2")})])}),

                            new fieldValue({
                              name : new SFString("level0"),
                              children : new MFNode([
                                new Inline({
                                  USE : new SFString("_3")})])})])})])}),

                    new Transform({
                      DEF : new SFString("Pflanze-Yellow10"),
                      translation : new SFVec3f([31.0486,1.5,35.005]),
                      children : new MFNode([
                        new ProtoInstance({
                          name : new SFString("Bonus"),
                          fieldValue : new MFNode([
                            new fieldValue({
                              name : new SFString("level2"),
                              children : new MFNode([
                                new Inline({
                                  USE : new SFString("_1")})])}),

                            new fieldValue({
                              name : new SFString("level1"),
                              children : new MFNode([
                                new Inline({
                                  USE : new SFString("_2")})])}),

                            new fieldValue({
                              name : new SFString("level0"),
                              children : new MFNode([
                                new Inline({
                                  USE : new SFString("_3")})])})])})])}),

                    new Transform({
                      DEF : new SFString("Wache-rechts-vor-Yellow11"),
                      translation : new SFVec3f([61.9902,1.5,51.9971]),
                      children : new MFNode([
                        new ProtoInstance({
                          name : new SFString("Bonus"),
                          fieldValue : new MFNode([
                            new fieldValue({
                              name : new SFString("level2"),
                              children : new MFNode([
                                new Inline({
                                  USE : new SFString("_1")})])}),

                            new fieldValue({
                              name : new SFString("level1"),
                              children : new MFNode([
                                new Inline({
                                  USE : new SFString("_2")})])}),

                            new fieldValue({
                              name : new SFString("level0"),
                              children : new MFNode([
                                new Inline({
                                  USE : new SFString("_3")})])})])})])}),

                    new Transform({
                      DEF : new SFString("Turm-rechts-Yellow12"),
                      translation : new SFVec3f([71.1193,33.9596,60.6608]),
                      children : new MFNode([
                        new ProtoInstance({
                          name : new SFString("Bonus"),
                          fieldValue : new MFNode([
                            new fieldValue({
                              name : new SFString("level2"),
                              children : new MFNode([
                                new Inline({
                                  USE : new SFString("_1")})])}),

                            new fieldValue({
                              name : new SFString("level1"),
                              children : new MFNode([
                                new Inline({
                                  USE : new SFString("_2")})])}),

                            new fieldValue({
                              name : new SFString("level0"),
                              children : new MFNode([
                                new Inline({
                                  USE : new SFString("_3")})])})])})])}),

                    new Transform({
                      DEF : new SFString("Bau-hinten-links-Yellow13"),
                      translation : new SFVec3f([-80.0357,1.5,-6.00637]),
                      children : new MFNode([
                        new ProtoInstance({
                          name : new SFString("Bonus"),
                          fieldValue : new MFNode([
                            new fieldValue({
                              name : new SFString("level2"),
                              children : new MFNode([
                                new Inline({
                                  USE : new SFString("_1")})])}),

                            new fieldValue({
                              name : new SFString("level1"),
                              children : new MFNode([
                                new Inline({
                                  USE : new SFString("_2")})])}),

                            new fieldValue({
                              name : new SFString("level0"),
                              children : new MFNode([
                                new Inline({
                                  USE : new SFString("_3")})])})])})])}),

                    new Transform({
                      DEF : new SFString("Bau-hinten-links-Raum-Yellow14"),
                      translation : new SFVec3f([-81.4743,21.5034,-57.6993]),
                      children : new MFNode([
                        new ProtoInstance({
                          name : new SFString("Bonus"),
                          fieldValue : new MFNode([
                            new fieldValue({
                              name : new SFString("level2"),
                              children : new MFNode([
                                new Inline({
                                  USE : new SFString("_1")})])}),

                            new fieldValue({
                              name : new SFString("level1"),
                              children : new MFNode([
                                new Inline({
                                  USE : new SFString("_2")})])}),

                            new fieldValue({
                              name : new SFString("level0"),
                              children : new MFNode([
                                new Inline({
                                  USE : new SFString("_3")})])})])})])}),

                    new Transform({
                      DEF : new SFString("Bau-hinten-rechts-Yellow15"),
                      translation : new SFVec3f([75.2517,21.5032,-57.4253]),
                      children : new MFNode([
                        new ProtoInstance({
                          name : new SFString("Bonus"),
                          fieldValue : new MFNode([
                            new fieldValue({
                              name : new SFString("level2"),
                              children : new MFNode([
                                new Inline({
                                  USE : new SFString("_1")})])}),

                            new fieldValue({
                              name : new SFString("level1"),
                              children : new MFNode([
                                new Inline({
                                  USE : new SFString("_2")})])}),

                            new fieldValue({
                              name : new SFString("level0"),
                              children : new MFNode([
                                new Inline({
                                  USE : new SFString("_3")})])})])})])}),

                    new Transform({
                      DEF : new SFString("Bau-hinten-rechts-Yellow16"),
                      translation : new SFVec3f([82.9777,21.5032,-57.9282]),
                      children : new MFNode([
                        new ProtoInstance({
                          name : new SFString("Bonus"),
                          fieldValue : new MFNode([
                            new fieldValue({
                              name : new SFString("level2"),
                              children : new MFNode([
                                new Inline({
                                  USE : new SFString("_1")})])}),

                            new fieldValue({
                              name : new SFString("level1"),
                              children : new MFNode([
                                new Inline({
                                  USE : new SFString("_2")})])}),

                            new fieldValue({
                              name : new SFString("level0"),
                              children : new MFNode([
                                new Inline({
                                  USE : new SFString("_3")})])})])})])})])})])})])}))});
console.log(X3D0.toXMLNode());
