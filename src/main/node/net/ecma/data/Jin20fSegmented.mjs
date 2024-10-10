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
var Transform = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var IndexedLineSet = require('./x3d.mjs');
var MFInt32 = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var Color = require('./x3d.mjs');
var MFColor = require('./x3d.mjs');
var Coordinate = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
var HAnimHumanoid = require('./x3d.mjs');
var HAnimJoint = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var MFFloat = require('./x3d.mjs');
var HAnimSegment = require('./x3d.mjs');
var HAnimSite = require('./x3d.mjs');
var TouchSensor = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var IndexedFaceSet = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var ColorRGBA = require('./x3d.mjs');
var MFColorRGBA = require('./x3d.mjs');
var Billboard = require('./x3d.mjs');
var Text = require('./x3d.mjs');
var MFString = require('./x3d.mjs');
var FontStyle = require('./x3d.mjs');
var LineSet = require('./x3d.mjs');
var NavigationInfo = require('./x3d.mjs');
var Background = require('./x3d.mjs');
var DirectionalLight = require('./x3d.mjs');
var Viewpoint = require('./x3d.mjs');
var Sphere = require('./x3d.mjs');
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("4.0"),
      head : new SFNode(
        new head({
          component : new SFNode(
            new component({
              name : new SFString("HAnim"),
              level : new SFInt32(1)})),
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("JinScaledV2L1LOA4MinimumSkeleton20f.x3d")})])})),
      Scene : new SFNode(
        new Scene({
          /*https://www.web3d.org/documents/specifications/19774/V2.0/index.html*/
          /*0 0 0 at floor between feet, default I pose (relaxed attention) model gaze toward +Z, +x to model left, +y up, right-hand rule.*/
          children : new MFNode([
            new WorldInfo({
              title : new SFString("20f Jin v2 loa4 Level 1, Joints, Segments, Sites")}),

            new Transform({
              DEF : new SFString("ContainerScene000"),
              child : new SFNode(
                new Shape({
                  DEF : new SFString("AxisLinesShape"),
                  /*Red +X, Green +Y, Blue +Z*/
                  geometry : new SFNode(
                    new IndexedLineSet({
                      colorIndex : new MFInt32([0,1,2]),
                      colorPerVertex : new SFBool(false),
                      coordIndex : new MFInt32([0,1,-1,0,2,-1,0,3,-1]),
                      color : new SFNode(
                        new Color({
                          color : new MFColor([1,0,0,0,0.6,0,0,0,1])})),
                      coord : new SFNode(
                        new Coordinate({
                          point : new MFVec3f([0,0,0,0.1,0,0,0,0.1,0,0,0,0.1])}))}))}))}),

            new HAnimHumanoid({
              name : new SFString("JinLOA4S"),
              DEF : new SFString("hanim_JinLOA4S"),
              loa : new SFInt32(4),
              version : new SFString("2.0"),
              joints : new MFNode([
                new HAnimJoint({
                  name : new SFString("humanoid_root"),
                  DEF : new SFString("hanim_humanoid_root"),
                  center : new SFVec3f([0,0.77,0]),
                  ulimit : new MFFloat([0,0,0]),
                  llimit : new MFFloat([0,0,0]),
                  children : new MFNode([
                    new HAnimSegment({
                      name : new SFString("sacrum"),
                      DEF : new SFString("hanim_sacrum"),
                      children : new MFNode([
                        new Transform({
                          DEF : new SFString("Humanoid000"),
                          child : new SFNode(
                            new Shape({
                              USE : new SFString("AxisLinesShape")}))})])}),

                    new HAnimJoint({
                      name : new SFString("sacroiliac"),
                      DEF : new SFString("hanim_sacroiliac"),
                      center : new SFVec3f([0,0.826,0.02]),
                      ulimit : new MFFloat([0,0,0]),
                      llimit : new MFFloat([0,0,0]),
                      children : new MFNode([
                        new HAnimSegment({
                          name : new SFString("pelvis"),
                          DEF : new SFString("hanim_pelvis"),
                          children : new MFNode([
                            new HAnimSite({
                              name : new SFString("l_iliocristale"),
                              DEF : new SFString("hanim_l_iliocristale_pt"),
                              translation : new SFVec3f([0.13,0.92,0.0035]),
                              children : new MFNode([
                                new TouchSensor({
                                  description : new SFString("HAnimSite 33 hanim_l_iliocristale_pt")}),

                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          diffuseColor : new SFColor([1,1,1])}))})),
                                  geometry : new SFNode(
                                    new IndexedFaceSet({
                                      coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                      creaseAngle : new SFFloat(0.5),
                                      solid : new SFBool(false),
                                      color : new SFNode(
                                        new ColorRGBA({
                                          color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                new Billboard({
                                  axisOfRotation : new SFVec3f([0,0,0]),
                                  children : new MFNode([
                                    new Shape({
                                      geometry : new SFNode(
                                        new Text({
                                          string : new MFString(["33"]),
                                          fontStyle : new SFNode(
                                            new FontStyle({
                                              size : new SFFloat(0.035)}))}))})])})])}),

                            new HAnimSite({
                              name : new SFString("r_iliocristale"),
                              DEF : new SFString("hanim_r_iliocristale_pt"),
                              translation : new SFVec3f([-0.13,0.92,0.0035]),
                              children : new MFNode([
                                new TouchSensor({
                                  description : new SFString("HAnimSite 36 hanim_r_iliocristale_pt")}),

                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          diffuseColor : new SFColor([1,1,1])}))})),
                                  geometry : new SFNode(
                                    new IndexedFaceSet({
                                      coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                      creaseAngle : new SFFloat(0.5),
                                      solid : new SFBool(false),
                                      color : new SFNode(
                                        new ColorRGBA({
                                          color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                new Billboard({
                                  axisOfRotation : new SFVec3f([0,0,0]),
                                  children : new MFNode([
                                    new Shape({
                                      geometry : new SFNode(
                                        new Text({
                                          string : new MFString(["36"]),
                                          fontStyle : new SFNode(
                                            new FontStyle({
                                              size : new SFFloat(0.035)}))}))})])})])}),

                            new HAnimSite({
                              name : new SFString("l_trochanterion"),
                              DEF : new SFString("hanim_l_trochanterion_pt"),
                              translation : new SFVec3f([0.14,0.8,0.0035]),
                              children : new MFNode([
                                new TouchSensor({
                                  description : new SFString("HAnimSite 42 hanim_l_trochanterion_pt")}),

                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          diffuseColor : new SFColor([1,1,1])}))})),
                                  geometry : new SFNode(
                                    new IndexedFaceSet({
                                      coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                      creaseAngle : new SFFloat(0.5),
                                      solid : new SFBool(false),
                                      color : new SFNode(
                                        new ColorRGBA({
                                          color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                new Billboard({
                                  axisOfRotation : new SFVec3f([0,0,0]),
                                  children : new MFNode([
                                    new Shape({
                                      geometry : new SFNode(
                                        new Text({
                                          string : new MFString(["42"]),
                                          fontStyle : new SFNode(
                                            new FontStyle({
                                              size : new SFFloat(0.035)}))}))})])})])}),

                            new HAnimSite({
                              name : new SFString("r_trochanterion"),
                              DEF : new SFString("hanim_r_trochanterion_pt"),
                              translation : new SFVec3f([-0.14,0.8,0.0035]),
                              children : new MFNode([
                                new TouchSensor({
                                  description : new SFString("HAnimSite 46 hanim_r_trochanterion_pt")}),

                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          diffuseColor : new SFColor([1,1,1])}))})),
                                  geometry : new SFNode(
                                    new IndexedFaceSet({
                                      coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                      creaseAngle : new SFFloat(0.5),
                                      solid : new SFBool(false),
                                      color : new SFNode(
                                        new ColorRGBA({
                                          color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                new Billboard({
                                  axisOfRotation : new SFVec3f([0,0,0]),
                                  children : new MFNode([
                                    new Shape({
                                      geometry : new SFNode(
                                        new Text({
                                          string : new MFString(["46"]),
                                          fontStyle : new SFNode(
                                            new FontStyle({
                                              size : new SFFloat(0.035)}))}))})])})])}),

                            new HAnimSite({
                              name : new SFString("l_asis"),
                              DEF : new SFString("hanim_l_asis_pt"),
                              translation : new SFVec3f([0.1,0.86,0.0035]),
                              children : new MFNode([
                                new TouchSensor({
                                  description : new SFString("HAnimSite 32 hanim_l_asis_pt")}),

                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          diffuseColor : new SFColor([1,1,1])}))})),
                                  geometry : new SFNode(
                                    new IndexedFaceSet({
                                      coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                      creaseAngle : new SFFloat(0.5),
                                      solid : new SFBool(false),
                                      color : new SFNode(
                                        new ColorRGBA({
                                          color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                new Billboard({
                                  axisOfRotation : new SFVec3f([0,0,0]),
                                  children : new MFNode([
                                    new Shape({
                                      geometry : new SFNode(
                                        new Text({
                                          string : new MFString(["32"]),
                                          fontStyle : new SFNode(
                                            new FontStyle({
                                              size : new SFFloat(0.035)}))}))})])})])}),

                            new HAnimSite({
                              name : new SFString("r_asis"),
                              DEF : new SFString("hanim_r_asis_pt"),
                              translation : new SFVec3f([-0.1,0.86,0.0035]),
                              children : new MFNode([
                                new TouchSensor({
                                  description : new SFString("HAnimSite 35 hanim_r_asis_pt")}),

                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          diffuseColor : new SFColor([1,1,1])}))})),
                                  geometry : new SFNode(
                                    new IndexedFaceSet({
                                      coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                      creaseAngle : new SFFloat(0.5),
                                      solid : new SFBool(false),
                                      color : new SFNode(
                                        new ColorRGBA({
                                          color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                new Billboard({
                                  axisOfRotation : new SFVec3f([0,0,0]),
                                  children : new MFNode([
                                    new Shape({
                                      geometry : new SFNode(
                                        new Text({
                                          string : new MFString(["35"]),
                                          fontStyle : new SFNode(
                                            new FontStyle({
                                              size : new SFFloat(0.035)}))}))})])})])}),

                            new HAnimSite({
                              name : new SFString("l_psis"),
                              DEF : new SFString("hanim_l_psis_pt"),
                              translation : new SFVec3f([0.05,0.84,-0.11]),
                              children : new MFNode([
                                new TouchSensor({
                                  description : new SFString("HAnimSite 34 hanim_l_psis_pt")}),

                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          diffuseColor : new SFColor([1,1,1])}))})),
                                  geometry : new SFNode(
                                    new IndexedFaceSet({
                                      coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                      creaseAngle : new SFFloat(0.5),
                                      solid : new SFBool(false),
                                      color : new SFNode(
                                        new ColorRGBA({
                                          color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                new Billboard({
                                  axisOfRotation : new SFVec3f([0,0,0]),
                                  children : new MFNode([
                                    new Shape({
                                      geometry : new SFNode(
                                        new Text({
                                          string : new MFString(["34"]),
                                          fontStyle : new SFNode(
                                            new FontStyle({
                                              size : new SFFloat(0.035)}))}))})])})])}),

                            new HAnimSite({
                              name : new SFString("r_psis"),
                              DEF : new SFString("hanim_r_psis_pt"),
                              translation : new SFVec3f([-0.05,0.84,-0.11]),
                              children : new MFNode([
                                new TouchSensor({
                                  description : new SFString("HAnimSite 37 hanim_r_psis_pt")}),

                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          diffuseColor : new SFColor([1,1,1])}))})),
                                  geometry : new SFNode(
                                    new IndexedFaceSet({
                                      coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                      creaseAngle : new SFFloat(0.5),
                                      solid : new SFBool(false),
                                      color : new SFNode(
                                        new ColorRGBA({
                                          color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                new Billboard({
                                  axisOfRotation : new SFVec3f([0,0,0]),
                                  children : new MFNode([
                                    new Shape({
                                      geometry : new SFNode(
                                        new Text({
                                          string : new MFString(["37"]),
                                          fontStyle : new SFNode(
                                            new FontStyle({
                                              size : new SFFloat(0.035)}))}))})])})])}),

                            new HAnimSite({
                              name : new SFString("crotch"),
                              DEF : new SFString("hanim_crotch_pt"),
                              translation : new SFVec3f([0,0.703,0]),
                              children : new MFNode([
                                new TouchSensor({
                                  description : new SFString("HAnimSite 38 hanim_crotch_pt")}),

                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          diffuseColor : new SFColor([1,1,1])}))})),
                                  geometry : new SFNode(
                                    new IndexedFaceSet({
                                      coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                      creaseAngle : new SFFloat(0.5),
                                      solid : new SFBool(false),
                                      color : new SFNode(
                                        new ColorRGBA({
                                          color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                new Billboard({
                                  axisOfRotation : new SFVec3f([0,0,0]),
                                  children : new MFNode([
                                    new Shape({
                                      geometry : new SFNode(
                                        new Text({
                                          string : new MFString(["38"]),
                                          fontStyle : new SFNode(
                                            new FontStyle({
                                              size : new SFFloat(0.035)}))}))})])})])}),

                            new HAnimSite({
                              name : new SFString("buttocks_standing_wall_contact_point"),
                              DEF : new SFString("hanim_buttocks_standing_wall_contact_point_pt"),
                              translation : new SFVec3f([0,0.8,-0.15]),
                              children : new MFNode([
                                new TouchSensor({
                                  description : new SFString("HAnimSite 93 hanim_buttocks_standing_wall_contact_point_pt")}),

                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          diffuseColor : new SFColor([1,1,1])}))})),
                                  geometry : new SFNode(
                                    new IndexedFaceSet({
                                      coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                      creaseAngle : new SFFloat(0.5),
                                      solid : new SFBool(false),
                                      color : new SFNode(
                                        new ColorRGBA({
                                          color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                new Billboard({
                                  axisOfRotation : new SFVec3f([0,0,0]),
                                  children : new MFNode([
                                    new Shape({
                                      geometry : new SFNode(
                                        new Text({
                                          string : new MFString(["93"]),
                                          fontStyle : new SFNode(
                                            new FontStyle({
                                              size : new SFFloat(0.035)}))}))})])})])}),

                            new Shape({
                              geometry : new SFNode(
                                new LineSet({
                                  vertexCount : new MFInt32([2]),
                                  color : new SFNode(
                                    new ColorRGBA({
                                      color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([0,0.826,0.02,0,0.77,0])}))}))})])}),

                        new HAnimJoint({
                          name : new SFString("l_hip"),
                          DEF : new SFString("hanim_l_hip"),
                          center : new SFVec3f([0.095,0.8266,-0.0183]),
                          ulimit : new MFFloat([0,0,0]),
                          llimit : new MFFloat([0,0,0]),
                          children : new MFNode([
                            new HAnimSegment({
                              name : new SFString("l_thigh"),
                              DEF : new SFString("hanim_l_thigh"),
                              children : new MFNode([
                                new HAnimSite({
                                  name : new SFString("l_knee_crease"),
                                  DEF : new SFString("hanim_l_knee_crease_pt"),
                                  translation : new SFVec3f([0.09,0.41,-0.056]),
                                  children : new MFNode([
                                    new TouchSensor({
                                      description : new SFString("HAnimSite 90 hanim_l_knee_crease_pt")}),

                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              diffuseColor : new SFColor([1,1,1])}))})),
                                      geometry : new SFNode(
                                        new IndexedFaceSet({
                                          coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                          creaseAngle : new SFFloat(0.5),
                                          solid : new SFBool(false),
                                          color : new SFNode(
                                            new ColorRGBA({
                                              color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                          coord : new SFNode(
                                            new Coordinate({
                                              point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                    new Billboard({
                                      axisOfRotation : new SFVec3f([0,0,0]),
                                      children : new MFNode([
                                        new Shape({
                                          geometry : new SFNode(
                                            new Text({
                                              string : new MFString(["90"]),
                                              fontStyle : new SFNode(
                                                new FontStyle({
                                                  size : new SFFloat(0.035)}))}))})])})])}),

                                new HAnimSite({
                                  name : new SFString("l_femoral_medial_epicondyle"),
                                  DEF : new SFString("hanim_l_femoral_medial_epicondyle_pt"),
                                  translation : new SFVec3f([0.039,0.41,-0.01]),
                                  children : new MFNode([
                                    new TouchSensor({
                                      description : new SFString("HAnimSite 40 hanim_l_femoral_medial_epicondyle_pt")}),

                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              diffuseColor : new SFColor([1,1,1])}))})),
                                      geometry : new SFNode(
                                        new IndexedFaceSet({
                                          coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                          creaseAngle : new SFFloat(0.5),
                                          solid : new SFBool(false),
                                          color : new SFNode(
                                            new ColorRGBA({
                                              color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                          coord : new SFNode(
                                            new Coordinate({
                                              point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                    new Billboard({
                                      axisOfRotation : new SFVec3f([0,0,0]),
                                      children : new MFNode([
                                        new Shape({
                                          geometry : new SFNode(
                                            new Text({
                                              string : new MFString(["40"]),
                                              fontStyle : new SFNode(
                                                new FontStyle({
                                                  size : new SFFloat(0.035)}))}))})])})])}),

                                new HAnimSite({
                                  name : new SFString("l_femoral_lateral_epicondyle"),
                                  DEF : new SFString("hanim_l_femoral_lateral_epicondyle_pt"),
                                  translation : new SFVec3f([0.127,0.41,-0.01]),
                                  children : new MFNode([
                                    new TouchSensor({
                                      description : new SFString("HAnimSite 39 hanim_l_femoral_lateral_epicondyle_pt")}),

                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              diffuseColor : new SFColor([1,1,1])}))})),
                                      geometry : new SFNode(
                                        new IndexedFaceSet({
                                          coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                          creaseAngle : new SFFloat(0.5),
                                          solid : new SFBool(false),
                                          color : new SFNode(
                                            new ColorRGBA({
                                              color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                          coord : new SFNode(
                                            new Coordinate({
                                              point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                    new Billboard({
                                      axisOfRotation : new SFVec3f([0,0,0]),
                                      children : new MFNode([
                                        new Shape({
                                          geometry : new SFNode(
                                            new Text({
                                              string : new MFString(["39"]),
                                              fontStyle : new SFNode(
                                                new FontStyle({
                                                  size : new SFFloat(0.035)}))}))})])})])}),

                                new HAnimSite({
                                  name : new SFString("l_suprapatella"),
                                  DEF : new SFString("hanim_l_suprapatella_pt"),
                                  translation : new SFVec3f([0.085,0.41,0.042]),
                                  children : new MFNode([
                                    new TouchSensor({
                                      description : new SFString("HAnimSite 41 hanim_l_suprapatella_pt")}),

                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              diffuseColor : new SFColor([1,1,1])}))})),
                                      geometry : new SFNode(
                                        new IndexedFaceSet({
                                          coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                          creaseAngle : new SFFloat(0.5),
                                          solid : new SFBool(false),
                                          color : new SFNode(
                                            new ColorRGBA({
                                              color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                          coord : new SFNode(
                                            new Coordinate({
                                              point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                    new Billboard({
                                      axisOfRotation : new SFVec3f([0,0,0]),
                                      children : new MFNode([
                                        new Shape({
                                          geometry : new SFNode(
                                            new Text({
                                              string : new MFString(["41"]),
                                              fontStyle : new SFNode(
                                                new FontStyle({
                                                  size : new SFFloat(0.035)}))}))})])})])}),

                                new Shape({
                                  geometry : new SFNode(
                                    new LineSet({
                                      vertexCount : new MFInt32([2]),
                                      color : new SFNode(
                                        new ColorRGBA({
                                          color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([0.095,0.8266,-0.0183,0,0.826,0.02])}))}))})])}),

                            new HAnimJoint({
                              name : new SFString("l_knee"),
                              DEF : new SFString("hanim_l_knee"),
                              center : new SFVec3f([0.0926,0.4088,-0.01944]),
                              ulimit : new MFFloat([0,0,0]),
                              llimit : new MFFloat([0,0,0]),
                              children : new MFNode([
                                new HAnimSegment({
                                  name : new SFString("l_calf"),
                                  DEF : new SFString("hanim_l_calf"),
                                  children : new MFNode([
                                    new HAnimSite({
                                      name : new SFString("l_tibiale"),
                                      DEF : new SFString("hanim_l_tibiale_pt"),
                                      translation : new SFVec3f([0.09,0.31,0.038]),
                                      children : new MFNode([
                                        new TouchSensor({
                                          description : new SFString("HAnimSite 47 hanim_l_tibiale_pt")}),

                                        new Shape({
                                          appearance : new SFNode(
                                            new Appearance({
                                              material : new SFNode(
                                                new Material({
                                                  diffuseColor : new SFColor([1,1,1])}))})),
                                          geometry : new SFNode(
                                            new IndexedFaceSet({
                                              coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                              creaseAngle : new SFFloat(0.5),
                                              solid : new SFBool(false),
                                              color : new SFNode(
                                                new ColorRGBA({
                                                  color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                        new Billboard({
                                          axisOfRotation : new SFVec3f([0,0,0]),
                                          children : new MFNode([
                                            new Shape({
                                              geometry : new SFNode(
                                                new Text({
                                                  string : new MFString(["47"]),
                                                  fontStyle : new SFNode(
                                                    new FontStyle({
                                                      size : new SFFloat(0.035)}))}))})])})])}),

                                    new HAnimSite({
                                      name : new SFString("l_medial_malleolus"),
                                      DEF : new SFString("hanim_l_medial_malleolus_pt"),
                                      translation : new SFVec3f([0.061,0.095,-0.02]),
                                      children : new MFNode([
                                        new TouchSensor({
                                          description : new SFString("HAnimSite 48 hanim_l_medial_malleolus_pt")}),

                                        new Shape({
                                          appearance : new SFNode(
                                            new Appearance({
                                              material : new SFNode(
                                                new Material({
                                                  diffuseColor : new SFColor([1,1,1])}))})),
                                          geometry : new SFNode(
                                            new IndexedFaceSet({
                                              coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                              creaseAngle : new SFFloat(0.5),
                                              solid : new SFBool(false),
                                              color : new SFNode(
                                                new ColorRGBA({
                                                  color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                        new Billboard({
                                          axisOfRotation : new SFVec3f([0,0,0]),
                                          children : new MFNode([
                                            new Shape({
                                              geometry : new SFNode(
                                                new Text({
                                                  string : new MFString(["48"]),
                                                  fontStyle : new SFNode(
                                                    new FontStyle({
                                                      size : new SFFloat(0.035)}))}))})])})])}),

                                    new HAnimSite({
                                      name : new SFString("l_lateral_malleolus"),
                                      DEF : new SFString("hanim_l_lateral_malleolus_pt"),
                                      translation : new SFVec3f([0.12,0.095,-0.02]),
                                      children : new MFNode([
                                        new TouchSensor({
                                          description : new SFString("HAnimSite 49 hanim_l_lateral_malleolus_pt")}),

                                        new Shape({
                                          appearance : new SFNode(
                                            new Appearance({
                                              material : new SFNode(
                                                new Material({
                                                  diffuseColor : new SFColor([1,1,1])}))})),
                                          geometry : new SFNode(
                                            new IndexedFaceSet({
                                              coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                              creaseAngle : new SFFloat(0.5),
                                              solid : new SFBool(false),
                                              color : new SFNode(
                                                new ColorRGBA({
                                                  color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                        new Billboard({
                                          axisOfRotation : new SFVec3f([0,0,0]),
                                          children : new MFNode([
                                            new Shape({
                                              geometry : new SFNode(
                                                new Text({
                                                  string : new MFString(["49"]),
                                                  fontStyle : new SFNode(
                                                    new FontStyle({
                                                      size : new SFFloat(0.035)}))}))})])})])}),

                                    new Shape({
                                      geometry : new SFNode(
                                        new LineSet({
                                          vertexCount : new MFInt32([2]),
                                          color : new SFNode(
                                            new ColorRGBA({
                                              color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                          coord : new SFNode(
                                            new Coordinate({
                                              point : new MFVec3f([0.0926,0.4088,-0.01944,0.095,0.8266,-0.0183])}))}))})])}),

                                new HAnimJoint({
                                  name : new SFString("l_talocrural"),
                                  DEF : new SFString("hanim_l_talocrural"),
                                  center : new SFVec3f([0.0888,0.09545,-0.01045]),
                                  ulimit : new MFFloat([0,0,0]),
                                  llimit : new MFFloat([0,0,0]),
                                  children : new MFNode([
                                    new HAnimSegment({
                                      name : new SFString("l_talus"),
                                      DEF : new SFString("hanim_l_talus"),
                                      children : new MFNode([
                                        new HAnimSite({
                                          name : new SFString("l_sphyrion"),
                                          DEF : new SFString("hanim_l_sphyrion_pt"),
                                          translation : new SFVec3f([0.054,0.065,-0.02]),
                                          children : new MFNode([
                                            new TouchSensor({
                                              description : new SFString("HAnimSite 50 hanim_l_sphyrion_pt")}),

                                            new Shape({
                                              appearance : new SFNode(
                                                new Appearance({
                                                  material : new SFNode(
                                                    new Material({
                                                      diffuseColor : new SFColor([1,1,1])}))})),
                                              geometry : new SFNode(
                                                new IndexedFaceSet({
                                                  coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                  creaseAngle : new SFFloat(0.5),
                                                  solid : new SFBool(false),
                                                  color : new SFNode(
                                                    new ColorRGBA({
                                                      color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                                  coord : new SFNode(
                                                    new Coordinate({
                                                      point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                            new Billboard({
                                              axisOfRotation : new SFVec3f([0,0,0]),
                                              children : new MFNode([
                                                new Shape({
                                                  geometry : new SFNode(
                                                    new Text({
                                                      string : new MFString(["50"]),
                                                      fontStyle : new SFNode(
                                                        new FontStyle({
                                                          size : new SFFloat(0.035)}))}))})])})])}),

                                        new HAnimSite({
                                          name : new SFString("l_calcaneus_posterior"),
                                          DEF : new SFString("hanim_l_calcaneus_posterior_pt"),
                                          translation : new SFVec3f([0.09,0.03,-0.06]),
                                          children : new MFNode([
                                            new TouchSensor({
                                              description : new SFString("HAnimSite 58 hanim_l_calcaneus_posterior_pt")}),

                                            new Shape({
                                              appearance : new SFNode(
                                                new Appearance({
                                                  material : new SFNode(
                                                    new Material({
                                                      diffuseColor : new SFColor([1,1,1])}))})),
                                              geometry : new SFNode(
                                                new IndexedFaceSet({
                                                  coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                  creaseAngle : new SFFloat(0.5),
                                                  solid : new SFBool(false),
                                                  color : new SFNode(
                                                    new ColorRGBA({
                                                      color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                                  coord : new SFNode(
                                                    new Coordinate({
                                                      point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                            new Billboard({
                                              axisOfRotation : new SFVec3f([0,0,0]),
                                              children : new MFNode([
                                                new Shape({
                                                  geometry : new SFNode(
                                                    new Text({
                                                      string : new MFString(["58"]),
                                                      fontStyle : new SFNode(
                                                        new FontStyle({
                                                          size : new SFFloat(0.035)}))}))})])})])}),

                                        new Shape({
                                          geometry : new SFNode(
                                            new LineSet({
                                              vertexCount : new MFInt32([2]),
                                              color : new SFNode(
                                                new ColorRGBA({
                                                  color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([0.0888,0.09545,-0.01045,0.0926,0.4088,-0.01944])}))}))})])}),

                                    new HAnimJoint({
                                      name : new SFString("l_talocalcaneonavicular"),
                                      DEF : new SFString("hanim_l_talocalcaneonavicular"),
                                      center : new SFVec3f([0.0783,0.0369,0.0049]),
                                      ulimit : new MFFloat([0,0,0]),
                                      llimit : new MFFloat([0,0,0]),
                                      children : new MFNode([
                                        new HAnimSegment({
                                          name : new SFString("l_navicular"),
                                          DEF : new SFString("hanim_l_navicular"),
                                          children : new MFNode([
                                            new Shape({
                                              geometry : new SFNode(
                                                new LineSet({
                                                  vertexCount : new MFInt32([2]),
                                                  color : new SFNode(
                                                    new ColorRGBA({
                                                      color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                  coord : new SFNode(
                                                    new Coordinate({
                                                      point : new MFVec3f([0.0783,0.0369,0.0049,0.0888,0.09545,-0.01045])}))}))})])}),

                                        new HAnimJoint({
                                          name : new SFString("l_cuneonavicular_1"),
                                          DEF : new SFString("hanim_l_cuneonavicular_1"),
                                          center : new SFVec3f([0.0674,0.0321,0.0184]),
                                          ulimit : new MFFloat([0,0,0]),
                                          llimit : new MFFloat([0,0,0]),
                                          children : new MFNode([
                                            new HAnimSegment({
                                              name : new SFString("l_cuneiform_1"),
                                              DEF : new SFString("hanim_l_cuneiform_1"),
                                              children : new MFNode([
                                                new Shape({
                                                  geometry : new SFNode(
                                                    new LineSet({
                                                      vertexCount : new MFInt32([2]),
                                                      color : new SFNode(
                                                        new ColorRGBA({
                                                          color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                      coord : new SFNode(
                                                        new Coordinate({
                                                          point : new MFVec3f([0.0674,0.0321,0.0184,0.0783,0.0369,0.0049])}))}))})])}),

                                            new HAnimJoint({
                                              name : new SFString("l_tarsometatarsal_1"),
                                              DEF : new SFString("hanim_l_tarsometatarsal_1"),
                                              center : new SFVec3f([0.0646,0.02324,0.0442]),
                                              ulimit : new MFFloat([0,0,0]),
                                              llimit : new MFFloat([0,0,0]),
                                              children : new MFNode([
                                                new HAnimSegment({
                                                  name : new SFString("l_metatarsal_1"),
                                                  DEF : new SFString("hanim_l_metatarsal_1"),
                                                  children : new MFNode([
                                                    new Shape({
                                                      geometry : new SFNode(
                                                        new LineSet({
                                                          vertexCount : new MFInt32([2]),
                                                          color : new SFNode(
                                                            new ColorRGBA({
                                                              color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                          coord : new SFNode(
                                                            new Coordinate({
                                                              point : new MFVec3f([0.0646,0.02324,0.0442,0.0674,0.0321,0.0184])}))}))})])}),

                                                new HAnimJoint({
                                                  name : new SFString("l_metatarsophalangeal_1"),
                                                  DEF : new SFString("hanim_l_metatarsophalangeal_1"),
                                                  center : new SFVec3f([0.0621,0.01442,0.0936]),
                                                  ulimit : new MFFloat([0,0,0]),
                                                  llimit : new MFFloat([0,0,0]),
                                                  children : new MFNode([
                                                    new HAnimSegment({
                                                      name : new SFString("l_tarsal_proximal_phalanx_1"),
                                                      DEF : new SFString("hanim_l_tarsal_proximal_phalanx_1"),
                                                      children : new MFNode([
                                                        new HAnimSite({
                                                          name : new SFString("l_metatarsal_phalanx_1"),
                                                          DEF : new SFString("hanim_l_metatarsal_phalanx_1_pt"),
                                                          translation : new SFVec3f([0.062,0.012,0.1]),
                                                          children : new MFNode([
                                                            new TouchSensor({
                                                              description : new SFString("HAnimSite 55 hanim_l_metatarsal_phalanx_1_pt")}),

                                                            new Shape({
                                                              appearance : new SFNode(
                                                                new Appearance({
                                                                  material : new SFNode(
                                                                    new Material({
                                                                      diffuseColor : new SFColor([1,1,1])}))})),
                                                              geometry : new SFNode(
                                                                new IndexedFaceSet({
                                                                  coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                  creaseAngle : new SFFloat(0.5),
                                                                  solid : new SFBool(false),
                                                                  color : new SFNode(
                                                                    new ColorRGBA({
                                                                      color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                                                  coord : new SFNode(
                                                                    new Coordinate({
                                                                      point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                                            new Billboard({
                                                              axisOfRotation : new SFVec3f([0,0,0]),
                                                              children : new MFNode([
                                                                new Shape({
                                                                  geometry : new SFNode(
                                                                    new Text({
                                                                      string : new MFString(["55"]),
                                                                      fontStyle : new SFNode(
                                                                        new FontStyle({
                                                                          size : new SFFloat(0.035)}))}))})])})])}),

                                                        new Shape({
                                                          geometry : new SFNode(
                                                            new LineSet({
                                                              vertexCount : new MFInt32([2]),
                                                              color : new SFNode(
                                                                new ColorRGBA({
                                                                  color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                              coord : new SFNode(
                                                                new Coordinate({
                                                                  point : new MFVec3f([0.0621,0.01442,0.0936,0.0646,0.02324,0.0442])}))}))})])}),

                                                    new HAnimJoint({
                                                      name : new SFString("l_tarsal_interphalangeal_1"),
                                                      DEF : new SFString("hanim_l_tarsal_interphalangeal_1"),
                                                      center : new SFVec3f([0.062,0.012,0.115]),
                                                      ulimit : new MFFloat([0,0,0]),
                                                      llimit : new MFFloat([0,0,0]),
                                                      children : new MFNode([
                                                        new HAnimSegment({
                                                          name : new SFString("l_tarsal_distal_phalanx_1"),
                                                          DEF : new SFString("hanim_l_tarsal_distal_phalanx_1"),
                                                          children : new MFNode([
                                                            new HAnimSite({
                                                              name : new SFString("l_tarsal_distal_phalanx_1"),
                                                              DEF : new SFString("hanim_l_tarsal_distal_phalanx_1_tip"),
                                                              translation : new SFVec3f([0.062,0.012,0.134]),
                                                              children : new MFNode([
                                                                new TouchSensor({
                                                                  description : new SFString("HAnimSite 111 hanim_l_tarsal_distal_phalanx_1_tip")}),

                                                                new Shape({
                                                                  appearance : new SFNode(
                                                                    new Appearance({
                                                                      material : new SFNode(
                                                                        new Material({
                                                                          diffuseColor : new SFColor([1,1,1])}))})),
                                                                  geometry : new SFNode(
                                                                    new IndexedFaceSet({
                                                                      coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                      creaseAngle : new SFFloat(0.5),
                                                                      solid : new SFBool(false),
                                                                      color : new SFNode(
                                                                        new ColorRGBA({
                                                                          color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                                                      coord : new SFNode(
                                                                        new Coordinate({
                                                                          point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                                                new Billboard({
                                                                  axisOfRotation : new SFVec3f([0,0,0]),
                                                                  children : new MFNode([
                                                                    new Shape({
                                                                      geometry : new SFNode(
                                                                        new Text({
                                                                          string : new MFString(["111"]),
                                                                          fontStyle : new SFNode(
                                                                            new FontStyle({
                                                                              size : new SFFloat(0.035)}))}))})])})])}),

                                                            new Shape({
                                                              geometry : new SFNode(
                                                                new LineSet({
                                                                  vertexCount : new MFInt32([2]),
                                                                  color : new SFNode(
                                                                    new ColorRGBA({
                                                                      color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                                  coord : new SFNode(
                                                                    new Coordinate({
                                                                      point : new MFVec3f([0.062,0.012,0.115,0.0621,0.01442,0.0936])}))}))})])})])})])})])})])}),

                                        new HAnimJoint({
                                          name : new SFString("l_cuneonavicular_2"),
                                          DEF : new SFString("hanim_l_cuneonavicular_2"),
                                          center : new SFVec3f([0.0814,0.0335,0.02143]),
                                          ulimit : new MFFloat([0,0,0]),
                                          llimit : new MFFloat([0,0,0]),
                                          children : new MFNode([
                                            new HAnimSegment({
                                              name : new SFString("l_cuneiform_2"),
                                              DEF : new SFString("hanim_l_cuneiform_2"),
                                              children : new MFNode([
                                                new Shape({
                                                  geometry : new SFNode(
                                                    new LineSet({
                                                      vertexCount : new MFInt32([2]),
                                                      color : new SFNode(
                                                        new ColorRGBA({
                                                          color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                      coord : new SFNode(
                                                        new Coordinate({
                                                          point : new MFVec3f([0.0814,0.0335,0.02143,0.0783,0.0369,0.0049])}))}))})])}),

                                            new HAnimJoint({
                                              name : new SFString("l_tarsometatarsal_2"),
                                              DEF : new SFString("hanim_l_tarsometatarsal_2"),
                                              center : new SFVec3f([0.0802,0.0261,0.0411]),
                                              ulimit : new MFFloat([0,0,0]),
                                              llimit : new MFFloat([0,0,0]),
                                              children : new MFNode([
                                                new HAnimSegment({
                                                  name : new SFString("l_metatarsal_2"),
                                                  DEF : new SFString("hanim_l_metatarsal_2"),
                                                  children : new MFNode([
                                                    new Shape({
                                                      geometry : new SFNode(
                                                        new LineSet({
                                                          vertexCount : new MFInt32([2]),
                                                          color : new SFNode(
                                                            new ColorRGBA({
                                                              color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                          coord : new SFNode(
                                                            new Coordinate({
                                                              point : new MFVec3f([0.0802,0.0261,0.0411,0.0814,0.0335,0.02143])}))}))})])}),

                                                new HAnimJoint({
                                                  name : new SFString("l_metatarsophalangeal_2"),
                                                  DEF : new SFString("hanim_l_metatarsophalangeal_2"),
                                                  center : new SFVec3f([0.0825,0.01497,0.09783]),
                                                  ulimit : new MFFloat([0,0,0]),
                                                  llimit : new MFFloat([0,0,0]),
                                                  children : new MFNode([
                                                    new HAnimSegment({
                                                      name : new SFString("l_tarsal_proximal_phalanx_2"),
                                                      DEF : new SFString("hanim_l_tarsal_proximal_phalanx_2"),
                                                      children : new MFNode([
                                                        new Shape({
                                                          geometry : new SFNode(
                                                            new LineSet({
                                                              vertexCount : new MFInt32([2]),
                                                              color : new SFNode(
                                                                new ColorRGBA({
                                                                  color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                              coord : new SFNode(
                                                                new Coordinate({
                                                                  point : new MFVec3f([0.0825,0.01497,0.09783,0.0802,0.0261,0.0411])}))}))})])}),

                                                    new HAnimJoint({
                                                      name : new SFString("l_tarsal_proximal_interphalangeal_2"),
                                                      DEF : new SFString("hanim_l_tarsal_proximal_interphalangeal_2"),
                                                      center : new SFVec3f([0.0843,0.01265,0.114]),
                                                      ulimit : new MFFloat([0,0,0]),
                                                      llimit : new MFFloat([0,0,0]),
                                                      children : new MFNode([
                                                        new HAnimSegment({
                                                          name : new SFString("l_tarsal_middle_phalanx_2"),
                                                          DEF : new SFString("hanim_l_tarsal_middle_phalanx_2"),
                                                          children : new MFNode([
                                                            new Shape({
                                                              geometry : new SFNode(
                                                                new LineSet({
                                                                  vertexCount : new MFInt32([2]),
                                                                  color : new SFNode(
                                                                    new ColorRGBA({
                                                                      color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                                  coord : new SFNode(
                                                                    new Coordinate({
                                                                      point : new MFVec3f([0.0843,0.01265,0.114,0.0825,0.01497,0.09783])}))}))})])}),

                                                        new HAnimJoint({
                                                          name : new SFString("l_tarsal_distal_interphalangeal_2"),
                                                          DEF : new SFString("hanim_l_tarsal_distal_interphalangeal_2"),
                                                          center : new SFVec3f([0.0843,0.00982,0.123435]),
                                                          ulimit : new MFFloat([0,0,0]),
                                                          llimit : new MFFloat([0,0,0]),
                                                          children : new MFNode([
                                                            new HAnimSegment({
                                                              name : new SFString("l_tarsal_distal_phalanx_2"),
                                                              DEF : new SFString("hanim_l_tarsal_distal_phalanx_2"),
                                                              children : new MFNode([
                                                                new HAnimSite({
                                                                  name : new SFString("l_tarsal_distal_phalanx_2"),
                                                                  DEF : new SFString("hanim_l_tarsal_distal_phalanx_2_tip"),
                                                                  translation : new SFVec3f([0.08,0.016,0.14]),
                                                                  children : new MFNode([
                                                                    new TouchSensor({
                                                                      description : new SFString("HAnimSite 112 hanim_l_tarsal_distal_phalanx_2_tip")}),

                                                                    new Shape({
                                                                      appearance : new SFNode(
                                                                        new Appearance({
                                                                          material : new SFNode(
                                                                            new Material({
                                                                              diffuseColor : new SFColor([1,1,1])}))})),
                                                                      geometry : new SFNode(
                                                                        new IndexedFaceSet({
                                                                          coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                          creaseAngle : new SFFloat(0.5),
                                                                          solid : new SFBool(false),
                                                                          color : new SFNode(
                                                                            new ColorRGBA({
                                                                              color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                                                          coord : new SFNode(
                                                                            new Coordinate({
                                                                              point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                                                    new Billboard({
                                                                      axisOfRotation : new SFVec3f([0,0,0]),
                                                                      children : new MFNode([
                                                                        new Shape({
                                                                          geometry : new SFNode(
                                                                            new Text({
                                                                              string : new MFString(["112"]),
                                                                              fontStyle : new SFNode(
                                                                                new FontStyle({
                                                                                  size : new SFFloat(0.035)}))}))})])})])}),

                                                                new Shape({
                                                                  geometry : new SFNode(
                                                                    new LineSet({
                                                                      vertexCount : new MFInt32([2]),
                                                                      color : new SFNode(
                                                                        new ColorRGBA({
                                                                          color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                                      coord : new SFNode(
                                                                        new Coordinate({
                                                                          point : new MFVec3f([0.0843,0.00982,0.123435,0.0843,0.01265,0.114])}))}))})])})])})])})])})])})])}),

                                        new HAnimJoint({
                                          name : new SFString("l_cuneonavicular_3"),
                                          DEF : new SFString("hanim_l_cuneonavicular_3"),
                                          center : new SFVec3f([0.09297,0.0334,0.01982]),
                                          ulimit : new MFFloat([0,0,0]),
                                          llimit : new MFFloat([0,0,0]),
                                          children : new MFNode([
                                            new HAnimSegment({
                                              name : new SFString("l_cuneiform_3"),
                                              DEF : new SFString("hanim_l_cuneiform_3"),
                                              children : new MFNode([
                                                new Shape({
                                                  geometry : new SFNode(
                                                    new LineSet({
                                                      vertexCount : new MFInt32([2]),
                                                      color : new SFNode(
                                                        new ColorRGBA({
                                                          color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                      coord : new SFNode(
                                                        new Coordinate({
                                                          point : new MFVec3f([0.09297,0.0334,0.01982,0.0783,0.0369,0.0049])}))}))})])}),

                                            new HAnimJoint({
                                              name : new SFString("l_tarsometatarsal_3"),
                                              DEF : new SFString("hanim_l_tarsometatarsal_3"),
                                              center : new SFVec3f([0.09459,0.0261,0.0394]),
                                              ulimit : new MFFloat([0,0,0]),
                                              llimit : new MFFloat([0,0,0]),
                                              children : new MFNode([
                                                new HAnimSegment({
                                                  name : new SFString("l_metatarsal_3"),
                                                  DEF : new SFString("hanim_l_metatarsal_3"),
                                                  children : new MFNode([
                                                    new Shape({
                                                      geometry : new SFNode(
                                                        new LineSet({
                                                          vertexCount : new MFInt32([2]),
                                                          color : new SFNode(
                                                            new ColorRGBA({
                                                              color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                          coord : new SFNode(
                                                            new Coordinate({
                                                              point : new MFVec3f([0.09459,0.0261,0.0394,0.09297,0.0334,0.01982])}))}))})])}),

                                                new HAnimJoint({
                                                  name : new SFString("l_metatarsophalangeal_3"),
                                                  DEF : new SFString("hanim_l_metatarsophalangeal_3"),
                                                  center : new SFVec3f([0.0965,0.01505,0.0954]),
                                                  ulimit : new MFFloat([0,0,0]),
                                                  llimit : new MFFloat([0,0,0]),
                                                  children : new MFNode([
                                                    new HAnimSegment({
                                                      name : new SFString("l_tarsal_proximal_phalanx_3"),
                                                      DEF : new SFString("hanim_l_tarsal_proximal_phalanx_3"),
                                                      children : new MFNode([
                                                        new Shape({
                                                          geometry : new SFNode(
                                                            new LineSet({
                                                              vertexCount : new MFInt32([2]),
                                                              color : new SFNode(
                                                                new ColorRGBA({
                                                                  color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                              coord : new SFNode(
                                                                new Coordinate({
                                                                  point : new MFVec3f([0.0965,0.01505,0.0954,0.09459,0.0261,0.0394])}))}))})])}),

                                                    new HAnimJoint({
                                                      name : new SFString("l_tarsal_proximal_interphalangeal_3"),
                                                      DEF : new SFString("hanim_l_tarsal_proximal_interphalangeal_3"),
                                                      center : new SFVec3f([0.09886,0.01192,0.11047]),
                                                      ulimit : new MFFloat([0,0,0]),
                                                      llimit : new MFFloat([0,0,0]),
                                                      children : new MFNode([
                                                        new HAnimSegment({
                                                          name : new SFString("l_tarsal_middle_phalanx_3"),
                                                          DEF : new SFString("hanim_l_tarsal_middle_phalanx_3"),
                                                          children : new MFNode([
                                                            new Shape({
                                                              geometry : new SFNode(
                                                                new LineSet({
                                                                  vertexCount : new MFInt32([2]),
                                                                  color : new SFNode(
                                                                    new ColorRGBA({
                                                                      color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                                  coord : new SFNode(
                                                                    new Coordinate({
                                                                      point : new MFVec3f([0.09886,0.01192,0.11047,0.0965,0.01505,0.0954])}))}))})])}),

                                                        new HAnimJoint({
                                                          name : new SFString("l_tarsal_distal_interphalangeal_3"),
                                                          DEF : new SFString("hanim_l_tarsal_distal_interphalangeal_3"),
                                                          center : new SFVec3f([0.1004,0.00983,0.1197]),
                                                          ulimit : new MFFloat([0,0,0]),
                                                          llimit : new MFFloat([0,0,0]),
                                                          children : new MFNode([
                                                            new HAnimSegment({
                                                              name : new SFString("l_tarsal_distal_phalanx_3"),
                                                              DEF : new SFString("hanim_l_tarsal_distal_phalanx_3"),
                                                              children : new MFNode([
                                                                new HAnimSite({
                                                                  name : new SFString("l_tarsal_distal_phalanx_3"),
                                                                  DEF : new SFString("hanim_l_tarsal_distal_phalanx_3_tip"),
                                                                  translation : new SFVec3f([0.1,0.016,0.14]),
                                                                  children : new MFNode([
                                                                    new TouchSensor({
                                                                      description : new SFString("HAnimSite 113 hanim_l_tarsal_distal_phalanx_3_tip")}),

                                                                    new Shape({
                                                                      appearance : new SFNode(
                                                                        new Appearance({
                                                                          material : new SFNode(
                                                                            new Material({
                                                                              diffuseColor : new SFColor([1,1,1])}))})),
                                                                      geometry : new SFNode(
                                                                        new IndexedFaceSet({
                                                                          coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                          creaseAngle : new SFFloat(0.5),
                                                                          solid : new SFBool(false),
                                                                          color : new SFNode(
                                                                            new ColorRGBA({
                                                                              color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                                                          coord : new SFNode(
                                                                            new Coordinate({
                                                                              point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                                                    new Billboard({
                                                                      axisOfRotation : new SFVec3f([0,0,0]),
                                                                      children : new MFNode([
                                                                        new Shape({
                                                                          geometry : new SFNode(
                                                                            new Text({
                                                                              string : new MFString(["113"]),
                                                                              fontStyle : new SFNode(
                                                                                new FontStyle({
                                                                                  size : new SFFloat(0.035)}))}))})])})])}),

                                                                new Shape({
                                                                  geometry : new SFNode(
                                                                    new LineSet({
                                                                      vertexCount : new MFInt32([2]),
                                                                      color : new SFNode(
                                                                        new ColorRGBA({
                                                                          color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                                      coord : new SFNode(
                                                                        new Coordinate({
                                                                          point : new MFVec3f([0.1004,0.00983,0.1197,0.09886,0.01192,0.11047])}))}))})])})])})])})])})])})])})])}),

                                    new HAnimJoint({
                                      name : new SFString("l_calcaneocuboid"),
                                      DEF : new SFString("hanim_l_calcaneocuboid"),
                                      center : new SFVec3f([0.0891,0.05798,-0.0259]),
                                      ulimit : new MFFloat([0,0,0]),
                                      llimit : new MFFloat([0,0,0]),
                                      children : new MFNode([
                                        new HAnimSegment({
                                          name : new SFString("l_calcaneus"),
                                          DEF : new SFString("hanim_l_calcaneus"),
                                          children : new MFNode([
                                            new Shape({
                                              geometry : new SFNode(
                                                new LineSet({
                                                  vertexCount : new MFInt32([2]),
                                                  color : new SFNode(
                                                    new ColorRGBA({
                                                      color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                  coord : new SFNode(
                                                    new Coordinate({
                                                      point : new MFVec3f([0.0891,0.05798,-0.0259,0.0888,0.09545,-0.01045])}))}))})])}),

                                        new HAnimJoint({
                                          name : new SFString("l_transversetarsal"),
                                          DEF : new SFString("hanim_l_transversetarsal"),
                                          center : new SFVec3f([0.11063,0.03528,0.0021]),
                                          ulimit : new MFFloat([0,0,0]),
                                          llimit : new MFFloat([0,0,0]),
                                          children : new MFNode([
                                            new HAnimSegment({
                                              name : new SFString("l_cuboid"),
                                              DEF : new SFString("hanim_l_cuboid"),
                                              children : new MFNode([
                                                new Shape({
                                                  geometry : new SFNode(
                                                    new LineSet({
                                                      vertexCount : new MFInt32([2]),
                                                      color : new SFNode(
                                                        new ColorRGBA({
                                                          color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                      coord : new SFNode(
                                                        new Coordinate({
                                                          point : new MFVec3f([0.11063,0.03528,0.0021,0.0891,0.05798,-0.0259])}))}))})])}),

                                            new HAnimJoint({
                                              name : new SFString("l_tarsometatarsal_4"),
                                              DEF : new SFString("hanim_l_tarsometatarsal_4"),
                                              center : new SFVec3f([0.10649,0.02454,0.03843]),
                                              ulimit : new MFFloat([0,0,0]),
                                              llimit : new MFFloat([0,0,0]),
                                              children : new MFNode([
                                                new HAnimSegment({
                                                  name : new SFString("l_metatarsal_4"),
                                                  DEF : new SFString("hanim_l_metatarsal_4"),
                                                  children : new MFNode([
                                                    new Shape({
                                                      geometry : new SFNode(
                                                        new LineSet({
                                                          vertexCount : new MFInt32([2]),
                                                          color : new SFNode(
                                                            new ColorRGBA({
                                                              color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                          coord : new SFNode(
                                                            new Coordinate({
                                                              point : new MFVec3f([0.10649,0.02454,0.03843,0.11063,0.03528,0.0021])}))}))})])}),

                                                new HAnimJoint({
                                                  name : new SFString("l_metatarsophalangeal_4"),
                                                  DEF : new SFString("hanim_l_metatarsophalangeal_4"),
                                                  center : new SFVec3f([0.109867,0.01435,0.09117]),
                                                  ulimit : new MFFloat([0,0,0]),
                                                  llimit : new MFFloat([0,0,0]),
                                                  children : new MFNode([
                                                    new HAnimSegment({
                                                      name : new SFString("l_tarsal_proximal_phalanx_4"),
                                                      DEF : new SFString("hanim_l_tarsal_proximal_phalanx_4"),
                                                      children : new MFNode([
                                                        new Shape({
                                                          geometry : new SFNode(
                                                            new LineSet({
                                                              vertexCount : new MFInt32([2]),
                                                              color : new SFNode(
                                                                new ColorRGBA({
                                                                  color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                              coord : new SFNode(
                                                                new Coordinate({
                                                                  point : new MFVec3f([0.109867,0.01435,0.09117,0.10649,0.02454,0.03843])}))}))})])}),

                                                    new HAnimJoint({
                                                      name : new SFString("l_tarsal_proximal_interphalangeal_4"),
                                                      DEF : new SFString("hanim_l_tarsal_proximal_interphalangeal_4"),
                                                      center : new SFVec3f([0.11416,0.01224,0.10631]),
                                                      ulimit : new MFFloat([0,0,0]),
                                                      llimit : new MFFloat([0,0,0]),
                                                      children : new MFNode([
                                                        new HAnimSegment({
                                                          name : new SFString("l_tarsal_middle_phalanx_4"),
                                                          DEF : new SFString("hanim_l_tarsal_middle_phalanx_4"),
                                                          children : new MFNode([
                                                            new Shape({
                                                              geometry : new SFNode(
                                                                new LineSet({
                                                                  vertexCount : new MFInt32([2]),
                                                                  color : new SFNode(
                                                                    new ColorRGBA({
                                                                      color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                                  coord : new SFNode(
                                                                    new Coordinate({
                                                                      point : new MFVec3f([0.11416,0.01224,0.10631,0.109867,0.01435,0.09117])}))}))})])}),

                                                        new HAnimJoint({
                                                          name : new SFString("l_tarsal_distal_interphalangeal_4"),
                                                          DEF : new SFString("hanim_l_tarsal_distal_interphalangeal_4"),
                                                          center : new SFVec3f([0.11567,0.00936,0.11369]),
                                                          ulimit : new MFFloat([0,0,0]),
                                                          llimit : new MFFloat([0,0,0]),
                                                          children : new MFNode([
                                                            new HAnimSegment({
                                                              name : new SFString("l_tarsal_distal_phalanx_4"),
                                                              DEF : new SFString("hanim_l_tarsal_distal_phalanx_4"),
                                                              children : new MFNode([
                                                                new HAnimSite({
                                                                  name : new SFString("l_tarsal_distal_phalanx_4"),
                                                                  DEF : new SFString("hanim_l_tarsal_distal_phalanx_4_tip"),
                                                                  translation : new SFVec3f([0.115,0.016,0.13]),
                                                                  children : new MFNode([
                                                                    new TouchSensor({
                                                                      description : new SFString("HAnimSite 114 hanim_l_tarsal_distal_phalanx_4_tip")}),

                                                                    new Shape({
                                                                      appearance : new SFNode(
                                                                        new Appearance({
                                                                          material : new SFNode(
                                                                            new Material({
                                                                              diffuseColor : new SFColor([1,1,1])}))})),
                                                                      geometry : new SFNode(
                                                                        new IndexedFaceSet({
                                                                          coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                          creaseAngle : new SFFloat(0.5),
                                                                          solid : new SFBool(false),
                                                                          color : new SFNode(
                                                                            new ColorRGBA({
                                                                              color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                                                          coord : new SFNode(
                                                                            new Coordinate({
                                                                              point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                                                    new Billboard({
                                                                      axisOfRotation : new SFVec3f([0,0,0]),
                                                                      children : new MFNode([
                                                                        new Shape({
                                                                          geometry : new SFNode(
                                                                            new Text({
                                                                              string : new MFString(["114"]),
                                                                              fontStyle : new SFNode(
                                                                                new FontStyle({
                                                                                  size : new SFFloat(0.035)}))}))})])})])}),

                                                                new Shape({
                                                                  geometry : new SFNode(
                                                                    new LineSet({
                                                                      vertexCount : new MFInt32([2]),
                                                                      color : new SFNode(
                                                                        new ColorRGBA({
                                                                          color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                                      coord : new SFNode(
                                                                        new Coordinate({
                                                                          point : new MFVec3f([0.11567,0.00936,0.11369,0.11416,0.01224,0.10631])}))}))})])})])})])})])})])}),

                                            new HAnimJoint({
                                              name : new SFString("l_tarsometatarsal_5"),
                                              DEF : new SFString("hanim_l_tarsometatarsal_5"),
                                              center : new SFVec3f([0.1208,0.02094,0.03474]),
                                              ulimit : new MFFloat([0,0,0]),
                                              llimit : new MFFloat([0,0,0]),
                                              children : new MFNode([
                                                new HAnimSegment({
                                                  name : new SFString("l_metatarsal_5"),
                                                  DEF : new SFString("hanim_l_metatarsal_5"),
                                                  children : new MFNode([
                                                    new Shape({
                                                      geometry : new SFNode(
                                                        new LineSet({
                                                          vertexCount : new MFInt32([2]),
                                                          color : new SFNode(
                                                            new ColorRGBA({
                                                              color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                          coord : new SFNode(
                                                            new Coordinate({
                                                              point : new MFVec3f([0.1208,0.02094,0.03474,0.11063,0.03528,0.0021])}))}))})])}),

                                                new HAnimJoint({
                                                  name : new SFString("l_metatarsophalangeal_5"),
                                                  DEF : new SFString("hanim_l_metatarsophalangeal_5"),
                                                  center : new SFVec3f([0.124065,0.01367,0.08656]),
                                                  ulimit : new MFFloat([0,0,0]),
                                                  llimit : new MFFloat([0,0,0]),
                                                  children : new MFNode([
                                                    new HAnimSegment({
                                                      name : new SFString("l_tarsal_proximal_phalanx_5"),
                                                      DEF : new SFString("hanim_l_tarsal_proximal_phalanx_5"),
                                                      children : new MFNode([
                                                        new Shape({
                                                          geometry : new SFNode(
                                                            new LineSet({
                                                              vertexCount : new MFInt32([2]),
                                                              color : new SFNode(
                                                                new ColorRGBA({
                                                                  color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                              coord : new SFNode(
                                                                new Coordinate({
                                                                  point : new MFVec3f([0.124065,0.01367,0.08656,0.1208,0.02094,0.03474])}))}))})])}),

                                                    new HAnimJoint({
                                                      name : new SFString("l_tarsal_proximal_interphalangeal_5"),
                                                      DEF : new SFString("hanim_l_tarsal_proximal_interphalangeal_5"),
                                                      center : new SFVec3f([0.12638,0.01086,0.09414]),
                                                      ulimit : new MFFloat([0,0,0]),
                                                      llimit : new MFFloat([0,0,0]),
                                                      children : new MFNode([
                                                        new HAnimSegment({
                                                          name : new SFString("l_tarsal_middle_phalanx_5"),
                                                          DEF : new SFString("hanim_l_tarsal_middle_phalanx_5"),
                                                          children : new MFNode([
                                                            new HAnimSite({
                                                              name : new SFString("l_metatarsal_phalanx_5"),
                                                              DEF : new SFString("hanim_l_metatarsal_phalanx_5_pt"),
                                                              translation : new SFVec3f([0.12,0.02,0.04]),
                                                              children : new MFNode([
                                                                new TouchSensor({
                                                                  description : new SFString("HAnimSite 56 hanim_l_metatarsal_phalanx_5_pt")}),

                                                                new Shape({
                                                                  appearance : new SFNode(
                                                                    new Appearance({
                                                                      material : new SFNode(
                                                                        new Material({
                                                                          diffuseColor : new SFColor([1,1,1])}))})),
                                                                  geometry : new SFNode(
                                                                    new IndexedFaceSet({
                                                                      coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                      creaseAngle : new SFFloat(0.5),
                                                                      solid : new SFBool(false),
                                                                      color : new SFNode(
                                                                        new ColorRGBA({
                                                                          color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                                                      coord : new SFNode(
                                                                        new Coordinate({
                                                                          point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                                                new Billboard({
                                                                  axisOfRotation : new SFVec3f([0,0,0]),
                                                                  children : new MFNode([
                                                                    new Shape({
                                                                      geometry : new SFNode(
                                                                        new Text({
                                                                          string : new MFString(["56"]),
                                                                          fontStyle : new SFNode(
                                                                            new FontStyle({
                                                                              size : new SFFloat(0.035)}))}))})])})])}),

                                                            new Shape({
                                                              geometry : new SFNode(
                                                                new LineSet({
                                                                  vertexCount : new MFInt32([2]),
                                                                  color : new SFNode(
                                                                    new ColorRGBA({
                                                                      color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                                  coord : new SFNode(
                                                                    new Coordinate({
                                                                      point : new MFVec3f([0.12638,0.01086,0.09414,0.124065,0.01367,0.08656])}))}))})])}),

                                                        new HAnimJoint({
                                                          name : new SFString("l_tarsal_distal_interphalangeal_5"),
                                                          DEF : new SFString("hanim_l_tarsal_distal_interphalangeal_5"),
                                                          center : new SFVec3f([0.12728,0.00856,0.10188]),
                                                          ulimit : new MFFloat([0,0,0]),
                                                          llimit : new MFFloat([0,0,0]),
                                                          children : new MFNode([
                                                            new HAnimSegment({
                                                              name : new SFString("l_tarsal_distal_phalanx_5"),
                                                              DEF : new SFString("hanim_l_tarsal_distal_phalanx_5"),
                                                              children : new MFNode([
                                                                new HAnimSite({
                                                                  name : new SFString("l_tarsal_distal_phalanx_5"),
                                                                  DEF : new SFString("hanim_l_tarsal_distal_phalanx_5_tip"),
                                                                  translation : new SFVec3f([0.125,0.016,0.115]),
                                                                  children : new MFNode([
                                                                    new TouchSensor({
                                                                      description : new SFString("HAnimSite 115 hanim_l_tarsal_distal_phalanx_5_tip")}),

                                                                    new Shape({
                                                                      appearance : new SFNode(
                                                                        new Appearance({
                                                                          material : new SFNode(
                                                                            new Material({
                                                                              diffuseColor : new SFColor([1,1,1])}))})),
                                                                      geometry : new SFNode(
                                                                        new IndexedFaceSet({
                                                                          coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                          creaseAngle : new SFFloat(0.5),
                                                                          solid : new SFBool(false),
                                                                          color : new SFNode(
                                                                            new ColorRGBA({
                                                                              color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                                                          coord : new SFNode(
                                                                            new Coordinate({
                                                                              point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                                                    new Billboard({
                                                                      axisOfRotation : new SFVec3f([0,0,0]),
                                                                      children : new MFNode([
                                                                        new Shape({
                                                                          geometry : new SFNode(
                                                                            new Text({
                                                                              string : new MFString(["115"]),
                                                                              fontStyle : new SFNode(
                                                                                new FontStyle({
                                                                                  size : new SFFloat(0.035)}))}))})])})])}),

                                                                new Shape({
                                                                  geometry : new SFNode(
                                                                    new LineSet({
                                                                      vertexCount : new MFInt32([2]),
                                                                      color : new SFNode(
                                                                        new ColorRGBA({
                                                                          color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                                      coord : new SFNode(
                                                                        new Coordinate({
                                                                          point : new MFVec3f([0.12728,0.00856,0.10188,0.12638,0.01086,0.09414])}))}))})])})])})])})])})])})])})])})])})])})])}),

                        new HAnimJoint({
                          name : new SFString("r_hip"),
                          DEF : new SFString("hanim_r_hip"),
                          center : new SFVec3f([-0.09466,0.82665,-0.01835]),
                          ulimit : new MFFloat([0,0,0]),
                          llimit : new MFFloat([0,0,0]),
                          children : new MFNode([
                            new HAnimSegment({
                              name : new SFString("r_thigh"),
                              DEF : new SFString("hanim_r_thigh"),
                              children : new MFNode([
                                new HAnimSite({
                                  name : new SFString("r_knee_crease"),
                                  DEF : new SFString("hanim_r_knee_crease_pt"),
                                  translation : new SFVec3f([-0.09,0.41,-0.056]),
                                  children : new MFNode([
                                    new TouchSensor({
                                      description : new SFString("HAnimSite 91 hanim_r_knee_crease_pt")}),

                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              diffuseColor : new SFColor([1,1,1])}))})),
                                      geometry : new SFNode(
                                        new IndexedFaceSet({
                                          coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                          creaseAngle : new SFFloat(0.5),
                                          solid : new SFBool(false),
                                          color : new SFNode(
                                            new ColorRGBA({
                                              color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                          coord : new SFNode(
                                            new Coordinate({
                                              point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                    new Billboard({
                                      axisOfRotation : new SFVec3f([0,0,0]),
                                      children : new MFNode([
                                        new Shape({
                                          geometry : new SFNode(
                                            new Text({
                                              string : new MFString(["91"]),
                                              fontStyle : new SFNode(
                                                new FontStyle({
                                                  size : new SFFloat(0.035)}))}))})])})])}),

                                new HAnimSite({
                                  name : new SFString("r_femoral_medial_epicondyle"),
                                  DEF : new SFString("hanim_r_femoral_medial_epicondyle_pt"),
                                  translation : new SFVec3f([-0.039,0.41,-0.01]),
                                  children : new MFNode([
                                    new TouchSensor({
                                      description : new SFString("HAnimSite 44 hanim_r_femoral_medial_epicondyle_pt")}),

                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              diffuseColor : new SFColor([1,1,1])}))})),
                                      geometry : new SFNode(
                                        new IndexedFaceSet({
                                          coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                          creaseAngle : new SFFloat(0.5),
                                          solid : new SFBool(false),
                                          color : new SFNode(
                                            new ColorRGBA({
                                              color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                          coord : new SFNode(
                                            new Coordinate({
                                              point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                    new Billboard({
                                      axisOfRotation : new SFVec3f([0,0,0]),
                                      children : new MFNode([
                                        new Shape({
                                          geometry : new SFNode(
                                            new Text({
                                              string : new MFString(["44"]),
                                              fontStyle : new SFNode(
                                                new FontStyle({
                                                  size : new SFFloat(0.035)}))}))})])})])}),

                                new HAnimSite({
                                  name : new SFString("r_femoral_lateral_epicondyle"),
                                  DEF : new SFString("hanim_r_femoral_lateral_epicondyle_pt"),
                                  translation : new SFVec3f([-0.127,0.41,-0.01]),
                                  children : new MFNode([
                                    new TouchSensor({
                                      description : new SFString("HAnimSite 43 hanim_r_femoral_lateral_epicondyle_pt")}),

                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              diffuseColor : new SFColor([1,1,1])}))})),
                                      geometry : new SFNode(
                                        new IndexedFaceSet({
                                          coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                          creaseAngle : new SFFloat(0.5),
                                          solid : new SFBool(false),
                                          color : new SFNode(
                                            new ColorRGBA({
                                              color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                          coord : new SFNode(
                                            new Coordinate({
                                              point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                    new Billboard({
                                      axisOfRotation : new SFVec3f([0,0,0]),
                                      children : new MFNode([
                                        new Shape({
                                          geometry : new SFNode(
                                            new Text({
                                              string : new MFString(["43"]),
                                              fontStyle : new SFNode(
                                                new FontStyle({
                                                  size : new SFFloat(0.035)}))}))})])})])}),

                                new HAnimSite({
                                  name : new SFString("r_suprapatella"),
                                  DEF : new SFString("hanim_r_suprapatella_pt"),
                                  translation : new SFVec3f([-0.085,0.41,0.042]),
                                  children : new MFNode([
                                    new TouchSensor({
                                      description : new SFString("HAnimSite 45 hanim_r_suprapatella_pt")}),

                                    new Shape({
                                      appearance : new SFNode(
                                        new Appearance({
                                          material : new SFNode(
                                            new Material({
                                              diffuseColor : new SFColor([1,1,1])}))})),
                                      geometry : new SFNode(
                                        new IndexedFaceSet({
                                          coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                          creaseAngle : new SFFloat(0.5),
                                          solid : new SFBool(false),
                                          color : new SFNode(
                                            new ColorRGBA({
                                              color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                          coord : new SFNode(
                                            new Coordinate({
                                              point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                    new Billboard({
                                      axisOfRotation : new SFVec3f([0,0,0]),
                                      children : new MFNode([
                                        new Shape({
                                          geometry : new SFNode(
                                            new Text({
                                              string : new MFString(["45"]),
                                              fontStyle : new SFNode(
                                                new FontStyle({
                                                  size : new SFFloat(0.035)}))}))})])})])}),

                                new Shape({
                                  geometry : new SFNode(
                                    new LineSet({
                                      vertexCount : new MFInt32([2]),
                                      color : new SFNode(
                                        new ColorRGBA({
                                          color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([-0.09466,0.82665,-0.01835,0,0.826,0.02])}))}))})])}),

                            new HAnimJoint({
                              name : new SFString("r_knee"),
                              DEF : new SFString("hanim_r_knee"),
                              center : new SFVec3f([-0.0926,0.408825,-0.01944]),
                              ulimit : new MFFloat([0,0,0]),
                              llimit : new MFFloat([0,0,0]),
                              children : new MFNode([
                                new HAnimSegment({
                                  name : new SFString("r_calf"),
                                  DEF : new SFString("hanim_r_calf"),
                                  children : new MFNode([
                                    new HAnimSite({
                                      name : new SFString("r_tibiale"),
                                      DEF : new SFString("hanim_r_tibiale_pt"),
                                      translation : new SFVec3f([-0.09,0.31,0.038]),
                                      children : new MFNode([
                                        new TouchSensor({
                                          description : new SFString("HAnimSite 51 hanim_r_tibiale_pt")}),

                                        new Shape({
                                          appearance : new SFNode(
                                            new Appearance({
                                              material : new SFNode(
                                                new Material({
                                                  diffuseColor : new SFColor([1,1,1])}))})),
                                          geometry : new SFNode(
                                            new IndexedFaceSet({
                                              coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                              creaseAngle : new SFFloat(0.5),
                                              solid : new SFBool(false),
                                              color : new SFNode(
                                                new ColorRGBA({
                                                  color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                        new Billboard({
                                          axisOfRotation : new SFVec3f([0,0,0]),
                                          children : new MFNode([
                                            new Shape({
                                              geometry : new SFNode(
                                                new Text({
                                                  string : new MFString(["51"]),
                                                  fontStyle : new SFNode(
                                                    new FontStyle({
                                                      size : new SFFloat(0.035)}))}))})])})])}),

                                    new HAnimSite({
                                      name : new SFString("r_medial_malleolus"),
                                      DEF : new SFString("hanim_r_medial_malleolus_pt"),
                                      translation : new SFVec3f([-0.061,0.095,-0.02]),
                                      children : new MFNode([
                                        new TouchSensor({
                                          description : new SFString("HAnimSite 52 hanim_r_medial_malleolus_pt")}),

                                        new Shape({
                                          appearance : new SFNode(
                                            new Appearance({
                                              material : new SFNode(
                                                new Material({
                                                  diffuseColor : new SFColor([1,1,1])}))})),
                                          geometry : new SFNode(
                                            new IndexedFaceSet({
                                              coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                              creaseAngle : new SFFloat(0.5),
                                              solid : new SFBool(false),
                                              color : new SFNode(
                                                new ColorRGBA({
                                                  color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                        new Billboard({
                                          axisOfRotation : new SFVec3f([0,0,0]),
                                          children : new MFNode([
                                            new Shape({
                                              geometry : new SFNode(
                                                new Text({
                                                  string : new MFString(["52"]),
                                                  fontStyle : new SFNode(
                                                    new FontStyle({
                                                      size : new SFFloat(0.035)}))}))})])})])}),

                                    new HAnimSite({
                                      name : new SFString("r_lateral_malleolus"),
                                      DEF : new SFString("hanim_r_lateral_malleolus_pt"),
                                      translation : new SFVec3f([-0.12,0.095,-0.02]),
                                      children : new MFNode([
                                        new TouchSensor({
                                          description : new SFString("HAnimSite 53 hanim_r_lateral_malleolus_pt")}),

                                        new Shape({
                                          appearance : new SFNode(
                                            new Appearance({
                                              material : new SFNode(
                                                new Material({
                                                  diffuseColor : new SFColor([1,1,1])}))})),
                                          geometry : new SFNode(
                                            new IndexedFaceSet({
                                              coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                              creaseAngle : new SFFloat(0.5),
                                              solid : new SFBool(false),
                                              color : new SFNode(
                                                new ColorRGBA({
                                                  color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                        new Billboard({
                                          axisOfRotation : new SFVec3f([0,0,0]),
                                          children : new MFNode([
                                            new Shape({
                                              geometry : new SFNode(
                                                new Text({
                                                  string : new MFString(["53"]),
                                                  fontStyle : new SFNode(
                                                    new FontStyle({
                                                      size : new SFFloat(0.035)}))}))})])})])}),

                                    new Shape({
                                      geometry : new SFNode(
                                        new LineSet({
                                          vertexCount : new MFInt32([2]),
                                          color : new SFNode(
                                            new ColorRGBA({
                                              color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                          coord : new SFNode(
                                            new Coordinate({
                                              point : new MFVec3f([-0.0926,0.408825,-0.01944,-0.09466,0.82665,-0.01835])}))}))})])}),

                                new HAnimJoint({
                                  name : new SFString("r_talocrural"),
                                  DEF : new SFString("hanim_r_talocrural"),
                                  center : new SFVec3f([-0.08845,0.09544,-0.01045]),
                                  ulimit : new MFFloat([0,0,0]),
                                  llimit : new MFFloat([0,0,0]),
                                  children : new MFNode([
                                    new HAnimSegment({
                                      name : new SFString("r_talus"),
                                      DEF : new SFString("hanim_r_talus"),
                                      children : new MFNode([
                                        new HAnimSite({
                                          name : new SFString("r_sphyrion"),
                                          DEF : new SFString("hanim_r_sphyrion_pt"),
                                          translation : new SFVec3f([-0.054,0.065,-0.02]),
                                          children : new MFNode([
                                            new TouchSensor({
                                              description : new SFString("HAnimSite 54 hanim_r_sphyrion_pt")}),

                                            new Shape({
                                              appearance : new SFNode(
                                                new Appearance({
                                                  material : new SFNode(
                                                    new Material({
                                                      diffuseColor : new SFColor([1,1,1])}))})),
                                              geometry : new SFNode(
                                                new IndexedFaceSet({
                                                  coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                  creaseAngle : new SFFloat(0.5),
                                                  solid : new SFBool(false),
                                                  color : new SFNode(
                                                    new ColorRGBA({
                                                      color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                                  coord : new SFNode(
                                                    new Coordinate({
                                                      point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                            new Billboard({
                                              axisOfRotation : new SFVec3f([0,0,0]),
                                              children : new MFNode([
                                                new Shape({
                                                  geometry : new SFNode(
                                                    new Text({
                                                      string : new MFString(["54"]),
                                                      fontStyle : new SFNode(
                                                        new FontStyle({
                                                          size : new SFFloat(0.035)}))}))})])})])}),

                                        new HAnimSite({
                                          name : new SFString("r_calcaneus_posterior"),
                                          DEF : new SFString("hanim_r_calcaneus_posterior_pt"),
                                          translation : new SFVec3f([-0.09,0.03,-0.06]),
                                          children : new MFNode([
                                            new TouchSensor({
                                              description : new SFString("HAnimSite 62 hanim_r_calcaneus_posterior_pt")}),

                                            new Shape({
                                              appearance : new SFNode(
                                                new Appearance({
                                                  material : new SFNode(
                                                    new Material({
                                                      diffuseColor : new SFColor([1,1,1])}))})),
                                              geometry : new SFNode(
                                                new IndexedFaceSet({
                                                  coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                  creaseAngle : new SFFloat(0.5),
                                                  solid : new SFBool(false),
                                                  color : new SFNode(
                                                    new ColorRGBA({
                                                      color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                                  coord : new SFNode(
                                                    new Coordinate({
                                                      point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                            new Billboard({
                                              axisOfRotation : new SFVec3f([0,0,0]),
                                              children : new MFNode([
                                                new Shape({
                                                  geometry : new SFNode(
                                                    new Text({
                                                      string : new MFString(["62"]),
                                                      fontStyle : new SFNode(
                                                        new FontStyle({
                                                          size : new SFFloat(0.035)}))}))})])})])}),

                                        new Shape({
                                          geometry : new SFNode(
                                            new LineSet({
                                              vertexCount : new MFInt32([2]),
                                              color : new SFNode(
                                                new ColorRGBA({
                                                  color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([-0.08845,0.09544,-0.01045,-0.0926,0.408825,-0.01944])}))}))})])}),

                                    new HAnimJoint({
                                      name : new SFString("r_talocalcaneonavicular"),
                                      DEF : new SFString("hanim_r_talocalcaneonavicular"),
                                      center : new SFVec3f([-0.07794,0.0369,0.00486]),
                                      ulimit : new MFFloat([0,0,0]),
                                      llimit : new MFFloat([0,0,0]),
                                      children : new MFNode([
                                        new HAnimSegment({
                                          name : new SFString("r_navicular"),
                                          DEF : new SFString("hanim_r_navicular"),
                                          children : new MFNode([
                                            new Shape({
                                              geometry : new SFNode(
                                                new LineSet({
                                                  vertexCount : new MFInt32([2]),
                                                  color : new SFNode(
                                                    new ColorRGBA({
                                                      color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                  coord : new SFNode(
                                                    new Coordinate({
                                                      point : new MFVec3f([-0.07794,0.0369,0.00486,-0.08845,0.09544,-0.01045])}))}))})])}),

                                        new HAnimJoint({
                                          name : new SFString("r_cuneonavicular_1"),
                                          DEF : new SFString("hanim_r_cuneonavicular_1"),
                                          center : new SFVec3f([-0.06698,0.032107,0.01839]),
                                          ulimit : new MFFloat([0,0,0]),
                                          llimit : new MFFloat([0,0,0]),
                                          children : new MFNode([
                                            new HAnimSegment({
                                              name : new SFString("r_cuneiform_1"),
                                              DEF : new SFString("hanim_r_cuneiform_1"),
                                              children : new MFNode([
                                                new Shape({
                                                  geometry : new SFNode(
                                                    new LineSet({
                                                      vertexCount : new MFInt32([2]),
                                                      color : new SFNode(
                                                        new ColorRGBA({
                                                          color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                      coord : new SFNode(
                                                        new Coordinate({
                                                          point : new MFVec3f([-0.06698,0.032107,0.01839,-0.07794,0.0369,0.00486])}))}))})])}),

                                            new HAnimJoint({
                                              name : new SFString("r_tarsometatarsal_1"),
                                              DEF : new SFString("hanim_r_tarsometatarsal_1"),
                                              center : new SFVec3f([-0.064,0.02324,0.04419]),
                                              ulimit : new MFFloat([0,0,0]),
                                              llimit : new MFFloat([0,0,0]),
                                              children : new MFNode([
                                                new HAnimSegment({
                                                  name : new SFString("r_metatarsal_1"),
                                                  DEF : new SFString("hanim_r_metatarsal_1"),
                                                  children : new MFNode([
                                                    new Shape({
                                                      geometry : new SFNode(
                                                        new LineSet({
                                                          vertexCount : new MFInt32([2]),
                                                          color : new SFNode(
                                                            new ColorRGBA({
                                                              color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                          coord : new SFNode(
                                                            new Coordinate({
                                                              point : new MFVec3f([-0.064,0.02324,0.04419,-0.06698,0.032107,0.01839])}))}))})])}),

                                                new HAnimJoint({
                                                  name : new SFString("r_metatarsophalangeal_1"),
                                                  DEF : new SFString("hanim_r_metatarsophalangeal_1"),
                                                  center : new SFVec3f([-0.06176,0.014425,0.09362]),
                                                  ulimit : new MFFloat([0,0,0]),
                                                  llimit : new MFFloat([0,0,0]),
                                                  children : new MFNode([
                                                    new HAnimSegment({
                                                      name : new SFString("r_tarsal_proximal_phalanx_1"),
                                                      DEF : new SFString("hanim_r_tarsal_proximal_phalanx_1"),
                                                      children : new MFNode([
                                                        new HAnimSite({
                                                          name : new SFString("r_metatarsal_phalanx_1"),
                                                          DEF : new SFString("hanim_r_metatarsal_phalanx_1_pt"),
                                                          translation : new SFVec3f([-0.062,0.012,0.1]),
                                                          children : new MFNode([
                                                            new TouchSensor({
                                                              description : new SFString("HAnimSite 59 hanim_r_metatarsal_phalanx_1_pt")}),

                                                            new Shape({
                                                              appearance : new SFNode(
                                                                new Appearance({
                                                                  material : new SFNode(
                                                                    new Material({
                                                                      diffuseColor : new SFColor([1,1,1])}))})),
                                                              geometry : new SFNode(
                                                                new IndexedFaceSet({
                                                                  coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                  creaseAngle : new SFFloat(0.5),
                                                                  solid : new SFBool(false),
                                                                  color : new SFNode(
                                                                    new ColorRGBA({
                                                                      color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                                                  coord : new SFNode(
                                                                    new Coordinate({
                                                                      point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                                            new Billboard({
                                                              axisOfRotation : new SFVec3f([0,0,0]),
                                                              children : new MFNode([
                                                                new Shape({
                                                                  geometry : new SFNode(
                                                                    new Text({
                                                                      string : new MFString(["59"]),
                                                                      fontStyle : new SFNode(
                                                                        new FontStyle({
                                                                          size : new SFFloat(0.035)}))}))})])})])}),

                                                        new Shape({
                                                          geometry : new SFNode(
                                                            new LineSet({
                                                              vertexCount : new MFInt32([2]),
                                                              color : new SFNode(
                                                                new ColorRGBA({
                                                                  color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                              coord : new SFNode(
                                                                new Coordinate({
                                                                  point : new MFVec3f([-0.06176,0.014425,0.09362,-0.064,0.02324,0.04419])}))}))})])}),

                                                    new HAnimJoint({
                                                      name : new SFString("r_tarsal_interphalangeal_1"),
                                                      DEF : new SFString("hanim_r_tarsal_interphalangeal_1"),
                                                      center : new SFVec3f([-0.06174,0.0121,0.1153]),
                                                      ulimit : new MFFloat([0,0,0]),
                                                      llimit : new MFFloat([0,0,0]),
                                                      children : new MFNode([
                                                        new HAnimSegment({
                                                          name : new SFString("r_tarsal_distal_phalanx_1"),
                                                          DEF : new SFString("hanim_r_tarsal_distal_phalanx_1"),
                                                          children : new MFNode([
                                                            new HAnimSite({
                                                              name : new SFString("r_tarsal_distal_phalanx_1"),
                                                              DEF : new SFString("hanim_r_tarsal_distal_phalanx_1_tip"),
                                                              translation : new SFVec3f([-0.06,0.012,0.14]),
                                                              children : new MFNode([
                                                                new TouchSensor({
                                                                  description : new SFString("HAnimSite 116 hanim_r_tarsal_distal_phalanx_1_tip")}),

                                                                new Shape({
                                                                  appearance : new SFNode(
                                                                    new Appearance({
                                                                      material : new SFNode(
                                                                        new Material({
                                                                          diffuseColor : new SFColor([1,1,1])}))})),
                                                                  geometry : new SFNode(
                                                                    new IndexedFaceSet({
                                                                      coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                      creaseAngle : new SFFloat(0.5),
                                                                      solid : new SFBool(false),
                                                                      color : new SFNode(
                                                                        new ColorRGBA({
                                                                          color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                                                      coord : new SFNode(
                                                                        new Coordinate({
                                                                          point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                                                new Billboard({
                                                                  axisOfRotation : new SFVec3f([0,0,0]),
                                                                  children : new MFNode([
                                                                    new Shape({
                                                                      geometry : new SFNode(
                                                                        new Text({
                                                                          string : new MFString(["116"]),
                                                                          fontStyle : new SFNode(
                                                                            new FontStyle({
                                                                              size : new SFFloat(0.035)}))}))})])})])}),

                                                            new Shape({
                                                              geometry : new SFNode(
                                                                new LineSet({
                                                                  vertexCount : new MFInt32([2]),
                                                                  color : new SFNode(
                                                                    new ColorRGBA({
                                                                      color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                                  coord : new SFNode(
                                                                    new Coordinate({
                                                                      point : new MFVec3f([-0.06174,0.0121,0.1153,-0.06176,0.014425,0.09362])}))}))})])})])})])})])})])}),

                                        new HAnimJoint({
                                          name : new SFString("r_cuneonavicular_2"),
                                          DEF : new SFString("hanim_r_cuneonavicular_2"),
                                          center : new SFVec3f([-0.081,0.0335,0.02142]),
                                          ulimit : new MFFloat([0,0,0]),
                                          llimit : new MFFloat([0,0,0]),
                                          children : new MFNode([
                                            new HAnimSegment({
                                              name : new SFString("r_cuneiform_2"),
                                              DEF : new SFString("hanim_r_cuneiform_2"),
                                              children : new MFNode([
                                                new Shape({
                                                  geometry : new SFNode(
                                                    new LineSet({
                                                      vertexCount : new MFInt32([2]),
                                                      color : new SFNode(
                                                        new ColorRGBA({
                                                          color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                      coord : new SFNode(
                                                        new Coordinate({
                                                          point : new MFVec3f([-0.081,0.0335,0.02142,-0.07794,0.0369,0.00486])}))}))})])}),

                                            new HAnimJoint({
                                              name : new SFString("r_tarsometatarsal_2"),
                                              DEF : new SFString("hanim_r_tarsometatarsal_2"),
                                              center : new SFVec3f([-0.07983,0.0261,0.04106]),
                                              ulimit : new MFFloat([0,0,0]),
                                              llimit : new MFFloat([0,0,0]),
                                              children : new MFNode([
                                                new HAnimSegment({
                                                  name : new SFString("r_metatarsal_2"),
                                                  DEF : new SFString("hanim_r_metatarsal_2"),
                                                  children : new MFNode([
                                                    new Shape({
                                                      geometry : new SFNode(
                                                        new LineSet({
                                                          vertexCount : new MFInt32([2]),
                                                          color : new SFNode(
                                                            new ColorRGBA({
                                                              color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                          coord : new SFNode(
                                                            new Coordinate({
                                                              point : new MFVec3f([-0.07983,0.0261,0.04106,-0.081,0.0335,0.02142])}))}))})])}),

                                                new HAnimJoint({
                                                  name : new SFString("r_metatarsophalangeal_2"),
                                                  DEF : new SFString("hanim_r_metatarsophalangeal_2"),
                                                  center : new SFVec3f([-0.0821,0.01497,0.09783]),
                                                  ulimit : new MFFloat([0,0,0]),
                                                  llimit : new MFFloat([0,0,0]),
                                                  children : new MFNode([
                                                    new HAnimSegment({
                                                      name : new SFString("r_tarsal_proximal_phalanx_2"),
                                                      DEF : new SFString("hanim_r_tarsal_proximal_phalanx_2"),
                                                      children : new MFNode([
                                                        new Shape({
                                                          geometry : new SFNode(
                                                            new LineSet({
                                                              vertexCount : new MFInt32([2]),
                                                              color : new SFNode(
                                                                new ColorRGBA({
                                                                  color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                              coord : new SFNode(
                                                                new Coordinate({
                                                                  point : new MFVec3f([-0.0821,0.01497,0.09783,-0.07983,0.0261,0.04106])}))}))})])}),

                                                    new HAnimJoint({
                                                      name : new SFString("r_tarsal_proximal_interphalangeal_2"),
                                                      DEF : new SFString("hanim_r_tarsal_proximal_interphalangeal_2"),
                                                      center : new SFVec3f([-0.0839,0.012647,0.114]),
                                                      ulimit : new MFFloat([0,0,0]),
                                                      llimit : new MFFloat([0,0,0]),
                                                      children : new MFNode([
                                                        new HAnimSegment({
                                                          name : new SFString("r_tarsal_middle_phalanx_2"),
                                                          DEF : new SFString("hanim_r_tarsal_middle_phalanx_2"),
                                                          children : new MFNode([
                                                            new Shape({
                                                              geometry : new SFNode(
                                                                new LineSet({
                                                                  vertexCount : new MFInt32([2]),
                                                                  color : new SFNode(
                                                                    new ColorRGBA({
                                                                      color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                                  coord : new SFNode(
                                                                    new Coordinate({
                                                                      point : new MFVec3f([-0.0839,0.012647,0.114,-0.0821,0.01497,0.09783])}))}))})])}),

                                                        new HAnimJoint({
                                                          name : new SFString("r_tarsal_distal_interphalangeal_2"),
                                                          DEF : new SFString("hanim_r_tarsal_distal_interphalangeal_2"),
                                                          center : new SFVec3f([-0.0839,0.009825,0.123435]),
                                                          ulimit : new MFFloat([0,0,0]),
                                                          llimit : new MFFloat([0,0,0]),
                                                          children : new MFNode([
                                                            new HAnimSegment({
                                                              name : new SFString("r_tarsal_distal_phalanx_2"),
                                                              DEF : new SFString("hanim_r_tarsal_distal_phalanx_2"),
                                                              children : new MFNode([
                                                                new HAnimSite({
                                                                  name : new SFString("r_tarsal_distal_phalanx_2"),
                                                                  DEF : new SFString("hanim_r_tarsal_distal_phalanx_2_tip"),
                                                                  translation : new SFVec3f([-0.08,0.016,0.14]),
                                                                  children : new MFNode([
                                                                    new TouchSensor({
                                                                      description : new SFString("HAnimSite 117 hanim_r_tarsal_distal_phalanx_2_tip")}),

                                                                    new Shape({
                                                                      appearance : new SFNode(
                                                                        new Appearance({
                                                                          material : new SFNode(
                                                                            new Material({
                                                                              diffuseColor : new SFColor([1,1,1])}))})),
                                                                      geometry : new SFNode(
                                                                        new IndexedFaceSet({
                                                                          coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                          creaseAngle : new SFFloat(0.5),
                                                                          solid : new SFBool(false),
                                                                          color : new SFNode(
                                                                            new ColorRGBA({
                                                                              color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                                                          coord : new SFNode(
                                                                            new Coordinate({
                                                                              point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                                                    new Billboard({
                                                                      axisOfRotation : new SFVec3f([0,0,0]),
                                                                      children : new MFNode([
                                                                        new Shape({
                                                                          geometry : new SFNode(
                                                                            new Text({
                                                                              string : new MFString(["117"]),
                                                                              fontStyle : new SFNode(
                                                                                new FontStyle({
                                                                                  size : new SFFloat(0.035)}))}))})])})])}),

                                                                new Shape({
                                                                  geometry : new SFNode(
                                                                    new LineSet({
                                                                      vertexCount : new MFInt32([2]),
                                                                      color : new SFNode(
                                                                        new ColorRGBA({
                                                                          color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                                      coord : new SFNode(
                                                                        new Coordinate({
                                                                          point : new MFVec3f([-0.0839,0.009825,0.123435,-0.0839,0.012647,0.114])}))}))})])})])})])})])})])})])}),

                                        new HAnimJoint({
                                          name : new SFString("r_cuneonavicular_3"),
                                          DEF : new SFString("hanim_r_cuneonavicular_3"),
                                          center : new SFVec3f([-0.09261,0.03339,0.01982]),
                                          ulimit : new MFFloat([0,0,0]),
                                          llimit : new MFFloat([0,0,0]),
                                          children : new MFNode([
                                            new HAnimSegment({
                                              name : new SFString("r_cuneiform_3"),
                                              DEF : new SFString("hanim_r_cuneiform_3"),
                                              children : new MFNode([
                                                new Shape({
                                                  geometry : new SFNode(
                                                    new LineSet({
                                                      vertexCount : new MFInt32([2]),
                                                      color : new SFNode(
                                                        new ColorRGBA({
                                                          color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                      coord : new SFNode(
                                                        new Coordinate({
                                                          point : new MFVec3f([-0.09261,0.03339,0.01982,-0.07794,0.0369,0.00486])}))}))})])}),

                                            new HAnimJoint({
                                              name : new SFString("r_tarsometatarsal_3"),
                                              DEF : new SFString("hanim_r_tarsometatarsal_3"),
                                              center : new SFVec3f([-0.09423,0.0261,0.0394]),
                                              ulimit : new MFFloat([0,0,0]),
                                              llimit : new MFFloat([0,0,0]),
                                              children : new MFNode([
                                                new HAnimSegment({
                                                  name : new SFString("r_metatarsal_3"),
                                                  DEF : new SFString("hanim_r_metatarsal_3"),
                                                  children : new MFNode([
                                                    new Shape({
                                                      geometry : new SFNode(
                                                        new LineSet({
                                                          vertexCount : new MFInt32([2]),
                                                          color : new SFNode(
                                                            new ColorRGBA({
                                                              color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                          coord : new SFNode(
                                                            new Coordinate({
                                                              point : new MFVec3f([-0.09423,0.0261,0.0394,-0.09261,0.03339,0.01982])}))}))})])}),

                                                new HAnimJoint({
                                                  name : new SFString("r_metatarsophalangeal_3"),
                                                  DEF : new SFString("hanim_r_metatarsophalangeal_3"),
                                                  center : new SFVec3f([-0.0961,0.01505,0.09542]),
                                                  ulimit : new MFFloat([0,0,0]),
                                                  llimit : new MFFloat([0,0,0]),
                                                  children : new MFNode([
                                                    new HAnimSegment({
                                                      name : new SFString("r_tarsal_proximal_phalanx_3"),
                                                      DEF : new SFString("hanim_r_tarsal_proximal_phalanx_3"),
                                                      children : new MFNode([
                                                        new Shape({
                                                          geometry : new SFNode(
                                                            new LineSet({
                                                              vertexCount : new MFInt32([2]),
                                                              color : new SFNode(
                                                                new ColorRGBA({
                                                                  color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                              coord : new SFNode(
                                                                new Coordinate({
                                                                  point : new MFVec3f([-0.0961,0.01505,0.09542,-0.09423,0.0261,0.0394])}))}))})])}),

                                                    new HAnimJoint({
                                                      name : new SFString("r_tarsal_proximal_interphalangeal_3"),
                                                      DEF : new SFString("hanim_r_tarsal_proximal_interphalangeal_3"),
                                                      center : new SFVec3f([-0.0985,0.01192,0.11047]),
                                                      ulimit : new MFFloat([0,0,0]),
                                                      llimit : new MFFloat([0,0,0]),
                                                      children : new MFNode([
                                                        new HAnimSegment({
                                                          name : new SFString("r_tarsal_middle_phalanx_3"),
                                                          DEF : new SFString("hanim_r_tarsal_middle_phalanx_3"),
                                                          children : new MFNode([
                                                            new Shape({
                                                              geometry : new SFNode(
                                                                new LineSet({
                                                                  vertexCount : new MFInt32([2]),
                                                                  color : new SFNode(
                                                                    new ColorRGBA({
                                                                      color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                                  coord : new SFNode(
                                                                    new Coordinate({
                                                                      point : new MFVec3f([-0.0985,0.01192,0.11047,-0.0961,0.01505,0.09542])}))}))})])}),

                                                        new HAnimJoint({
                                                          name : new SFString("r_tarsal_distal_interphalangeal_3"),
                                                          DEF : new SFString("hanim_r_tarsal_distal_interphalangeal_3"),
                                                          center : new SFVec3f([-0.100035,0.00982,0.1197]),
                                                          ulimit : new MFFloat([0,0,0]),
                                                          llimit : new MFFloat([0,0,0]),
                                                          children : new MFNode([
                                                            new HAnimSegment({
                                                              name : new SFString("r_tarsal_distal_phalanx_3"),
                                                              DEF : new SFString("hanim_r_tarsal_distal_phalanx_3"),
                                                              children : new MFNode([
                                                                new HAnimSite({
                                                                  name : new SFString("r_tarsal_distal_phalanx_3"),
                                                                  DEF : new SFString("hanim_r_tarsal_distal_phalanx_3_tip"),
                                                                  translation : new SFVec3f([-0.1,0.016,0.14]),
                                                                  children : new MFNode([
                                                                    new TouchSensor({
                                                                      description : new SFString("HAnimSite 118 hanim_r_tarsal_distal_phalanx_3_tip")}),

                                                                    new Shape({
                                                                      appearance : new SFNode(
                                                                        new Appearance({
                                                                          material : new SFNode(
                                                                            new Material({
                                                                              diffuseColor : new SFColor([1,1,1])}))})),
                                                                      geometry : new SFNode(
                                                                        new IndexedFaceSet({
                                                                          coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                          creaseAngle : new SFFloat(0.5),
                                                                          solid : new SFBool(false),
                                                                          color : new SFNode(
                                                                            new ColorRGBA({
                                                                              color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                                                          coord : new SFNode(
                                                                            new Coordinate({
                                                                              point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                                                    new Billboard({
                                                                      axisOfRotation : new SFVec3f([0,0,0]),
                                                                      children : new MFNode([
                                                                        new Shape({
                                                                          geometry : new SFNode(
                                                                            new Text({
                                                                              string : new MFString(["118"]),
                                                                              fontStyle : new SFNode(
                                                                                new FontStyle({
                                                                                  size : new SFFloat(0.035)}))}))})])})])}),

                                                                new Shape({
                                                                  geometry : new SFNode(
                                                                    new LineSet({
                                                                      vertexCount : new MFInt32([2]),
                                                                      color : new SFNode(
                                                                        new ColorRGBA({
                                                                          color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                                      coord : new SFNode(
                                                                        new Coordinate({
                                                                          point : new MFVec3f([-0.100035,0.00982,0.1197,-0.0985,0.01192,0.11047])}))}))})])})])})])})])})])})])})])}),

                                    new HAnimJoint({
                                      name : new SFString("r_calcaneocuboid"),
                                      DEF : new SFString("hanim_r_calcaneocuboid"),
                                      center : new SFVec3f([-0.088717,0.05798,-0.025965]),
                                      ulimit : new MFFloat([0,0,0]),
                                      llimit : new MFFloat([0,0,0]),
                                      children : new MFNode([
                                        new HAnimSegment({
                                          name : new SFString("r_calcaneus"),
                                          DEF : new SFString("hanim_r_calcaneus"),
                                          children : new MFNode([
                                            new Shape({
                                              geometry : new SFNode(
                                                new LineSet({
                                                  vertexCount : new MFInt32([2]),
                                                  color : new SFNode(
                                                    new ColorRGBA({
                                                      color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                  coord : new SFNode(
                                                    new Coordinate({
                                                      point : new MFVec3f([-0.088717,0.05798,-0.025965,-0.08845,0.09544,-0.01045])}))}))})])}),

                                        new HAnimJoint({
                                          name : new SFString("r_transversetarsal"),
                                          DEF : new SFString("hanim_r_transversetarsal"),
                                          center : new SFVec3f([-0.11027,0.03528,0.0021]),
                                          ulimit : new MFFloat([0,0,0]),
                                          llimit : new MFFloat([0,0,0]),
                                          children : new MFNode([
                                            new HAnimSegment({
                                              name : new SFString("r_cuboid"),
                                              DEF : new SFString("hanim_r_cuboid"),
                                              children : new MFNode([
                                                new Shape({
                                                  geometry : new SFNode(
                                                    new LineSet({
                                                      vertexCount : new MFInt32([2]),
                                                      color : new SFNode(
                                                        new ColorRGBA({
                                                          color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                      coord : new SFNode(
                                                        new Coordinate({
                                                          point : new MFVec3f([-0.11027,0.03528,0.0021,-0.088717,0.05798,-0.025965])}))}))})])}),

                                            new HAnimJoint({
                                              name : new SFString("r_tarsometatarsal_4"),
                                              DEF : new SFString("hanim_r_tarsometatarsal_4"),
                                              center : new SFVec3f([-0.10613,0.02454,0.03843]),
                                              ulimit : new MFFloat([0,0,0]),
                                              llimit : new MFFloat([0,0,0]),
                                              children : new MFNode([
                                                new HAnimSegment({
                                                  name : new SFString("r_metatarsal_4"),
                                                  DEF : new SFString("hanim_r_metatarsal_4"),
                                                  children : new MFNode([
                                                    new Shape({
                                                      geometry : new SFNode(
                                                        new LineSet({
                                                          vertexCount : new MFInt32([2]),
                                                          color : new SFNode(
                                                            new ColorRGBA({
                                                              color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                          coord : new SFNode(
                                                            new Coordinate({
                                                              point : new MFVec3f([-0.10613,0.02454,0.03843,-0.11027,0.03528,0.0021])}))}))})])}),

                                                new HAnimJoint({
                                                  name : new SFString("r_metatarsophalangeal_4"),
                                                  DEF : new SFString("hanim_r_metatarsophalangeal_4"),
                                                  center : new SFVec3f([-0.1095,0.01435,0.09117]),
                                                  ulimit : new MFFloat([0,0,0]),
                                                  llimit : new MFFloat([0,0,0]),
                                                  children : new MFNode([
                                                    new HAnimSegment({
                                                      name : new SFString("r_tarsal_proximal_phalanx_4"),
                                                      DEF : new SFString("hanim_r_tarsal_proximal_phalanx_4"),
                                                      children : new MFNode([
                                                        new Shape({
                                                          geometry : new SFNode(
                                                            new LineSet({
                                                              vertexCount : new MFInt32([2]),
                                                              color : new SFNode(
                                                                new ColorRGBA({
                                                                  color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                              coord : new SFNode(
                                                                new Coordinate({
                                                                  point : new MFVec3f([-0.1095,0.01435,0.09117,-0.10613,0.02454,0.03843])}))}))})])}),

                                                    new HAnimJoint({
                                                      name : new SFString("r_tarsal_proximal_interphalangeal_4"),
                                                      DEF : new SFString("hanim_r_tarsal_proximal_interphalangeal_4"),
                                                      center : new SFVec3f([-0.11378,0.01224,0.1063]),
                                                      ulimit : new MFFloat([0,0,0]),
                                                      llimit : new MFFloat([0,0,0]),
                                                      children : new MFNode([
                                                        new HAnimSegment({
                                                          name : new SFString("r_tarsal_middle_phalanx_4"),
                                                          DEF : new SFString("hanim_r_tarsal_middle_phalanx_4"),
                                                          children : new MFNode([
                                                            new Shape({
                                                              geometry : new SFNode(
                                                                new LineSet({
                                                                  vertexCount : new MFInt32([2]),
                                                                  color : new SFNode(
                                                                    new ColorRGBA({
                                                                      color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                                  coord : new SFNode(
                                                                    new Coordinate({
                                                                      point : new MFVec3f([-0.11378,0.01224,0.1063,-0.1095,0.01435,0.09117])}))}))})])}),

                                                        new HAnimJoint({
                                                          name : new SFString("r_tarsal_distal_interphalangeal_4"),
                                                          DEF : new SFString("hanim_r_tarsal_distal_interphalangeal_4"),
                                                          center : new SFVec3f([-0.1153,0.00937,0.11369]),
                                                          ulimit : new MFFloat([0,0,0]),
                                                          llimit : new MFFloat([0,0,0]),
                                                          children : new MFNode([
                                                            new HAnimSegment({
                                                              name : new SFString("r_tarsal_distal_phalanx_4"),
                                                              DEF : new SFString("hanim_r_tarsal_distal_phalanx_4"),
                                                              children : new MFNode([
                                                                new HAnimSite({
                                                                  name : new SFString("r_tarsal_distal_phalanx_4"),
                                                                  DEF : new SFString("hanim_r_tarsal_distal_phalanx_4_tip"),
                                                                  translation : new SFVec3f([-0.115,0.016,0.13]),
                                                                  children : new MFNode([
                                                                    new TouchSensor({
                                                                      description : new SFString("HAnimSite 119 hanim_r_tarsal_distal_phalanx_4_tip")}),

                                                                    new Shape({
                                                                      appearance : new SFNode(
                                                                        new Appearance({
                                                                          material : new SFNode(
                                                                            new Material({
                                                                              diffuseColor : new SFColor([1,1,1])}))})),
                                                                      geometry : new SFNode(
                                                                        new IndexedFaceSet({
                                                                          coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                          creaseAngle : new SFFloat(0.5),
                                                                          solid : new SFBool(false),
                                                                          color : new SFNode(
                                                                            new ColorRGBA({
                                                                              color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                                                          coord : new SFNode(
                                                                            new Coordinate({
                                                                              point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                                                    new Billboard({
                                                                      axisOfRotation : new SFVec3f([0,0,0]),
                                                                      children : new MFNode([
                                                                        new Shape({
                                                                          geometry : new SFNode(
                                                                            new Text({
                                                                              string : new MFString(["119"]),
                                                                              fontStyle : new SFNode(
                                                                                new FontStyle({
                                                                                  size : new SFFloat(0.035)}))}))})])})])}),

                                                                new Shape({
                                                                  geometry : new SFNode(
                                                                    new LineSet({
                                                                      vertexCount : new MFInt32([2]),
                                                                      color : new SFNode(
                                                                        new ColorRGBA({
                                                                          color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                                      coord : new SFNode(
                                                                        new Coordinate({
                                                                          point : new MFVec3f([-0.1153,0.00937,0.11369,-0.11378,0.01224,0.1063])}))}))})])})])})])})])})])}),

                                            new HAnimJoint({
                                              name : new SFString("r_tarsometatarsal_5"),
                                              DEF : new SFString("hanim_r_tarsometatarsal_5"),
                                              center : new SFVec3f([-0.12044,0.020945,0.03474]),
                                              ulimit : new MFFloat([0,0,0]),
                                              llimit : new MFFloat([0,0,0]),
                                              children : new MFNode([
                                                new HAnimSegment({
                                                  name : new SFString("r_metatarsal_5"),
                                                  DEF : new SFString("hanim_r_metatarsal_5"),
                                                  children : new MFNode([
                                                    new Shape({
                                                      geometry : new SFNode(
                                                        new LineSet({
                                                          vertexCount : new MFInt32([2]),
                                                          color : new SFNode(
                                                            new ColorRGBA({
                                                              color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                          coord : new SFNode(
                                                            new Coordinate({
                                                              point : new MFVec3f([-0.12044,0.020945,0.03474,-0.11027,0.03528,0.0021])}))}))})])}),

                                                new HAnimJoint({
                                                  name : new SFString("r_metatarsophalangeal_5"),
                                                  DEF : new SFString("hanim_r_metatarsophalangeal_5"),
                                                  center : new SFVec3f([-0.12368,0.01367,0.08656]),
                                                  ulimit : new MFFloat([0,0,0]),
                                                  llimit : new MFFloat([0,0,0]),
                                                  children : new MFNode([
                                                    new HAnimSegment({
                                                      name : new SFString("r_tarsal_proximal_phalanx_5"),
                                                      DEF : new SFString("hanim_r_tarsal_proximal_phalanx_5"),
                                                      children : new MFNode([
                                                        new Shape({
                                                          geometry : new SFNode(
                                                            new LineSet({
                                                              vertexCount : new MFInt32([2]),
                                                              color : new SFNode(
                                                                new ColorRGBA({
                                                                  color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                              coord : new SFNode(
                                                                new Coordinate({
                                                                  point : new MFVec3f([-0.12368,0.01367,0.08656,-0.12044,0.020945,0.03474])}))}))})])}),

                                                    new HAnimJoint({
                                                      name : new SFString("r_tarsal_proximal_interphalangeal_5"),
                                                      DEF : new SFString("hanim_r_tarsal_proximal_interphalangeal_5"),
                                                      center : new SFVec3f([-0.126,0.01086,0.09414]),
                                                      ulimit : new MFFloat([0,0,0]),
                                                      llimit : new MFFloat([0,0,0]),
                                                      children : new MFNode([
                                                        new HAnimSegment({
                                                          name : new SFString("r_tarsal_middle_phalanx_5"),
                                                          DEF : new SFString("hanim_r_tarsal_middle_phalanx_5"),
                                                          children : new MFNode([
                                                            new HAnimSite({
                                                              name : new SFString("r_metatarsal_phalanx_5"),
                                                              DEF : new SFString("hanim_r_metatarsal_phalanx_5_pt"),
                                                              translation : new SFVec3f([-0.12,0.02,0.04]),
                                                              children : new MFNode([
                                                                new TouchSensor({
                                                                  description : new SFString("HAnimSite 60 hanim_r_metatarsal_phalanx_5_pt")}),

                                                                new Shape({
                                                                  appearance : new SFNode(
                                                                    new Appearance({
                                                                      material : new SFNode(
                                                                        new Material({
                                                                          diffuseColor : new SFColor([1,1,1])}))})),
                                                                  geometry : new SFNode(
                                                                    new IndexedFaceSet({
                                                                      coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                      creaseAngle : new SFFloat(0.5),
                                                                      solid : new SFBool(false),
                                                                      color : new SFNode(
                                                                        new ColorRGBA({
                                                                          color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                                                      coord : new SFNode(
                                                                        new Coordinate({
                                                                          point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                                                new Billboard({
                                                                  axisOfRotation : new SFVec3f([0,0,0]),
                                                                  children : new MFNode([
                                                                    new Shape({
                                                                      geometry : new SFNode(
                                                                        new Text({
                                                                          string : new MFString(["60"]),
                                                                          fontStyle : new SFNode(
                                                                            new FontStyle({
                                                                              size : new SFFloat(0.035)}))}))})])})])}),

                                                            new Shape({
                                                              geometry : new SFNode(
                                                                new LineSet({
                                                                  vertexCount : new MFInt32([2]),
                                                                  color : new SFNode(
                                                                    new ColorRGBA({
                                                                      color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                                  coord : new SFNode(
                                                                    new Coordinate({
                                                                      point : new MFVec3f([-0.126,0.01086,0.09414,-0.12368,0.01367,0.08656])}))}))})])}),

                                                        new HAnimJoint({
                                                          name : new SFString("r_tarsal_distal_interphalangeal_5"),
                                                          DEF : new SFString("hanim_r_tarsal_distal_interphalangeal_5"),
                                                          center : new SFVec3f([-0.1269,0.00856,0.10188]),
                                                          ulimit : new MFFloat([0,0,0]),
                                                          llimit : new MFFloat([0,0,0]),
                                                          children : new MFNode([
                                                            new HAnimSegment({
                                                              name : new SFString("r_tarsal_distal_phalanx_5"),
                                                              DEF : new SFString("hanim_r_tarsal_distal_phalanx_5"),
                                                              children : new MFNode([
                                                                new HAnimSite({
                                                                  name : new SFString("r_tarsal_distal_phalanx_5"),
                                                                  DEF : new SFString("hanim_r_tarsal_distal_phalanx_5_tip"),
                                                                  translation : new SFVec3f([-0.125,0.016,0.115]),
                                                                  children : new MFNode([
                                                                    new TouchSensor({
                                                                      description : new SFString("HAnimSite 120 hanim_r_tarsal_distal_phalanx_5_tip")}),

                                                                    new Shape({
                                                                      appearance : new SFNode(
                                                                        new Appearance({
                                                                          material : new SFNode(
                                                                            new Material({
                                                                              diffuseColor : new SFColor([1,1,1])}))})),
                                                                      geometry : new SFNode(
                                                                        new IndexedFaceSet({
                                                                          coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                          creaseAngle : new SFFloat(0.5),
                                                                          solid : new SFBool(false),
                                                                          color : new SFNode(
                                                                            new ColorRGBA({
                                                                              color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                                                          coord : new SFNode(
                                                                            new Coordinate({
                                                                              point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                                                    new Billboard({
                                                                      axisOfRotation : new SFVec3f([0,0,0]),
                                                                      children : new MFNode([
                                                                        new Shape({
                                                                          geometry : new SFNode(
                                                                            new Text({
                                                                              string : new MFString(["120"]),
                                                                              fontStyle : new SFNode(
                                                                                new FontStyle({
                                                                                  size : new SFFloat(0.035)}))}))})])})])}),

                                                                new Shape({
                                                                  geometry : new SFNode(
                                                                    new LineSet({
                                                                      vertexCount : new MFInt32([2]),
                                                                      color : new SFNode(
                                                                        new ColorRGBA({
                                                                          color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                                      coord : new SFNode(
                                                                        new Coordinate({
                                                                          point : new MFVec3f([-0.1269,0.00856,0.10188,-0.126,0.01086,0.09414])}))}))})])})])})])})])})])})])})])})])})])})])})])}),

                    new HAnimJoint({
                      name : new SFString("vl5"),
                      DEF : new SFString("hanim_vl5"),
                      center : new SFVec3f([0,0.9254,-0.01376]),
                      ulimit : new MFFloat([0,0,0]),
                      llimit : new MFFloat([0,0,0]),
                      children : new MFNode([
                        new HAnimSegment({
                          name : new SFString("l5"),
                          DEF : new SFString("hanim_l5"),
                          children : new MFNode([
                            new HAnimSite({
                              name : new SFString("spine_1_middle_back"),
                              DEF : new SFString("hanim_spine_1_middle_back_pt"),
                              translation : new SFVec3f([0,1,-0.1]),
                              children : new MFNode([
                                new TouchSensor({
                                  description : new SFString("HAnimSite 24 hanim_spine_1_middle_back_pt")}),

                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          diffuseColor : new SFColor([1,1,1])}))})),
                                  geometry : new SFNode(
                                    new IndexedFaceSet({
                                      coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                      creaseAngle : new SFFloat(0.5),
                                      solid : new SFBool(false),
                                      color : new SFNode(
                                        new ColorRGBA({
                                          color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                new Billboard({
                                  axisOfRotation : new SFVec3f([0,0,0]),
                                  children : new MFNode([
                                    new Shape({
                                      geometry : new SFNode(
                                        new Text({
                                          string : new MFString(["24"]),
                                          fontStyle : new SFNode(
                                            new FontStyle({
                                              size : new SFFloat(0.035)}))}))})])})])}),

                            new HAnimSite({
                              name : new SFString("spine_2_lower_back"),
                              DEF : new SFString("hanim_spine_2_lower_back_pt"),
                              translation : new SFVec3f([0,0.95,-0.1]),
                              children : new MFNode([
                                new TouchSensor({
                                  description : new SFString("HAnimSite 25 hanim_spine_2_lower_back_pt")}),

                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          diffuseColor : new SFColor([1,1,1])}))})),
                                  geometry : new SFNode(
                                    new IndexedFaceSet({
                                      coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                      creaseAngle : new SFFloat(0.5),
                                      solid : new SFBool(false),
                                      color : new SFNode(
                                        new ColorRGBA({
                                          color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                new Billboard({
                                  axisOfRotation : new SFVec3f([0,0,0]),
                                  children : new MFNode([
                                    new Shape({
                                      geometry : new SFNode(
                                        new Text({
                                          string : new MFString(["25"]),
                                          fontStyle : new SFNode(
                                            new FontStyle({
                                              size : new SFFloat(0.035)}))}))})])})])}),

                            new HAnimSite({
                              name : new SFString("waist_preferred_anterior"),
                              DEF : new SFString("hanim_waist_preferred_anterior_pt"),
                              translation : new SFVec3f([0,0.9,0.1]),
                              children : new MFNode([
                                new TouchSensor({
                                  description : new SFString("HAnimSite 26 hanim_waist_preferred_anterior_pt")}),

                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          diffuseColor : new SFColor([1,1,1])}))})),
                                  geometry : new SFNode(
                                    new IndexedFaceSet({
                                      coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                      creaseAngle : new SFFloat(0.5),
                                      solid : new SFBool(false),
                                      color : new SFNode(
                                        new ColorRGBA({
                                          color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                new Billboard({
                                  axisOfRotation : new SFVec3f([0,0,0]),
                                  children : new MFNode([
                                    new Shape({
                                      geometry : new SFNode(
                                        new Text({
                                          string : new MFString(["26"]),
                                          fontStyle : new SFNode(
                                            new FontStyle({
                                              size : new SFFloat(0.035)}))}))})])})])}),

                            new HAnimSite({
                              name : new SFString("waist_preferred_posterior"),
                              DEF : new SFString("hanim_waist_preferred_posterior_pt"),
                              translation : new SFVec3f([0,0.9,-0.1]),
                              children : new MFNode([
                                new TouchSensor({
                                  description : new SFString("HAnimSite 27 hanim_waist_preferred_posterior_pt")}),

                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          diffuseColor : new SFColor([1,1,1])}))})),
                                  geometry : new SFNode(
                                    new IndexedFaceSet({
                                      coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                      creaseAngle : new SFFloat(0.5),
                                      solid : new SFBool(false),
                                      color : new SFNode(
                                        new ColorRGBA({
                                          color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                new Billboard({
                                  axisOfRotation : new SFVec3f([0,0,0]),
                                  children : new MFNode([
                                    new Shape({
                                      geometry : new SFNode(
                                        new Text({
                                          string : new MFString(["27"]),
                                          fontStyle : new SFNode(
                                            new FontStyle({
                                              size : new SFFloat(0.035)}))}))})])})])}),

                            new HAnimSite({
                              name : new SFString("navel"),
                              DEF : new SFString("hanim_navel_pt"),
                              translation : new SFVec3f([0,0.9,-0.1]),
                              children : new MFNode([
                                new TouchSensor({
                                  description : new SFString("HAnimSite 84 hanim_navel_pt")}),

                                new Shape({
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          diffuseColor : new SFColor([1,1,1])}))})),
                                  geometry : new SFNode(
                                    new IndexedFaceSet({
                                      coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                      creaseAngle : new SFFloat(0.5),
                                      solid : new SFBool(false),
                                      color : new SFNode(
                                        new ColorRGBA({
                                          color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                new Billboard({
                                  axisOfRotation : new SFVec3f([0,0,0]),
                                  children : new MFNode([
                                    new Shape({
                                      geometry : new SFNode(
                                        new Text({
                                          string : new MFString(["84"]),
                                          fontStyle : new SFNode(
                                            new FontStyle({
                                              size : new SFFloat(0.035)}))}))})])})])}),

                            new Shape({
                              geometry : new SFNode(
                                new LineSet({
                                  vertexCount : new MFInt32([2]),
                                  color : new SFNode(
                                    new ColorRGBA({
                                      color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([0,0.9254,-0.01376,0,0.77,0])}))}))})])}),

                        new HAnimJoint({
                          name : new SFString("vl4"),
                          DEF : new SFString("hanim_vl4"),
                          center : new SFVec3f([0,0.9497,-0.01376]),
                          ulimit : new MFFloat([0,0,0]),
                          llimit : new MFFloat([0,0,0]),
                          children : new MFNode([
                            new HAnimSegment({
                              name : new SFString("l4"),
                              DEF : new SFString("hanim_l4"),
                              children : new MFNode([
                                new Shape({
                                  geometry : new SFNode(
                                    new LineSet({
                                      vertexCount : new MFInt32([2]),
                                      color : new SFNode(
                                        new ColorRGBA({
                                          color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([0,0.9497,-0.01376,0,0.9254,-0.01376])}))}))})])}),

                            new HAnimJoint({
                              name : new SFString("vl3"),
                              DEF : new SFString("hanim_vl3"),
                              center : new SFVec3f([0,0.9659,-0.01376]),
                              ulimit : new MFFloat([0,0,0]),
                              llimit : new MFFloat([0,0,0]),
                              children : new MFNode([
                                new HAnimSegment({
                                  name : new SFString("l3"),
                                  DEF : new SFString("hanim_l3"),
                                  children : new MFNode([
                                    new Shape({
                                      geometry : new SFNode(
                                        new LineSet({
                                          vertexCount : new MFInt32([2]),
                                          color : new SFNode(
                                            new ColorRGBA({
                                              color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                          coord : new SFNode(
                                            new Coordinate({
                                              point : new MFVec3f([0,0.9659,-0.01376,0,0.9497,-0.01376])}))}))})])}),

                                new HAnimJoint({
                                  name : new SFString("vl2"),
                                  DEF : new SFString("hanim_vl2"),
                                  center : new SFVec3f([0,0.98235,-0.01376]),
                                  ulimit : new MFFloat([0,0,0]),
                                  llimit : new MFFloat([0,0,0]),
                                  children : new MFNode([
                                    new HAnimSegment({
                                      name : new SFString("l2"),
                                      DEF : new SFString("hanim_l2"),
                                      children : new MFNode([
                                        new HAnimSite({
                                          name : new SFString("l_rib10"),
                                          DEF : new SFString("hanim_l_rib10_pt"),
                                          translation : new SFVec3f([0.09,1,0.04]),
                                          children : new MFNode([
                                            new TouchSensor({
                                              description : new SFString("HAnimSite 28 hanim_l_rib10_pt")}),

                                            new Shape({
                                              appearance : new SFNode(
                                                new Appearance({
                                                  material : new SFNode(
                                                    new Material({
                                                      diffuseColor : new SFColor([1,1,1])}))})),
                                              geometry : new SFNode(
                                                new IndexedFaceSet({
                                                  coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                  creaseAngle : new SFFloat(0.5),
                                                  solid : new SFBool(false),
                                                  color : new SFNode(
                                                    new ColorRGBA({
                                                      color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                                  coord : new SFNode(
                                                    new Coordinate({
                                                      point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                            new Billboard({
                                              axisOfRotation : new SFVec3f([0,0,0]),
                                              children : new MFNode([
                                                new Shape({
                                                  geometry : new SFNode(
                                                    new Text({
                                                      string : new MFString(["28"]),
                                                      fontStyle : new SFNode(
                                                        new FontStyle({
                                                          size : new SFFloat(0.035)}))}))})])})])}),

                                        new HAnimSite({
                                          name : new SFString("r_rib10"),
                                          DEF : new SFString("hanim_r_rib10_pt"),
                                          translation : new SFVec3f([-0.09,1,0.04]),
                                          children : new MFNode([
                                            new TouchSensor({
                                              description : new SFString("HAnimSite 30 hanim_r_rib10_pt")}),

                                            new Shape({
                                              appearance : new SFNode(
                                                new Appearance({
                                                  material : new SFNode(
                                                    new Material({
                                                      diffuseColor : new SFColor([1,1,1])}))})),
                                              geometry : new SFNode(
                                                new IndexedFaceSet({
                                                  coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                  creaseAngle : new SFFloat(0.5),
                                                  solid : new SFBool(false),
                                                  color : new SFNode(
                                                    new ColorRGBA({
                                                      color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                                  coord : new SFNode(
                                                    new Coordinate({
                                                      point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                            new Billboard({
                                              axisOfRotation : new SFVec3f([0,0,0]),
                                              children : new MFNode([
                                                new Shape({
                                                  geometry : new SFNode(
                                                    new Text({
                                                      string : new MFString(["30"]),
                                                      fontStyle : new SFNode(
                                                        new FontStyle({
                                                          size : new SFFloat(0.035)}))}))})])})])}),

                                        new Shape({
                                          geometry : new SFNode(
                                            new LineSet({
                                              vertexCount : new MFInt32([2]),
                                              color : new SFNode(
                                                new ColorRGBA({
                                                  color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([0,0.98235,-0.01376,0,0.9659,-0.01376])}))}))})])}),

                                    new HAnimJoint({
                                      name : new SFString("vl1"),
                                      DEF : new SFString("hanim_vl1"),
                                      center : new SFVec3f([0,0.99967,-0.01376]),
                                      ulimit : new MFFloat([0,0,0]),
                                      llimit : new MFFloat([0,0,0]),
                                      children : new MFNode([
                                        new HAnimSegment({
                                          name : new SFString("l1"),
                                          DEF : new SFString("hanim_l1"),
                                          children : new MFNode([
                                            new Shape({
                                              geometry : new SFNode(
                                                new LineSet({
                                                  vertexCount : new MFInt32([2]),
                                                  color : new SFNode(
                                                    new ColorRGBA({
                                                      color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                  coord : new SFNode(
                                                    new Coordinate({
                                                      point : new MFVec3f([0,0.99967,-0.01376,0,0.98235,-0.01376])}))}))})])}),

                                        new HAnimJoint({
                                          name : new SFString("vt12"),
                                          DEF : new SFString("hanim_vt12"),
                                          center : new SFVec3f([0,1.0231,-0.01376]),
                                          ulimit : new MFFloat([0,0,0]),
                                          llimit : new MFFloat([0,0,0]),
                                          children : new MFNode([
                                            new HAnimSegment({
                                              name : new SFString("t12"),
                                              DEF : new SFString("hanim_t12"),
                                              children : new MFNode([
                                                new Shape({
                                                  geometry : new SFNode(
                                                    new LineSet({
                                                      vertexCount : new MFInt32([2]),
                                                      color : new SFNode(
                                                        new ColorRGBA({
                                                          color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                      coord : new SFNode(
                                                        new Coordinate({
                                                          point : new MFVec3f([0,1.0231,-0.01376,0,0.99967,-0.01376])}))}))})])}),

                                            new HAnimJoint({
                                              name : new SFString("vt11"),
                                              DEF : new SFString("hanim_vt11"),
                                              center : new SFVec3f([0,1.0467,-0.01376]),
                                              ulimit : new MFFloat([0,0,0]),
                                              llimit : new MFFloat([0,0,0]),
                                              children : new MFNode([
                                                new HAnimSegment({
                                                  name : new SFString("t11"),
                                                  DEF : new SFString("hanim_t11"),
                                                  children : new MFNode([
                                                    new Shape({
                                                      geometry : new SFNode(
                                                        new LineSet({
                                                          vertexCount : new MFInt32([2]),
                                                          color : new SFNode(
                                                            new ColorRGBA({
                                                              color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                          coord : new SFNode(
                                                            new Coordinate({
                                                              point : new MFVec3f([0,1.0467,-0.01376,0,1.0231,-0.01376])}))}))})])}),

                                                new HAnimJoint({
                                                  name : new SFString("vt10"),
                                                  DEF : new SFString("hanim_vt10"),
                                                  center : new SFVec3f([0,1.0638,-0.01378]),
                                                  ulimit : new MFFloat([0,0,0]),
                                                  llimit : new MFFloat([0,0,0]),
                                                  children : new MFNode([
                                                    new HAnimSegment({
                                                      name : new SFString("t10"),
                                                      DEF : new SFString("hanim_t10"),
                                                      children : new MFNode([
                                                        new HAnimSite({
                                                          name : new SFString("substernale"),
                                                          DEF : new SFString("hanim_substernale_pt"),
                                                          translation : new SFVec3f([0,1.08,0.076]),
                                                          children : new MFNode([
                                                            new TouchSensor({
                                                              description : new SFString("HAnimSite 13 hanim_substernale_pt")}),

                                                            new Shape({
                                                              appearance : new SFNode(
                                                                new Appearance({
                                                                  material : new SFNode(
                                                                    new Material({
                                                                      diffuseColor : new SFColor([1,1,1])}))})),
                                                              geometry : new SFNode(
                                                                new IndexedFaceSet({
                                                                  coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                  creaseAngle : new SFFloat(0.5),
                                                                  solid : new SFBool(false),
                                                                  color : new SFNode(
                                                                    new ColorRGBA({
                                                                      color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                                                  coord : new SFNode(
                                                                    new Coordinate({
                                                                      point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                                            new Billboard({
                                                              axisOfRotation : new SFVec3f([0,0,0]),
                                                              children : new MFNode([
                                                                new Shape({
                                                                  geometry : new SFNode(
                                                                    new Text({
                                                                      string : new MFString(["13"]),
                                                                      fontStyle : new SFNode(
                                                                        new FontStyle({
                                                                          size : new SFFloat(0.035)}))}))})])})])}),

                                                        new HAnimSite({
                                                          name : new SFString("mesosternale"),
                                                          DEF : new SFString("hanim_mesosternale_pt"),
                                                          translation : new SFVec3f([0,1.15,0.076]),
                                                          children : new MFNode([
                                                            new TouchSensor({
                                                              description : new SFString("HAnimSite 88 hanim_mesosternale_pt")}),

                                                            new Shape({
                                                              appearance : new SFNode(
                                                                new Appearance({
                                                                  material : new SFNode(
                                                                    new Material({
                                                                      diffuseColor : new SFColor([1,1,1])}))})),
                                                              geometry : new SFNode(
                                                                new IndexedFaceSet({
                                                                  coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                  creaseAngle : new SFFloat(0.5),
                                                                  solid : new SFBool(false),
                                                                  color : new SFNode(
                                                                    new ColorRGBA({
                                                                      color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                                                  coord : new SFNode(
                                                                    new Coordinate({
                                                                      point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                                            new Billboard({
                                                              axisOfRotation : new SFVec3f([0,0,0]),
                                                              children : new MFNode([
                                                                new Shape({
                                                                  geometry : new SFNode(
                                                                    new Text({
                                                                      string : new MFString(["88"]),
                                                                      fontStyle : new SFNode(
                                                                        new FontStyle({
                                                                          size : new SFFloat(0.035)}))}))})])})])}),

                                                        new Shape({
                                                          geometry : new SFNode(
                                                            new LineSet({
                                                              vertexCount : new MFInt32([2]),
                                                              color : new SFNode(
                                                                new ColorRGBA({
                                                                  color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                              coord : new SFNode(
                                                                new Coordinate({
                                                                  point : new MFVec3f([0,1.0638,-0.01378,0,1.0467,-0.01376])}))}))})])}),

                                                    new HAnimJoint({
                                                      name : new SFString("vt9"),
                                                      DEF : new SFString("hanim_vt9"),
                                                      center : new SFVec3f([0,1.0784,-0.01376]),
                                                      ulimit : new MFFloat([0,0,0]),
                                                      llimit : new MFFloat([0,0,0]),
                                                      children : new MFNode([
                                                        new HAnimSegment({
                                                          name : new SFString("t9"),
                                                          DEF : new SFString("hanim_t9"),
                                                          children : new MFNode([
                                                            new HAnimSite({
                                                              name : new SFString("l_thelion"),
                                                              DEF : new SFString("hanim_l_thelion_pt"),
                                                              translation : new SFVec3f([0.07,1.12,0.09]),
                                                              children : new MFNode([
                                                                new TouchSensor({
                                                                  description : new SFString("HAnimSite 29 hanim_l_thelion_pt")}),

                                                                new Shape({
                                                                  appearance : new SFNode(
                                                                    new Appearance({
                                                                      material : new SFNode(
                                                                        new Material({
                                                                          diffuseColor : new SFColor([1,1,1])}))})),
                                                                  geometry : new SFNode(
                                                                    new IndexedFaceSet({
                                                                      coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                      creaseAngle : new SFFloat(0.5),
                                                                      solid : new SFBool(false),
                                                                      color : new SFNode(
                                                                        new ColorRGBA({
                                                                          color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                                                      coord : new SFNode(
                                                                        new Coordinate({
                                                                          point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                                                new Billboard({
                                                                  axisOfRotation : new SFVec3f([0,0,0]),
                                                                  children : new MFNode([
                                                                    new Shape({
                                                                      geometry : new SFNode(
                                                                        new Text({
                                                                          string : new MFString(["29"]),
                                                                          fontStyle : new SFNode(
                                                                            new FontStyle({
                                                                              size : new SFFloat(0.035)}))}))})])})])}),

                                                            new HAnimSite({
                                                              name : new SFString("r_thelion"),
                                                              DEF : new SFString("hanim_r_thelion_pt"),
                                                              translation : new SFVec3f([-0.07,1.12,0.09]),
                                                              children : new MFNode([
                                                                new TouchSensor({
                                                                  description : new SFString("HAnimSite 31 hanim_r_thelion_pt")}),

                                                                new Shape({
                                                                  appearance : new SFNode(
                                                                    new Appearance({
                                                                      material : new SFNode(
                                                                        new Material({
                                                                          diffuseColor : new SFColor([1,1,1])}))})),
                                                                  geometry : new SFNode(
                                                                    new IndexedFaceSet({
                                                                      coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                      creaseAngle : new SFFloat(0.5),
                                                                      solid : new SFBool(false),
                                                                      color : new SFNode(
                                                                        new ColorRGBA({
                                                                          color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                                                      coord : new SFNode(
                                                                        new Coordinate({
                                                                          point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                                                new Billboard({
                                                                  axisOfRotation : new SFVec3f([0,0,0]),
                                                                  children : new MFNode([
                                                                    new Shape({
                                                                      geometry : new SFNode(
                                                                        new Text({
                                                                          string : new MFString(["31"]),
                                                                          fontStyle : new SFNode(
                                                                            new FontStyle({
                                                                              size : new SFFloat(0.035)}))}))})])})])}),

                                                            new HAnimSite({
                                                              name : new SFString("rear_center_midsagittal_plane"),
                                                              DEF : new SFString("hanim_rear_center_midsagittal_plane_pt"),
                                                              translation : new SFVec3f([0,1.1,-0.1]),
                                                              children : new MFNode([
                                                                new TouchSensor({
                                                                  description : new SFString("HAnimSite 92 hanim_rear_center_midsagittal_plane_pt")}),

                                                                new Shape({
                                                                  appearance : new SFNode(
                                                                    new Appearance({
                                                                      material : new SFNode(
                                                                        new Material({
                                                                          diffuseColor : new SFColor([1,1,1])}))})),
                                                                  geometry : new SFNode(
                                                                    new IndexedFaceSet({
                                                                      coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                      creaseAngle : new SFFloat(0.5),
                                                                      solid : new SFBool(false),
                                                                      color : new SFNode(
                                                                        new ColorRGBA({
                                                                          color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                                                      coord : new SFNode(
                                                                        new Coordinate({
                                                                          point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                                                new Billboard({
                                                                  axisOfRotation : new SFVec3f([0,0,0]),
                                                                  children : new MFNode([
                                                                    new Shape({
                                                                      geometry : new SFNode(
                                                                        new Text({
                                                                          string : new MFString(["92"]),
                                                                          fontStyle : new SFNode(
                                                                            new FontStyle({
                                                                              size : new SFFloat(0.035)}))}))})])})])}),

                                                            new HAnimSite({
                                                              name : new SFString("l_chest_midsagittal_plane"),
                                                              DEF : new SFString("hanim_l_chest_midsagittal_plane_pt"),
                                                              translation : new SFVec3f([0.13,1.12,0]),
                                                              children : new MFNode([
                                                                new TouchSensor({
                                                                  description : new SFString("HAnimSite 94 hanim_l_chest_midsagittal_plane_pt")}),

                                                                new Shape({
                                                                  appearance : new SFNode(
                                                                    new Appearance({
                                                                      material : new SFNode(
                                                                        new Material({
                                                                          diffuseColor : new SFColor([1,1,1])}))})),
                                                                  geometry : new SFNode(
                                                                    new IndexedFaceSet({
                                                                      coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                      creaseAngle : new SFFloat(0.5),
                                                                      solid : new SFBool(false),
                                                                      color : new SFNode(
                                                                        new ColorRGBA({
                                                                          color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                                                      coord : new SFNode(
                                                                        new Coordinate({
                                                                          point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                                                new Billboard({
                                                                  axisOfRotation : new SFVec3f([0,0,0]),
                                                                  children : new MFNode([
                                                                    new Shape({
                                                                      geometry : new SFNode(
                                                                        new Text({
                                                                          string : new MFString(["94"]),
                                                                          fontStyle : new SFNode(
                                                                            new FontStyle({
                                                                              size : new SFFloat(0.035)}))}))})])})])}),

                                                            new HAnimSite({
                                                              name : new SFString("r_chest_midsagittal_plane"),
                                                              DEF : new SFString("hanim_r_chest_midsagittal_plane_pt"),
                                                              translation : new SFVec3f([-0.13,1.12,0]),
                                                              children : new MFNode([
                                                                new TouchSensor({
                                                                  description : new SFString("HAnimSite 95 hanim_r_chest_midsagittal_plane_pt")}),

                                                                new Shape({
                                                                  appearance : new SFNode(
                                                                    new Appearance({
                                                                      material : new SFNode(
                                                                        new Material({
                                                                          diffuseColor : new SFColor([1,1,1])}))})),
                                                                  geometry : new SFNode(
                                                                    new IndexedFaceSet({
                                                                      coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                      creaseAngle : new SFFloat(0.5),
                                                                      solid : new SFBool(false),
                                                                      color : new SFNode(
                                                                        new ColorRGBA({
                                                                          color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                                                      coord : new SFNode(
                                                                        new Coordinate({
                                                                          point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                                                new Billboard({
                                                                  axisOfRotation : new SFVec3f([0,0,0]),
                                                                  children : new MFNode([
                                                                    new Shape({
                                                                      geometry : new SFNode(
                                                                        new Text({
                                                                          string : new MFString(["95"]),
                                                                          fontStyle : new SFNode(
                                                                            new FontStyle({
                                                                              size : new SFFloat(0.035)}))}))})])})])}),

                                                            new Shape({
                                                              geometry : new SFNode(
                                                                new LineSet({
                                                                  vertexCount : new MFInt32([2]),
                                                                  color : new SFNode(
                                                                    new ColorRGBA({
                                                                      color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                                  coord : new SFNode(
                                                                    new Coordinate({
                                                                      point : new MFVec3f([0,1.0784,-0.01376,0,1.0638,-0.01378])}))}))})])}),

                                                        new HAnimJoint({
                                                          name : new SFString("vt8"),
                                                          DEF : new SFString("hanim_vt8"),
                                                          center : new SFVec3f([0,1.093,-0.01376]),
                                                          ulimit : new MFFloat([0,0,0]),
                                                          llimit : new MFFloat([0,0,0]),
                                                          children : new MFNode([
                                                            new HAnimSegment({
                                                              name : new SFString("t8"),
                                                              DEF : new SFString("hanim_t8"),
                                                              children : new MFNode([
                                                                new Shape({
                                                                  geometry : new SFNode(
                                                                    new LineSet({
                                                                      vertexCount : new MFInt32([2]),
                                                                      color : new SFNode(
                                                                        new ColorRGBA({
                                                                          color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                                      coord : new SFNode(
                                                                        new Coordinate({
                                                                          point : new MFVec3f([0,1.093,-0.01376,0,1.0784,-0.01376])}))}))})])}),

                                                            new HAnimJoint({
                                                              name : new SFString("vt7"),
                                                              DEF : new SFString("hanim_vt7"),
                                                              center : new SFVec3f([0,1.1088,-0.01376]),
                                                              ulimit : new MFFloat([0,0,0]),
                                                              llimit : new MFFloat([0,0,0]),
                                                              children : new MFNode([
                                                                new HAnimSegment({
                                                                  name : new SFString("t7"),
                                                                  DEF : new SFString("hanim_t7"),
                                                                  children : new MFNode([
                                                                    new Shape({
                                                                      geometry : new SFNode(
                                                                        new LineSet({
                                                                          vertexCount : new MFInt32([2]),
                                                                          color : new SFNode(
                                                                            new ColorRGBA({
                                                                              color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                                          coord : new SFNode(
                                                                            new Coordinate({
                                                                              point : new MFVec3f([0,1.1088,-0.01376,0,1.093,-0.01376])}))}))})])}),

                                                                new HAnimJoint({
                                                                  name : new SFString("vt6"),
                                                                  DEF : new SFString("hanim_vt6"),
                                                                  center : new SFVec3f([0,1.1216,-0.01376]),
                                                                  ulimit : new MFFloat([0,0,0]),
                                                                  llimit : new MFFloat([0,0,0]),
                                                                  children : new MFNode([
                                                                    new HAnimSegment({
                                                                      name : new SFString("t6"),
                                                                      DEF : new SFString("hanim_t6"),
                                                                      children : new MFNode([
                                                                        new Shape({
                                                                          geometry : new SFNode(
                                                                            new LineSet({
                                                                              vertexCount : new MFInt32([2]),
                                                                              color : new SFNode(
                                                                                new ColorRGBA({
                                                                                  color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                                              coord : new SFNode(
                                                                                new Coordinate({
                                                                                  point : new MFVec3f([0,1.1216,-0.01376,0,1.1088,-0.01376])}))}))})])}),

                                                                    new HAnimJoint({
                                                                      name : new SFString("vt5"),
                                                                      DEF : new SFString("hanim_vt5"),
                                                                      center : new SFVec3f([0,1.137,-0.01376]),
                                                                      ulimit : new MFFloat([0,0,0]),
                                                                      llimit : new MFFloat([0,0,0]),
                                                                      children : new MFNode([
                                                                        new HAnimSegment({
                                                                          name : new SFString("t5"),
                                                                          DEF : new SFString("hanim_t5"),
                                                                          children : new MFNode([
                                                                            new Shape({
                                                                              geometry : new SFNode(
                                                                                new LineSet({
                                                                                  vertexCount : new MFInt32([2]),
                                                                                  color : new SFNode(
                                                                                    new ColorRGBA({
                                                                                      color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                                                  coord : new SFNode(
                                                                                    new Coordinate({
                                                                                      point : new MFVec3f([0,1.137,-0.01376,0,1.1216,-0.01376])}))}))})])}),

                                                                        new HAnimJoint({
                                                                          name : new SFString("vt4"),
                                                                          DEF : new SFString("hanim_vt4"),
                                                                          center : new SFVec3f([0,1.1524,-0.01376]),
                                                                          ulimit : new MFFloat([0,0,0]),
                                                                          llimit : new MFFloat([0,0,0]),
                                                                          children : new MFNode([
                                                                            new HAnimSegment({
                                                                              name : new SFString("t4"),
                                                                              DEF : new SFString("hanim_t4"),
                                                                              children : new MFNode([
                                                                                new Shape({
                                                                                  geometry : new SFNode(
                                                                                    new LineSet({
                                                                                      vertexCount : new MFInt32([2]),
                                                                                      color : new SFNode(
                                                                                        new ColorRGBA({
                                                                                          color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                                                      coord : new SFNode(
                                                                                        new Coordinate({
                                                                                          point : new MFVec3f([0,1.1524,-0.01376,0,1.137,-0.01376])}))}))})])}),

                                                                            new HAnimJoint({
                                                                              name : new SFString("vt3"),
                                                                              DEF : new SFString("hanim_vt3"),
                                                                              center : new SFVec3f([0,1.1709,-0.01376]),
                                                                              ulimit : new MFFloat([0,0,0]),
                                                                              llimit : new MFFloat([0,0,0]),
                                                                              children : new MFNode([
                                                                                new HAnimSegment({
                                                                                  name : new SFString("t3"),
                                                                                  DEF : new SFString("hanim_t3"),
                                                                                  children : new MFNode([
                                                                                    new Shape({
                                                                                      geometry : new SFNode(
                                                                                        new LineSet({
                                                                                          vertexCount : new MFInt32([2]),
                                                                                          color : new SFNode(
                                                                                            new ColorRGBA({
                                                                                              color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                                                          coord : new SFNode(
                                                                                            new Coordinate({
                                                                                              point : new MFVec3f([0,1.1709,-0.01376,0,1.1524,-0.01376])}))}))})])}),

                                                                                new HAnimJoint({
                                                                                  name : new SFString("vt2"),
                                                                                  DEF : new SFString("hanim_vt2"),
                                                                                  center : new SFVec3f([0,1.1956,-0.01378]),
                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                  children : new MFNode([
                                                                                    new HAnimSegment({
                                                                                      name : new SFString("t2"),
                                                                                      DEF : new SFString("hanim_t2"),
                                                                                      children : new MFNode([
                                                                                        new Shape({
                                                                                          geometry : new SFNode(
                                                                                            new LineSet({
                                                                                              vertexCount : new MFInt32([2]),
                                                                                              color : new SFNode(
                                                                                                new ColorRGBA({
                                                                                                  color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                                                              coord : new SFNode(
                                                                                                new Coordinate({
                                                                                                  point : new MFVec3f([0,1.1956,-0.01378,0,1.1709,-0.01376])}))}))})])}),

                                                                                    new HAnimJoint({
                                                                                      name : new SFString("vt1"),
                                                                                      DEF : new SFString("hanim_vt1"),
                                                                                      center : new SFVec3f([0,1.22,-0.0138]),
                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                      children : new MFNode([
                                                                                        new HAnimSegment({
                                                                                          name : new SFString("t1"),
                                                                                          DEF : new SFString("hanim_t1"),
                                                                                          children : new MFNode([
                                                                                            new HAnimSite({
                                                                                              name : new SFString("suprasternale"),
                                                                                              DEF : new SFString("hanim_suprasternale_pt"),
                                                                                              translation : new SFVec3f([0,1.22,0.08]),
                                                                                              children : new MFNode([
                                                                                                new TouchSensor({
                                                                                                  description : new SFString("HAnimSite 12 hanim_suprasternale_pt")}),

                                                                                                new Shape({
                                                                                                  appearance : new SFNode(
                                                                                                    new Appearance({
                                                                                                      material : new SFNode(
                                                                                                        new Material({
                                                                                                          diffuseColor : new SFColor([1,1,1])}))})),
                                                                                                  geometry : new SFNode(
                                                                                                    new IndexedFaceSet({
                                                                                                      coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                      creaseAngle : new SFFloat(0.5),
                                                                                                      solid : new SFBool(false),
                                                                                                      color : new SFNode(
                                                                                                        new ColorRGBA({
                                                                                                          color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                                                                                      coord : new SFNode(
                                                                                                        new Coordinate({
                                                                                                          point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                                                                                new Billboard({
                                                                                                  axisOfRotation : new SFVec3f([0,0,0]),
                                                                                                  children : new MFNode([
                                                                                                    new Shape({
                                                                                                      geometry : new SFNode(
                                                                                                        new Text({
                                                                                                          string : new MFString(["12"]),
                                                                                                          fontStyle : new SFNode(
                                                                                                            new FontStyle({
                                                                                                              size : new SFFloat(0.035)}))}))})])})])}),

                                                                                            new HAnimSite({
                                                                                              name : new SFString("cervicale"),
                                                                                              DEF : new SFString("hanim_cervicale_pt"),
                                                                                              translation : new SFVec3f([0,1.22,-0.08]),
                                                                                              children : new MFNode([
                                                                                                new TouchSensor({
                                                                                                  description : new SFString("HAnimSite 10 hanim_cervicale_pt")}),

                                                                                                new Shape({
                                                                                                  appearance : new SFNode(
                                                                                                    new Appearance({
                                                                                                      material : new SFNode(
                                                                                                        new Material({
                                                                                                          diffuseColor : new SFColor([1,1,1])}))})),
                                                                                                  geometry : new SFNode(
                                                                                                    new IndexedFaceSet({
                                                                                                      coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                      creaseAngle : new SFFloat(0.5),
                                                                                                      solid : new SFBool(false),
                                                                                                      color : new SFNode(
                                                                                                        new ColorRGBA({
                                                                                                          color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                                                                                      coord : new SFNode(
                                                                                                        new Coordinate({
                                                                                                          point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                                                                                new Billboard({
                                                                                                  axisOfRotation : new SFVec3f([0,0,0]),
                                                                                                  children : new MFNode([
                                                                                                    new Shape({
                                                                                                      geometry : new SFNode(
                                                                                                        new Text({
                                                                                                          string : new MFString(["10"]),
                                                                                                          fontStyle : new SFNode(
                                                                                                            new FontStyle({
                                                                                                              size : new SFFloat(0.035)}))}))})])})])}),

                                                                                            new Shape({
                                                                                              geometry : new SFNode(
                                                                                                new LineSet({
                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                  color : new SFNode(
                                                                                                    new ColorRGBA({
                                                                                                      color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                                                                  coord : new SFNode(
                                                                                                    new Coordinate({
                                                                                                      point : new MFVec3f([0,1.22,-0.0138,0,1.1956,-0.01378])}))}))})])}),

                                                                                        new HAnimJoint({
                                                                                          name : new SFString("vc7"),
                                                                                          DEF : new SFString("hanim_vc7"),
                                                                                          center : new SFVec3f([0,1.2453,-0.01506]),
                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                          children : new MFNode([
                                                                                            new HAnimSegment({
                                                                                              name : new SFString("c7"),
                                                                                              DEF : new SFString("hanim_c7"),
                                                                                              children : new MFNode([
                                                                                                new HAnimSite({
                                                                                                  name : new SFString("l_neck_base"),
                                                                                                  DEF : new SFString("hanim_l_neck_base_pt"),
                                                                                                  translation : new SFVec3f([0.06,1.26,0]),
                                                                                                  children : new MFNode([
                                                                                                    new TouchSensor({
                                                                                                      description : new SFString("HAnimSite 82 hanim_l_neck_base_pt")}),

                                                                                                    new Shape({
                                                                                                      appearance : new SFNode(
                                                                                                        new Appearance({
                                                                                                          material : new SFNode(
                                                                                                            new Material({
                                                                                                              diffuseColor : new SFColor([1,1,1])}))})),
                                                                                                      geometry : new SFNode(
                                                                                                        new IndexedFaceSet({
                                                                                                          coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                          creaseAngle : new SFFloat(0.5),
                                                                                                          solid : new SFBool(false),
                                                                                                          color : new SFNode(
                                                                                                            new ColorRGBA({
                                                                                                              color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                                                                                          coord : new SFNode(
                                                                                                            new Coordinate({
                                                                                                              point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                                                                                    new Billboard({
                                                                                                      axisOfRotation : new SFVec3f([0,0,0]),
                                                                                                      children : new MFNode([
                                                                                                        new Shape({
                                                                                                          geometry : new SFNode(
                                                                                                            new Text({
                                                                                                              string : new MFString(["82"]),
                                                                                                              fontStyle : new SFNode(
                                                                                                                new FontStyle({
                                                                                                                  size : new SFFloat(0.035)}))}))})])})])}),

                                                                                                new HAnimSite({
                                                                                                  name : new SFString("r_neck_base"),
                                                                                                  DEF : new SFString("hanim_r_neck_base_pt"),
                                                                                                  translation : new SFVec3f([-0.06,1.26,0]),
                                                                                                  children : new MFNode([
                                                                                                    new TouchSensor({
                                                                                                      description : new SFString("HAnimSite 83 hanim_r_neck_base_pt")}),

                                                                                                    new Shape({
                                                                                                      appearance : new SFNode(
                                                                                                        new Appearance({
                                                                                                          material : new SFNode(
                                                                                                            new Material({
                                                                                                              diffuseColor : new SFColor([1,1,1])}))})),
                                                                                                      geometry : new SFNode(
                                                                                                        new IndexedFaceSet({
                                                                                                          coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                          creaseAngle : new SFFloat(0.5),
                                                                                                          solid : new SFBool(false),
                                                                                                          color : new SFNode(
                                                                                                            new ColorRGBA({
                                                                                                              color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                                                                                          coord : new SFNode(
                                                                                                            new Coordinate({
                                                                                                              point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                                                                                    new Billboard({
                                                                                                      axisOfRotation : new SFVec3f([0,0,0]),
                                                                                                      children : new MFNode([
                                                                                                        new Shape({
                                                                                                          geometry : new SFNode(
                                                                                                            new Text({
                                                                                                              string : new MFString(["83"]),
                                                                                                              fontStyle : new SFNode(
                                                                                                                new FontStyle({
                                                                                                                  size : new SFFloat(0.035)}))}))})])})])}),

                                                                                                new Shape({
                                                                                                  geometry : new SFNode(
                                                                                                    new LineSet({
                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                      color : new SFNode(
                                                                                                        new ColorRGBA({
                                                                                                          color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                                                                      coord : new SFNode(
                                                                                                        new Coordinate({
                                                                                                          point : new MFVec3f([0,1.2453,-0.01506,0,1.22,-0.0138])}))}))})])}),

                                                                                            new HAnimJoint({
                                                                                              name : new SFString("vc6"),
                                                                                              DEF : new SFString("hanim_vc6"),
                                                                                              center : new SFVec3f([0,1.2575,-0.01506]),
                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                              llimit : new MFFloat([0,0,0]),
                                                                                              children : new MFNode([
                                                                                                new HAnimSegment({
                                                                                                  name : new SFString("c6"),
                                                                                                  DEF : new SFString("hanim_c6"),
                                                                                                  children : new MFNode([
                                                                                                    new Shape({
                                                                                                      geometry : new SFNode(
                                                                                                        new LineSet({
                                                                                                          vertexCount : new MFInt32([2]),
                                                                                                          color : new SFNode(
                                                                                                            new ColorRGBA({
                                                                                                              color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                                                                          coord : new SFNode(
                                                                                                            new Coordinate({
                                                                                                              point : new MFVec3f([0,1.2575,-0.01506,0,1.2453,-0.01506])}))}))})])}),

                                                                                                new HAnimJoint({
                                                                                                  name : new SFString("vc5"),
                                                                                                  DEF : new SFString("hanim_vc5"),
                                                                                                  center : new SFVec3f([0,1.2699,-0.01506]),
                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                                  children : new MFNode([
                                                                                                    new HAnimSegment({
                                                                                                      name : new SFString("c5"),
                                                                                                      DEF : new SFString("hanim_c5"),
                                                                                                      children : new MFNode([
                                                                                                        new Shape({
                                                                                                          geometry : new SFNode(
                                                                                                            new LineSet({
                                                                                                              vertexCount : new MFInt32([2]),
                                                                                                              color : new SFNode(
                                                                                                                new ColorRGBA({
                                                                                                                  color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                                                                              coord : new SFNode(
                                                                                                                new Coordinate({
                                                                                                                  point : new MFVec3f([0,1.2699,-0.01506,0,1.2575,-0.01506])}))}))})])}),

                                                                                                    new HAnimJoint({
                                                                                                      name : new SFString("vc4"),
                                                                                                      DEF : new SFString("hanim_vc4"),
                                                                                                      center : new SFVec3f([0,1.28227,-0.01506]),
                                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                                      children : new MFNode([
                                                                                                        new HAnimSegment({
                                                                                                          name : new SFString("c4"),
                                                                                                          DEF : new SFString("hanim_c4"),
                                                                                                          children : new MFNode([
                                                                                                            new Shape({
                                                                                                              geometry : new SFNode(
                                                                                                                new LineSet({
                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                  color : new SFNode(
                                                                                                                    new ColorRGBA({
                                                                                                                      color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                                                                                  coord : new SFNode(
                                                                                                                    new Coordinate({
                                                                                                                      point : new MFVec3f([0,1.28227,-0.01506,0,1.2699,-0.01506])}))}))})])}),

                                                                                                        new HAnimJoint({
                                                                                                          name : new SFString("vc3"),
                                                                                                          DEF : new SFString("hanim_vc3"),
                                                                                                          center : new SFVec3f([0,1.2951,-0.01506]),
                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                                          children : new MFNode([
                                                                                                            new HAnimSegment({
                                                                                                              name : new SFString("c3"),
                                                                                                              DEF : new SFString("hanim_c3"),
                                                                                                              children : new MFNode([
                                                                                                                new Shape({
                                                                                                                  geometry : new SFNode(
                                                                                                                    new LineSet({
                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                      color : new SFNode(
                                                                                                                        new ColorRGBA({
                                                                                                                          color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                                                                                      coord : new SFNode(
                                                                                                                        new Coordinate({
                                                                                                                          point : new MFVec3f([0,1.2951,-0.01506,0,1.28227,-0.01506])}))}))})])}),

                                                                                                            new HAnimJoint({
                                                                                                              name : new SFString("vc2"),
                                                                                                              DEF : new SFString("hanim_vc2"),
                                                                                                              center : new SFVec3f([0,1.307,-0.015]),
                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                              llimit : new MFFloat([0,0,0]),
                                                                                                              children : new MFNode([
                                                                                                                new HAnimSegment({
                                                                                                                  name : new SFString("c2"),
                                                                                                                  DEF : new SFString("hanim_c2"),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimSite({
                                                                                                                      name : new SFString("adams_apple"),
                                                                                                                      DEF : new SFString("hanim_adams_apple_pt"),
                                                                                                                      translation : new SFVec3f([0,1.29,0.04]),
                                                                                                                      children : new MFNode([
                                                                                                                        new TouchSensor({
                                                                                                                          description : new SFString("HAnimSite 11 hanim_adams_apple_pt")}),

                                                                                                                        new Shape({
                                                                                                                          appearance : new SFNode(
                                                                                                                            new Appearance({
                                                                                                                              material : new SFNode(
                                                                                                                                new Material({
                                                                                                                                  diffuseColor : new SFColor([1,1,1])}))})),
                                                                                                                          geometry : new SFNode(
                                                                                                                            new IndexedFaceSet({
                                                                                                                              coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                                              creaseAngle : new SFFloat(0.5),
                                                                                                                              solid : new SFBool(false),
                                                                                                                              color : new SFNode(
                                                                                                                                new ColorRGBA({
                                                                                                                                  color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                                                                                                              coord : new SFNode(
                                                                                                                                new Coordinate({
                                                                                                                                  point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                                                                                                        new Billboard({
                                                                                                                          axisOfRotation : new SFVec3f([0,0,0]),
                                                                                                                          children : new MFNode([
                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new Text({
                                                                                                                                  string : new MFString(["11"]),
                                                                                                                                  fontStyle : new SFNode(
                                                                                                                                    new FontStyle({
                                                                                                                                      size : new SFFloat(0.035)}))}))})])})])}),

                                                                                                                    new Shape({
                                                                                                                      geometry : new SFNode(
                                                                                                                        new LineSet({
                                                                                                                          vertexCount : new MFInt32([2]),
                                                                                                                          color : new SFNode(
                                                                                                                            new ColorRGBA({
                                                                                                                              color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                                                                                          coord : new SFNode(
                                                                                                                            new Coordinate({
                                                                                                                              point : new MFVec3f([0,1.307,-0.015,0,1.2951,-0.01506])}))}))})])}),

                                                                                                                new HAnimJoint({
                                                                                                                  name : new SFString("vc1"),
                                                                                                                  DEF : new SFString("hanim_vc1"),
                                                                                                                  center : new SFVec3f([0,1.3185,-0.0151]),
                                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimSegment({
                                                                                                                      name : new SFString("c1"),
                                                                                                                      DEF : new SFString("hanim_c1"),
                                                                                                                      children : new MFNode([
                                                                                                                        new Shape({
                                                                                                                          geometry : new SFNode(
                                                                                                                            new LineSet({
                                                                                                                              vertexCount : new MFInt32([2]),
                                                                                                                              color : new SFNode(
                                                                                                                                new ColorRGBA({
                                                                                                                                  color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                                                                                              coord : new SFNode(
                                                                                                                                new Coordinate({
                                                                                                                                  point : new MFVec3f([0,1.3185,-0.0151,0,1.307,-0.015])}))}))})])}),

                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("skullbase"),
                                                                                                                      DEF : new SFString("hanim_skullbase"),
                                                                                                                      center : new SFVec3f([0,1.3126,-0.0154]),
                                                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimSegment({
                                                                                                                          name : new SFString("skull"),
                                                                                                                          DEF : new SFString("hanim_skull"),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSite({
                                                                                                                              name : new SFString("skull_vertex"),
                                                                                                                              DEF : new SFString("hanim_skull_vertex_pt"),
                                                                                                                              translation : new SFVec3f([0,1.612,-0.03]),
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("HAnimSite 0 hanim_skull_vertex_pt")}),

                                                                                                                                new Shape({
                                                                                                                                  appearance : new SFNode(
                                                                                                                                    new Appearance({
                                                                                                                                      material : new SFNode(
                                                                                                                                        new Material({
                                                                                                                                          diffuseColor : new SFColor([1,1,1])}))})),
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new IndexedFaceSet({
                                                                                                                                      coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                                                      creaseAngle : new SFFloat(0.5),
                                                                                                                                      solid : new SFBool(false),
                                                                                                                                      color : new SFNode(
                                                                                                                                        new ColorRGBA({
                                                                                                                                          color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                                                                                                                new Billboard({
                                                                                                                                  axisOfRotation : new SFVec3f([0,0,0]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Shape({
                                                                                                                                      geometry : new SFNode(
                                                                                                                                        new Text({
                                                                                                                                          string : new MFString(["0"]),
                                                                                                                                          fontStyle : new SFNode(
                                                                                                                                            new FontStyle({
                                                                                                                                              size : new SFFloat(0.035)}))}))})])})])}),

                                                                                                                            new HAnimSite({
                                                                                                                              name : new SFString("glabella"),
                                                                                                                              DEF : new SFString("hanim_glabella_pt"),
                                                                                                                              translation : new SFVec3f([0,1.454,0.128]),
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("HAnimSite 1 hanim_glabella_pt")}),

                                                                                                                                new Shape({
                                                                                                                                  appearance : new SFNode(
                                                                                                                                    new Appearance({
                                                                                                                                      material : new SFNode(
                                                                                                                                        new Material({
                                                                                                                                          diffuseColor : new SFColor([1,1,1])}))})),
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new IndexedFaceSet({
                                                                                                                                      coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                                                      creaseAngle : new SFFloat(0.5),
                                                                                                                                      solid : new SFBool(false),
                                                                                                                                      color : new SFNode(
                                                                                                                                        new ColorRGBA({
                                                                                                                                          color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                                                                                                                new Billboard({
                                                                                                                                  axisOfRotation : new SFVec3f([0,0,0]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Shape({
                                                                                                                                      geometry : new SFNode(
                                                                                                                                        new Text({
                                                                                                                                          string : new MFString(["1"]),
                                                                                                                                          fontStyle : new SFNode(
                                                                                                                                            new FontStyle({
                                                                                                                                              size : new SFFloat(0.035)}))}))})])})])}),

                                                                                                                            new HAnimSite({
                                                                                                                              name : new SFString("sellion"),
                                                                                                                              DEF : new SFString("hanim_sellion_pt"),
                                                                                                                              translation : new SFVec3f([0,1.4,0.12]),
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("HAnimSite 2 hanim_sellion_pt")}),

                                                                                                                                new Shape({
                                                                                                                                  appearance : new SFNode(
                                                                                                                                    new Appearance({
                                                                                                                                      material : new SFNode(
                                                                                                                                        new Material({
                                                                                                                                          diffuseColor : new SFColor([1,1,1])}))})),
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new IndexedFaceSet({
                                                                                                                                      coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                                                      creaseAngle : new SFFloat(0.5),
                                                                                                                                      solid : new SFBool(false),
                                                                                                                                      color : new SFNode(
                                                                                                                                        new ColorRGBA({
                                                                                                                                          color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                                                                                                                new Billboard({
                                                                                                                                  axisOfRotation : new SFVec3f([0,0,0]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Shape({
                                                                                                                                      geometry : new SFNode(
                                                                                                                                        new Text({
                                                                                                                                          string : new MFString(["2"]),
                                                                                                                                          fontStyle : new SFNode(
                                                                                                                                            new FontStyle({
                                                                                                                                              size : new SFFloat(0.035)}))}))})])})])}),

                                                                                                                            new HAnimSite({
                                                                                                                              name : new SFString("l_infraorbitale"),
                                                                                                                              DEF : new SFString("hanim_l_infraorbitale_pt"),
                                                                                                                              translation : new SFVec3f([0.039,1.38,0.09]),
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("HAnimSite 3 hanim_l_infraorbitale_pt")}),

                                                                                                                                new Shape({
                                                                                                                                  appearance : new SFNode(
                                                                                                                                    new Appearance({
                                                                                                                                      material : new SFNode(
                                                                                                                                        new Material({
                                                                                                                                          diffuseColor : new SFColor([1,1,1])}))})),
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new IndexedFaceSet({
                                                                                                                                      coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                                                      creaseAngle : new SFFloat(0.5),
                                                                                                                                      solid : new SFBool(false),
                                                                                                                                      color : new SFNode(
                                                                                                                                        new ColorRGBA({
                                                                                                                                          color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                                                                                                                new Billboard({
                                                                                                                                  axisOfRotation : new SFVec3f([0,0,0]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Shape({
                                                                                                                                      geometry : new SFNode(
                                                                                                                                        new Text({
                                                                                                                                          string : new MFString(["3"]),
                                                                                                                                          fontStyle : new SFNode(
                                                                                                                                            new FontStyle({
                                                                                                                                              size : new SFFloat(0.035)}))}))})])})])}),

                                                                                                                            new HAnimSite({
                                                                                                                              name : new SFString("l_tragion"),
                                                                                                                              DEF : new SFString("hanim_l_tragion_pt"),
                                                                                                                              translation : new SFVec3f([0.1,1.38,0.0282]),
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("HAnimSite 4 hanim_l_tragion_pt")}),

                                                                                                                                new Shape({
                                                                                                                                  appearance : new SFNode(
                                                                                                                                    new Appearance({
                                                                                                                                      material : new SFNode(
                                                                                                                                        new Material({
                                                                                                                                          diffuseColor : new SFColor([1,1,1])}))})),
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new IndexedFaceSet({
                                                                                                                                      coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                                                      creaseAngle : new SFFloat(0.5),
                                                                                                                                      solid : new SFBool(false),
                                                                                                                                      color : new SFNode(
                                                                                                                                        new ColorRGBA({
                                                                                                                                          color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                                                                                                                new Billboard({
                                                                                                                                  axisOfRotation : new SFVec3f([0,0,0]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Shape({
                                                                                                                                      geometry : new SFNode(
                                                                                                                                        new Text({
                                                                                                                                          string : new MFString(["4"]),
                                                                                                                                          fontStyle : new SFNode(
                                                                                                                                            new FontStyle({
                                                                                                                                              size : new SFFloat(0.035)}))}))})])})])}),

                                                                                                                            new HAnimSite({
                                                                                                                              name : new SFString("r_infraorbitale"),
                                                                                                                              DEF : new SFString("hanim_r_infraorbitale_pt"),
                                                                                                                              translation : new SFVec3f([-0.039,1.38,0.09]),
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("HAnimSite 6 hanim_r_infraorbitale_pt")}),

                                                                                                                                new Shape({
                                                                                                                                  appearance : new SFNode(
                                                                                                                                    new Appearance({
                                                                                                                                      material : new SFNode(
                                                                                                                                        new Material({
                                                                                                                                          diffuseColor : new SFColor([1,1,1])}))})),
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new IndexedFaceSet({
                                                                                                                                      coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                                                      creaseAngle : new SFFloat(0.5),
                                                                                                                                      solid : new SFBool(false),
                                                                                                                                      color : new SFNode(
                                                                                                                                        new ColorRGBA({
                                                                                                                                          color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                                                                                                                new Billboard({
                                                                                                                                  axisOfRotation : new SFVec3f([0,0,0]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Shape({
                                                                                                                                      geometry : new SFNode(
                                                                                                                                        new Text({
                                                                                                                                          string : new MFString(["6"]),
                                                                                                                                          fontStyle : new SFNode(
                                                                                                                                            new FontStyle({
                                                                                                                                              size : new SFFloat(0.035)}))}))})])})])}),

                                                                                                                            new HAnimSite({
                                                                                                                              name : new SFString("r_tragion"),
                                                                                                                              DEF : new SFString("hanim_r_tragion_pt"),
                                                                                                                              translation : new SFVec3f([-0.1,1.38,0.0282]),
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("HAnimSite 7 hanim_r_tragion_pt")}),

                                                                                                                                new Shape({
                                                                                                                                  appearance : new SFNode(
                                                                                                                                    new Appearance({
                                                                                                                                      material : new SFNode(
                                                                                                                                        new Material({
                                                                                                                                          diffuseColor : new SFColor([1,1,1])}))})),
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new IndexedFaceSet({
                                                                                                                                      coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                                                      creaseAngle : new SFFloat(0.5),
                                                                                                                                      solid : new SFBool(false),
                                                                                                                                      color : new SFNode(
                                                                                                                                        new ColorRGBA({
                                                                                                                                          color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                                                                                                                new Billboard({
                                                                                                                                  axisOfRotation : new SFVec3f([0,0,0]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Shape({
                                                                                                                                      geometry : new SFNode(
                                                                                                                                        new Text({
                                                                                                                                          string : new MFString(["7"]),
                                                                                                                                          fontStyle : new SFNode(
                                                                                                                                            new FontStyle({
                                                                                                                                              size : new SFFloat(0.035)}))}))})])})])}),

                                                                                                                            new HAnimSite({
                                                                                                                              name : new SFString("nuchale"),
                                                                                                                              DEF : new SFString("hanim_nuchale_pt"),
                                                                                                                              translation : new SFVec3f([0.0039,1.35,-0.16]),
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("HAnimSite 81 hanim_nuchale_pt")}),

                                                                                                                                new Shape({
                                                                                                                                  appearance : new SFNode(
                                                                                                                                    new Appearance({
                                                                                                                                      material : new SFNode(
                                                                                                                                        new Material({
                                                                                                                                          diffuseColor : new SFColor([1,1,1])}))})),
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new IndexedFaceSet({
                                                                                                                                      coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                                                      creaseAngle : new SFFloat(0.5),
                                                                                                                                      solid : new SFBool(false),
                                                                                                                                      color : new SFNode(
                                                                                                                                        new ColorRGBA({
                                                                                                                                          color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                                                                                                                new Billboard({
                                                                                                                                  axisOfRotation : new SFVec3f([0,0,0]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Shape({
                                                                                                                                      geometry : new SFNode(
                                                                                                                                        new Text({
                                                                                                                                          string : new MFString(["81"]),
                                                                                                                                          fontStyle : new SFNode(
                                                                                                                                            new FontStyle({
                                                                                                                                              size : new SFFloat(0.035)}))}))})])})])}),

                                                                                                                            new HAnimSite({
                                                                                                                              name : new SFString("opisthocranion"),
                                                                                                                              DEF : new SFString("hanim_opisthocranion_pt"),
                                                                                                                              translation : new SFVec3f([0.0039,1.4588,-0.18]),
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("HAnimSite 89 hanim_opisthocranion_pt")}),

                                                                                                                                new Shape({
                                                                                                                                  appearance : new SFNode(
                                                                                                                                    new Appearance({
                                                                                                                                      material : new SFNode(
                                                                                                                                        new Material({
                                                                                                                                          diffuseColor : new SFColor([1,1,1])}))})),
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new IndexedFaceSet({
                                                                                                                                      coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                                                      creaseAngle : new SFFloat(0.5),
                                                                                                                                      solid : new SFBool(false),
                                                                                                                                      color : new SFNode(
                                                                                                                                        new ColorRGBA({
                                                                                                                                          color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                                                                                                                new Billboard({
                                                                                                                                  axisOfRotation : new SFVec3f([0,0,0]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Shape({
                                                                                                                                      geometry : new SFNode(
                                                                                                                                        new Text({
                                                                                                                                          string : new MFString(["89"]),
                                                                                                                                          fontStyle : new SFNode(
                                                                                                                                            new FontStyle({
                                                                                                                                              size : new SFFloat(0.035)}))}))})])})])}),

                                                                                                                            new HAnimSite({
                                                                                                                              name : new SFString("l_ectocanthus"),
                                                                                                                              DEF : new SFString("hanim_l_ectocanthus_pt"),
                                                                                                                              translation : new SFVec3f([0.086,1.399,0.074]),
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("HAnimSite 85 hanim_l_ectocanthus_pt")}),

                                                                                                                                new Shape({
                                                                                                                                  appearance : new SFNode(
                                                                                                                                    new Appearance({
                                                                                                                                      material : new SFNode(
                                                                                                                                        new Material({
                                                                                                                                          diffuseColor : new SFColor([1,1,1])}))})),
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new IndexedFaceSet({
                                                                                                                                      coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                                                      creaseAngle : new SFFloat(0.5),
                                                                                                                                      solid : new SFBool(false),
                                                                                                                                      color : new SFNode(
                                                                                                                                        new ColorRGBA({
                                                                                                                                          color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                                                                                                                new Billboard({
                                                                                                                                  axisOfRotation : new SFVec3f([0,0,0]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Shape({
                                                                                                                                      geometry : new SFNode(
                                                                                                                                        new Text({
                                                                                                                                          string : new MFString(["85"]),
                                                                                                                                          fontStyle : new SFNode(
                                                                                                                                            new FontStyle({
                                                                                                                                              size : new SFFloat(0.035)}))}))})])})])}),

                                                                                                                            new HAnimSite({
                                                                                                                              name : new SFString("r_ectocanthus"),
                                                                                                                              DEF : new SFString("hanim_r_ectocanthus_pt"),
                                                                                                                              translation : new SFVec3f([-0.086,1.399,0.074]),
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("HAnimSite 86 hanim_r_ectocanthus_pt")}),

                                                                                                                                new Shape({
                                                                                                                                  appearance : new SFNode(
                                                                                                                                    new Appearance({
                                                                                                                                      material : new SFNode(
                                                                                                                                        new Material({
                                                                                                                                          diffuseColor : new SFColor([1,1,1])}))})),
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new IndexedFaceSet({
                                                                                                                                      coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                                                      creaseAngle : new SFFloat(0.5),
                                                                                                                                      solid : new SFBool(false),
                                                                                                                                      color : new SFNode(
                                                                                                                                        new ColorRGBA({
                                                                                                                                          color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                                                                                                                new Billboard({
                                                                                                                                  axisOfRotation : new SFVec3f([0,0,0]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Shape({
                                                                                                                                      geometry : new SFNode(
                                                                                                                                        new Text({
                                                                                                                                          string : new MFString(["86"]),
                                                                                                                                          fontStyle : new SFNode(
                                                                                                                                            new FontStyle({
                                                                                                                                              size : new SFFloat(0.035)}))}))})])})])}),

                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([0,1.3126,-0.0154,0,1.3185,-0.0151])}))}))})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("l_eyelid_joint"),
                                                                                                                          DEF : new SFString("hanim_l_eyelid_joint"),
                                                                                                                          center : new SFVec3f([0.0505,1.42425,0.03294]),
                                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              name : new SFString("l_eyelid"),
                                                                                                                              DEF : new SFString("hanim_l_eyelid"),
                                                                                                                              children : new MFNode([
                                                                                                                                new HAnimSite({
                                                                                                                                  name : new SFString("l_eyelid_tip"),
                                                                                                                                  DEF : new SFString("hanim_l_eyelid_tip"),
                                                                                                                                  translation : new SFVec3f([0,2.64,0]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new TouchSensor({
                                                                                                                                      description : new SFString("HAnimSite l_eyelid_tip hanim_l_eyelid_tip")}),

                                                                                                                                    new Shape({
                                                                                                                                      appearance : new SFNode(
                                                                                                                                        new Appearance({
                                                                                                                                          material : new SFNode(
                                                                                                                                            new Material({
                                                                                                                                              diffuseColor : new SFColor([1,1,1])}))})),
                                                                                                                                      geometry : new SFNode(
                                                                                                                                        new IndexedFaceSet({
                                                                                                                                          coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                                                          creaseAngle : new SFFloat(0.5),
                                                                                                                                          solid : new SFBool(false),
                                                                                                                                          color : new SFNode(
                                                                                                                                            new ColorRGBA({
                                                                                                                                              color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                                                                                                                          coord : new SFNode(
                                                                                                                                            new Coordinate({
                                                                                                                                              point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                                                                                                                    new Billboard({
                                                                                                                                      axisOfRotation : new SFVec3f([0,0,0]),
                                                                                                                                      children : new MFNode([
                                                                                                                                        new Shape({
                                                                                                                                          geometry : new SFNode(
                                                                                                                                            new Text({
                                                                                                                                              string : new MFString(["l_eyelid_tip"]),
                                                                                                                                              fontStyle : new SFNode(
                                                                                                                                                new FontStyle({
                                                                                                                                                  size : new SFFloat(0.035)}))}))})])})])}),

                                                                                                                                new Shape({
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new LineSet({
                                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                                      color : new SFNode(
                                                                                                                                        new ColorRGBA({
                                                                                                                                          color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          point : new MFVec3f([0.0505,1.42425,0.03294,0,1.3126,-0.0154])}))}))})])})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("r_eyelid_joint"),
                                                                                                                          DEF : new SFString("hanim_r_eyelid_joint"),
                                                                                                                          center : new SFVec3f([-0.0505,1.42425,0.03294]),
                                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              name : new SFString("r_eyelid"),
                                                                                                                              DEF : new SFString("hanim_r_eyelid"),
                                                                                                                              children : new MFNode([
                                                                                                                                new HAnimSite({
                                                                                                                                  name : new SFString("r_eyelid_tip"),
                                                                                                                                  DEF : new SFString("hanim_r_eyelid_tip"),
                                                                                                                                  translation : new SFVec3f([0,2.68,0]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new TouchSensor({
                                                                                                                                      description : new SFString("HAnimSite r_eyelid_tip hanim_r_eyelid_tip")}),

                                                                                                                                    new Shape({
                                                                                                                                      appearance : new SFNode(
                                                                                                                                        new Appearance({
                                                                                                                                          material : new SFNode(
                                                                                                                                            new Material({
                                                                                                                                              diffuseColor : new SFColor([1,1,1])}))})),
                                                                                                                                      geometry : new SFNode(
                                                                                                                                        new IndexedFaceSet({
                                                                                                                                          coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                                                          creaseAngle : new SFFloat(0.5),
                                                                                                                                          solid : new SFBool(false),
                                                                                                                                          color : new SFNode(
                                                                                                                                            new ColorRGBA({
                                                                                                                                              color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                                                                                                                          coord : new SFNode(
                                                                                                                                            new Coordinate({
                                                                                                                                              point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                                                                                                                    new Billboard({
                                                                                                                                      axisOfRotation : new SFVec3f([0,0,0]),
                                                                                                                                      children : new MFNode([
                                                                                                                                        new Shape({
                                                                                                                                          geometry : new SFNode(
                                                                                                                                            new Text({
                                                                                                                                              string : new MFString(["r_eyelid_tip"]),
                                                                                                                                              fontStyle : new SFNode(
                                                                                                                                                new FontStyle({
                                                                                                                                                  size : new SFFloat(0.035)}))}))})])})])}),

                                                                                                                                new Shape({
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new LineSet({
                                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                                      color : new SFNode(
                                                                                                                                        new ColorRGBA({
                                                                                                                                          color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          point : new MFVec3f([-0.0505,1.42425,0.03294,0,1.3126,-0.0154])}))}))})])})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("l_eyeball_joint"),
                                                                                                                          DEF : new SFString("hanim_l_eyeball_joint"),
                                                                                                                          center : new SFVec3f([0.048127,1.4049,0.08305]),
                                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              name : new SFString("l_eyeball"),
                                                                                                                              DEF : new SFString("hanim_l_eyeball"),
                                                                                                                              children : new MFNode([
                                                                                                                                new HAnimSite({
                                                                                                                                  name : new SFString("l_eyeball_tip"),
                                                                                                                                  DEF : new SFString("hanim_l_eyeball_tip"),
                                                                                                                                  translation : new SFVec3f([0,2.72,0]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new TouchSensor({
                                                                                                                                      description : new SFString("HAnimSite l_eyeball_tip hanim_l_eyeball_tip")}),

                                                                                                                                    new Shape({
                                                                                                                                      appearance : new SFNode(
                                                                                                                                        new Appearance({
                                                                                                                                          material : new SFNode(
                                                                                                                                            new Material({
                                                                                                                                              diffuseColor : new SFColor([1,1,1])}))})),
                                                                                                                                      geometry : new SFNode(
                                                                                                                                        new IndexedFaceSet({
                                                                                                                                          coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                                                          creaseAngle : new SFFloat(0.5),
                                                                                                                                          solid : new SFBool(false),
                                                                                                                                          color : new SFNode(
                                                                                                                                            new ColorRGBA({
                                                                                                                                              color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                                                                                                                          coord : new SFNode(
                                                                                                                                            new Coordinate({
                                                                                                                                              point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                                                                                                                    new Billboard({
                                                                                                                                      axisOfRotation : new SFVec3f([0,0,0]),
                                                                                                                                      children : new MFNode([
                                                                                                                                        new Shape({
                                                                                                                                          geometry : new SFNode(
                                                                                                                                            new Text({
                                                                                                                                              string : new MFString(["l_eyeball_tip"]),
                                                                                                                                              fontStyle : new SFNode(
                                                                                                                                                new FontStyle({
                                                                                                                                                  size : new SFFloat(0.035)}))}))})])})])}),

                                                                                                                                new Shape({
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new LineSet({
                                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                                      color : new SFNode(
                                                                                                                                        new ColorRGBA({
                                                                                                                                          color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          point : new MFVec3f([0.048127,1.4049,0.08305,0,1.3126,-0.0154])}))}))})])})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("r_eyeball_joint"),
                                                                                                                          DEF : new SFString("hanim_r_eyeball_joint"),
                                                                                                                          center : new SFVec3f([-0.04813,1.4049,0.08305]),
                                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              name : new SFString("r_eyeball"),
                                                                                                                              DEF : new SFString("hanim_r_eyeball"),
                                                                                                                              children : new MFNode([
                                                                                                                                new HAnimSite({
                                                                                                                                  name : new SFString("r_eyeball_tip"),
                                                                                                                                  DEF : new SFString("hanim_r_eyeball_tip"),
                                                                                                                                  translation : new SFVec3f([0,2.76,0]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new TouchSensor({
                                                                                                                                      description : new SFString("HAnimSite r_eyeball_tip hanim_r_eyeball_tip")}),

                                                                                                                                    new Shape({
                                                                                                                                      appearance : new SFNode(
                                                                                                                                        new Appearance({
                                                                                                                                          material : new SFNode(
                                                                                                                                            new Material({
                                                                                                                                              diffuseColor : new SFColor([1,1,1])}))})),
                                                                                                                                      geometry : new SFNode(
                                                                                                                                        new IndexedFaceSet({
                                                                                                                                          coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                                                          creaseAngle : new SFFloat(0.5),
                                                                                                                                          solid : new SFBool(false),
                                                                                                                                          color : new SFNode(
                                                                                                                                            new ColorRGBA({
                                                                                                                                              color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                                                                                                                          coord : new SFNode(
                                                                                                                                            new Coordinate({
                                                                                                                                              point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                                                                                                                    new Billboard({
                                                                                                                                      axisOfRotation : new SFVec3f([0,0,0]),
                                                                                                                                      children : new MFNode([
                                                                                                                                        new Shape({
                                                                                                                                          geometry : new SFNode(
                                                                                                                                            new Text({
                                                                                                                                              string : new MFString(["r_eyeball_tip"]),
                                                                                                                                              fontStyle : new SFNode(
                                                                                                                                                new FontStyle({
                                                                                                                                                  size : new SFFloat(0.035)}))}))})])})])}),

                                                                                                                                new Shape({
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new LineSet({
                                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                                      color : new SFNode(
                                                                                                                                        new ColorRGBA({
                                                                                                                                          color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          point : new MFVec3f([-0.04813,1.4049,0.08305,0,1.3126,-0.0154])}))}))})])})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("l_eyebrow_joint"),
                                                                                                                          DEF : new SFString("hanim_l_eyebrow_joint"),
                                                                                                                          center : new SFVec3f([0.02175,1.4139,0.1069]),
                                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              name : new SFString("l_eyebrow"),
                                                                                                                              DEF : new SFString("hanim_l_eyebrow"),
                                                                                                                              children : new MFNode([
                                                                                                                                new HAnimSite({
                                                                                                                                  name : new SFString("l_eyebrow_tip"),
                                                                                                                                  DEF : new SFString("hanim_l_eyebrow_tip"),
                                                                                                                                  translation : new SFVec3f([0,2.8,0]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new TouchSensor({
                                                                                                                                      description : new SFString("HAnimSite l_eyebrow_tip hanim_l_eyebrow_tip")}),

                                                                                                                                    new Shape({
                                                                                                                                      appearance : new SFNode(
                                                                                                                                        new Appearance({
                                                                                                                                          material : new SFNode(
                                                                                                                                            new Material({
                                                                                                                                              diffuseColor : new SFColor([1,1,1])}))})),
                                                                                                                                      geometry : new SFNode(
                                                                                                                                        new IndexedFaceSet({
                                                                                                                                          coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                                                          creaseAngle : new SFFloat(0.5),
                                                                                                                                          solid : new SFBool(false),
                                                                                                                                          color : new SFNode(
                                                                                                                                            new ColorRGBA({
                                                                                                                                              color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                                                                                                                          coord : new SFNode(
                                                                                                                                            new Coordinate({
                                                                                                                                              point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                                                                                                                    new Billboard({
                                                                                                                                      axisOfRotation : new SFVec3f([0,0,0]),
                                                                                                                                      children : new MFNode([
                                                                                                                                        new Shape({
                                                                                                                                          geometry : new SFNode(
                                                                                                                                            new Text({
                                                                                                                                              string : new MFString(["l_eyebrow_tip"]),
                                                                                                                                              fontStyle : new SFNode(
                                                                                                                                                new FontStyle({
                                                                                                                                                  size : new SFFloat(0.035)}))}))})])})])}),

                                                                                                                                new Shape({
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new LineSet({
                                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                                      color : new SFNode(
                                                                                                                                        new ColorRGBA({
                                                                                                                                          color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          point : new MFVec3f([0.02175,1.4139,0.1069,0,1.3126,-0.0154])}))}))})])})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("r_eyebrow_joint"),
                                                                                                                          DEF : new SFString("hanim_r_eyebrow_joint"),
                                                                                                                          center : new SFVec3f([-0.02175,1.4139,0.10694]),
                                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              name : new SFString("r_eyebrow"),
                                                                                                                              DEF : new SFString("hanim_r_eyebrow"),
                                                                                                                              children : new MFNode([
                                                                                                                                new HAnimSite({
                                                                                                                                  name : new SFString("r_eyebrow_tip"),
                                                                                                                                  DEF : new SFString("hanim_r_eyebrow_tip"),
                                                                                                                                  translation : new SFVec3f([0,2.84,0]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new TouchSensor({
                                                                                                                                      description : new SFString("HAnimSite r_eyebrow_tip hanim_r_eyebrow_tip")}),

                                                                                                                                    new Shape({
                                                                                                                                      appearance : new SFNode(
                                                                                                                                        new Appearance({
                                                                                                                                          material : new SFNode(
                                                                                                                                            new Material({
                                                                                                                                              diffuseColor : new SFColor([1,1,1])}))})),
                                                                                                                                      geometry : new SFNode(
                                                                                                                                        new IndexedFaceSet({
                                                                                                                                          coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                                                          creaseAngle : new SFFloat(0.5),
                                                                                                                                          solid : new SFBool(false),
                                                                                                                                          color : new SFNode(
                                                                                                                                            new ColorRGBA({
                                                                                                                                              color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                                                                                                                          coord : new SFNode(
                                                                                                                                            new Coordinate({
                                                                                                                                              point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                                                                                                                    new Billboard({
                                                                                                                                      axisOfRotation : new SFVec3f([0,0,0]),
                                                                                                                                      children : new MFNode([
                                                                                                                                        new Shape({
                                                                                                                                          geometry : new SFNode(
                                                                                                                                            new Text({
                                                                                                                                              string : new MFString(["r_eyebrow_tip"]),
                                                                                                                                              fontStyle : new SFNode(
                                                                                                                                                new FontStyle({
                                                                                                                                                  size : new SFFloat(0.035)}))}))})])})])}),

                                                                                                                                new Shape({
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new LineSet({
                                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                                      color : new SFNode(
                                                                                                                                        new ColorRGBA({
                                                                                                                                          color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          point : new MFVec3f([-0.02175,1.4139,0.10694,0,1.3126,-0.0154])}))}))})])})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("temporomandibular"),
                                                                                                                          DEF : new SFString("hanim_temporomandibular"),
                                                                                                                          center : new SFVec3f([0,1.3128,0.01538]),
                                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              name : new SFString("jaw"),
                                                                                                                              DEF : new SFString("hanim_jaw"),
                                                                                                                              children : new MFNode([
                                                                                                                                new HAnimSite({
                                                                                                                                  name : new SFString("l_gonion"),
                                                                                                                                  DEF : new SFString("hanim_l_gonion_pt"),
                                                                                                                                  translation : new SFVec3f([0.068,1.346,0.033]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new TouchSensor({
                                                                                                                                      description : new SFString("HAnimSite 5 hanim_l_gonion_pt")}),

                                                                                                                                    new Shape({
                                                                                                                                      appearance : new SFNode(
                                                                                                                                        new Appearance({
                                                                                                                                          material : new SFNode(
                                                                                                                                            new Material({
                                                                                                                                              diffuseColor : new SFColor([1,1,1])}))})),
                                                                                                                                      geometry : new SFNode(
                                                                                                                                        new IndexedFaceSet({
                                                                                                                                          coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                                                          creaseAngle : new SFFloat(0.5),
                                                                                                                                          solid : new SFBool(false),
                                                                                                                                          color : new SFNode(
                                                                                                                                            new ColorRGBA({
                                                                                                                                              color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                                                                                                                          coord : new SFNode(
                                                                                                                                            new Coordinate({
                                                                                                                                              point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                                                                                                                    new Billboard({
                                                                                                                                      axisOfRotation : new SFVec3f([0,0,0]),
                                                                                                                                      children : new MFNode([
                                                                                                                                        new Shape({
                                                                                                                                          geometry : new SFNode(
                                                                                                                                            new Text({
                                                                                                                                              string : new MFString(["5"]),
                                                                                                                                              fontStyle : new SFNode(
                                                                                                                                                new FontStyle({
                                                                                                                                                  size : new SFFloat(0.035)}))}))})])})])}),

                                                                                                                                new HAnimSite({
                                                                                                                                  name : new SFString("r_gonion"),
                                                                                                                                  DEF : new SFString("hanim_r_gonion_pt"),
                                                                                                                                  translation : new SFVec3f([-0.068,1.346,0.033]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new TouchSensor({
                                                                                                                                      description : new SFString("HAnimSite 8 hanim_r_gonion_pt")}),

                                                                                                                                    new Shape({
                                                                                                                                      appearance : new SFNode(
                                                                                                                                        new Appearance({
                                                                                                                                          material : new SFNode(
                                                                                                                                            new Material({
                                                                                                                                              diffuseColor : new SFColor([1,1,1])}))})),
                                                                                                                                      geometry : new SFNode(
                                                                                                                                        new IndexedFaceSet({
                                                                                                                                          coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                                                          creaseAngle : new SFFloat(0.5),
                                                                                                                                          solid : new SFBool(false),
                                                                                                                                          color : new SFNode(
                                                                                                                                            new ColorRGBA({
                                                                                                                                              color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                                                                                                                          coord : new SFNode(
                                                                                                                                            new Coordinate({
                                                                                                                                              point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                                                                                                                    new Billboard({
                                                                                                                                      axisOfRotation : new SFVec3f([0,0,0]),
                                                                                                                                      children : new MFNode([
                                                                                                                                        new Shape({
                                                                                                                                          geometry : new SFNode(
                                                                                                                                            new Text({
                                                                                                                                              string : new MFString(["8"]),
                                                                                                                                              fontStyle : new SFNode(
                                                                                                                                                new FontStyle({
                                                                                                                                                  size : new SFFloat(0.035)}))}))})])})])}),

                                                                                                                                new HAnimSite({
                                                                                                                                  name : new SFString("supramenton"),
                                                                                                                                  DEF : new SFString("hanim_supramenton_pt"),
                                                                                                                                  translation : new SFVec3f([0,1.32,0.086]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new TouchSensor({
                                                                                                                                      description : new SFString("HAnimSite 9 hanim_supramenton_pt")}),

                                                                                                                                    new Shape({
                                                                                                                                      appearance : new SFNode(
                                                                                                                                        new Appearance({
                                                                                                                                          material : new SFNode(
                                                                                                                                            new Material({
                                                                                                                                              diffuseColor : new SFColor([1,1,1])}))})),
                                                                                                                                      geometry : new SFNode(
                                                                                                                                        new IndexedFaceSet({
                                                                                                                                          coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                                                          creaseAngle : new SFFloat(0.5),
                                                                                                                                          solid : new SFBool(false),
                                                                                                                                          color : new SFNode(
                                                                                                                                            new ColorRGBA({
                                                                                                                                              color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                                                                                                                          coord : new SFNode(
                                                                                                                                            new Coordinate({
                                                                                                                                              point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                                                                                                                    new Billboard({
                                                                                                                                      axisOfRotation : new SFVec3f([0,0,0]),
                                                                                                                                      children : new MFNode([
                                                                                                                                        new Shape({
                                                                                                                                          geometry : new SFNode(
                                                                                                                                            new Text({
                                                                                                                                              string : new MFString(["9"]),
                                                                                                                                              fontStyle : new SFNode(
                                                                                                                                                new FontStyle({
                                                                                                                                                  size : new SFFloat(0.035)}))}))})])})])}),

                                                                                                                                new HAnimSite({
                                                                                                                                  name : new SFString("menton"),
                                                                                                                                  DEF : new SFString("hanim_menton_pt"),
                                                                                                                                  translation : new SFVec3f([0,1.3,0.08]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new TouchSensor({
                                                                                                                                      description : new SFString("HAnimSite 87 hanim_menton_pt")}),

                                                                                                                                    new Shape({
                                                                                                                                      appearance : new SFNode(
                                                                                                                                        new Appearance({
                                                                                                                                          material : new SFNode(
                                                                                                                                            new Material({
                                                                                                                                              diffuseColor : new SFColor([1,1,1])}))})),
                                                                                                                                      geometry : new SFNode(
                                                                                                                                        new IndexedFaceSet({
                                                                                                                                          coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                                                          creaseAngle : new SFFloat(0.5),
                                                                                                                                          solid : new SFBool(false),
                                                                                                                                          color : new SFNode(
                                                                                                                                            new ColorRGBA({
                                                                                                                                              color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                                                                                                                          coord : new SFNode(
                                                                                                                                            new Coordinate({
                                                                                                                                              point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                                                                                                                    new Billboard({
                                                                                                                                      axisOfRotation : new SFVec3f([0,0,0]),
                                                                                                                                      children : new MFNode([
                                                                                                                                        new Shape({
                                                                                                                                          geometry : new SFNode(
                                                                                                                                            new Text({
                                                                                                                                              string : new MFString(["87"]),
                                                                                                                                              fontStyle : new SFNode(
                                                                                                                                                new FontStyle({
                                                                                                                                                  size : new SFFloat(0.035)}))}))})])})])}),

                                                                                                                                new Shape({
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new LineSet({
                                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                                      color : new SFNode(
                                                                                                                                        new ColorRGBA({
                                                                                                                                          color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          point : new MFVec3f([0,1.3128,0.01538,0,1.3126,-0.0154])}))}))})])})])})])})])})])})])})])})])})])})])}),

                                                                                        new HAnimJoint({
                                                                                          name : new SFString("l_sternoclavicular"),
                                                                                          DEF : new SFString("hanim_l_sternoclavicular"),
                                                                                          center : new SFVec3f([0.03847,1.2087,-0.01378]),
                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                          children : new MFNode([
                                                                                            new HAnimSegment({
                                                                                              name : new SFString("l_clavicle"),
                                                                                              DEF : new SFString("hanim_l_clavicle"),
                                                                                              children : new MFNode([
                                                                                                new HAnimSite({
                                                                                                  name : new SFString("l_clavicale"),
                                                                                                  DEF : new SFString("hanim_l_clavicale_pt"),
                                                                                                  translation : new SFVec3f([0.03,1.2,0.04]),
                                                                                                  children : new MFNode([
                                                                                                    new TouchSensor({
                                                                                                      description : new SFString("HAnimSite l_clavicale hanim_l_clavicale_pt")}),

                                                                                                    new Shape({
                                                                                                      appearance : new SFNode(
                                                                                                        new Appearance({
                                                                                                          material : new SFNode(
                                                                                                            new Material({
                                                                                                              diffuseColor : new SFColor([1,1,1])}))})),
                                                                                                      geometry : new SFNode(
                                                                                                        new IndexedFaceSet({
                                                                                                          coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                          creaseAngle : new SFFloat(0.5),
                                                                                                          solid : new SFBool(false),
                                                                                                          color : new SFNode(
                                                                                                            new ColorRGBA({
                                                                                                              color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                                                                                          coord : new SFNode(
                                                                                                            new Coordinate({
                                                                                                              point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                                                                                    new Billboard({
                                                                                                      axisOfRotation : new SFVec3f([0,0,0]),
                                                                                                      children : new MFNode([
                                                                                                        new Shape({
                                                                                                          geometry : new SFNode(
                                                                                                            new Text({
                                                                                                              string : new MFString(["l_clavicale"]),
                                                                                                              fontStyle : new SFNode(
                                                                                                                new FontStyle({
                                                                                                                  size : new SFFloat(0.035)}))}))})])})])}),

                                                                                                new Shape({
                                                                                                  geometry : new SFNode(
                                                                                                    new LineSet({
                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                      color : new SFNode(
                                                                                                        new ColorRGBA({
                                                                                                          color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                                                                      coord : new SFNode(
                                                                                                        new Coordinate({
                                                                                                          point : new MFVec3f([0.03847,1.2087,-0.01378,0,1.22,-0.0138])}))}))})])}),

                                                                                            new HAnimJoint({
                                                                                              name : new SFString("l_acromioclavicular"),
                                                                                              DEF : new SFString("hanim_l_acromioclavicular"),
                                                                                              center : new SFVec3f([0.12294,1.191825,-0.0129]),
                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                              llimit : new MFFloat([0,0,0]),
                                                                                              children : new MFNode([
                                                                                                new HAnimSegment({
                                                                                                  name : new SFString("l_scapula"),
                                                                                                  DEF : new SFString("hanim_l_scapula"),
                                                                                                  children : new MFNode([
                                                                                                    new HAnimSite({
                                                                                                      name : new SFString("l_acromion"),
                                                                                                      DEF : new SFString("hanim_l_acromion_pt"),
                                                                                                      translation : new SFVec3f([0.15,1.222,-0.02]),
                                                                                                      children : new MFNode([
                                                                                                        new TouchSensor({
                                                                                                          description : new SFString("HAnimSite 15 hanim_l_acromion_pt")}),

                                                                                                        new Shape({
                                                                                                          appearance : new SFNode(
                                                                                                            new Appearance({
                                                                                                              material : new SFNode(
                                                                                                                new Material({
                                                                                                                  diffuseColor : new SFColor([1,1,1])}))})),
                                                                                                          geometry : new SFNode(
                                                                                                            new IndexedFaceSet({
                                                                                                              coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                              creaseAngle : new SFFloat(0.5),
                                                                                                              solid : new SFBool(false),
                                                                                                              color : new SFNode(
                                                                                                                new ColorRGBA({
                                                                                                                  color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                                                                                              coord : new SFNode(
                                                                                                                new Coordinate({
                                                                                                                  point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                                                                                        new Billboard({
                                                                                                          axisOfRotation : new SFVec3f([0,0,0]),
                                                                                                          children : new MFNode([
                                                                                                            new Shape({
                                                                                                              geometry : new SFNode(
                                                                                                                new Text({
                                                                                                                  string : new MFString(["15"]),
                                                                                                                  fontStyle : new SFNode(
                                                                                                                    new FontStyle({
                                                                                                                      size : new SFFloat(0.035)}))}))})])})])}),

                                                                                                    new HAnimSite({
                                                                                                      name : new SFString("l_axilla_proximal"),
                                                                                                      DEF : new SFString("hanim_l_axilla_proximal_pt"),
                                                                                                      translation : new SFVec3f([0.15,1.16,0.04]),
                                                                                                      children : new MFNode([
                                                                                                        new TouchSensor({
                                                                                                          description : new SFString("HAnimSite 16 hanim_l_axilla_proximal_pt")}),

                                                                                                        new Shape({
                                                                                                          appearance : new SFNode(
                                                                                                            new Appearance({
                                                                                                              material : new SFNode(
                                                                                                                new Material({
                                                                                                                  diffuseColor : new SFColor([1,1,1])}))})),
                                                                                                          geometry : new SFNode(
                                                                                                            new IndexedFaceSet({
                                                                                                              coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                              creaseAngle : new SFFloat(0.5),
                                                                                                              solid : new SFBool(false),
                                                                                                              color : new SFNode(
                                                                                                                new ColorRGBA({
                                                                                                                  color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                                                                                              coord : new SFNode(
                                                                                                                new Coordinate({
                                                                                                                  point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                                                                                        new Billboard({
                                                                                                          axisOfRotation : new SFVec3f([0,0,0]),
                                                                                                          children : new MFNode([
                                                                                                            new Shape({
                                                                                                              geometry : new SFNode(
                                                                                                                new Text({
                                                                                                                  string : new MFString(["16"]),
                                                                                                                  fontStyle : new SFNode(
                                                                                                                    new FontStyle({
                                                                                                                      size : new SFFloat(0.035)}))}))})])})])}),

                                                                                                    new HAnimSite({
                                                                                                      name : new SFString("l_axilla_distal"),
                                                                                                      DEF : new SFString("hanim_l_axilla_distal_pt"),
                                                                                                      translation : new SFVec3f([0.17,1.14,0]),
                                                                                                      children : new MFNode([
                                                                                                        new TouchSensor({
                                                                                                          description : new SFString("HAnimSite 17 hanim_l_axilla_distal_pt")}),

                                                                                                        new Shape({
                                                                                                          appearance : new SFNode(
                                                                                                            new Appearance({
                                                                                                              material : new SFNode(
                                                                                                                new Material({
                                                                                                                  diffuseColor : new SFColor([1,1,1])}))})),
                                                                                                          geometry : new SFNode(
                                                                                                            new IndexedFaceSet({
                                                                                                              coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                              creaseAngle : new SFFloat(0.5),
                                                                                                              solid : new SFBool(false),
                                                                                                              color : new SFNode(
                                                                                                                new ColorRGBA({
                                                                                                                  color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                                                                                              coord : new SFNode(
                                                                                                                new Coordinate({
                                                                                                                  point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                                                                                        new Billboard({
                                                                                                          axisOfRotation : new SFVec3f([0,0,0]),
                                                                                                          children : new MFNode([
                                                                                                            new Shape({
                                                                                                              geometry : new SFNode(
                                                                                                                new Text({
                                                                                                                  string : new MFString(["17"]),
                                                                                                                  fontStyle : new SFNode(
                                                                                                                    new FontStyle({
                                                                                                                      size : new SFFloat(0.035)}))}))})])})])}),

                                                                                                    new HAnimSite({
                                                                                                      name : new SFString("l_axilla_posterior_folds"),
                                                                                                      DEF : new SFString("hanim_l_axilla_posterior_folds_pt"),
                                                                                                      translation : new SFVec3f([0.15,1.145,-0.04]),
                                                                                                      children : new MFNode([
                                                                                                        new TouchSensor({
                                                                                                          description : new SFString("HAnimSite 18 hanim_l_axilla_posterior_folds_pt")}),

                                                                                                        new Shape({
                                                                                                          appearance : new SFNode(
                                                                                                            new Appearance({
                                                                                                              material : new SFNode(
                                                                                                                new Material({
                                                                                                                  diffuseColor : new SFColor([1,1,1])}))})),
                                                                                                          geometry : new SFNode(
                                                                                                            new IndexedFaceSet({
                                                                                                              coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                              creaseAngle : new SFFloat(0.5),
                                                                                                              solid : new SFBool(false),
                                                                                                              color : new SFNode(
                                                                                                                new ColorRGBA({
                                                                                                                  color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                                                                                              coord : new SFNode(
                                                                                                                new Coordinate({
                                                                                                                  point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                                                                                        new Billboard({
                                                                                                          axisOfRotation : new SFVec3f([0,0,0]),
                                                                                                          children : new MFNode([
                                                                                                            new Shape({
                                                                                                              geometry : new SFNode(
                                                                                                                new Text({
                                                                                                                  string : new MFString(["18"]),
                                                                                                                  fontStyle : new SFNode(
                                                                                                                    new FontStyle({
                                                                                                                      size : new SFFloat(0.035)}))}))})])})])}),

                                                                                                    new Shape({
                                                                                                      geometry : new SFNode(
                                                                                                        new LineSet({
                                                                                                          vertexCount : new MFInt32([2]),
                                                                                                          color : new SFNode(
                                                                                                            new ColorRGBA({
                                                                                                              color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                                                                          coord : new SFNode(
                                                                                                            new Coordinate({
                                                                                                              point : new MFVec3f([0.12294,1.191825,-0.0129,0.03847,1.2087,-0.01378])}))}))})])}),

                                                                                                new HAnimJoint({
                                                                                                  name : new SFString("l_shoulder"),
                                                                                                  DEF : new SFString("hanim_l_shoulder"),
                                                                                                  center : new SFVec3f([0.16506,1.17855,-0.00327]),
                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                                  children : new MFNode([
                                                                                                    new HAnimSegment({
                                                                                                      name : new SFString("l_upperarm"),
                                                                                                      DEF : new SFString("hanim_l_upperarm"),
                                                                                                      children : new MFNode([
                                                                                                        new HAnimSite({
                                                                                                          name : new SFString("l_humeral_lateral_epicondyle"),
                                                                                                          DEF : new SFString("hanim_l_humeral_lateral_epicondyle_pt"),
                                                                                                          translation : new SFVec3f([0.2,0.95,-0.03]),
                                                                                                          children : new MFNode([
                                                                                                            new TouchSensor({
                                                                                                              description : new SFString("HAnimSite 63 hanim_l_humeral_lateral_epicondyle_pt")}),

                                                                                                            new Shape({
                                                                                                              appearance : new SFNode(
                                                                                                                new Appearance({
                                                                                                                  material : new SFNode(
                                                                                                                    new Material({
                                                                                                                      diffuseColor : new SFColor([1,1,1])}))})),
                                                                                                              geometry : new SFNode(
                                                                                                                new IndexedFaceSet({
                                                                                                                  coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                                  creaseAngle : new SFFloat(0.5),
                                                                                                                  solid : new SFBool(false),
                                                                                                                  color : new SFNode(
                                                                                                                    new ColorRGBA({
                                                                                                                      color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                                                                                                  coord : new SFNode(
                                                                                                                    new Coordinate({
                                                                                                                      point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                                                                                            new Billboard({
                                                                                                              axisOfRotation : new SFVec3f([0,0,0]),
                                                                                                              children : new MFNode([
                                                                                                                new Shape({
                                                                                                                  geometry : new SFNode(
                                                                                                                    new Text({
                                                                                                                      string : new MFString(["63"]),
                                                                                                                      fontStyle : new SFNode(
                                                                                                                        new FontStyle({
                                                                                                                          size : new SFFloat(0.035)}))}))})])})])}),

                                                                                                        new HAnimSite({
                                                                                                          name : new SFString("l_humeral_medial_epicondyle"),
                                                                                                          DEF : new SFString("hanim_l_humeral_medial_epicondyle_pt"),
                                                                                                          translation : new SFVec3f([0.18,0.93,-0.03]),
                                                                                                          children : new MFNode([
                                                                                                            new TouchSensor({
                                                                                                              description : new SFString("HAnimSite 64 hanim_l_humeral_medial_epicondyle_pt")}),

                                                                                                            new Shape({
                                                                                                              appearance : new SFNode(
                                                                                                                new Appearance({
                                                                                                                  material : new SFNode(
                                                                                                                    new Material({
                                                                                                                      diffuseColor : new SFColor([1,1,1])}))})),
                                                                                                              geometry : new SFNode(
                                                                                                                new IndexedFaceSet({
                                                                                                                  coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                                  creaseAngle : new SFFloat(0.5),
                                                                                                                  solid : new SFBool(false),
                                                                                                                  color : new SFNode(
                                                                                                                    new ColorRGBA({
                                                                                                                      color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                                                                                                  coord : new SFNode(
                                                                                                                    new Coordinate({
                                                                                                                      point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                                                                                            new Billboard({
                                                                                                              axisOfRotation : new SFVec3f([0,0,0]),
                                                                                                              children : new MFNode([
                                                                                                                new Shape({
                                                                                                                  geometry : new SFNode(
                                                                                                                    new Text({
                                                                                                                      string : new MFString(["64"]),
                                                                                                                      fontStyle : new SFNode(
                                                                                                                        new FontStyle({
                                                                                                                          size : new SFFloat(0.035)}))}))})])})])}),

                                                                                                        new HAnimSite({
                                                                                                          name : new SFString("l_radiale"),
                                                                                                          DEF : new SFString("hanim_l_radiale_pt"),
                                                                                                          translation : new SFVec3f([0.2,0.91,-0.03]),
                                                                                                          children : new MFNode([
                                                                                                            new TouchSensor({
                                                                                                              description : new SFString("HAnimSite 69 hanim_l_radiale_pt")}),

                                                                                                            new Shape({
                                                                                                              appearance : new SFNode(
                                                                                                                new Appearance({
                                                                                                                  material : new SFNode(
                                                                                                                    new Material({
                                                                                                                      diffuseColor : new SFColor([1,1,1])}))})),
                                                                                                              geometry : new SFNode(
                                                                                                                new IndexedFaceSet({
                                                                                                                  coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                                  creaseAngle : new SFFloat(0.5),
                                                                                                                  solid : new SFBool(false),
                                                                                                                  color : new SFNode(
                                                                                                                    new ColorRGBA({
                                                                                                                      color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                                                                                                  coord : new SFNode(
                                                                                                                    new Coordinate({
                                                                                                                      point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                                                                                            new Billboard({
                                                                                                              axisOfRotation : new SFVec3f([0,0,0]),
                                                                                                              children : new MFNode([
                                                                                                                new Shape({
                                                                                                                  geometry : new SFNode(
                                                                                                                    new Text({
                                                                                                                      string : new MFString(["69"]),
                                                                                                                      fontStyle : new SFNode(
                                                                                                                        new FontStyle({
                                                                                                                          size : new SFFloat(0.035)}))}))})])})])}),

                                                                                                        new HAnimSite({
                                                                                                          name : new SFString("l_bideltoid"),
                                                                                                          DEF : new SFString("hanim_l_bideltoid_pt"),
                                                                                                          translation : new SFVec3f([0.225,1.185,0]),
                                                                                                          children : new MFNode([
                                                                                                            new TouchSensor({
                                                                                                              description : new SFString("HAnimSite 96 hanim_l_bideltoid_pt")}),

                                                                                                            new Shape({
                                                                                                              appearance : new SFNode(
                                                                                                                new Appearance({
                                                                                                                  material : new SFNode(
                                                                                                                    new Material({
                                                                                                                      diffuseColor : new SFColor([1,1,1])}))})),
                                                                                                              geometry : new SFNode(
                                                                                                                new IndexedFaceSet({
                                                                                                                  coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                                  creaseAngle : new SFFloat(0.5),
                                                                                                                  solid : new SFBool(false),
                                                                                                                  color : new SFNode(
                                                                                                                    new ColorRGBA({
                                                                                                                      color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                                                                                                  coord : new SFNode(
                                                                                                                    new Coordinate({
                                                                                                                      point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                                                                                            new Billboard({
                                                                                                              axisOfRotation : new SFVec3f([0,0,0]),
                                                                                                              children : new MFNode([
                                                                                                                new Shape({
                                                                                                                  geometry : new SFNode(
                                                                                                                    new Text({
                                                                                                                      string : new MFString(["96"]),
                                                                                                                      fontStyle : new SFNode(
                                                                                                                        new FontStyle({
                                                                                                                          size : new SFFloat(0.035)}))}))})])})])}),

                                                                                                        new Shape({
                                                                                                          geometry : new SFNode(
                                                                                                            new LineSet({
                                                                                                              vertexCount : new MFInt32([2]),
                                                                                                              color : new SFNode(
                                                                                                                new ColorRGBA({
                                                                                                                  color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                                                                              coord : new SFNode(
                                                                                                                new Coordinate({
                                                                                                                  point : new MFVec3f([0.16506,1.17855,-0.00327,0.12294,1.191825,-0.0129])}))}))})])}),

                                                                                                    new HAnimJoint({
                                                                                                      name : new SFString("l_elbow"),
                                                                                                      DEF : new SFString("hanim_l_elbow"),
                                                                                                      center : new SFVec3f([0.18209,0.9288,-0.00563]),
                                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                                      children : new MFNode([
                                                                                                        new HAnimSegment({
                                                                                                          name : new SFString("l_forearm"),
                                                                                                          DEF : new SFString("hanim_l_forearm"),
                                                                                                          children : new MFNode([
                                                                                                            new HAnimSite({
                                                                                                              name : new SFString("l_radial_styloid"),
                                                                                                              DEF : new SFString("hanim_l_radial_styloid_pt"),
                                                                                                              translation : new SFVec3f([0.18,0.725,0.025]),
                                                                                                              children : new MFNode([
                                                                                                                new TouchSensor({
                                                                                                                  description : new SFString("HAnimSite 71 hanim_l_radial_styloid_pt")}),

                                                                                                                new Shape({
                                                                                                                  appearance : new SFNode(
                                                                                                                    new Appearance({
                                                                                                                      material : new SFNode(
                                                                                                                        new Material({
                                                                                                                          diffuseColor : new SFColor([1,1,1])}))})),
                                                                                                                  geometry : new SFNode(
                                                                                                                    new IndexedFaceSet({
                                                                                                                      coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                                      creaseAngle : new SFFloat(0.5),
                                                                                                                      solid : new SFBool(false),
                                                                                                                      color : new SFNode(
                                                                                                                        new ColorRGBA({
                                                                                                                          color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                                                                                                      coord : new SFNode(
                                                                                                                        new Coordinate({
                                                                                                                          point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                                                                                                new Billboard({
                                                                                                                  axisOfRotation : new SFVec3f([0,0,0]),
                                                                                                                  children : new MFNode([
                                                                                                                    new Shape({
                                                                                                                      geometry : new SFNode(
                                                                                                                        new Text({
                                                                                                                          string : new MFString(["71"]),
                                                                                                                          fontStyle : new SFNode(
                                                                                                                            new FontStyle({
                                                                                                                              size : new SFFloat(0.035)}))}))})])})])}),

                                                                                                            new HAnimSite({
                                                                                                              name : new SFString("l_olecranon"),
                                                                                                              DEF : new SFString("hanim_l_olecranon_pt"),
                                                                                                              translation : new SFVec3f([0.2,0.92,-0.03]),
                                                                                                              children : new MFNode([
                                                                                                                new TouchSensor({
                                                                                                                  description : new SFString("HAnimSite 65 hanim_l_olecranon_pt")}),

                                                                                                                new Shape({
                                                                                                                  appearance : new SFNode(
                                                                                                                    new Appearance({
                                                                                                                      material : new SFNode(
                                                                                                                        new Material({
                                                                                                                          diffuseColor : new SFColor([1,1,1])}))})),
                                                                                                                  geometry : new SFNode(
                                                                                                                    new IndexedFaceSet({
                                                                                                                      coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                                      creaseAngle : new SFFloat(0.5),
                                                                                                                      solid : new SFBool(false),
                                                                                                                      color : new SFNode(
                                                                                                                        new ColorRGBA({
                                                                                                                          color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                                                                                                      coord : new SFNode(
                                                                                                                        new Coordinate({
                                                                                                                          point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                                                                                                new Billboard({
                                                                                                                  axisOfRotation : new SFVec3f([0,0,0]),
                                                                                                                  children : new MFNode([
                                                                                                                    new Shape({
                                                                                                                      geometry : new SFNode(
                                                                                                                        new Text({
                                                                                                                          string : new MFString(["65"]),
                                                                                                                          fontStyle : new SFNode(
                                                                                                                            new FontStyle({
                                                                                                                              size : new SFFloat(0.035)}))}))})])})])}),

                                                                                                            new Shape({
                                                                                                              geometry : new SFNode(
                                                                                                                new LineSet({
                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                  color : new SFNode(
                                                                                                                    new ColorRGBA({
                                                                                                                      color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                                                                                  coord : new SFNode(
                                                                                                                    new Coordinate({
                                                                                                                      point : new MFVec3f([0.18209,0.9288,-0.00563,0.16506,1.17855,-0.00327])}))}))})])}),

                                                                                                        new HAnimJoint({
                                                                                                          name : new SFString("l_radiocarpal"),
                                                                                                          DEF : new SFString("hanim_l_radiocarpal"),
                                                                                                          center : new SFVec3f([0.1819,0.72427,-0.005]),
                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                                          children : new MFNode([
                                                                                                            new HAnimSegment({
                                                                                                              name : new SFString("l_carpal"),
                                                                                                              DEF : new SFString("hanim_l_carpal"),
                                                                                                              children : new MFNode([
                                                                                                                new HAnimSite({
                                                                                                                  name : new SFString("l_ulnar_styloid"),
                                                                                                                  DEF : new SFString("hanim_l_ulnar_styloid_pt"),
                                                                                                                  translation : new SFVec3f([0.2,0.725,0]),
                                                                                                                  children : new MFNode([
                                                                                                                    new TouchSensor({
                                                                                                                      description : new SFString("HAnimSite 70 hanim_l_ulnar_styloid_pt")}),

                                                                                                                    new Shape({
                                                                                                                      appearance : new SFNode(
                                                                                                                        new Appearance({
                                                                                                                          material : new SFNode(
                                                                                                                            new Material({
                                                                                                                              diffuseColor : new SFColor([1,1,1])}))})),
                                                                                                                      geometry : new SFNode(
                                                                                                                        new IndexedFaceSet({
                                                                                                                          coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                                          creaseAngle : new SFFloat(0.5),
                                                                                                                          solid : new SFBool(false),
                                                                                                                          color : new SFNode(
                                                                                                                            new ColorRGBA({
                                                                                                                              color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                                                                                                          coord : new SFNode(
                                                                                                                            new Coordinate({
                                                                                                                              point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                                                                                                    new Billboard({
                                                                                                                      axisOfRotation : new SFVec3f([0,0,0]),
                                                                                                                      children : new MFNode([
                                                                                                                        new Shape({
                                                                                                                          geometry : new SFNode(
                                                                                                                            new Text({
                                                                                                                              string : new MFString(["70"]),
                                                                                                                              fontStyle : new SFNode(
                                                                                                                                new FontStyle({
                                                                                                                                  size : new SFFloat(0.035)}))}))})])})])}),

                                                                                                                new Shape({
                                                                                                                  geometry : new SFNode(
                                                                                                                    new LineSet({
                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                      color : new SFNode(
                                                                                                                        new ColorRGBA({
                                                                                                                          color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                                                                                      coord : new SFNode(
                                                                                                                        new Coordinate({
                                                                                                                          point : new MFVec3f([0.1819,0.72427,-0.005,0.18209,0.9288,-0.00563])}))}))})])}),

                                                                                                            new HAnimJoint({
                                                                                                              name : new SFString("l_midcarpal_1"),
                                                                                                              DEF : new SFString("hanim_l_midcarpal_1"),
                                                                                                              center : new SFVec3f([0.1813,0.706,0.0193]),
                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                              llimit : new MFFloat([0,0,0]),
                                                                                                              children : new MFNode([
                                                                                                                new HAnimSegment({
                                                                                                                  name : new SFString("l_trapezium"),
                                                                                                                  DEF : new SFString("hanim_l_trapezium"),
                                                                                                                  children : new MFNode([
                                                                                                                    new Shape({
                                                                                                                      geometry : new SFNode(
                                                                                                                        new LineSet({
                                                                                                                          vertexCount : new MFInt32([2]),
                                                                                                                          color : new SFNode(
                                                                                                                            new ColorRGBA({
                                                                                                                              color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                                                                                          coord : new SFNode(
                                                                                                                            new Coordinate({
                                                                                                                              point : new MFVec3f([0.1813,0.706,0.0193,0.1819,0.72427,-0.005])}))}))})])}),

                                                                                                                new HAnimJoint({
                                                                                                                  name : new SFString("l_carpometacarpal_1"),
                                                                                                                  DEF : new SFString("hanim_l_carpometacarpal_1"),
                                                                                                                  center : new SFVec3f([0.1805,0.69255,0.026]),
                                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimSegment({
                                                                                                                      name : new SFString("l_metacarpal_1"),
                                                                                                                      DEF : new SFString("hanim_l_metacarpal_1"),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimSite({
                                                                                                                          name : new SFString("l_metacarpal_phalanx_2"),
                                                                                                                          DEF : new SFString("hanim_l_metacarpal_phalanx_2_pt"),
                                                                                                                          translation : new SFVec3f([0.2,0.665,0.012]),
                                                                                                                          children : new MFNode([
                                                                                                                            new TouchSensor({
                                                                                                                              description : new SFString("HAnimSite 75 hanim_l_metacarpal_phalanx_2_pt")}),

                                                                                                                            new Shape({
                                                                                                                              appearance : new SFNode(
                                                                                                                                new Appearance({
                                                                                                                                  material : new SFNode(
                                                                                                                                    new Material({
                                                                                                                                      diffuseColor : new SFColor([1,1,1])}))})),
                                                                                                                              geometry : new SFNode(
                                                                                                                                new IndexedFaceSet({
                                                                                                                                  coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                                                  creaseAngle : new SFFloat(0.5),
                                                                                                                                  solid : new SFBool(false),
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                                                                                                            new Billboard({
                                                                                                                              axisOfRotation : new SFVec3f([0,0,0]),
                                                                                                                              children : new MFNode([
                                                                                                                                new Shape({
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new Text({
                                                                                                                                      string : new MFString(["75"]),
                                                                                                                                      fontStyle : new SFNode(
                                                                                                                                        new FontStyle({
                                                                                                                                          size : new SFFloat(0.035)}))}))})])})])}),

                                                                                                                        new Shape({
                                                                                                                          geometry : new SFNode(
                                                                                                                            new LineSet({
                                                                                                                              vertexCount : new MFInt32([2]),
                                                                                                                              color : new SFNode(
                                                                                                                                new ColorRGBA({
                                                                                                                                  color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                                                                                              coord : new SFNode(
                                                                                                                                new Coordinate({
                                                                                                                                  point : new MFVec3f([0.1805,0.69255,0.026,0.1813,0.706,0.0193])}))}))})])}),

                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("l_metacarpophalangeal_1"),
                                                                                                                      DEF : new SFString("hanim_l_metacarpophalangeal_1"),
                                                                                                                      center : new SFVec3f([0.181,0.6727,0.03577]),
                                                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimSegment({
                                                                                                                          name : new SFString("l_carpal_proximal_phalanx_1"),
                                                                                                                          DEF : new SFString("hanim_l_carpal_proximal_phalanx_1"),
                                                                                                                          children : new MFNode([
                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([0.181,0.6727,0.03577,0.1805,0.69255,0.026])}))}))})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("l_carpal_interphalangeal_1"),
                                                                                                                          DEF : new SFString("hanim_l_carpal_interphalangeal_1"),
                                                                                                                          center : new SFVec3f([0.1826,0.654,0.04966]),
                                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              name : new SFString("l_carpal_distal_phalanx_1"),
                                                                                                                              DEF : new SFString("hanim_l_carpal_distal_phalanx_1"),
                                                                                                                              children : new MFNode([
                                                                                                                                new HAnimSite({
                                                                                                                                  name : new SFString("l_carpal_distal_phalanx_1"),
                                                                                                                                  DEF : new SFString("hanim_l_carpal_distal_phalanx_1_tip"),
                                                                                                                                  translation : new SFVec3f([0.18,0.64,0.06]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new TouchSensor({
                                                                                                                                      description : new SFString("HAnimSite 101 hanim_l_carpal_distal_phalanx_1_tip")}),

                                                                                                                                    new Shape({
                                                                                                                                      appearance : new SFNode(
                                                                                                                                        new Appearance({
                                                                                                                                          material : new SFNode(
                                                                                                                                            new Material({
                                                                                                                                              diffuseColor : new SFColor([1,1,1])}))})),
                                                                                                                                      geometry : new SFNode(
                                                                                                                                        new IndexedFaceSet({
                                                                                                                                          coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                                                          creaseAngle : new SFFloat(0.5),
                                                                                                                                          solid : new SFBool(false),
                                                                                                                                          color : new SFNode(
                                                                                                                                            new ColorRGBA({
                                                                                                                                              color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                                                                                                                          coord : new SFNode(
                                                                                                                                            new Coordinate({
                                                                                                                                              point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                                                                                                                    new Billboard({
                                                                                                                                      axisOfRotation : new SFVec3f([0,0,0]),
                                                                                                                                      children : new MFNode([
                                                                                                                                        new Shape({
                                                                                                                                          geometry : new SFNode(
                                                                                                                                            new Text({
                                                                                                                                              string : new MFString(["101"]),
                                                                                                                                              fontStyle : new SFNode(
                                                                                                                                                new FontStyle({
                                                                                                                                                  size : new SFFloat(0.035)}))}))})])})])}),

                                                                                                                                new Shape({
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new LineSet({
                                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                                      color : new SFNode(
                                                                                                                                        new ColorRGBA({
                                                                                                                                          color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          point : new MFVec3f([0.1826,0.654,0.04966,0.181,0.6727,0.03577])}))}))})])})])})])})])})])}),

                                                                                                            new HAnimJoint({
                                                                                                              name : new SFString("l_midcarpal_2"),
                                                                                                              DEF : new SFString("hanim_l_midcarpal_2"),
                                                                                                              center : new SFVec3f([0.18128,0.70695,0.00842]),
                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                              llimit : new MFFloat([0,0,0]),
                                                                                                              children : new MFNode([
                                                                                                                new HAnimSegment({
                                                                                                                  name : new SFString("l_trapezoid"),
                                                                                                                  DEF : new SFString("hanim_l_trapezoid"),
                                                                                                                  children : new MFNode([
                                                                                                                    new Shape({
                                                                                                                      geometry : new SFNode(
                                                                                                                        new LineSet({
                                                                                                                          vertexCount : new MFInt32([2]),
                                                                                                                          color : new SFNode(
                                                                                                                            new ColorRGBA({
                                                                                                                              color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                                                                                          coord : new SFNode(
                                                                                                                            new Coordinate({
                                                                                                                              point : new MFVec3f([0.18128,0.70695,0.00842,0.1819,0.72427,-0.005])}))}))})])}),

                                                                                                                new HAnimJoint({
                                                                                                                  name : new SFString("l_carpometacarpal_2"),
                                                                                                                  DEF : new SFString("hanim_l_carpometacarpal_2"),
                                                                                                                  center : new SFVec3f([0.18128,0.6876,0.0098]),
                                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimSegment({
                                                                                                                      name : new SFString("l_metacarpal_2"),
                                                                                                                      DEF : new SFString("hanim_l_metacarpal_2"),
                                                                                                                      children : new MFNode([
                                                                                                                        new Shape({
                                                                                                                          geometry : new SFNode(
                                                                                                                            new LineSet({
                                                                                                                              vertexCount : new MFInt32([2]),
                                                                                                                              color : new SFNode(
                                                                                                                                new ColorRGBA({
                                                                                                                                  color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                                                                                              coord : new SFNode(
                                                                                                                                new Coordinate({
                                                                                                                                  point : new MFVec3f([0.18128,0.6876,0.0098,0.18128,0.70695,0.00842])}))}))})])}),

                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("l_metacarpophalangeal_2"),
                                                                                                                      DEF : new SFString("hanim_l_metacarpophalangeal_2"),
                                                                                                                      center : new SFVec3f([0.1837,0.6372,0.01507]),
                                                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimSegment({
                                                                                                                          name : new SFString("l_carpal_proximal_phalanx_2"),
                                                                                                                          DEF : new SFString("hanim_l_carpal_proximal_phalanx_2"),
                                                                                                                          children : new MFNode([
                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([0.1837,0.6372,0.01507,0.18128,0.6876,0.0098])}))}))})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("l_carpal_proximal_interphalangeal_2"),
                                                                                                                          DEF : new SFString("hanim_l_carpal_proximal_interphalangeal_2"),
                                                                                                                          center : new SFVec3f([0.18171,0.6068,0.01418]),
                                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              name : new SFString("l_carpal_middle_phalanx_2"),
                                                                                                                              DEF : new SFString("hanim_l_carpal_middle_phalanx_2"),
                                                                                                                              children : new MFNode([
                                                                                                                                new Shape({
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new LineSet({
                                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                                      color : new SFNode(
                                                                                                                                        new ColorRGBA({
                                                                                                                                          color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          point : new MFVec3f([0.18171,0.6068,0.01418,0.1837,0.6372,0.01507])}))}))})])}),

                                                                                                                            new HAnimJoint({
                                                                                                                              name : new SFString("l_carpal_distal_interphalangeal_2"),
                                                                                                                              DEF : new SFString("hanim_l_carpal_distal_interphalangeal_2"),
                                                                                                                              center : new SFVec3f([0.18067,0.5816,0.01338]),
                                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                                              llimit : new MFFloat([0,0,0]),
                                                                                                                              children : new MFNode([
                                                                                                                                new HAnimSegment({
                                                                                                                                  name : new SFString("l_carpal_distal_phalanx_2"),
                                                                                                                                  DEF : new SFString("hanim_l_carpal_distal_phalanx_2"),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new HAnimSite({
                                                                                                                                      name : new SFString("l_dactylion"),
                                                                                                                                      DEF : new SFString("hanim_l_dactylion_pt"),
                                                                                                                                      translation : new SFVec3f([0.17,0.558,0.017]),
                                                                                                                                      children : new MFNode([
                                                                                                                                        new TouchSensor({
                                                                                                                                          description : new SFString("HAnimSite 57 hanim_l_dactylion_pt")}),

                                                                                                                                        new Shape({
                                                                                                                                          appearance : new SFNode(
                                                                                                                                            new Appearance({
                                                                                                                                              material : new SFNode(
                                                                                                                                                new Material({
                                                                                                                                                  diffuseColor : new SFColor([1,1,1])}))})),
                                                                                                                                          geometry : new SFNode(
                                                                                                                                            new IndexedFaceSet({
                                                                                                                                              coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                                                              creaseAngle : new SFFloat(0.5),
                                                                                                                                              solid : new SFBool(false),
                                                                                                                                              color : new SFNode(
                                                                                                                                                new ColorRGBA({
                                                                                                                                                  color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                                                                                                                              coord : new SFNode(
                                                                                                                                                new Coordinate({
                                                                                                                                                  point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                                                                                                                        new Billboard({
                                                                                                                                          axisOfRotation : new SFVec3f([0,0,0]),
                                                                                                                                          children : new MFNode([
                                                                                                                                            new Shape({
                                                                                                                                              geometry : new SFNode(
                                                                                                                                                new Text({
                                                                                                                                                  string : new MFString(["57"]),
                                                                                                                                                  fontStyle : new SFNode(
                                                                                                                                                    new FontStyle({
                                                                                                                                                      size : new SFFloat(0.035)}))}))})])})])}),

                                                                                                                                    new HAnimSite({
                                                                                                                                      name : new SFString("l_carpal_distal_phalanx_2"),
                                                                                                                                      DEF : new SFString("hanim_l_carpal_distal_phalanx_2_tip"),
                                                                                                                                      translation : new SFVec3f([0.172,0.558,0.017]),
                                                                                                                                      children : new MFNode([
                                                                                                                                        new TouchSensor({
                                                                                                                                          description : new SFString("HAnimSite 102 hanim_l_carpal_distal_phalanx_2_tip")}),

                                                                                                                                        new Shape({
                                                                                                                                          appearance : new SFNode(
                                                                                                                                            new Appearance({
                                                                                                                                              material : new SFNode(
                                                                                                                                                new Material({
                                                                                                                                                  diffuseColor : new SFColor([1,1,1])}))})),
                                                                                                                                          geometry : new SFNode(
                                                                                                                                            new IndexedFaceSet({
                                                                                                                                              coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                                                              creaseAngle : new SFFloat(0.5),
                                                                                                                                              solid : new SFBool(false),
                                                                                                                                              color : new SFNode(
                                                                                                                                                new ColorRGBA({
                                                                                                                                                  color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                                                                                                                              coord : new SFNode(
                                                                                                                                                new Coordinate({
                                                                                                                                                  point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                                                                                                                        new Billboard({
                                                                                                                                          axisOfRotation : new SFVec3f([0,0,0]),
                                                                                                                                          children : new MFNode([
                                                                                                                                            new Shape({
                                                                                                                                              geometry : new SFNode(
                                                                                                                                                new Text({
                                                                                                                                                  string : new MFString(["102"]),
                                                                                                                                                  fontStyle : new SFNode(
                                                                                                                                                    new FontStyle({
                                                                                                                                                      size : new SFFloat(0.035)}))}))})])})])}),

                                                                                                                                    new Shape({
                                                                                                                                      geometry : new SFNode(
                                                                                                                                        new LineSet({
                                                                                                                                          vertexCount : new MFInt32([2]),
                                                                                                                                          color : new SFNode(
                                                                                                                                            new ColorRGBA({
                                                                                                                                              color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                                                                                                          coord : new SFNode(
                                                                                                                                            new Coordinate({
                                                                                                                                              point : new MFVec3f([0.18067,0.5816,0.01338,0.18171,0.6068,0.01418])}))}))})])})])})])})])})])})])}),

                                                                                                            new HAnimJoint({
                                                                                                              name : new SFString("l_midcarpal_3"),
                                                                                                              DEF : new SFString("hanim_l_midcarpal_3"),
                                                                                                              center : new SFVec3f([0.18108,0.708525,-0.0048]),
                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                              llimit : new MFFloat([0,0,0]),
                                                                                                              children : new MFNode([
                                                                                                                new HAnimSegment({
                                                                                                                  name : new SFString("l_capitate"),
                                                                                                                  DEF : new SFString("hanim_l_capitate"),
                                                                                                                  children : new MFNode([
                                                                                                                    new Shape({
                                                                                                                      geometry : new SFNode(
                                                                                                                        new LineSet({
                                                                                                                          vertexCount : new MFInt32([2]),
                                                                                                                          color : new SFNode(
                                                                                                                            new ColorRGBA({
                                                                                                                              color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                                                                                          coord : new SFNode(
                                                                                                                            new Coordinate({
                                                                                                                              point : new MFVec3f([0.18108,0.708525,-0.0048,0.1819,0.72427,-0.005])}))}))})])}),

                                                                                                                new HAnimJoint({
                                                                                                                  name : new SFString("l_carpometacarpal_3"),
                                                                                                                  DEF : new SFString("hanim_l_carpometacarpal_3"),
                                                                                                                  center : new SFVec3f([0.18108,0.6858,-0.00625]),
                                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimSegment({
                                                                                                                      name : new SFString("l_metacarpal_3"),
                                                                                                                      DEF : new SFString("hanim_l_metacarpal_3"),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimSite({
                                                                                                                          name : new SFString("l_metacarpal_phalanx_3"),
                                                                                                                          DEF : new SFString("hanim_l_metacarpal_phalanx_3_pt"),
                                                                                                                          translation : new SFVec3f([0.2,0.665,-0.039]),
                                                                                                                          children : new MFNode([
                                                                                                                            new TouchSensor({
                                                                                                                              description : new SFString("HAnimSite 76 hanim_l_metacarpal_phalanx_3_pt")}),

                                                                                                                            new Shape({
                                                                                                                              appearance : new SFNode(
                                                                                                                                new Appearance({
                                                                                                                                  material : new SFNode(
                                                                                                                                    new Material({
                                                                                                                                      diffuseColor : new SFColor([1,1,1])}))})),
                                                                                                                              geometry : new SFNode(
                                                                                                                                new IndexedFaceSet({
                                                                                                                                  coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                                                  creaseAngle : new SFFloat(0.5),
                                                                                                                                  solid : new SFBool(false),
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                                                                                                            new Billboard({
                                                                                                                              axisOfRotation : new SFVec3f([0,0,0]),
                                                                                                                              children : new MFNode([
                                                                                                                                new Shape({
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new Text({
                                                                                                                                      string : new MFString(["76"]),
                                                                                                                                      fontStyle : new SFNode(
                                                                                                                                        new FontStyle({
                                                                                                                                          size : new SFFloat(0.035)}))}))})])})])}),

                                                                                                                        new Shape({
                                                                                                                          geometry : new SFNode(
                                                                                                                            new LineSet({
                                                                                                                              vertexCount : new MFInt32([2]),
                                                                                                                              color : new SFNode(
                                                                                                                                new ColorRGBA({
                                                                                                                                  color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                                                                                              coord : new SFNode(
                                                                                                                                new Coordinate({
                                                                                                                                  point : new MFVec3f([0.18108,0.6858,-0.00625,0.18108,0.708525,-0.0048])}))}))})])}),

                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("l_metacarpophalangeal_3"),
                                                                                                                      DEF : new SFString("hanim_l_metacarpophalangeal_3"),
                                                                                                                      center : new SFVec3f([0.18369,0.6349,-0.0039]),
                                                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimSegment({
                                                                                                                          name : new SFString("l_carpal_proximal_phalanx_3"),
                                                                                                                          DEF : new SFString("hanim_l_carpal_proximal_phalanx_3"),
                                                                                                                          children : new MFNode([
                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([0.18369,0.6349,-0.0039,0.18108,0.6858,-0.00625])}))}))})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("l_carpal_proximal_interphalangeal_3"),
                                                                                                                          DEF : new SFString("hanim_l_carpal_proximal_interphalangeal_3"),
                                                                                                                          center : new SFVec3f([0.18171,0.6032,-0.0035]),
                                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              name : new SFString("l_carpal_middle_phalanx_3"),
                                                                                                                              DEF : new SFString("hanim_l_carpal_middle_phalanx_3"),
                                                                                                                              children : new MFNode([
                                                                                                                                new Shape({
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new LineSet({
                                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                                      color : new SFNode(
                                                                                                                                        new ColorRGBA({
                                                                                                                                          color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          point : new MFVec3f([0.18171,0.6032,-0.0035,0.18369,0.6349,-0.0039])}))}))})])}),

                                                                                                                            new HAnimJoint({
                                                                                                                              name : new SFString("l_carpal_distal_interphalangeal_3"),
                                                                                                                              DEF : new SFString("hanim_l_carpal_distal_interphalangeal_3"),
                                                                                                                              center : new SFVec3f([0.1807,0.5753,-0.0037]),
                                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                                              llimit : new MFFloat([0,0,0]),
                                                                                                                              children : new MFNode([
                                                                                                                                new HAnimSegment({
                                                                                                                                  name : new SFString("l_carpal_distal_phalanx_3"),
                                                                                                                                  DEF : new SFString("hanim_l_carpal_distal_phalanx_3"),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new HAnimSite({
                                                                                                                                      name : new SFString("l_carpal_distal_phalanx_3"),
                                                                                                                                      DEF : new SFString("hanim_l_carpal_distal_phalanx_3_tip"),
                                                                                                                                      translation : new SFVec3f([0.172,0.555,-0.006]),
                                                                                                                                      children : new MFNode([
                                                                                                                                        new TouchSensor({
                                                                                                                                          description : new SFString("HAnimSite 103 hanim_l_carpal_distal_phalanx_3_tip")}),

                                                                                                                                        new Shape({
                                                                                                                                          appearance : new SFNode(
                                                                                                                                            new Appearance({
                                                                                                                                              material : new SFNode(
                                                                                                                                                new Material({
                                                                                                                                                  diffuseColor : new SFColor([1,1,1])}))})),
                                                                                                                                          geometry : new SFNode(
                                                                                                                                            new IndexedFaceSet({
                                                                                                                                              coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                                                              creaseAngle : new SFFloat(0.5),
                                                                                                                                              solid : new SFBool(false),
                                                                                                                                              color : new SFNode(
                                                                                                                                                new ColorRGBA({
                                                                                                                                                  color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                                                                                                                              coord : new SFNode(
                                                                                                                                                new Coordinate({
                                                                                                                                                  point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                                                                                                                        new Billboard({
                                                                                                                                          axisOfRotation : new SFVec3f([0,0,0]),
                                                                                                                                          children : new MFNode([
                                                                                                                                            new Shape({
                                                                                                                                              geometry : new SFNode(
                                                                                                                                                new Text({
                                                                                                                                                  string : new MFString(["103"]),
                                                                                                                                                  fontStyle : new SFNode(
                                                                                                                                                    new FontStyle({
                                                                                                                                                      size : new SFFloat(0.035)}))}))})])})])}),

                                                                                                                                    new Shape({
                                                                                                                                      geometry : new SFNode(
                                                                                                                                        new LineSet({
                                                                                                                                          vertexCount : new MFInt32([2]),
                                                                                                                                          color : new SFNode(
                                                                                                                                            new ColorRGBA({
                                                                                                                                              color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                                                                                                          coord : new SFNode(
                                                                                                                                            new Coordinate({
                                                                                                                                              point : new MFVec3f([0.1807,0.5753,-0.0037,0.18171,0.6032,-0.0035])}))}))})])})])})])})])})])})])}),

                                                                                                            new HAnimJoint({
                                                                                                              name : new SFString("l_midcarpal_4_5"),
                                                                                                              DEF : new SFString("hanim_l_midcarpal_4_5"),
                                                                                                              center : new SFVec3f([0.18108,0.70582,-0.02574]),
                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                              llimit : new MFFloat([0,0,0]),
                                                                                                              children : new MFNode([
                                                                                                                new HAnimSegment({
                                                                                                                  name : new SFString("l_hamate"),
                                                                                                                  DEF : new SFString("hanim_l_hamate"),
                                                                                                                  children : new MFNode([
                                                                                                                    new Shape({
                                                                                                                      geometry : new SFNode(
                                                                                                                        new LineSet({
                                                                                                                          vertexCount : new MFInt32([2]),
                                                                                                                          color : new SFNode(
                                                                                                                            new ColorRGBA({
                                                                                                                              color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                                                                                          coord : new SFNode(
                                                                                                                            new Coordinate({
                                                                                                                              point : new MFVec3f([0.18108,0.70582,-0.02574,0.1819,0.72427,-0.005])}))}))})])}),

                                                                                                                new HAnimJoint({
                                                                                                                  name : new SFString("l_carpometacarpal_4"),
                                                                                                                  DEF : new SFString("hanim_l_carpometacarpal_4"),
                                                                                                                  center : new SFVec3f([0.1811,0.68625,-0.0199]),
                                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimSegment({
                                                                                                                      name : new SFString("l_metacarpal_4"),
                                                                                                                      DEF : new SFString("hanim_l_metacarpal_4"),
                                                                                                                      children : new MFNode([
                                                                                                                        new Shape({
                                                                                                                          geometry : new SFNode(
                                                                                                                            new LineSet({
                                                                                                                              vertexCount : new MFInt32([2]),
                                                                                                                              color : new SFNode(
                                                                                                                                new ColorRGBA({
                                                                                                                                  color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                                                                                              coord : new SFNode(
                                                                                                                                new Coordinate({
                                                                                                                                  point : new MFVec3f([0.1811,0.68625,-0.0199,0.18108,0.70582,-0.02574])}))}))})])}),

                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("l_metacarpophalangeal_4"),
                                                                                                                      DEF : new SFString("hanim_l_metacarpophalangeal_4"),
                                                                                                                      center : new SFVec3f([0.18369,0.63405,-0.02144]),
                                                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimSegment({
                                                                                                                          name : new SFString("l_carpal_proximal_phalanx_4"),
                                                                                                                          DEF : new SFString("hanim_l_carpal_proximal_phalanx_4"),
                                                                                                                          children : new MFNode([
                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([0.18369,0.63405,-0.02144,0.1811,0.68625,-0.0199])}))}))})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("l_carpal_proximal_interphalangeal_4"),
                                                                                                                          DEF : new SFString("hanim_l_carpal_proximal_interphalangeal_4"),
                                                                                                                          center : new SFVec3f([0.1817,0.6066,-0.02064]),
                                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              name : new SFString("l_carpal_middle_phalanx_4"),
                                                                                                                              DEF : new SFString("hanim_l_carpal_middle_phalanx_4"),
                                                                                                                              children : new MFNode([
                                                                                                                                new Shape({
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new LineSet({
                                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                                      color : new SFNode(
                                                                                                                                        new ColorRGBA({
                                                                                                                                          color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          point : new MFVec3f([0.1817,0.6066,-0.02064,0.18369,0.63405,-0.02144])}))}))})])}),

                                                                                                                            new HAnimJoint({
                                                                                                                              name : new SFString("l_carpal_distal_interphalangeal_4"),
                                                                                                                              DEF : new SFString("hanim_l_carpal_distal_interphalangeal_4"),
                                                                                                                              center : new SFVec3f([0.18067,0.580725,-0.01977]),
                                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                                              llimit : new MFFloat([0,0,0]),
                                                                                                                              children : new MFNode([
                                                                                                                                new HAnimSegment({
                                                                                                                                  name : new SFString("l_carpal_distal_phalanx_4"),
                                                                                                                                  DEF : new SFString("hanim_l_carpal_distal_phalanx_4"),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new HAnimSite({
                                                                                                                                      name : new SFString("l_carpal_distal_phalanx_4"),
                                                                                                                                      DEF : new SFString("hanim_l_carpal_distal_phalanx_4_tip"),
                                                                                                                                      translation : new SFVec3f([0.172,0.559,-0.024]),
                                                                                                                                      children : new MFNode([
                                                                                                                                        new TouchSensor({
                                                                                                                                          description : new SFString("HAnimSite 104 hanim_l_carpal_distal_phalanx_4_tip")}),

                                                                                                                                        new Shape({
                                                                                                                                          appearance : new SFNode(
                                                                                                                                            new Appearance({
                                                                                                                                              material : new SFNode(
                                                                                                                                                new Material({
                                                                                                                                                  diffuseColor : new SFColor([1,1,1])}))})),
                                                                                                                                          geometry : new SFNode(
                                                                                                                                            new IndexedFaceSet({
                                                                                                                                              coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                                                              creaseAngle : new SFFloat(0.5),
                                                                                                                                              solid : new SFBool(false),
                                                                                                                                              color : new SFNode(
                                                                                                                                                new ColorRGBA({
                                                                                                                                                  color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                                                                                                                              coord : new SFNode(
                                                                                                                                                new Coordinate({
                                                                                                                                                  point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                                                                                                                        new Billboard({
                                                                                                                                          axisOfRotation : new SFVec3f([0,0,0]),
                                                                                                                                          children : new MFNode([
                                                                                                                                            new Shape({
                                                                                                                                              geometry : new SFNode(
                                                                                                                                                new Text({
                                                                                                                                                  string : new MFString(["104"]),
                                                                                                                                                  fontStyle : new SFNode(
                                                                                                                                                    new FontStyle({
                                                                                                                                                      size : new SFFloat(0.035)}))}))})])})])}),

                                                                                                                                    new Shape({
                                                                                                                                      geometry : new SFNode(
                                                                                                                                        new LineSet({
                                                                                                                                          vertexCount : new MFInt32([2]),
                                                                                                                                          color : new SFNode(
                                                                                                                                            new ColorRGBA({
                                                                                                                                              color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                                                                                                          coord : new SFNode(
                                                                                                                                            new Coordinate({
                                                                                                                                              point : new MFVec3f([0.18067,0.580725,-0.01977,0.1817,0.6066,-0.02064])}))}))})])})])})])})])})])})])}),

                                                                                                            new HAnimJoint({
                                                                                                              name : new SFString("l_carpometacarpal_5"),
                                                                                                              DEF : new SFString("hanim_l_carpometacarpal_5"),
                                                                                                              center : new SFVec3f([0.18164,0.68827,-0.03278]),
                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                              llimit : new MFFloat([0,0,0]),
                                                                                                              children : new MFNode([
                                                                                                                new HAnimSegment({
                                                                                                                  name : new SFString("l_metacarpal_5"),
                                                                                                                  DEF : new SFString("hanim_l_metacarpal_5"),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimSite({
                                                                                                                      name : new SFString("l_metacarpal_phalanx_5"),
                                                                                                                      DEF : new SFString("hanim_l_metacarpal_phalanx_5_pt"),
                                                                                                                      translation : new SFVec3f([0.2,0.665,-0.036]),
                                                                                                                      children : new MFNode([
                                                                                                                        new TouchSensor({
                                                                                                                          description : new SFString("HAnimSite 77 hanim_l_metacarpal_phalanx_5_pt")}),

                                                                                                                        new Shape({
                                                                                                                          appearance : new SFNode(
                                                                                                                            new Appearance({
                                                                                                                              material : new SFNode(
                                                                                                                                new Material({
                                                                                                                                  diffuseColor : new SFColor([1,1,1])}))})),
                                                                                                                          geometry : new SFNode(
                                                                                                                            new IndexedFaceSet({
                                                                                                                              coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                                              creaseAngle : new SFFloat(0.5),
                                                                                                                              solid : new SFBool(false),
                                                                                                                              color : new SFNode(
                                                                                                                                new ColorRGBA({
                                                                                                                                  color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                                                                                                              coord : new SFNode(
                                                                                                                                new Coordinate({
                                                                                                                                  point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                                                                                                        new Billboard({
                                                                                                                          axisOfRotation : new SFVec3f([0,0,0]),
                                                                                                                          children : new MFNode([
                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new Text({
                                                                                                                                  string : new MFString(["77"]),
                                                                                                                                  fontStyle : new SFNode(
                                                                                                                                    new FontStyle({
                                                                                                                                      size : new SFFloat(0.035)}))}))})])})])}),

                                                                                                                    new Shape({
                                                                                                                      geometry : new SFNode(
                                                                                                                        new LineSet({
                                                                                                                          vertexCount : new MFInt32([2]),
                                                                                                                          color : new SFNode(
                                                                                                                            new ColorRGBA({
                                                                                                                              color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                                                                                          coord : new SFNode(
                                                                                                                            new Coordinate({
                                                                                                                              point : new MFVec3f([0.18164,0.68827,-0.03278,0.1819,0.72427,-0.005])}))}))})])}),

                                                                                                                new HAnimJoint({
                                                                                                                  name : new SFString("l_metacarpophalangeal_5"),
                                                                                                                  DEF : new SFString("hanim_l_metacarpophalangeal_5"),
                                                                                                                  center : new SFVec3f([0.1833,0.6381,-0.037]),
                                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimSegment({
                                                                                                                      name : new SFString("l_carpal_proximal_phalanx_5"),
                                                                                                                      DEF : new SFString("hanim_l_carpal_proximal_phalanx_5"),
                                                                                                                      children : new MFNode([
                                                                                                                        new Shape({
                                                                                                                          geometry : new SFNode(
                                                                                                                            new LineSet({
                                                                                                                              vertexCount : new MFInt32([2]),
                                                                                                                              color : new SFNode(
                                                                                                                                new ColorRGBA({
                                                                                                                                  color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                                                                                              coord : new SFNode(
                                                                                                                                new Coordinate({
                                                                                                                                  point : new MFVec3f([0.1833,0.6381,-0.037,0.18164,0.68827,-0.03278])}))}))})])}),

                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("l_carpal_proximal_interphalangeal_5"),
                                                                                                                      DEF : new SFString("hanim_l_carpal_proximal_interphalangeal_5"),
                                                                                                                      center : new SFVec3f([0.18166,0.621,-0.03715]),
                                                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimSegment({
                                                                                                                          name : new SFString("l_carpal_middle_phalanx_5"),
                                                                                                                          DEF : new SFString("hanim_l_carpal_middle_phalanx_5"),
                                                                                                                          children : new MFNode([
                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([0.18166,0.621,-0.03715,0.1833,0.6381,-0.037])}))}))})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("l_carpal_distal_interphalangeal_5"),
                                                                                                                          DEF : new SFString("hanim_l_carpal_distal_interphalangeal_5"),
                                                                                                                          center : new SFVec3f([0.1808,0.6023,-0.0369]),
                                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              name : new SFString("l_carpal_distal_phalanx_5"),
                                                                                                                              DEF : new SFString("hanim_l_carpal_distal_phalanx_5"),
                                                                                                                              children : new MFNode([
                                                                                                                                new HAnimSite({
                                                                                                                                  name : new SFString("l_carpal_distal_phalanx_5"),
                                                                                                                                  DEF : new SFString("hanim_l_carpal_distal_phalanx_5_tip"),
                                                                                                                                  translation : new SFVec3f([0.172,0.58,-0.039]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new TouchSensor({
                                                                                                                                      description : new SFString("HAnimSite 105 hanim_l_carpal_distal_phalanx_5_tip")}),

                                                                                                                                    new Shape({
                                                                                                                                      appearance : new SFNode(
                                                                                                                                        new Appearance({
                                                                                                                                          material : new SFNode(
                                                                                                                                            new Material({
                                                                                                                                              diffuseColor : new SFColor([1,1,1])}))})),
                                                                                                                                      geometry : new SFNode(
                                                                                                                                        new IndexedFaceSet({
                                                                                                                                          coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                                                          creaseAngle : new SFFloat(0.5),
                                                                                                                                          solid : new SFBool(false),
                                                                                                                                          color : new SFNode(
                                                                                                                                            new ColorRGBA({
                                                                                                                                              color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                                                                                                                          coord : new SFNode(
                                                                                                                                            new Coordinate({
                                                                                                                                              point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                                                                                                                    new Billboard({
                                                                                                                                      axisOfRotation : new SFVec3f([0,0,0]),
                                                                                                                                      children : new MFNode([
                                                                                                                                        new Shape({
                                                                                                                                          geometry : new SFNode(
                                                                                                                                            new Text({
                                                                                                                                              string : new MFString(["105"]),
                                                                                                                                              fontStyle : new SFNode(
                                                                                                                                                new FontStyle({
                                                                                                                                                  size : new SFFloat(0.035)}))}))})])})])}),

                                                                                                                                new Shape({
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new LineSet({
                                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                                      color : new SFNode(
                                                                                                                                        new ColorRGBA({
                                                                                                                                          color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          point : new MFVec3f([0.1808,0.6023,-0.0369,0.18166,0.621,-0.03715])}))}))})])})])})])})])})])})])})])})])})])})])}),

                                                                                        new HAnimJoint({
                                                                                          name : new SFString("r_sternoclavicular"),
                                                                                          DEF : new SFString("hanim_r_sternoclavicular"),
                                                                                          center : new SFVec3f([-0.03847,1.2087,-0.0138]),
                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                          children : new MFNode([
                                                                                            new HAnimSegment({
                                                                                              name : new SFString("r_clavicle"),
                                                                                              DEF : new SFString("hanim_r_clavicle"),
                                                                                              children : new MFNode([
                                                                                                new HAnimSite({
                                                                                                  name : new SFString("r_clavicale"),
                                                                                                  DEF : new SFString("hanim_r_clavicale_pt"),
                                                                                                  translation : new SFVec3f([-0.03,1.2,0.04]),
                                                                                                  children : new MFNode([
                                                                                                    new TouchSensor({
                                                                                                      description : new SFString("HAnimSite r_clavicale hanim_r_clavicale_pt")}),

                                                                                                    new Shape({
                                                                                                      appearance : new SFNode(
                                                                                                        new Appearance({
                                                                                                          material : new SFNode(
                                                                                                            new Material({
                                                                                                              diffuseColor : new SFColor([1,1,1])}))})),
                                                                                                      geometry : new SFNode(
                                                                                                        new IndexedFaceSet({
                                                                                                          coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                          creaseAngle : new SFFloat(0.5),
                                                                                                          solid : new SFBool(false),
                                                                                                          color : new SFNode(
                                                                                                            new ColorRGBA({
                                                                                                              color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                                                                                          coord : new SFNode(
                                                                                                            new Coordinate({
                                                                                                              point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                                                                                    new Billboard({
                                                                                                      axisOfRotation : new SFVec3f([0,0,0]),
                                                                                                      children : new MFNode([
                                                                                                        new Shape({
                                                                                                          geometry : new SFNode(
                                                                                                            new Text({
                                                                                                              string : new MFString(["r_clavicale"]),
                                                                                                              fontStyle : new SFNode(
                                                                                                                new FontStyle({
                                                                                                                  size : new SFFloat(0.035)}))}))})])})])}),

                                                                                                new Shape({
                                                                                                  geometry : new SFNode(
                                                                                                    new LineSet({
                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                      color : new SFNode(
                                                                                                        new ColorRGBA({
                                                                                                          color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                                                                      coord : new SFNode(
                                                                                                        new Coordinate({
                                                                                                          point : new MFVec3f([-0.03847,1.2087,-0.0138,0,1.22,-0.0138])}))}))})])}),

                                                                                            new HAnimJoint({
                                                                                              name : new SFString("r_acromioclavicular"),
                                                                                              DEF : new SFString("hanim_r_acromioclavicular"),
                                                                                              center : new SFVec3f([-0.1229,1.19182,-0.0129]),
                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                              llimit : new MFFloat([0,0,0]),
                                                                                              children : new MFNode([
                                                                                                new HAnimSegment({
                                                                                                  name : new SFString("r_scapula"),
                                                                                                  DEF : new SFString("hanim_r_scapula"),
                                                                                                  children : new MFNode([
                                                                                                    new HAnimSite({
                                                                                                      name : new SFString("r_acromion"),
                                                                                                      DEF : new SFString("hanim_r_acromion_pt"),
                                                                                                      translation : new SFVec3f([-0.15,1.222,-0.02]),
                                                                                                      children : new MFNode([
                                                                                                        new TouchSensor({
                                                                                                          description : new SFString("HAnimSite 20 hanim_r_acromion_pt")}),

                                                                                                        new Shape({
                                                                                                          appearance : new SFNode(
                                                                                                            new Appearance({
                                                                                                              material : new SFNode(
                                                                                                                new Material({
                                                                                                                  diffuseColor : new SFColor([1,1,1])}))})),
                                                                                                          geometry : new SFNode(
                                                                                                            new IndexedFaceSet({
                                                                                                              coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                              creaseAngle : new SFFloat(0.5),
                                                                                                              solid : new SFBool(false),
                                                                                                              color : new SFNode(
                                                                                                                new ColorRGBA({
                                                                                                                  color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                                                                                              coord : new SFNode(
                                                                                                                new Coordinate({
                                                                                                                  point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                                                                                        new Billboard({
                                                                                                          axisOfRotation : new SFVec3f([0,0,0]),
                                                                                                          children : new MFNode([
                                                                                                            new Shape({
                                                                                                              geometry : new SFNode(
                                                                                                                new Text({
                                                                                                                  string : new MFString(["20"]),
                                                                                                                  fontStyle : new SFNode(
                                                                                                                    new FontStyle({
                                                                                                                      size : new SFFloat(0.035)}))}))})])})])}),

                                                                                                    new HAnimSite({
                                                                                                      name : new SFString("r_axilla_proximal"),
                                                                                                      DEF : new SFString("hanim_r_axilla_proximal_pt"),
                                                                                                      translation : new SFVec3f([-0.15,1.16,0.04]),
                                                                                                      children : new MFNode([
                                                                                                        new TouchSensor({
                                                                                                          description : new SFString("HAnimSite 21 hanim_r_axilla_proximal_pt")}),

                                                                                                        new Shape({
                                                                                                          appearance : new SFNode(
                                                                                                            new Appearance({
                                                                                                              material : new SFNode(
                                                                                                                new Material({
                                                                                                                  diffuseColor : new SFColor([1,1,1])}))})),
                                                                                                          geometry : new SFNode(
                                                                                                            new IndexedFaceSet({
                                                                                                              coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                              creaseAngle : new SFFloat(0.5),
                                                                                                              solid : new SFBool(false),
                                                                                                              color : new SFNode(
                                                                                                                new ColorRGBA({
                                                                                                                  color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                                                                                              coord : new SFNode(
                                                                                                                new Coordinate({
                                                                                                                  point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                                                                                        new Billboard({
                                                                                                          axisOfRotation : new SFVec3f([0,0,0]),
                                                                                                          children : new MFNode([
                                                                                                            new Shape({
                                                                                                              geometry : new SFNode(
                                                                                                                new Text({
                                                                                                                  string : new MFString(["21"]),
                                                                                                                  fontStyle : new SFNode(
                                                                                                                    new FontStyle({
                                                                                                                      size : new SFFloat(0.035)}))}))})])})])}),

                                                                                                    new HAnimSite({
                                                                                                      name : new SFString("r_axilla_distal"),
                                                                                                      DEF : new SFString("hanim_r_axilla_distal_pt"),
                                                                                                      translation : new SFVec3f([-0.17,1.14,0]),
                                                                                                      children : new MFNode([
                                                                                                        new TouchSensor({
                                                                                                          description : new SFString("HAnimSite 22 hanim_r_axilla_distal_pt")}),

                                                                                                        new Shape({
                                                                                                          appearance : new SFNode(
                                                                                                            new Appearance({
                                                                                                              material : new SFNode(
                                                                                                                new Material({
                                                                                                                  diffuseColor : new SFColor([1,1,1])}))})),
                                                                                                          geometry : new SFNode(
                                                                                                            new IndexedFaceSet({
                                                                                                              coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                              creaseAngle : new SFFloat(0.5),
                                                                                                              solid : new SFBool(false),
                                                                                                              color : new SFNode(
                                                                                                                new ColorRGBA({
                                                                                                                  color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                                                                                              coord : new SFNode(
                                                                                                                new Coordinate({
                                                                                                                  point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                                                                                        new Billboard({
                                                                                                          axisOfRotation : new SFVec3f([0,0,0]),
                                                                                                          children : new MFNode([
                                                                                                            new Shape({
                                                                                                              geometry : new SFNode(
                                                                                                                new Text({
                                                                                                                  string : new MFString(["22"]),
                                                                                                                  fontStyle : new SFNode(
                                                                                                                    new FontStyle({
                                                                                                                      size : new SFFloat(0.035)}))}))})])})])}),

                                                                                                    new HAnimSite({
                                                                                                      name : new SFString("r_axilla_posterior_folds"),
                                                                                                      DEF : new SFString("hanim_r_axilla_posterior_folds_pt"),
                                                                                                      translation : new SFVec3f([-0.15,1.145,-0.04]),
                                                                                                      children : new MFNode([
                                                                                                        new TouchSensor({
                                                                                                          description : new SFString("HAnimSite 23 hanim_r_axilla_posterior_folds_pt")}),

                                                                                                        new Shape({
                                                                                                          appearance : new SFNode(
                                                                                                            new Appearance({
                                                                                                              material : new SFNode(
                                                                                                                new Material({
                                                                                                                  diffuseColor : new SFColor([1,1,1])}))})),
                                                                                                          geometry : new SFNode(
                                                                                                            new IndexedFaceSet({
                                                                                                              coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                              creaseAngle : new SFFloat(0.5),
                                                                                                              solid : new SFBool(false),
                                                                                                              color : new SFNode(
                                                                                                                new ColorRGBA({
                                                                                                                  color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                                                                                              coord : new SFNode(
                                                                                                                new Coordinate({
                                                                                                                  point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                                                                                        new Billboard({
                                                                                                          axisOfRotation : new SFVec3f([0,0,0]),
                                                                                                          children : new MFNode([
                                                                                                            new Shape({
                                                                                                              geometry : new SFNode(
                                                                                                                new Text({
                                                                                                                  string : new MFString(["23"]),
                                                                                                                  fontStyle : new SFNode(
                                                                                                                    new FontStyle({
                                                                                                                      size : new SFFloat(0.035)}))}))})])})])}),

                                                                                                    new Shape({
                                                                                                      geometry : new SFNode(
                                                                                                        new LineSet({
                                                                                                          vertexCount : new MFInt32([2]),
                                                                                                          color : new SFNode(
                                                                                                            new ColorRGBA({
                                                                                                              color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                                                                          coord : new SFNode(
                                                                                                            new Coordinate({
                                                                                                              point : new MFVec3f([-0.1229,1.19182,-0.0129,-0.03847,1.2087,-0.0138])}))}))})])}),

                                                                                                new HAnimJoint({
                                                                                                  name : new SFString("r_shoulder"),
                                                                                                  DEF : new SFString("hanim_r_shoulder"),
                                                                                                  center : new SFVec3f([-0.1647,1.17855,-0.00327]),
                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                                  children : new MFNode([
                                                                                                    new HAnimSegment({
                                                                                                      name : new SFString("r_upperarm"),
                                                                                                      DEF : new SFString("hanim_r_upperarm"),
                                                                                                      children : new MFNode([
                                                                                                        new HAnimSite({
                                                                                                          name : new SFString("r_humeral_lateral_epicondyle"),
                                                                                                          DEF : new SFString("hanim_r_humeral_lateral_epicondyle_pt"),
                                                                                                          translation : new SFVec3f([-0.2,0.95,-0.03]),
                                                                                                          children : new MFNode([
                                                                                                            new TouchSensor({
                                                                                                              description : new SFString("HAnimSite 66 hanim_r_humeral_lateral_epicondyle_pt")}),

                                                                                                            new Shape({
                                                                                                              appearance : new SFNode(
                                                                                                                new Appearance({
                                                                                                                  material : new SFNode(
                                                                                                                    new Material({
                                                                                                                      diffuseColor : new SFColor([1,1,1])}))})),
                                                                                                              geometry : new SFNode(
                                                                                                                new IndexedFaceSet({
                                                                                                                  coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                                  creaseAngle : new SFFloat(0.5),
                                                                                                                  solid : new SFBool(false),
                                                                                                                  color : new SFNode(
                                                                                                                    new ColorRGBA({
                                                                                                                      color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                                                                                                  coord : new SFNode(
                                                                                                                    new Coordinate({
                                                                                                                      point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                                                                                            new Billboard({
                                                                                                              axisOfRotation : new SFVec3f([0,0,0]),
                                                                                                              children : new MFNode([
                                                                                                                new Shape({
                                                                                                                  geometry : new SFNode(
                                                                                                                    new Text({
                                                                                                                      string : new MFString(["66"]),
                                                                                                                      fontStyle : new SFNode(
                                                                                                                        new FontStyle({
                                                                                                                          size : new SFFloat(0.035)}))}))})])})])}),

                                                                                                        new HAnimSite({
                                                                                                          name : new SFString("r_humeral_medial_epicondyle"),
                                                                                                          DEF : new SFString("hanim_r_humeral_medial_epicondyle_pt"),
                                                                                                          translation : new SFVec3f([-0.18,0.93,-0.03]),
                                                                                                          children : new MFNode([
                                                                                                            new TouchSensor({
                                                                                                              description : new SFString("HAnimSite 67 hanim_r_humeral_medial_epicondyle_pt")}),

                                                                                                            new Shape({
                                                                                                              appearance : new SFNode(
                                                                                                                new Appearance({
                                                                                                                  material : new SFNode(
                                                                                                                    new Material({
                                                                                                                      diffuseColor : new SFColor([1,1,1])}))})),
                                                                                                              geometry : new SFNode(
                                                                                                                new IndexedFaceSet({
                                                                                                                  coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                                  creaseAngle : new SFFloat(0.5),
                                                                                                                  solid : new SFBool(false),
                                                                                                                  color : new SFNode(
                                                                                                                    new ColorRGBA({
                                                                                                                      color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                                                                                                  coord : new SFNode(
                                                                                                                    new Coordinate({
                                                                                                                      point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                                                                                            new Billboard({
                                                                                                              axisOfRotation : new SFVec3f([0,0,0]),
                                                                                                              children : new MFNode([
                                                                                                                new Shape({
                                                                                                                  geometry : new SFNode(
                                                                                                                    new Text({
                                                                                                                      string : new MFString(["67"]),
                                                                                                                      fontStyle : new SFNode(
                                                                                                                        new FontStyle({
                                                                                                                          size : new SFFloat(0.035)}))}))})])})])}),

                                                                                                        new HAnimSite({
                                                                                                          name : new SFString("r_radiale"),
                                                                                                          DEF : new SFString("hanim_r_radiale_pt"),
                                                                                                          translation : new SFVec3f([-0.2,0.91,-0.03]),
                                                                                                          children : new MFNode([
                                                                                                            new TouchSensor({
                                                                                                              description : new SFString("HAnimSite 72 hanim_r_radiale_pt")}),

                                                                                                            new Shape({
                                                                                                              appearance : new SFNode(
                                                                                                                new Appearance({
                                                                                                                  material : new SFNode(
                                                                                                                    new Material({
                                                                                                                      diffuseColor : new SFColor([1,1,1])}))})),
                                                                                                              geometry : new SFNode(
                                                                                                                new IndexedFaceSet({
                                                                                                                  coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                                  creaseAngle : new SFFloat(0.5),
                                                                                                                  solid : new SFBool(false),
                                                                                                                  color : new SFNode(
                                                                                                                    new ColorRGBA({
                                                                                                                      color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                                                                                                  coord : new SFNode(
                                                                                                                    new Coordinate({
                                                                                                                      point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                                                                                            new Billboard({
                                                                                                              axisOfRotation : new SFVec3f([0,0,0]),
                                                                                                              children : new MFNode([
                                                                                                                new Shape({
                                                                                                                  geometry : new SFNode(
                                                                                                                    new Text({
                                                                                                                      string : new MFString(["72"]),
                                                                                                                      fontStyle : new SFNode(
                                                                                                                        new FontStyle({
                                                                                                                          size : new SFFloat(0.035)}))}))})])})])}),

                                                                                                        new HAnimSite({
                                                                                                          name : new SFString("r_bideltoid"),
                                                                                                          DEF : new SFString("hanim_r_bideltoid_pt"),
                                                                                                          translation : new SFVec3f([-0.225,1.185,0]),
                                                                                                          children : new MFNode([
                                                                                                            new TouchSensor({
                                                                                                              description : new SFString("HAnimSite 97 hanim_r_bideltoid_pt")}),

                                                                                                            new Shape({
                                                                                                              appearance : new SFNode(
                                                                                                                new Appearance({
                                                                                                                  material : new SFNode(
                                                                                                                    new Material({
                                                                                                                      diffuseColor : new SFColor([1,1,1])}))})),
                                                                                                              geometry : new SFNode(
                                                                                                                new IndexedFaceSet({
                                                                                                                  coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                                  creaseAngle : new SFFloat(0.5),
                                                                                                                  solid : new SFBool(false),
                                                                                                                  color : new SFNode(
                                                                                                                    new ColorRGBA({
                                                                                                                      color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                                                                                                  coord : new SFNode(
                                                                                                                    new Coordinate({
                                                                                                                      point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                                                                                            new Billboard({
                                                                                                              axisOfRotation : new SFVec3f([0,0,0]),
                                                                                                              children : new MFNode([
                                                                                                                new Shape({
                                                                                                                  geometry : new SFNode(
                                                                                                                    new Text({
                                                                                                                      string : new MFString(["97"]),
                                                                                                                      fontStyle : new SFNode(
                                                                                                                        new FontStyle({
                                                                                                                          size : new SFFloat(0.035)}))}))})])})])}),

                                                                                                        new Shape({
                                                                                                          geometry : new SFNode(
                                                                                                            new LineSet({
                                                                                                              vertexCount : new MFInt32([2]),
                                                                                                              color : new SFNode(
                                                                                                                new ColorRGBA({
                                                                                                                  color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                                                                              coord : new SFNode(
                                                                                                                new Coordinate({
                                                                                                                  point : new MFVec3f([-0.1647,1.17855,-0.00327,-0.1229,1.19182,-0.0129])}))}))})])}),

                                                                                                    new HAnimJoint({
                                                                                                      name : new SFString("r_elbow"),
                                                                                                      DEF : new SFString("hanim_r_elbow"),
                                                                                                      center : new SFVec3f([-0.1817,0.9288,-0.00564]),
                                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                                      children : new MFNode([
                                                                                                        new HAnimSegment({
                                                                                                          name : new SFString("r_forearm"),
                                                                                                          DEF : new SFString("hanim_r_forearm"),
                                                                                                          children : new MFNode([
                                                                                                            new HAnimSite({
                                                                                                              name : new SFString("r_radial_styloid"),
                                                                                                              DEF : new SFString("hanim_r_radial_styloid_pt"),
                                                                                                              translation : new SFVec3f([-0.18,0.725,0.025]),
                                                                                                              children : new MFNode([
                                                                                                                new TouchSensor({
                                                                                                                  description : new SFString("HAnimSite 74 hanim_r_radial_styloid_pt")}),

                                                                                                                new Shape({
                                                                                                                  appearance : new SFNode(
                                                                                                                    new Appearance({
                                                                                                                      material : new SFNode(
                                                                                                                        new Material({
                                                                                                                          diffuseColor : new SFColor([1,1,1])}))})),
                                                                                                                  geometry : new SFNode(
                                                                                                                    new IndexedFaceSet({
                                                                                                                      coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                                      creaseAngle : new SFFloat(0.5),
                                                                                                                      solid : new SFBool(false),
                                                                                                                      color : new SFNode(
                                                                                                                        new ColorRGBA({
                                                                                                                          color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                                                                                                      coord : new SFNode(
                                                                                                                        new Coordinate({
                                                                                                                          point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                                                                                                new Billboard({
                                                                                                                  axisOfRotation : new SFVec3f([0,0,0]),
                                                                                                                  children : new MFNode([
                                                                                                                    new Shape({
                                                                                                                      geometry : new SFNode(
                                                                                                                        new Text({
                                                                                                                          string : new MFString(["74"]),
                                                                                                                          fontStyle : new SFNode(
                                                                                                                            new FontStyle({
                                                                                                                              size : new SFFloat(0.035)}))}))})])})])}),

                                                                                                            new HAnimSite({
                                                                                                              name : new SFString("r_olecranon"),
                                                                                                              DEF : new SFString("hanim_r_olecranon_pt"),
                                                                                                              translation : new SFVec3f([-0.2,0.92,-0.03]),
                                                                                                              children : new MFNode([
                                                                                                                new TouchSensor({
                                                                                                                  description : new SFString("HAnimSite 68 hanim_r_olecranon_pt")}),

                                                                                                                new Shape({
                                                                                                                  appearance : new SFNode(
                                                                                                                    new Appearance({
                                                                                                                      material : new SFNode(
                                                                                                                        new Material({
                                                                                                                          diffuseColor : new SFColor([1,1,1])}))})),
                                                                                                                  geometry : new SFNode(
                                                                                                                    new IndexedFaceSet({
                                                                                                                      coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                                      creaseAngle : new SFFloat(0.5),
                                                                                                                      solid : new SFBool(false),
                                                                                                                      color : new SFNode(
                                                                                                                        new ColorRGBA({
                                                                                                                          color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                                                                                                      coord : new SFNode(
                                                                                                                        new Coordinate({
                                                                                                                          point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                                                                                                new Billboard({
                                                                                                                  axisOfRotation : new SFVec3f([0,0,0]),
                                                                                                                  children : new MFNode([
                                                                                                                    new Shape({
                                                                                                                      geometry : new SFNode(
                                                                                                                        new Text({
                                                                                                                          string : new MFString(["68"]),
                                                                                                                          fontStyle : new SFNode(
                                                                                                                            new FontStyle({
                                                                                                                              size : new SFFloat(0.035)}))}))})])})])}),

                                                                                                            new Shape({
                                                                                                              geometry : new SFNode(
                                                                                                                new LineSet({
                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                  color : new SFNode(
                                                                                                                    new ColorRGBA({
                                                                                                                      color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                                                                                  coord : new SFNode(
                                                                                                                    new Coordinate({
                                                                                                                      point : new MFVec3f([-0.1817,0.9288,-0.00564,-0.1647,1.17855,-0.00327])}))}))})])}),

                                                                                                        new HAnimJoint({
                                                                                                          name : new SFString("r_radiocarpal"),
                                                                                                          DEF : new SFString("hanim_r_radiocarpal"),
                                                                                                          center : new SFVec3f([-0.1816,0.7242,-0.005]),
                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                                          children : new MFNode([
                                                                                                            new HAnimSegment({
                                                                                                              name : new SFString("r_carpal"),
                                                                                                              DEF : new SFString("hanim_r_carpal"),
                                                                                                              children : new MFNode([
                                                                                                                new HAnimSite({
                                                                                                                  name : new SFString("r_ulnar_styloid"),
                                                                                                                  DEF : new SFString("hanim_r_ulnar_styloid_pt"),
                                                                                                                  translation : new SFVec3f([-0.2,0.725,0]),
                                                                                                                  children : new MFNode([
                                                                                                                    new TouchSensor({
                                                                                                                      description : new SFString("HAnimSite 73 hanim_r_ulnar_styloid_pt")}),

                                                                                                                    new Shape({
                                                                                                                      appearance : new SFNode(
                                                                                                                        new Appearance({
                                                                                                                          material : new SFNode(
                                                                                                                            new Material({
                                                                                                                              diffuseColor : new SFColor([1,1,1])}))})),
                                                                                                                      geometry : new SFNode(
                                                                                                                        new IndexedFaceSet({
                                                                                                                          coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                                          creaseAngle : new SFFloat(0.5),
                                                                                                                          solid : new SFBool(false),
                                                                                                                          color : new SFNode(
                                                                                                                            new ColorRGBA({
                                                                                                                              color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                                                                                                          coord : new SFNode(
                                                                                                                            new Coordinate({
                                                                                                                              point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                                                                                                    new Billboard({
                                                                                                                      axisOfRotation : new SFVec3f([0,0,0]),
                                                                                                                      children : new MFNode([
                                                                                                                        new Shape({
                                                                                                                          geometry : new SFNode(
                                                                                                                            new Text({
                                                                                                                              string : new MFString(["73"]),
                                                                                                                              fontStyle : new SFNode(
                                                                                                                                new FontStyle({
                                                                                                                                  size : new SFFloat(0.035)}))}))})])})])}),

                                                                                                                new Shape({
                                                                                                                  geometry : new SFNode(
                                                                                                                    new LineSet({
                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                      color : new SFNode(
                                                                                                                        new ColorRGBA({
                                                                                                                          color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                                                                                      coord : new SFNode(
                                                                                                                        new Coordinate({
                                                                                                                          point : new MFVec3f([-0.1816,0.7242,-0.005,-0.1817,0.9288,-0.00564])}))}))})])}),

                                                                                                            new HAnimJoint({
                                                                                                              name : new SFString("r_midcarpal_1"),
                                                                                                              DEF : new SFString("hanim_r_midcarpal_1"),
                                                                                                              center : new SFVec3f([-0.18097,0.70605,0.0193]),
                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                              llimit : new MFFloat([0,0,0]),
                                                                                                              children : new MFNode([
                                                                                                                new HAnimSegment({
                                                                                                                  name : new SFString("r_trapezium"),
                                                                                                                  DEF : new SFString("hanim_r_trapezium"),
                                                                                                                  children : new MFNode([
                                                                                                                    new Shape({
                                                                                                                      geometry : new SFNode(
                                                                                                                        new LineSet({
                                                                                                                          vertexCount : new MFInt32([2]),
                                                                                                                          color : new SFNode(
                                                                                                                            new ColorRGBA({
                                                                                                                              color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                                                                                          coord : new SFNode(
                                                                                                                            new Coordinate({
                                                                                                                              point : new MFVec3f([-0.18097,0.70605,0.0193,-0.1816,0.7242,-0.005])}))}))})])}),

                                                                                                                new HAnimJoint({
                                                                                                                  name : new SFString("r_carpometacarpal_1"),
                                                                                                                  DEF : new SFString("hanim_r_carpometacarpal_1"),
                                                                                                                  center : new SFVec3f([-0.18,0.69255,0.02598]),
                                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimSegment({
                                                                                                                      name : new SFString("r_metacarpal_1"),
                                                                                                                      DEF : new SFString("hanim_r_metacarpal_1"),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimSite({
                                                                                                                          name : new SFString("r_metacarpal_phalanx_2"),
                                                                                                                          DEF : new SFString("hanim_r_metacarpal_phalanx_2_pt"),
                                                                                                                          translation : new SFVec3f([-0.2,0.665,0.012]),
                                                                                                                          children : new MFNode([
                                                                                                                            new TouchSensor({
                                                                                                                              description : new SFString("HAnimSite 78 hanim_r_metacarpal_phalanx_2_pt")}),

                                                                                                                            new Shape({
                                                                                                                              appearance : new SFNode(
                                                                                                                                new Appearance({
                                                                                                                                  material : new SFNode(
                                                                                                                                    new Material({
                                                                                                                                      diffuseColor : new SFColor([1,1,1])}))})),
                                                                                                                              geometry : new SFNode(
                                                                                                                                new IndexedFaceSet({
                                                                                                                                  coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                                                  creaseAngle : new SFFloat(0.5),
                                                                                                                                  solid : new SFBool(false),
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                                                                                                            new Billboard({
                                                                                                                              axisOfRotation : new SFVec3f([0,0,0]),
                                                                                                                              children : new MFNode([
                                                                                                                                new Shape({
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new Text({
                                                                                                                                      string : new MFString(["78"]),
                                                                                                                                      fontStyle : new SFNode(
                                                                                                                                        new FontStyle({
                                                                                                                                          size : new SFFloat(0.035)}))}))})])})])}),

                                                                                                                        new Shape({
                                                                                                                          geometry : new SFNode(
                                                                                                                            new LineSet({
                                                                                                                              vertexCount : new MFInt32([2]),
                                                                                                                              color : new SFNode(
                                                                                                                                new ColorRGBA({
                                                                                                                                  color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                                                                                              coord : new SFNode(
                                                                                                                                new Coordinate({
                                                                                                                                  point : new MFVec3f([-0.18,0.69255,0.02598,-0.18097,0.70605,0.0193])}))}))})])}),

                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("r_metacarpophalangeal_1"),
                                                                                                                      DEF : new SFString("hanim_r_metacarpophalangeal_1"),
                                                                                                                      center : new SFVec3f([-0.18065,0.67275,0.03577]),
                                                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimSegment({
                                                                                                                          name : new SFString("r_carpal_proximal_phalanx_1"),
                                                                                                                          DEF : new SFString("hanim_r_carpal_proximal_phalanx_1"),
                                                                                                                          children : new MFNode([
                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([-0.18065,0.67275,0.03577,-0.18,0.69255,0.02598])}))}))})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("r_carpal_interphalangeal_1"),
                                                                                                                          DEF : new SFString("hanim_r_carpal_interphalangeal_1"),
                                                                                                                          center : new SFVec3f([-0.18227,0.654,0.0496]),
                                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              name : new SFString("r_carpal_distal_phalanx_1"),
                                                                                                                              DEF : new SFString("hanim_r_carpal_distal_phalanx_1"),
                                                                                                                              children : new MFNode([
                                                                                                                                new HAnimSite({
                                                                                                                                  name : new SFString("r_carpal_distal_phalanx_1"),
                                                                                                                                  DEF : new SFString("hanim_r_carpal_distal_phalanx_1_tip"),
                                                                                                                                  translation : new SFVec3f([-0.18,0.64,0.06]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new TouchSensor({
                                                                                                                                      description : new SFString("HAnimSite 106 hanim_r_carpal_distal_phalanx_1_tip")}),

                                                                                                                                    new Shape({
                                                                                                                                      appearance : new SFNode(
                                                                                                                                        new Appearance({
                                                                                                                                          material : new SFNode(
                                                                                                                                            new Material({
                                                                                                                                              diffuseColor : new SFColor([1,1,1])}))})),
                                                                                                                                      geometry : new SFNode(
                                                                                                                                        new IndexedFaceSet({
                                                                                                                                          coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                                                          creaseAngle : new SFFloat(0.5),
                                                                                                                                          solid : new SFBool(false),
                                                                                                                                          color : new SFNode(
                                                                                                                                            new ColorRGBA({
                                                                                                                                              color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                                                                                                                          coord : new SFNode(
                                                                                                                                            new Coordinate({
                                                                                                                                              point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                                                                                                                    new Billboard({
                                                                                                                                      axisOfRotation : new SFVec3f([0,0,0]),
                                                                                                                                      children : new MFNode([
                                                                                                                                        new Shape({
                                                                                                                                          geometry : new SFNode(
                                                                                                                                            new Text({
                                                                                                                                              string : new MFString(["106"]),
                                                                                                                                              fontStyle : new SFNode(
                                                                                                                                                new FontStyle({
                                                                                                                                                  size : new SFFloat(0.035)}))}))})])})])}),

                                                                                                                                new Shape({
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new LineSet({
                                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                                      color : new SFNode(
                                                                                                                                        new ColorRGBA({
                                                                                                                                          color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          point : new MFVec3f([-0.18227,0.654,0.0496,-0.18065,0.67275,0.03577])}))}))})])})])})])})])})])}),

                                                                                                            new HAnimJoint({
                                                                                                              name : new SFString("r_midcarpal_2"),
                                                                                                              DEF : new SFString("hanim_r_midcarpal_2"),
                                                                                                              center : new SFVec3f([-0.18097,0.70695,0.0084]),
                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                              llimit : new MFFloat([0,0,0]),
                                                                                                              children : new MFNode([
                                                                                                                new HAnimSegment({
                                                                                                                  name : new SFString("r_trapezoid"),
                                                                                                                  DEF : new SFString("hanim_r_trapezoid"),
                                                                                                                  children : new MFNode([
                                                                                                                    new Shape({
                                                                                                                      geometry : new SFNode(
                                                                                                                        new LineSet({
                                                                                                                          vertexCount : new MFInt32([2]),
                                                                                                                          color : new SFNode(
                                                                                                                            new ColorRGBA({
                                                                                                                              color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                                                                                          coord : new SFNode(
                                                                                                                            new Coordinate({
                                                                                                                              point : new MFVec3f([-0.18097,0.70695,0.0084,-0.1816,0.7242,-0.005])}))}))})])}),

                                                                                                                new HAnimJoint({
                                                                                                                  name : new SFString("r_carpometacarpal_2"),
                                                                                                                  DEF : new SFString("hanim_r_carpometacarpal_2"),
                                                                                                                  center : new SFVec3f([-0.1809,0.6876,0.0097]),
                                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimSegment({
                                                                                                                      name : new SFString("r_metacarpal_2"),
                                                                                                                      DEF : new SFString("hanim_r_metacarpal_2"),
                                                                                                                      children : new MFNode([
                                                                                                                        new Shape({
                                                                                                                          geometry : new SFNode(
                                                                                                                            new LineSet({
                                                                                                                              vertexCount : new MFInt32([2]),
                                                                                                                              color : new SFNode(
                                                                                                                                new ColorRGBA({
                                                                                                                                  color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                                                                                              coord : new SFNode(
                                                                                                                                new Coordinate({
                                                                                                                                  point : new MFVec3f([-0.1809,0.6876,0.0097,-0.18097,0.70695,0.0084])}))}))})])}),

                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("r_metacarpophalangeal_2"),
                                                                                                                      DEF : new SFString("hanim_r_metacarpophalangeal_2"),
                                                                                                                      center : new SFVec3f([-0.18335,0.6372,0.01507]),
                                                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimSegment({
                                                                                                                          name : new SFString("r_carpal_proximal_phalanx_2"),
                                                                                                                          DEF : new SFString("hanim_r_carpal_proximal_phalanx_2"),
                                                                                                                          children : new MFNode([
                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([-0.18335,0.6372,0.01507,-0.1809,0.6876,0.0097])}))}))})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("r_carpal_proximal_interphalangeal_2"),
                                                                                                                          DEF : new SFString("hanim_r_carpal_proximal_interphalangeal_2"),
                                                                                                                          center : new SFVec3f([-0.1813,0.6068,0.01418]),
                                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              name : new SFString("r_carpal_middle_phalanx_2"),
                                                                                                                              DEF : new SFString("hanim_r_carpal_middle_phalanx_2"),
                                                                                                                              children : new MFNode([
                                                                                                                                new Shape({
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new LineSet({
                                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                                      color : new SFNode(
                                                                                                                                        new ColorRGBA({
                                                                                                                                          color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          point : new MFVec3f([-0.1813,0.6068,0.01418,-0.18335,0.6372,0.01507])}))}))})])}),

                                                                                                                            new HAnimJoint({
                                                                                                                              name : new SFString("r_carpal_distal_interphalangeal_2"),
                                                                                                                              DEF : new SFString("hanim_r_carpal_distal_interphalangeal_2"),
                                                                                                                              center : new SFVec3f([-0.1803,0.5816,0.01338]),
                                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                                              llimit : new MFFloat([0,0,0]),
                                                                                                                              children : new MFNode([
                                                                                                                                new HAnimSegment({
                                                                                                                                  name : new SFString("r_carpal_distal_phalanx_2"),
                                                                                                                                  DEF : new SFString("hanim_r_carpal_distal_phalanx_2"),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new HAnimSite({
                                                                                                                                      name : new SFString("r_dactylion"),
                                                                                                                                      DEF : new SFString("hanim_r_dactylion_pt"),
                                                                                                                                      translation : new SFVec3f([-0.17,0.558,0.017]),
                                                                                                                                      children : new MFNode([
                                                                                                                                        new TouchSensor({
                                                                                                                                          description : new SFString("HAnimSite 61 hanim_r_dactylion_pt")}),

                                                                                                                                        new Shape({
                                                                                                                                          appearance : new SFNode(
                                                                                                                                            new Appearance({
                                                                                                                                              material : new SFNode(
                                                                                                                                                new Material({
                                                                                                                                                  diffuseColor : new SFColor([1,1,1])}))})),
                                                                                                                                          geometry : new SFNode(
                                                                                                                                            new IndexedFaceSet({
                                                                                                                                              coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                                                              creaseAngle : new SFFloat(0.5),
                                                                                                                                              solid : new SFBool(false),
                                                                                                                                              color : new SFNode(
                                                                                                                                                new ColorRGBA({
                                                                                                                                                  color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                                                                                                                              coord : new SFNode(
                                                                                                                                                new Coordinate({
                                                                                                                                                  point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                                                                                                                        new Billboard({
                                                                                                                                          axisOfRotation : new SFVec3f([0,0,0]),
                                                                                                                                          children : new MFNode([
                                                                                                                                            new Shape({
                                                                                                                                              geometry : new SFNode(
                                                                                                                                                new Text({
                                                                                                                                                  string : new MFString(["61"]),
                                                                                                                                                  fontStyle : new SFNode(
                                                                                                                                                    new FontStyle({
                                                                                                                                                      size : new SFFloat(0.035)}))}))})])})])}),

                                                                                                                                    new HAnimSite({
                                                                                                                                      name : new SFString("r_carpal_distal_phalanx_2"),
                                                                                                                                      DEF : new SFString("hanim_r_carpal_distal_phalanx_2_tip"),
                                                                                                                                      translation : new SFVec3f([-0.172,0.558,0.017]),
                                                                                                                                      children : new MFNode([
                                                                                                                                        new TouchSensor({
                                                                                                                                          description : new SFString("HAnimSite 107 hanim_r_carpal_distal_phalanx_2_tip")}),

                                                                                                                                        new Shape({
                                                                                                                                          appearance : new SFNode(
                                                                                                                                            new Appearance({
                                                                                                                                              material : new SFNode(
                                                                                                                                                new Material({
                                                                                                                                                  diffuseColor : new SFColor([1,1,1])}))})),
                                                                                                                                          geometry : new SFNode(
                                                                                                                                            new IndexedFaceSet({
                                                                                                                                              coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                                                              creaseAngle : new SFFloat(0.5),
                                                                                                                                              solid : new SFBool(false),
                                                                                                                                              color : new SFNode(
                                                                                                                                                new ColorRGBA({
                                                                                                                                                  color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                                                                                                                              coord : new SFNode(
                                                                                                                                                new Coordinate({
                                                                                                                                                  point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                                                                                                                        new Billboard({
                                                                                                                                          axisOfRotation : new SFVec3f([0,0,0]),
                                                                                                                                          children : new MFNode([
                                                                                                                                            new Shape({
                                                                                                                                              geometry : new SFNode(
                                                                                                                                                new Text({
                                                                                                                                                  string : new MFString(["107"]),
                                                                                                                                                  fontStyle : new SFNode(
                                                                                                                                                    new FontStyle({
                                                                                                                                                      size : new SFFloat(0.035)}))}))})])})])}),

                                                                                                                                    new Shape({
                                                                                                                                      geometry : new SFNode(
                                                                                                                                        new LineSet({
                                                                                                                                          vertexCount : new MFInt32([2]),
                                                                                                                                          color : new SFNode(
                                                                                                                                            new ColorRGBA({
                                                                                                                                              color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                                                                                                          coord : new SFNode(
                                                                                                                                            new Coordinate({
                                                                                                                                              point : new MFVec3f([-0.1803,0.5816,0.01338,-0.1813,0.6068,0.01418])}))}))})])})])})])})])})])})])}),

                                                                                                            new HAnimJoint({
                                                                                                              name : new SFString("r_midcarpal_3"),
                                                                                                              DEF : new SFString("hanim_r_midcarpal_3"),
                                                                                                              center : new SFVec3f([-0.18072,0.708525,-0.004797]),
                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                              llimit : new MFFloat([0,0,0]),
                                                                                                              children : new MFNode([
                                                                                                                new HAnimSegment({
                                                                                                                  name : new SFString("r_capitate"),
                                                                                                                  DEF : new SFString("hanim_r_capitate"),
                                                                                                                  children : new MFNode([
                                                                                                                    new Shape({
                                                                                                                      geometry : new SFNode(
                                                                                                                        new LineSet({
                                                                                                                          vertexCount : new MFInt32([2]),
                                                                                                                          color : new SFNode(
                                                                                                                            new ColorRGBA({
                                                                                                                              color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                                                                                          coord : new SFNode(
                                                                                                                            new Coordinate({
                                                                                                                              point : new MFVec3f([-0.18072,0.708525,-0.004797,-0.1816,0.7242,-0.005])}))}))})])}),

                                                                                                                new HAnimJoint({
                                                                                                                  name : new SFString("r_carpometacarpal_3"),
                                                                                                                  DEF : new SFString("hanim_r_carpometacarpal_3"),
                                                                                                                  center : new SFVec3f([-0.18072,0.6858,-0.00625]),
                                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimSegment({
                                                                                                                      name : new SFString("r_metacarpal_3"),
                                                                                                                      DEF : new SFString("hanim_r_metacarpal_3"),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimSite({
                                                                                                                          name : new SFString("r_metacarpal_phalanx_3"),
                                                                                                                          DEF : new SFString("hanim_r_metacarpal_phalanx_3_pt"),
                                                                                                                          translation : new SFVec3f([-0.2,0.665,0.016]),
                                                                                                                          children : new MFNode([
                                                                                                                            new TouchSensor({
                                                                                                                              description : new SFString("HAnimSite 79 hanim_r_metacarpal_phalanx_3_pt")}),

                                                                                                                            new Shape({
                                                                                                                              appearance : new SFNode(
                                                                                                                                new Appearance({
                                                                                                                                  material : new SFNode(
                                                                                                                                    new Material({
                                                                                                                                      diffuseColor : new SFColor([1,1,1])}))})),
                                                                                                                              geometry : new SFNode(
                                                                                                                                new IndexedFaceSet({
                                                                                                                                  coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                                                  creaseAngle : new SFFloat(0.5),
                                                                                                                                  solid : new SFBool(false),
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                                                                                                            new Billboard({
                                                                                                                              axisOfRotation : new SFVec3f([0,0,0]),
                                                                                                                              children : new MFNode([
                                                                                                                                new Shape({
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new Text({
                                                                                                                                      string : new MFString(["79"]),
                                                                                                                                      fontStyle : new SFNode(
                                                                                                                                        new FontStyle({
                                                                                                                                          size : new SFFloat(0.035)}))}))})])})])}),

                                                                                                                        new Shape({
                                                                                                                          geometry : new SFNode(
                                                                                                                            new LineSet({
                                                                                                                              vertexCount : new MFInt32([2]),
                                                                                                                              color : new SFNode(
                                                                                                                                new ColorRGBA({
                                                                                                                                  color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                                                                                              coord : new SFNode(
                                                                                                                                new Coordinate({
                                                                                                                                  point : new MFVec3f([-0.18072,0.6858,-0.00625,-0.18072,0.708525,-0.004797])}))}))})])}),

                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("r_metacarpophalangeal_3"),
                                                                                                                      DEF : new SFString("hanim_r_metacarpophalangeal_3"),
                                                                                                                      center : new SFVec3f([-0.1833,0.63495,-0.0039]),
                                                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimSegment({
                                                                                                                          name : new SFString("r_carpal_proximal_phalanx_3"),
                                                                                                                          DEF : new SFString("hanim_r_carpal_proximal_phalanx_3"),
                                                                                                                          children : new MFNode([
                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([-0.1833,0.63495,-0.0039,-0.18072,0.6858,-0.00625])}))}))})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("r_carpal_proximal_interphalangeal_3"),
                                                                                                                          DEF : new SFString("hanim_r_carpal_proximal_interphalangeal_3"),
                                                                                                                          center : new SFVec3f([-0.1813,0.6032,-0.0035]),
                                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              name : new SFString("r_carpal_middle_phalanx_3"),
                                                                                                                              DEF : new SFString("hanim_r_carpal_middle_phalanx_3"),
                                                                                                                              children : new MFNode([
                                                                                                                                new Shape({
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new LineSet({
                                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                                      color : new SFNode(
                                                                                                                                        new ColorRGBA({
                                                                                                                                          color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          point : new MFVec3f([-0.1813,0.6032,-0.0035,-0.1833,0.63495,-0.0039])}))}))})])}),

                                                                                                                            new HAnimJoint({
                                                                                                                              name : new SFString("r_carpal_distal_interphalangeal_3"),
                                                                                                                              DEF : new SFString("hanim_r_carpal_distal_interphalangeal_3"),
                                                                                                                              center : new SFVec3f([-0.18029,0.5753,-0.00375]),
                                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                                              llimit : new MFFloat([0,0,0]),
                                                                                                                              children : new MFNode([
                                                                                                                                new HAnimSegment({
                                                                                                                                  name : new SFString("r_carpal_distal_phalanx_3"),
                                                                                                                                  DEF : new SFString("hanim_r_carpal_distal_phalanx_3"),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new HAnimSite({
                                                                                                                                      name : new SFString("r_carpal_distal_phalanx_3"),
                                                                                                                                      DEF : new SFString("hanim_r_carpal_distal_phalanx_3_tip"),
                                                                                                                                      translation : new SFVec3f([-0.17,0.555,-0.006]),
                                                                                                                                      children : new MFNode([
                                                                                                                                        new TouchSensor({
                                                                                                                                          description : new SFString("HAnimSite 108 hanim_r_carpal_distal_phalanx_3_tip")}),

                                                                                                                                        new Shape({
                                                                                                                                          appearance : new SFNode(
                                                                                                                                            new Appearance({
                                                                                                                                              material : new SFNode(
                                                                                                                                                new Material({
                                                                                                                                                  diffuseColor : new SFColor([1,1,1])}))})),
                                                                                                                                          geometry : new SFNode(
                                                                                                                                            new IndexedFaceSet({
                                                                                                                                              coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                                                              creaseAngle : new SFFloat(0.5),
                                                                                                                                              solid : new SFBool(false),
                                                                                                                                              color : new SFNode(
                                                                                                                                                new ColorRGBA({
                                                                                                                                                  color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                                                                                                                              coord : new SFNode(
                                                                                                                                                new Coordinate({
                                                                                                                                                  point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                                                                                                                        new Billboard({
                                                                                                                                          axisOfRotation : new SFVec3f([0,0,0]),
                                                                                                                                          children : new MFNode([
                                                                                                                                            new Shape({
                                                                                                                                              geometry : new SFNode(
                                                                                                                                                new Text({
                                                                                                                                                  string : new MFString(["108"]),
                                                                                                                                                  fontStyle : new SFNode(
                                                                                                                                                    new FontStyle({
                                                                                                                                                      size : new SFFloat(0.035)}))}))})])})])}),

                                                                                                                                    new Shape({
                                                                                                                                      geometry : new SFNode(
                                                                                                                                        new LineSet({
                                                                                                                                          vertexCount : new MFInt32([2]),
                                                                                                                                          color : new SFNode(
                                                                                                                                            new ColorRGBA({
                                                                                                                                              color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                                                                                                          coord : new SFNode(
                                                                                                                                            new Coordinate({
                                                                                                                                              point : new MFVec3f([-0.18029,0.5753,-0.00375,-0.1813,0.6032,-0.0035])}))}))})])})])})])})])})])})])}),

                                                                                                            new HAnimJoint({
                                                                                                              name : new SFString("r_midcarpal_4_5"),
                                                                                                              DEF : new SFString("hanim_r_midcarpal_4_5"),
                                                                                                              center : new SFVec3f([-0.18072,0.70583,-0.02574]),
                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                              llimit : new MFFloat([0,0,0]),
                                                                                                              children : new MFNode([
                                                                                                                new HAnimSegment({
                                                                                                                  name : new SFString("r_hamate"),
                                                                                                                  DEF : new SFString("hanim_r_hamate"),
                                                                                                                  children : new MFNode([
                                                                                                                    new Shape({
                                                                                                                      geometry : new SFNode(
                                                                                                                        new LineSet({
                                                                                                                          vertexCount : new MFInt32([2]),
                                                                                                                          color : new SFNode(
                                                                                                                            new ColorRGBA({
                                                                                                                              color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                                                                                          coord : new SFNode(
                                                                                                                            new Coordinate({
                                                                                                                              point : new MFVec3f([-0.18072,0.70583,-0.02574,-0.1816,0.7242,-0.005])}))}))})])}),

                                                                                                                new HAnimJoint({
                                                                                                                  name : new SFString("r_carpometacarpal_4"),
                                                                                                                  DEF : new SFString("hanim_r_carpometacarpal_4"),
                                                                                                                  center : new SFVec3f([-0.18072,0.68625,-0.01992]),
                                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimSegment({
                                                                                                                      name : new SFString("r_metacarpal_4"),
                                                                                                                      DEF : new SFString("hanim_r_metacarpal_4"),
                                                                                                                      children : new MFNode([
                                                                                                                        new Shape({
                                                                                                                          geometry : new SFNode(
                                                                                                                            new LineSet({
                                                                                                                              vertexCount : new MFInt32([2]),
                                                                                                                              color : new SFNode(
                                                                                                                                new ColorRGBA({
                                                                                                                                  color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                                                                                              coord : new SFNode(
                                                                                                                                new Coordinate({
                                                                                                                                  point : new MFVec3f([-0.18072,0.68625,-0.01992,-0.18072,0.70583,-0.02574])}))}))})])}),

                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("r_metacarpophalangeal_4"),
                                                                                                                      DEF : new SFString("hanim_r_metacarpophalangeal_4"),
                                                                                                                      center : new SFVec3f([-0.1833,0.63405,-0.02144]),
                                                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimSegment({
                                                                                                                          name : new SFString("r_carpal_proximal_phalanx_4"),
                                                                                                                          DEF : new SFString("hanim_r_carpal_proximal_phalanx_4"),
                                                                                                                          children : new MFNode([
                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([-0.1833,0.63405,-0.02144,-0.18072,0.68625,-0.01992])}))}))})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("r_carpal_proximal_interphalangeal_4"),
                                                                                                                          DEF : new SFString("hanim_r_carpal_proximal_interphalangeal_4"),
                                                                                                                          center : new SFVec3f([-0.1813,0.6066,-0.02064]),
                                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              name : new SFString("r_carpal_middle_phalanx_4"),
                                                                                                                              DEF : new SFString("hanim_r_carpal_middle_phalanx_4"),
                                                                                                                              children : new MFNode([
                                                                                                                                new Shape({
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new LineSet({
                                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                                      color : new SFNode(
                                                                                                                                        new ColorRGBA({
                                                                                                                                          color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          point : new MFVec3f([-0.1813,0.6066,-0.02064,-0.1833,0.63405,-0.02144])}))}))})])}),

                                                                                                                            new HAnimJoint({
                                                                                                                              name : new SFString("r_carpal_distal_interphalangeal_4"),
                                                                                                                              DEF : new SFString("hanim_r_carpal_distal_interphalangeal_4"),
                                                                                                                              center : new SFVec3f([-0.18029,0.5807,-0.01978]),
                                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                                              llimit : new MFFloat([0,0,0]),
                                                                                                                              children : new MFNode([
                                                                                                                                new HAnimSegment({
                                                                                                                                  name : new SFString("r_carpal_distal_phalanx_4"),
                                                                                                                                  DEF : new SFString("hanim_r_carpal_distal_phalanx_4"),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new HAnimSite({
                                                                                                                                      name : new SFString("r_carpal_distal_phalanx_4"),
                                                                                                                                      DEF : new SFString("hanim_r_carpal_distal_phalanx_4_tip"),
                                                                                                                                      translation : new SFVec3f([-0.172,0.559,-0.024]),
                                                                                                                                      children : new MFNode([
                                                                                                                                        new TouchSensor({
                                                                                                                                          description : new SFString("HAnimSite 109 hanim_r_carpal_distal_phalanx_4_tip")}),

                                                                                                                                        new Shape({
                                                                                                                                          appearance : new SFNode(
                                                                                                                                            new Appearance({
                                                                                                                                              material : new SFNode(
                                                                                                                                                new Material({
                                                                                                                                                  diffuseColor : new SFColor([1,1,1])}))})),
                                                                                                                                          geometry : new SFNode(
                                                                                                                                            new IndexedFaceSet({
                                                                                                                                              coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                                                              creaseAngle : new SFFloat(0.5),
                                                                                                                                              solid : new SFBool(false),
                                                                                                                                              color : new SFNode(
                                                                                                                                                new ColorRGBA({
                                                                                                                                                  color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                                                                                                                              coord : new SFNode(
                                                                                                                                                new Coordinate({
                                                                                                                                                  point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                                                                                                                        new Billboard({
                                                                                                                                          axisOfRotation : new SFVec3f([0,0,0]),
                                                                                                                                          children : new MFNode([
                                                                                                                                            new Shape({
                                                                                                                                              geometry : new SFNode(
                                                                                                                                                new Text({
                                                                                                                                                  string : new MFString(["109"]),
                                                                                                                                                  fontStyle : new SFNode(
                                                                                                                                                    new FontStyle({
                                                                                                                                                      size : new SFFloat(0.035)}))}))})])})])}),

                                                                                                                                    new Shape({
                                                                                                                                      geometry : new SFNode(
                                                                                                                                        new LineSet({
                                                                                                                                          vertexCount : new MFInt32([2]),
                                                                                                                                          color : new SFNode(
                                                                                                                                            new ColorRGBA({
                                                                                                                                              color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                                                                                                          coord : new SFNode(
                                                                                                                                            new Coordinate({
                                                                                                                                              point : new MFVec3f([-0.18029,0.5807,-0.01978,-0.1813,0.6066,-0.02064])}))}))})])})])})])})])})])})])}),

                                                                                                            new HAnimJoint({
                                                                                                              name : new SFString("r_carpometacarpal_5"),
                                                                                                              DEF : new SFString("hanim_r_carpometacarpal_5"),
                                                                                                              center : new SFVec3f([-0.18126,0.68827,-0.03278]),
                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                              llimit : new MFFloat([0,0,0]),
                                                                                                              children : new MFNode([
                                                                                                                new HAnimSegment({
                                                                                                                  name : new SFString("r_metacarpal_5"),
                                                                                                                  DEF : new SFString("hanim_r_metacarpal_5"),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimSite({
                                                                                                                      name : new SFString("r_metacarpal_phalanx_5"),
                                                                                                                      DEF : new SFString("hanim_r_metacarpal_phalanx_5_pt"),
                                                                                                                      translation : new SFVec3f([-0.2,0.665,-0.036]),
                                                                                                                      children : new MFNode([
                                                                                                                        new TouchSensor({
                                                                                                                          description : new SFString("HAnimSite 80 hanim_r_metacarpal_phalanx_5_pt")}),

                                                                                                                        new Shape({
                                                                                                                          appearance : new SFNode(
                                                                                                                            new Appearance({
                                                                                                                              material : new SFNode(
                                                                                                                                new Material({
                                                                                                                                  diffuseColor : new SFColor([1,1,1])}))})),
                                                                                                                          geometry : new SFNode(
                                                                                                                            new IndexedFaceSet({
                                                                                                                              coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                                              creaseAngle : new SFFloat(0.5),
                                                                                                                              solid : new SFBool(false),
                                                                                                                              color : new SFNode(
                                                                                                                                new ColorRGBA({
                                                                                                                                  color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                                                                                                              coord : new SFNode(
                                                                                                                                new Coordinate({
                                                                                                                                  point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                                                                                                        new Billboard({
                                                                                                                          axisOfRotation : new SFVec3f([0,0,0]),
                                                                                                                          children : new MFNode([
                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new Text({
                                                                                                                                  string : new MFString(["80"]),
                                                                                                                                  fontStyle : new SFNode(
                                                                                                                                    new FontStyle({
                                                                                                                                      size : new SFFloat(0.035)}))}))})])})])}),

                                                                                                                    new Shape({
                                                                                                                      geometry : new SFNode(
                                                                                                                        new LineSet({
                                                                                                                          vertexCount : new MFInt32([2]),
                                                                                                                          color : new SFNode(
                                                                                                                            new ColorRGBA({
                                                                                                                              color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                                                                                          coord : new SFNode(
                                                                                                                            new Coordinate({
                                                                                                                              point : new MFVec3f([-0.18126,0.68827,-0.03278,-0.1816,0.7242,-0.005])}))}))})])}),

                                                                                                                new HAnimJoint({
                                                                                                                  name : new SFString("r_metacarpophalangeal_5"),
                                                                                                                  DEF : new SFString("hanim_r_metacarpophalangeal_5"),
                                                                                                                  center : new SFVec3f([-0.18297,0.6381,-0.0371]),
                                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimSegment({
                                                                                                                      name : new SFString("r_carpal_proximal_phalanx_5"),
                                                                                                                      DEF : new SFString("hanim_r_carpal_proximal_phalanx_5"),
                                                                                                                      children : new MFNode([
                                                                                                                        new Shape({
                                                                                                                          geometry : new SFNode(
                                                                                                                            new LineSet({
                                                                                                                              vertexCount : new MFInt32([2]),
                                                                                                                              color : new SFNode(
                                                                                                                                new ColorRGBA({
                                                                                                                                  color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                                                                                              coord : new SFNode(
                                                                                                                                new Coordinate({
                                                                                                                                  point : new MFVec3f([-0.18297,0.6381,-0.0371,-0.18126,0.68827,-0.03278])}))}))})])}),

                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("r_carpal_proximal_interphalangeal_5"),
                                                                                                                      DEF : new SFString("hanim_r_carpal_proximal_interphalangeal_5"),
                                                                                                                      center : new SFVec3f([-0.1813,0.621,-0.03715]),
                                                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimSegment({
                                                                                                                          name : new SFString("r_carpal_middle_phalanx_5"),
                                                                                                                          DEF : new SFString("hanim_r_carpal_middle_phalanx_5"),
                                                                                                                          children : new MFNode([
                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([-0.1813,0.621,-0.03715,-0.18297,0.6381,-0.0371])}))}))})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("r_carpal_distal_interphalangeal_5"),
                                                                                                                          DEF : new SFString("hanim_r_carpal_distal_interphalangeal_5"),
                                                                                                                          center : new SFVec3f([-0.18045,0.602325,-0.03697]),
                                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              name : new SFString("r_carpal_distal_phalanx_5"),
                                                                                                                              DEF : new SFString("hanim_r_carpal_distal_phalanx_5"),
                                                                                                                              children : new MFNode([
                                                                                                                                new HAnimSite({
                                                                                                                                  name : new SFString("r_carpal_distal_phalanx_5"),
                                                                                                                                  DEF : new SFString("hanim_r_carpal_distal_phalanx_5_tip"),
                                                                                                                                  translation : new SFVec3f([-0.172,0.58,-0.039]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new TouchSensor({
                                                                                                                                      description : new SFString("HAnimSite 110 hanim_r_carpal_distal_phalanx_5_tip")}),

                                                                                                                                    new Shape({
                                                                                                                                      appearance : new SFNode(
                                                                                                                                        new Appearance({
                                                                                                                                          material : new SFNode(
                                                                                                                                            new Material({
                                                                                                                                              diffuseColor : new SFColor([1,1,1])}))})),
                                                                                                                                      geometry : new SFNode(
                                                                                                                                        new IndexedFaceSet({
                                                                                                                                          coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                                                          creaseAngle : new SFFloat(0.5),
                                                                                                                                          solid : new SFBool(false),
                                                                                                                                          color : new SFNode(
                                                                                                                                            new ColorRGBA({
                                                                                                                                              color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                                                                                                                                          coord : new SFNode(
                                                                                                                                            new Coordinate({
                                                                                                                                              point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}),

                                                                                                                                    new Billboard({
                                                                                                                                      axisOfRotation : new SFVec3f([0,0,0]),
                                                                                                                                      children : new MFNode([
                                                                                                                                        new Shape({
                                                                                                                                          geometry : new SFNode(
                                                                                                                                            new Text({
                                                                                                                                              string : new MFString(["110"]),
                                                                                                                                              fontStyle : new SFNode(
                                                                                                                                                new FontStyle({
                                                                                                                                                  size : new SFFloat(0.035)}))}))})])})])}),

                                                                                                                                new Shape({
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new LineSet({
                                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                                      color : new SFNode(
                                                                                                                                        new ColorRGBA({
                                                                                                                                          color : new MFColorRGBA([1,1,0,1,1,1,0,1])})),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          point : new MFVec3f([-0.18045,0.602325,-0.03697,-0.1813,0.621,-0.03715])}))}))})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])}),

            new NavigationInfo({
              headlight : new SFBool(false)}),

            new Background({
              DEF : new SFString("Background1"),
              groundColor : new MFColor([0.5,0.5,0.5]),
              skyColor : new MFColor([0.4,0.4,0.4])}),

            new DirectionalLight({
              global : new SFBool(true)}),

            new Viewpoint({
              centerOfRotation : new SFVec3f([0,1,0]),
              description : new SFString("JinLOA4"),
              position : new SFVec3f([0,1,3])}),

            new Transform({
              DEF : new SFString("Landmark000"),
              /*Another Parent Scene 0 0 0 landmark*/
              child : new SFNode(
                new Shape({
                  DEF : new SFString("HAnim000Landmark"),
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({
                          diffuseColor : new SFColor([0,1,0]),
                          emissiveColor : new SFColor([0,1,0])}))})),
                  geometry : new SFNode(
                    new Sphere({
                      radius : new SFFloat(0.01)}))}))})])}))});
console.log(X3D0.toXMLNode());
