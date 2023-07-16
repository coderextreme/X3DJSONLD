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
var NavigationInfo = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var Group = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var IndexedFaceSet = require('./x3d.mjs');
var MFInt32 = require('./x3d.mjs');
var Coordinate = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
var IndexedLineSet = require('./x3d.mjs');
var HAnimHumanoid = require('./x3d.mjs');
var HAnimJoint = require('./x3d.mjs');
var MFFloat = require('./x3d.mjs');
var HAnimSegment = require('./x3d.mjs');
var HAnimSite = require('./x3d.mjs');
var Inline = require('./x3d.mjs');
var MFString = require('./x3d.mjs');
var ImageTexture = require('./x3d.mjs');
var Viewpoint = require('./x3d.mjs');
var SFRotation = require('./x3d.mjs');
var TimeSensor = require('./x3d.mjs');
var SFTime = require('./x3d.mjs');
var OrientationInterpolator = require('./x3d.mjs');
var MFRotation = require('./x3d.mjs');
var PositionInterpolator = require('./x3d.mjs');
var ProximitySensor = require('./x3d.mjs');
var TouchSensor = require('./x3d.mjs');
var Text = require('./x3d.mjs');
var FontStyle = require('./x3d.mjs');
var ROUTE = require('./x3d.mjs');
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("4.0"),
      head : new SFNode(
        new head({
          component : new SFNode(
            new component({
              name : new SFString("HAnim"),
              level : new SFInt32(1)})),
          component : new SFNode(
            new component({
              name : new SFString("Text"),
              level : new SFInt32(1)})),
          component : new SFNode(
            new component({
              name : new SFString("Core"),
              level : new SFInt32(1)})),
          component : new SFNode(
            new component({
              name : new SFString("Grouping"),
              level : new SFInt32(1)})),
          component : new SFNode(
            new component({
              name : new SFString("Shape"),
              level : new SFInt32(1)})),
          component : new SFNode(
            new component({
              name : new SFString("Rendering"),
              level : new SFInt32(1)})),
          meta : new MFNode([
            new meta({
              name : new SFString("Joe"),
              content : new SFString("20090328 20130628 http://www.hypermultimedia.com/acontents.htm#X3DHANIM")}),

            new meta({
              name : new SFString("converter"),
              content : new SFString("x3d-tidy V1.0.56, https://www.npmjs.com/package/x3d-tidy")}),

            new meta({
              name : new SFString("converted"),
              content : new SFString("Wed, 12 Jul 2023 08:05:49 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new WorldInfo({
              DEF : new SFString("JoeTest_WorldInfo"),
              title : new SFString("JoeLevel2LOA3SSPYRWRJKHud.x3dv 20130723 20230108")}),

            new NavigationInfo({
              speed : new SFFloat(0.75),
              headlight : new SFBool(false)}),

            new Group({
              DEF : new SFString("IllustrationGeometry"),
              children : new MFNode([
                new Transform({
                  translation : new SFVec3f([0,2.1,0]),
                  scale : new SFVec3f([2,2,2]),
                  children : new MFNode([
                    new Shape({
                      DEF : new SFString("jointbox"),
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              ambientIntensity : new SFFloat(0.5),
                              diffuseColor : new SFColor([1,1,0]),
                              specularColor : new SFColor([1,1,0]),
                              shininess : new SFFloat(0.7)}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          creaseAngle : new SFFloat(0.1),
                          coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))})])}),

                new Transform({
                  translation : new SFVec3f([0,2.2,0]),
                  scale : new SFVec3f([2,2,2]),
                  children : new MFNode([
                    new Shape({
                      DEF : new SFString("sitebox"),
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              ambientIntensity : new SFFloat(0.5),
                              diffuseColor : new SFColor([1,0,0]),
                              specularColor : new SFColor([1,0,0]),
                              shininess : new SFFloat(0.7)}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          creaseAngle : new SFFloat(0.1),
                          coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))})])}),

                new Transform({
                  translation : new SFVec3f([0,2.3,0]),
                  scale : new SFVec3f([2,2,2]),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          DEF : new SFString("SegmentLine"),
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([0,1,0]),
                              specularColor : new SFColor([0,1,0]),
                              emissiveColor : new SFColor([0,1,0])}))})),
                      geometry : new SFNode(
                        new IndexedLineSet({
                          coordIndex : new MFInt32([0,1,-1]),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([0,0,0,0.2,0,0])}))}))})])}),

                new Transform({
                  translation : new SFVec3f([0,2.4,0]),
                  scale : new SFVec3f([2,2,2]),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          DEF : new SFString("SiteParentLine"),
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([1,0,0]),
                              specularColor : new SFColor([1,0,0]),
                              emissiveColor : new SFColor([1,0,0])}))})),
                      geometry : new SFNode(
                        new IndexedLineSet({
                          coordIndex : new MFInt32([0,1,-1]),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([0,0,0,0.2,0,0])}))}))})])})])}),

            new Group({
              DEF : new SFString("SpecHumanoid"),
              children : new MFNode([
                new HAnimHumanoid({
                  DEF : new SFString("humanoid"),
                  version : new SFString("2.0"),
                  joints : new MFNode([
                    new HAnimJoint({
                      name : new SFString("HumanoidRoot"),
                      DEF : new SFString("hanim_HumanoidRoot"),
                      center : new SFVec3f([0,0.824,0.0277]),
                      ulimit : new MFFloat([0,0,0]),
                      llimit : new MFFloat([0,0,0]),
                      children : new MFNode([
                        new HAnimSegment({
                          name : new SFString("sacrum"),
                          DEF : new SFString("hanim_sacrum"),
                          children : new MFNode([
                            new Transform({
                              translation : new SFVec3f([0,0.824,0.0277]),
                              children : new MFNode([
                                new Shape({
                                  USE : new SFString("jointbox")})])}),

                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  USE : new SFString("SegmentLine")})),
                              geometry : new SFNode(
                                new IndexedLineSet({
                                  coordIndex : new MFInt32([0,1,-1,0,2,-1]),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([0,0.824,0.0277,0,0.9149,0.0016,0.0028,1.0568,-0.0776])}))}))})])}),

                        new HAnimJoint({
                          name : new SFString("sacroiliac"),
                          DEF : new SFString("hanim_sacroiliac"),
                          center : new SFVec3f([0,0.9149,0.0016]),
                          skinCoordIndex : new MFInt32([17,19,20,21,22,23,26,27,73,82,89,91,93]),
                          skinCoordWeight : new MFFloat([1,1,1,1,1,1,1,1,1,1,0.35,0.35,1]),
                          ulimit : new MFFloat([0,0,0]),
                          llimit : new MFFloat([0,0,0]),
                          children : new MFNode([
                            new HAnimSegment({
                              name : new SFString("pelvis"),
                              DEF : new SFString("hanim_pelvis"),
                              children : new MFNode([
                                new Transform({
                                  translation : new SFVec3f([0,0.9149,0.0016]),
                                  children : new MFNode([
                                    new Shape({
                                      USE : new SFString("jointbox")})])}),

                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      USE : new SFString("SegmentLine")})),
                                  geometry : new SFNode(
                                    new IndexedLineSet({
                                      coordIndex : new MFInt32([0,1,-1,0,2,-1]),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([0,0.9149,0.0016,0.0961,0.9124,-0.0001,-0.095,0.9171,0.0029])}))}))}),

                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      USE : new SFString("SiteParentLine")})),
                                  geometry : new SFNode(
                                    new IndexedLineSet({
                                      coordIndex : new MFInt32([0,1,-1,0,2,-1,0,3,-1,0,4,-1,0,5,-1,0,6,-1,0,7,-1,0,8,-1,0,9,-1]),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([0,0.9149,0.0016,-0.1525,1.0628,0.0035,-0.1689,0.8419,0.0352,0.1612,1.0537,0.0008,0.1677,0.8336,0.0303,-0.0887,1.0021,0.1112,0.0925,0.9983,0.1052,-0.0716,1.019,-0.1138,0.0774,1.019,-0.1151,0.0034,0.8266,0.0257])}))}))}),

                                new HAnimSite({
                                  name : new SFString("r_iliocristale"),
                                  DEF : new SFString("hanim_r_iliocristale"),
                                  translation : new SFVec3f([-0.1525,1.0628,0.0035]),
                                  children : new MFNode([
                                    new Shape({
                                      USE : new SFString("sitebox")})])}),

                                new HAnimSite({
                                  name : new SFString("r_trochanterion"),
                                  DEF : new SFString("hanim_r_trochanterion"),
                                  translation : new SFVec3f([-0.1689,0.8419,0.0352]),
                                  children : new MFNode([
                                    new Shape({
                                      USE : new SFString("sitebox")})])}),

                                new HAnimSite({
                                  name : new SFString("l_iliocristale"),
                                  DEF : new SFString("hanim_l_iliocristale"),
                                  translation : new SFVec3f([0.1612,1.0537,0.0008]),
                                  children : new MFNode([
                                    new Shape({
                                      USE : new SFString("sitebox")})])}),

                                new HAnimSite({
                                  name : new SFString("l_trochanterion"),
                                  DEF : new SFString("hanim_l_trochanterion"),
                                  translation : new SFVec3f([0.1677,0.8336,0.0303]),
                                  children : new MFNode([
                                    new Shape({
                                      USE : new SFString("sitebox")})])}),

                                new HAnimSite({
                                  name : new SFString("r_asis"),
                                  DEF : new SFString("hanim_r_asis"),
                                  translation : new SFVec3f([-0.0887,1.0021,0.1112]),
                                  children : new MFNode([
                                    new Shape({
                                      USE : new SFString("sitebox")})])}),

                                new HAnimSite({
                                  name : new SFString("l_asis"),
                                  DEF : new SFString("hanim_l_asis"),
                                  translation : new SFVec3f([0.0925,0.9983,0.1052]),
                                  children : new MFNode([
                                    new Shape({
                                      USE : new SFString("sitebox")})])}),

                                new HAnimSite({
                                  name : new SFString("r_psis"),
                                  DEF : new SFString("hanim_r_psis"),
                                  translation : new SFVec3f([-0.0716,1.019,-0.1138]),
                                  children : new MFNode([
                                    new Shape({
                                      USE : new SFString("sitebox")})])}),

                                new HAnimSite({
                                  name : new SFString("l_psis"),
                                  DEF : new SFString("hanim_l_psis"),
                                  translation : new SFVec3f([0.0774,1.019,-0.1151]),
                                  children : new MFNode([
                                    new Shape({
                                      USE : new SFString("sitebox")})])}),

                                new HAnimSite({
                                  name : new SFString("crotch"),
                                  DEF : new SFString("hanim_crotch"),
                                  translation : new SFVec3f([0.0034,0.8266,0.0257]),
                                  children : new MFNode([
                                    new Shape({
                                      USE : new SFString("sitebox")})])})])}),

                            new HAnimJoint({
                              name : new SFString("l_hip"),
                              DEF : new SFString("hanim_l_hip"),
                              center : new SFVec3f([0.0961,0.9124,-0.0001]),
                              skinCoordIndex : new MFInt32([89,90,94,95,96,97]),
                              skinCoordWeight : new MFFloat([0.65,1,1,1,1,1]),
                              ulimit : new MFFloat([0,0,0]),
                              llimit : new MFFloat([0,0,0]),
                              children : new MFNode([
                                new HAnimSegment({
                                  name : new SFString("l_thigh"),
                                  DEF : new SFString("hanim_l_thigh"),
                                  children : new MFNode([
                                    new Transform({
                                      translation : new SFVec3f([0.0961,0.9124,-0.0001]),
                                      children : new MFNode([
                                        new Shape({
                                          USE : new SFString("jointbox")})])}),

                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          USE : new SFString("SegmentLine")})),
                                      geometry : new SFNode(
                                        new IndexedLineSet({
                                          coordIndex : new MFInt32([0,1,-1]),
                                          coord : new SFNode(
                                            new Coordinate({
                                              point : new MFVec3f([0.0961,0.9124,-0.0001,0.104,0.4867,0.0308])}))}))}),

                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          USE : new SFString("SiteParentLine")})),
                                      geometry : new SFNode(
                                        new IndexedLineSet({
                                          coordIndex : new MFInt32([0,1,-1,0,2,-1,0,3,-1]),
                                          coord : new SFNode(
                                            new Coordinate({
                                              point : new MFVec3f([0.0961,0.9124,-0.0001,0.0993,0.4881,-0.0309,0.1598,0.4967,0.0297,0.0398,0.4946,0.0303])}))}))}),

                                    new HAnimSite({
                                      name : new SFString("l_knee_crease"),
                                      DEF : new SFString("hanim_l_knee_crease"),
                                      translation : new SFVec3f([0.0993,0.4881,-0.0309]),
                                      children : new MFNode([
                                        new Shape({
                                          USE : new SFString("sitebox")})])}),

                                    new HAnimSite({
                                      name : new SFString("l_femoral_lateral_epicn"),
                                      DEF : new SFString("hanim_l_femoral_lateral_epicn"),
                                      translation : new SFVec3f([0.1598,0.4967,0.0297]),
                                      children : new MFNode([
                                        new Shape({
                                          USE : new SFString("sitebox")})])}),

                                    new HAnimSite({
                                      name : new SFString("l_femoral_medial_epicn"),
                                      DEF : new SFString("hanim_l_femoral_medial_epicn"),
                                      translation : new SFVec3f([0.0398,0.4946,0.0303]),
                                      children : new MFNode([
                                        new Shape({
                                          USE : new SFString("sitebox")})])})])}),

                                new HAnimJoint({
                                  name : new SFString("l_knee"),
                                  DEF : new SFString("hanim_l_knee"),
                                  center : new SFVec3f([0.104,0.4867,0.0308]),
                                  skinCoordIndex : new MFInt32([334,335,336,337,338,339,340,341]),
                                  skinCoordWeight : new MFFloat([1,1,1,1,1,1,1,1]),
                                  ulimit : new MFFloat([0,0,0]),
                                  llimit : new MFFloat([0,0,0]),
                                  children : new MFNode([
                                    new HAnimSegment({
                                      name : new SFString("l_calf"),
                                      DEF : new SFString("hanim_l_calf"),
                                      children : new MFNode([
                                        new Transform({
                                          translation : new SFVec3f([0.104,0.4867,0.0308]),
                                          children : new MFNode([
                                            new Shape({
                                              USE : new SFString("jointbox")})])}),

                                        new Shape({
                                          appearance : new SFNode(
                                            new Appearance({
                                              USE : new SFString("SegmentLine")})),
                                          geometry : new SFNode(
                                            new IndexedLineSet({
                                              coordIndex : new MFInt32([0,1,-1]),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([0.104,0.4867,0.0308,0.1101,0.0656,-0.0736])}))}))})])}),

                                    new HAnimJoint({
                                      name : new SFString("l_ankle"),
                                      DEF : new SFString("hanim_l_ankle"),
                                      center : new SFVec3f([0.1101,0.0656,-0.0736]),
                                      skinCoordIndex : new MFInt32([342,343,344,345]),
                                      skinCoordWeight : new MFFloat([1,1,1,1]),
                                      ulimit : new MFFloat([0,0,0]),
                                      llimit : new MFFloat([0,0,0]),
                                      children : new MFNode([
                                        new HAnimSegment({
                                          name : new SFString("l_hindfoot"),
                                          DEF : new SFString("hanim_l_hindfoot"),
                                          children : new MFNode([
                                            new Transform({
                                              translation : new SFVec3f([0.1101,0.0656,-0.0736]),
                                              children : new MFNode([
                                                new Shape({
                                                  USE : new SFString("jointbox")})])}),

                                            new Shape({
                                              appearance : new SFNode(
                                                new Appearance({
                                                  USE : new SFString("SegmentLine")})),
                                              geometry : new SFNode(
                                                new IndexedLineSet({
                                                  coordIndex : new MFInt32([0,1,-1]),
                                                  coord : new SFNode(
                                                    new Coordinate({
                                                      point : new MFVec3f([0.1101,0.0656,-0.0736,0.1086,0.0001,-0.0368])}))}))}),

                                            new Shape({
                                              appearance : new SFNode(
                                                new Appearance({
                                                  USE : new SFString("SiteParentLine")})),
                                              geometry : new SFNode(
                                                new IndexedLineSet({
                                                  coordIndex : new MFInt32([0,1,-1,0,2,-1,0,3,-1,0,4,-1]),
                                                  coord : new SFNode(
                                                    new Coordinate({
                                                      point : new MFVec3f([0.1101,0.0656,-0.0736,0.1308,0.0597,-0.1032,0.089,0.0716,-0.0881,0.089,0.0575,-0.0943,0.0974,0.0259,-0.1171])}))}))}),

                                            new HAnimSite({
                                              name : new SFString("l_lateral_malleolus"),
                                              DEF : new SFString("hanim_l_lateral_malleolus"),
                                              translation : new SFVec3f([0.1308,0.0597,-0.1032]),
                                              children : new MFNode([
                                                new Shape({
                                                  USE : new SFString("sitebox")})])}),

                                            new HAnimSite({
                                              name : new SFString("l_medial_malleolus"),
                                              DEF : new SFString("hanim_l_medial_malleolus"),
                                              translation : new SFVec3f([0.089,0.0716,-0.0881]),
                                              children : new MFNode([
                                                new Shape({
                                                  USE : new SFString("sitebox")})])}),

                                            new HAnimSite({
                                              name : new SFString("l_sphyrion"),
                                              DEF : new SFString("hanim_l_sphyrion"),
                                              translation : new SFVec3f([0.089,0.0575,-0.0943]),
                                              children : new MFNode([
                                                new Shape({
                                                  USE : new SFString("sitebox")})])}),

                                            new HAnimSite({
                                              name : new SFString("l_calcaneous_post"),
                                              DEF : new SFString("hanim_l_calcaneous_post"),
                                              translation : new SFVec3f([0.0974,0.0259,-0.1171]),
                                              children : new MFNode([
                                                new Shape({
                                                  USE : new SFString("sitebox")})])})])}),

                                        new HAnimJoint({
                                          name : new SFString("l_subtalar"),
                                          DEF : new SFString("hanim_l_subtalar"),
                                          center : new SFVec3f([0.1086,0.0001,-0.0368]),
                                          skinCoordIndex : new MFInt32([346,347,348,71]),
                                          skinCoordWeight : new MFFloat([1,1,1,1]),
                                          ulimit : new MFFloat([0,0,0]),
                                          llimit : new MFFloat([0,0,0]),
                                          children : new MFNode([
                                            new HAnimSegment({
                                              name : new SFString("l_midproximal"),
                                              DEF : new SFString("hanim_l_l_midproximal"),
                                              children : new MFNode([
                                                new Transform({
                                                  translation : new SFVec3f([0.1086,0.0001,-0.0368]),
                                                  children : new MFNode([
                                                    new Shape({
                                                      USE : new SFString("jointbox")})])}),

                                                new Shape({
                                                  appearance : new SFNode(
                                                    new Appearance({
                                                      USE : new SFString("SegmentLine")})),
                                                  geometry : new SFNode(
                                                    new IndexedLineSet({
                                                      coordIndex : new MFInt32([0,1,-1]),
                                                      coord : new SFNode(
                                                        new Coordinate({
                                                          point : new MFVec3f([0.1086,0.0001,-0.0368,0.1086,0.0001,0.0368])}))}))})])}),

                                            new HAnimJoint({
                                              name : new SFString("l_midtarsal"),
                                              DEF : new SFString("hanim_l_midtarsal"),
                                              center : new SFVec3f([0.1086,0.0001,0.0368]),
                                              skinCoordIndex : new MFInt32([349,350,351,352]),
                                              skinCoordWeight : new MFFloat([1,1,1,1]),
                                              ulimit : new MFFloat([0,0,0]),
                                              llimit : new MFFloat([0,0,0]),
                                              children : new MFNode([
                                                new HAnimSegment({
                                                  name : new SFString("l_middistal"),
                                                  DEF : new SFString("hanim_l_middistal"),
                                                  children : new MFNode([
                                                    new Transform({
                                                      translation : new SFVec3f([0.1086,0.0001,0.0368]),
                                                      children : new MFNode([
                                                        new Shape({
                                                          USE : new SFString("jointbox")})])}),

                                                    new Shape({
                                                      appearance : new SFNode(
                                                        new Appearance({
                                                          USE : new SFString("SegmentLine")})),
                                                      geometry : new SFNode(
                                                        new IndexedLineSet({
                                                          coordIndex : new MFInt32([0,1,-1]),
                                                          coord : new SFNode(
                                                            new Coordinate({
                                                              point : new MFVec3f([0.1086,0.0001,0.0368,0.1086,0,0.0762])}))}))}),

                                                    new Shape({
                                                      appearance : new SFNode(
                                                        new Appearance({
                                                          USE : new SFString("SiteParentLine")})),
                                                      geometry : new SFNode(
                                                        new IndexedLineSet({
                                                          coordIndex : new MFInt32([0,1,-1]),
                                                          coord : new SFNode(
                                                            new Coordinate({
                                                              point : new MFVec3f([0.1086,0.0001,-0.0368,0.0816,0.0232,0.0106])}))}))}),

                                                    new HAnimSite({
                                                      name : new SFString("l_metatarsal_pha1"),
                                                      DEF : new SFString("hanim_l_metatarsal_pha1"),
                                                      translation : new SFVec3f([0.0816,0.0232,0.0106]),
                                                      children : new MFNode([
                                                        new Shape({
                                                          USE : new SFString("sitebox")})])})])}),

                                                new HAnimJoint({
                                                  name : new SFString("l_metatarsal"),
                                                  DEF : new SFString("hanim_l_metatarsal"),
                                                  center : new SFVec3f([0.1086,0,0.0762]),
                                                  skinCoordIndex : new MFInt32([353,354,355,356,357,358,359,360,361]),
                                                  skinCoordWeight : new MFFloat([1,1,1,1,1,1,1,1,1]),
                                                  ulimit : new MFFloat([0,0,0]),
                                                  llimit : new MFFloat([0,0,0]),
                                                  children : new MFNode([
                                                    new HAnimSegment({
                                                      name : new SFString("l_forefoot"),
                                                      DEF : new SFString("hanim_l_forefoot"),
                                                      children : new MFNode([
                                                        new Transform({
                                                          translation : new SFVec3f([0.1086,0,0.0762]),
                                                          children : new MFNode([
                                                            new Shape({
                                                              USE : new SFString("jointbox")})])}),

                                                        new Shape({
                                                          appearance : new SFNode(
                                                            new Appearance({
                                                              USE : new SFString("SegmentLine")})),
                                                          geometry : new SFNode(
                                                            new IndexedLineSet({
                                                              coordIndex : new MFInt32([0,1,-1]),
                                                              coord : new SFNode(
                                                                new Coordinate({
                                                                  point : new MFVec3f([0.1086,0,0.0762,0.1354,0.0016,0.1476])}))}))}),

                                                        new Shape({
                                                          appearance : new SFNode(
                                                            new Appearance({
                                                              USE : new SFString("SiteParentLine")})),
                                                          geometry : new SFNode(
                                                            new IndexedLineSet({
                                                              coordIndex : new MFInt32([0,1,-1,0,2,-1,0,3,-1]),
                                                              coord : new SFNode(
                                                                new Coordinate({
                                                                  point : new MFVec3f([0.1086,0,0.0762,0.1354,0.0016,0.1476,0.1825,0.007,0.0928,0.1195,0.0079,0.1433])}))}))}),

                                                        new HAnimSite({
                                                          name : new SFString("l_forefoot_tip"),
                                                          DEF : new SFString("hanim_l_forefoot_tip"),
                                                          translation : new SFVec3f([0.1354,0.0016,0.1476]),
                                                          children : new MFNode([
                                                            new Shape({
                                                              USE : new SFString("sitebox")})])}),

                                                        new HAnimSite({
                                                          name : new SFString("l_metatarsal_pha5"),
                                                          DEF : new SFString("hanim_l_metatarsal_pha5"),
                                                          translation : new SFVec3f([0.1825,0.007,0.0928]),
                                                          children : new MFNode([
                                                            new Shape({
                                                              USE : new SFString("sitebox")})])}),

                                                        new HAnimSite({
                                                          name : new SFString("l_digit2"),
                                                          DEF : new SFString("hanim_l_digit2"),
                                                          translation : new SFVec3f([0.1195,0.0079,0.1433]),
                                                          children : new MFNode([
                                                            new Shape({
                                                              USE : new SFString("sitebox")})])})])})])})])})])})])})])})])}),

                            new HAnimJoint({
                              name : new SFString("r_hip"),
                              DEF : new SFString("hanim_r_hip"),
                              center : new SFVec3f([-0.095,0.9171,0.0029]),
                              skinCoordIndex : new MFInt32([91,92,98,99,100,101,362,363]),
                              skinCoordWeight : new MFFloat([0.65,1,0.8,1,1,1,0.4,0.8]),
                              ulimit : new MFFloat([0,0,0]),
                              llimit : new MFFloat([0,0,0]),
                              children : new MFNode([
                                new HAnimSegment({
                                  name : new SFString("r_thigh"),
                                  DEF : new SFString("hanim_r_thigh"),
                                  children : new MFNode([
                                    new Transform({
                                      translation : new SFVec3f([-0.095,0.9171,0.0029]),
                                      children : new MFNode([
                                        new Shape({
                                          USE : new SFString("jointbox")})])}),

                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          USE : new SFString("SegmentLine")})),
                                      geometry : new SFNode(
                                        new IndexedLineSet({
                                          coordIndex : new MFInt32([0,1,-1]),
                                          coord : new SFNode(
                                            new Coordinate({
                                              point : new MFVec3f([-0.095,0.9171,0.0029,-0.0867,0.4913,0.0318])}))}))}),

                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          USE : new SFString("SiteParentLine")})),
                                      geometry : new SFNode(
                                        new IndexedLineSet({
                                          coordIndex : new MFInt32([0,1,-1,0,2,-1,0,3,-1]),
                                          coord : new SFNode(
                                            new Coordinate({
                                              point : new MFVec3f([-0.095,0.9171,0.0029,-0.0825,0.4932,-0.0326,-0.1421,0.4992,0.031,-0.0221,0.5014,0.0289])}))}))}),

                                    new HAnimSite({
                                      name : new SFString("r_knee_crease"),
                                      DEF : new SFString("hanim_r_knee_crease"),
                                      translation : new SFVec3f([-0.0825,0.4932,-0.0326]),
                                      children : new MFNode([
                                        new Shape({
                                          USE : new SFString("sitebox")})])}),

                                    new HAnimSite({
                                      name : new SFString("r_femoral_lateral_epicn"),
                                      DEF : new SFString("hanim_r_femoral_lateral_epicn"),
                                      translation : new SFVec3f([-0.1421,0.4992,0.031]),
                                      children : new MFNode([
                                        new Shape({
                                          USE : new SFString("sitebox")})])}),

                                    new HAnimSite({
                                      name : new SFString("r_femoral_medial_epicn"),
                                      DEF : new SFString("hanim_r_femoral_medial_epicn"),
                                      translation : new SFVec3f([-0.0221,0.5014,0.0289]),
                                      children : new MFNode([
                                        new Shape({
                                          USE : new SFString("sitebox")})])})])}),

                                new HAnimJoint({
                                  name : new SFString("r_knee"),
                                  DEF : new SFString("hanim_r_knee"),
                                  center : new SFVec3f([-0.0867,0.4913,0.0318]),
                                  skinCoordIndex : new MFInt32([362,363,364,365,366,367,368,369,98]),
                                  skinCoordWeight : new MFFloat([0.6,0.2,1,1,1,1,1,1,0.2]),
                                  ulimit : new MFFloat([0,0,0]),
                                  llimit : new MFFloat([0,0,0]),
                                  children : new MFNode([
                                    new HAnimSegment({
                                      name : new SFString("r_calf"),
                                      DEF : new SFString("hanim_r_calf"),
                                      children : new MFNode([
                                        new Transform({
                                          translation : new SFVec3f([-0.0867,0.4913,0.0318]),
                                          children : new MFNode([
                                            new Shape({
                                              USE : new SFString("jointbox")})])}),

                                        new Shape({
                                          appearance : new SFNode(
                                            new Appearance({
                                              USE : new SFString("SegmentLine")})),
                                          geometry : new SFNode(
                                            new IndexedLineSet({
                                              coordIndex : new MFInt32([0,1,-1]),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([-0.0867,0.4913,0.0318,-0.0801,0.0712,-0.0766])}))}))})])}),

                                    new HAnimJoint({
                                      name : new SFString("r_ankle"),
                                      DEF : new SFString("hanim_r_ankle"),
                                      center : new SFVec3f([-0.0801,0.0712,-0.0766]),
                                      skinCoordIndex : new MFInt32([370,371,372,373]),
                                      skinCoordWeight : new MFFloat([1,1,1,1]),
                                      ulimit : new MFFloat([0,0,0]),
                                      llimit : new MFFloat([0,0,0]),
                                      children : new MFNode([
                                        new HAnimSegment({
                                          name : new SFString("r_hindfoot"),
                                          DEF : new SFString("hanim_r_hindfoot"),
                                          children : new MFNode([
                                            new Transform({
                                              translation : new SFVec3f([-0.0801,0.0712,-0.0766]),
                                              children : new MFNode([
                                                new Shape({
                                                  USE : new SFString("jointbox")})])}),

                                            new Shape({
                                              appearance : new SFNode(
                                                new Appearance({
                                                  USE : new SFString("SegmentLine")})),
                                              geometry : new SFNode(
                                                new IndexedLineSet({
                                                  coordIndex : new MFInt32([0,1,-1]),
                                                  coord : new SFNode(
                                                    new Coordinate({
                                                      point : new MFVec3f([-0.0801,0.0712,-0.0766,-0.0801,0,-0.0368])}))}))}),

                                            new Shape({
                                              appearance : new SFNode(
                                                new Appearance({
                                                  USE : new SFString("SiteParentLine")})),
                                              geometry : new SFNode(
                                                new IndexedLineSet({
                                                  coordIndex : new MFInt32([0,1,-1,0,2,-1,0,3,-1,0,4,-1]),
                                                  coord : new SFNode(
                                                    new Coordinate({
                                                      point : new MFVec3f([-0.0801,0.0712,-0.0766,-0.1006,0.0658,-0.1075,-0.0591,0.076,-0.0928,-0.0603,0.061,-0.1002,-0.0692,0.0297,-0.1221])}))}))}),

                                            new HAnimSite({
                                              name : new SFString("r_lateral_malleolus"),
                                              DEF : new SFString("hanim_r_lateral_malleolus"),
                                              translation : new SFVec3f([-0.1006,0.0658,-0.1075]),
                                              children : new MFNode([
                                                new Shape({
                                                  USE : new SFString("sitebox")})])}),

                                            new HAnimSite({
                                              name : new SFString("r_medial_malleolus"),
                                              DEF : new SFString("hanim_r_medial_malleolus"),
                                              translation : new SFVec3f([-0.0591,0.076,-0.0928]),
                                              children : new MFNode([
                                                new Shape({
                                                  USE : new SFString("sitebox")})])}),

                                            new HAnimSite({
                                              name : new SFString("r_sphyrion"),
                                              DEF : new SFString("hanim_r_sphyrion"),
                                              translation : new SFVec3f([-0.0603,0.061,-0.1002]),
                                              children : new MFNode([
                                                new Shape({
                                                  USE : new SFString("sitebox")})])}),

                                            new HAnimSite({
                                              name : new SFString("r_calcaneous_post"),
                                              DEF : new SFString("hanim_r_calcaneous_post"),
                                              translation : new SFVec3f([-0.0692,0.0297,-0.1221]),
                                              children : new MFNode([
                                                new Shape({
                                                  USE : new SFString("sitebox")})])})])}),

                                        new HAnimJoint({
                                          name : new SFString("r_subtalar"),
                                          DEF : new SFString("hanim_r_subtalar"),
                                          center : new SFVec3f([-0.0801,0,-0.0368]),
                                          skinCoordIndex : new MFInt32([374,375,376]),
                                          skinCoordWeight : new MFFloat([1,1,1]),
                                          ulimit : new MFFloat([0,0,0]),
                                          llimit : new MFFloat([0,0,0]),
                                          children : new MFNode([
                                            new HAnimSegment({
                                              name : new SFString("r_midproximal"),
                                              DEF : new SFString("hanim_r_midproximal"),
                                              children : new MFNode([
                                                new Transform({
                                                  translation : new SFVec3f([-0.0801,0,-0.0368]),
                                                  children : new MFNode([
                                                    new Shape({
                                                      USE : new SFString("jointbox")})])}),

                                                new Shape({
                                                  appearance : new SFNode(
                                                    new Appearance({
                                                      USE : new SFString("SegmentLine")})),
                                                  geometry : new SFNode(
                                                    new IndexedLineSet({
                                                      coordIndex : new MFInt32([0,1,-1]),
                                                      coord : new SFNode(
                                                        new Coordinate({
                                                          point : new MFVec3f([-0.0801,0,-0.0368,-0.0801,0,0.0368])}))}))})])}),

                                            new HAnimJoint({
                                              name : new SFString("r_midtarsal"),
                                              DEF : new SFString("hanim_r_midtarsal"),
                                              center : new SFVec3f([-0.0801,0,0.0368]),
                                              skinCoordIndex : new MFInt32([377,378,379,380]),
                                              skinCoordWeight : new MFFloat([1,1,1,1]),
                                              ulimit : new MFFloat([0,0,0]),
                                              llimit : new MFFloat([0,0,0]),
                                              children : new MFNode([
                                                new HAnimSegment({
                                                  name : new SFString("r_middistal"),
                                                  DEF : new SFString("hanim_r_middistal"),
                                                  children : new MFNode([
                                                    new Transform({
                                                      translation : new SFVec3f([-0.0801,0,0.0368]),
                                                      children : new MFNode([
                                                        new Shape({
                                                          USE : new SFString("jointbox")})])}),

                                                    new Shape({
                                                      appearance : new SFNode(
                                                        new Appearance({
                                                          USE : new SFString("SegmentLine")})),
                                                      geometry : new SFNode(
                                                        new IndexedLineSet({
                                                          coordIndex : new MFInt32([0,1,-1]),
                                                          coord : new SFNode(
                                                            new Coordinate({
                                                              point : new MFVec3f([-0.0801,0,-0.0368,-0.0801,0.0039,0.0732])}))}))}),

                                                    new Shape({
                                                      appearance : new SFNode(
                                                        new Appearance({
                                                          USE : new SFString("SiteParentLine")})),
                                                      geometry : new SFNode(
                                                        new IndexedLineSet({
                                                          coordIndex : new MFInt32([0,1,-1]),
                                                          coord : new SFNode(
                                                            new Coordinate({
                                                              point : new MFVec3f([-0.0801,0,0.0368,-0.0521,0.026,0.0127])}))}))}),

                                                    new HAnimSite({
                                                      name : new SFString("r_metatarsal_pha1"),
                                                      DEF : new SFString("hanim_r_metatarsal_pha1"),
                                                      translation : new SFVec3f([-0.0521,0.026,0.0127]),
                                                      children : new MFNode([
                                                        new Shape({
                                                          USE : new SFString("sitebox")})])})])}),

                                                new HAnimJoint({
                                                  name : new SFString("r_metatarsal"),
                                                  DEF : new SFString("hanim_r_metatarsal"),
                                                  center : new SFVec3f([-0.0801,0.0039,0.0732]),
                                                  skinCoordIndex : new MFInt32([381,382,383,384,385,386,387,388,389]),
                                                  skinCoordWeight : new MFFloat([1,1,1,1,1,1,1,1,1]),
                                                  ulimit : new MFFloat([0,0,0]),
                                                  llimit : new MFFloat([0,0,0]),
                                                  children : new MFNode([
                                                    new HAnimSegment({
                                                      name : new SFString("r_forefoot"),
                                                      DEF : new SFString("hanim_r_forefoot"),
                                                      children : new MFNode([
                                                        new Transform({
                                                          translation : new SFVec3f([-0.0801,0.0039,0.0732]),
                                                          children : new MFNode([
                                                            new Shape({
                                                              USE : new SFString("jointbox")})])}),

                                                        new Shape({
                                                          appearance : new SFNode(
                                                            new Appearance({
                                                              USE : new SFString("SegmentLine")})),
                                                          geometry : new SFNode(
                                                            new IndexedLineSet({
                                                              coordIndex : new MFInt32([0,1,-1]),
                                                              coord : new SFNode(
                                                                new Coordinate({
                                                                  point : new MFVec3f([-0.0801,0.0039,0.0732,-0.1043,-0.0227,0.145])}))}))}),

                                                        new Shape({
                                                          appearance : new SFNode(
                                                            new Appearance({
                                                              USE : new SFString("SiteParentLine")})),
                                                          geometry : new SFNode(
                                                            new IndexedLineSet({
                                                              coordIndex : new MFInt32([0,1,-1,0,2,-1,0,3,-1]),
                                                              coord : new SFNode(
                                                                new Coordinate({
                                                                  point : new MFVec3f([-0.0801,0.0039,0.0732,-0.1043,-0.0227,0.145,-0.1523,0.0166,0.0895,-0.0883,0.0134,0.1383])}))}))}),

                                                        new HAnimSite({
                                                          name : new SFString("r_forefoot_tip"),
                                                          DEF : new SFString("hanim_r_forefoot_tip"),
                                                          translation : new SFVec3f([-0.1043,-0.0227,0.145]),
                                                          children : new MFNode([
                                                            new Shape({
                                                              USE : new SFString("sitebox")})])}),

                                                        new HAnimSite({
                                                          name : new SFString("r_metatarsal_pha5"),
                                                          DEF : new SFString("hanim_r_metatarsal_pha5"),
                                                          translation : new SFVec3f([-0.1523,0.0166,0.0895]),
                                                          children : new MFNode([
                                                            new Shape({
                                                              USE : new SFString("sitebox")})])}),

                                                        new HAnimSite({
                                                          name : new SFString("r_digit2"),
                                                          DEF : new SFString("hanim_r_digit2"),
                                                          translation : new SFVec3f([-0.0883,0.0134,0.1383]),
                                                          children : new MFNode([
                                                            new Shape({
                                                              USE : new SFString("sitebox")})])})])})])})])})])})])})])})])})])}),

                        new HAnimJoint({
                          name : new SFString("vl5"),
                          DEF : new SFString("hanim_vl5"),
                          center : new SFVec3f([0.0028,1.0568,-0.0776]),
                          skinCoordIndex : new MFInt32([28,76]),
                          skinCoordWeight : new MFFloat([1,1]),
                          ulimit : new MFFloat([0,0,0]),
                          llimit : new MFFloat([0,0,0]),
                          children : new MFNode([
                            new HAnimSegment({
                              name : new SFString("l5"),
                              DEF : new SFString("hanim_l5"),
                              children : new MFNode([
                                new Transform({
                                  translation : new SFVec3f([0.0028,1.0568,-0.0776]),
                                  children : new MFNode([
                                    new Shape({
                                      USE : new SFString("jointbox")})])}),

                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      USE : new SFString("SegmentLine")})),
                                  geometry : new SFNode(
                                    new IndexedLineSet({
                                      coordIndex : new MFInt32([0,1,-1]),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([0.0028,1.0568,-0.0776,0.0035,1.0925,-0.0787])}))}))}),

                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      USE : new SFString("SiteParentLine")})),
                                  geometry : new SFNode(
                                    new IndexedLineSet({
                                      coordIndex : new MFInt32([0,1,-1,0,2,-1]),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([0.0028,1.0568,-0.0776,0.005,1.0915,-0.1091,0.0069,1.0966,0.1017])}))}))}),

                                new HAnimSite({
                                  name : new SFString("waist_preferred_post"),
                                  DEF : new SFString("hanim_waist_preferred_post"),
                                  translation : new SFVec3f([0.005,1.0915,-0.1091]),
                                  children : new MFNode([
                                    new Shape({
                                      USE : new SFString("sitebox")})])}),

                                new HAnimSite({
                                  name : new SFString("navel"),
                                  DEF : new SFString("hanim_navel"),
                                  translation : new SFVec3f([0.0069,1.0966,0.1017]),
                                  children : new MFNode([
                                    new Shape({
                                      USE : new SFString("sitebox")})])})])}),

                            new HAnimJoint({
                              name : new SFString("vl4"),
                              DEF : new SFString("hanim_vl4"),
                              center : new SFVec3f([0.0035,1.0925,-0.0787]),
                              ulimit : new MFFloat([0,0,0]),
                              llimit : new MFFloat([0,0,0]),
                              children : new MFNode([
                                new HAnimSegment({
                                  name : new SFString("l4"),
                                  DEF : new SFString("hanim_l4"),
                                  children : new MFNode([
                                    new Transform({
                                      translation : new SFVec3f([0.0035,1.0925,-0.0787]),
                                      children : new MFNode([
                                        new Shape({
                                          USE : new SFString("jointbox")})])}),

                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          USE : new SFString("SegmentLine")})),
                                      geometry : new SFNode(
                                        new IndexedLineSet({
                                          coordIndex : new MFInt32([0,1,-1]),
                                          coord : new SFNode(
                                            new Coordinate({
                                              point : new MFVec3f([0.0035,1.0925,-0.0787,0.0041,1.1276,-0.0796])}))}))})])}),

                                new HAnimJoint({
                                  name : new SFString("vl3"),
                                  DEF : new SFString("hanim_vl3"),
                                  center : new SFVec3f([0.0041,1.1276,-0.0796]),
                                  ulimit : new MFFloat([0,0,0]),
                                  llimit : new MFFloat([0,0,0]),
                                  children : new MFNode([
                                    new HAnimSegment({
                                      name : new SFString("l3"),
                                      DEF : new SFString("hanim_l3"),
                                      children : new MFNode([
                                        new Transform({
                                          translation : new SFVec3f([0.0041,1.1276,-0.0796]),
                                          children : new MFNode([
                                            new Shape({
                                              USE : new SFString("jointbox")})])}),

                                        new Shape({
                                          appearance : new SFNode(
                                            new Appearance({
                                              USE : new SFString("SegmentLine")})),
                                          geometry : new SFNode(
                                            new IndexedLineSet({
                                              coordIndex : new MFInt32([0,1,-1]),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([0.0041,1.1276,-0.0796,0.0045,1.1546,-0.08])}))}))})])}),

                                    new HAnimJoint({
                                      name : new SFString("vl2"),
                                      DEF : new SFString("hanim_vl2"),
                                      center : new SFVec3f([0.0045,1.1546,-0.08]),
                                      skinCoordIndex : new MFInt32([16,18,25,83,84,85,86,87,88]),
                                      skinCoordWeight : new MFFloat([1,1,1,1,1,1,0.7,1,0.8]),
                                      ulimit : new MFFloat([0,0,0]),
                                      llimit : new MFFloat([0,0,0]),
                                      children : new MFNode([
                                        new HAnimSegment({
                                          name : new SFString("l2"),
                                          DEF : new SFString("hanim_l2"),
                                          children : new MFNode([
                                            new Transform({
                                              translation : new SFVec3f([0.0045,1.1546,-0.08]),
                                              children : new MFNode([
                                                new Shape({
                                                  USE : new SFString("jointbox")})])}),

                                            new Shape({
                                              appearance : new SFNode(
                                                new Appearance({
                                                  USE : new SFString("SegmentLine")})),
                                              geometry : new SFNode(
                                                new IndexedLineSet({
                                                  coordIndex : new MFInt32([0,1,-1]),
                                                  coord : new SFNode(
                                                    new Coordinate({
                                                      point : new MFVec3f([0.0045,1.1546,-0.08,0.0048,1.1912,-0.0805])}))}))}),

                                            new Shape({
                                              appearance : new SFNode(
                                                new Appearance({
                                                  USE : new SFString("SiteParentLine")})),
                                              geometry : new SFNode(
                                                new IndexedLineSet({
                                                  coordIndex : new MFInt32([0,1,-1,0,2,-1,0,3,-1]),
                                                  coord : new SFNode(
                                                    new Coordinate({
                                                      point : new MFVec3f([0.0045,1.1546,-0.08,-0.0711,1.1941,0.1016,0.0871,1.1925,0.0992,0.0049,1.1908,-0.1113])}))}))}),

                                            new HAnimSite({
                                              name : new SFString("r_rib10"),
                                              DEF : new SFString("hanim_r_rib10"),
                                              translation : new SFVec3f([-0.0711,1.1941,0.1016]),
                                              children : new MFNode([
                                                new Shape({
                                                  USE : new SFString("sitebox")})])}),

                                            new HAnimSite({
                                              name : new SFString("l_rib10"),
                                              DEF : new SFString("hanim_l_rib10"),
                                              translation : new SFVec3f([0.0871,1.1925,0.0992]),
                                              children : new MFNode([
                                                new Shape({
                                                  USE : new SFString("sitebox")})])}),

                                            new HAnimSite({
                                              name : new SFString("rib10_midspine"),
                                              DEF : new SFString("hanim_rib10_midspine"),
                                              translation : new SFVec3f([0.0049,1.1908,-0.1113]),
                                              children : new MFNode([
                                                new Shape({
                                                  USE : new SFString("sitebox")})])})])}),

                                        new HAnimJoint({
                                          name : new SFString("vl1"),
                                          DEF : new SFString("hanim_vl1"),
                                          center : new SFVec3f([0.0048,1.1912,-0.0805]),
                                          ulimit : new MFFloat([0,0,0]),
                                          llimit : new MFFloat([0,0,0]),
                                          children : new MFNode([
                                            new HAnimSegment({
                                              name : new SFString("l1"),
                                              DEF : new SFString("hanim_l1"),
                                              children : new MFNode([
                                                new Transform({
                                                  translation : new SFVec3f([0.0048,1.1912,-0.0805]),
                                                  children : new MFNode([
                                                    new Shape({
                                                      USE : new SFString("jointbox")})])}),

                                                new Shape({
                                                  appearance : new SFNode(
                                                    new Appearance({
                                                      USE : new SFString("SegmentLine")})),
                                                  geometry : new SFNode(
                                                    new IndexedLineSet({
                                                      coordIndex : new MFInt32([0,1,-1]),
                                                      coord : new SFNode(
                                                        new Coordinate({
                                                          point : new MFVec3f([0.0048,1.1912,-0.0805,0.0051,1.2278,-0.0808])}))}))})])}),

                                            new HAnimJoint({
                                              name : new SFString("vt12"),
                                              DEF : new SFString("hanim_vt12"),
                                              center : new SFVec3f([0.0051,1.2278,-0.0808]),
                                              ulimit : new MFFloat([0,0,0]),
                                              llimit : new MFFloat([0,0,0]),
                                              children : new MFNode([
                                                new HAnimSegment({
                                                  name : new SFString("t12"),
                                                  DEF : new SFString("hanim_t12"),
                                                  children : new MFNode([
                                                    new Transform({
                                                      translation : new SFVec3f([0.0051,1.2278,-0.0808]),
                                                      children : new MFNode([
                                                        new Shape({
                                                          USE : new SFString("jointbox")})])}),

                                                    new Shape({
                                                      appearance : new SFNode(
                                                        new Appearance({
                                                          USE : new SFString("SegmentLine")})),
                                                      geometry : new SFNode(
                                                        new IndexedLineSet({
                                                          coordIndex : new MFInt32([0,1,-1]),
                                                          coord : new SFNode(
                                                            new Coordinate({
                                                              point : new MFVec3f([0.0051,1.2278,-0.0808,0.0053,1.2679,-0.081])}))}))})])}),

                                                new HAnimJoint({
                                                  name : new SFString("vt11"),
                                                  DEF : new SFString("hanim_vt11"),
                                                  center : new SFVec3f([0.0053,1.2679,-0.081]),
                                                  ulimit : new MFFloat([0,0,0]),
                                                  llimit : new MFFloat([0,0,0]),
                                                  children : new MFNode([
                                                    new HAnimSegment({
                                                      name : new SFString("t11"),
                                                      DEF : new SFString("hanim_t11"),
                                                      children : new MFNode([
                                                        new Transform({
                                                          translation : new SFVec3f([0.0053,1.2679,-0.081]),
                                                          children : new MFNode([
                                                            new Shape({
                                                              USE : new SFString("jointbox")})])}),

                                                        new Shape({
                                                          appearance : new SFNode(
                                                            new Appearance({
                                                              USE : new SFString("SegmentLine")})),
                                                          geometry : new SFNode(
                                                            new IndexedLineSet({
                                                              coordIndex : new MFInt32([0,1,-1]),
                                                              coord : new SFNode(
                                                                new Coordinate({
                                                                  point : new MFVec3f([0.0053,1.2679,-0.081,0.0056,1.2848,-0.0822])}))}))})])}),

                                                    new HAnimJoint({
                                                      name : new SFString("vt10"),
                                                      DEF : new SFString("hanim_vt10"),
                                                      center : new SFVec3f([0.0056,1.2848,-0.0822]),
                                                      skinCoordIndex : new MFInt32([15]),
                                                      skinCoordWeight : new MFFloat([1]),
                                                      ulimit : new MFFloat([0,0,0]),
                                                      llimit : new MFFloat([0,0,0]),
                                                      children : new MFNode([
                                                        new HAnimSegment({
                                                          name : new SFString("t10"),
                                                          DEF : new SFString("hanim_t10"),
                                                          children : new MFNode([
                                                            new Transform({
                                                              translation : new SFVec3f([0.0056,1.2848,-0.0822]),
                                                              children : new MFNode([
                                                                new Shape({
                                                                  USE : new SFString("jointbox")})])}),

                                                            new Shape({
                                                              appearance : new SFNode(
                                                                new Appearance({
                                                                  USE : new SFString("SegmentLine")})),
                                                              geometry : new SFNode(
                                                                new IndexedLineSet({
                                                                  coordIndex : new MFInt32([0,1,-1]),
                                                                  coord : new SFNode(
                                                                    new Coordinate({
                                                                      point : new MFVec3f([0.0056,1.2848,-0.0822,0.0057,1.3126,-0.0838])}))}))}),

                                                            new Shape({
                                                              appearance : new SFNode(
                                                                new Appearance({
                                                                  USE : new SFString("SiteParentLine")})),
                                                              geometry : new SFNode(
                                                                new IndexedLineSet({
                                                                  coordIndex : new MFInt32([0,1,-1]),
                                                                  coord : new SFNode(
                                                                    new Coordinate({
                                                                      point : new MFVec3f([0.0056,1.2848,-0.0822,0.0085,1.2995,0.1147])}))}))}),

                                                            new HAnimSite({
                                                              name : new SFString("substernale"),
                                                              DEF : new SFString("hanim_substernale"),
                                                              translation : new SFVec3f([0.0085,1.2995,0.1147]),
                                                              children : new MFNode([
                                                                new Shape({
                                                                  USE : new SFString("sitebox")})])})])}),

                                                        new HAnimJoint({
                                                          name : new SFString("vt9"),
                                                          DEF : new SFString("hanim_vt9"),
                                                          center : new SFVec3f([0.0057,1.3126,-0.0838]),
                                                          skinCoordIndex : new MFInt32([13,14]),
                                                          skinCoordWeight : new MFFloat([1,1]),
                                                          ulimit : new MFFloat([0,0,0]),
                                                          llimit : new MFFloat([0,0,0]),
                                                          children : new MFNode([
                                                            new HAnimSegment({
                                                              name : new SFString("t9"),
                                                              DEF : new SFString("hanim_t9"),
                                                              children : new MFNode([
                                                                new Transform({
                                                                  translation : new SFVec3f([0.0057,1.3126,-0.0838]),
                                                                  children : new MFNode([
                                                                    new Shape({
                                                                      USE : new SFString("jointbox")})])}),

                                                                new Shape({
                                                                  appearance : new SFNode(
                                                                    new Appearance({
                                                                      USE : new SFString("SegmentLine")})),
                                                                  geometry : new SFNode(
                                                                    new IndexedLineSet({
                                                                      coordIndex : new MFInt32([0,1,-1]),
                                                                      coord : new SFNode(
                                                                        new Coordinate({
                                                                          point : new MFVec3f([0.0057,1.3126,-0.0838,0.0057,1.3382,-0.0845])}))}))}),

                                                                new Shape({
                                                                  appearance : new SFNode(
                                                                    new Appearance({
                                                                      USE : new SFString("SiteParentLine")})),
                                                                  geometry : new SFNode(
                                                                    new IndexedLineSet({
                                                                      coordIndex : new MFInt32([0,1,-1,0,2,-1,0,3,-1]),
                                                                      coord : new SFNode(
                                                                        new Coordinate({
                                                                          point : new MFVec3f([0.0057,1.3126,-0.0838,-0.0736,1.3385,0.1217,0.0918,1.3382,0.1192,0.0057,1.3382,-0.0845])}))}))}),

                                                                new HAnimSite({
                                                                  name : new SFString("r_thelion"),
                                                                  DEF : new SFString("hanim_r_thelion"),
                                                                  translation : new SFVec3f([-0.0736,1.3385,0.1217]),
                                                                  children : new MFNode([
                                                                    new Shape({
                                                                      USE : new SFString("sitebox")})])}),

                                                                new HAnimSite({
                                                                  name : new SFString("l_thelion"),
                                                                  DEF : new SFString("hanim_l_thelion"),
                                                                  translation : new SFVec3f([0.0918,1.3382,0.1192]),
                                                                  children : new MFNode([
                                                                    new Shape({
                                                                      USE : new SFString("sitebox")})])})])}),

                                                            new HAnimJoint({
                                                              name : new SFString("vt8"),
                                                              DEF : new SFString("hanim_vt8"),
                                                              center : new SFVec3f([0.0057,1.3382,-0.0845]),
                                                              ulimit : new MFFloat([0,0,0]),
                                                              llimit : new MFFloat([0,0,0]),
                                                              children : new MFNode([
                                                                new HAnimSegment({
                                                                  name : new SFString("t8"),
                                                                  DEF : new SFString("hanim_t8"),
                                                                  children : new MFNode([
                                                                    new Transform({
                                                                      translation : new SFVec3f([0.0057,1.3382,-0.0845]),
                                                                      children : new MFNode([
                                                                        new Shape({
                                                                          USE : new SFString("jointbox")})])}),

                                                                    new Shape({
                                                                      appearance : new SFNode(
                                                                        new Appearance({
                                                                          USE : new SFString("SegmentLine")})),
                                                                      geometry : new SFNode(
                                                                        new IndexedLineSet({
                                                                          coordIndex : new MFInt32([0,1,-1]),
                                                                          coord : new SFNode(
                                                                            new Coordinate({
                                                                              point : new MFVec3f([0.0057,1.3382,-0.0845,0.0058,1.3625,-0.0833])}))}))})])}),

                                                                new HAnimJoint({
                                                                  name : new SFString("vt7"),
                                                                  DEF : new SFString("hanim_vt7"),
                                                                  center : new SFVec3f([0.0058,1.3625,-0.0833]),
                                                                  ulimit : new MFFloat([0,0,0]),
                                                                  llimit : new MFFloat([0,0,0]),
                                                                  children : new MFNode([
                                                                    new HAnimSegment({
                                                                      name : new SFString("t7"),
                                                                      DEF : new SFString("hanim_t7"),
                                                                      children : new MFNode([
                                                                        new Transform({
                                                                          translation : new SFVec3f([0.0058,1.3625,-0.0833]),
                                                                          children : new MFNode([
                                                                            new Shape({
                                                                              USE : new SFString("jointbox")})])}),

                                                                        new Shape({
                                                                          appearance : new SFNode(
                                                                            new Appearance({
                                                                              USE : new SFString("SegmentLine")})),
                                                                          geometry : new SFNode(
                                                                            new IndexedLineSet({
                                                                              coordIndex : new MFInt32([0,1,-1]),
                                                                              coord : new SFNode(
                                                                                new Coordinate({
                                                                                  point : new MFVec3f([0.0058,1.3625,-0.0833,0.0059,1.3866,-0.08])}))}))})])}),

                                                                    new HAnimJoint({
                                                                      name : new SFString("vt6"),
                                                                      DEF : new SFString("hanim_vt6"),
                                                                      center : new SFVec3f([0.0059,1.3866,-0.08]),
                                                                      ulimit : new MFFloat([0,0,0]),
                                                                      llimit : new MFFloat([0,0,0]),
                                                                      children : new MFNode([
                                                                        new HAnimSegment({
                                                                          name : new SFString("t6"),
                                                                          DEF : new SFString("hanim_t6"),
                                                                          children : new MFNode([
                                                                            new Transform({
                                                                              translation : new SFVec3f([0.0059,1.3866,-0.08]),
                                                                              children : new MFNode([
                                                                                new Shape({
                                                                                  USE : new SFString("jointbox")})])}),

                                                                            new Shape({
                                                                              appearance : new SFNode(
                                                                                new Appearance({
                                                                                  USE : new SFString("SegmentLine")})),
                                                                              geometry : new SFNode(
                                                                                new IndexedLineSet({
                                                                                  coordIndex : new MFInt32([0,1,-1]),
                                                                                  coord : new SFNode(
                                                                                    new Coordinate({
                                                                                      point : new MFVec3f([0.0059,1.3866,-0.08,0.006,1.4102,-0.0745])}))}))})])}),

                                                                        new HAnimJoint({
                                                                          name : new SFString("vt5"),
                                                                          DEF : new SFString("hanim_vt5"),
                                                                          center : new SFVec3f([0.006,1.4102,-0.0745]),
                                                                          ulimit : new MFFloat([0,0,0]),
                                                                          llimit : new MFFloat([0,0,0]),
                                                                          children : new MFNode([
                                                                            new HAnimSegment({
                                                                              name : new SFString("t5"),
                                                                              DEF : new SFString("hanim_t5"),
                                                                              children : new MFNode([
                                                                                new Transform({
                                                                                  translation : new SFVec3f([0.006,1.4102,-0.0745]),
                                                                                  children : new MFNode([
                                                                                    new Shape({
                                                                                      USE : new SFString("jointbox")})])}),

                                                                                new Shape({
                                                                                  appearance : new SFNode(
                                                                                    new Appearance({
                                                                                      USE : new SFString("SegmentLine")})),
                                                                                  geometry : new SFNode(
                                                                                    new IndexedLineSet({
                                                                                      coordIndex : new MFInt32([0,1,-1]),
                                                                                      coord : new SFNode(
                                                                                        new Coordinate({
                                                                                          point : new MFVec3f([0.006,1.4102,-0.0745,0.0061,1.432,-0.0675])}))}))})])}),

                                                                            new HAnimJoint({
                                                                              name : new SFString("vt4"),
                                                                              DEF : new SFString("hanim_vt4"),
                                                                              center : new SFVec3f([0.0061,1.432,-0.0675]),
                                                                              skinCoordIndex : new MFInt32([81]),
                                                                              skinCoordWeight : new MFFloat([1]),
                                                                              ulimit : new MFFloat([0,0,0]),
                                                                              llimit : new MFFloat([0,0,0]),
                                                                              children : new MFNode([
                                                                                new HAnimSegment({
                                                                                  name : new SFString("t4"),
                                                                                  DEF : new SFString("hanim_t4"),
                                                                                  children : new MFNode([
                                                                                    new Transform({
                                                                                      translation : new SFVec3f([0.0061,1.432,-0.0675]),
                                                                                      children : new MFNode([
                                                                                        new Shape({
                                                                                          USE : new SFString("jointbox")})])}),

                                                                                    new Shape({
                                                                                      appearance : new SFNode(
                                                                                        new Appearance({
                                                                                          USE : new SFString("SegmentLine")})),
                                                                                      geometry : new SFNode(
                                                                                        new IndexedLineSet({
                                                                                          coordIndex : new MFInt32([0,1,-1]),
                                                                                          coord : new SFNode(
                                                                                            new Coordinate({
                                                                                              point : new MFVec3f([0.0061,1.432,-0.0675,0.0062,1.4583,-0.057])}))}))})])}),

                                                                                new HAnimJoint({
                                                                                  name : new SFString("vt3"),
                                                                                  DEF : new SFString("hanim_vt3"),
                                                                                  center : new SFVec3f([0.0062,1.4583,-0.057]),
                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                  children : new MFNode([
                                                                                    new HAnimSegment({
                                                                                      name : new SFString("t3"),
                                                                                      DEF : new SFString("hanim_t3"),
                                                                                      children : new MFNode([
                                                                                        new Transform({
                                                                                          translation : new SFVec3f([0.0062,1.4583,-0.057]),
                                                                                          children : new MFNode([
                                                                                            new Shape({
                                                                                              USE : new SFString("jointbox")})])}),

                                                                                        new Shape({
                                                                                          appearance : new SFNode(
                                                                                            new Appearance({
                                                                                              USE : new SFString("SegmentLine")})),
                                                                                          geometry : new SFNode(
                                                                                            new IndexedLineSet({
                                                                                              coordIndex : new MFInt32([0,1,-1]),
                                                                                              coord : new SFNode(
                                                                                                new Coordinate({
                                                                                                  point : new MFVec3f([0.0062,1.4583,-0.057,0.0063,1.4761,-0.0484])}))}))})])}),

                                                                                    new HAnimJoint({
                                                                                      name : new SFString("vt2"),
                                                                                      DEF : new SFString("hanim_vt2"),
                                                                                      center : new SFVec3f([0.0063,1.4761,-0.0484]),
                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                      children : new MFNode([
                                                                                        new HAnimSegment({
                                                                                          name : new SFString("t2"),
                                                                                          DEF : new SFString("hanim_t2"),
                                                                                          children : new MFNode([
                                                                                            new Transform({
                                                                                              translation : new SFVec3f([0.0063,1.4761,-0.0484]),
                                                                                              children : new MFNode([
                                                                                                new Shape({
                                                                                                  USE : new SFString("jointbox")})])}),

                                                                                            new Shape({
                                                                                              appearance : new SFNode(
                                                                                                new Appearance({
                                                                                                  USE : new SFString("SegmentLine")})),
                                                                                              geometry : new SFNode(
                                                                                                new IndexedLineSet({
                                                                                                  coordIndex : new MFInt32([0,1,-1]),
                                                                                                  coord : new SFNode(
                                                                                                    new Coordinate({
                                                                                                      point : new MFVec3f([0.0063,1.4761,-0.0484,0.0065,1.4951,-0.0387])}))}))})])}),

                                                                                        new HAnimJoint({
                                                                                          name : new SFString("vt1"),
                                                                                          DEF : new SFString("hanim_vt1"),
                                                                                          center : new SFVec3f([0.0065,1.4951,-0.0387]),
                                                                                          skinCoordIndex : new MFInt32([11,24]),
                                                                                          skinCoordWeight : new MFFloat([1,1]),
                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                          children : new MFNode([
                                                                                            new HAnimSegment({
                                                                                              name : new SFString("t1"),
                                                                                              DEF : new SFString("hanim_t1"),
                                                                                              children : new MFNode([
                                                                                                new Transform({
                                                                                                  translation : new SFVec3f([0.0065,1.4951,-0.0387]),
                                                                                                  children : new MFNode([
                                                                                                    new Shape({
                                                                                                      USE : new SFString("jointbox")})])}),

                                                                                                new Shape({
                                                                                                  appearance : new SFNode(
                                                                                                    new Appearance({
                                                                                                      USE : new SFString("SegmentLine")})),
                                                                                                  geometry : new SFNode(
                                                                                                    new IndexedLineSet({
                                                                                                      coordIndex : new MFInt32([0,1,-1,0,2,-1,0,3,-1]),
                                                                                                      coord : new SFNode(
                                                                                                        new Coordinate({
                                                                                                          point : new MFVec3f([0.0065,1.4951,-0.0387,0.0066,1.5132,-0.0301,0.082,1.4488,-0.0353,-0.0694,1.46,-0.033])}))}))}),

                                                                                                new Shape({
                                                                                                  appearance : new SFNode(
                                                                                                    new Appearance({
                                                                                                      USE : new SFString("SiteParentLine")})),
                                                                                                  geometry : new SFNode(
                                                                                                    new IndexedLineSet({
                                                                                                      coordIndex : new MFInt32([0,1,-1,0,2,-1]),
                                                                                                      coord : new SFNode(
                                                                                                        new Coordinate({
                                                                                                          point : new MFVec3f([0.0065,1.4951,-0.0387,0.0084,1.4714,0.0551,0.0064,1.52,-0.0815])}))}))}),

                                                                                                new HAnimSite({
                                                                                                  name : new SFString("suprasternale"),
                                                                                                  DEF : new SFString("hanim_suprasternale"),
                                                                                                  translation : new SFVec3f([0.0084,1.4714,0.0551]),
                                                                                                  children : new MFNode([
                                                                                                    new Shape({
                                                                                                      USE : new SFString("sitebox")})])}),

                                                                                                new HAnimSite({
                                                                                                  name : new SFString("cervicale"),
                                                                                                  DEF : new SFString("hanim_cervicale"),
                                                                                                  translation : new SFVec3f([0.0064,1.52,-0.0815]),
                                                                                                  children : new MFNode([
                                                                                                    new Shape({
                                                                                                      USE : new SFString("sitebox")})])})])}),

                                                                                            new HAnimJoint({
                                                                                              name : new SFString("vc7"),
                                                                                              DEF : new SFString("hanim_vc7"),
                                                                                              center : new SFVec3f([0.0066,1.5132,-0.0301]),
                                                                                              skinCoordIndex : new MFInt32([74,75]),
                                                                                              skinCoordWeight : new MFFloat([1,1]),
                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                              llimit : new MFFloat([0,0,0]),
                                                                                              children : new MFNode([
                                                                                                new HAnimSegment({
                                                                                                  name : new SFString("c7"),
                                                                                                  DEF : new SFString("hanim_c7"),
                                                                                                  children : new MFNode([
                                                                                                    new Transform({
                                                                                                      translation : new SFVec3f([0.0066,1.5132,-0.0301]),
                                                                                                      children : new MFNode([
                                                                                                        new Shape({
                                                                                                          USE : new SFString("jointbox")})])}),

                                                                                                    new Shape({
                                                                                                      appearance : new SFNode(
                                                                                                        new Appearance({
                                                                                                          USE : new SFString("SegmentLine")})),
                                                                                                      geometry : new SFNode(
                                                                                                        new IndexedLineSet({
                                                                                                          coordIndex : new MFInt32([0,1,-1]),
                                                                                                          coord : new SFNode(
                                                                                                            new Coordinate({
                                                                                                              point : new MFVec3f([0.0066,1.5132,-0.0301,0.0066,1.5357,-0.0143])}))}))}),

                                                                                                    new Shape({
                                                                                                      appearance : new SFNode(
                                                                                                        new Appearance({
                                                                                                          USE : new SFString("SiteParentLine")})),
                                                                                                      geometry : new SFNode(
                                                                                                        new IndexedLineSet({
                                                                                                          coordIndex : new MFInt32([0,1,-1,0,2,-1]),
                                                                                                          coord : new SFNode(
                                                                                                            new Coordinate({
                                                                                                              point : new MFVec3f([0.0066,1.5132,-0.0301,-0.0419,1.5149,-0.022,0.0646,1.5141,-0.038])}))}))}),

                                                                                                    new HAnimSite({
                                                                                                      name : new SFString("r_neck_base"),
                                                                                                      DEF : new SFString("hanim_r_neck_base"),
                                                                                                      translation : new SFVec3f([-0.0419,1.5149,-0.022]),
                                                                                                      children : new MFNode([
                                                                                                        new Shape({
                                                                                                          USE : new SFString("sitebox")})])}),

                                                                                                    new HAnimSite({
                                                                                                      name : new SFString("l_neck_base"),
                                                                                                      DEF : new SFString("hanim_l_neck_base"),
                                                                                                      translation : new SFVec3f([0.0646,1.5141,-0.038]),
                                                                                                      children : new MFNode([
                                                                                                        new Shape({
                                                                                                          USE : new SFString("sitebox")})])})])}),

                                                                                                new HAnimJoint({
                                                                                                  name : new SFString("vc6"),
                                                                                                  DEF : new SFString("hanim_vc6"),
                                                                                                  center : new SFVec3f([0.0066,1.5357,-0.0143]),
                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                                  children : new MFNode([
                                                                                                    new HAnimSegment({
                                                                                                      name : new SFString("c6"),
                                                                                                      DEF : new SFString("hanim_c6"),
                                                                                                      children : new MFNode([
                                                                                                        new Transform({
                                                                                                          DEF : new SFString("cordsysvc6"),
                                                                                                          translation : new SFVec3f([0.0066,1.5357,-0.0143]),
                                                                                                          scale : new SFVec3f([0.175,0.175,0.175]),
                                                                                                          children : new MFNode([
                                                                                                            new Inline({
                                                                                                              global : new SFBool(true),
                                                                                                              url : new MFString(["JointCoordinateAxes.x3dv"])})])}),

                                                                                                        new Transform({
                                                                                                          translation : new SFVec3f([0.0066,1.5357,-0.0143]),
                                                                                                          children : new MFNode([
                                                                                                            new Shape({
                                                                                                              USE : new SFString("jointbox")})])}),

                                                                                                        new Shape({
                                                                                                          appearance : new SFNode(
                                                                                                            new Appearance({
                                                                                                              USE : new SFString("SegmentLine")})),
                                                                                                          geometry : new SFNode(
                                                                                                            new IndexedLineSet({
                                                                                                              coordIndex : new MFInt32([0,1,-1]),
                                                                                                              coord : new SFNode(
                                                                                                                new Coordinate({
                                                                                                                  point : new MFVec3f([0.0066,1.5357,-0.0143,0.0066,1.552,-0.0082])}))}))})])}),

                                                                                                    new HAnimJoint({
                                                                                                      name : new SFString("vc5"),
                                                                                                      DEF : new SFString("hanim_vc5"),
                                                                                                      center : new SFVec3f([0.0066,1.552,-0.0082]),
                                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                                      children : new MFNode([
                                                                                                        new HAnimSegment({
                                                                                                          name : new SFString("c5"),
                                                                                                          DEF : new SFString("hanim_c5"),
                                                                                                          children : new MFNode([
                                                                                                            new Transform({
                                                                                                              translation : new SFVec3f([0.0066,1.552,-0.0082]),
                                                                                                              children : new MFNode([
                                                                                                                new Shape({
                                                                                                                  USE : new SFString("jointbox")})])}),

                                                                                                            new Shape({
                                                                                                              appearance : new SFNode(
                                                                                                                new Appearance({
                                                                                                                  USE : new SFString("SegmentLine")})),
                                                                                                              geometry : new SFNode(
                                                                                                                new IndexedLineSet({
                                                                                                                  coordIndex : new MFInt32([0,1,-1]),
                                                                                                                  coord : new SFNode(
                                                                                                                    new Coordinate({
                                                                                                                      point : new MFVec3f([0.0066,1.552,-0.0082,0.0066,1.5662,-0.0084])}))}))})])}),

                                                                                                        new HAnimJoint({
                                                                                                          name : new SFString("vc4"),
                                                                                                          DEF : new SFString("hanim_vc4"),
                                                                                                          center : new SFVec3f([0.0066,1.5662,-0.0084]),
                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                                          children : new MFNode([
                                                                                                            new HAnimSegment({
                                                                                                              name : new SFString("c4"),
                                                                                                              DEF : new SFString("hanim_c4"),
                                                                                                              children : new MFNode([
                                                                                                                new Transform({
                                                                                                                  translation : new SFVec3f([0.0066,1.5662,-0.0084]),
                                                                                                                  children : new MFNode([
                                                                                                                    new Shape({
                                                                                                                      USE : new SFString("jointbox")})])}),

                                                                                                                new Shape({
                                                                                                                  appearance : new SFNode(
                                                                                                                    new Appearance({
                                                                                                                      USE : new SFString("SegmentLine")})),
                                                                                                                  geometry : new SFNode(
                                                                                                                    new IndexedLineSet({
                                                                                                                      coordIndex : new MFInt32([0,1,-1]),
                                                                                                                      coord : new SFNode(
                                                                                                                        new Coordinate({
                                                                                                                          point : new MFVec3f([0.0066,1.5662,-0.0084,0.0066,1.58,-0.0103])}))}))})])}),

                                                                                                            new HAnimJoint({
                                                                                                              name : new SFString("vc3"),
                                                                                                              DEF : new SFString("hanim_vc3"),
                                                                                                              center : new SFVec3f([0.0066,1.58,-0.0103]),
                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                              llimit : new MFFloat([0,0,0]),
                                                                                                              children : new MFNode([
                                                                                                                new HAnimSegment({
                                                                                                                  name : new SFString("c3"),
                                                                                                                  DEF : new SFString("hanim_c3"),
                                                                                                                  children : new MFNode([
                                                                                                                    new Transform({
                                                                                                                      translation : new SFVec3f([0.0066,1.58,-0.0103]),
                                                                                                                      children : new MFNode([
                                                                                                                        new Shape({
                                                                                                                          USE : new SFString("jointbox")})])}),

                                                                                                                    new Shape({
                                                                                                                      appearance : new SFNode(
                                                                                                                        new Appearance({
                                                                                                                          USE : new SFString("SegmentLine")})),
                                                                                                                      geometry : new SFNode(
                                                                                                                        new IndexedLineSet({
                                                                                                                          coordIndex : new MFInt32([0,1,-1]),
                                                                                                                          coord : new SFNode(
                                                                                                                            new Coordinate({
                                                                                                                              point : new MFVec3f([0.0066,1.5662,-0.0084,0.0066,1.5928,-0.0103])}))}))})])}),

                                                                                                                new HAnimJoint({
                                                                                                                  name : new SFString("vc2"),
                                                                                                                  DEF : new SFString("hanim_vc2"),
                                                                                                                  center : new SFVec3f([0.0066,1.5928,-0.0103]),
                                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimSegment({
                                                                                                                      name : new SFString("c2"),
                                                                                                                      DEF : new SFString("hanim_c2"),
                                                                                                                      children : new MFNode([
                                                                                                                        new Transform({
                                                                                                                          translation : new SFVec3f([0.0066,1.5928,-0.0103]),
                                                                                                                          children : new MFNode([
                                                                                                                            new Shape({
                                                                                                                              USE : new SFString("jointbox")})])}),

                                                                                                                        new Shape({
                                                                                                                          appearance : new SFNode(
                                                                                                                            new Appearance({
                                                                                                                              USE : new SFString("SegmentLine")})),
                                                                                                                          geometry : new SFNode(
                                                                                                                            new IndexedLineSet({
                                                                                                                              coordIndex : new MFInt32([0,1,-1]),
                                                                                                                              coord : new SFNode(
                                                                                                                                new Coordinate({
                                                                                                                                  point : new MFVec3f([0.0066,1.5928,-0.0103,0.0066,1.6144,-0.0034])}))}))})])}),

                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("vc1"),
                                                                                                                      DEF : new SFString("hanim_vc1"),
                                                                                                                      center : new SFVec3f([0.0066,1.6144,-0.0034]),
                                                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimSegment({
                                                                                                                          name : new SFString("c1"),
                                                                                                                          DEF : new SFString("hanim_c1"),
                                                                                                                          children : new MFNode([
                                                                                                                            new Transform({
                                                                                                                              translation : new SFVec3f([0.0066,1.6144,-0.0034]),
                                                                                                                              children : new MFNode([
                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("jointbox")})])}),

                                                                                                                            new Shape({
                                                                                                                              appearance : new SFNode(
                                                                                                                                new Appearance({
                                                                                                                                  USE : new SFString("SegmentLine")})),
                                                                                                                              geometry : new SFNode(
                                                                                                                                new IndexedLineSet({
                                                                                                                                  coordIndex : new MFInt32([0,1,-1]),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([0.0066,1.6144,-0.0034,0.0044,1.6209,0.0236])}))}))})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("skullbase"),
                                                                                                                          DEF : new SFString("hanim_skullbase"),
                                                                                                                          center : new SFVec3f([0.0044,1.6209,0.0236]),
                                                                                                                          skinCoordIndex : new MFInt32([0,1,2,3,4,5,6,7,8,9]),
                                                                                                                          skinCoordWeight : new MFFloat([1,1,1,1,1,1,1,1,1,1]),
                                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              name : new SFString("skull"),
                                                                                                                              DEF : new SFString("hanim_skull"),
                                                                                                                              children : new MFNode([
                                                                                                                                new Transform({
                                                                                                                                  translation : new SFVec3f([0.0044,1.6209,0.0236]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("jointbox")})])}),

                                                                                                                                new Shape({
                                                                                                                                  appearance : new SFNode(
                                                                                                                                    new Appearance({
                                                                                                                                      USE : new SFString("SegmentLine")})),
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new IndexedLineSet({
                                                                                                                                      coordIndex : new MFInt32([0,1,-1,0,2,-1]),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          point : new MFVec3f([0.0044,1.6209,0.0236,0.0336,1.6332,0.0502,-0.0236,1.6331,0.051])}))}))}),

                                                                                                                                new Shape({
                                                                                                                                  appearance : new SFNode(
                                                                                                                                    new Appearance({
                                                                                                                                      USE : new SFString("SiteParentLine")})),
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new IndexedLineSet({
                                                                                                                                      coordIndex : new MFInt32([0,1,-1,0,2,-1,0,3,-1,0,4,-1,0,5,-1,0,6,-1,0,7,-1,0,8,-1,0,9,-1,0,10,-1]),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          point : new MFVec3f([0.0044,1.6209,0.0236,0.005,1.7504,0.0055,0.0058,1.6316,0.0852,-0.0237,1.6171,0.0752,0.0341,1.6171,0.0752,0.0061,1.541,0.0805,-0.0646,1.6347,0.0302,-0.052,1.5529,0.0347,0.0739,1.6348,0.0282,0.0631,1.553,0.033,0.0039,1.5972,-0.0796])}))}))}),

                                                                                                                                new HAnimSite({
                                                                                                                                  name : new SFString("skull_tip"),
                                                                                                                                  DEF : new SFString("hanim_skull_tip"),
                                                                                                                                  translation : new SFVec3f([0.005,1.7504,0.0055]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("sitebox")})])}),

                                                                                                                                new HAnimSite({
                                                                                                                                  name : new SFString("sellion"),
                                                                                                                                  DEF : new SFString("hanim_sellion"),
                                                                                                                                  translation : new SFVec3f([0.0058,1.6316,0.0852]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("sitebox")})])}),

                                                                                                                                new HAnimSite({
                                                                                                                                  name : new SFString("r_infraorbitale"),
                                                                                                                                  DEF : new SFString("hanim_r_infraorbitale"),
                                                                                                                                  translation : new SFVec3f([-0.0237,1.6171,0.0752]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("sitebox")})])}),

                                                                                                                                new HAnimSite({
                                                                                                                                  name : new SFString("l_infraorbitale"),
                                                                                                                                  DEF : new SFString("hanim_l_infraorbitale"),
                                                                                                                                  translation : new SFVec3f([0.0341,1.6171,0.0752]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("sitebox")})])}),

                                                                                                                                new HAnimSite({
                                                                                                                                  name : new SFString("supramenton"),
                                                                                                                                  DEF : new SFString("hanim_supramenton"),
                                                                                                                                  translation : new SFVec3f([0.0061,1.541,0.0805]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("sitebox")})])}),

                                                                                                                                new HAnimSite({
                                                                                                                                  name : new SFString("r_tragion"),
                                                                                                                                  DEF : new SFString("hanim_r_tragion"),
                                                                                                                                  translation : new SFVec3f([-0.0646,1.6347,0.0302]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("sitebox")})])}),

                                                                                                                                new HAnimSite({
                                                                                                                                  name : new SFString("r_gonion"),
                                                                                                                                  DEF : new SFString("hanim_r_gonion"),
                                                                                                                                  translation : new SFVec3f([-0.052,1.5529,0.0347]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("sitebox")})])}),

                                                                                                                                new HAnimSite({
                                                                                                                                  name : new SFString("l_tragion"),
                                                                                                                                  DEF : new SFString("hanim_l_tragion"),
                                                                                                                                  translation : new SFVec3f([0.0739,1.6348,0.0282]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("sitebox")})])}),

                                                                                                                                new HAnimSite({
                                                                                                                                  name : new SFString("l_gonion"),
                                                                                                                                  DEF : new SFString("hanim_l_gonion"),
                                                                                                                                  translation : new SFVec3f([0.0631,1.553,0.033]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("sitebox")})])}),

                                                                                                                                new HAnimSite({
                                                                                                                                  name : new SFString("nuchale"),
                                                                                                                                  DEF : new SFString("hanim_nuchale"),
                                                                                                                                  translation : new SFVec3f([0.0039,1.5972,-0.0796]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("sitebox")})])})])}),

                                                                                                                            new HAnimJoint({
                                                                                                                              name : new SFString("l_eyeball_joint"),
                                                                                                                              DEF : new SFString("hanim_l_eyeball_joint"),
                                                                                                                              center : new SFVec3f([0.0336,1.6332,0.0502]),
                                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                                              llimit : new MFFloat([0,0,0]),
                                                                                                                              children : new MFNode([
                                                                                                                                new HAnimSegment({
                                                                                                                                  name : new SFString("l_eyeball"),
                                                                                                                                  DEF : new SFString("hanim_l_eyeball"),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Transform({
                                                                                                                                      translation : new SFVec3f([0.0336,1.6332,0.0502]),
                                                                                                                                      children : new MFNode([
                                                                                                                                        new Shape({
                                                                                                                                          USE : new SFString("jointbox")})])}),

                                                                                                                                    new Shape({
                                                                                                                                      appearance : new SFNode(
                                                                                                                                        new Appearance({
                                                                                                                                          USE : new SFString("SegmentLine")})),
                                                                                                                                      geometry : new SFNode(
                                                                                                                                        new IndexedLineSet({
                                                                                                                                          coordIndex : new MFInt32([0,1,-1]),
                                                                                                                                          coord : new SFNode(
                                                                                                                                            new Coordinate({
                                                                                                                                              point : new MFVec3f([0.0336,1.6332,0.0502,0.0336,1.6332,0.0702])}))}))})])})])}),

                                                                                                                            new HAnimJoint({
                                                                                                                              name : new SFString("r_eyeball_joint"),
                                                                                                                              DEF : new SFString("hanim_r_eyeball_joint"),
                                                                                                                              center : new SFVec3f([-0.0236,1.6331,0.051]),
                                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                                              llimit : new MFFloat([0,0,0]),
                                                                                                                              children : new MFNode([
                                                                                                                                new HAnimSegment({
                                                                                                                                  name : new SFString("r_eyeball"),
                                                                                                                                  DEF : new SFString("hanim_r_eyeball"),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Transform({
                                                                                                                                      translation : new SFVec3f([-0.0236,1.6331,0.051]),
                                                                                                                                      children : new MFNode([
                                                                                                                                        new Shape({
                                                                                                                                          USE : new SFString("jointbox")})])}),

                                                                                                                                    new Shape({
                                                                                                                                      appearance : new SFNode(
                                                                                                                                        new Appearance({
                                                                                                                                          USE : new SFString("SegmentLine")})),
                                                                                                                                      geometry : new SFNode(
                                                                                                                                        new IndexedLineSet({
                                                                                                                                          coordIndex : new MFInt32([0,1,-1]),
                                                                                                                                          coord : new SFNode(
                                                                                                                                            new Coordinate({
                                                                                                                                              point : new MFVec3f([-0.0236,1.6331,0.051,-0.0236,1.6331,0.071])}))}))})])})])})])})])})])})])})])})])})])})])}),

                                                                                            new HAnimJoint({
                                                                                              name : new SFString("l_sternoclavicular"),
                                                                                              DEF : new SFString("hanim_l_sternoclavicular"),
                                                                                              center : new SFVec3f([0.082,1.4488,-0.0353]),
                                                                                              skinCoordIndex : new MFInt32([12]),
                                                                                              skinCoordWeight : new MFFloat([1]),
                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                              llimit : new MFFloat([0,0,0]),
                                                                                              children : new MFNode([
                                                                                                new HAnimSegment({
                                                                                                  name : new SFString("l_clavicle"),
                                                                                                  DEF : new SFString("hanim_l_clavicle"),
                                                                                                  children : new MFNode([
                                                                                                    new Transform({
                                                                                                      translation : new SFVec3f([0.082,1.4488,-0.0353]),
                                                                                                      children : new MFNode([
                                                                                                        new Shape({
                                                                                                          USE : new SFString("jointbox")})])}),

                                                                                                    new Shape({
                                                                                                      appearance : new SFNode(
                                                                                                        new Appearance({
                                                                                                          USE : new SFString("SegmentLine")})),
                                                                                                      geometry : new SFNode(
                                                                                                        new IndexedLineSet({
                                                                                                          coordIndex : new MFInt32([0,1,-1]),
                                                                                                          coord : new SFNode(
                                                                                                            new Coordinate({
                                                                                                              point : new MFVec3f([0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424])}))}))}),

                                                                                                    new Shape({
                                                                                                      appearance : new SFNode(
                                                                                                        new Appearance({
                                                                                                          USE : new SFString("SiteParentLine")})),
                                                                                                      geometry : new SFNode(
                                                                                                        new IndexedLineSet({
                                                                                                          coordIndex : new MFInt32([0,1,-1,0,2,-1,0,3,-1,0,4,-1]),
                                                                                                          coord : new SFNode(
                                                                                                            new Coordinate({
                                                                                                              point : new MFVec3f([0.082,1.4488,-0.0353,0.0271,1.4943,0.0394,0.2032,1.476,-0.049,0.1777,1.4065,-0.0075,0.1706,1.4072,-0.0875])}))}))}),

                                                                                                    new HAnimSite({
                                                                                                      name : new SFString("l_clavicale"),
                                                                                                      DEF : new SFString("hanim_l_clavicale"),
                                                                                                      translation : new SFVec3f([0.0271,1.4943,0.0394]),
                                                                                                      children : new MFNode([
                                                                                                        new Shape({
                                                                                                          USE : new SFString("sitebox")})])}),

                                                                                                    new HAnimSite({
                                                                                                      name : new SFString("l_acromion"),
                                                                                                      DEF : new SFString("hanim_l_acromion"),
                                                                                                      translation : new SFVec3f([0.2032,1.476,-0.049]),
                                                                                                      children : new MFNode([
                                                                                                        new Shape({
                                                                                                          USE : new SFString("sitebox")})])}),

                                                                                                    new HAnimSite({
                                                                                                      name : new SFString("l_axilla_ant"),
                                                                                                      DEF : new SFString("hanim_l_axilla_ant"),
                                                                                                      translation : new SFVec3f([0.1777,1.4065,-0.0075]),
                                                                                                      children : new MFNode([
                                                                                                        new Shape({
                                                                                                          USE : new SFString("sitebox")})])}),

                                                                                                    new HAnimSite({
                                                                                                      name : new SFString("l_axilla_post"),
                                                                                                      DEF : new SFString("hanim_l_axilla_post"),
                                                                                                      translation : new SFVec3f([0.1706,1.4072,-0.0875]),
                                                                                                      children : new MFNode([
                                                                                                        new Shape({
                                                                                                          USE : new SFString("sitebox")})])})])}),

                                                                                                new HAnimJoint({
                                                                                                  name : new SFString("l_acromioclavicular"),
                                                                                                  DEF : new SFString("hanim_l_acromioclavicular"),
                                                                                                  center : new SFVec3f([0.0962,1.4269,-0.0424]),
                                                                                                  skinCoordIndex : new MFInt32([79]),
                                                                                                  skinCoordWeight : new MFFloat([1]),
                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                                  children : new MFNode([
                                                                                                    new HAnimSegment({
                                                                                                      name : new SFString("l_scapula"),
                                                                                                      DEF : new SFString("hanim_l_scapula"),
                                                                                                      children : new MFNode([
                                                                                                        new Transform({
                                                                                                          translation : new SFVec3f([0.0962,1.4269,-0.0424]),
                                                                                                          children : new MFNode([
                                                                                                            new Shape({
                                                                                                              USE : new SFString("jointbox")})])}),

                                                                                                        new Shape({
                                                                                                          appearance : new SFNode(
                                                                                                            new Appearance({
                                                                                                              USE : new SFString("SegmentLine")})),
                                                                                                          geometry : new SFNode(
                                                                                                            new IndexedLineSet({
                                                                                                              coordIndex : new MFInt32([0,1,-1]),
                                                                                                              coord : new SFNode(
                                                                                                                new Coordinate({
                                                                                                                  point : new MFVec3f([0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387])}))}))})])}),

                                                                                                    new HAnimJoint({
                                                                                                      name : new SFString("l_shoulder"),
                                                                                                      DEF : new SFString("hanim_l_shoulder"),
                                                                                                      center : new SFVec3f([0.2029,1.4376,-0.0387]),
                                                                                                      skinCoordIndex : new MFInt32([41,42,44,80,102,103,104,105]),
                                                                                                      skinCoordWeight : new MFFloat([1,1,1,1,1,1,1,1]),
                                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                                      children : new MFNode([
                                                                                                        new HAnimSegment({
                                                                                                          name : new SFString("l_upperarm"),
                                                                                                          DEF : new SFString("hanim_l_upperarm"),
                                                                                                          children : new MFNode([
                                                                                                            new Transform({
                                                                                                              translation : new SFVec3f([0.2029,1.4376,-0.0387]),
                                                                                                              children : new MFNode([
                                                                                                                new Shape({
                                                                                                                  USE : new SFString("jointbox")})])}),

                                                                                                            new Shape({
                                                                                                              appearance : new SFNode(
                                                                                                                new Appearance({
                                                                                                                  USE : new SFString("SegmentLine")})),
                                                                                                              geometry : new SFNode(
                                                                                                                new IndexedLineSet({
                                                                                                                  coordIndex : new MFInt32([0,1,-1]),
                                                                                                                  coord : new SFNode(
                                                                                                                    new Coordinate({
                                                                                                                      point : new MFVec3f([0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682])}))}))}),

                                                                                                            new Shape({
                                                                                                              appearance : new SFNode(
                                                                                                                new Appearance({
                                                                                                                  USE : new SFString("SiteParentLine")})),
                                                                                                              geometry : new SFNode(
                                                                                                                new IndexedLineSet({
                                                                                                                  coordIndex : new MFInt32([0,1,-1]),
                                                                                                                  coord : new SFNode(
                                                                                                                    new Coordinate({
                                                                                                                      point : new MFVec3f([0.2029,1.4376,-0.0387,0.228,1.1482,-0.11])}))}))}),

                                                                                                            new HAnimSite({
                                                                                                              name : new SFString("l_humeral_lateral_epicn"),
                                                                                                              DEF : new SFString("hanim_l_humeral_lateral_epicn"),
                                                                                                              translation : new SFVec3f([0.228,1.1482,-0.11]),
                                                                                                              children : new MFNode([
                                                                                                                new Shape({
                                                                                                                  USE : new SFString("sitebox")})])})])}),

                                                                                                        new HAnimJoint({
                                                                                                          name : new SFString("l_elbow"),
                                                                                                          DEF : new SFString("hanim_l_elbow"),
                                                                                                          center : new SFVec3f([0.2014,1.1357,-0.0682]),
                                                                                                          skinCoordIndex : new MFInt32([45,46,47,109,110,111,112,113,115,116,117,118]),
                                                                                                          skinCoordWeight : new MFFloat([1,1,1,1,1,1,1,1,1,1,1,1,1,1,1]),
                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                                          children : new MFNode([
                                                                                                            new HAnimSegment({
                                                                                                              name : new SFString("l_forearm"),
                                                                                                              DEF : new SFString("hanim_l_forearm"),
                                                                                                              children : new MFNode([
                                                                                                                new Transform({
                                                                                                                  translation : new SFVec3f([0.2014,1.1357,-0.0682]),
                                                                                                                  children : new MFNode([
                                                                                                                    new Shape({
                                                                                                                      USE : new SFString("jointbox")})])}),

                                                                                                                new Shape({
                                                                                                                  appearance : new SFNode(
                                                                                                                    new Appearance({
                                                                                                                      USE : new SFString("SegmentLine")})),
                                                                                                                  geometry : new SFNode(
                                                                                                                    new IndexedLineSet({
                                                                                                                      coordIndex : new MFInt32([0,1,-1]),
                                                                                                                      coord : new SFNode(
                                                                                                                        new Coordinate({
                                                                                                                          point : new MFVec3f([0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583])}))}))}),

                                                                                                                new Shape({
                                                                                                                  appearance : new SFNode(
                                                                                                                    new Appearance({
                                                                                                                      USE : new SFString("SiteParentLine")})),
                                                                                                                  geometry : new SFNode(
                                                                                                                    new IndexedLineSet({
                                                                                                                      coordIndex : new MFInt32([0,1,-1,0,2,-1,0,3,-1,0,4,-1]),
                                                                                                                      coord : new SFNode(
                                                                                                                        new Coordinate({
                                                                                                                          point : new MFVec3f([0.2014,1.1357,-0.0682,0.1901,0.8645,-0.0415,0.1962,1.1375,-0.1123,0.1735,1.1272,-0.1113,0.2182,1.1212,-0.1167])}))}))}),

                                                                                                                new HAnimSite({
                                                                                                                  name : new SFString("l_radial_styloid"),
                                                                                                                  DEF : new SFString("hanim_l_radial_styloid"),
                                                                                                                  translation : new SFVec3f([0.1901,0.8645,-0.0415]),
                                                                                                                  children : new MFNode([
                                                                                                                    new Shape({
                                                                                                                      USE : new SFString("sitebox")})])}),

                                                                                                                new HAnimSite({
                                                                                                                  name : new SFString("l_olecranon"),
                                                                                                                  DEF : new SFString("hanim_l_olecranon"),
                                                                                                                  translation : new SFVec3f([0.1962,1.1375,-0.1123]),
                                                                                                                  children : new MFNode([
                                                                                                                    new Shape({
                                                                                                                      USE : new SFString("sitebox")})])}),

                                                                                                                new HAnimSite({
                                                                                                                  name : new SFString("l_humeral_medial_epicn"),
                                                                                                                  DEF : new SFString("hanim_l_humeral_medial_epicn"),
                                                                                                                  translation : new SFVec3f([0.1735,1.1272,-0.1113]),
                                                                                                                  children : new MFNode([
                                                                                                                    new Shape({
                                                                                                                      USE : new SFString("sitebox")})])}),

                                                                                                                new HAnimSite({
                                                                                                                  name : new SFString("l_radiale"),
                                                                                                                  DEF : new SFString("hanim_l_radiale"),
                                                                                                                  translation : new SFVec3f([0.2182,1.1212,-0.1167]),
                                                                                                                  children : new MFNode([
                                                                                                                    new Shape({
                                                                                                                      USE : new SFString("sitebox")})])})])}),

                                                                                                            new HAnimJoint({
                                                                                                              name : new SFString("l_wrist"),
                                                                                                              DEF : new SFString("hanim_l_wrist"),
                                                                                                              center : new SFVec3f([0.1984,0.8663,-0.0583]),
                                                                                                              skinCoordIndex : new MFInt32([119,120,121,122,123,124,125,126]),
                                                                                                              skinCoordWeight : new MFFloat([1,1,1,1,1,1,1,1]),
                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                              llimit : new MFFloat([0,0,0]),
                                                                                                              children : new MFNode([
                                                                                                                new HAnimSegment({
                                                                                                                  name : new SFString("l_hand"),
                                                                                                                  DEF : new SFString("hanim_l_hand"),
                                                                                                                  children : new MFNode([
                                                                                                                    new Transform({
                                                                                                                      translation : new SFVec3f([0.1984,0.8663,-0.0583]),
                                                                                                                      children : new MFNode([
                                                                                                                        new Shape({
                                                                                                                          USE : new SFString("jointbox")})])}),

                                                                                                                    new Shape({
                                                                                                                      appearance : new SFNode(
                                                                                                                        new Appearance({
                                                                                                                          USE : new SFString("SegmentLine")})),
                                                                                                                      geometry : new SFNode(
                                                                                                                        new IndexedLineSet({
                                                                                                                          coordIndex : new MFInt32([0,1,-1,0,2,-1,0,3,-1,0,4,-1,0,5,-1]),
                                                                                                                          coord : new SFNode(
                                                                                                                            new Coordinate({
                                                                                                                              point : new MFVec3f([0.1984,0.8663,-0.0583,0.1924,0.8472,-0.0534,0.1983,0.8024,-0.028,0.1987,0.8029,-0.053,0.1956,0.8019,-0.0794,0.1925,0.8066,-0.1036])}))}))}),

                                                                                                                    new Shape({
                                                                                                                      appearance : new SFNode(
                                                                                                                        new Appearance({
                                                                                                                          USE : new SFString("SiteParentLine")})),
                                                                                                                      geometry : new SFNode(
                                                                                                                        new IndexedLineSet({
                                                                                                                          coordIndex : new MFInt32([0,1,-1,0,2,-1,0,3,-1]),
                                                                                                                          coord : new SFNode(
                                                                                                                            new Coordinate({
                                                                                                                              point : new MFVec3f([0.1984,0.8663,-0.0583,0.2009,0.8139,-0.0237,0.2142,0.8529,-0.0648,0.1929,0.786,-0.1122])}))}))}),

                                                                                                                    new HAnimSite({
                                                                                                                      name : new SFString("l_metacarpal_pha2"),
                                                                                                                      DEF : new SFString("hanim_l_metacarpal_pha2"),
                                                                                                                      translation : new SFVec3f([0.2009,0.8139,-0.0237]),
                                                                                                                      children : new MFNode([
                                                                                                                        new Shape({
                                                                                                                          USE : new SFString("sitebox")})])}),

                                                                                                                    new HAnimSite({
                                                                                                                      name : new SFString("l_ulnar_styloid"),
                                                                                                                      DEF : new SFString("hanim_l_ulnar_styloid"),
                                                                                                                      translation : new SFVec3f([0.2142,0.8529,-0.0648]),
                                                                                                                      children : new MFNode([
                                                                                                                        new Shape({
                                                                                                                          USE : new SFString("sitebox")})])}),

                                                                                                                    new HAnimSite({
                                                                                                                      name : new SFString("l_metacarpal_pha5"),
                                                                                                                      DEF : new SFString("hanim_l_metacarpal_pha5"),
                                                                                                                      translation : new SFVec3f([0.1929,0.786,-0.1122]),
                                                                                                                      children : new MFNode([
                                                                                                                        new Shape({
                                                                                                                          USE : new SFString("sitebox")})])})])}),

                                                                                                                new HAnimJoint({
                                                                                                                  name : new SFString("l_thumb1"),
                                                                                                                  DEF : new SFString("hanim_l_thumb1"),
                                                                                                                  center : new SFVec3f([0.1924,0.8472,-0.0534]),
                                                                                                                  skinCoordIndex : new MFInt32([127,128]),
                                                                                                                  skinCoordWeight : new MFFloat([1,1]),
                                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimSegment({
                                                                                                                      name : new SFString("l_thumb_metacarpal"),
                                                                                                                      DEF : new SFString("hanim_l_thumb_metacarpal"),
                                                                                                                      children : new MFNode([
                                                                                                                        new Transform({
                                                                                                                          translation : new SFVec3f([0.1924,0.8472,-0.0534]),
                                                                                                                          children : new MFNode([
                                                                                                                            new Shape({
                                                                                                                              USE : new SFString("jointbox")})])}),

                                                                                                                        new Shape({
                                                                                                                          appearance : new SFNode(
                                                                                                                            new Appearance({
                                                                                                                              USE : new SFString("SegmentLine")})),
                                                                                                                          geometry : new SFNode(
                                                                                                                            new IndexedLineSet({
                                                                                                                              coordIndex : new MFInt32([0,1,-1]),
                                                                                                                              coord : new SFNode(
                                                                                                                                new Coordinate({
                                                                                                                                  point : new MFVec3f([0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246])}))}))})])}),

                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("l_thumb2"),
                                                                                                                      DEF : new SFString("hanim_l_thumb2"),
                                                                                                                      center : new SFVec3f([0.1951,0.8226,0.0246]),
                                                                                                                      skinCoordIndex : new MFInt32([138,139,140,141,142,143]),
                                                                                                                      skinCoordWeight : new MFFloat([0.5,0.5,0.5,1,1,1]),
                                                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimSegment({
                                                                                                                          name : new SFString("l_thumb_proximal"),
                                                                                                                          DEF : new SFString("hanim_l_thumb_proximal"),
                                                                                                                          children : new MFNode([
                                                                                                                            new Transform({
                                                                                                                              translation : new SFVec3f([0.1951,0.8226,0.0246]),
                                                                                                                              children : new MFNode([
                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("jointbox")})])}),

                                                                                                                            new Shape({
                                                                                                                              appearance : new SFNode(
                                                                                                                                new Appearance({
                                                                                                                                  USE : new SFString("SegmentLine")})),
                                                                                                                              geometry : new SFNode(
                                                                                                                                new IndexedLineSet({
                                                                                                                                  coordIndex : new MFInt32([0,1,-1]),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([0.1951,0.8226,0.0246,0.1955,0.8159,0.0464])}))}))})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("l_thumb3"),
                                                                                                                          DEF : new SFString("hanim_l_thumb3"),
                                                                                                                          center : new SFVec3f([0.1955,0.8159,0.0464]),
                                                                                                                          skinCoordIndex : new MFInt32([144,145,146,147,148,149,150,151,152]),
                                                                                                                          skinCoordWeight : new MFFloat([1,1,1,1,1,1,1,1,1]),
                                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              name : new SFString("l_thumb_distal"),
                                                                                                                              DEF : new SFString("hanim_l_thumb_distal"),
                                                                                                                              children : new MFNode([
                                                                                                                                new Transform({
                                                                                                                                  translation : new SFVec3f([0.1955,0.8159,0.0464]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("jointbox")})])}),

                                                                                                                                new Shape({
                                                                                                                                  appearance : new SFNode(
                                                                                                                                    new Appearance({
                                                                                                                                      USE : new SFString("SegmentLine")})),
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new IndexedLineSet({
                                                                                                                                      coordIndex : new MFInt32([0,1,-1]),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          point : new MFVec3f([0.1955,0.8159,0.0464,0.1982,0.8061,0.0759])}))}))}),

                                                                                                                                new Shape({
                                                                                                                                  appearance : new SFNode(
                                                                                                                                    new Appearance({
                                                                                                                                      USE : new SFString("SiteParentLine")})),
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new IndexedLineSet({
                                                                                                                                      coordIndex : new MFInt32([0,1,-1]),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          point : new MFVec3f([0.1955,0.8159,0.0464,0.1982,0.8061,0.0759])}))}))}),

                                                                                                                                new HAnimSite({
                                                                                                                                  name : new SFString("l_thumb_distal_tip"),
                                                                                                                                  DEF : new SFString("hanim_l_thumb_distal_tip"),
                                                                                                                                  translation : new SFVec3f([0.1982,0.8061,0.0759]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("sitebox")})])})])})])})])})])}),

                                                                                                                new HAnimJoint({
                                                                                                                  name : new SFString("l_index0"),
                                                                                                                  DEF : new SFString("hanim_l_index0"),
                                                                                                                  center : new SFVec3f([0.1983,0.8024,-0.028]),
                                                                                                                  skinCoordIndex : new MFInt32([129,130]),
                                                                                                                  skinCoordWeight : new MFFloat([1,1]),
                                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimSegment({
                                                                                                                      name : new SFString("l_index_metacarpal"),
                                                                                                                      DEF : new SFString("hanim_l_index_metacarpal"),
                                                                                                                      children : new MFNode([
                                                                                                                        new Transform({
                                                                                                                          translation : new SFVec3f([0.1983,0.8024,-0.028]),
                                                                                                                          children : new MFNode([
                                                                                                                            new Shape({
                                                                                                                              USE : new SFString("jointbox")})])}),

                                                                                                                        new Shape({
                                                                                                                          appearance : new SFNode(
                                                                                                                            new Appearance({
                                                                                                                              USE : new SFString("SegmentLine")})),
                                                                                                                          geometry : new SFNode(
                                                                                                                            new IndexedLineSet({
                                                                                                                              coordIndex : new MFInt32([0,1,-1]),
                                                                                                                              coord : new SFNode(
                                                                                                                                new Coordinate({
                                                                                                                                  point : new MFVec3f([0.1983,0.8024,-0.028,0.1983,0.7815,-0.028])}))}))})])}),

                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("l_index1"),
                                                                                                                      DEF : new SFString("hanim_l_index1"),
                                                                                                                      center : new SFVec3f([0.1983,0.7815,-0.028]),
                                                                                                                      skinCoordIndex : new MFInt32([138,139,140,153,154,155,163]),
                                                                                                                      skinCoordWeight : new MFFloat([0.5,0.5,0.5,1,1,1,0.5]),
                                                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimSegment({
                                                                                                                          name : new SFString("l_index_proximal"),
                                                                                                                          DEF : new SFString("hanim_l_index_proximal"),
                                                                                                                          children : new MFNode([
                                                                                                                            new Transform({
                                                                                                                              translation : new SFVec3f([0.1983,0.7815,-0.028]),
                                                                                                                              children : new MFNode([
                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("jointbox")})])}),

                                                                                                                            new Shape({
                                                                                                                              appearance : new SFNode(
                                                                                                                                new Appearance({
                                                                                                                                  USE : new SFString("SegmentLine")})),
                                                                                                                              geometry : new SFNode(
                                                                                                                                new IndexedLineSet({
                                                                                                                                  coordIndex : new MFInt32([0,1,-1]),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248])}))}))})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("l_index2"),
                                                                                                                          DEF : new SFString("hanim_l_index2"),
                                                                                                                          center : new SFVec3f([0.2017,0.7363,-0.0248]),
                                                                                                                          skinCoordIndex : new MFInt32([166,167,168,169]),
                                                                                                                          skinCoordWeight : new MFFloat([1,1,1,1]),
                                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              name : new SFString("l_index_middle"),
                                                                                                                              DEF : new SFString("hanim_l_index_middle"),
                                                                                                                              children : new MFNode([
                                                                                                                                new Transform({
                                                                                                                                  translation : new SFVec3f([0.2017,0.7363,-0.0248]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("jointbox")})])}),

                                                                                                                                new Shape({
                                                                                                                                  appearance : new SFNode(
                                                                                                                                    new Appearance({
                                                                                                                                      USE : new SFString("SegmentLine")})),
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new IndexedLineSet({
                                                                                                                                      coordIndex : new MFInt32([0,1,-1]),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          point : new MFVec3f([0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236])}))}))})])}),

                                                                                                                            new HAnimJoint({
                                                                                                                              name : new SFString("l_index3"),
                                                                                                                              DEF : new SFString("hanim_l_index3"),
                                                                                                                              center : new SFVec3f([0.2028,0.7139,-0.0236]),
                                                                                                                              skinCoordIndex : new MFInt32([170,171,172,173,174,175,176,177,178]),
                                                                                                                              skinCoordWeight : new MFFloat([1,1,1,1,1,1,1,1,1]),
                                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                                              llimit : new MFFloat([0,0,0]),
                                                                                                                              children : new MFNode([
                                                                                                                                new HAnimSegment({
                                                                                                                                  name : new SFString("l_index_distal"),
                                                                                                                                  DEF : new SFString("hanim_l_index_distal"),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Transform({
                                                                                                                                      translation : new SFVec3f([0.2028,0.7139,-0.0236]),
                                                                                                                                      children : new MFNode([
                                                                                                                                        new Shape({
                                                                                                                                          USE : new SFString("jointbox")})])}),

                                                                                                                                    new Shape({
                                                                                                                                      appearance : new SFNode(
                                                                                                                                        new Appearance({
                                                                                                                                          USE : new SFString("SegmentLine")})),
                                                                                                                                      geometry : new SFNode(
                                                                                                                                        new IndexedLineSet({
                                                                                                                                          coordIndex : new MFInt32([0,1,-1]),
                                                                                                                                          coord : new SFNode(
                                                                                                                                            new Coordinate({
                                                                                                                                              point : new MFVec3f([0.2028,0.7139,-0.0236,0.2089,0.6858,-0.0245])}))}))}),

                                                                                                                                    new Shape({
                                                                                                                                      appearance : new SFNode(
                                                                                                                                        new Appearance({
                                                                                                                                          USE : new SFString("SiteParentLine")})),
                                                                                                                                      geometry : new SFNode(
                                                                                                                                        new IndexedLineSet({
                                                                                                                                          coordIndex : new MFInt32([0,1,-1,0,2,-1]),
                                                                                                                                          coord : new SFNode(
                                                                                                                                            new Coordinate({
                                                                                                                                              point : new MFVec3f([0.2028,0.7139,-0.0236,0.2089,0.6858,-0.0245,0.2056,0.6743,-0.0482])}))}))}),

                                                                                                                                    new HAnimSite({
                                                                                                                                      name : new SFString("l_index_distal_tip"),
                                                                                                                                      DEF : new SFString("hanim_l_index_distal_tip"),
                                                                                                                                      translation : new SFVec3f([0.2089,0.6858,-0.0245]),
                                                                                                                                      children : new MFNode([
                                                                                                                                        new Shape({
                                                                                                                                          USE : new SFString("sitebox")})])}),

                                                                                                                                    new HAnimSite({
                                                                                                                                      name : new SFString("l_dactylion"),
                                                                                                                                      DEF : new SFString("hanim_l_dactylion"),
                                                                                                                                      translation : new SFVec3f([0.2056,0.6743,-0.0482]),
                                                                                                                                      children : new MFNode([
                                                                                                                                        new Shape({
                                                                                                                                          USE : new SFString("sitebox")})])})])})])})])})])})])}),

                                                                                                                new HAnimJoint({
                                                                                                                  name : new SFString("l_middle0"),
                                                                                                                  DEF : new SFString("hanim_l_middle0"),
                                                                                                                  center : new SFVec3f([0.1987,0.8029,-0.053]),
                                                                                                                  skinCoordIndex : new MFInt32([131,132]),
                                                                                                                  skinCoordWeight : new MFFloat([1,1]),
                                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimSegment({
                                                                                                                      name : new SFString("l_middle_metacarpal"),
                                                                                                                      DEF : new SFString("hanim_l_middle_metacarpal"),
                                                                                                                      children : new MFNode([
                                                                                                                        new Transform({
                                                                                                                          translation : new SFVec3f([0.1987,0.8029,-0.053]),
                                                                                                                          children : new MFNode([
                                                                                                                            new Shape({
                                                                                                                              USE : new SFString("jointbox")})])}),

                                                                                                                        new Shape({
                                                                                                                          appearance : new SFNode(
                                                                                                                            new Appearance({
                                                                                                                              USE : new SFString("SegmentLine")})),
                                                                                                                          geometry : new SFNode(
                                                                                                                            new IndexedLineSet({
                                                                                                                              coordIndex : new MFInt32([0,1,-1]),
                                                                                                                              coord : new SFNode(
                                                                                                                                new Coordinate({
                                                                                                                                  point : new MFVec3f([0.1987,0.8029,-0.053,0.1987,0.7818,-0.053])}))}))})])}),

                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("l_middle1"),
                                                                                                                      DEF : new SFString("hanim_l_middle1"),
                                                                                                                      center : new SFVec3f([0.1987,0.7818,-0.053]),
                                                                                                                      skinCoordIndex : new MFInt32([156,157,163,164]),
                                                                                                                      skinCoordWeight : new MFFloat([1,1,0.5,0.5]),
                                                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimSegment({
                                                                                                                          name : new SFString("l_middle_proximal"),
                                                                                                                          DEF : new SFString("hanim_l_middle_proximal"),
                                                                                                                          children : new MFNode([
                                                                                                                            new Transform({
                                                                                                                              translation : new SFVec3f([0.1987,0.7818,-0.053]),
                                                                                                                              children : new MFNode([
                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("jointbox")})])}),

                                                                                                                            new Shape({
                                                                                                                              appearance : new SFNode(
                                                                                                                                new Appearance({
                                                                                                                                  USE : new SFString("SegmentLine")})),
                                                                                                                              geometry : new SFNode(
                                                                                                                                new IndexedLineSet({
                                                                                                                                  coordIndex : new MFInt32([0,1,-1]),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503])}))}))})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("l_middle2"),
                                                                                                                          DEF : new SFString("hanim_l_middle2"),
                                                                                                                          center : new SFVec3f([0.2013,0.7273,-0.0503]),
                                                                                                                          skinCoordIndex : new MFInt32([179,180,181,182]),
                                                                                                                          skinCoordWeight : new MFFloat([1,1,1,1]),
                                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              name : new SFString("l_middle_middle"),
                                                                                                                              DEF : new SFString("hanim_l_middle_middle"),
                                                                                                                              children : new MFNode([
                                                                                                                                new Transform({
                                                                                                                                  translation : new SFVec3f([0.2013,0.7273,-0.0503]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("jointbox")})])}),

                                                                                                                                new Shape({
                                                                                                                                  appearance : new SFNode(
                                                                                                                                    new Appearance({
                                                                                                                                      USE : new SFString("SegmentLine")})),
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new IndexedLineSet({
                                                                                                                                      coordIndex : new MFInt32([0,1,-1]),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          point : new MFVec3f([0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494])}))}))})])}),

                                                                                                                            new HAnimJoint({
                                                                                                                              name : new SFString("l_middle3"),
                                                                                                                              DEF : new SFString("hanim_l_middle3"),
                                                                                                                              center : new SFVec3f([0.2026,0.7011,-0.0494]),
                                                                                                                              skinCoordIndex : new MFInt32([183,184,185,186,187,188,189,190,191]),
                                                                                                                              skinCoordWeight : new MFFloat([1,1,1,1,1,1,1,1,1]),
                                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                                              llimit : new MFFloat([0,0,0]),
                                                                                                                              children : new MFNode([
                                                                                                                                new HAnimSegment({
                                                                                                                                  name : new SFString("l_middle_distal"),
                                                                                                                                  DEF : new SFString("hanim_l_middle_distal"),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Transform({
                                                                                                                                      translation : new SFVec3f([0.2026,0.7011,-0.0494]),
                                                                                                                                      children : new MFNode([
                                                                                                                                        new Shape({
                                                                                                                                          USE : new SFString("jointbox")})])}),

                                                                                                                                    new Shape({
                                                                                                                                      appearance : new SFNode(
                                                                                                                                        new Appearance({
                                                                                                                                          USE : new SFString("SegmentLine")})),
                                                                                                                                      geometry : new SFNode(
                                                                                                                                        new IndexedLineSet({
                                                                                                                                          coordIndex : new MFInt32([0,1,-1]),
                                                                                                                                          coord : new SFNode(
                                                                                                                                            new Coordinate({
                                                                                                                                              point : new MFVec3f([0.2026,0.7011,-0.0494,0.208,0.6731,-0.0491])}))}))}),

                                                                                                                                    new Shape({
                                                                                                                                      appearance : new SFNode(
                                                                                                                                        new Appearance({
                                                                                                                                          USE : new SFString("SiteParentLine")})),
                                                                                                                                      geometry : new SFNode(
                                                                                                                                        new IndexedLineSet({
                                                                                                                                          coordIndex : new MFInt32([0,1,-1]),
                                                                                                                                          coord : new SFNode(
                                                                                                                                            new Coordinate({
                                                                                                                                              point : new MFVec3f([0.2026,0.7011,-0.0494,0.208,0.6731,-0.0491])}))}))}),

                                                                                                                                    new HAnimSite({
                                                                                                                                      name : new SFString("l_middle_distal_tip"),
                                                                                                                                      DEF : new SFString("hanim_l_middle_distal_tip"),
                                                                                                                                      translation : new SFVec3f([0.208,0.6731,-0.0491]),
                                                                                                                                      children : new MFNode([
                                                                                                                                        new Shape({
                                                                                                                                          USE : new SFString("sitebox")})])})])})])})])})])})])}),

                                                                                                                new HAnimJoint({
                                                                                                                  name : new SFString("l_ring0"),
                                                                                                                  DEF : new SFString("hanim_l_ring0"),
                                                                                                                  center : new SFVec3f([0.1956,0.8019,-0.0794]),
                                                                                                                  skinCoordIndex : new MFInt32([133,134]),
                                                                                                                  skinCoordWeight : new MFFloat([1,1]),
                                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimSegment({
                                                                                                                      name : new SFString("l_ring_metacarpal"),
                                                                                                                      DEF : new SFString("hanim_l_ring_metacarpal"),
                                                                                                                      children : new MFNode([
                                                                                                                        new Transform({
                                                                                                                          translation : new SFVec3f([0.1956,0.8019,-0.0794]),
                                                                                                                          children : new MFNode([
                                                                                                                            new Shape({
                                                                                                                              USE : new SFString("jointbox")})])}),

                                                                                                                        new Shape({
                                                                                                                          appearance : new SFNode(
                                                                                                                            new Appearance({
                                                                                                                              USE : new SFString("SegmentLine")})),
                                                                                                                          geometry : new SFNode(
                                                                                                                            new IndexedLineSet({
                                                                                                                              coordIndex : new MFInt32([0,1,-1]),
                                                                                                                              coord : new SFNode(
                                                                                                                                new Coordinate({
                                                                                                                                  point : new MFVec3f([0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794])}))}))})])}),

                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("l_ring1"),
                                                                                                                      DEF : new SFString("hanim_l_ring1"),
                                                                                                                      center : new SFVec3f([0.1956,0.7815,-0.0794]),
                                                                                                                      skinCoordIndex : new MFInt32([158,159,164,165]),
                                                                                                                      skinCoordWeight : new MFFloat([1,1,0.5,0.5]),
                                                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimSegment({
                                                                                                                          name : new SFString("l_ring_proximal"),
                                                                                                                          DEF : new SFString("hanim_l_ring_proximal"),
                                                                                                                          children : new MFNode([
                                                                                                                            new Transform({
                                                                                                                              translation : new SFVec3f([0.1956,0.7815,-0.0794]),
                                                                                                                              children : new MFNode([
                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("jointbox")})])}),

                                                                                                                            new Shape({
                                                                                                                              appearance : new SFNode(
                                                                                                                                new Appearance({
                                                                                                                                  USE : new SFString("SegmentLine")})),
                                                                                                                              geometry : new SFNode(
                                                                                                                                new IndexedLineSet({
                                                                                                                                  coordIndex : new MFInt32([0,1,-1]),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777])}))}))})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("l_ring2"),
                                                                                                                          DEF : new SFString("hanim_l_ring2"),
                                                                                                                          center : new SFVec3f([0.1973,0.7287,-0.0777]),
                                                                                                                          skinCoordIndex : new MFInt32([192,193,194,195]),
                                                                                                                          skinCoordWeight : new MFFloat([1,1,1,1]),
                                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              name : new SFString("l_ring_middle"),
                                                                                                                              DEF : new SFString("hanim_l_ring_middle"),
                                                                                                                              children : new MFNode([
                                                                                                                                new Transform({
                                                                                                                                  translation : new SFVec3f([0.1973,0.7287,-0.0777]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("jointbox")})])}),

                                                                                                                                new Shape({
                                                                                                                                  appearance : new SFNode(
                                                                                                                                    new Appearance({
                                                                                                                                      USE : new SFString("SegmentLine")})),
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new IndexedLineSet({
                                                                                                                                      coordIndex : new MFInt32([0,1,-1]),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          point : new MFVec3f([0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767])}))}))})])}),

                                                                                                                            new HAnimJoint({
                                                                                                                              name : new SFString("l_ring3"),
                                                                                                                              DEF : new SFString("hanim_l_ring3"),
                                                                                                                              center : new SFVec3f([0.1983,0.7045,-0.0767]),
                                                                                                                              skinCoordIndex : new MFInt32([196,197,198,199,200,201,202,203,204]),
                                                                                                                              skinCoordWeight : new MFFloat([1,1,1,1,1,1,1,1,1]),
                                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                                              llimit : new MFFloat([0,0,0]),
                                                                                                                              children : new MFNode([
                                                                                                                                new HAnimSegment({
                                                                                                                                  name : new SFString("l_ring_distal"),
                                                                                                                                  DEF : new SFString("hanim_l_ring_distal"),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Transform({
                                                                                                                                      translation : new SFVec3f([0.1983,0.7045,-0.0767]),
                                                                                                                                      children : new MFNode([
                                                                                                                                        new Shape({
                                                                                                                                          USE : new SFString("jointbox")})])}),

                                                                                                                                    new Shape({
                                                                                                                                      appearance : new SFNode(
                                                                                                                                        new Appearance({
                                                                                                                                          USE : new SFString("SegmentLine")})),
                                                                                                                                      geometry : new SFNode(
                                                                                                                                        new IndexedLineSet({
                                                                                                                                          coordIndex : new MFInt32([0,1,-1]),
                                                                                                                                          coord : new SFNode(
                                                                                                                                            new Coordinate({
                                                                                                                                              point : new MFVec3f([0.1983,0.7045,-0.0767,0.2035,0.675,-0.0756])}))}))}),

                                                                                                                                    new Shape({
                                                                                                                                      appearance : new SFNode(
                                                                                                                                        new Appearance({
                                                                                                                                          USE : new SFString("SiteParentLine")})),
                                                                                                                                      geometry : new SFNode(
                                                                                                                                        new IndexedLineSet({
                                                                                                                                          coordIndex : new MFInt32([0,1,-1]),
                                                                                                                                          coord : new SFNode(
                                                                                                                                            new Coordinate({
                                                                                                                                              point : new MFVec3f([0.1983,0.7045,-0.0767,0.2035,0.675,-0.0756])}))}))}),

                                                                                                                                    new HAnimSite({
                                                                                                                                      name : new SFString("l_ring_distal_tip"),
                                                                                                                                      DEF : new SFString("hanim_l_ring_distal_tip"),
                                                                                                                                      translation : new SFVec3f([0.2035,0.675,-0.0756]),
                                                                                                                                      children : new MFNode([
                                                                                                                                        new Shape({
                                                                                                                                          USE : new SFString("sitebox")})])})])})])})])})])})])}),

                                                                                                                new HAnimJoint({
                                                                                                                  name : new SFString("l_pinky0"),
                                                                                                                  DEF : new SFString("hanim_l_pinky0"),
                                                                                                                  center : new SFVec3f([0.1925,0.8066,-0.1036]),
                                                                                                                  skinCoordIndex : new MFInt32([135,136,137,165]),
                                                                                                                  skinCoordWeight : new MFFloat([1,1,1,0.5]),
                                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimSegment({
                                                                                                                      name : new SFString("l_pinky_metacarpal"),
                                                                                                                      DEF : new SFString("hanim_l_pinky_metacarpal"),
                                                                                                                      children : new MFNode([
                                                                                                                        new Transform({
                                                                                                                          translation : new SFVec3f([0.1925,0.8066,-0.1036]),
                                                                                                                          children : new MFNode([
                                                                                                                            new Shape({
                                                                                                                              USE : new SFString("jointbox")})])}),

                                                                                                                        new Shape({
                                                                                                                          appearance : new SFNode(
                                                                                                                            new Appearance({
                                                                                                                              USE : new SFString("SegmentLine")})),
                                                                                                                          geometry : new SFNode(
                                                                                                                            new IndexedLineSet({
                                                                                                                              coordIndex : new MFInt32([0,1,-1]),
                                                                                                                              coord : new SFNode(
                                                                                                                                new Coordinate({
                                                                                                                                  point : new MFVec3f([0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036])}))}))})])}),

                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("l_pinky1"),
                                                                                                                      DEF : new SFString("hanim_l_pinky1"),
                                                                                                                      center : new SFVec3f([0.1925,0.7866,-0.1036]),
                                                                                                                      skinCoordIndex : new MFInt32([160,161,162]),
                                                                                                                      skinCoordWeight : new MFFloat([1,1,1]),
                                                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimSegment({
                                                                                                                          name : new SFString("l_pinky_proximal"),
                                                                                                                          DEF : new SFString("hanim_l_pinky_proximal"),
                                                                                                                          children : new MFNode([
                                                                                                                            new Transform({
                                                                                                                              translation : new SFVec3f([0.1925,0.7866,-0.1036]),
                                                                                                                              children : new MFNode([
                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("jointbox")})])}),

                                                                                                                            new Shape({
                                                                                                                              appearance : new SFNode(
                                                                                                                                new Appearance({
                                                                                                                                  USE : new SFString("SegmentLine")})),
                                                                                                                              geometry : new SFNode(
                                                                                                                                new IndexedLineSet({
                                                                                                                                  coordIndex : new MFInt32([0,1,-1]),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024])}))}))})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("l_pinky2"),
                                                                                                                          DEF : new SFString("hanim_l_pinky2"),
                                                                                                                          center : new SFVec3f([0.1938,0.7452,-0.1024]),
                                                                                                                          skinCoordIndex : new MFInt32([205,206,207,208]),
                                                                                                                          skinCoordWeight : new MFFloat([1,1,1,1]),
                                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              name : new SFString("l_pinky_middle"),
                                                                                                                              DEF : new SFString("hanim_l_pinky_middle"),
                                                                                                                              children : new MFNode([
                                                                                                                                new Transform({
                                                                                                                                  translation : new SFVec3f([0.1938,0.7452,-0.1024]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("jointbox")})])}),

                                                                                                                                new Shape({
                                                                                                                                  appearance : new SFNode(
                                                                                                                                    new Appearance({
                                                                                                                                      USE : new SFString("SegmentLine")})),
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new IndexedLineSet({
                                                                                                                                      coordIndex : new MFInt32([0,1,-1]),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          point : new MFVec3f([0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017])}))}))})])}),

                                                                                                                            new HAnimJoint({
                                                                                                                              name : new SFString("l_pinky3"),
                                                                                                                              DEF : new SFString("hanim_l_pinky3"),
                                                                                                                              center : new SFVec3f([0.1948,0.7277,-0.1017]),
                                                                                                                              skinCoordIndex : new MFInt32([209,210,211,212,213,214,215,216,217]),
                                                                                                                              skinCoordWeight : new MFFloat([1,1,1,1,1,1,1,1,1]),
                                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                                              llimit : new MFFloat([0,0,0]),
                                                                                                                              children : new MFNode([
                                                                                                                                new HAnimSegment({
                                                                                                                                  name : new SFString("l_pinky_distal"),
                                                                                                                                  DEF : new SFString("hanim_l_pinky_distal"),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Transform({
                                                                                                                                      translation : new SFVec3f([0.1948,0.7277,-0.1017]),
                                                                                                                                      children : new MFNode([
                                                                                                                                        new Shape({
                                                                                                                                          USE : new SFString("jointbox")})])}),

                                                                                                                                    new Shape({
                                                                                                                                      appearance : new SFNode(
                                                                                                                                        new Appearance({
                                                                                                                                          USE : new SFString("SegmentLine")})),
                                                                                                                                      geometry : new SFNode(
                                                                                                                                        new IndexedLineSet({
                                                                                                                                          coordIndex : new MFInt32([0,1,-1]),
                                                                                                                                          coord : new SFNode(
                                                                                                                                            new Coordinate({
                                                                                                                                              point : new MFVec3f([0.1948,0.7277,-0.1017,0.2014,0.7009,-0.1012])}))}))}),

                                                                                                                                    new Shape({
                                                                                                                                      appearance : new SFNode(
                                                                                                                                        new Appearance({
                                                                                                                                          USE : new SFString("SiteParentLine")})),
                                                                                                                                      geometry : new SFNode(
                                                                                                                                        new IndexedLineSet({
                                                                                                                                          coordIndex : new MFInt32([0,1,-1]),
                                                                                                                                          coord : new SFNode(
                                                                                                                                            new Coordinate({
                                                                                                                                              point : new MFVec3f([0.1948,0.7277,-0.1017,0.2014,0.7009,-0.1012])}))}))}),

                                                                                                                                    new HAnimSite({
                                                                                                                                      name : new SFString("l_pinky_distal_tip"),
                                                                                                                                      DEF : new SFString("hanim_l_pinky_distal_tip"),
                                                                                                                                      translation : new SFVec3f([0.2014,0.7009,-0.1012]),
                                                                                                                                      children : new MFNode([
                                                                                                                                        new Shape({
                                                                                                                                          USE : new SFString("sitebox")})])})])})])})])})])})])})])})])})])})])})])}),

                                                                                            new HAnimJoint({
                                                                                              name : new SFString("r_sternoclavicular"),
                                                                                              DEF : new SFString("hanim_r_sternoclavicular"),
                                                                                              center : new SFVec3f([-0.0694,1.46,-0.033]),
                                                                                              skinCoordIndex : new MFInt32([10]),
                                                                                              skinCoordWeight : new MFFloat([1]),
                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                              llimit : new MFFloat([0,0,0]),
                                                                                              children : new MFNode([
                                                                                                new HAnimSegment({
                                                                                                  name : new SFString("r_clavicle"),
                                                                                                  DEF : new SFString("hanim_r_clavicle"),
                                                                                                  children : new MFNode([
                                                                                                    new Transform({
                                                                                                      translation : new SFVec3f([-0.0694,1.46,-0.033]),
                                                                                                      children : new MFNode([
                                                                                                        new Shape({
                                                                                                          USE : new SFString("jointbox")})])}),

                                                                                                    new Shape({
                                                                                                      appearance : new SFNode(
                                                                                                        new Appearance({
                                                                                                          USE : new SFString("SegmentLine")})),
                                                                                                      geometry : new SFNode(
                                                                                                        new IndexedLineSet({
                                                                                                          coordIndex : new MFInt32([0,1,-1]),
                                                                                                          coord : new SFNode(
                                                                                                            new Coordinate({
                                                                                                              point : new MFVec3f([-0.0694,1.46,-0.033,-0.0836,1.4281,-0.0401])}))}))}),

                                                                                                    new Shape({
                                                                                                      appearance : new SFNode(
                                                                                                        new Appearance({
                                                                                                          USE : new SFString("SiteParentLine")})),
                                                                                                      geometry : new SFNode(
                                                                                                        new IndexedLineSet({
                                                                                                          coordIndex : new MFInt32([0,1,-1,0,2,-1,0,3,-1,0,4,-1]),
                                                                                                          coord : new SFNode(
                                                                                                            new Coordinate({
                                                                                                              point : new MFVec3f([-0.0694,1.46,-0.033,-0.0115,1.4943,0.04,-0.1905,1.4791,-0.0431,-0.1626,1.4072,-0.0031,-0.1603,1.4098,-0.0826])}))}))}),

                                                                                                    new HAnimSite({
                                                                                                      name : new SFString("r_clavicale"),
                                                                                                      DEF : new SFString("hanim_r_clavicale"),
                                                                                                      translation : new SFVec3f([-0.0115,1.4943,0.04]),
                                                                                                      children : new MFNode([
                                                                                                        new Shape({
                                                                                                          USE : new SFString("sitebox")})])}),

                                                                                                    new HAnimSite({
                                                                                                      name : new SFString("r_acromion"),
                                                                                                      DEF : new SFString("hanim_r_acromion"),
                                                                                                      translation : new SFVec3f([-0.1905,1.4791,-0.0431]),
                                                                                                      children : new MFNode([
                                                                                                        new Shape({
                                                                                                          USE : new SFString("sitebox")})])}),

                                                                                                    new HAnimSite({
                                                                                                      name : new SFString("r_axilla_ant"),
                                                                                                      DEF : new SFString("hanim_r_axilla_ant"),
                                                                                                      translation : new SFVec3f([-0.1626,1.4072,-0.0031]),
                                                                                                      children : new MFNode([
                                                                                                        new Shape({
                                                                                                          USE : new SFString("sitebox")})])}),

                                                                                                    new HAnimSite({
                                                                                                      name : new SFString("r_axilla_post"),
                                                                                                      DEF : new SFString("hanim_r_axilla_post"),
                                                                                                      translation : new SFVec3f([-0.1603,1.4098,-0.0826]),
                                                                                                      children : new MFNode([
                                                                                                        new Shape({
                                                                                                          USE : new SFString("sitebox")})])})])}),

                                                                                                new HAnimJoint({
                                                                                                  name : new SFString("r_acromioclavicular"),
                                                                                                  DEF : new SFString("hanim_r_acromioclavicular"),
                                                                                                  center : new SFVec3f([-0.0836,1.4281,-0.0401]),
                                                                                                  skinCoordIndex : new MFInt32([77,29]),
                                                                                                  skinCoordWeight : new MFFloat([1,0.9]),
                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                                  children : new MFNode([
                                                                                                    new HAnimSegment({
                                                                                                      name : new SFString("r_scapula"),
                                                                                                      DEF : new SFString("hanim_r_scapula"),
                                                                                                      children : new MFNode([
                                                                                                        new Transform({
                                                                                                          translation : new SFVec3f([-0.0836,1.4281,-0.0401]),
                                                                                                          children : new MFNode([
                                                                                                            new Shape({
                                                                                                              USE : new SFString("jointbox")})])}),

                                                                                                        new Shape({
                                                                                                          appearance : new SFNode(
                                                                                                            new Appearance({
                                                                                                              USE : new SFString("SegmentLine")})),
                                                                                                          geometry : new SFNode(
                                                                                                            new IndexedLineSet({
                                                                                                              coordIndex : new MFInt32([0,1,-1]),
                                                                                                              coord : new SFNode(
                                                                                                                new Coordinate({
                                                                                                                  point : new MFVec3f([-0.0836,1.4281,-0.0401,-0.1907,1.4407,-0.0325])}))}))})])}),

                                                                                                    new HAnimJoint({
                                                                                                      name : new SFString("r_shoulder"),
                                                                                                      DEF : new SFString("hanim_r_shoulder"),
                                                                                                      center : new SFVec3f([-0.1907,1.4407,-0.0325]),
                                                                                                      skinCoordIndex : new MFInt32([29,30,32,78,218,219,220,221,86,88]),
                                                                                                      skinCoordWeight : new MFFloat([0.1,1,1,1,1,1,1,1,0.3,0.2]),
                                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                                      children : new MFNode([
                                                                                                        new HAnimSegment({
                                                                                                          name : new SFString("r_upperarm"),
                                                                                                          DEF : new SFString("hanim_r_upperarm"),
                                                                                                          children : new MFNode([
                                                                                                            new Transform({
                                                                                                              translation : new SFVec3f([-0.1907,1.4407,-0.0325]),
                                                                                                              children : new MFNode([
                                                                                                                new Shape({
                                                                                                                  USE : new SFString("jointbox")})])}),

                                                                                                            new Shape({
                                                                                                              appearance : new SFNode(
                                                                                                                new Appearance({
                                                                                                                  USE : new SFString("SegmentLine")})),
                                                                                                              geometry : new SFNode(
                                                                                                                new IndexedLineSet({
                                                                                                                  coordIndex : new MFInt32([0,1,-1]),
                                                                                                                  coord : new SFNode(
                                                                                                                    new Coordinate({
                                                                                                                      point : new MFVec3f([-0.1907,1.4407,-0.0325,-0.1949,1.1388,-0.062])}))}))}),

                                                                                                            new Shape({
                                                                                                              appearance : new SFNode(
                                                                                                                new Appearance({
                                                                                                                  USE : new SFString("SiteParentLine")})),
                                                                                                              geometry : new SFNode(
                                                                                                                new IndexedLineSet({
                                                                                                                  coordIndex : new MFInt32([0,1,-1]),
                                                                                                                  coord : new SFNode(
                                                                                                                    new Coordinate({
                                                                                                                      point : new MFVec3f([-0.1907,1.4407,-0.0325,-0.2224,1.1517,-0.1033])}))}))}),

                                                                                                            new HAnimSite({
                                                                                                              name : new SFString("r_humeral_lateral_epicn"),
                                                                                                              DEF : new SFString("hanim_r_humeral_lateral_epicn"),
                                                                                                              translation : new SFVec3f([-0.2224,1.1517,-0.1033]),
                                                                                                              children : new MFNode([
                                                                                                                new Shape({
                                                                                                                  USE : new SFString("sitebox")})])})])}),

                                                                                                        new HAnimJoint({
                                                                                                          name : new SFString("r_elbow"),
                                                                                                          DEF : new SFString("hanim_r_elbow"),
                                                                                                          center : new SFVec3f([-0.1949,1.1388,-0.062]),
                                                                                                          skinCoordIndex : new MFInt32([33,34,35,225,226,227,228,229,231,232,233,234]),
                                                                                                          skinCoordWeight : new MFFloat([1,1,1,1,1,1,1,1,1,1,1,1]),
                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                                          children : new MFNode([
                                                                                                            new HAnimSegment({
                                                                                                              name : new SFString("r_forearm"),
                                                                                                              DEF : new SFString("hanim_r_forearm"),
                                                                                                              children : new MFNode([
                                                                                                                new Transform({
                                                                                                                  translation : new SFVec3f([-0.1949,1.1388,-0.062]),
                                                                                                                  children : new MFNode([
                                                                                                                    new Shape({
                                                                                                                      USE : new SFString("jointbox")})])}),

                                                                                                                new Shape({
                                                                                                                  appearance : new SFNode(
                                                                                                                    new Appearance({
                                                                                                                      USE : new SFString("SegmentLine")})),
                                                                                                                  geometry : new SFNode(
                                                                                                                    new IndexedLineSet({
                                                                                                                      coordIndex : new MFInt32([0,1,-1]),
                                                                                                                      coord : new SFNode(
                                                                                                                        new Coordinate({
                                                                                                                          point : new MFVec3f([-0.1949,1.1388,-0.062,-0.1959,0.8694,-0.0521])}))}))}),

                                                                                                                new Shape({
                                                                                                                  appearance : new SFNode(
                                                                                                                    new Appearance({
                                                                                                                      USE : new SFString("SiteParentLine")})),
                                                                                                                  geometry : new SFNode(
                                                                                                                    new IndexedLineSet({
                                                                                                                      coordIndex : new MFInt32([0,1,-1,0,2,-1,0,3,-1,0,4,-1]),
                                                                                                                      coord : new SFNode(
                                                                                                                        new Coordinate({
                                                                                                                          point : new MFVec3f([-0.1949,1.1388,-0.062,-0.1884,0.8676,-0.036,-0.1907,1.1405,-0.1065,-0.168,1.1298,-0.1062,-0.213,1.1305,-0.1091])}))}))}),

                                                                                                                new HAnimSite({
                                                                                                                  name : new SFString("r_radial_styloid"),
                                                                                                                  DEF : new SFString("hanim_r_radial_styloid"),
                                                                                                                  translation : new SFVec3f([-0.1884,0.8676,-0.036]),
                                                                                                                  children : new MFNode([
                                                                                                                    new Shape({
                                                                                                                      USE : new SFString("sitebox")})])}),

                                                                                                                new HAnimSite({
                                                                                                                  name : new SFString("r_olecranon"),
                                                                                                                  DEF : new SFString("hanim_r_olecranon"),
                                                                                                                  translation : new SFVec3f([-0.1907,1.1405,-0.1065]),
                                                                                                                  children : new MFNode([
                                                                                                                    new Shape({
                                                                                                                      USE : new SFString("sitebox")})])}),

                                                                                                                new HAnimSite({
                                                                                                                  name : new SFString("r_humeral_medial_epicn"),
                                                                                                                  DEF : new SFString("hanim_r_humeral_medial_epicn"),
                                                                                                                  translation : new SFVec3f([-0.168,1.1298,-0.1062]),
                                                                                                                  children : new MFNode([
                                                                                                                    new Shape({
                                                                                                                      USE : new SFString("sitebox")})])}),

                                                                                                                new HAnimSite({
                                                                                                                  name : new SFString("r_radiale"),
                                                                                                                  DEF : new SFString("hanim_r_radiale"),
                                                                                                                  translation : new SFVec3f([-0.213,1.1305,-0.1091]),
                                                                                                                  children : new MFNode([
                                                                                                                    new Shape({
                                                                                                                      USE : new SFString("sitebox")})])})])}),

                                                                                                            new HAnimJoint({
                                                                                                              name : new SFString("r_wrist"),
                                                                                                              DEF : new SFString("hanim_r_wrist"),
                                                                                                              center : new SFVec3f([-0.1959,0.8694,-0.0521]),
                                                                                                              skinCoordIndex : new MFInt32([235,236,237,238,239,240,241,242]),
                                                                                                              skinCoordWeight : new MFFloat([1,1,1,1,1,1,1,1]),
                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                              llimit : new MFFloat([0,0,0]),
                                                                                                              children : new MFNode([
                                                                                                                new HAnimSegment({
                                                                                                                  name : new SFString("r_hand"),
                                                                                                                  DEF : new SFString("hanim_r_hand"),
                                                                                                                  children : new MFNode([
                                                                                                                    new Transform({
                                                                                                                      translation : new SFVec3f([-0.1959,0.8694,-0.0521]),
                                                                                                                      children : new MFNode([
                                                                                                                        new Shape({
                                                                                                                          USE : new SFString("jointbox")})])}),

                                                                                                                    new Shape({
                                                                                                                      appearance : new SFNode(
                                                                                                                        new Appearance({
                                                                                                                          USE : new SFString("SegmentLine")})),
                                                                                                                      geometry : new SFNode(
                                                                                                                        new IndexedLineSet({
                                                                                                                          coordIndex : new MFInt32([0,1,-1,0,2,-1,0,3,-1,0,4,-1,0,5,-1]),
                                                                                                                          coord : new SFNode(
                                                                                                                            new Coordinate({
                                                                                                                              point : new MFVec3f([-0.1959,0.8694,-0.0521,-0.1899,0.8502,-0.0473,-0.1961,0.8055,-0.0218,-0.1972,0.806,-0.0468,-0.1951,0.8049,-0.0732,-0.1926,0.8096,-0.0975])}))}))}),

                                                                                                                    new Shape({
                                                                                                                      appearance : new SFNode(
                                                                                                                        new Appearance({
                                                                                                                          USE : new SFString("SiteParentLine")})),
                                                                                                                      geometry : new SFNode(
                                                                                                                        new IndexedLineSet({
                                                                                                                          coordIndex : new MFInt32([0,1,-1,0,2,-1,0,3,-1]),
                                                                                                                          coord : new SFNode(
                                                                                                                            new Coordinate({
                                                                                                                              point : new MFVec3f([-0.1959,0.8694,-0.0521,-0.1977,0.8169,-0.0177,-0.2117,0.8562,-0.0584,-0.1929,0.789,-0.1064])}))}))}),

                                                                                                                    new HAnimSite({
                                                                                                                      name : new SFString("r_metacarpal_pha2"),
                                                                                                                      DEF : new SFString("hanim_r_metacarpal_pha2"),
                                                                                                                      translation : new SFVec3f([-0.1977,0.8169,-0.0177]),
                                                                                                                      children : new MFNode([
                                                                                                                        new Shape({
                                                                                                                          USE : new SFString("sitebox")})])}),

                                                                                                                    new HAnimSite({
                                                                                                                      name : new SFString("r_ulnar_styloid"),
                                                                                                                      DEF : new SFString("hanim_r_ulnar_styloid"),
                                                                                                                      translation : new SFVec3f([-0.2117,0.8562,-0.0584]),
                                                                                                                      children : new MFNode([
                                                                                                                        new Shape({
                                                                                                                          USE : new SFString("sitebox")})])}),

                                                                                                                    new HAnimSite({
                                                                                                                      name : new SFString("r_metacarpal_pha5"),
                                                                                                                      DEF : new SFString("hanim_r_metacarpal_pha5"),
                                                                                                                      translation : new SFVec3f([-0.1929,0.789,-0.1064]),
                                                                                                                      children : new MFNode([
                                                                                                                        new Shape({
                                                                                                                          USE : new SFString("sitebox")})])})])}),

                                                                                                                new HAnimJoint({
                                                                                                                  name : new SFString("r_thumb1"),
                                                                                                                  DEF : new SFString("hanim_r_thumb1"),
                                                                                                                  center : new SFVec3f([-0.1899,0.8502,-0.0473]),
                                                                                                                  skinCoordIndex : new MFInt32([243,244]),
                                                                                                                  skinCoordWeight : new MFFloat([1,1]),
                                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimSegment({
                                                                                                                      name : new SFString("r_thumb_metacarpal"),
                                                                                                                      DEF : new SFString("hanim_r_thumb_metacarpal"),
                                                                                                                      children : new MFNode([
                                                                                                                        new Transform({
                                                                                                                          translation : new SFVec3f([-0.1899,0.8502,-0.0473]),
                                                                                                                          children : new MFNode([
                                                                                                                            new Shape({
                                                                                                                              USE : new SFString("jointbox")})])}),

                                                                                                                        new Shape({
                                                                                                                          appearance : new SFNode(
                                                                                                                            new Appearance({
                                                                                                                              USE : new SFString("SegmentLine")})),
                                                                                                                          geometry : new SFNode(
                                                                                                                            new IndexedLineSet({
                                                                                                                              coordIndex : new MFInt32([0,1,-1]),
                                                                                                                              coord : new SFNode(
                                                                                                                                new Coordinate({
                                                                                                                                  point : new MFVec3f([-0.1899,0.8502,-0.0473,-0.1874,0.8256,0.0306])}))}))})])}),

                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("r_thumb2"),
                                                                                                                      DEF : new SFString("hanim_r_thumb2"),
                                                                                                                      center : new SFVec3f([-0.1874,0.8256,0.0306]),
                                                                                                                      skinCoordIndex : new MFInt32([254,255,256,257,258,259]),
                                                                                                                      skinCoordWeight : new MFFloat([0.5,0.5,0.5,1,1,1]),
                                                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimSegment({
                                                                                                                          name : new SFString("r_thumb_proximal"),
                                                                                                                          DEF : new SFString("hanim_r_thumb_proximal"),
                                                                                                                          children : new MFNode([
                                                                                                                            new Transform({
                                                                                                                              translation : new SFVec3f([-0.1874,0.8256,0.0306]),
                                                                                                                              children : new MFNode([
                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("jointbox")})])}),

                                                                                                                            new Shape({
                                                                                                                              appearance : new SFNode(
                                                                                                                                new Appearance({
                                                                                                                                  USE : new SFString("SegmentLine")})),
                                                                                                                              geometry : new SFNode(
                                                                                                                                new IndexedLineSet({
                                                                                                                                  coordIndex : new MFInt32([0,1,-1]),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([-0.1874,0.8256,0.0306,-0.1864,0.819,0.0506])}))}))})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("r_thumb3"),
                                                                                                                          DEF : new SFString("hanim_r_thumb3"),
                                                                                                                          center : new SFVec3f([-0.1864,0.819,0.0506]),
                                                                                                                          skinCoordIndex : new MFInt32([260,261,262,263,264,265,266,267,268]),
                                                                                                                          skinCoordWeight : new MFFloat([1,1,1,1,1,1,1,1,1]),
                                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              name : new SFString("r_thumb_distal"),
                                                                                                                              DEF : new SFString("hanim_r_thumb_distal"),
                                                                                                                              children : new MFNode([
                                                                                                                                new Transform({
                                                                                                                                  translation : new SFVec3f([-0.1864,0.819,0.0506]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("jointbox")})])}),

                                                                                                                                new Shape({
                                                                                                                                  appearance : new SFNode(
                                                                                                                                    new Appearance({
                                                                                                                                      USE : new SFString("SegmentLine")})),
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new IndexedLineSet({
                                                                                                                                      coordIndex : new MFInt32([0,1,-1]),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          point : new MFVec3f([-0.1864,0.819,0.0506,-0.1869,0.809,0.082])}))}))}),

                                                                                                                                new Shape({
                                                                                                                                  appearance : new SFNode(
                                                                                                                                    new Appearance({
                                                                                                                                      USE : new SFString("SiteParentLine")})),
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new IndexedLineSet({
                                                                                                                                      coordIndex : new MFInt32([0,1,-1]),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          point : new MFVec3f([-0.1864,0.819,0.0506,-0.1869,0.809,0.082])}))}))}),

                                                                                                                                new HAnimSite({
                                                                                                                                  name : new SFString("r_thumb_distal_tip"),
                                                                                                                                  DEF : new SFString("hanim_r_thumb_distal_tip"),
                                                                                                                                  translation : new SFVec3f([-0.1869,0.809,0.082]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("sitebox")})])})])})])})])})])}),

                                                                                                                new HAnimJoint({
                                                                                                                  name : new SFString("r_index0"),
                                                                                                                  DEF : new SFString("hanim_r_index0"),
                                                                                                                  center : new SFVec3f([-0.1961,0.8055,-0.0218]),
                                                                                                                  skinCoordIndex : new MFInt32([245,246]),
                                                                                                                  skinCoordWeight : new MFFloat([1,1]),
                                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimSegment({
                                                                                                                      name : new SFString("r_index_metacarpal"),
                                                                                                                      DEF : new SFString("hanim_r_index_metacarpal"),
                                                                                                                      children : new MFNode([
                                                                                                                        new Transform({
                                                                                                                          translation : new SFVec3f([-0.1961,0.8055,-0.0218]),
                                                                                                                          children : new MFNode([
                                                                                                                            new Shape({
                                                                                                                              USE : new SFString("jointbox")})])}),

                                                                                                                        new Shape({
                                                                                                                          appearance : new SFNode(
                                                                                                                            new Appearance({
                                                                                                                              USE : new SFString("SegmentLine")})),
                                                                                                                          geometry : new SFNode(
                                                                                                                            new IndexedLineSet({
                                                                                                                              coordIndex : new MFInt32([0,1,-1]),
                                                                                                                              coord : new SFNode(
                                                                                                                                new Coordinate({
                                                                                                                                  point : new MFVec3f([-0.1961,0.8055,-0.0218,-0.1961,0.7846,-0.0218])}))}))})])}),

                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("r_index1"),
                                                                                                                      DEF : new SFString("hanim_r_index1"),
                                                                                                                      center : new SFVec3f([-0.1961,0.7846,-0.0218]),
                                                                                                                      skinCoordIndex : new MFInt32([254,255,256,269,270,271,279]),
                                                                                                                      skinCoordWeight : new MFFloat([0.5,0.5,0.5,1,1,1,0.5]),
                                                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimSegment({
                                                                                                                          name : new SFString("r_index_proximal"),
                                                                                                                          DEF : new SFString("hanim_r_index_proximal"),
                                                                                                                          children : new MFNode([
                                                                                                                            new Transform({
                                                                                                                              translation : new SFVec3f([-0.1961,0.7846,-0.0218]),
                                                                                                                              children : new MFNode([
                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("jointbox")})])}),

                                                                                                                            new Shape({
                                                                                                                              appearance : new SFNode(
                                                                                                                                new Appearance({
                                                                                                                                  USE : new SFString("SegmentLine")})),
                                                                                                                              geometry : new SFNode(
                                                                                                                                new IndexedLineSet({
                                                                                                                                  coordIndex : new MFInt32([0,1,-1]),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([-0.1961,0.7846,-0.0218,-0.1945,0.7169,-0.0173])}))}))})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("r_index2"),
                                                                                                                          DEF : new SFString("hanim_r_index2"),
                                                                                                                          center : new SFVec3f([-0.1954,0.7393,-0.0185]),
                                                                                                                          skinCoordIndex : new MFInt32([282,283,284,285]),
                                                                                                                          skinCoordWeight : new MFFloat([1,1,1,1]),
                                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              name : new SFString("r_index_middle"),
                                                                                                                              DEF : new SFString("hanim_r_index_middle"),
                                                                                                                              children : new MFNode([
                                                                                                                                new Transform({
                                                                                                                                  translation : new SFVec3f([-0.1954,0.7393,-0.0185]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("jointbox")})])}),

                                                                                                                                new Shape({
                                                                                                                                  appearance : new SFNode(
                                                                                                                                    new Appearance({
                                                                                                                                      USE : new SFString("SegmentLine")})),
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new IndexedLineSet({
                                                                                                                                      coordIndex : new MFInt32([0,1,-1]),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          point : new MFVec3f([-0.1954,0.7393,-0.0185,-0.1945,0.7169,-0.0173])}))}))})])}),

                                                                                                                            new HAnimJoint({
                                                                                                                              name : new SFString("r_index3"),
                                                                                                                              DEF : new SFString("hanim_r_index3"),
                                                                                                                              center : new SFVec3f([-0.1945,0.7169,-0.0173]),
                                                                                                                              skinCoordIndex : new MFInt32([286,287,288,289,290,291,292,293,294]),
                                                                                                                              skinCoordWeight : new MFFloat([1,1,1,1,1,1,1,1,1]),
                                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                                              llimit : new MFFloat([0,0,0]),
                                                                                                                              children : new MFNode([
                                                                                                                                new HAnimSegment({
                                                                                                                                  name : new SFString("r_index_distal"),
                                                                                                                                  DEF : new SFString("hanim_r_index_distal"),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Transform({
                                                                                                                                      translation : new SFVec3f([-0.1945,0.7169,-0.0173]),
                                                                                                                                      children : new MFNode([
                                                                                                                                        new Shape({
                                                                                                                                          USE : new SFString("jointbox")})])}),

                                                                                                                                    new Shape({
                                                                                                                                      appearance : new SFNode(
                                                                                                                                        new Appearance({
                                                                                                                                          USE : new SFString("SegmentLine")})),
                                                                                                                                      geometry : new SFNode(
                                                                                                                                        new IndexedLineSet({
                                                                                                                                          coordIndex : new MFInt32([0,1,-1]),
                                                                                                                                          coord : new SFNode(
                                                                                                                                            new Coordinate({
                                                                                                                                              point : new MFVec3f([-0.1945,0.7169,-0.0173,-0.198,0.6883,-0.018])}))}))}),

                                                                                                                                    new Shape({
                                                                                                                                      appearance : new SFNode(
                                                                                                                                        new Appearance({
                                                                                                                                          USE : new SFString("SiteParentLine")})),
                                                                                                                                      geometry : new SFNode(
                                                                                                                                        new IndexedLineSet({
                                                                                                                                          coordIndex : new MFInt32([0,1,-1,0,2,-1]),
                                                                                                                                          coord : new SFNode(
                                                                                                                                            new Coordinate({
                                                                                                                                              point : new MFVec3f([-0.1945,0.7169,-0.0173,-0.198,0.6883,-0.018,-0.1941,0.6772,-0.0423])}))}))}),

                                                                                                                                    new HAnimSite({
                                                                                                                                      name : new SFString("r_index_distal_tip"),
                                                                                                                                      DEF : new SFString("hanim_r_index_distal_tip"),
                                                                                                                                      translation : new SFVec3f([-0.198,0.6883,-0.018]),
                                                                                                                                      children : new MFNode([
                                                                                                                                        new Shape({
                                                                                                                                          USE : new SFString("sitebox")})])}),

                                                                                                                                    new HAnimSite({
                                                                                                                                      name : new SFString("r_dactylion"),
                                                                                                                                      DEF : new SFString("hanim_r_dactylion"),
                                                                                                                                      translation : new SFVec3f([-0.1941,0.6772,-0.0423]),
                                                                                                                                      children : new MFNode([
                                                                                                                                        new Shape({
                                                                                                                                          USE : new SFString("sitebox")})])})])})])})])})])})])}),

                                                                                                                new HAnimJoint({
                                                                                                                  name : new SFString("r_middle0"),
                                                                                                                  DEF : new SFString("hanim_r_middle0"),
                                                                                                                  center : new SFVec3f([-0.1972,0.806,-0.0468]),
                                                                                                                  skinCoordIndex : new MFInt32([247,248]),
                                                                                                                  skinCoordWeight : new MFFloat([1,1]),
                                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimSegment({
                                                                                                                      name : new SFString("r_middle_metacarpal"),
                                                                                                                      DEF : new SFString("hanim_r_middle_metacarpal"),
                                                                                                                      children : new MFNode([
                                                                                                                        new Transform({
                                                                                                                          translation : new SFVec3f([-0.1972,0.806,-0.0468]),
                                                                                                                          children : new MFNode([
                                                                                                                            new Shape({
                                                                                                                              USE : new SFString("jointbox")})])}),

                                                                                                                        new Shape({
                                                                                                                          appearance : new SFNode(
                                                                                                                            new Appearance({
                                                                                                                              USE : new SFString("SegmentLine")})),
                                                                                                                          geometry : new SFNode(
                                                                                                                            new IndexedLineSet({
                                                                                                                              coordIndex : new MFInt32([0,1,-1]),
                                                                                                                              coord : new SFNode(
                                                                                                                                new Coordinate({
                                                                                                                                  point : new MFVec3f([-0.1972,0.806,-0.0468,-0.1972,0.7849,-0.0468])}))}))})])}),

                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("r_middle1"),
                                                                                                                      DEF : new SFString("hanim_r_middle1"),
                                                                                                                      center : new SFVec3f([-0.1972,0.7849,-0.0468]),
                                                                                                                      skinCoordIndex : new MFInt32([272,273,279,280]),
                                                                                                                      skinCoordWeight : new MFFloat([1,1,0.5,0.5]),
                                                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimSegment({
                                                                                                                          name : new SFString("r_middle_proximal"),
                                                                                                                          DEF : new SFString("hanim_r_middle_proximal"),
                                                                                                                          children : new MFNode([
                                                                                                                            new Transform({
                                                                                                                              translation : new SFVec3f([-0.1972,0.7849,-0.0468]),
                                                                                                                              children : new MFNode([
                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("jointbox")})])}),

                                                                                                                            new Shape({
                                                                                                                              appearance : new SFNode(
                                                                                                                                new Appearance({
                                                                                                                                  USE : new SFString("SegmentLine")})),
                                                                                                                              geometry : new SFNode(
                                                                                                                                new IndexedLineSet({
                                                                                                                                  coordIndex : new MFInt32([0,1,-1]),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([-0.1972,0.7849,-0.0468,-0.195,0.7304,-0.0441])}))}))})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("r_middle2"),
                                                                                                                          DEF : new SFString("hanim_r_middle2"),
                                                                                                                          center : new SFVec3f([-0.195,0.7304,-0.0441]),
                                                                                                                          skinCoordIndex : new MFInt32([295,296,297,298]),
                                                                                                                          skinCoordWeight : new MFFloat([1,1,1,1]),
                                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              name : new SFString("r_middle_middle"),
                                                                                                                              DEF : new SFString("hanim_r_middle_middle"),
                                                                                                                              children : new MFNode([
                                                                                                                                new Transform({
                                                                                                                                  translation : new SFVec3f([-0.195,0.7304,-0.0441]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("jointbox")})])}),

                                                                                                                                new Shape({
                                                                                                                                  appearance : new SFNode(
                                                                                                                                    new Appearance({
                                                                                                                                      USE : new SFString("SegmentLine")})),
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new IndexedLineSet({
                                                                                                                                      coordIndex : new MFInt32([0,1,-1]),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          point : new MFVec3f([-0.195,0.7304,-0.0441,-0.1939,0.7042,-0.0432])}))}))})])}),

                                                                                                                            new HAnimJoint({
                                                                                                                              name : new SFString("r_middle3"),
                                                                                                                              DEF : new SFString("hanim_r_middle3"),
                                                                                                                              center : new SFVec3f([-0.1939,0.7042,-0.0432]),
                                                                                                                              skinCoordIndex : new MFInt32([299,300,301,302,303,304,305,306,307]),
                                                                                                                              skinCoordWeight : new MFFloat([1,1,1,1,1,1,1,1,1]),
                                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                                              llimit : new MFFloat([0,0,0]),
                                                                                                                              children : new MFNode([
                                                                                                                                new HAnimSegment({
                                                                                                                                  name : new SFString("r_middle_distal"),
                                                                                                                                  DEF : new SFString("hanim_r_middle_distal"),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Transform({
                                                                                                                                      translation : new SFVec3f([-0.1939,0.7042,-0.0432]),
                                                                                                                                      children : new MFNode([
                                                                                                                                        new Shape({
                                                                                                                                          USE : new SFString("jointbox")})])}),

                                                                                                                                    new Shape({
                                                                                                                                      appearance : new SFNode(
                                                                                                                                        new Appearance({
                                                                                                                                          USE : new SFString("SegmentLine")})),
                                                                                                                                      geometry : new SFNode(
                                                                                                                                        new IndexedLineSet({
                                                                                                                                          coordIndex : new MFInt32([0,1,-1]),
                                                                                                                                          coord : new SFNode(
                                                                                                                                            new Coordinate({
                                                                                                                                              point : new MFVec3f([-0.1939,0.7042,-0.0432,-0.1969,0.6758,-0.0427])}))}))}),

                                                                                                                                    new Shape({
                                                                                                                                      appearance : new SFNode(
                                                                                                                                        new Appearance({
                                                                                                                                          USE : new SFString("SiteParentLine")})),
                                                                                                                                      geometry : new SFNode(
                                                                                                                                        new IndexedLineSet({
                                                                                                                                          coordIndex : new MFInt32([0,1,-1]),
                                                                                                                                          coord : new SFNode(
                                                                                                                                            new Coordinate({
                                                                                                                                              point : new MFVec3f([-0.1939,0.7042,-0.0432,-0.1969,0.6758,-0.0427])}))}))}),

                                                                                                                                    new HAnimSite({
                                                                                                                                      name : new SFString("r_middle_distal_tip"),
                                                                                                                                      DEF : new SFString("hanim_r_middle_distal_tip"),
                                                                                                                                      translation : new SFVec3f([-0.1969,0.6758,-0.0427]),
                                                                                                                                      children : new MFNode([
                                                                                                                                        new Shape({
                                                                                                                                          USE : new SFString("sitebox")})])})])})])})])})])})])}),

                                                                                                                new HAnimJoint({
                                                                                                                  name : new SFString("r_ring0"),
                                                                                                                  DEF : new SFString("hanim_r_ring0"),
                                                                                                                  center : new SFVec3f([-0.1951,0.8049,-0.0732]),
                                                                                                                  skinCoordIndex : new MFInt32([249,250]),
                                                                                                                  skinCoordWeight : new MFFloat([1,1]),
                                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimSegment({
                                                                                                                      name : new SFString("r_ring_metacarpal"),
                                                                                                                      DEF : new SFString("hanim_r_ring_metacarpal"),
                                                                                                                      children : new MFNode([
                                                                                                                        new Transform({
                                                                                                                          translation : new SFVec3f([-0.1951,0.8049,-0.0732]),
                                                                                                                          children : new MFNode([
                                                                                                                            new Shape({
                                                                                                                              USE : new SFString("jointbox")})])}),

                                                                                                                        new Shape({
                                                                                                                          appearance : new SFNode(
                                                                                                                            new Appearance({
                                                                                                                              USE : new SFString("SegmentLine")})),
                                                                                                                          geometry : new SFNode(
                                                                                                                            new IndexedLineSet({
                                                                                                                              coordIndex : new MFInt32([0,1,-1]),
                                                                                                                              coord : new SFNode(
                                                                                                                                new Coordinate({
                                                                                                                                  point : new MFVec3f([-0.1951,0.8049,-0.0732,-0.1951,0.7845,-0.0732])}))}))})])}),

                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("r_ring1"),
                                                                                                                      DEF : new SFString("hanim_r_ring1"),
                                                                                                                      center : new SFVec3f([-0.1951,0.7845,-0.0732]),
                                                                                                                      skinCoordIndex : new MFInt32([274,275,280,281]),
                                                                                                                      skinCoordWeight : new MFFloat([1,1,0.5,0.5]),
                                                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimSegment({
                                                                                                                          name : new SFString("r_ring_proximal"),
                                                                                                                          DEF : new SFString("hanim_r_ring_proximal"),
                                                                                                                          children : new MFNode([
                                                                                                                            new Transform({
                                                                                                                              translation : new SFVec3f([-0.1951,0.7845,-0.0732]),
                                                                                                                              children : new MFNode([
                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("jointbox")})])}),

                                                                                                                            new Shape({
                                                                                                                              appearance : new SFNode(
                                                                                                                                new Appearance({
                                                                                                                                  USE : new SFString("SegmentLine")})),
                                                                                                                              geometry : new SFNode(
                                                                                                                                new IndexedLineSet({
                                                                                                                                  coordIndex : new MFInt32([0,1,-1]),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([-0.1951,0.7845,-0.0732,-0.192,0.7318,-0.0716])}))}))})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("r_ring2"),
                                                                                                                          DEF : new SFString("hanim_r_ring2"),
                                                                                                                          center : new SFVec3f([-0.192,0.7318,-0.0716]),
                                                                                                                          skinCoordIndex : new MFInt32([308,309,310,311]),
                                                                                                                          skinCoordWeight : new MFFloat([1,1,1,1]),
                                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              name : new SFString("r_ring_middle"),
                                                                                                                              DEF : new SFString("hanim_r_ring_middle"),
                                                                                                                              children : new MFNode([
                                                                                                                                new Transform({
                                                                                                                                  translation : new SFVec3f([-0.192,0.7318,-0.0716]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("jointbox")})])}),

                                                                                                                                new Shape({
                                                                                                                                  appearance : new SFNode(
                                                                                                                                    new Appearance({
                                                                                                                                      USE : new SFString("SegmentLine")})),
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new IndexedLineSet({
                                                                                                                                      coordIndex : new MFInt32([0,1,-1]),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          point : new MFVec3f([-0.192,0.7318,-0.0716,-0.1908,0.7077,-0.07063])}))}))})])}),

                                                                                                                            new HAnimJoint({
                                                                                                                              name : new SFString("r_ring3"),
                                                                                                                              DEF : new SFString("hanim_r_ring3"),
                                                                                                                              center : new SFVec3f([-0.1908,0.7077,-0.0706]),
                                                                                                                              skinCoordIndex : new MFInt32([312,313,314,315,316,317,318,319,320]),
                                                                                                                              skinCoordWeight : new MFFloat([1,1,1,1,1,1,1,1,1]),
                                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                                              llimit : new MFFloat([0,0,0]),
                                                                                                                              children : new MFNode([
                                                                                                                                new HAnimSegment({
                                                                                                                                  name : new SFString("r_ring_distal"),
                                                                                                                                  DEF : new SFString("hanim_r_ring_distal"),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Transform({
                                                                                                                                      translation : new SFVec3f([-0.1908,0.7077,-0.0706]),
                                                                                                                                      children : new MFNode([
                                                                                                                                        new Shape({
                                                                                                                                          USE : new SFString("jointbox")})])}),

                                                                                                                                    new Shape({
                                                                                                                                      appearance : new SFNode(
                                                                                                                                        new Appearance({
                                                                                                                                          USE : new SFString("SegmentLine")})),
                                                                                                                                      geometry : new SFNode(
                                                                                                                                        new IndexedLineSet({
                                                                                                                                          coordIndex : new MFInt32([0,1,-1]),
                                                                                                                                          coord : new SFNode(
                                                                                                                                            new Coordinate({
                                                                                                                                              point : new MFVec3f([-0.1908,0.7077,-0.0706,-0.1934,0.6778,-0.0693])}))}))}),

                                                                                                                                    new Shape({
                                                                                                                                      appearance : new SFNode(
                                                                                                                                        new Appearance({
                                                                                                                                          USE : new SFString("SiteParentLine")})),
                                                                                                                                      geometry : new SFNode(
                                                                                                                                        new IndexedLineSet({
                                                                                                                                          coordIndex : new MFInt32([0,1,-1]),
                                                                                                                                          coord : new SFNode(
                                                                                                                                            new Coordinate({
                                                                                                                                              point : new MFVec3f([-0.1908,0.7077,-0.0706,-0.1934,0.6778,-0.0693])}))}))}),

                                                                                                                                    new HAnimSite({
                                                                                                                                      name : new SFString("r_ring_distal_tip"),
                                                                                                                                      DEF : new SFString("hanim_r_ring_distal_tip"),
                                                                                                                                      translation : new SFVec3f([-0.1934,0.6778,-0.0693]),
                                                                                                                                      children : new MFNode([
                                                                                                                                        new Shape({
                                                                                                                                          USE : new SFString("sitebox")})])})])})])})])})])})])}),

                                                                                                                new HAnimJoint({
                                                                                                                  name : new SFString("r_pinky0"),
                                                                                                                  DEF : new SFString("hanim_r_pinky0"),
                                                                                                                  center : new SFVec3f([-0.1926,0.8096,-0.0975]),
                                                                                                                  skinCoordIndex : new MFInt32([251,252,253,281]),
                                                                                                                  skinCoordWeight : new MFFloat([1,1,1,0.5]),
                                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimSegment({
                                                                                                                      name : new SFString("r_pinky_metacarpal"),
                                                                                                                      DEF : new SFString("hanim_r_pinky_metacarpal"),
                                                                                                                      children : new MFNode([
                                                                                                                        new Transform({
                                                                                                                          translation : new SFVec3f([-0.1926,0.8096,-0.0975]),
                                                                                                                          children : new MFNode([
                                                                                                                            new Shape({
                                                                                                                              USE : new SFString("jointbox")})])}),

                                                                                                                        new Shape({
                                                                                                                          appearance : new SFNode(
                                                                                                                            new Appearance({
                                                                                                                              USE : new SFString("SegmentLine")})),
                                                                                                                          geometry : new SFNode(
                                                                                                                            new IndexedLineSet({
                                                                                                                              coordIndex : new MFInt32([0,1,-1]),
                                                                                                                              coord : new SFNode(
                                                                                                                                new Coordinate({
                                                                                                                                  point : new MFVec3f([-0.1926,0.8096,-0.0975,-0.1926,0.7896,-0.0975])}))}))})])}),

                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("r_pinky1"),
                                                                                                                      DEF : new SFString("hanim_r_pinky1"),
                                                                                                                      center : new SFVec3f([-0.1926,0.7896,-0.0975]),
                                                                                                                      skinCoordIndex : new MFInt32([276,277,278]),
                                                                                                                      skinCoordWeight : new MFFloat([1,1,1]),
                                                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimSegment({
                                                                                                                          name : new SFString("r_pinky_proximal"),
                                                                                                                          DEF : new SFString("hanim_r_pinky_proximal"),
                                                                                                                          children : new MFNode([
                                                                                                                            new Transform({
                                                                                                                              translation : new SFVec3f([-0.1926,0.7896,-0.0975]),
                                                                                                                              children : new MFNode([
                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("jointbox")})])}),

                                                                                                                            new Shape({
                                                                                                                              appearance : new SFNode(
                                                                                                                                new Appearance({
                                                                                                                                  USE : new SFString("SegmentLine")})),
                                                                                                                              geometry : new SFNode(
                                                                                                                                new IndexedLineSet({
                                                                                                                                  coordIndex : new MFInt32([0,1,-1]),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([-0.1926,0.7896,-0.0975,-0.1902,0.7483,-0.0963])}))}))})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("r_pinky2"),
                                                                                                                          DEF : new SFString("hanim_r_pinky2"),
                                                                                                                          center : new SFVec3f([-0.1902,0.7483,-0.0963]),
                                                                                                                          skinCoordIndex : new MFInt32([321,322,323,324]),
                                                                                                                          skinCoordWeight : new MFFloat([1,1,1,1]),
                                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              name : new SFString("r_pinky_middle"),
                                                                                                                              DEF : new SFString("hanim_r_pinky_middle"),
                                                                                                                              children : new MFNode([
                                                                                                                                new Transform({
                                                                                                                                  translation : new SFVec3f([-0.1902,0.7483,-0.0963]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("jointbox")})])}),

                                                                                                                                new Shape({
                                                                                                                                  appearance : new SFNode(
                                                                                                                                    new Appearance({
                                                                                                                                      USE : new SFString("SegmentLine")})),
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new IndexedLineSet({
                                                                                                                                      coordIndex : new MFInt32([0,1,-1]),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          point : new MFVec3f([-0.1902,0.7483,-0.0963,-0.1908,0.754,-0.096])}))}))})])}),

                                                                                                                            new HAnimJoint({
                                                                                                                              name : new SFString("r_pinky3"),
                                                                                                                              DEF : new SFString("hanim_r_pinky3"),
                                                                                                                              center : new SFVec3f([-0.1908,0.754,-0.096]),
                                                                                                                              skinCoordIndex : new MFInt32([325,326,327,328,329,330,331,332,333]),
                                                                                                                              skinCoordWeight : new MFFloat([1,1,1,1,1,1,1,1,1]),
                                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                                              llimit : new MFFloat([0,0,0]),
                                                                                                                              children : new MFNode([
                                                                                                                                new HAnimSegment({
                                                                                                                                  name : new SFString("r_pinky_distal"),
                                                                                                                                  DEF : new SFString("hanim_r_pinky_distal"),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Transform({
                                                                                                                                      translation : new SFVec3f([-0.1908,0.754,-0.096]),
                                                                                                                                      children : new MFNode([
                                                                                                                                        new Shape({
                                                                                                                                          USE : new SFString("jointbox")})])}),

                                                                                                                                    new Shape({
                                                                                                                                      appearance : new SFNode(
                                                                                                                                        new Appearance({
                                                                                                                                          USE : new SFString("SegmentLine")})),
                                                                                                                                      geometry : new SFNode(
                                                                                                                                        new IndexedLineSet({
                                                                                                                                          coordIndex : new MFInt32([0,1,-1]),
                                                                                                                                          coord : new SFNode(
                                                                                                                                            new Coordinate({
                                                                                                                                              point : new MFVec3f([-0.1908,0.754,-0.096,-0.1938,0.7035,-0.0949])}))}))}),

                                                                                                                                    new Shape({
                                                                                                                                      appearance : new SFNode(
                                                                                                                                        new Appearance({
                                                                                                                                          USE : new SFString("SiteParentLine")})),
                                                                                                                                      geometry : new SFNode(
                                                                                                                                        new IndexedLineSet({
                                                                                                                                          coordIndex : new MFInt32([0,1,-1]),
                                                                                                                                          coord : new SFNode(
                                                                                                                                            new Coordinate({
                                                                                                                                              point : new MFVec3f([-0.1908,0.754,-0.096,-0.1938,0.7035,-0.0949])}))}))}),

                                                                                                                                    new HAnimSite({
                                                                                                                                      name : new SFString("r_pinky_distal_tip"),
                                                                                                                                      DEF : new SFString("hanim_r_pinky_distal_tip"),
                                                                                                                                      translation : new SFVec3f([-0.1938,0.7035,-0.0949]),
                                                                                                                                      children : new MFNode([
                                                                                                                                        new Shape({
                                                                                                                                          USE : new SFString("sitebox")})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])}),
                  skinCoord : new SFNode(
                    new Coordinate({
                      DEF : new SFString("JoeSkinCoord"),
                      point : new MFVec3f([0,1.77,0,0,1.665,0.09,-0.033,1.62,0.087,0.033,1.62,0.087,0,1.55,0.097,-0.077,1.64,-0.01,-0.0527,1.58,0.015,0.077,1.64,-0.01,0.0527,1.58,0.015,0,1.625,-0.0925,-0.03,1.46,0.035,0,1.44,0.03,0.03,1.46,0.035,-0.1135,1.318,0.095,0.1135,1.318,0.095,0,1.25,0.113,-0.087,1.19,0.09,-0.0935,1.03,0.075,0.087,1.19,0.09,0.0935,1.03,0.075,-0.1425,1.065,0.0033,-0.15,0.9,-0.01,0.1425,1.065,0.0033,0.15,0.9,-0.01,0,1.53,-0.084,0.0049,1.1908,-0.1113,-0.0773,1.019,-0.12,0.0773,1.019,-0.12,0.005,1.0915,-0.1091,-0.178,1.4825,-0.0625,-0.17,1.38,0.007,-0.1884,0.8676,-0.036,-0.16,1.38,-0.127,-0.2,1.1388,-0.08,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.23,1.133,-0.055,-0.1977,0.8169,-0.0177,-0.1941,0.6772,-0.0423,-0.2117,0.8562,-0.0584,-0.1929,0.789,-0.1064,0.175,1.4825,-0.06,0.17,1.38,0.007,0.1901,0.8645,-0.0415,0.16,1.38,-0.125,0.2,1.1388,-0.08,0.165,1.1388,-0.04,0.244,1.1388,-0.04,0.23,1.133,-0.055,0.2009,0.8139,-0.0237,0.2056,0.6743,-0.0482,0.2142,0.8529,-0.0648,0.1929,0.786,-0.1122,-0.1,0.4913,-0.03,-0.17,0.466,0,-0.05,0.466,0,-0.165,0.01,0.12,-0.15,0.07,0,-0.085,0.086,0.0125,-0.09,0.056,0.0125,-0.115,0.02,0.122,-0.115,0.04,-0.055,-0.11,0.011,0.19,0.0993,0.4881,-0.0309,0.17,0.466,0,0.05,0.4867,0,0.165,0.01,0.12,0.15,0.07,0,0.085,0.086,0.0125,0.09,0.056,0.0125,0.115,0.02,0.122,0.115,0.04,-0.055,0.11,0.011,0.19,0.0034,0.8266,0.0257,-0.0646,1.5149,-0.038,0.0646,1.5149,-0.038,0,1.07225,0.09,-0.11,1.427,-0.1375,-0.235,1.42,-0.0625,0.11,1.427,-0.1375,0.235,1.42,-0.0625,0,1.41,-0.145,0,0.925,0.08,-0.087,1.19,-0.09,0.087,1.19,-0.09,0.172,1.32,-0.03,-0.172,1.32,-0.03,0.15,1.23,-0.015,-0.15,1.23,-0.015,0.079,0.92,-0.14,0.1,0.9,0.077,-0.079,0.92,-0.14,-0.1,0.9,0.075,0,0.78,0,0.171,0.65,0,0.02,0.65,0,0.1,0.65,-0.08,0.1,0.65,0.07,-0.171,0.65,0,-0.02,0.65,0,-0.1,0.65,-0.08,-0.1,0.65,0.07,0.25,1.27,-0.04,0.17,1.27,-0.04,0.2,1.27,-0.09,0.2,1.27,0.02,0.244,1.1388,-0.04,0.165,1.1388,-0.04,0.2,1.1388,-0.08,0.2,1.1388,-0.013,0.225,1,-0.01,0.225,1,-0.07,0.185,1,-0.01,0.185,1,-0.07,0.2,1.1388,-0.04,0.225,0.92,-0.04,0.175,0.92,-0.04,0.2,0.92,-0.065,0.2,0.92,-0.015,0.225,0.89,-0.04,0.175,0.89,-0.04,0.2,0.89,-0.065,0.2,0.89,-0.015,0.218,0.86,-0.04,0.184,0.86,-0.04,0.2,0.87,-0.07,0.2,0.87,0,0.21,0.85,0,0.1854,0.85,0,0.212,0.84,-0.015,0.183,0.84,-0.015,0.213,0.835,-0.04,0.19,0.835,-0.04,0.211,0.835,-0.065,0.192,0.835,-0.065,0.208,0.84,-0.085,0.19,0.84,-0.085,0.2,0.84,-0.095,0.215,0.82,0,0.193,0.815,0.005,0.198,0.8,0.012,0.21,0.82,0.03,0.19,0.82,0.03,0.2,0.835,0.039,0.212,0.8,0.05,0.188,0.8,0.05,0.2,0.807,0.057,0.2,0.793,0.035,0.2,0.774,0.076,0.212,0.78,0.07,0.188,0.78,0.07,0.2,0.785,0.075,0.2,0.77,0.062,0.215,0.793,-0.015,0.187,0.793,-0.015,0.2,0.793,-0.005,0.215,0.788,-0.04,0.187,0.788,-0.04,0.215,0.793,-0.065,0.187,0.793,-0.065,0.21,0.79,-0.085,0.19,0.79,-0.085,0.2,0.79,-0.095,0.19,0.77,-0.0275,0.19,0.77,-0.0525,0.19,0.78,-0.0775,0.212,0.745,-0.015,0.188,0.745,-0.02,0.2,0.745,-0.0255,0.2,0.745,-0.0045,0.211,0.72,-0.015,0.189,0.72,-0.015,0.2,0.72,-0.0252,0.2,0.72,-0.0048,0.21,0.695,-0.015,0.19,0.695,-0.015,0.2,0.695,-0.025,0.2,0.695,-0.005,0.2,0.685,-0.015,0.215,0.74,-0.04,0.185,0.74,-0.04,0.2,0.74,-0.055,0.2,0.74,-0.025,0.21,0.7142,-0.04,0.19,0.7142,-0.04,0.2,0.7142,-0.053,0.2,0.7142,-0.027,0.21,0.68,-0.04,0.19,0.68,-0.04,0.2,0.68,-0.05,0.2,0.68,-0.03,0.2,0.67,-0.04,0.212,0.74,-0.065,0.188,0.74,-0.065,0.2,0.74,-0.0756,0.2,0.74,-0.0542,0.21,0.7177,-0.065,0.19,0.7177,-0.065,0.2,0.7177,-0.0751,0.2,0.7177,-0.0549,0.21,0.695,-0.065,0.19,0.695,-0.065,0.2,0.695,-0.075,0.2,0.695,-0.055,0.2,0.685,-0.065,0.211,0.755,-0.085,0.189,0.755,-0.085,0.2,0.755,-0.0952,0.2,0.755,-0.0748,0.21,0.735,-0.085,0.19,0.735,-0.085,0.2,0.735,-0.0951,0.2,0.735,-0.0749,0.21,0.72,-0.085,0.19,0.72,-0.085,0.2,0.72,-0.095,0.2,0.72,-0.075,0.2,0.71,-0.085,-0.23,1.23,-0.04,-0.16,1.23,-0.04,-0.2,1.235,-0.105,-0.2,1.255,0.02,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.2,1.1388,-0.08,-0.2,1.1388,0.013,-0.225,1,-0.01,-0.225,1,-0.07,-0.185,1,-0.01,-0.185,1,-0.07,-0.2,1.1388,-0.04,-0.225,0.92,-0.04,-0.175,0.92,-0.04,-0.2,0.92,-0.065,-0.2,0.92,-0.015,-0.225,0.89,-0.04,-0.175,0.89,-0.04,-0.2,0.89,-0.065,-0.2,0.89,-0.015,-0.218,0.86,-0.04,-0.184,0.86,-0.04,-0.2,0.87,-0.07,-0.2,0.87,0,-0.21,0.85,0,-0.1854,0.85,0,-0.212,0.84,-0.015,-0.183,0.84,-0.015,-0.213,0.835,-0.04,-0.19,0.835,-0.04,-0.211,0.835,-0.065,-0.192,0.835,-0.065,-0.208,0.84,-0.085,-0.19,0.84,-0.085,-0.2,0.84,-0.095,-0.215,0.82,0,-0.193,0.815,0.005,-0.198,0.8,0.012,-0.21,0.82,0.03,-0.19,0.82,0.03,-0.2,0.835,0.039,-0.212,0.8,0.05,-0.188,0.8,0.05,-0.2,0.807,0.057,-0.2,0.793,0.035,-0.2,0.774,0.076,-0.212,0.78,0.07,-0.188,0.78,0.07,-0.2,0.785,0.075,-0.2,0.77,0.062,-0.215,0.793,-0.015,-0.187,0.793,-0.015,-0.2,0.793,-0.005,-0.215,0.788,-0.04,-0.187,0.788,-0.04,-0.215,0.793,-0.065,-0.187,0.793,-0.065,-0.21,0.79,-0.085,-0.19,0.79,-0.085,-0.2,0.79,-0.095,-0.19,0.77,-0.0275,-0.19,0.77,-0.0525,-0.19,0.78,-0.0775,-0.212,0.745,-0.015,-0.188,0.745,-0.02,-0.2,0.745,-0.0255,-0.2,0.745,-0.0045,-0.211,0.72,-0.015,-0.189,0.72,-0.015,-0.2,0.72,-0.0252,-0.2,0.72,-0.0048,-0.21,0.695,-0.015,-0.19,0.695,-0.015,-0.2,0.695,-0.025,-0.2,0.695,-0.005,-0.2,0.685,-0.015,-0.215,0.74,-0.04,-0.185,0.74,-0.04,-0.2,0.74,-0.055,-0.2,0.74,-0.025,-0.21,0.7142,-0.04,-0.19,0.7142,-0.04,-0.2,0.7142,-0.053,-0.2,0.7142,-0.027,-0.21,0.68,-0.04,-0.19,0.68,-0.04,-0.2,0.68,-0.05,-0.2,0.68,-0.03,-0.2,0.67,-0.04,-0.212,0.74,-0.065,-0.188,0.74,-0.065,-0.2,0.74,-0.0756,-0.2,0.74,-0.0542,-0.21,0.7177,-0.065,-0.19,0.7177,-0.065,-0.2,0.7177,-0.0751,-0.2,0.7177,-0.0549,-0.21,0.695,-0.065,-0.19,0.695,-0.065,-0.2,0.695,-0.075,-0.2,0.695,-0.055,-0.2,0.685,-0.065,-0.211,0.755,-0.085,-0.189,0.755,-0.085,-0.2,0.755,-0.0952,-0.2,0.755,-0.0748,-0.21,0.735,-0.085,-0.19,0.735,-0.085,-0.2,0.735,-0.0951,-0.2,0.735,-0.0749,-0.21,0.72,-0.085,-0.19,0.72,-0.085,-0.2,0.72,-0.095,-0.2,0.72,-0.075,-0.2,0.71,-0.085,0.115,0.466,0.06,0.115,0.466,-0.055,0.15,0.466,0,0.05,0.466,0,0.17,0.3,0,0.06,0.3,0,0.1,0.3,-0.05,0.1,0.3,0.05,0.15,0.07,0,0.085,0.086,0.0125,0.115,0.069,-0.045,0.117,0.0975,0.0615,0.1375,0.006,-0.03,0.095,0.006,-0.03,0.115,0.015,-0.045,0.115,0.06,0.1,0.115,0,0.07,0.165,0,0.07,0.095,0,0.07,0.115,0.04,0.13,0.125,0,0.12,0.165,0,0.12,0.087,0,0.122,0.09,0.012,0.188,0.11,0.011,0.19,0.128,0.011,0.185,0.142,0.011,0.178,0.154,0.01,0.168,-0.115,0.466,0.06,-0.115,0.466,-0.055,-0.17,0.466,0,-0.05,0.466,0,-0.17,0.3,0,-0.06,0.3,0,-0.1,0.3,-0.05,-0.1,0.3,0.05,-0.15,0.07,0,-0.085,0.086,0.0125,-0.115,0.069,-0.045,-0.117,0.0975,0.0615,-0.1375,0.006,-0.03,-0.095,0.006,-0.03,-0.095,0.006,-0.03,-0.115,0.06,0.1,-0.115,0,0.07,-0.165,0,0.07,-0.095,0,0.07,-0.115,0.04,0.13,-0.125,0,0.12,-0.165,0,0.12,-0.087,0,0.122,-0.09,0.012,0.188,-0.11,0.011,0.19,-0.128,0.011,0.185,-0.142,0.011,0.178,-0.154,0.01,0.168])})]),
                  skin : new SFNode(
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              ambientIntensity : new SFFloat(0.9),
                              diffuseColor : new SFColor([0.5,0,0.5]),
                              specularColor : new SFColor([1,1,1]),
                              emissiveColor : new SFColor([0.13,0.55,0.13]),
                              shininess : new SFFloat(0.9),
                              transparency : new SFFloat(0.4)})),
                          texture : new SFNode(
                            new ImageTexture({
                              url : new MFString(["cbodytexture28.png"])}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          creaseAngle : new SFFloat(3.1),
                          colorPerVertex : new SFBool(false),
                          coordIndex : new MFInt32([0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1]),
                          coord : new SFNode(
                            new Coordinate({
                              USE : new SFString("JoeSkinCoord")}))}))}))})])}),

            new Group({
              DEF : new SFString("SceneViewpoints"),
              children : new MFNode([
                new Viewpoint({
                  DEF : new SFString("hanim_InclinedView"),
                  description : new SFString("hanim_Inclined View"),
                  position : new SFVec3f([1.62,1.05,2.06]),
                  orientation : new SFRotation([-0.113,0.993,0.0347,0.671]),
                  centerOfRotation : new SFVec3f([0,0.824,0.0277])}),

                new Viewpoint({
                  DEF : new SFString("hanim_IFrontView_1"),
                  description : new SFString("hanim_Front View"),
                  position : new SFVec3f([0,0.854,2.57665]),
                  centerOfRotation : new SFVec3f([0,0.824,0.0277])}),

                new Viewpoint({
                  DEF : new SFString("hanim_ISideView_1"),
                  description : new SFString("hanim_Side View"),
                  position : new SFVec3f([2.5929,0.854,0]),
                  orientation : new SFRotation([0,1,0,1.5708]),
                  centerOfRotation : new SFVec3f([0,0.824,0.0277])}),

                new Viewpoint({
                  DEF : new SFString("hanim_ITopView"),
                  description : new SFString("hanim_Top View"),
                  position : new SFVec3f([0,3.4495,0]),
                  orientation : new SFRotation([1,0,0,-1.5708]),
                  centerOfRotation : new SFVec3f([0,0.824,0.0277])}),

                new Viewpoint({
                  DEF : new SFString("hanim_IRightHandFront"),
                  description : new SFString("hanim_RightHandFront View"),
                  position : new SFVec3f([-0.3,0.75,0.45]),
                  centerOfRotation : new SFVec3f([-0.1959,0.8694,-0.0521])}),

                new Viewpoint({
                  DEF : new SFString("hanim_ILeftHandFront"),
                  description : new SFString("hanim_LeftHandFront View"),
                  position : new SFVec3f([0.3,0.75,0.45]),
                  centerOfRotation : new SFVec3f([0.1959,0.8694,-0.0521])}),

                new Viewpoint({
                  DEF : new SFString("hanim_InclinedView2"),
                  description : new SFString("hanim_Inclined View2"),
                  position : new SFVec3f([-1.62,1.05,2.06]),
                  orientation : new SFRotation([-0.113,-0.993,0.0347,0.671]),
                  centerOfRotation : new SFVec3f([0,0.824,0.0277])}),

                new Viewpoint({
                  DEF : new SFString("hanim_IFrontView"),
                  description : new SFString("hanim_Front View2"),
                  position : new SFVec3f([0,0.854,1.575]),
                  centerOfRotation : new SFVec3f([0,0.824,0.0277])}),

                new Viewpoint({
                  DEF : new SFString("hanim_ISideView"),
                  description : new SFString("hanim_Side View2"),
                  position : new SFVec3f([1.5929,0.854,0]),
                  orientation : new SFRotation([0,1,0,1.5708]),
                  centerOfRotation : new SFVec3f([0,0.824,0.0277])}),

                new Viewpoint({
                  DEF : new SFString("hanim_IHeadFront"),
                  description : new SFString("hanim_HeadFront View"),
                  position : new SFVec3f([0,1.5,1]),
                  centerOfRotation : new SFVec3f([0.0066,1.5357,-0.0143])}),

                new Viewpoint({
                  DEF : new SFString("hanim_IChestFront"),
                  description : new SFString("hanim_ChestFront View"),
                  position : new SFVec3f([0,1.2,1]),
                  centerOfRotation : new SFVec3f([0.0066,1.5357,-0.0143])}),

                new Viewpoint({
                  DEF : new SFString("hanim_IPelvisFront"),
                  description : new SFString("hanim_PelvisFront View"),
                  position : new SFVec3f([0,0.8,1]),
                  centerOfRotation : new SFVec3f([0,0.824,0.0277])}),

                new Viewpoint({
                  DEF : new SFString("hanim_IKneesFront"),
                  description : new SFString("hanim_KneesFront View"),
                  position : new SFVec3f([0,0.4,1]),
                  centerOfRotation : new SFVec3f([0,0.824,0.0277])})])}),

            new Group({
              DEF : new SFString("StandAnimation"),
              children : new MFNode([
                new TimeSensor({
                  DEF : new SFString("StandTimer"),
                  cycleInterval : new SFTime(5.73),
                  loop : new SFBool(true)}),

                new OrientationInterpolator({
                  DEF : new SFString("Stand_r_metatarsalPitch"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.7,1]),
                  keyValue : new MFRotation([1,0,0,0,-1,0,0,0.015,1,0,0,0.17,-1,0,0,0.025,1,0,0,0.01,1,0,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stand_r_ankleRotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stand_r_kneeRotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stand_r_hipRotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stand_l_ankleRotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stand_l_kneeRotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stand_l_hipRotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stand_r_wristRotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,-1,0.25,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stand_r_elbowRotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stand_r_shoulderRotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stand_l_wristRotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stand_l_elbowRotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stand_l_shoulderRotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stand_headRotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stand_neckRotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,-1,0,0,0.5,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stand_l_eyeballRotInterp"),
                  key : new MFFloat([0,0.4,0.7,1]),
                  keyValue : new MFRotation([0,0,1,0,-1,0,0,0.5,1,0,0,0.45,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stand_r_eyeballRotInterp"),
                  key : new MFFloat([0,0.4,0.7,1]),
                  keyValue : new MFRotation([0,0,1,0,-1,0,0,0.5,1,0,0,0.45,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stand_lower_bodyRotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stand_upper_bodyRotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stand_whole_bodyRotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new PositionInterpolator({
                  DEF : new SFString("Stand_whole_bodyTransInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFVec3f([0,0,0,0,0,0,0,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stand_l_sternoclavicularRoll"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stand_l_acromioclavicularRoll"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stand_r_sternoclavicularRoll"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stand_r_acromioclavicularRoll"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stand_sacroiliacYaw"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stand_vl5Yaw"),
                  key : new MFFloat([0,0.2,0.4,0.5,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stand_vc6Yaw"),
                  key : new MFFloat([0,0.2,0.4,0.5,0.6,0.8,1]),
                  keyValue : new MFRotation([0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,-1,0,0,0,0,-1,0,0,0,1,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stand_l_thumb1Pitch"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stand_r_thumb1Pitch"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([1,0,0,0,1,0,0,0.5,1,0,0,0.1,1,0,0,0.27,1,0,0,0.2,1,0,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stand_r_index1Roll"),
                  key : new MFFloat([0,0.2,0.4,0.5,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0.1,0,0,1,0.2,0,0,1,0.3,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stand_r_index2Roll"),
                  key : new MFFloat([0,0.2,0.4,0.5,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0.4,0,0,1,0.32,0,0,1,0.25,0,0,1,0.2,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stand_r_index3Roll"),
                  key : new MFFloat([0,0.2,0.4,0.5,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0.2,0,0,1,0.3,0,0,1,0.35,0,0,1,0.2,0,0,1,0])})])}),

            new Group({
              DEF : new SFString("PitchesAnimation"),
              children : new MFNode([
                new TimeSensor({
                  DEF : new SFString("PitchTimer"),
                  cycleInterval : new SFTime(5.73),
                  loop : new SFBool(true)}),

                new OrientationInterpolator({
                  DEF : new SFString("Pitch_r_metatarsalPitch"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.7,1]),
                  keyValue : new MFRotation([1,0,0,0,-1,0,0,0.5,-1,0,0,0.7,1,0,0,0.75,-1,0,0,0.2,1,0,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Pitches_r_ankleRotInterp"),
                  key : new MFFloat([0,0.25,0.5,0.75,1]),
                  keyValue : new MFRotation([0,0,1,0,1,0,0,1.5,0,0,1,0,-1,0,0,1.5,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Pitches_r_kneeRotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Pitches_r_hipRotInterp"),
                  key : new MFFloat([0,0.25,0.5,0.75,1]),
                  keyValue : new MFRotation([0,0,1,0,-1,0,0,1.5,0,0,1,0,1,0,0,1.5,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Pitches_l_ankleRotInterp"),
                  key : new MFFloat([0,0.25,0.5,0.75,1]),
                  keyValue : new MFRotation([0,0,1,0,-1,0,0,1.5,0,0,1,0,1,0,0,1.5,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Pitches_l_kneeRotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Pitches_l_hipRotInterp"),
                  key : new MFFloat([0,0.25,0.5,0.75,1]),
                  keyValue : new MFRotation([0,0,1,0,1,0,0,1.5,0,0,1,0,-1,0,0,1.5,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Pitches_r_wristRotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Pitches_r_elbowRotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Pitches_r_shoulderRotInterp"),
                  key : new MFFloat([0,0.25,0.5,0.75,1]),
                  keyValue : new MFRotation([0,0,1,0,1,0,0,1.5,0,0,1,0,-1,0,0,1.5,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Pitches_l_wristRotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Pitches_l_elbowRotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Pitches_l_shoulderRotInterp"),
                  key : new MFFloat([0,0.25,0.5,0.75,1]),
                  keyValue : new MFRotation([0,0,1,0,-1,0,0,1.5,0,0,1,0,1,0,0,1.5,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Pitches_headRotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Pitches_neckRotInterp"),
                  key : new MFFloat([0,0.25,0.55,1]),
                  keyValue : new MFRotation([0,0,1,0,1,0,0,0.55,-1,0,0,1.05,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Pitches_lower_bodyRotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Pitches_upper_bodyRotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Pitches_whole_bodyRotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new PositionInterpolator({
                  DEF : new SFString("Pitches_whole_bodyTransInterp"),
                  key : new MFFloat([0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1]),
                  keyValue : new MFVec3f([0,0,0,0,-0.15,0,0,-0.7,0,0,-0.15,0,0,0,0,0,-0.15,0,0,-0.7,0,0,-0.15,0,0,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Pitch_l_sternoclavicularRoll"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Pitch_l_acromioclavicularRoll"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Pitch_r_sternoclavicularRoll"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Pitch_r_acromioclavicularRoll"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Pitch_sacroiliacYaw"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Pitch_vl5Yaw"),
                  key : new MFFloat([0,0.2,0.4,0.5,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Pitch_vc6Yaw"),
                  key : new MFFloat([0,0.2,0.4,0.5,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Pitch_l_thumb1Pitch"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([1,0,0,0,1,0,0,0.25,1,0,0,0.3,1,0,0,0.27,1,0,0,0.2,1,0,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Pitch_r_thumb1Pitch"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([1,0,0,0,1,0,0,0.25,1,0,0,0.3,1,0,0,0.27,1,0,0,0.2,1,0,0,0])})])}),

            new Group({
              DEF : new SFString("YawsAnimation"),
              children : new MFNode([
                new TimeSensor({
                  DEF : new SFString("YawTimer"),
                  cycleInterval : new SFTime(5.73),
                  loop : new SFBool(true)}),

                new OrientationInterpolator({
                  DEF : new SFString("Yaw_r_metatarsalPitch"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.7,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Yaws_r_ankleRotInterp"),
                  key : new MFFloat([0,0.25,0.5,0.75,1]),
                  keyValue : new MFRotation([0,0,1,0,0,-1,0,1.5,0,0,1,0,0,1,0,1.5,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Yaws_r_kneeRotInterp"),
                  key : new MFFloat([0,0.25,0.5,0.75,1]),
                  keyValue : new MFRotation([0,0,1,0,0,1,0,1.5,0,0,1,0,0,-1,0,1.5,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Yaws_r_hipRotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Yaws_l_ankleRotInterp"),
                  key : new MFFloat([0,0.25,0.5,0.75,1]),
                  keyValue : new MFRotation([0,0,1,0,0,1,0,1.5,0,0,1,0,0,-1,0,1.5,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Yaws_l_kneeRotInterp"),
                  key : new MFFloat([0,0.25,0.5,0.75,1]),
                  keyValue : new MFRotation([0,0,1,0,0,-1,0,1.5,0,0,1,0,0,1,0,1.5,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Yaws_l_hipRotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Yaws_r_wristRotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Yaws_r_elbowRotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Yaws_r_shoulderRotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Yaws_l_wristRotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Yaws_l_elbowRotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Yaws_l_shoulderRotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Yaws_headRotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Yaws_neckRotInterp"),
                  key : new MFFloat([0,0.25,0.5,0.75,1]),
                  keyValue : new MFRotation([0,0,1,0,0,1,0,1.5,0,0,1,0,0,-1,0,1.5,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Yaws_upper_bodyRotInterp"),
                  key : new MFFloat([0,0.25,0.5,0.75,1]),
                  keyValue : new MFRotation([0,0,1,0,0,-1,0,1.5,0,0,1,0,0,1,0,1.5,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Yaws_lower_bodyRotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Yaws_whole_bodyRotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new PositionInterpolator({
                  DEF : new SFString("Yaws_whole_bodyTransInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFVec3f([0,0,0,0,0,0,0,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Yaw_l_sternoclavicularRoll"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Yaw_l_acromioclavicularRoll"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Yaw_r_sternoclavicularRoll"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Yaw_r_acromioclavicularRoll"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Yaw_sacroiliacYaw"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,1,0,0,0,-1,0,0.1,0,1,0,0,0,1,0,0.24,0,-1,0,0.4,0,1,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Yaw_vl5Yaw"),
                  key : new MFFloat([0,0.2,0.4,0.5,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Yaw_vc6Yaw"),
                  key : new MFFloat([0,0.2,0.4,0.5,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Yaw_l_thumb1Pitch"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Yaw_r_thumb1Pitch"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])})])}),

            new Group({
              DEF : new SFString("RollsAnimation"),
              children : new MFNode([
                new TimeSensor({
                  DEF : new SFString("RollTimer"),
                  cycleInterval : new SFTime(5.73),
                  loop : new SFBool(true)}),

                new OrientationInterpolator({
                  DEF : new SFString("Roll_r_metatarsalPitch"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.7,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Rolls_r_ankleRotInterp"),
                  key : new MFFloat([0,0.25,0.5,0.75,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,1.5,0,0,1,0,0,0,1,1.5,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Rolls_r_kneeRotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Rolls_r_hipRotInterp"),
                  key : new MFFloat([0,0.25,0.5,0.75,1]),
                  keyValue : new MFRotation([0,0,-1,0,0,0,-1,1.5,0,0,1,0,0,0,-1,1.5,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Rolls_l_ankleRotInterp"),
                  key : new MFFloat([0,0.25,0.5,0.75,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,-1,1.5,0,0,1,0,0,0,-1,1.5,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Rolls_l_kneeRotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Rolls_l_hipRotInterp"),
                  key : new MFFloat([0,0.25,0.5,0.75,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,1.5,0,0,1,0,0,0,1,1.5,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Rolls_r_wristRotInterp"),
                  key : new MFFloat([0,0.25,0.5,0.75,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,-1,1.5,0,0,1,0,0,0,1,1.5,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Rolls_r_elbowRotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Rolls_r_shoulderRotInterp"),
                  key : new MFFloat([0,0.25,0.5,0.75,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,-1,1.5,0,0,-1,3,0,0,-1,1.5,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Rolls_l_wristRotInterp"),
                  key : new MFFloat([0,0.25,0.5,0.75,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,1.5,0,0,1,0,0,0,-1,1.5,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Rolls_l_elbowRotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Rolls_l_shoulderRotInterp"),
                  key : new MFFloat([0,0.25,0.5,0.75,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,1.5,0,0,1,3,0,0,1,1.5,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Rolls_headRotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Rolls_neckRotInterp"),
                  key : new MFFloat([0,0.25,0.5,0.75,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,1.25,0,0,1,0,0,0,-1,1.25,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Rolls_lower_bodyRotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Rolls_upper_bodyRotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Rolls_whole_bodyRotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new PositionInterpolator({
                  DEF : new SFString("Rolls_whole_bodyTransInterp"),
                  key : new MFFloat([0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1]),
                  keyValue : new MFVec3f([0,0,0,0,-0.25,0,0,-0.8,0,0,-0.25,0,0,0,0,0,-0.25,0,0,-0.8,0,0,-0.25,0,0,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Roll_l_sternoclavicularRoll"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0.2,0,0,1,0.22,0,0,1,0.2,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Roll_l_acromioclavicularRoll"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0.05,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Roll_r_sternoclavicularRoll"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,-0.2,0,0,1,-0.22,0,0,1,-0.2,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Roll_r_acromioclavicularRoll"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,-0.05,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Roll_sacroiliacYaw"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Roll_vl5Yaw"),
                  key : new MFFloat([0,0.2,0.4,0.5,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Roll_vc6Yaw"),
                  key : new MFFloat([0,0.2,0.4,0.5,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Roll_l_thumb1Pitch"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Roll_r_thumb1Pitch"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])})])}),

            new Group({
              DEF : new SFString("WalkAnimation"),
              children : new MFNode([
                new TimeSensor({
                  DEF : new SFString("WalkTimer"),
                  cycleInterval : new SFTime(1.73),
                  loop : new SFBool(true)}),

                new OrientationInterpolator({
                  DEF : new SFString("Walk_r_metatarsalPitch"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.7,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Walk_r_ankleRotInterp"),
                  key : new MFFloat([0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1]),
                  keyValue : new MFRotation([0,0,1,0,-1,0,0,0.3533,-1,0,0,0.1072,1,0,0,0.2612,1,0,0,0.1268,-1,0,0,0.01793,-1,0,0,0.05824,-1,0,0,0.2398,-1,0,0,0.35,-1,0,0,0.3322,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Walk_r_kneeRotInterp"),
                  key : new MFFloat([0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1]),
                  keyValue : new MFRotation([1,0,0,0.8573,1,0,0,0.8926,1,0,0,0.5351,1,0,0,0.1756,1,0,0,0.1194,1,0,0,0.3153,1,0,0,0.09354,1,0,0,0.08558,1,0,0,0.2475,1,0,0,0.8573])}),

                new OrientationInterpolator({
                  DEF : new SFString("Walk_r_hipRotInterp"),
                  key : new MFFloat([0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1]),
                  keyValue : new MFRotation([-0.5831,0.03511,0.8116,0.1481,-0.995,0.02296,0.09674,0.4683,-1,0.00192,0.007964,0.4732,-0.998,-0.0158,-0.06102,0.5079,-0.9911,-0.03541,-0.1286,0.5419,-0.9131,-0.06243,-0.403,0.3361,-0.4306,-0.07962,-0.899,0.07038,1,0,0,0.2571,0.9891,-0.02805,0.1444,0.3879,-0.5831,0.03511,0.8116,0.1481])}),

                new OrientationInterpolator({
                  DEF : new SFString("Walk_l_ankleRotInterp"),
                  key : new MFFloat([0,0.125,0.2083,0.375,0.6667,0.9167,1]),
                  keyValue : new MFRotation([-1,0,0,0.06714,-1,0,0,0.2152,-1,0,0,0.3184,-1,0,0,0.4717,-1,0,0,0.2912,1,0,0,0.1222,-1,0,0,0.06714])}),

                new OrientationInterpolator({
                  DEF : new SFString("Walk_l_kneeRotInterp"),
                  key : new MFFloat([0,0.2083,0.375,0.5,0.6667,0.7917,0.9167,1]),
                  keyValue : new MFRotation([1,0,0,0.3226,1,0,0,0.1556,1,0,0,0.08678,1,0,0,0.8751,1,0,0,1.131,1,0,0,0.09961,1,0,0,0.3942,1,0,0,0.3226])}),

                new OrientationInterpolator({
                  DEF : new SFString("Walk_l_hipRotInterp"),
                  key : new MFFloat([0,0.25,0.375,0.5,0.6667,0.7917,0.9167,1]),
                  keyValue : new MFRotation([-0.873,0.06094,0.484,0.2865,0.9963,-0.01057,0.08481,0.2488,0.9965,0.01591,-0.08222,0.3836,-0.7018,-0.03223,-0.7117,0.1289,-1,0,0,0.5518,-0.9964,0.02231,0.0817,0.5351,-0.9809,0.04912,0.1881,0.5204,-0.873,0.06094,0.484,0.2865])}),

                new OrientationInterpolator({
                  DEF : new SFString("Walk_lower_bodyRotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,-1,0.1056,0,0,1,0.09018,0,0,-1,0.1056])}),

                new OrientationInterpolator({
                  DEF : new SFString("Walk_r_wristRotInterp"),
                  key : new MFFloat([0,0.375,0.9167,1]),
                  keyValue : new MFRotation([-0.8129,0.4759,-0.3357,0.1346,0.1533,-0.9878,0.02582,0.3902,-0.5701,0.7604,-0.311,0.366,-0.8129,0.4759,-0.3357,0.1346])}),

                new OrientationInterpolator({
                  DEF : new SFString("Walk_r_elbowRotInterp"),
                  key : new MFFloat([0,0.375,0.9167,1]),
                  keyValue : new MFRotation([-1,0,0,0.411508,-1,0,0,0.0925011,-1,0,0,0.572568,-1,0,0,0.411508])}),

                new OrientationInterpolator({
                  DEF : new SFString("Walk_r_shoulderRotInterp"),
                  key : new MFFloat([0,0.375,0.9167,1]),
                  keyValue : new MFRotation([-1,0,0,0.09346,1,0,0,0.3197,-1,0,0,0.1564,-1,0,0,0.09346])}),

                new OrientationInterpolator({
                  DEF : new SFString("Walk_l_wristRotInterp"),
                  key : new MFFloat([0,0.375,0.9167,1]),
                  keyValue : new MFRotation([0,-1,0,0.461076,-0.330195,-0.927451,0.175516,0.538852,0.0327774,-0.999314,-0.0172185,0.492033,0,-1,0,0.461076])}),

                new OrientationInterpolator({
                  DEF : new SFString("Walk_l_elbowRotInterp"),
                  key : new MFFloat([0,0.375,0.9167,1]),
                  keyValue : new MFRotation([-1,0,0,0.0659878,-1,0,0,0.488383,-1,0,0,0.0177536,-1,0,0,0.0659878])}),

                new OrientationInterpolator({
                  DEF : new SFString("Walk_l_shoulderRotInterp"),
                  key : new MFFloat([0,0.375,0.9167,1]),
                  keyValue : new MFRotation([1,0,0,0.1189,-1,0,0,0.1861,1,0,0,0.3357,1,0,0,0.1189])}),

                new OrientationInterpolator({
                  DEF : new SFString("Walk_headRotInterp"),
                  key : new MFFloat([0,0.375,0.4167,0.5,0.5833,0.6667,0.75,0.8333,0.9167,1]),
                  keyValue : new MFRotation([0,-1,0,0.08642,0,1,0,0.1825,0,1,0,0.1505,0,1,0,0.1053,0,1,0,0.04391,0,-1,0,0.03119,0,-1,0,0.07936,0,-1,0,0.1616,0,-1,0,0.155,0,-1,0,0.08642])}),

                new OrientationInterpolator({
                  DEF : new SFString("Walk_neckRotInterp"),
                  key : new MFFloat([0,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Walk_upper_bodyRotInterp"),
                  key : new MFFloat([0,0.2083,0.375,0.75,0.8333,1]),
                  keyValue : new MFRotation([0,1,0,0.0826,-0.01972,-0.5974,0.8017,0.08231,0.009296,-0.9648,0.2627,0.1734,-0.01238,0.9549,-0.2968,0.08732,-0.008125,0.9691,-0.2463,0.158,0,1,0,0.0826])}),

                new OrientationInterpolator({
                  DEF : new SFString("Walk_whole_bodyRotInterp"),
                  key : new MFFloat([0,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0])}),

                new PositionInterpolator({
                  DEF : new SFString("Walk_whole_bodyTranInterp"),
                  key : new MFFloat([0,0.04167,0.125,0.1667,0.2083,0.25,0.2917,0.375,0.4583,0.5,0.5417,0.5833,0.625,0.7083,0.75,0.7917,0.875,0.9167,1]),
                  keyValue : new MFVec3f([0,-0.00928,0,0,-0.003858,0,0,-0.008847,0,0,-0.01486,0,0,-0.02641,0,0,-0.03934,0,0,-0.0502,0,0,-0.07469,0,0,-0.02732,0,0,-0.01608,0,0,-0.01129,0,0,-0.005819,0,0,-0.002004,0,0,-0.002579,0,0,-0.0143,0,0,-0.03799,0,0,-0.05648,0,0,-0.045,0,0,-0.00928,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Walk_l_sternoclavicularRoll"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Walk_l_acromioclavicularRoll"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Walk_r_sternoclavicularRoll"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Walk_r_acromioclavicularRoll"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Walk_sacroiliacYaw"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Walk_vl5Yaw"),
                  key : new MFFloat([0,0.2,0.4,0.5,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Walk_vc6Yaw"),
                  key : new MFFloat([0,0.2,0.4,0.5,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Walk_l_thumb1Pitch"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([1,0,0,0,1,0,0,0.25,1,0,0,0.5,1,0,0,0.7,1,0,0,0.2,1,0,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Walk_r_thumb1Pitch"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([1,0,0,0,1,0,0,0.25,1,0,0,0.5,1,0,0,0.7,1,0,0,0.2,1,0,0,0])})])}),

            new Group({
              DEF : new SFString("RunAnimation"),
              children : new MFNode([
                new TimeSensor({
                  DEF : new SFString("RunTimer"),
                  cycleInterval : new SFTime(0.9),
                  loop : new SFBool(true)}),

                new OrientationInterpolator({
                  DEF : new SFString("Run_r_metatarsalPitch"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.7,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Run_l_hipRotInterp_Run"),
                  key : new MFFloat([0,0.2182,0.4909,0.7455,1]),
                  keyValue : new MFRotation([-0.99,0.033,0.04,1.42,-0.99,0.1328,0.067,0.42,0.99,0.014,0.009,0.9,-0.99,0.0703,0.05,0.7,-0.99,0.033,0.04,1.42])}),

                new OrientationInterpolator({
                  DEF : new SFString("Run_l_kneeRotInterp_Run"),
                  key : new MFFloat([0,0.2182,0.4909,0.7455,1]),
                  keyValue : new MFRotation([1,0,0,1.01,1,0,0,0.426,1,0,0,0.705,1,0,0,2.179,1,0,0,1.01])}),

                new OrientationInterpolator({
                  DEF : new SFString("Run_l_ankleRotInterp_Run"),
                  key : new MFFloat([0,0.22,0.3,0.4,1]),
                  keyValue : new MFRotation([1,0,0,0.0374,-1,0,0,0.1037,-1,0,0,0.4328,1,0,0,0.1929,1,0,0,0.03574])}),

                new OrientationInterpolator({
                  DEF : new SFString("Run_r_hipRotInterp_Run"),
                  key : new MFFloat([0,0.2545,0.4909,0.7091,1]),
                  keyValue : new MFRotation([0.99,-0.014,0.009,0.9,-0.99,-0.0703,-0.05,0.7,-0.99,-0.033,0.04,1.42,-0.99,-0.1328,-0.067,0.42,0.99,-0.014,0.009,0.9])}),

                new OrientationInterpolator({
                  DEF : new SFString("Run_r_kneeRotInterp_Run"),
                  key : new MFFloat([0,0.2545,0.4909,0.7091,1]),
                  keyValue : new MFRotation([1,0,0,0.705,1,0,0,2.179,1,0,0,1.01,1,0,0,0.426,1,0,0,0.705])}),

                new OrientationInterpolator({
                  DEF : new SFString("Run_r_ankleRotInterp_Run"),
                  key : new MFFloat([0,0.4,0.71,0.8,0.82,1]),
                  keyValue : new MFRotation([1,0,0,0.2323,-1,0,0,0.07843,-1,0,0,0.32,-1,0,0,0.374,-1,0,0,0.3478,1,0,0,0.2323])}),

                new OrientationInterpolator({
                  DEF : new SFString("Run_l_shoulderRotInterp_Run"),
                  key : new MFFloat([0,0.2182,0.4909,0.7455,1]),
                  keyValue : new MFRotation([0.99,-0.074,0.25,1.5,0.99,-0.092,0.44,0.3,-0.99,0.136,0.25,0.85,0.99,-0.081,0.38,0.4,0.99,-0.074,0.25,1.5])}),

                new OrientationInterpolator({
                  DEF : new SFString("Run_l_elbowRotInterp_Run"),
                  key : new MFFloat([0,0.2182,0.4909,0.7455,1]),
                  keyValue : new MFRotation([-1,0,0,1.85,-0.99,-0.19,0.18,1.35,-1,0,0,0.975,-0.99,-0.09,-0.02,1.55,-1,0,0,1.85])}),

                new OrientationInterpolator({
                  DEF : new SFString("Run_l_wristRotInterp_Run"),
                  key : new MFFloat([0,0.25,0.5,0.75,1]),
                  keyValue : new MFRotation([-0.25,-1,0.08,0.14,0.25,1,0.08,0.14,0,0,1,0,-0.25,1,0.08,-0.14,-0.25,1,0.08,0.14])}),

                new OrientationInterpolator({
                  DEF : new SFString("Run_r_shoulderRotInterp_Run"),
                  key : new MFFloat([0,0.2545,0.4909,0.7091,1]),
                  keyValue : new MFRotation([-0.99,-0.136,-0.25,0.85,0.99,0.081,-0.38,0.4,0.99,0.074,-0.25,1.5,0.99,0.081,-0.38,0.4,-0.99,-0.136,-0.25,0.85])}),

                new OrientationInterpolator({
                  DEF : new SFString("Run_r_elbowRotInterp_Run"),
                  key : new MFFloat([0,0.2545,0.4909,0.7091,1]),
                  keyValue : new MFRotation([-1,0,0,0.975,-0.99,0.09,0.02,1.55,-1,0,0,1.85,-0.99,0.19,-0.18,1.35,-1,0,0,0.975])}),

                new OrientationInterpolator({
                  DEF : new SFString("Run_r_wristRotInterp_Run"),
                  key : new MFFloat([0,1]),
                  keyValue : new MFRotation([-0.917742,-0.237244,-0.318536,0.214273,-0.917742,-0.237244,-0.318536,0.214273])}),

                new OrientationInterpolator({
                  DEF : new SFString("Run_lower_bodyRotInterp_Run"),
                  key : new MFFloat([0,0.2182,0.4909,0.7455,1]),
                  keyValue : new MFRotation([0,-1,0,0.125,0,0,1,0,0,1,0,0.125,0,0,1,0,0,-1,0,0.125])}),

                new OrientationInterpolator({
                  DEF : new SFString("Run_headRotInterp_Run"),
                  key : new MFFloat([0,0.2545,0.4909,0.7091,1]),
                  keyValue : new MFRotation([1,0,0,0.08,1,0,0,0.12,1,0,0,0.3,1,0,0,0.3,1,0,0,0.08])}),

                new OrientationInterpolator({
                  DEF : new SFString("Run_neckRotInterp_Run"),
                  key : new MFFloat([0,0.2545,0.4909,0.7091,1]),
                  keyValue : new MFRotation([0.7,0,0,0.4,-0.7,-0.7,0,0.4,0,0,0,0.4,-0.7,0.7,0,0.4,0.7,0,0,0.4])}),

                new OrientationInterpolator({
                  DEF : new SFString("Run_upper_bodyRotInterp_Run"),
                  key : new MFFloat([0,0.2545,0.4909,0.7636,1]),
                  keyValue : new MFRotation([0.97,0.65,0.086,0.5,0.9,0.003,-0.02,0.38,0.95,-0.68,-0.086,0.5,0.9,0.004,-0.025,0.4,0.97,0.65,0.086,0.5])}),

                new OrientationInterpolator({
                  DEF : new SFString("Run_whole_bodyRotInterp_Run"),
                  key : new MFFloat([0,0.25,0.5,0.75,1]),
                  keyValue : new MFRotation([1,0,0,0.06,1,0,0,0.167,1,0,0,0.06,1,0,0,0.168,1,0,0,0.06])}),

                new PositionInterpolator({
                  DEF : new SFString("Run_whole_bodyTranInterp_Run"),
                  key : new MFFloat([0,0.22,0.3,0.31,0.5,0.69,0.7,0.78,1]),
                  keyValue : new MFVec3f([0,-0.01,0,0,-0.037,0,0,-0.049,0,0,-0.037,0,0,-0.01,0,0,-0.037,0,0,-0.049,0,0,-0.037,0,0,-0.01,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Run_l_sternoclavicularRoll"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Run_l_acromioclavicularRoll"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Run_r_sternoclavicularRoll"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Run_r_acromioclavicularRoll"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Run_sacroiliacYaw"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Run_vl5Yaw"),
                  key : new MFFloat([0,0.2,0.4,0.5,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Run_vc6Yaw"),
                  key : new MFFloat([0,0.2,0.4,0.5,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Run_l_thumb1Pitch"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([1,0,0,0,1,0,0,0.25,1,0,0,0.7,1,0,0,0.27,1,0,0,0.2,1,0,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Run_r_thumb1Pitch"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([1,0,0,0,1,0,0,0.25,1,0,0,0.7,1,0,0,0.27,1,0,0,0.2,1,0,0,0])})])}),

            new Group({
              DEF : new SFString("JumpAnimation"),
              children : new MFNode([
                new TimeSensor({
                  DEF : new SFString("JumpTimer"),
                  cycleInterval : new SFTime(3.73),
                  loop : new SFBool(true)}),

                new OrientationInterpolator({
                  DEF : new SFString("Jump_r_metatarsalPitch"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.7,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Jump_r_ankleRotInterp"),
                  key : new MFFloat([0,0.1,0.15,0.25,0.28,0.32,0.35,0.64,0.76,0.84,0.88,0.92,0.96,1]),
                  keyValue : new MFRotation([0,0,1,0,-1,0,0,0.6735,-1,0,0,0.6735,-1,0,0,0.3527,-1,0,0,0.3038,-1,0,0,0.07964,1,0,0,1.3,1,0,0,0.6509,1,0,0,0.3001,-1,0,0,0.2087,-1,0,0,0.3756,-1,0,0,0.3279,-1,0,0,0.1193,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Jump_r_kneeRotInterp"),
                  key : new MFFloat([0,0.2,0.25,0.3,0.64,0.76,0.88,1]),
                  keyValue : new MFRotation([0,0,1,0,1,0,0,2.5,1,0,0,1.7,0,0,1,0,1,0,0,0.9507,1,0,0,0.5845,1,0,0,0.9054,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Jump_r_hipRotInterp"),
                  key : new MFFloat([0,0.18,0.24,0.26,0.28,0.32,0.48,0.64,0.76,0.88,1]),
                  keyValue : new MFRotation([0,0,1,0,-1,0,0,1.63,-1,0,0,1.7,-1,0,0,1.55,-1,0,0,0.8943,-1,0,0,0.3698,0,0,1,0,-1,0,0,0.4963,-1,0,0,0.3829,-1,0,0,0.5169,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Jump_l_ankleRotInterp"),
                  key : new MFFloat([0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.84,0.88,0.92,0.96,1]),
                  keyValue : new MFRotation([0,0,1,0,-1,0,0,0.625,-1,0,0,0.625,-1,0,0,0.3364,-1,0,0,0.2742,-1,0,0,0.05078,1,0,0,0.2833,1,0,0,0.6667,1,0,0,0.2833,-1,0,0,0.2108,-1,0,0,0.375,-1,0,0,0.3146,-1,0,0,0.1174,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Jump_l_kneeRotInterp"),
                  key : new MFFloat([0,0.28,0.32,0.48,0.64,0.76,0.88,1]),
                  keyValue : new MFRotation([0,0,1,0,1,0,0,2.047,1,0,0,2.047,0,0,1,0,1,0,0,1.566,1,0,0,0.5913,1,0,0,0.9235,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Jump_l_hipRotInterp"),
                  key : new MFFloat([0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.88,1]),
                  keyValue : new MFRotation([0,0,1,0,1,0,0,4.349,1,0,0,4.349,1,0,0,4.615,-1,0,0,0.9136,-1,0,0,0.3614,0,0,1,0,-1,0,0,0.7869,-1,0,0,0.3918,-1,0,0,0.5433,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Jump_lower_bodyRotInterp"),
                  key : new MFFloat([0,0.28,0.32,0.48,0.76,1]),
                  keyValue : new MFRotation([0,0,1,0,1,0,0,0.1892,1,0,0,0.1892,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Jump_r_wristRotInterp"),
                  key : new MFFloat([0,0.28,0.32,0.64,0.76,1]),
                  keyValue : new MFRotation([0,0,1,0,-0.0585279,0.983903,-0.168849,1.85956,-0.0585279,0.983903,-0.168849,1.85956,-0.00222418,0.99801,-0.0630095,1.46072,0,1,0,0.497349,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Jump_r_elbowRotInterp"),
                  key : new MFFloat([0,0.28,0.32,0.64,0.76,1]),
                  keyValue : new MFRotation([0,0,1,0,-1,0,0,0.04151,-1,0,0,0.04151,-1,0,0,0.5855,-1,0,0,0.5852,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Jump_r_shoulderRotInterp"),
                  key : new MFFloat([0,0.28,0.32,0.64,0.76,0.88,1]),
                  keyValue : new MFRotation([0,0,1,0,0.9992,0.02042,0.03558,4.688,0.9992,0.02042,0.03558,4.688,0.9989,-0.04623,0.005159,4.079,-0.8687,-0.2525,-0.4261,1.501,-0.941,-0.2893,-0.1754,0.4788,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Jump_l_wristRotInterp"),
                  key : new MFFloat([0,0.48,0.52,0.64,0.76,0.88,1]),
                  keyValue : new MFRotation([0,0,1,0,0.0672928,0.989475,-0.128107,4.15574,0.0672928,0.989475,-0.128107,4.15574,0.00364942,0.999901,0.0135896,4.5822,0,-1,0,0.655922,-0.00050618,-0.999999,0.0012782,1.28397,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Jump_l_elbowRotInterp"),
                  key : new MFFloat([0,0.28,0.32,0.58,0.72,1]),
                  keyValue : new MFRotation([0,0,1,0,-1,0,0,1.13,-1,0,0,1.7,-1,0,0,1.7,-1,0,0,0.4,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Jump_l_shoulderRotInterp"),
                  key : new MFFloat([0,0.28,0.32,0.64,0.76,0.88,1]),
                  keyValue : new MFRotation([0,0,1,0,-0.9987,0.02554,0.04498,1.57,-0.9987,0.02554,0.04498,1.57,1,0.0004113,0.003055,4.114,-0.8413,0.3238,0.4329,1.453,-0.877,0.4198,0.2337,0.6009,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Jump_headRotInterp"),
                  key : new MFFloat([0,0.28,0.32,0.48,0.76,1]),
                  keyValue : new MFRotation([0,0,1,0,-1,0,0,0.5989,-1,0,0,0.5989,-1,0,0,0.3216,1,0,0,0.06503,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Jump_neckRotInterp"),
                  key : new MFFloat([0,0.28,0.32,0.48,0.76,1]),
                  keyValue : new MFRotation([0,0,1,0,-1,0,0,0.1942,-1,0,0,0.1942,0,0,1,0,1,0,0,0.2284,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Jump_upper_bodyRotInterp"),
                  key : new MFFloat([0,0.22,0.28,0.34,0.71,0.88,1]),
                  keyValue : new MFRotation([0,0,1,0,1,0,0,1.05,1,0,0,1.051,-1,0,0,0.257,1,0,0,0.2171,1,0,0,0.3465,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Jump_whole_bodyRotInterp"),
                  key : new MFFloat([0,0.28,0.32,0.48,0.64,0.76,1]),
                  keyValue : new MFRotation([0,0,1,0,1,0,0,0.3273,1,0,0,0.3273,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new PositionInterpolator({
                  DEF : new SFString("Jump_whole_bodyTranInterp"),
                  key : new MFFloat([0,0.04,0.07,0.11,0.15,0.19,0.22,0.25,0.27,0.31,0.33,0.35,0.38,0.53,0.544,0.76,0.8,0.84,0.88,0.92,0.96,1]),
                  keyValue : new MFVec3f([0,0,0,0,-0.01264,-0.01289,0,-0.04712,-0.03738,-0.0003345,-0.1049,-0.05353,-0.0005712,-0.1892,-0.06561,-0.0008233,-0.286,-0.06276,-0.0009591,-0.3795,-0.05148,-0.00106,-0.4484,-0.03656,-0.00106,-0.4484,-0.03656,-0.001122,-0.25,-0.1499,-0.0008616,-0.05,-0.06358,-0.0005128,0.15,-0.05488,0.0004779,0.55,0.02732,0.0001728,1.385,0.006873,0.00017,1.395,0.0069,0,0.35,0.02148,0,-0.01299,-0.01057,0,-0.06932,-0.01064,0.0001365,-0.1037,-0.005059,0.0001279,-0.07198,-0.007596,0.000141,-0.01626,-0.004935,0,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Jump_l_sternoclavicularRoll"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0.2,0,0,1,0.22,0,0,1,0.2,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Jump_l_acromioclavicularRoll"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0.05,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Jump_r_sternoclavicularRoll"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,-0.2,0,0,1,-0.22,0,0,1,-0.2,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Jump_r_acromioclavicularRoll"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,-0.05,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Jump_sacroiliacYaw"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,1,0,0,0,-1,0,0.1,0,1,0,0,0,1,-1,0.24,0,-1,0,0.4,0,1,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Jump_vl5Yaw"),
                  key : new MFFloat([0,0.2,0.4,0.5,0.6,0.8,1]),
                  keyValue : new MFRotation([0,1,0,0,0,1,0,-0.1,0,1,0,0,0,1,0,0,1,0,0,0.6,0,1,0,0.1,0,1,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Jump_vc6Yaw"),
                  key : new MFFloat([0,0.2,0.4,0.5,0.6,0.8,1]),
                  keyValue : new MFRotation([0,1,0,0,0,1,0,0.8,0,1,0,0,0,1,0,0,-1,0,0,0.6,0,-1,0,0.8,0,1,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Jump_l_thumb1Pitch"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([1,0,0,0,1,0,0,0.5,1,0,0,1.1,1,0,0,0.7,1,0,0,0.2,1,0,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Jump_r_thumb1Pitch"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([1,0,0,0,1,0,0,0.5,1,0,0,1.1,1,0,0,0.7,1,0,0,0.2,1,0,0,0])})])}),

            new Group({
              DEF : new SFString("KickAnimation"),
              children : new MFNode([
                new TimeSensor({
                  DEF : new SFString("KickTimer"),
                  cycleInterval : new SFTime(3.73),
                  loop : new SFBool(true)}),

                new OrientationInterpolator({
                  DEF : new SFString("Kick_l_sternoclavicularRoll"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0.2,0,0,1,0.22,0,0,1,0.2,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Kick_l_acromioclavicularRoll"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0.05,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Kick_l_shoulderRoll"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,1.76,-0.25,0,1,1.76,0,0,1,1.256,0,0,1,0.05,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Kick_l_ForeArmPitch"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([1,0,0,0,1,0,0,-0.55,-1,0.25,0,2.55,1,0,0,0,1,0,0,0,1,0,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Kick_l_wristRoll"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,1,0,0.55,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Kick_l_thumb1Pitch"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([1,0,0,0,1,0,0,0.5,1,0,0,1.1,1,0,0,0.7,1,0,0,0.2,1,0,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Kick_r_sternoclavicularRoll"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,-0.2,0,0,1,-0.22,0,0,1,-0.2,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Kick_r_acromioclavicularRoll"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,-0.05,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Kick_r_shoulderRoll"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,-1.76,0.25,0,1,-1.76,0,0,1,-1.256,0,0,1,-0.05,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Kick_r_ForeArmPitch"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([1,0,0,0,1,0,0,-0.55,1,0.25,0,-2.55,1,0,0,0,1,0,0,0,1,0,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Kick_r_wristRoll"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,1,0,-0.55,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Kick_r_thumb1Pitch"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([1,0,0,0,1,0,0,0.5,1,0,0,1.1,1,0,0,0.7,1,0,0,0.2,1,0,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Kick_r_hipPitch"),
                  key : new MFFloat([0,0.2,0.3,0.5,0.6,0.9,1]),
                  keyValue : new MFRotation([1,0,0,0,1,0,0,0.9,-1,0,0,1.75,-1,0,0,2.25,-1,0,0,2,1,0,0,0,1,0,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Kick_r_kneePitch"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,1,0,0,1.95,1,0,0,1.75,-1,0,0,0.28,1,0,0,0,1,0,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Kick_l_hipPitch"),
                  key : new MFFloat([0,0.2,0.3,0.5,0.6,0.9,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Kick_l_kneePitch"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Kick_r_anklePitch"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.7,1]),
                  keyValue : new MFRotation([0,0,1,0,-1,0,0,0.9,-1,0,0,0.95,1,0,0,0.75,-1,0,0,0.05,1,0,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Kick_r_metatarsalPitch"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.7,1]),
                  keyValue : new MFRotation([1,0,0,0,-1,0,0,0.5,-1,0,0,0.7,1,0,0,0.75,-1,0,0,0.2,1,0,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Kick_sacroiliacYaw"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,1,0,0,0,-1,0,0.1,0,1,0,0,0,1,-1,0.24,0,-1,0,0.4,0,1,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Kick_vl5Yaw"),
                  key : new MFFloat([0,0.2,0.4,0.5,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Kick_vc6Yaw"),
                  key : new MFFloat([0,0.2,0.4,0.5,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Kick_lower_bodyRotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Kick_upper_bodyRotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Kick_whole_bodyRotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new PositionInterpolator({
                  DEF : new SFString("Kick_whole_bodyTransInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFVec3f([0,0,0,0,0,0,0,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Kick_neckRotInterp"),
                  key : new MFFloat([0,0.25,0.55,1]),
                  keyValue : new MFRotation([0,0,1,0,1,0,0,0.7,1,0,0,0.5,0,0,1,0])})])}),

            new Group({
              DEF : new SFString("StopAnimation"),
              children : new MFNode([
                new TimeSensor({
                  DEF : new SFString("StopTimer"),
                  cycleInterval : new SFTime(5.73),
                  loop : new SFBool(true)}),

                new PositionInterpolator({
                  DEF : new SFString("Stop_HumanoidRootTransInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFVec3f([0,0,0,0,0,0,0,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_HumanoidRootRotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_sacroiliacRotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_l_hipRotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_l_kneeRotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_l_ankleRotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_l_subtalarRotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_l_midtarsalRotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_l_metatarsalRotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_r_hipRotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_r_kneeRotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_r_ankleRotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_r_subtalarRotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_r_midtarsalRotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_r_metatarsalRotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_vl5RotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_vl4RotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_vl3RotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_vl2RotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_vl1RotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_vt12RotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_vt11RotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_vt10RotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_vt9RotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_vt8RotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_vt7RotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_vt6RotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_vt5RotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_vt4RotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_vt3RotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_vt2RotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_vt1RotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_vc7RotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_vc6RotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_vc5RotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_vc4RotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_vc3RotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_vc2RotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_vc1RotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_skullbaseRotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_l_eyeball_jointRotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_r_eyeball_jointRotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_l_sternoclavicularRotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_l_acromioclavicularRotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_l_shoulderRotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_l_elbowRotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_l_wristRotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_l_thumb1RotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_l_thumb2RotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_l_thumb3RotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_l_index0RotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_l_index1RotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_l_index2RotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_l_index3RotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_l_middle0RotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_l_middle1RotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_l_middle2RotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_l_middle3RotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_l_ring0RotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_l_ring1RotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_l_ring2RotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_l_ring3RotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_l_pinky0RotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_l_pinky1RotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_l_pinky2RotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_l_pinky3RotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_r_sternoclavicularRotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_r_acromioclavicularRotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_r_shoulderRotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_r_elbowRotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_r_wristRotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_r_thumb1RotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_r_thumb2RotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_r_thumb3RotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_r_index0RotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_r_index1RotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_r_index2RotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_r_index3RotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_r_middle0RotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_r_middle1RotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_r_middle2RotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_r_middle3RotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_r_ring0RotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_r_ring1RotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_r_ring2RotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_r_ring3RotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_r_pinky0RotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_r_pinky1RotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_r_pinky2RotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_r_pinky3RotInterp"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])})])}),

            new Group({
              DEF : new SFString("Interface"),
              children : new MFNode([
                new Transform({
                  DEF : new SFString("cordsysfloor"),
                  scale : new SFVec3f([0.175,0.175,0.175]),
                  children : new MFNode([
                    new Inline({
                      global : new SFBool(true),
                      url : new MFString(["JointCoordinateAxes.x3dv"])})])}),

                new ProximitySensor({
                  DEF : new SFString("HudProx"),
                  size : new SFVec3f([50,50,50])}),

                new Transform({
                  DEF : new SFString("HudXform"),
                  children : new MFNode([
                    new Transform({
                      translation : new SFVec3f([-0.2,0.15,-0.7]),
                      scale : new SFVec3f([0.02,0.02,0.02]),
                      children : new MFNode([
                        new Transform({
                          DEF : new SFString("Stand_Text"),
                          translation : new SFVec3f([0,-0.9,0]),
                          children : new MFNode([
                            new TouchSensor({
                              DEF : new SFString("Stand_Touch")}),

                            new Shape({
                              DEF : new SFString("StandText"),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      DEF : new SFString("text_color"),
                                      ambientIntensity : new SFFloat(1),
                                      diffuseColor : new SFColor([0.819,0.521,0.169]),
                                      specularColor : new SFColor([0.819,0.521,0.169]),
                                      emissiveColor : new SFColor([0.819,0.521,0.169])}))})),
                              geometry : new SFNode(
                                new Text({
                                  string : new MFString(["Stand"]),
                                  fontStyle : new SFNode(
                                    new FontStyle({
                                      family : new MFString(["SANS"])}))}))}),

                            new Shape({
                              DEF : new SFString("Stand_Back"),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      DEF : new SFString("Clear"),
                                      ambientIntensity : new SFFloat(1),
                                      diffuseColor : new SFColor([0,0.5,0]),
                                      emissiveColor : new SFColor([0,0.5,0]),
                                      transparency : new SFFloat(0.8)}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  DEF : new SFString("Backing"),
                                  coordIndex : new MFInt32([0,1,2,3,-1]),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([-0.2,-0.25,-0.01,3,-0.25,-0.01,3,1,-0.01,-0.2,1,-0.01])}))}))})])}),

                        new Transform({
                          DEF : new SFString("Pitch_Text"),
                          translation : new SFVec3f([0,-2.4,0]),
                          children : new MFNode([
                            new TouchSensor({
                              DEF : new SFString("Pitch_Touch")}),

                            new Shape({
                              DEF : new SFString("PitchText"),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      USE : new SFString("text_color")}))})),
                              geometry : new SFNode(
                                new Text({
                                  string : new MFString(["Pitch"]),
                                  fontStyle : new SFNode(
                                    new FontStyle({
                                      family : new MFString(["SANS"])}))}))}),

                            new Shape({
                              DEF : new SFString("Pitch_Back"),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      USE : new SFString("Clear")}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  USE : new SFString("Backing")}))})])}),

                        new Transform({
                          DEF : new SFString("Yaw_Text"),
                          translation : new SFVec3f([0,-3.8,0]),
                          children : new MFNode([
                            new TouchSensor({
                              DEF : new SFString("Yaw_Touch")}),

                            new Shape({
                              DEF : new SFString("YawText"),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      USE : new SFString("text_color")}))})),
                              geometry : new SFNode(
                                new Text({
                                  string : new MFString(["Yaw"]),
                                  fontStyle : new SFNode(
                                    new FontStyle({
                                      family : new MFString(["SANS"])}))}))}),

                            new Shape({
                              DEF : new SFString("Yaw_Back"),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      USE : new SFString("Clear")}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  USE : new SFString("Backing")}))})])}),

                        new Transform({
                          DEF : new SFString("Roll_Text"),
                          translation : new SFVec3f([0,-5.2,0]),
                          children : new MFNode([
                            new TouchSensor({
                              DEF : new SFString("Roll_Touch")}),

                            new Shape({
                              DEF : new SFString("RollText"),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      USE : new SFString("text_color")}))})),
                              geometry : new SFNode(
                                new Text({
                                  string : new MFString(["Roll"]),
                                  fontStyle : new SFNode(
                                    new FontStyle({
                                      family : new MFString(["SANS"])}))}))}),

                            new Shape({
                              DEF : new SFString("Roll_Back"),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      USE : new SFString("Clear")}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  USE : new SFString("Backing")}))})])}),

                        new Transform({
                          DEF : new SFString("Walk_Text"),
                          translation : new SFVec3f([0,-6.6,0]),
                          children : new MFNode([
                            new TouchSensor({
                              DEF : new SFString("Walk_Touch")}),

                            new Shape({
                              DEF : new SFString("WalkText"),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      USE : new SFString("text_color")}))})),
                              geometry : new SFNode(
                                new Text({
                                  string : new MFString(["Walk"]),
                                  fontStyle : new SFNode(
                                    new FontStyle({
                                      family : new MFString(["SANS"])}))}))}),

                            new Shape({
                              DEF : new SFString("Walk_Back"),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      USE : new SFString("Clear")}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  USE : new SFString("Backing")}))})])}),

                        new Transform({
                          DEF : new SFString("Run_Text"),
                          translation : new SFVec3f([0,-8,0]),
                          children : new MFNode([
                            new TouchSensor({
                              DEF : new SFString("Run_Touch")}),

                            new Shape({
                              DEF : new SFString("RunText"),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      USE : new SFString("text_color")}))})),
                              geometry : new SFNode(
                                new Text({
                                  string : new MFString(["Run"]),
                                  fontStyle : new SFNode(
                                    new FontStyle({
                                      family : new MFString(["SANS"])}))}))}),

                            new Shape({
                              DEF : new SFString("Run_Back"),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      USE : new SFString("Clear")}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  USE : new SFString("Backing")}))})])}),

                        new Transform({
                          DEF : new SFString("Jump_Text"),
                          translation : new SFVec3f([0,-9.4,0]),
                          children : new MFNode([
                            new TouchSensor({
                              DEF : new SFString("Jump_Touch")}),

                            new Shape({
                              DEF : new SFString("JumpText"),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      USE : new SFString("text_color")}))})),
                              geometry : new SFNode(
                                new Text({
                                  string : new MFString(["Jump"]),
                                  fontStyle : new SFNode(
                                    new FontStyle({
                                      family : new MFString(["SANS"])}))}))}),

                            new Shape({
                              DEF : new SFString("Jump_Back"),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      USE : new SFString("Clear")}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  USE : new SFString("Backing")}))})])}),

                        new Transform({
                          DEF : new SFString("Kick_Text"),
                          translation : new SFVec3f([0,-10.8,0]),
                          children : new MFNode([
                            new TouchSensor({
                              DEF : new SFString("Kick_Touch")}),

                            new Shape({
                              DEF : new SFString("KickText"),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      USE : new SFString("text_color")}))})),
                              geometry : new SFNode(
                                new Text({
                                  string : new MFString(["Kick"]),
                                  fontStyle : new SFNode(
                                    new FontStyle({
                                      family : new MFString(["SANS"])}))}))}),

                            new Shape({
                              DEF : new SFString("Kick_Back"),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      USE : new SFString("Clear")}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  USE : new SFString("Backing")}))})])}),

                        new Transform({
                          DEF : new SFString("Stop_Text"),
                          translation : new SFVec3f([0,0.4,0]),
                          children : new MFNode([
                            new TouchSensor({
                              DEF : new SFString("Stop_Touch")}),

                            new Shape({
                              DEF : new SFString("StopText"),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      USE : new SFString("text_color")}))})),
                              geometry : new SFNode(
                                new Text({
                                  string : new MFString(["Default"]),
                                  fontStyle : new SFNode(
                                    new FontStyle({
                                      family : new MFString(["SANS"])}))}))}),

                            new Shape({
                              DEF : new SFString("Stop_Back"),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      USE : new SFString("Clear")}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  USE : new SFString("Backing")}))})])})])})])})])}),

            new ROUTE({
              fromNode : new SFString("StandTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stand_r_ankleRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StandTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stand_r_kneeRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StandTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stand_r_hipRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StandTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stand_l_ankleRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StandTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stand_l_kneeRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StandTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stand_l_hipRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StandTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stand_lower_bodyRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StandTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stand_r_wristRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StandTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stand_r_elbowRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StandTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stand_r_shoulderRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StandTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stand_l_wristRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StandTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stand_l_elbowRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StandTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stand_l_shoulderRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StandTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stand_headRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StandTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stand_neckRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StandTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stand_l_eyeballRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StandTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stand_r_eyeballRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StandTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stand_upper_bodyRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StandTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stand_whole_bodyRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StandTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stand_whole_bodyTransInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StandTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stand_l_sternoclavicularRoll"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StandTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stand_l_acromioclavicularRoll"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StandTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stand_r_sternoclavicularRoll"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StandTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stand_r_acromioclavicularRoll"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StandTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stand_r_metatarsalPitch"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StandTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stand_sacroiliacYaw"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StandTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stand_vl5Yaw"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StandTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stand_vc6Yaw"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StandTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stand_l_thumb1Pitch"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StandTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stand_r_thumb1Pitch"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StandTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stand_r_index1Roll"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StandTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stand_r_index2Roll"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StandTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stand_r_index3Roll"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Stand_r_ankleRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_ankle"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stand_r_kneeRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_knee"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stand_r_hipRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_hip"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stand_l_ankleRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_ankle"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stand_l_kneeRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_knee"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stand_l_hipRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_hip"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stand_r_wristRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_wrist"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stand_r_elbowRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_elbow"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stand_r_shoulderRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_shoulder"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stand_l_wristRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_wrist"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stand_l_elbowRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_elbow"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stand_l_shoulderRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_shoulder"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stand_headRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_skullbase"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stand_neckRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vc7"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stand_l_eyeballRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_eyeball_joint"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stand_r_eyeballRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_eyeball_joint"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stand_upper_bodyRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vl1"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stand_lower_bodyRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_sacroiliac"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stand_whole_bodyRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_HumanoidRoot"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stand_whole_bodyTransInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_HumanoidRoot"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("Stand_l_sternoclavicularRoll"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_sternoclavicular"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stand_l_acromioclavicularRoll"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_acromioclavicular"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stand_r_sternoclavicularRoll"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_sternoclavicular"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stand_r_acromioclavicularRoll"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_acromioclavicular"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stand_r_metatarsalPitch"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_metatarsal"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stand_r_metatarsalPitch"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_metatarsal"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stand_sacroiliacYaw"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_sacroiliac"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stand_vl5Yaw"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vl5"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stand_vc6Yaw"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vc6"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stand_l_thumb1Pitch"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_thumb1"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stand_r_thumb1Pitch"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_thumb1"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stand_r_index1Roll"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_index1"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stand_r_index2Roll"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_index2"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stand_r_index2Roll"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_index3"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stand_r_index1Roll"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_middle1"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stand_r_index2Roll"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_middle2"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stand_r_index2Roll"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_middle3"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stand_r_index1Roll"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_ring1"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stand_r_index2Roll"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_ring2"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stand_r_index2Roll"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_ring3"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stand_r_index1Roll"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_pinky1"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stand_r_index2Roll"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_pinky2"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stand_r_index2Roll"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_pinky3"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("PitchTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Pitches_r_ankleRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("PitchTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Pitches_r_kneeRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("PitchTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Pitches_r_hipRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("PitchTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Pitches_l_ankleRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("PitchTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Pitches_l_kneeRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("PitchTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Pitches_l_hipRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("PitchTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Pitches_lower_bodyRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("PitchTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Pitches_r_wristRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("PitchTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Pitches_r_elbowRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("PitchTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Pitches_r_shoulderRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("PitchTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Pitches_l_wristRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("PitchTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Pitches_l_elbowRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("PitchTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Pitches_l_shoulderRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("PitchTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Pitches_headRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("PitchTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Pitches_neckRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("PitchTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Pitches_upper_bodyRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("PitchTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Pitches_whole_bodyRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("PitchTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Pitches_whole_bodyTransInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("PitchTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Pitch_l_sternoclavicularRoll"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("PitchTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Pitch_l_acromioclavicularRoll"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("PitchTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Pitch_r_sternoclavicularRoll"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("PitchTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Pitch_r_acromioclavicularRoll"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("PitchTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Pitch_r_metatarsalPitch"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("PitchTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Pitch_sacroiliacYaw"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("PitchTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Pitch_vl5Yaw"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("PitchTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Pitch_vc6Yaw"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("PitchTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Pitch_l_thumb1Pitch"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("PitchTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Pitch_r_thumb1Pitch"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Pitches_r_ankleRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_ankle"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Pitches_r_kneeRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_knee"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Pitches_r_hipRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_hip"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Pitches_l_ankleRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_ankle"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Pitches_l_kneeRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_knee"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Pitches_l_hipRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_hip"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Pitches_lower_bodyRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_sacroiliac"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Pitches_r_wristRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_wrist"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Pitches_r_elbowRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_elbow"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Pitches_r_shoulderRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_shoulder"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Pitches_l_wristRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_wrist"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Pitches_l_elbowRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_elbow"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Pitches_l_shoulderRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_shoulder"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Pitches_headRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_skullbase"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Pitches_neckRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vc4"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Pitches_upper_bodyRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vl1"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Pitches_whole_bodyRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_HumanoidRoot"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Pitches_whole_bodyTransInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_HumanoidRoot"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("Pitch_l_sternoclavicularRoll"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_sternoclavicular"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Pitch_l_acromioclavicularRoll"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_acromioclavicular"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Pitch_r_sternoclavicularRoll"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_sternoclavicular"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Pitch_r_acromioclavicularRoll"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_acromioclavicular"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Pitch_r_metatarsalPitch"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_metatarsal"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Pitch_r_metatarsalPitch"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_metatarsal"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Pitch_sacroiliacYaw"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_sacroiliac"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Pitch_vl5Yaw"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vl5"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Pitch_vc6Yaw"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vc6"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Pitch_l_thumb1Pitch"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_thumb1"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Pitch_r_thumb1Pitch"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_thumb1"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("YawTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Yaws_r_ankleRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("YawTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Yaws_r_kneeRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("YawTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Yaws_r_hipRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("YawTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Yaws_l_ankleRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("YawTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Yaws_l_kneeRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("YawTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Yaws_l_hipRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("YawTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Yaws_lower_bodyRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("YawTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Yaws_r_wristRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("YawTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Yaws_r_elbowRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("YawTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Yaws_r_shoulderRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("YawTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Yaws_l_wristRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("YawTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Yaws_l_elbowRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("YawTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Yaws_l_shoulderRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("YawTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Yaws_headRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("YawTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Yaws_neckRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("YawTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Yaws_upper_bodyRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("YawTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Yaws_whole_bodyRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("YawTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Yaws_whole_bodyTransInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("YawTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Yaw_l_sternoclavicularRoll"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("YawTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Yaw_l_acromioclavicularRoll"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("YawTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Yaw_r_sternoclavicularRoll"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("YawTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Yaw_r_acromioclavicularRoll"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("YawTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Yaw_r_metatarsalPitch"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("YawTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Yaw_sacroiliacYaw"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("YawTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Yaw_vl5Yaw"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("YawTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Yaw_vc6Yaw"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("YawTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Yaw_l_thumb1Pitch"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("YawTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Yaw_r_thumb1Pitch"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Yaws_r_ankleRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_ankle"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Yaws_r_kneeRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_knee"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Yaws_r_hipRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_hip"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Yaws_l_ankleRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_ankle"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Yaws_l_kneeRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_knee"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Yaws_l_hipRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_hip"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Yaws_lower_bodyRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_sacroiliac"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Yaws_r_wristRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_wrist"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Yaws_r_elbowRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_elbow"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Yaws_r_shoulderRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_shoulder"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Yaws_l_wristRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_wrist"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Yaws_l_elbowRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_elbow"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Yaws_l_shoulderRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_shoulder"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Yaws_headRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_skullbase"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Yaws_neckRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vc4"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Yaws_upper_bodyRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vl1"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Yaws_whole_bodyRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_HumanoidRoot"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Yaws_whole_bodyTransInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_HumanoidRoot"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("Yaw_l_sternoclavicularRoll"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_sternoclavicular"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Yaw_l_acromioclavicularRoll"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_acromioclavicular"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Yaw_r_sternoclavicularRoll"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_sternoclavicular"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Yaw_r_acromioclavicularRoll"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_acromioclavicular"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Yaw_r_metatarsalPitch"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_metatarsal"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Yaw_r_metatarsalPitch"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_metatarsal"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Yaw_sacroiliacYaw"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_sacroiliac"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Yaw_vl5Yaw"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vl5"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Yaw_vc6Yaw"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vc6"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Yaw_l_thumb1Pitch"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_thumb1"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Yaw_r_thumb1Pitch"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_thumb1"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("RollTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Rolls_r_ankleRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RollTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Rolls_r_kneeRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RollTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Rolls_r_hipRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RollTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Rolls_l_ankleRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RollTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Rolls_l_kneeRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RollTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Rolls_l_hipRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RollTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Rolls_lower_bodyRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RollTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Rolls_r_wristRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RollTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Rolls_r_elbowRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RollTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Rolls_r_shoulderRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RollTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Rolls_l_wristRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RollTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Rolls_l_elbowRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RollTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Rolls_l_shoulderRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RollTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Rolls_headRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RollTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Rolls_neckRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RollTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Rolls_upper_bodyRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RollTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Rolls_whole_bodyRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RollTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Rolls_whole_bodyTransInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RollTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Roll_l_sternoclavicularRoll"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RollTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Roll_l_acromioclavicularRoll"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RollTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Roll_r_sternoclavicularRoll"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RollTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Roll_r_acromioclavicularRoll"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RollTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Roll_r_metatarsalPitch"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RollTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Roll_sacroiliacYaw"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RollTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Roll_vl5Yaw"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RollTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Roll_vc6Yaw"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RollTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Roll_l_thumb1Pitch"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RollTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Roll_r_thumb1Pitch"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Rolls_r_ankleRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_ankle"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Rolls_r_kneeRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_knee"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Rolls_r_hipRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_hip"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Rolls_l_ankleRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_ankle"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Rolls_l_kneeRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_knee"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Rolls_l_hipRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_hip"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Rolls_lower_bodyRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_sacroiliac"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Rolls_r_wristRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_wrist"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Rolls_r_elbowRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_elbow"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Rolls_r_shoulderRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_shoulder"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Rolls_l_wristRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_wrist"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Rolls_l_elbowRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_elbow"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Rolls_l_shoulderRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_shoulder"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Rolls_headRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_skullbase"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Rolls_neckRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vc4"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Rolls_upper_bodyRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vl1"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Rolls_whole_bodyRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_HumanoidRoot"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Rolls_whole_bodyTransInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_HumanoidRoot"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("Roll_l_sternoclavicularRoll"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_sternoclavicular"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Roll_l_acromioclavicularRoll"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_acromioclavicular"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Roll_r_sternoclavicularRoll"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_sternoclavicular"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Roll_r_acromioclavicularRoll"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_acromioclavicular"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Roll_r_metatarsalPitch"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_metatarsal"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Roll_r_metatarsalPitch"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_metatarsal"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Roll_sacroiliacYaw"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_sacroiliac"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Roll_vl5Yaw"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vl5"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Roll_vc6Yaw"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vc6"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Roll_l_thumb1Pitch"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_thumb1"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Roll_r_thumb1Pitch"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_thumb1"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("WalkTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Walk_r_ankleRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("WalkTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Walk_r_kneeRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("WalkTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Walk_r_hipRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("WalkTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Walk_l_ankleRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("WalkTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Walk_l_kneeRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("WalkTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Walk_l_hipRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("WalkTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Walk_lower_bodyRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("WalkTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Walk_r_wristRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("WalkTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Walk_r_elbowRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("WalkTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Walk_r_shoulderRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("WalkTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Walk_l_wristRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("WalkTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Walk_l_elbowRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("WalkTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Walk_l_shoulderRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("WalkTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Walk_headRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("WalkTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Walk_neckRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("WalkTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Walk_upper_bodyRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("WalkTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Walk_whole_bodyRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("WalkTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Walk_whole_bodyTranInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("WalkTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Walk_l_sternoclavicularRoll"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("WalkTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Walk_l_acromioclavicularRoll"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("WalkTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Walk_r_sternoclavicularRoll"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("WalkTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Walk_r_acromioclavicularRoll"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("WalkTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Walk_r_metatarsalPitch"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("WalkTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Walk_sacroiliacYaw"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("WalkTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Walk_vl5Yaw"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("WalkTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Walk_vc6Yaw"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("WalkTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Walk_l_thumb1Pitch"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("WalkTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Walk_r_thumb1Pitch"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Walk_r_ankleRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_ankle"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Walk_r_kneeRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_knee"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Walk_r_hipRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_hip"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Walk_l_ankleRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_ankle"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Walk_l_kneeRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_knee"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Walk_l_hipRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_hip"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Walk_lower_bodyRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_sacroiliac"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Walk_r_wristRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_wrist"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Walk_r_elbowRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_elbow"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Walk_r_shoulderRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_shoulder"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Walk_l_wristRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_wrist"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Walk_l_elbowRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_elbow"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Walk_l_shoulderRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_shoulder"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Walk_headRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_skullbase"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Walk_neckRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vc4"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Walk_upper_bodyRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vl1"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Walk_whole_bodyRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_HumanoidRoot"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Walk_whole_bodyTranInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_HumanoidRoot"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("Walk_l_sternoclavicularRoll"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_sternoclavicular"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Walk_l_acromioclavicularRoll"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_acromioclavicular"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Walk_r_sternoclavicularRoll"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_sternoclavicular"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Walk_r_acromioclavicularRoll"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_acromioclavicular"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Walk_r_metatarsalPitch"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_metatarsal"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Walk_r_metatarsalPitch"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_metatarsal"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Walk_sacroiliacYaw"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_sacroiliac"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Walk_vl5Yaw"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vl5"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Walk_vc6Yaw"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vc6"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Walk_l_thumb1Pitch"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_thumb1"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Walk_r_thumb1Pitch"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_thumb1"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("RunTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Run_r_ankleRotInterp_Run"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RunTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Run_r_kneeRotInterp_Run"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RunTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Run_r_hipRotInterp_Run"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RunTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Run_l_ankleRotInterp_Run"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RunTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Run_l_kneeRotInterp_Run"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RunTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Run_l_hipRotInterp_Run"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RunTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Run_lower_bodyRotInterp_Run"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RunTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Run_r_wristRotInterp_Run"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RunTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Run_r_elbowRotInterp_Run"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RunTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Run_r_shoulderRotInterp_Run"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RunTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Run_l_wristRotInterp_Run"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RunTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Run_l_elbowRotInterp_Run"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RunTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Run_l_shoulderRotInterp_Run"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RunTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Run_headRotInterp_Run"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RunTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Run_neckRotInterp_Run"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RunTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Run_upper_bodyRotInterp_Run"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RunTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Run_whole_bodyRotInterp_Run"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RunTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Run_whole_bodyTranInterp_Run"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RunTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Run_l_sternoclavicularRoll"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RunTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Run_l_acromioclavicularRoll"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RunTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Run_r_sternoclavicularRoll"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RunTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Run_r_acromioclavicularRoll"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RunTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Run_r_metatarsalPitch"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RunTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Run_sacroiliacYaw"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RunTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Run_vl5Yaw"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RunTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Run_vc6Yaw"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RunTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Run_l_thumb1Pitch"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RunTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Run_r_thumb1Pitch"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Run_r_ankleRotInterp_Run"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_ankle"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Run_r_kneeRotInterp_Run"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_knee"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Run_r_hipRotInterp_Run"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_hip"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Run_l_ankleRotInterp_Run"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_ankle"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Run_l_kneeRotInterp_Run"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_knee"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Run_l_hipRotInterp_Run"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_hip"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Run_r_wristRotInterp_Run"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_wrist"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Run_r_elbowRotInterp_Run"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_elbow"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Run_r_shoulderRotInterp_Run"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_shoulder"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Run_l_wristRotInterp_Run"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_wrist"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Run_l_elbowRotInterp_Run"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_elbow"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Run_l_shoulderRotInterp_Run"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_shoulder"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Run_lower_bodyRotInterp_Run"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_sacroiliac"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Run_headRotInterp_Run"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_skullbase"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Run_neckRotInterp_Run"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vc4"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Run_upper_bodyRotInterp_Run"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vl1"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Run_whole_bodyRotInterp_Run"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_HumanoidRoot"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Run_whole_bodyTranInterp_Run"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_HumanoidRoot"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("Run_l_sternoclavicularRoll"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_sternoclavicular"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Run_l_acromioclavicularRoll"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_acromioclavicular"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Run_r_sternoclavicularRoll"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_sternoclavicular"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Run_r_acromioclavicularRoll"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_acromioclavicular"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Run_r_metatarsalPitch"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_metatarsal"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Run_r_metatarsalPitch"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_metatarsal"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Run_sacroiliacYaw"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_sacroiliac"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Run_vl5Yaw"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vl5"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Run_vc6Yaw"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vc6"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Run_l_thumb1Pitch"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_thumb1"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Run_r_thumb1Pitch"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_thumb1"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("JumpTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Jump_r_ankleRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("JumpTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Jump_r_kneeRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("JumpTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Jump_r_hipRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("JumpTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Jump_l_ankleRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("JumpTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Jump_l_kneeRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("JumpTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Jump_l_hipRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("JumpTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Jump_lower_bodyRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("JumpTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Jump_r_wristRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("JumpTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Jump_r_elbowRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("JumpTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Jump_r_shoulderRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("JumpTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Jump_l_wristRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("JumpTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Jump_l_elbowRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("JumpTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Jump_l_shoulderRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("JumpTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Jump_headRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("JumpTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Jump_neckRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("JumpTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Jump_upper_bodyRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("JumpTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Jump_whole_bodyRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("JumpTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Jump_whole_bodyTranInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("JumpTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Jump_l_sternoclavicularRoll"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("JumpTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Jump_l_acromioclavicularRoll"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("JumpTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Jump_r_sternoclavicularRoll"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("JumpTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Jump_r_acromioclavicularRoll"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("JumpTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Jump_r_metatarsalPitch"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("JumpTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Jump_sacroiliacYaw"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("JumpTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Jump_vl5Yaw"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("JumpTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Jump_vc6Yaw"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("JumpTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Jump_l_thumb1Pitch"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("JumpTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Jump_r_thumb1Pitch"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Jump_r_ankleRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_ankle"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Jump_r_kneeRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_knee"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Jump_r_hipRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_hip"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Jump_l_ankleRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_ankle"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Jump_l_kneeRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_knee"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Jump_l_hipRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_hip"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Jump_lower_bodyRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_sacroiliac"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Jump_r_wristRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_wrist"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Jump_r_elbowRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_elbow"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Jump_r_shoulderRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_shoulder"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Jump_l_wristRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_wrist"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Jump_l_elbowRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_elbow"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Jump_l_shoulderRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_shoulder"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Jump_headRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_skullbase"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Jump_neckRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vc4"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Jump_upper_bodyRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vl1"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Jump_whole_bodyRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_HumanoidRoot"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Jump_whole_bodyTranInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_HumanoidRoot"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("Jump_l_sternoclavicularRoll"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_sternoclavicular"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Jump_l_acromioclavicularRoll"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_acromioclavicular"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Jump_r_sternoclavicularRoll"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_sternoclavicular"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Jump_r_acromioclavicularRoll"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_acromioclavicular"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Jump_r_metatarsalPitch"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_metatarsal"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Jump_r_metatarsalPitch"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_metatarsal"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Jump_sacroiliacYaw"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_sacroiliac"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Jump_vl5Yaw"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vl5"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Jump_vc6Yaw"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vc6"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Jump_l_thumb1Pitch"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_thumb1"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Jump_r_thumb1Pitch"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_thumb1"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("KickTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Kick_l_sternoclavicularRoll"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("KickTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Kick_l_acromioclavicularRoll"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("KickTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Kick_l_shoulderRoll"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("KickTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Kick_l_ForeArmPitch"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("KickTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Kick_l_wristRoll"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("KickTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Kick_l_thumb1Pitch"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("KickTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Kick_r_sternoclavicularRoll"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("KickTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Kick_r_acromioclavicularRoll"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("KickTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Kick_r_shoulderRoll"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("KickTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Kick_r_ForeArmPitch"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("KickTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Kick_r_wristRoll"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("KickTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Kick_r_thumb1Pitch"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("KickTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Kick_r_hipPitch"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("KickTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Kick_r_kneePitch"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("KickTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Kick_l_hipPitch"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("KickTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Kick_l_kneePitch"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("KickTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Kick_r_anklePitch"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("KickTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Kick_r_metatarsalPitch"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("KickTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Kick_sacroiliacYaw"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("KickTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Kick_vl5Yaw"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("KickTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Kick_vc6Yaw"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("KickTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Kick_lower_bodyRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("KickTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Kick_upper_bodyRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("KickTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Kick_whole_bodyRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("KickTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Kick_whole_bodyTransInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("KickTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Kick_neckRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Kick_l_sternoclavicularRoll"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_sternoclavicular"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Kick_l_acromioclavicularRoll"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_acromioclavicular"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Kick_l_shoulderRoll"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_shoulder"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Kick_l_ForeArmPitch"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_elbow"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Kick_l_wristRoll"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_wrist"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Kick_l_thumb1Pitch"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_thumb1"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Kick_r_sternoclavicularRoll"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_sternoclavicular"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Kick_r_acromioclavicularRoll"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_acromioclavicular"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Kick_r_shoulderRoll"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_shoulder"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Kick_r_ForeArmPitch"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_elbow"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Kick_r_wristRoll"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_wrist"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Kick_r_thumb1Pitch"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_thumb1"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Kick_r_hipPitch"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_hip"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Kick_r_kneePitch"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_knee"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Kick_r_anklePitch"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_ankle"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Kick_r_metatarsalPitch"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_metatarsal"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Kick_l_hipPitch"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_hip"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Kick_l_kneePitch"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_knee"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Kick_r_anklePitch"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_ankle"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Kick_r_metatarsalPitch"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_metatarsal"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Kick_sacroiliacYaw"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_sacroiliac"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Kick_vl5Yaw"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vl5"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Kick_vc6Yaw"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vc6"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Kick_upper_bodyRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vl1"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Kick_lower_bodyRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_sacroiliac"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Kick_whole_bodyRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_HumanoidRoot"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Kick_whole_bodyTransInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_HumanoidRoot"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("Kick_neckRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vc4"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_HumanoidRootTransInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_HumanoidRootRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_sacroiliacRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_l_hipRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_l_kneeRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_l_ankleRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_l_subtalarRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_l_midtarsalRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_l_metatarsalRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_r_hipRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_r_kneeRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_r_ankleRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_r_subtalarRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_r_midtarsalRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_r_metatarsalRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_vl5RotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_vl4RotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_vl3RotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_vl2RotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_vl1RotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_vt12RotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_vt11RotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_vt10RotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_vt9RotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_vt8RotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_vt7RotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_vt6RotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_vt5RotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_vt4RotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_vt3RotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_vt2RotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_vt1RotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_vc7RotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_vc6RotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_vc5RotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_vc4RotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_vc3RotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_vc2RotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_vc1RotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_skullbaseRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_l_eyeball_jointRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_r_eyeball_jointRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_l_sternoclavicularRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_l_acromioclavicularRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_l_shoulderRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_l_elbowRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_l_wristRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_l_thumb1RotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_l_thumb2RotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_l_thumb3RotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_l_index0RotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_l_index1RotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_l_index2RotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_l_index3RotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_l_middle0RotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_l_middle1RotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_l_middle2RotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_l_middle3RotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_l_ring0RotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_l_ring1RotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_l_ring2RotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_l_ring3RotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_l_pinky0RotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_l_pinky1RotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_l_pinky2RotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_l_pinky3RotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_r_sternoclavicularRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_r_acromioclavicularRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_r_shoulderRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_r_elbowRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_r_wristRotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_r_thumb1RotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_r_thumb2RotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_r_thumb3RotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_r_index0RotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_r_index1RotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_r_index2RotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_r_index3RotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_r_middle0RotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_r_middle1RotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_r_middle2RotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_r_middle3RotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_r_ring0RotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_r_ring1RotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_r_ring2RotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_r_ring3RotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_r_pinky0RotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_r_pinky1RotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_r_pinky2RotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_r_pinky3RotInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Stop_HumanoidRootTransInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_HumanoidRoot"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("Stop_HumanoidRootRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_HumanoidRoot"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_sacroiliacRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_sacroiliac"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_l_hipRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_hip"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_l_kneeRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_knee"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_l_ankleRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_ankle"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_l_subtalarRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_subtalar"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_l_midtarsalRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_midtarsal"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_l_metatarsalRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_metatarsal"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_r_hipRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_hip"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_r_kneeRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_knee"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_r_ankleRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_ankle"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_r_subtalarRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_subtalar"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_r_midtarsalRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_midtarsal"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_r_metatarsalRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_metatarsal"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_vl5RotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vl5"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_vl4RotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vl4"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_vl3RotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vl3"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_vl2RotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vl2"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_vl1RotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vl1"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_vt12RotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vt12"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_vt11RotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vt11"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_vt10RotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vt10"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_vt9RotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vt9"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_vt8RotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vt8"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_vt7RotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vt7"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_vt6RotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vt6"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_vt5RotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vt5"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_vt4RotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vt4"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_vt3RotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vt3"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_vt2RotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vt2"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_vt1RotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vt1"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_vc7RotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vc7"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_vc6RotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vc6"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_vc5RotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vc5"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_vc4RotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vc4"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_vc3RotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vc3"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_vc2RotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vc2"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_vc1RotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vc1"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_skullbaseRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_skullbase"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_l_eyeball_jointRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_eyeball_joint"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_r_eyeball_jointRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_eyeball_joint"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_l_sternoclavicularRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_sternoclavicular"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_l_acromioclavicularRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_acromioclavicular"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_l_shoulderRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_shoulder"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_l_elbowRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_elbow"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_l_wristRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_wrist"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_l_thumb1RotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_thumb1"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_l_thumb2RotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_thumb2"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_l_thumb3RotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_thumb3"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_l_index0RotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_index0"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_l_index1RotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_index1"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_l_index2RotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_index2"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_l_index3RotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_index3"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_l_middle0RotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_middle0"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_l_middle1RotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_middle1"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_l_middle2RotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_middle2"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_l_middle3RotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_middle3"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_l_ring0RotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_ring0"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_l_ring1RotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_ring1"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_l_ring2RotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_ring2"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_l_ring3RotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_ring3"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_l_pinky0RotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_pinky0"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_l_pinky1RotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_pinky1"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_l_pinky2RotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_pinky2"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_l_pinky3RotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_pinky3"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_r_sternoclavicularRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_sternoclavicular"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_r_acromioclavicularRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_acromioclavicular"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_r_shoulderRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_shoulder"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_r_elbowRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_elbow"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_r_wristRotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_wrist"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_r_thumb1RotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_thumb1"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_r_thumb2RotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_thumb2"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_r_thumb3RotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_thumb3"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_r_index0RotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_index0"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_r_index1RotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_index1"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_r_index2RotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_index2"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_r_index3RotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_index3"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_r_middle0RotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_middle0"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_r_middle1RotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_middle1"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_r_middle2RotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_middle2"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_r_middle3RotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_middle3"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_r_ring0RotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_ring0"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_r_ring1RotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_ring1"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_r_ring2RotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_ring2"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_r_ring3RotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_ring3"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_r_pinky0RotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_pinky0"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_r_pinky1RotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_pinky1"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_r_pinky2RotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_pinky2"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_r_pinky3RotInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_pinky3"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("HudProx"),
              fromField : new SFString("position_changed"),
              toNode : new SFString("HudXform"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("HudProx"),
              fromField : new SFString("orientation_changed"),
              toNode : new SFString("HudXform"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stand_Touch"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("PitchTimer"),
              toField : new SFString("set_stopTime")}),

            new ROUTE({
              fromNode : new SFString("Stand_Touch"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("YawTimer"),
              toField : new SFString("set_stopTime")}),

            new ROUTE({
              fromNode : new SFString("Stand_Touch"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("RollTimer"),
              toField : new SFString("set_stopTime")}),

            new ROUTE({
              fromNode : new SFString("Stand_Touch"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("WalkTimer"),
              toField : new SFString("set_stopTime")}),

            new ROUTE({
              fromNode : new SFString("Stand_Touch"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("RunTimer"),
              toField : new SFString("set_stopTime")}),

            new ROUTE({
              fromNode : new SFString("Stand_Touch"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("JumpTimer"),
              toField : new SFString("set_stopTime")}),

            new ROUTE({
              fromNode : new SFString("Stand_Touch"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("KickTimer"),
              toField : new SFString("set_stopTime")}),

            new ROUTE({
              fromNode : new SFString("Stand_Touch"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("StopTimer"),
              toField : new SFString("set_stopTime")}),

            new ROUTE({
              fromNode : new SFString("Stand_Touch"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("StandTimer"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("Pitch_Touch"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("StandTimer"),
              toField : new SFString("set_stopTime")}),

            new ROUTE({
              fromNode : new SFString("Pitch_Touch"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("YawTimer"),
              toField : new SFString("set_stopTime")}),

            new ROUTE({
              fromNode : new SFString("Pitch_Touch"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("RollTimer"),
              toField : new SFString("set_stopTime")}),

            new ROUTE({
              fromNode : new SFString("Pitch_Touch"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("WalkTimer"),
              toField : new SFString("set_stopTime")}),

            new ROUTE({
              fromNode : new SFString("Pitch_Touch"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("RunTimer"),
              toField : new SFString("set_stopTime")}),

            new ROUTE({
              fromNode : new SFString("Pitch_Touch"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("JumpTimer"),
              toField : new SFString("set_stopTime")}),

            new ROUTE({
              fromNode : new SFString("Pitch_Touch"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("KickTimer"),
              toField : new SFString("set_stopTime")}),

            new ROUTE({
              fromNode : new SFString("Pitch_Touch"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("StopTimer"),
              toField : new SFString("set_stopTime")}),

            new ROUTE({
              fromNode : new SFString("Pitch_Touch"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("PitchTimer"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("Yaw_Touch"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("StandTimer"),
              toField : new SFString("set_stopTime")}),

            new ROUTE({
              fromNode : new SFString("Yaw_Touch"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("PitchTimer"),
              toField : new SFString("set_stopTime")}),

            new ROUTE({
              fromNode : new SFString("Yaw_Touch"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("RollTimer"),
              toField : new SFString("set_stopTime")}),

            new ROUTE({
              fromNode : new SFString("Yaw_Touch"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("WalkTimer"),
              toField : new SFString("set_stopTime")}),

            new ROUTE({
              fromNode : new SFString("Yaw_Touch"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("RunTimer"),
              toField : new SFString("set_stopTime")}),

            new ROUTE({
              fromNode : new SFString("Yaw_Touch"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("JumpTimer"),
              toField : new SFString("set_stopTime")}),

            new ROUTE({
              fromNode : new SFString("Yaw_Touch"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("KickTimer"),
              toField : new SFString("set_stopTime")}),

            new ROUTE({
              fromNode : new SFString("Yaw_Touch"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("StopTimer"),
              toField : new SFString("set_stopTime")}),

            new ROUTE({
              fromNode : new SFString("Yaw_Touch"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("YawTimer"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("Walk_Touch"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("StandTimer"),
              toField : new SFString("set_stopTime")}),

            new ROUTE({
              fromNode : new SFString("Walk_Touch"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("PitchTimer"),
              toField : new SFString("set_stopTime")}),

            new ROUTE({
              fromNode : new SFString("Walk_Touch"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("YawTimer"),
              toField : new SFString("set_stopTime")}),

            new ROUTE({
              fromNode : new SFString("Walk_Touch"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("RollTimer"),
              toField : new SFString("set_stopTime")}),

            new ROUTE({
              fromNode : new SFString("Walk_Touch"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("RunTimer"),
              toField : new SFString("set_stopTime")}),

            new ROUTE({
              fromNode : new SFString("Walk_Touch"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("JumpTimer"),
              toField : new SFString("set_stopTime")}),

            new ROUTE({
              fromNode : new SFString("Walk_Touch"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("KickTimer"),
              toField : new SFString("set_stopTime")}),

            new ROUTE({
              fromNode : new SFString("Walk_Touch"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("StopTimer"),
              toField : new SFString("set_stopTime")}),

            new ROUTE({
              fromNode : new SFString("Walk_Touch"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("WalkTimer"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("Roll_Touch"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("StandTimer"),
              toField : new SFString("set_stopTime")}),

            new ROUTE({
              fromNode : new SFString("Roll_Touch"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("PitchTimer"),
              toField : new SFString("set_stopTime")}),

            new ROUTE({
              fromNode : new SFString("Roll_Touch"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("YawTimer"),
              toField : new SFString("set_stopTime")}),

            new ROUTE({
              fromNode : new SFString("Roll_Touch"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("WalkTimer"),
              toField : new SFString("set_stopTime")}),

            new ROUTE({
              fromNode : new SFString("Roll_Touch"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("RunTimer"),
              toField : new SFString("set_stopTime")}),

            new ROUTE({
              fromNode : new SFString("Roll_Touch"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("JumpTimer"),
              toField : new SFString("set_stopTime")}),

            new ROUTE({
              fromNode : new SFString("Roll_Touch"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("KickTimer"),
              toField : new SFString("set_stopTime")}),

            new ROUTE({
              fromNode : new SFString("Roll_Touch"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("StopTimer"),
              toField : new SFString("set_stopTime")}),

            new ROUTE({
              fromNode : new SFString("Roll_Touch"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("RollTimer"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("Run_Touch"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("StandTimer"),
              toField : new SFString("set_stopTime")}),

            new ROUTE({
              fromNode : new SFString("Run_Touch"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("PitchTimer"),
              toField : new SFString("set_stopTime")}),

            new ROUTE({
              fromNode : new SFString("Run_Touch"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("YawTimer"),
              toField : new SFString("set_stopTime")}),

            new ROUTE({
              fromNode : new SFString("Run_Touch"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("RollTimer"),
              toField : new SFString("set_stopTime")}),

            new ROUTE({
              fromNode : new SFString("Run_Touch"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("WalkTimer"),
              toField : new SFString("set_stopTime")}),

            new ROUTE({
              fromNode : new SFString("Run_Touch"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("JumpTimer"),
              toField : new SFString("set_stopTime")}),

            new ROUTE({
              fromNode : new SFString("Run_Touch"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("KickTimer"),
              toField : new SFString("set_stopTime")}),

            new ROUTE({
              fromNode : new SFString("Run_Touch"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("StopTimer"),
              toField : new SFString("set_stopTime")}),

            new ROUTE({
              fromNode : new SFString("Run_Touch"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("RunTimer"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("Jump_Touch"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("StandTimer"),
              toField : new SFString("set_stopTime")}),

            new ROUTE({
              fromNode : new SFString("Jump_Touch"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("PitchTimer"),
              toField : new SFString("set_stopTime")}),

            new ROUTE({
              fromNode : new SFString("Jump_Touch"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("YawTimer"),
              toField : new SFString("set_stopTime")}),

            new ROUTE({
              fromNode : new SFString("Jump_Touch"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("RollTimer"),
              toField : new SFString("set_stopTime")}),

            new ROUTE({
              fromNode : new SFString("Jump_Touch"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("WalkTimer"),
              toField : new SFString("set_stopTime")}),

            new ROUTE({
              fromNode : new SFString("Jump_Touch"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("RunTimer"),
              toField : new SFString("set_stopTime")}),

            new ROUTE({
              fromNode : new SFString("Jump_Touch"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("KickTimer"),
              toField : new SFString("set_stopTime")}),

            new ROUTE({
              fromNode : new SFString("Jump_Touch"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("StopTimer"),
              toField : new SFString("set_stopTime")}),

            new ROUTE({
              fromNode : new SFString("Jump_Touch"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("JumpTimer"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("Kick_Touch"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("StandTimer"),
              toField : new SFString("set_stopTime")}),

            new ROUTE({
              fromNode : new SFString("Kick_Touch"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("PitchTimer"),
              toField : new SFString("set_stopTime")}),

            new ROUTE({
              fromNode : new SFString("Kick_Touch"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("YawTimer"),
              toField : new SFString("set_stopTime")}),

            new ROUTE({
              fromNode : new SFString("Kick_Touch"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("RollTimer"),
              toField : new SFString("set_stopTime")}),

            new ROUTE({
              fromNode : new SFString("Kick_Touch"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("WalkTimer"),
              toField : new SFString("set_stopTime")}),

            new ROUTE({
              fromNode : new SFString("Kick_Touch"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("RunTimer"),
              toField : new SFString("set_stopTime")}),

            new ROUTE({
              fromNode : new SFString("Kick_Touch"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("JumpTimer"),
              toField : new SFString("set_stopTime")}),

            new ROUTE({
              fromNode : new SFString("Kick_Touch"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("StopTimer"),
              toField : new SFString("set_stopTime")}),

            new ROUTE({
              fromNode : new SFString("Kick_Touch"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("KickTimer"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("Stop_Touch"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("StandTimer"),
              toField : new SFString("set_stopTime")}),

            new ROUTE({
              fromNode : new SFString("Stop_Touch"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("PitchTimer"),
              toField : new SFString("set_stopTime")}),

            new ROUTE({
              fromNode : new SFString("Stop_Touch"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("YawTimer"),
              toField : new SFString("set_stopTime")}),

            new ROUTE({
              fromNode : new SFString("Stop_Touch"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("RollTimer"),
              toField : new SFString("set_stopTime")}),

            new ROUTE({
              fromNode : new SFString("Stop_Touch"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("WalkTimer"),
              toField : new SFString("set_stopTime")}),

            new ROUTE({
              fromNode : new SFString("Stop_Touch"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("RunTimer"),
              toField : new SFString("set_stopTime")}),

            new ROUTE({
              fromNode : new SFString("Stop_Touch"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("JumpTimer"),
              toField : new SFString("set_stopTime")}),

            new ROUTE({
              fromNode : new SFString("Stop_Touch"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("KickTimer"),
              toField : new SFString("set_stopTime")}),

            new ROUTE({
              fromNode : new SFString("Stop_Touch"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("StopTimer"),
              toField : new SFString("set_startTime")})])}))});
console.log(X3D0.toXMLNode());
